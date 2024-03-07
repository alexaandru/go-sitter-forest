// Copyright (C) 2023 Colin Kennedy
// This file is part of tree-sitter-disassembly <https://github.com/ColinKennedy/tree-sitter-disassembly>.
//
// tree-sitter-disassembly is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// tree-sitter-disassembly is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with tree-sitter-disassembly, see <http://www.gnu.org/licenses/>.

#include "parser.h"

#include <wctype.h>

enum TokenType {
    CODE_IDENTIFIER,
    ASSEMBLY_INSTRUCTION,
    MEMORY_DUMP,
    ERROR_SENTINEL,
};


static unsigned int EXPECTED_BYTES_COUNT = 0;
static unsigned int EXPECTED_BYTES_WIDTH = 0;


/// \brief A description of a memory dump, including statistics and correctness.
///
/// It tracks:
/// - While scanning for memory dump data, how many characters were found
/// - Do we think this output is a valid memory dump
///
struct MemoryDumpResult
{
    unsigned int times_iterated;
    bool is_valid;
};


/// \brief Check if `character` is part of a hexadecimal string or byte.
///
/// \param character Any letter to check.
/// \return If `character` is a hexadecimal, return `true`.
///
static bool is_hexadecimal_character(char character) {
    switch (character) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
            return true;
        default:
            return false;
    }
}


/// \brief Check if `character` is (-)0-9 numeric.
///
/// \param character Any letter to check.
/// \return If `character` is a number, return `true`.
///
static bool is_number_character(char character) {
    switch (character) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '-':
            return true;
        default:
            return false;
    }
}


static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static bool scan_code_identifier(TSLexer *lexer);
static void scan_memory_dump(TSLexer *lexer, bool possibly_in_jump_target, struct MemoryDumpResult *result);


/// \brief Count the number of hexadecimal bytes that `lexer` has.
///
/// \param lexer
///     The scanner used parse for bytes.
/// \param characters_per_byte
///     An extremely important value which indicates how many characters should
///     be in each found byte. You acquire this value by matching a previous
///     byte (because we assume that all hexadecimal bytes in a given line are
///     the same width / count-per-byte).
/// \return
///     0-or-more bytes that were found.
///
static unsigned int look_ahead_for_bytes(TSLexer *lexer, unsigned int characters_per_byte)
{
    bool in_whitespace = false;
    unsigned int current_count = 0;
    unsigned int total_count = 0;

    while (true)
    {
        if (lexer->lookahead == '\n' || lexer->eof(lexer))
        {
            // Reached the end of the line / file. No matter what state we're in, stop
            break;
        }

        if (iswspace(lexer->lookahead))
        {
            if (!in_whitespace)
            {
                if (current_count != characters_per_byte)
                {
                    // Found non-byte assembly instruction
                    break;
                }
                else if (!in_whitespace)
                {
                    // If we aren't just repeating whitespace then that means that
                    // a hexadecimal just ended. So we must add it to the total
                    // hexadecimal count.
                    //
                    ++total_count;
                }

                in_whitespace = true;
                current_count = 0;
            }
        }
        else if (is_hexadecimal_character(lexer->lookahead))
        {
            ++current_count;
            in_whitespace = false;
        }
        else
        {
            break;
        }

        advance(lexer);
    }

    return total_count;
}


/// \brief Check if the lexer is looking at an Assembly instruction.
///
/// The main variants to look out for are
///
/// 0x400601 <__libc_csu_init+33>   sub    %r12,%rbp  # 0x1234 <more_stuff>
/// 0x400601 11 22 33 44            sub    %r12,%rbp  # 0x1234 <more_stuff>
/// 0x400601                        nop
///
/// The logic of this function is roughly
///
/// - Keep track of states that can help make parsing other things easier (see below)
/// - If the first non-whitespace character is '<', we're not an an Assembly instruction
///     - But could be in a memory dump
///     - Otherwise if the '<' is not the first a character
///         - Check if it's an assembly instruction jump + label or a memory dump
/// - If "(bad)" is found, the Assembly instruction is malformed.
///     - (bad_instruction) grammar rule already exists. So we just return `false`
/// - If '#' is found, it means these possibilities
///     - The Assembly instruction has ended (and a comment begins)
///     - An ARM register was found (if so, keep going. We're still in an Assembly instruction)
///
/// Important States:
///     - EXPECTED_BYTES_COUNT
///         - When parsing, if a hexadecimal byte is found ...
///             - Scan ahead to find all bytes. Store this count in EXPECTED_BYTES_COUNT
///         - Later, when checking "is the a memory dump or an assembly instruction", refer back to
///           EXPECTED_BYTES_COUNT. A memory dump's length must match EXPECTED_BYTES_COUNT
///     - EXPECTED_BYTES_WIDTH
///         - x86_64 tends to show bytes as 2 values at a time. e.g. `01 fa ab`, etc.
///         - ARM may show bytes 2/4/8 values at a time. e.g. `01fa abab 1001`, etc.
///         - Instructions like `addb` can be mistaken as a byte
///         - Despite the differing conventions, one constant is this:
///             - Per-line, every byte is always the same width (there's no
///             2-byte and 4-byte in the same line)
///         - Using the above assumption, `EXPECTED_BYTES_WIDTH` exists
///
///         - If a hexadecimal byte is found and `EXPECTED_BYTES_WIDTH` is unset
///             - Set it once and remember it for the rest of the line
///         - Once the line completes, set it back to 0
///         - A hexadecimal is not "found" unless it satisfies `EXPECTED_BYTES_WIDTH`
///
/// \param lexer The current position in a parse.
/// \return If an Assembly instruction was found, return `true`.
///
static bool scan_assembly_instruction(TSLexer *lexer) {
    bool has_text = false;
    bool has_space = false;  // (We don't count any leading space. Just space after the first non-whitespace)
    bool has_period = false;
    unsigned int times_iterated = 0;
    bool is_maybe_bad_instruction = true;
    bool is_maybe_a_byte = true;
    unsigned int hexadecimal_count = 0;
    bool possibly_need_to_exit = false;
    bool possibly_in_jump_target = false;

    unsigned int offset_counter = 0;
    char bad_instruction[] = "(bad)";
    unsigned int const size = (sizeof(bad_instruction) / sizeof(char) - 1);

    if (lexer->lookahead == ':')
    {
        // No instruction contains ':' by convention.
        return false;
    }

    while (true) {
        if (has_text)
        {
            ++times_iterated;
        }

        if (lexer->lookahead == '.')
        {
            has_period = true;

            // Disassembly doesn't contain dots. Assembly does, they're
            // conventionally used as section labels like .debug, .text, etc.
            // But disassembled instructions point to raw addresses so if we
            // encounter a '.', we're probably in a disassembly memory dump.
            //
            // It's not a guarantee though. For example this disassembly has a '.'
            //
            // 40045b:       e9 d0 ff ff ff          jmpq   400430 <.plt>
            //
            // Either way, delegate the rest of the parsing to the specialist function.

            struct MemoryDumpResult result;
            scan_memory_dump(lexer, possibly_in_jump_target, &result);

            if (!result.is_valid)
            {
                // If it's not a memory dump then it must be an instruction
                lexer->mark_end(lexer);
                lexer->result_symbol = ASSEMBLY_INSTRUCTION;

                EXPECTED_BYTES_COUNT = 0;
                EXPECTED_BYTES_WIDTH = 0;

                return false;
            }

            bool matches = (times_iterated + result.times_iterated + 1) == EXPECTED_BYTES_COUNT;
            EXPECTED_BYTES_COUNT = 0;
            EXPECTED_BYTES_WIDTH = 0;

            if (matches)
            {
                // We almost definitely found a memory dump. The column counts match!
                return true;
            }

            // We almost definitely found an assembly instruction because the columns don't match
            lexer->mark_end(lexer);
            lexer->result_symbol = ASSEMBLY_INSTRUCTION;

            return true;
        }
        else if (possibly_in_jump_target)
        {
            // Jump targets typically contain `<.foo>` so we can safely ignore
            // the possibility if a non '.' is found.
            //
            // 40045b:       e9 d0 ff ff ff          jmpq   400430 <.plt>
            //
            possibly_in_jump_target = false;
        }

        if (lexer->lookahead == '<') {
            if (!has_text)
            {
                // We're either
                //
                // 1. Inside of a code location or something other than an Assembly instruction
                // 2. It could be a a disassembly memory dump like `0x0001 aa bb cc 00 <...`
                //
                // #1 must return false, #2 must return true. So we just test both, here.
                //
                struct MemoryDumpResult result;
                scan_memory_dump(lexer, possibly_in_jump_target, &result);

                if (!result.is_valid)
                {
                    EXPECTED_BYTES_COUNT = 0;
                    EXPECTED_BYTES_WIDTH = 0;

                    return false;
                }

                bool matches = (times_iterated + result.times_iterated + 1) == EXPECTED_BYTES_COUNT;
                EXPECTED_BYTES_COUNT = 0;
                EXPECTED_BYTES_WIDTH = 0;

                return matches;
            }
            else
            {
                // Could be a jump target. Remember this possibility for later checks.
                //
                // 40045b:       e9 d0 ff ff ff          jmpq   400430 <.plt>
                //
                // A jump target being the `<.plt>` part of the line above.
                //
                possibly_in_jump_target = true;
            }
        }

        if (lexer->lookahead == '\n' || lexer->eof(lexer)) {
            if ((has_period || !has_space) && times_iterated == EXPECTED_BYTES_COUNT)
            {
                EXPECTED_BYTES_WIDTH = 0;

                // Important: We're guessing here. It's a good guess but it
                // might be the source of parsing bugs later
                //
                lexer->mark_end(lexer);
                lexer->result_symbol = MEMORY_DUMP;

                return true;
            }

            EXPECTED_BYTES_COUNT = 0;
            EXPECTED_BYTES_WIDTH = 0;

            if (possibly_need_to_exit)
            {
                // If we're at the end of the line / file and we already
                // thought that we needed to exit...
                //
                // 1. Assume that any required `lexer->mark_end(lexer)` is done
                // 2. Also assume `lexer->result_symbol = FOO` is already done.
                // 3. Just exit as-is.
                //
                return has_text;
            }

            // The line ended. Stop scanning the instruction
            lexer->mark_end(lexer);
            lexer->result_symbol = ASSEMBLY_INSTRUCTION;

            return has_text;
        }

        if (possibly_need_to_exit)
        {
            if (!is_number_character(lexer->lookahead) || lexer->eof(lexer))
            {
                // If this happens, it means a comment was already encountered.
                //
                // Important: We assume by this point that
                // `lexer->mark_end(lexer);` was already written in a previous
                // iteration.

                EXPECTED_BYTES_COUNT = 0;
                EXPECTED_BYTES_WIDTH = 0;

                return has_text;
            }

            possibly_need_to_exit = false;
        }

        if (lexer->lookahead == '#')
        {
            // We encountered either
            //
            // 1. The start of a comment (most commonly the case)
            // 2. Part of an Arm instruction register. e.g. `ldr r4, [pc, #20]`
            //
            // Since we can't be sure of either yet, keep going but just in
            // case mark this point as the latest end so if it is a comment,
            // we're ready to exit as soon as we know for sure.
            //
            lexer->mark_end(lexer);
            lexer->result_symbol = ASSEMBLY_INSTRUCTION;
            possibly_need_to_exit = true;
        }

        if (lexer->lookahead == ';') {
            // The start of a comment was found. Stop scanning.
            //
            // Unlike '#' based comments, no Assembly convention uses ; to mean anything
            // other than comments. So we can safely exit.
            //
            lexer->mark_end(lexer);
            lexer->result_symbol = ASSEMBLY_INSTRUCTION;
            EXPECTED_BYTES_COUNT = 0;
            EXPECTED_BYTES_WIDTH = 0;

            return has_text;
        }

        bool is_whitespace = iswspace(lexer->lookahead);

        if (is_whitespace)
        {
            if (has_text)
            {
                // There's at least one space in the output (We don't count any leading space)
                has_space = true;
            }

            if (is_maybe_a_byte && EXPECTED_BYTES_WIDTH == 0)
            {
                // A hexadecimal `(machine_code_byte) (byte))` was found but
                // `EXPECTED_BYTES_WIDTH` is uninitialized. Initialize
                // `EXPECTED_BYTES_WIDTH` so it can be used later.
                //
                EXPECTED_BYTES_WIDTH = times_iterated;
            }
        }

        if (!is_whitespace) {
            if (is_maybe_bad_instruction && (lexer->lookahead == bad_instruction[offset_counter])) {
                // Check if we've encountered a reserved `(bad)` instruction.
                if ((offset_counter + 1) == size) {
                    // We found "(bad)", which is not a valid assembly instruction
                    EXPECTED_BYTES_COUNT = 0;

                    return false;
                }

                ++offset_counter;
            } else {
                // We thought we could be in a `(bad)` instruction but just
                // confirmed that we aren't, so stop checking.
                //
                is_maybe_bad_instruction = false;
                offset_counter = 0;
            }

            if (hexadecimal_count >= 8) {
                // When this happens, we've encountered an Assembly instruction
                // that looked like it might have been a hexadecimal. For
                // example the `ad` in `add` could be a hexadecimal but isn't
                //
                // If we have reached this part of the code, now we know for sure that
                // it is not a hexadecimal.
                //
                is_maybe_a_byte = false;
            } else if (is_maybe_a_byte) {
                // Keep checking for more hexadecimal characters because we aren't yet
                // sure if we're looking at a hexadecimal or an Assembly instruction
                //
                if (is_hexadecimal_character(lexer->lookahead)) {
                    // A found non-whitespace, hexadecimal character means we
                    // might be in a hexadecimal. Keep going
                    //
                    ++hexadecimal_count;
                } else {
                    // A found non-whitespace, non-hexadecimal character means
                    // that the previous characters cannot possibly belong to
                    // a hexadecimal so discard those prior results.
                    //
                    hexadecimal_count = 0;
                    is_maybe_a_byte = false;
                }
            }

            has_text = true;
        }
        else if (is_maybe_a_byte && (EXPECTED_BYTES_WIDTH != 0 && hexadecimal_count == EXPECTED_BYTES_WIDTH))
        {
            // We've found a hexadecimal byte.
            skip(lexer);
            unsigned int found = look_ahead_for_bytes(lexer, hexadecimal_count) + 1;

            if (found > EXPECTED_BYTES_COUNT)
            {
                // *** Special state-related logic here.
                //
                // When the first byte in a line is found, we scan forward,
                // counting all bytes that were found. Immediately after bytes,
                // we expect to encounter an Assembly instruction or a memory
                // dump. The memory dump's width (nearly always) must match the
                // number of bytes that preceed it so, to help us make sure
                // we're matching that count, we save the number of bytes found
                // here and clear the number of bytes once we know we've
                // encountered the end of a line.
                //
                // It's a bit complicated but is an invaluable piece of data to track.
                //
                EXPECTED_BYTES_COUNT = found;
            }

            // We found at least one byte so we aren't in an Assembly
            // instruction. Stop searching
            //
            return false;
        }

        advance(lexer);
    }

    return false;
}

/// \brief Check for a memory address by-name.
///
/// Disassembly tends to write lines like this
///
/// 0x400601 <__libc_csu_init+33>   sub    %r12,%rbp
///
/// Where `<__libc_csu_init+33>` is a memory location + an additional byte offset
/// and `__libc_csu_init+33` is consiered the actual start & end of the code location.
///
/// \param lexer The scanner used parse for a code location.
/// \return If the address is valid, return `true`.
///
static bool scan_code_identifier(TSLexer *lexer)
{
    bool has_number_data = false;
    bool has_text = false;
    bool is_maybe_at_end = false;
    bool possibly_in_next_number_token = false;

    while (true) {
        if (lexer->lookahead == '\n' || lexer->eof(lexer)) {
            // Reached the end. Wrap up this function.
            lexer->result_symbol = CODE_IDENTIFIER;

            return has_text;
        }

        if (possibly_in_next_number_token) {
            // We might be in the `33` part of `__libc_csu_init+33`. Check for it

            if (is_number_character(lexer->lookahead)) {
                has_number_data = true;
            } else {
                // Reached the end of the (possibly) hexadecimal data
                possibly_in_next_number_token = false;
            }
        }

        if (is_maybe_at_end && lexer->lookahead != '\n' && iswspace(lexer->lookahead)) {
            // We assume that, following a > or + character, there cannot be whitespace.
            // If there is whitespace then that means we've reached the end of the match
            // and it's time to exit
            //
            lexer->result_symbol = CODE_IDENTIFIER;

            return has_text;
        }

        switch (lexer->lookahead) {
            case ';':
            case '#':
                // We've reached the end of the instruction and the start of a comment
                lexer->result_symbol = CODE_IDENTIFIER;

                return has_text;
            case '+':
                // There's 2 possibilities.
                //
                // 1. We've reached the end of the code location.
                // 2. We're still inside, and the `+` is part of a code signature still.
                //     a. e.g. `std::ostream::operator+(int)+10`.
                //        The first `+` is not an offset but part of the signature.
                //
                // Not sure which, just yet. Mark as unsure and continue.
                //
                lexer->mark_end(lexer);

                possibly_in_next_number_token = true;
                is_maybe_at_end = true;

                break;
            case '>':
                // There's 2 possibilities.
                //
                // 1. We've reached the end of the code location.
                // 2. We're still inside, and the `>` is part of a code signature still.
                //     a. e.g. `std::ostream::operator>>(SomeClass)+30`.
                //        The first 2 `>` are not indicating the end of a code location.
                //        They are part of the signature.
                //
                // Not sure which, just yet. Mark as unsure and continue.
                //
                if (!has_number_data && !possibly_in_next_number_token) {
                    // We might have reached the end. Or it could be some kind of
                    // C++ operator>>() signature. Not sure which, just yet
                    //
                    lexer->mark_end(lexer);
                }

                is_maybe_at_end = true;

                break;
            default:
                // If all other cases fail, we must still be within the middle
                // of the code location.
                //
                is_maybe_at_end = false;

                break;
        }

        advance(lexer);
        has_text = true;
    }

    return has_text;
}


/// \brief Check if `lexer` is starting or within a disassembly memory dump.
///
/// \param lexer
///     The scanner used parse for memory text.
/// \param possibly_in_jump_target
///     Sometimes this function is triggered heuristically whenever a `'.'` is
///     found. A `'.'` is rare but not impossible to happen in disassembly so,
///     if `true`, it means "we might be in a memory dump or an assembly
///     instruction that looks like it could be a memory dump". If `false` then
///     it means we're definitely in a memory dump and now we just need to know
///     what the last character of the memory dump is.
///
static void scan_memory_dump(
    TSLexer *lexer,
    bool possibly_in_jump_target,
    struct MemoryDumpResult *result
)
{
    unsigned int times_iterated = 0;
    char previous_character = '\0';

    while (true) {
        previous_character = lexer->lookahead;
        advance(lexer);

        if (lexer->lookahead == '\n' || lexer->eof(lexer))
        {
            if (possibly_in_jump_target && previous_character == '>')
            {
                // We were in a jump target the whole time! Such as...
                //
                // 40045b:       e9 d0 ff ff ff          jmpq   400430 <.plt>
                //
                lexer->mark_end(lexer);
                lexer->result_symbol = ASSEMBLY_INSTRUCTION;

                result->is_valid = true;
                result->times_iterated = times_iterated;

                return;
            }

            // The line ended. Stop scanning
            lexer->mark_end(lexer);
            lexer->result_symbol = MEMORY_DUMP;

            result->is_valid = true;
            result->times_iterated = times_iterated;

            return;
        }

        ++times_iterated;
    }

    // This section shouldn't be reachable. But just in case, default to `false`.
    result->is_valid = false;
    result->times_iterated = times_iterated;

    return;
}


void *tree_sitter_disassembly_external_scanner_create() { return NULL; }

void tree_sitter_disassembly_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

void tree_sitter_disassembly_external_scanner_destroy(void *payload) {}

/// \brief Tree-sitter's parsing entry point. Parse the disassembly, with `lexer`.
bool tree_sitter_disassembly_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[ERROR_SENTINEL]) {
        return false;
        // return scan_assembly_instruction(lexer);
    }

    if (valid_symbols[CODE_IDENTIFIER]) {
        return scan_code_identifier(lexer);
    }

    if (valid_symbols[ASSEMBLY_INSTRUCTION]) {
        return scan_assembly_instruction(lexer);
    }

    return false;
}

unsigned tree_sitter_disassembly_external_scanner_serialize(void *payload, char *buffer) { return 0; }

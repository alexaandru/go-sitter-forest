#include "array.h"
#include "parser.h"

#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

enum TokenType {
    NEWLINE,
    INDENT,
    DEDENT,
    STRING_START,
    STRING_CONTENT,
    ESCAPE_INTERPOLATION,
    STRING_END,
    COMMENT,
    CLOSE_PAREN,
    CLOSE_BRACKET,
    CLOSE_BRACE,
    EXCEPT,
    ALLOW_WC_DEF,
    ALLOW_WC_INTERP,
    DISALLOW_WC,
    WILDCARD_DEF_OPEN,
    WILDCARD_INTERP_OPEN,
};

typedef enum { NONE, DEFINITION, INTERPOLATION } AllowWildcard;

typedef enum {
    SingleQuote = 1 << 0,
    DoubleQuote = 1 << 1,
    BackQuote = 1 << 2,
    Raw = 1 << 3,
    Format = 1 << 4,
    Triple = 1 << 5,
    Bytes = 1 << 6,
} Flags;

typedef struct {
    char flags;
} Delimiter;

static inline Delimiter new_delimiter() { return (Delimiter){0}; }

static inline bool is_format(Delimiter *delimiter) { return delimiter->flags & Format; }

static inline bool is_raw(Delimiter *delimiter) { return delimiter->flags & Raw; }

static inline bool is_triple(Delimiter *delimiter) { return delimiter->flags & Triple; }

static inline bool is_bytes(Delimiter *delimiter) { return delimiter->flags & Bytes; }

static inline int32_t end_character(Delimiter *delimiter) {
    if (delimiter->flags & SingleQuote) {
        return '\'';
    }
    if (delimiter->flags & DoubleQuote) {
        return '"';
    }
    if (delimiter->flags & BackQuote) {
        return '`';
    }
    return 0;
}

static inline void set_format(Delimiter *delimiter) { delimiter->flags |= Format; }

static inline void set_raw(Delimiter *delimiter) { delimiter->flags |= Raw; }

static inline void set_triple(Delimiter *delimiter) { delimiter->flags |= Triple; }

static inline void set_bytes(Delimiter *delimiter) { delimiter->flags |= Bytes; }

static inline void set_end_character(Delimiter *delimiter, int32_t character) {
    switch (character) {
        case '\'':
            delimiter->flags |= SingleQuote;
            break;
        case '"':
            delimiter->flags |= DoubleQuote;
            break;
        case '`':
            delimiter->flags |= BackQuote;
            break;
        default:
            assert(false);
    }
}

typedef struct {
    Array(uint16_t) indents;
    Array(Delimiter) delimiters;
    AllowWildcard allow_wc;
    bool inside_f_string;
} Scanner;


// Opening bracket for wildcard interpolation
static bool parse_wc_interp_open(TSLexer *lexer, const bool *valid_symbols, bool has_content) {
    // Encountered '{' as next symbol and a wildcard interpolation is allowed
    lexer->mark_end(lexer);
    lexer->advance_snakemake(lexer, false);
    if (lexer->lookahead == '{') {
        // Double {{ -> escaped.
        lexer->advance_snakemake(lexer, false);
        lexer->mark_end(lexer);
        lexer->result_symbol = STRING_CONTENT;
        return true;
    } else {
        lexer->result_symbol = WILDCARD_INTERP_OPEN;
        return true;
    }
}


// Opening bracket for wildcard definition
static bool parse_wc_def_open(
        TSLexer *lexer,
        const bool *valid_symbols,
        bool has_content,
        int32_t end_character) {
    // Encountered '{' as next symbol and a wildcard definition is allowed
    // Consume additional { - only the last one opens a wildcard.
    lexer->mark_end(lexer);
    lexer->advance_snakemake(lexer, false);
    while (lexer->lookahead == '{' && lexer->lookahead != end_character && !lexer->eof(lexer)) {
        lexer->mark_end(lexer);
        lexer->advance_snakemake(lexer, false);
        has_content = true;
    }
    if (has_content) {
        lexer->result_symbol = STRING_CONTENT;
    } else {
        // Found an opening brace
        if (lexer->lookahead == '}') {
            // empty braces -> not a wildcard
            lexer->mark_end(lexer);
            lexer->advance_snakemake(lexer, false);
            lexer->result_symbol = STRING_CONTENT;
        } else {
            // braces have content -> wildcard
            lexer->result_symbol = WILDCARD_DEF_OPEN;
            lexer->advance_snakemake(lexer, false);
        }
    }
    return true;
}

static inline void advance_snakemake(TSLexer *lexer) { lexer->advance_snakemake(lexer, false); }

static inline void skip_snakemake(TSLexer *lexer) { lexer->advance_snakemake(lexer, true); }

bool tree_sitter_snakemake_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    Scanner *scanner = (Scanner *)payload;

    bool error_recovery_mode = valid_symbols[STRING_CONTENT] && valid_symbols[INDENT];
    bool within_brackets = valid_symbols[CLOSE_BRACE] || valid_symbols[CLOSE_PAREN] || valid_symbols[CLOSE_BRACKET];

    // Set flag if and which wildcards are allowed. Affects string parsing.
    if (valid_symbols[ALLOW_WC_DEF]) {
        scanner->allow_wc = DEFINITION;
        lexer->result_symbol = ALLOW_WC_DEF;
        if (!error_recovery_mode) {
            return true;
        }
    }
    if (valid_symbols[ALLOW_WC_INTERP]) {
        scanner->allow_wc = INTERPOLATION;
        lexer->result_symbol = ALLOW_WC_INTERP;
        if (!error_recovery_mode) {
            return true;
        }
    }
    if (valid_symbols[DISALLOW_WC]) {
        scanner->allow_wc = NONE;
        lexer->result_symbol = DISALLOW_WC;
        if (!error_recovery_mode) {
            return true;
        }
    }

    bool advanced_once = false;
    if (valid_symbols[ESCAPE_INTERPOLATION] && scanner->allow_wc == NONE && scanner->delimiters.size > 0 &&
        (lexer->lookahead == '{' || lexer->lookahead == '}') && !error_recovery_mode) {
        Delimiter *delimiter = array_back(&scanner->delimiters);
        if (is_format(delimiter)) {
            lexer->mark_end(lexer);
            bool is_left_brace = lexer->lookahead == '{';
            advance_snakemake(lexer);
            advanced_once = true;
            if ((lexer->lookahead == '{' && is_left_brace) || (lexer->lookahead == '}' && !is_left_brace)) {
                advance_snakemake(lexer);
                lexer->mark_end(lexer);
                lexer->result_symbol = ESCAPE_INTERPOLATION;
                return true;
            }
            return false;
        }
    }

    if (valid_symbols[STRING_CONTENT] && scanner->delimiters.size > 0 && !error_recovery_mode) {
        Delimiter *delimiter = array_back(&scanner->delimiters);
        int32_t end_char = end_character(delimiter);
        bool has_content = advanced_once;
        while (lexer->lookahead) {
            if (advanced_once || lexer->lookahead == '{' || lexer->lookahead == '}') {
                // How brackets are handled depends on two factors:
                // 1. Are we in a format string?
                // 2. Are wildcards allowed?
                if (is_format(delimiter)) {
                    // Format string: no wildcards allowed
                    lexer->mark_end(lexer);
                    lexer->result_symbol = STRING_CONTENT;
                    return has_content;
                } else if (scanner->allow_wc == INTERPOLATION && lexer->lookahead == '{') {
                    return parse_wc_interp_open(lexer, valid_symbols, has_content);
                } else if (scanner->allow_wc == DEFINITION && lexer->lookahead == '{') {
                    return parse_wc_def_open(lexer, valid_symbols, has_content, end_char);
                }
            }
            if (lexer->lookahead == '\\') {
                if (is_raw(delimiter)) {
                    // Step over the backslash.
                    advance_snakemake(lexer);
                    // Step over any escaped quotes.
                    if (lexer->lookahead == end_character(delimiter) || lexer->lookahead == '\\') {
                        advance_snakemake(lexer);
                    }
                    // Step over newlines
                    if (lexer->lookahead == '\r') {
                        advance_snakemake(lexer);
                        if (lexer->lookahead == '\n') {
                            advance_snakemake(lexer);
                        }
                    } else if (lexer->lookahead == '\n') {
                        advance_snakemake(lexer);
                    }
                    continue;
                }
                if (is_bytes(delimiter)) {
                    lexer->mark_end(lexer);
                    advance_snakemake(lexer);
                    if (lexer->lookahead == 'N' || lexer->lookahead == 'u' || lexer->lookahead == 'U') {
                        // In bytes string, \N{...}, \uXXXX and \UXXXXXXXX are
                        // not escape sequences
                        // https://docs.python.org/3/reference/lexical_analysis.html#string-and-bytes-literals
                        advance_snakemake(lexer);
                    } else {
                        lexer->result_symbol = STRING_CONTENT;
                        return has_content;
                    }
                } else {
                    lexer->mark_end(lexer);
                    lexer->result_symbol = STRING_CONTENT;
                    return has_content;
                }
            } else if (lexer->lookahead == end_char) {
                if (is_triple(delimiter)) {
                    lexer->mark_end(lexer);
                    advance_snakemake(lexer);
                    if (lexer->lookahead == end_char) {
                        advance_snakemake(lexer);
                        if (lexer->lookahead == end_char) {
                            if (has_content) {
                                lexer->result_symbol = STRING_CONTENT;
                            } else {
                                advance_snakemake(lexer);
                                lexer->mark_end(lexer);
                                array_pop(&scanner->delimiters);
                                lexer->result_symbol = STRING_END;
                                scanner->inside_f_string = false;
                            }
                            return true;
                        }
                        lexer->mark_end(lexer);
                        lexer->result_symbol = STRING_CONTENT;
                        return true;
                    }
                    lexer->mark_end(lexer);
                    lexer->result_symbol = STRING_CONTENT;
                    return true;
                }
                if (has_content) {
                    lexer->result_symbol = STRING_CONTENT;
                } else {
                    advance_snakemake(lexer);
                    array_pop(&scanner->delimiters);
                    lexer->result_symbol = STRING_END;
                    scanner->inside_f_string = false;
                }
                lexer->mark_end(lexer);
                return true;

            } else if (lexer->lookahead == '\n' && has_content && !is_triple(delimiter)) {
                return false;
            }
            advance_snakemake(lexer);
            has_content = true;
        }
    }

    lexer->mark_end(lexer);

    bool found_end_of_line = false;
    uint32_t indent_length = 0;
    int32_t first_comment_indent_length = -1;
    for (;;) {
        if (lexer->lookahead == '\n') {
            found_end_of_line = true;
            indent_length = 0;
            skip_snakemake(lexer);
        } else if (lexer->lookahead == ' ') {
            indent_length++;
            skip_snakemake(lexer);
        } else if (lexer->lookahead == '\r' || lexer->lookahead == '\f') {
            indent_length = 0;
            skip_snakemake(lexer);
        } else if (lexer->lookahead == '\t') {
            indent_length += 8;
            skip_snakemake(lexer);
        } else if (lexer->lookahead == '#' && (valid_symbols[INDENT] || valid_symbols[DEDENT] ||
                                               valid_symbols[NEWLINE] || valid_symbols[EXCEPT])) {
            // If we haven't found an EOL yet,
            // then this is a comment after an expression:
            //   foo = bar # comment
            // Just return, since we don't want to generate an indent/dedent
            // token.
            if (!found_end_of_line) {
                return false;
            }
            if (first_comment_indent_length == -1) {
                first_comment_indent_length = (int32_t)indent_length;
            }
            while (lexer->lookahead && lexer->lookahead != '\n') {
                skip_snakemake(lexer);
            }
            skip_snakemake(lexer);
            indent_length = 0;
        } else if (lexer->lookahead == '\\') {
            skip_snakemake(lexer);
            if (lexer->lookahead == '\r') {
                skip_snakemake(lexer);
            }
            if (lexer->lookahead == '\n' || lexer->eof(lexer)) {
                skip_snakemake(lexer);
            } else {
                return false;
            }
        } else if (lexer->eof(lexer)) {
            indent_length = 0;
            found_end_of_line = true;
            break;
        } else {
            break;
        }
    }

    if (found_end_of_line) {
        if (scanner->indents.size > 0) {
            uint16_t current_indent_length = *array_back(&scanner->indents);

            if (valid_symbols[INDENT] && indent_length > current_indent_length) {
                array_push(&scanner->indents, indent_length);
                lexer->result_symbol = INDENT;
                return true;
            }

            bool next_tok_is_string_start =
                lexer->lookahead == '\"' || lexer->lookahead == '\'' || lexer->lookahead == '`';

            if ((valid_symbols[DEDENT] ||
                 (!valid_symbols[NEWLINE] && !(valid_symbols[STRING_START] && next_tok_is_string_start) &&
                  !within_brackets)) &&
                indent_length < current_indent_length && !scanner->inside_f_string &&

                // Wait to create a dedent token until we've consumed any
                // comments
                // whose indentation matches the current block.
                first_comment_indent_length < (int32_t)current_indent_length) {
                array_pop(&scanner->indents);
                lexer->result_symbol = DEDENT;
                return true;
            }
        }

        if (valid_symbols[NEWLINE] && !error_recovery_mode) {
            lexer->result_symbol = NEWLINE;
            return true;
        }
    }

    if (first_comment_indent_length == -1 && valid_symbols[STRING_START]) {
        Delimiter delimiter = new_delimiter();

        bool has_flags = false;
        while (lexer->lookahead) {
            if (lexer->lookahead == 'f' || lexer->lookahead == 'F') {
                set_format(&delimiter);
            } else if (lexer->lookahead == 'r' || lexer->lookahead == 'R') {
                set_raw(&delimiter);
            } else if (lexer->lookahead == 'b' || lexer->lookahead == 'B') {
                set_bytes(&delimiter);
            } else if (lexer->lookahead != 'u' && lexer->lookahead != 'U') {
                break;
            }
            has_flags = true;
            advance_snakemake(lexer);
        }

        if (lexer->lookahead == '`') {
            set_end_character(&delimiter, '`');
            advance_snakemake(lexer);
            lexer->mark_end(lexer);
        } else if (lexer->lookahead == '\'') {
            set_end_character(&delimiter, '\'');
            advance_snakemake(lexer);
            lexer->mark_end(lexer);
            if (lexer->lookahead == '\'') {
                advance_snakemake(lexer);
                if (lexer->lookahead == '\'') {
                    advance_snakemake(lexer);
                    lexer->mark_end(lexer);
                    set_triple(&delimiter);
                }
            }
        } else if (lexer->lookahead == '"') {
            set_end_character(&delimiter, '"');
            advance_snakemake(lexer);
            lexer->mark_end(lexer);
            if (lexer->lookahead == '"') {
                advance_snakemake(lexer);
                if (lexer->lookahead == '"') {
                    advance_snakemake(lexer);
                    lexer->mark_end(lexer);
                    set_triple(&delimiter);
                }
            }
        }

        if (end_character(&delimiter)) {
            array_push(&scanner->delimiters, delimiter);
            lexer->result_symbol = STRING_START;
            scanner->inside_f_string = is_format(&delimiter);
            return true;
        }
        if (has_flags) {
            return false;
        }
    }

    return false;
}

unsigned tree_sitter_snakemake_external_scanner_serialize(void *payload, char *buffer) {
    Scanner *scanner = (Scanner *)payload;

    size_t size = 0;

    buffer[size++] = (char)scanner->allow_wc;
    buffer[size++] = (char)scanner->inside_f_string;

    size_t delimiter_count = scanner->delimiters.size;
    if (delimiter_count > UINT8_MAX) {
        delimiter_count = UINT8_MAX;
    }
    buffer[size++] = (char)delimiter_count;

    if (delimiter_count > 0) {
        memcpy(&buffer[size], scanner->delimiters.contents, delimiter_count);
    }
    size += delimiter_count;

    uint32_t iter = 1;
    for (; iter < scanner->indents.size && size < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter) {
        buffer[size++] = (char)*array_get(&scanner->indents, iter);
    }

    return size;
}

void tree_sitter_snakemake_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    Scanner *scanner = (Scanner *)payload;

    array_delete(&scanner->delimiters);
    array_delete(&scanner->indents);
    array_push(&scanner->indents, 0);

    if (length > 0) {
        size_t size = 0;

        scanner->allow_wc = (AllowWildcard)buffer[size++];
        scanner->inside_f_string = (bool)buffer[size++];

        size_t delimiter_count = (uint8_t)buffer[size++];
        if (delimiter_count > 0) {
            array_reserve(&scanner->delimiters, delimiter_count);
            scanner->delimiters.size = delimiter_count;
            memcpy(scanner->delimiters.contents, &buffer[size], delimiter_count);
            size += delimiter_count;
        }

        for (; size < length; size++) {
            array_push(&scanner->indents, (unsigned char)buffer[size]);
        }
    }
}

void *tree_sitter_snakemake_external_scanner_create() {
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 201112L)
    _Static_assert(sizeof(Delimiter) == sizeof(char), "");
#else
    assert(sizeof(Delimiter) == sizeof(char));
#endif
    Scanner *scanner = calloc(1, sizeof(Scanner));
    array_init(&scanner->indents);
    array_init(&scanner->delimiters);
    tree_sitter_snakemake_external_scanner_deserialize(scanner, NULL, 0);
    return scanner;
}

void tree_sitter_snakemake_external_scanner_destroy(void *payload) {
    Scanner *scanner = (Scanner *)payload;
    array_delete(&scanner->indents);
    array_delete(&scanner->delimiters);
    free(scanner);
}

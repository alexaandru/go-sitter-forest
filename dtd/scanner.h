#pragma once

#include "parser.h"
#include <wctype.h>

enum TokenType {
    PI_TARGET,
    PI_CONTENT,
    COMMENT,
    CHAR_DATA,
    CDATA,
    XML_MODEL,
    XML_STYLESHEET,
    START_TAG_NAME,
    END_TAG_NAME,
    ERRONEOUS_END_NAME,
    SELF_CLOSING_TAG_DELIMITER,
};

/// Advance the lexer if the next token matches the given character
#define advance_if_eq(lexer, chr) \
    if (!lexer->eof(lexer) && (lexer)->lookahead == (chr)) advance_dtd((lexer)); else return false

#ifdef _WIN32
#undef max
#undef min
#endif

/// Advance the lexer to the next token
static inline void advance_dtd(TSLexer *lexer) { lexer->advance_dtd(lexer, false); }

/// Check if the character is valid in a name
/// TODO: explicitly follow https://www.w3.org/TR/xml11/#NT-Name
static inline bool is_valid_name_char(wchar_t chr) {
    return iswalnum(chr) || chr == '_' || chr == ':' || chr == '.' || chr == '-' || chr == 0xB7;
}

/// Check if the character is valid to start a name
/// TODO: explicitly follow https://www.w3.org/TR/xml11/#NT-NameStartChar
static inline bool is_valid_name_start_char(wchar_t chr) {
    return iswalpha(chr) || chr == '_' || chr == ':';
}

/// Check if the lexer matches the given word
static inline bool check_word(TSLexer *lexer, const char *const word, unsigned length) {
    for (unsigned j = 0; j < length; ++j) {
        advance_if_eq(lexer, word[j]);
    }
    return true;
}

/// Scan for the target of a PI node
static bool scan_pi_target(TSLexer *lexer, const bool *valid_symbols) {
    bool advanced_once = false, found_x_first = false;

    if (is_valid_name_start_char(lexer->lookahead)) {
        if (lexer->lookahead == 'x' || lexer->lookahead == 'X') {
            found_x_first = true;
            lexer->mark_end(lexer);
        }
        advanced_once = true;
        advance_dtd(lexer);
    }

    if (advanced_once) {
        while (is_valid_name_char(lexer->lookahead)) {
            if (found_x_first && (lexer->lookahead == 'm' || lexer->lookahead == 'M')) {
                advance_dtd(lexer);
                if (lexer->lookahead == 'l' || lexer->lookahead == 'L') {
                    advance_dtd(lexer);
                    if (is_valid_name_char(lexer->lookahead)) {
                        found_x_first = false;
                        bool last_char_hyphen = lexer->lookahead == '-';
                        advance_dtd(lexer);
                        if (last_char_hyphen) {
                            if (valid_symbols[XML_MODEL] && check_word(lexer, "model", 5))
                                return false;
                            if (valid_symbols[XML_STYLESHEET] && check_word(lexer, "stylesheet", 10))
                                return false;
                        }
                    } else {
                        return false;
                    }
                }
            }

            found_x_first = false;
            advance_dtd(lexer);
        }

        lexer->mark_end(lexer);
        lexer->result_symbol = PI_TARGET;
        return true;
    }

    return false;
}

/// Scan for the content of a PI node
static bool scan_pi_content(TSLexer *lexer) {
    while (!lexer->eof(lexer) && lexer->lookahead != '\n' && lexer->lookahead != '?')
        advance_dtd(lexer);

    if (lexer->lookahead != '?')
        return false;

    lexer->mark_end(lexer);
    advance_dtd(lexer);

    if (lexer->lookahead == '>') {
        advance_dtd(lexer);
        while (lexer->lookahead == ' ')
            advance_dtd(lexer);
        advance_if_eq(lexer, '\n');
        lexer->result_symbol = PI_CONTENT;
        return true;
    }

    return false;
}

/// Scan for a Comment node
static bool scan_comment(TSLexer *lexer) {
    advance_if_eq(lexer, '-');
    advance_if_eq(lexer, '-');

    while (!lexer->eof(lexer)) {
        if (lexer->lookahead == '-') {
            advance_dtd(lexer);
            if (lexer->lookahead == '-') {
                advance_dtd(lexer);
                break;
            }
        } else {
            advance_dtd(lexer);
        }
    }

    if (lexer->lookahead == '>') {
        advance_dtd(lexer);
        lexer->mark_end(lexer);
        lexer->result_symbol = COMMENT;
        return true;
    }

    return false;
}

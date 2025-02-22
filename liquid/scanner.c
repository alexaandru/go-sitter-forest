#include <stdio.h>
#include "parser.h"
#include <wctype.h>

enum TokenType {
    INLINE_COMMENT_CONTENT,
    PAIRED_COMMENT_CONTENT,
    PAIRED_COMMENT_CONTENT_LIQ,
    RAW_CONTENT,
    FRONT_MATTER,
    NONE
};

const char *end = "end";
const char *raw_tag = "raw";
const char *comment_tag = "comment";

static void advance_liquid(TSLexer *lexer) {
    lexer->advance_liquid(lexer, false);
}

static void advance_ws(TSLexer *lexer) {
    while (iswspace(lexer->lookahead)) {
        lexer->advance_liquid(lexer, true);
    }
}

static bool scan_str(TSLexer *lexer, const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (lexer->lookahead == str[i]) {
            advance_liquid(lexer);
        } else {
            return false;
        }
    }
    return true;
}

static bool is_next_and_advance_liquid(TSLexer *lexer, char c) {
    bool is_next = lexer->lookahead == c;
    advance_liquid(lexer);
    return is_next;
}

bool tree_sitter_liquid_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
) {

    // error recovery mode check
    if (valid_symbols[NONE]) {
        return false;
    }

    //front_matter
    if (valid_symbols[FRONT_MATTER]) {
        advance_liquid(lexer);
        if (valid_symbols[FRONT_MATTER] && lexer->lookahead == '-') {
            advance_liquid(lexer);
            if (lexer->lookahead != '-') {
                return false;
            }
            advance_liquid(lexer);
            while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                advance_liquid(lexer);
            }
            if (lexer->lookahead != '\n' && lexer->lookahead != '\r') {
                return false;
            }
            for (;;) {
                // advance over newline
                if (lexer->lookahead == '\r') {
                    advance_liquid(lexer);
                    if (lexer->lookahead == '\n') {
                        advance_liquid(lexer);
                    }
                } else {
                    advance_liquid(lexer);
                }
                // check for dashes
                size_t dash_count = 0;
                while (lexer->lookahead == '-') {
                    dash_count++;
                    advance_liquid(lexer);
                }
                if (dash_count == 3) {
                    // if exactly 3 check if next symbol (after eventual
                    // whitespace) is newline
                    while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                        advance_liquid(lexer);
                    }
                    if (lexer->lookahead == '\n' || lexer->lookahead == '\r' || lexer->lookahead == 0) {
                        // if so also consume newline
                        if (lexer->lookahead == '\r') {
                            advance_liquid(lexer);
                            if (lexer->lookahead == '\n') {
                                advance_liquid(lexer);
                            }
                        } else {
                            advance_liquid(lexer);
                        }
                        lexer->mark_end(lexer);
                        lexer->result_symbol = FRONT_MATTER;
                        return true;
                    }
                }
                // otherwise consume rest of line
                while (lexer->lookahead != '\n' && lexer->lookahead != '\r' &&
                    !lexer->eof(lexer)) {
                    advance_liquid(lexer);
                }
                // if end of file is reached, then this is not metadata
                if (lexer->eof(lexer)) {
                    break;
                }
            }
        }

        return false;
    }

    advance_ws(lexer);

    // inline comment
    if (valid_symbols[INLINE_COMMENT_CONTENT]) {

        if (lexer->lookahead == '#') {

            lexer->result_symbol = INLINE_COMMENT_CONTENT;
            advance_liquid(lexer);

            while (lexer->lookahead != 0) {

                lexer->mark_end(lexer);

                if (is_next_and_advance_liquid(lexer, '\n')) {
                    lexer->mark_end(lexer);
                    return true;
                }

                if (lexer->lookahead == '%') {
                    advance_liquid(lexer);

                    if (lexer->lookahead == '}') {
                        advance_liquid(lexer);
                        return true;
                    }
                }
            }
        }
    }

    // paired comment, or raw content
    if (
        valid_symbols[PAIRED_COMMENT_CONTENT]
        || valid_symbols[PAIRED_COMMENT_CONTENT_LIQ]
        || valid_symbols[RAW_CONTENT]
    ) {

        while (lexer->lookahead != 0) {

            advance_ws(lexer);
            lexer->mark_end(lexer);

            if (!valid_symbols[PAIRED_COMMENT_CONTENT_LIQ]) {

                if (!is_next_and_advance_liquid(lexer, '{')) {
                    continue;
                }

                if (!is_next_and_advance_liquid(lexer, '%')) {
                    continue;
                }

                if (lexer->lookahead == '-') {
                    advance_liquid(lexer);
                }

                advance_ws(lexer);
            }

            // consume "end" if exists
            if (lexer->lookahead == 'e' && !scan_str(lexer, end)) {
                advance_liquid(lexer);
                continue;
            }

            /*
           * this only works because "raw" and "comment" have different starting
           * characters, otherwise we would advance and be unable to correctly match
           * the next option.
           */
            bool is_raw = scan_str(lexer, raw_tag);
            bool is_comment = scan_str(lexer, comment_tag);

            if (is_comment && valid_symbols[PAIRED_COMMENT_CONTENT]) {
                lexer->result_symbol = PAIRED_COMMENT_CONTENT;

            } else if (is_comment && valid_symbols[PAIRED_COMMENT_CONTENT_LIQ]) {
                lexer->result_symbol = PAIRED_COMMENT_CONTENT_LIQ;
                return true;

            } else if (is_raw && valid_symbols[RAW_CONTENT]) {
                lexer->result_symbol = RAW_CONTENT;

            } else {
                advance_liquid(lexer);
                continue;
            }

            advance_ws(lexer);

            if (lexer->lookahead == '-') {
                advance_liquid(lexer);
            }

            if (!is_next_and_advance_liquid(lexer, '%')) {
                continue;
            }

            if (is_next_and_advance_liquid(lexer, '}')) {
                return true;
            }
        }
    }

    return false;
}

void *tree_sitter_liquid_external_scanner_create() { return NULL; }
void tree_sitter_liquid_external_scanner_destroy(void *payload) {}
unsigned tree_sitter_liquid_external_scanner_serialize(void *payload, char *buffer) { return 0; }
void tree_sitter_liquid_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}


#include "parser.h"
#include "alloc.h"
#include "array.h"
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <wchar.h>

enum TokenType {
    CONTENT
};

void *tree_sitter_tera_external_scanner_create() {
    return NULL;
}

void tree_sitter_tera_external_scanner_destroy(void *payload) {}

void tree_sitter_tera_external_scanner_reset(void *payload) {}

unsigned tree_sitter_tera_external_scanner_serialize(void *payload, char *buffer) {
    return 0;
}

void tree_sitter_tera_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

bool tree_sitter_tera_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    bool found_content = false;
    bool marked_end = false;

    if (valid_symbols[CONTENT]) {
        // Loop through characters until we exit early or reach EOF.
        while (lexer->lookahead) {
            marked_end = false;

            // If the character is a {, meaning possibly the end of the content token and the start of a Tera tag...
            if (lexer->lookahead == '{') {
                lexer->mark_end(lexer);
                marked_end = true;
                lexer->advance_tera(lexer, false);
                if (lexer->lookahead == '{' || lexer->lookahead == '#' || lexer->lookahead == '%') {
                    break;
                } else {
                    found_content = true;
                }
            } else {
                found_content = true;
                lexer->advance_tera(lexer, false);
            }
        }
        if (!marked_end) {
            lexer->mark_end(lexer);
        }

        // We have reached the start of a Tera tag or the end of the file. We return true and the range becomes a content token.
        if (found_content) {
            lexer->result_symbol = CONTENT;
            return true;
        }
    }

    // Content is not a valid symbol at this time, so we return false to indicate no token here.
    return false;
}

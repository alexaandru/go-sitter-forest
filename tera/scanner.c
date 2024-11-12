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
    bool at_possible_tag_start = false;
    bool found_content = false;

    if (valid_symbols[CONTENT]) {
        // Loop through characters until we exit early or reach EOF.
        while (lexer->lookahead) {
            // If the last character was a {, meaning possibly the end of the content token and the start of a Tera tag...
            if (at_possible_tag_start) {
                // If the character, combined with the previous {, creates the start of a Tera tag...
                if (lexer->lookahead == '{' || lexer->lookahead == '#' || lexer->lookahead == '%') {
                    // Exit the loop of characters (to either return true if we had found content up to this point or false if not).
                    break;
                } else {
                    // Since the character is not part of the start of a Tera tag, we can reset our possible bracket state and keep adding characters to the content token.
                    at_possible_tag_start = false;
                }
            }

            // If the character is a {, meaning possibly the end of the content token and the start of a Tera tag...
            if (lexer->lookahead == '{') {
                // Mark the end of the token here.
                lexer->mark_end(lexer);
                // Set our possible tag flag to true so that we can confirm on the next iteration.
                at_possible_tag_start = true;
            } else {
                found_content = true;
            }
            lexer->advance_tera(lexer, false);
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

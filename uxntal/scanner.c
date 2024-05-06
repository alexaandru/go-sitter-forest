#include "parser.h"

#include <wctype.h>

enum TokenType { COMMENT };

void *tree_sitter_uxntal_external_scanner_create() { return NULL; }

void tree_sitter_uxntal_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_uxntal_external_scanner_serialize(void *payload, char *buffer) { return 0; }

void tree_sitter_uxntal_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

static void advance_uxntal(TSLexer *lexer) { lexer->advance_uxntal(lexer, false); }

bool tree_sitter_uxntal_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    bool is_in_string = false;
    while (iswspace(lexer->lookahead)) {
        advance_uxntal(lexer);
    }

    if (lexer->lookahead == '"') {
        is_in_string = true;
    }

    if (lexer->lookahead == '(' && !is_in_string) {
        advance_uxntal(lexer);

        unsigned nesting_depth = 1;
        for (;;) {
            switch (lexer->lookahead) {
                case '\0':
                    return false;
                case '(':
                    advance_uxntal(lexer);
                    nesting_depth++;
                    break;
                case ')':
                    advance_uxntal(lexer);
                    nesting_depth--;
                    if (nesting_depth == 0) {
                        lexer->result_symbol = COMMENT;
                        return true;
                    }
                    break;
                default:
                    advance_uxntal(lexer);
                    break;
            }
        }
    }

    if (lexer->lookahead != '"') {
        is_in_string = false;
    }

    return false;
}

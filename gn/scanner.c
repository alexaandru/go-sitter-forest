#include "parser.h"

#include <ctype.h>

enum TokenType { STRING_CONTENT };

static inline void advance_gn(TSLexer *lexer) { lexer->advance_gn(lexer, false); }

void *tree_sitter_gn_external_scanner_create() { return NULL; }

bool tree_sitter_gn_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[STRING_CONTENT]) {
        bool did_advance = false;
        for (;;) {
            if (lexer->eof(lexer)) {
                return false;
            }
            switch (lexer->lookahead) {
                case '\0':
                    return false;
                case '\\':
                    lexer->mark_end(lexer);
                    advance_gn(lexer);
                    if (lexer->lookahead == '\"' || lexer->lookahead == '$' || lexer->lookahead == '\\') {
                        lexer->result_symbol = STRING_CONTENT;
                        return did_advance;
                    }
                    did_advance = true;
                    advance_gn(lexer);
                    break;
                case '$':
                    lexer->mark_end(lexer);
                    advance_gn(lexer);
                    if (lexer->lookahead == '{' || isalpha(lexer->lookahead) || lexer->lookahead == '_') {
                        lexer->result_symbol = STRING_CONTENT;
                        return did_advance;
                    }
                    did_advance = true;
                    advance_gn(lexer);
                    break;
                case '\"':
                    lexer->mark_end(lexer);
                    lexer->result_symbol = STRING_CONTENT;
                    return did_advance;
                default:
                    did_advance = true;
                    advance_gn(lexer);
            }
        }
    }
    return false;
}

unsigned tree_sitter_gn_external_scanner_serialize(void *payload, char *buffer) { return 0; }

void tree_sitter_gn_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

void tree_sitter_gn_external_scanner_destroy(void *payload) {}

#include "parser.h"
#include <stdio.h>
#include <string.h>

enum TokenType {
    TEXT,
    ERROR_SENTINEL,
};

static inline void advance_wbproto(TSLexer *lexer)
{
    lexer->advance_wbproto(lexer, false);
}

static inline void skip_wbproto(TSLexer *lexer)
{
    lexer->advance_wbproto(lexer, true);
}

void *tree_sitter_wbproto_external_scanner_create()
{
    return NULL;
}

void tree_sitter_wbproto_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_wbproto_external_scanner_serialize(void *payload, char *buffer)
{
    return 0;
}

void tree_sitter_wbproto_external_scanner_deserialize(
    void *payload,
    const char *buffer,
    unsigned length)
{}

bool tree_sitter_wbproto_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols)
{
    if (valid_symbols[TEXT]) {
        lexer->result_symbol = TEXT;
        while (!lexer->eof(lexer)) {
            lexer->mark_end(lexer);
            if (lexer->lookahead == '>') {
                advance_wbproto(lexer);
                if (lexer->lookahead == '%') {
                    return true;
                }
                continue;
            }
            advance_wbproto(lexer);
        }
    }

    return false;
}

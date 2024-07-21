#include "parser.h"
#include <wctype.h>

enum TokenType {
    AUTOMATIC_SEMICOLON,
    BLOCK_COMMENT,
    RAW_STRING_LITERAL,
};

static void advance_ursa(TSLexer *lexer) {
  lexer->advance_ursa(lexer, false);
}

void *tree_sitter_ursa_external_scanner_create()
{
    return NULL;
}

void tree_sitter_ursa_external_scanner_destroy(void *p)
{
}

void tree_sitter_ursa_external_scanner_reset(void *p)
{
}

unsigned tree_sitter_ursa_external_scanner_serialize(void *p, char *buffer)
{
    return 0;
}

void tree_sitter_ursa_external_scanner_deserialize(void *p, const char *b, unsigned n)
{
}

static void skip_ursa(TSLexer *lexer)
{
    lexer->advance_ursa(lexer, true);
}

static bool scan_automatic_semicolon(TSLexer *lexer)
{
    lexer->result_symbol = AUTOMATIC_SEMICOLON;
    lexer->mark_end(lexer);

    for (;;) {
        if (lexer->lookahead == 0)
            return true;
        if (lexer->lookahead == '}')
            return true;
        if (lexer->is_at_included_range_start(lexer))
            return true;
        if (lexer->lookahead == '\n')
            break;
        if (!iswspace(lexer->lookahead))
            return false;
        skip_ursa(lexer);
    }

    skip_ursa(lexer);

    return true;
}

bool tree_sitter_ursa_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols)
{
    if (valid_symbols[AUTOMATIC_SEMICOLON]) {
        return scan_automatic_semicolon(lexer);
    }

    while (iswspace(lexer->lookahead)) lexer->advance_ursa(lexer, true);

    if (
        valid_symbols[RAW_STRING_LITERAL] &&
        (lexer->lookahead == 'r' || lexer->lookahead == 'b')
        ) {
        lexer->result_symbol = RAW_STRING_LITERAL;
        if (lexer->lookahead == 'b') advance_ursa(lexer);
        if (lexer->lookahead != 'r') return false;
        advance_ursa(lexer);

        unsigned opening_hash_count = 0;
        while (lexer->lookahead == '#') {
            advance_ursa(lexer);
            opening_hash_count++;
        }

        if (lexer->lookahead != '"') return false;
        advance_ursa(lexer);

        for (;;) {
            if (lexer->lookahead == 0) {
                return false;
            } else if (lexer->lookahead == '"') {
                advance_ursa(lexer);
                unsigned hash_count = 0;
                while (lexer->lookahead == '#' && hash_count < opening_hash_count) {
                    advance_ursa(lexer);
                    hash_count++;
                }
                if (hash_count == opening_hash_count) {
                    return true;
                }
            } else {
                advance_ursa(lexer);
            }
        }
    }

    if (lexer->lookahead == '/') {
        advance_ursa(lexer);
        if (lexer->lookahead != '*') return false;
        advance_ursa(lexer);

        bool after_star = false;
        unsigned nesting_depth = 1;
        for (;;) {
            switch (lexer->lookahead) {
            case '\0':
                return false;
            case '*':
                advance_ursa(lexer);
                after_star = true;
                break;
            case '/':
                if (after_star) {
                    advance_ursa(lexer);
                    after_star = false;
                    nesting_depth--;
                    if (nesting_depth == 0) {
                        lexer->result_symbol = BLOCK_COMMENT;
                        return true;
                    }
                } else {
                    advance_ursa(lexer);
                    after_star = false;
                    if (lexer->lookahead == '*') {
                        nesting_depth++;
                        advance_ursa(lexer);
                    }
                }
                break;
            default:
                advance_ursa(lexer);
                after_star = false;
                break;
            }
        }
    }

    return false;
}

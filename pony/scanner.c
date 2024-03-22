#include <assert.h>
#include <string.h>
#include "parser.h"
#include <wctype.h>

enum TokenType {
    TYPE_ARGS_START,
    BLOCK_COMMENT,

    MULTILINE_STRING_CONTENT,
};

typedef struct {
    int quote_count;
} Scanner;

static inline void advance_pony(TSLexer *lexer) { lexer->advance_pony(lexer, false); }

static inline void skip_pony(TSLexer *lexer) { lexer->advance_pony(lexer, true); }

void *tree_sitter_pony_external_scanner_create() {
    return calloc(1, sizeof(Scanner));
}

void tree_sitter_pony_external_scanner_destroy(void *payload) {
    Scanner *scanner = (Scanner *)payload;
    free(scanner);
}

unsigned tree_sitter_pony_external_scanner_serialize(void *payload,
                                                     char *buffer) {
    Scanner *scanner = (Scanner *)payload;
    memcpy(buffer, scanner, sizeof(Scanner));
    return sizeof(Scanner);
}

void tree_sitter_pony_external_scanner_deserialize(void *payload,
                                                   const char *buffer,
                                                   unsigned length) {
    if (length > 0) {
        assert(length == sizeof(Scanner));
        Scanner *scanner = (Scanner *)payload;
        memcpy(scanner, buffer, sizeof(Scanner));
    }
}

bool tree_sitter_pony_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
    Scanner *scanner = (Scanner *)payload;

    // We ACCEPT [ if there's whitespace but NO newline, otherwise ignore
    // and let the internal grammar handle it as an array literal
    if (valid_symbols[TYPE_ARGS_START]) {
        while (iswspace(lexer->lookahead) && lexer->lookahead != '\0' &&
               lexer->lookahead != '\n') {
            advance_pony(lexer);
        }

        if (lexer->lookahead == '[') {
            advance_pony(lexer);
            lexer->result_symbol = TYPE_ARGS_START;
            return true;
        }
    }

    while (iswspace(lexer->lookahead)) {
        skip_pony(lexer);
    }

    // Multiline string content can have anything,
    // escape sequences are just parsed as two characters
    if (valid_symbols[MULTILINE_STRING_CONTENT]) {
        bool has_content = false;
        lexer->result_symbol = MULTILINE_STRING_CONTENT;

        for (;;) {
            switch (lexer->lookahead) {
                case '"':
                    lexer->mark_end(lexer);
                    // This outer if statement is to handle a fresh state
                    // without prior knowledge of quotes
                    if (scanner->quote_count == 0) {
                        while (lexer->lookahead == '"') {
                            advance_pony(lexer);
                            scanner->quote_count++;
                        }

                        if (scanner->quote_count > 3) {
                            // Trigger the external scanner again for a state
                            // where we know the quote count from before
                            return true;
                        }
                        if (scanner->quote_count == 3) {
                            // We have a triple quote aka the end, so we can
                            // return
                            scanner->quote_count = 0;
                            return has_content;
                        }
                        // we have a single or double quote, so we need to
                        // keep going since this is just content in the
                        // multiline string, so we extend the current token with
                        // `mark_end`
                        lexer->mark_end(lexer);
                        scanner->quote_count = 0;
                        has_content = true;

                        // This else if is to handle the case where we have a
                        // quote count > 0 beforehand, and need to see if some
                        // of this just might be content, that is, only if
                        // there's more than 3 quotes in a row
                    } else if (scanner->quote_count > 3) {
                        // We returned from the last iteration with a quote
                        // count > 3, so we must mark n-3 quotes as content
                        for (int i = 0; i < scanner->quote_count - 3; i++) {
                            advance_pony(lexer);
                        }
                        // Extend the current token with `mark_end`
                        lexer->mark_end(lexer);
                        scanner->quote_count = 0;
                        has_content = true;
                        return true;
                        // This else if is to handle the case where we have a
                        // quote count == 3 from the last iteration
                    } else if (scanner->quote_count == 3) {
                        // We have a triple quote aka the end, so we can return
                        scanner->quote_count = 0;
                        return has_content;
                        // This else is to handle the case where we have a
                        // quote count == 1 or 2, just extend the current token
                    } else {
                        lexer->mark_end(lexer);
                        scanner->quote_count = 0;
                        // We know we have a single or double quote, so we need
                        // to keep going, mark has_content as true
                        has_content = true;
                    }
                    break;
                case '\0':
                    if (lexer->eof(lexer)) {
                        return false;
                    }
                    advance_pony(lexer);
                    has_content = true;
                    break;
                default:
                    advance_pony(lexer);
                    has_content = true;
                    break;
            }
        }
    }

    while (iswspace(lexer->lookahead)) {
        skip_pony(lexer);
    }

    if (lexer->lookahead == '/') {
        advance_pony(lexer);
        if (lexer->lookahead != '*') {
            return false;
        }
        advance_pony(lexer);

        bool after_star = false;
        unsigned nesting_depth = 1;
        for (;;) {
            switch (lexer->lookahead) {
                case '\0':
                    return false;
                case '*':
                    advance_pony(lexer);
                    after_star = true;
                    break;
                case '/':
                    if (after_star) {
                        advance_pony(lexer);
                        after_star = false;
                        nesting_depth--;
                        if (nesting_depth == 0) {
                            lexer->result_symbol = BLOCK_COMMENT;
                            return true;
                        }
                    } else {
                        advance_pony(lexer);
                        after_star = false;
                        if (lexer->lookahead == '*') {
                            nesting_depth++;
                            advance_pony(lexer);
                        }
                    }
                    break;
                default:
                    advance_pony(lexer);
                    after_star = false;
                    break;
            }
        }
    }

    return false;
}

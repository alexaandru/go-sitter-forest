#include <stdint.h>
#include <string.h>

#include "parser.h"

enum TokenType {
    COMMENT,
};

static int32_t advance_tiger(TSLexer *lexer) {
    int32_t last = lexer->lookahead;
    lexer->advance_tiger(lexer, false);
    return last;
}

static bool expect(TSLexer *lexer, int32_t expected) {
    if (lexer->eof(lexer) || lexer->lookahead != expected) {
        return false;
    }
    advance_tiger(lexer);
    return true;
}

static void skip_whitespace(TSLexer *lexer) {
    while (!lexer->eof(lexer)) {
        switch (lexer->lookahead) {
        case ' ':
        case '\t':
        case '\n':
        case '\r':
            lexer->advance_tiger(lexer, true);
            break;
        default:
            return;
        }
    }
}

// Comments start with "/*", end with "*/", and can be nested like OCaml
static bool scan_comment(TSLexer *lexer) {
    // '/' already consumed outside of the function
    if (!expect(lexer, '*')) {
        return false; // Division etc...
    }

    unsigned long level = 1;

    while (level > 0 && !lexer->eof(lexer)) {
        switch (advance_tiger(lexer)) {
        case '/':
            if (expect(lexer, '*')) {
                ++level;
            }
            break;
        case '*':
            if (expect(lexer, '/')) {
                --level;
            }
            break;
        }
    }

    return level == 0;
}

void *tree_sitter_tiger_external_scanner_create() {
    return NULL;
}

void tree_sitter_tiger_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_tiger_external_scanner_serialize(void *payload,
                                                      char *buffer) {
    return 0;
}

void tree_sitter_tiger_external_scanner_deserialize(void *payload,
                                                    char const *buffer,
                                                    unsigned length) {}

bool tree_sitter_tiger_external_scanner_scan(void *payload,
                                             TSLexer *lexer,
                                             bool const *valid_symbols) {
    // Only try to scan when appropriate
    if (!valid_symbols[COMMENT]) {
        return false;
    }

    // Apparently it is expected of us to skip all whitespace by ourselves...
    skip_whitespace(lexer);

    // Comments start with "/*", scan_comment expects '/' to have been consumed
    if (expect(lexer, '/')) {
        lexer->result_symbol = COMMENT;
        return scan_comment(lexer);
    }

    return false;
}

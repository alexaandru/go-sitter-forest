#include "parser.h"

enum TokenType {
    RAW_TEXT,
};

void *tree_sitter_bruno_external_scanner_create() {
    return NULL;
}

void tree_sitter_bruno_external_scanner_destroy(void *p) {
}

void tree_sitter_bruno_external_scanner_reset(void *p) {
}

unsigned tree_sitter_bruno_external_scanner_serialize(void *p, char *buffer) {
    return 0;
}

void tree_sitter_bruno_external_scanner_deserialize(void *p, const char *b, unsigned n) {
}

static void advance_bruno(TSLexer *lexer) {
    lexer->advance_bruno(lexer, false);
}

bool tree_sitter_bruno_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[RAW_TEXT]) {
        // Scanning raw text follows the rules of the official Bruno language grammar
        // (refer to https://github.com/usebruno/bruno/blob/main/packages/bruno-lang/v2/src/bruToJson.js).
        // A raw text block ends if a closing angle bracket is found right after a newline.

        lexer->result_symbol = RAW_TEXT;
        for (bool has_content = false;; has_content = true) {
            lexer->mark_end(lexer);

            switch (lexer->lookahead) {
                case '\n':
                    advance_bruno(lexer);
                    if (lexer->lookahead == '}') return has_content;
                    break;
                case '\0': return false;
                default: advance_bruno(lexer);
            }
        }
    }

    return false;
}

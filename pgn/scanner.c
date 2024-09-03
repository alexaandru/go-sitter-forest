#include "parser.h"

enum TokenType {
    FULL_LINE_COMMENT_DELIMITER_BOL_ASSERTION,
};

void *tree_sitter_pgn_external_scanner_create(void) {
    return NULL;
}

void tree_sitter_pgn_external_scanner_destroy(void *payload) {
}

unsigned tree_sitter_pgn_external_scanner_serialize(void *payload, char *buffer) {
    return 0;
}

void tree_sitter_pgn_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
}

bool tree_sitter_pgn_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
) {
    if (valid_symbols[FULL_LINE_COMMENT_DELIMITER_BOL_ASSERTION]) {
        // it's not really clear why we have to advance over newlines, but we do
        // eof not really needed in this form
        while (!lexer->eof(lexer) && (lexer->lookahead == '\n' || lexer->lookahead == '\r')) {
            lexer->advance_pgn(lexer, true);
        }
        if (lexer->lookahead == '%' && lexer->get_column(lexer) == 0) {
            lexer->result_symbol = FULL_LINE_COMMENT_DELIMITER_BOL_ASSERTION;
            return true;
        }
    }
    return false;
}

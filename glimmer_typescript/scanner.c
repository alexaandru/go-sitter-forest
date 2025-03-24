// ----------------------------------------------------------
//
//
//
// Scanners are not extensible, so we have to copy them,
//
// To Update:
//  - delete everything under the comment block
//  - find and replace "tree_sitter_javascript" with "tree_sitter_glimmer_typescript"
//    - there should be 5 methods updated
//    - %s/tree_sitter_javascript/tree_sitter_glimmer_typescript/g
//
//
//
// ----------------------------------------------------------
#include "scanner.h"
#include <string.h>

enum GlimmerTokenType {
    RAW_TEXT = ERROR_RECOVERY + 1,
};

static bool scan_raw_text(void *payload, TSLexer *lexer) {
    lexer->mark_end(lexer);

    const char *end_delimiter = "</TEMPLATE";

    unsigned delimiter_index = 0;
    bool is_valid = false;
    while (lexer->lookahead) {
        if ((char)towupper(lexer->lookahead) == end_delimiter[delimiter_index]) {
            delimiter_index++;
            if (delimiter_index == strlen(end_delimiter)) {
                break;
            }
            advance_glimmer_typescript(lexer);
        } else {
            is_valid = true;
            delimiter_index = 0;
            advance_glimmer_typescript(lexer);
            lexer->mark_end(lexer);
        }
    }
    if (is_valid) {
        lexer->result_symbol = RAW_TEXT;
    }
    return is_valid;
}

void *tree_sitter_glimmer_typescript_external_scanner_create() { return NULL; }

void tree_sitter_glimmer_typescript_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_glimmer_typescript_external_scanner_serialize(void *payload, char *buffer) { return 0; }

void tree_sitter_glimmer_typescript_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

bool tree_sitter_glimmer_typescript_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[RAW_TEXT]) {
        return scan_raw_text(payload, lexer);
    }

    return external_scanner_scan(payload, lexer, valid_symbols);
}

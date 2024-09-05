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

void *tree_sitter_glimmer_typescript_external_scanner_create() { return NULL; }

void tree_sitter_glimmer_typescript_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_glimmer_typescript_external_scanner_serialize(void *payload, char *buffer) { return 0; }

void tree_sitter_glimmer_typescript_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

bool tree_sitter_glimmer_typescript_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    return external_scanner_scan(payload, lexer, valid_symbols);
}

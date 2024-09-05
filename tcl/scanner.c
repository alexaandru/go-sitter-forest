#include "parser.h"
#include <wctype.h>

enum TokenType {
  CONCAT
};

void *tree_sitter_tcl_external_scanner_create() {
  return NULL;
}

bool tree_sitter_tcl_external_scanner_scan(void *payload, TSLexer *lexer,
                                          const bool *valid_symbols) {
  return valid_symbols[CONCAT] && (
        !iswspace(lexer->lookahead) &&
        lexer->lookahead != ')' &&
        lexer->lookahead != '}' &&
        lexer->lookahead != ']'
        );
  //   iswalpha(lexer->lookahead) ||
  //   lexer->lookahead == '$' ||
  //   lexer->lookahead == '/' ||
  //   lexer->lookahead == '[' ||
  //   lexer->lookahead == '_'
  // );
}

unsigned tree_sitter_tcl_external_scanner_serialize(void *payload, char *state) {
  return 0;
}

void tree_sitter_tcl_external_scanner_deserialize(void *payload, const char *state, unsigned length){ }

void tree_sitter_tcl_external_scanner_destroy(void *payload) {}

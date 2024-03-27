#include "parser.h"
#include <wctype.h>

enum TokenType {
  CONCAT,
  NS_DELIM,
};

static bool is_eof(TSLexer *lexer) {
  return lexer->lookahead == 0;
}

static bool is_concat_valid(TSLexer *lexer, const bool *valid_symbols) {
  return valid_symbols[CONCAT] && (
    iswalpha(lexer->lookahead) ||
    lexer->lookahead == '$' ||
    lexer->lookahead == '[' ||
    lexer->lookahead == '_'
  );
  // return valid_symbols[CONCAT] && !(
  //         is_eof(lexer) ||
  //         iswspace(lexer->lookahead) ||
  //         lexer->lookahead == ']' ||
  //         lexer->lookahead == '$' ||
  //         lexer->lookahead == ')' ||
  //         lexer->lookahead == '}'
  //         );
}

static bool scan_ns_delim(TSLexer *lexer) {
  if (lexer->lookahead == ':') {
    lexer->advance_tcl(lexer, false);
    if (lexer->lookahead == ':') {
      lexer->advance_tcl(lexer, false);
      if (iswalpha(lexer->lookahead)) {
        lexer->result_symbol = NS_DELIM;
        return true;
      }
    }
  }
  return false;
}

void *tree_sitter_tcl_external_scanner_create() {
  return NULL;
}

bool tree_sitter_tcl_external_scanner_scan(void *payload, TSLexer *lexer,
                                          const bool *valid_symbols) {
  if (valid_symbols[NS_DELIM]) {
    return scan_ns_delim(lexer);
  }

  if (is_concat_valid(lexer, valid_symbols)) {
    return true;
  }

  return false;
}

unsigned tree_sitter_tcl_external_scanner_serialize(void *payload, char *state) {
  return 0;
}

void tree_sitter_tcl_external_scanner_deserialize(void *payload, const char *state, unsigned length){ }

void tree_sitter_tcl_external_scanner_destroy(void *payload) {}

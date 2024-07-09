#include "parser.h"
#include <wctype.h> // for iswspace()

enum TokenType {
  AUTOMATIC_SEMICOLON
};

// Required by tree-sitter
// Return null or do nothing because we don't carry state.
void *tree_sitter_cds_external_scanner_create() { return NULL; }
void tree_sitter_cds_external_scanner_destroy(void *p) {}
void tree_sitter_cds_external_scanner_reset(void *p) {}
unsigned tree_sitter_cds_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_cds_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

/// Check if we can omit a semicolon in the source.
/// A semicolon can be skipped if it is right in front of a closing brace.
static bool scan_automatic_semicolon(TSLexer *lexer) {
  lexer->result_symbol = AUTOMATIC_SEMICOLON;
  lexer->mark_end(lexer);

  for (;;) {
    if (lexer->lookahead == 0) return true; // EOF
    if (lexer->lookahead == '}') return true;
    if (!iswspace(lexer->lookahead)) return false;
    lexer->advance_cds(lexer, true); // skip whitespace
  }
  return false;
}

bool tree_sitter_cds_external_scanner_scan( void *payload, TSLexer *lexer, const bool *valid_symbols)
{
  if (valid_symbols[AUTOMATIC_SEMICOLON]) {
    return scan_automatic_semicolon(lexer);
  }
  return false;
}

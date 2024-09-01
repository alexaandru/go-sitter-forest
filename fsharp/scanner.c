#include "scanner.h"

bool tree_sitter_fsharp_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;
  return scan_fsharp(scanner, lexer, valid_symbols);
}

unsigned tree_sitter_fsharp_external_scanner_serialize(void *payload,
                                                       char *buffer) {
  Scanner *scanner = (Scanner *)payload;
  return serialize_fsharp(scanner, buffer);
}

void tree_sitter_fsharp_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {
  Scanner *scanner = (Scanner *)payload;
  deserialize_fsharp(scanner, buffer, length);
}

void *tree_sitter_fsharp_external_scanner_create() { return create(); }

void tree_sitter_fsharp_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  destroy(scanner);
}

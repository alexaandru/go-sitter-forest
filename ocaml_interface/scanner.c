#include "scanner.h"

void *tree_sitter_ocaml_interface_external_scanner_create() { return create(); }

void tree_sitter_ocaml_interface_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  destroy(scanner);
}

unsigned tree_sitter_ocaml_interface_external_scanner_serialize(void *payload,
                                                                char *buffer) {
  Scanner *scanner = (Scanner *)payload;
  return serialize_ocaml_interface(scanner, buffer);
}

void tree_sitter_ocaml_interface_external_scanner_deserialize(
    void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = (Scanner *)payload;
  deserialize_ocaml_interface(scanner, buffer, length);
}

bool tree_sitter_ocaml_interface_external_scanner_scan(
    void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;
  return scan_ocaml_interface(scanner, lexer, valid_symbols);
}

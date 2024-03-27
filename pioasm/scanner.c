#include "parser.h"

enum TokenType {
  CODE_BLOCK_BODY
};

void* tree_sitter_pioasm_external_scanner_create() {
  return NULL;
}

void tree_sitter_pioasm_external_scanner_destroy(void* payload) {}

unsigned int tree_sitter_pioasm_external_scanner_serialize(void* payload, char* buffer) {
  return 0;
}

void tree_sitter_pioasm_external_scanner_deserialize(void* payload, const char* buffer, unsigned int length) {}

bool tree_sitter_pioasm_external_scanner_scan(void* payload, TSLexer* lexer, const bool* valid_symbols) {
  if (valid_symbols[CODE_BLOCK_BODY]) {
    lexer->result_symbol = CODE_BLOCK_BODY;

    while (true) {
      if (lexer->lookahead == 0) return false;

      lexer->mark_end(lexer);

      if (lexer->lookahead == '%') {
        lexer->advance_pioasm(lexer, false);

        if (lexer->lookahead == '}') {
          return true;
        }
      } else {
        lexer->advance_pioasm(lexer, false);
      }
    }
  }

  return false;
}

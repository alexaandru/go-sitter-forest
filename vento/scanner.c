#include "parser.h"
#include <wctype.h>
#include <stdio.h>

enum TokenType {
  CODE,
  KEYWORD,
};

void *tree_sitter_vento_external_scanner_create() { return NULL; }
void tree_sitter_vento_external_scanner_destroy(void *payload) {}
unsigned tree_sitter_vento_external_scanner_serialize( void *payload, char *buffer) { return 0; }
void tree_sitter_vento_external_scanner_deserialize( void *payload, const char *buffer, unsigned length) {}

void skip_whitespace(TSLexer *lexer) {
  while (iswspace(lexer->lookahead)) {
    lexer->advance_vento(lexer, true);
  }
}

bool tree_sitter_vento_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  skip_whitespace(lexer);

  if (valid_symbols[CODE]) {

    if (lexer->eof(lexer) ||
        lexer->lookahead == '/' ||
        lexer->lookahead == '-' ||
        lexer->lookahead == '}') {
      return false;
    }

    // We start in a code block, so we need to find the end of it
    uint32_t depth = 1;

    while (depth > 0) {
      if (lexer->eof(lexer)) {
        return false;
      }

      if (lexer->lookahead == '{') {
        lexer->advance_vento(lexer, false);
        depth++;

      } else if (lexer->lookahead == '}') {
        lexer->advance_vento(lexer, false);

        if (depth > 1) {
          lexer->mark_end(lexer);
        }
        depth--;

      } else if (lexer->lookahead == '|') {
        lexer->mark_end(lexer);
        lexer->advance_vento(lexer, false);

        if (lexer->lookahead == '>') {
          lexer->advance_vento(lexer, false);

          lexer->result_symbol = CODE;
          return true;
        }
      } else {
        const bool skip = iswspace(lexer->lookahead) || lexer->lookahead == '-';
        lexer->advance_vento(lexer, false);
        if (!skip) {
          lexer->mark_end(lexer);
        }
      }

      if (depth == 0) {
        lexer->result_symbol = CODE;
        return true;
      }
    }

    return false;
  }

  return false;
}

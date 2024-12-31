#include "parser.h"
#include <wctype.h>
#include <stdio.h>

enum TokenType {
  BLOCK_COMMENT,
};

void *tree_sitter_ipkg_external_scanner_create() { return NULL; }
void tree_sitter_ipkg_external_scanner_destroy(void *p) {}
void tree_sitter_ipkg_external_scanner_reset(void *p) {}
unsigned tree_sitter_ipkg_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_ipkg_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance_ipkg(TSLexer *lexer) {
  lexer->advance_ipkg(lexer, false);
}

bool tree_sitter_ipkg_external_scanner_scan(void *payload,
                                            TSLexer *lexer,
                                            const bool *valid_symbols) {

  // Debug output
  /* printf("Starting scanner scan\n"); */

  while (iswspace(lexer->lookahead)) {
    lexer->advance_ipkg(lexer, true);
  }

  /* printf("Found char: %c\n", lexer->lookahead); */

  if (lexer->lookahead == '{') {
    advance_ipkg(lexer);
    if (lexer->lookahead != '-') {
      /* printf("Not a block comment - missing -\n"); */
      return false;
    }
    advance_ipkg(lexer);

    bool after_minus = false;
    unsigned nesting_depth = 1;
    /* printf("Starting block comment parse, nesting: %d\n", nesting_depth); */

    for (;;) {
      /* printf("Current char: %c, after_minus: %d, depth: %d\n", lexer->lookahead, after_minus, nesting_depth); */

      switch (lexer->lookahead) {
        case '\0':
          /* printf("ERROR: Unterminated comment\n"); */
          return false;
        case '-':
          advance_ipkg(lexer);
          after_minus = true;
          break;
        case '}':
          if (after_minus) {
            advance_ipkg(lexer);
            after_minus = false;
            nesting_depth--;
            /* printf("Found closing token, new depth: %d\n", nesting_depth); */
            if (nesting_depth == 0) {
              lexer->result_symbol = BLOCK_COMMENT;
              /* printf("Successfully parsed block comment\n"); */
              return true;
            }
          } else {
            advance_ipkg(lexer);
            after_minus = false;
          }
          break;
        case '{':
          advance_ipkg(lexer);
          after_minus = false;
          if (lexer->lookahead == '-') {
            nesting_depth++;
            /* printf("Found nested comment, new depth: %d\n", nesting_depth); */
            advance_ipkg(lexer);
          }
          break;
        default:
          advance_ipkg(lexer);
          after_minus = false;
          break;
      }
    }
  }

  /* printf("Not a block comment\n"); */
  return false;
}

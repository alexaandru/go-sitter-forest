#include "parser.h"
#include <wctype.h>
// Block comment stuff here is largely nicked from tree-sitter-rust https://github.com/tree-sitter/tree-sitter-rust

enum TokenType { BLOCK_COMMENT, STRING };

void *tree_sitter_supercollider_external_scanner_create() { return NULL; }
void tree_sitter_supercollider_external_scanner_destroy(void *p) {}
void tree_sitter_supercollider_external_scanner_reset(void *p) {}
unsigned tree_sitter_supercollider_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_supercollider_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance_supercollider(TSLexer *lexer) { lexer->advance_supercollider(lexer, false); }

static bool is_num_char(int32_t c) { return c == '_' || iswdigit(c); }

bool tree_sitter_supercollider_external_scanner_scan(
    void *payload, TSLexer *lexer, const bool *valid_symbols) {

  while (iswspace(lexer->lookahead))
    lexer->advance_supercollider(lexer, true);

  if (lexer->lookahead == '/') {
    advance_supercollider(lexer);
    if (lexer->lookahead != '*')
      return false;
    advance_supercollider(lexer);

    bool after_star = false;
    unsigned nesting_depth = 1;
    for (;;) {
      switch (lexer->lookahead) {
      case '\0':
        return false;
	  /* case '"': */
		/* lexer->result_symbol = STRING; */
		/* break; */
      case '*':
        advance_supercollider(lexer);
        after_star = true;
        break;
      case '/':
        if (after_star) {
          advance_supercollider(lexer);
          after_star = false;
          nesting_depth--;
          if (nesting_depth == 0) {
            lexer->result_symbol = BLOCK_COMMENT;
            return true;
          }
        } else {
          advance_supercollider(lexer);
          after_star = false;
          if (lexer->lookahead == '*') {
            nesting_depth++;
            advance_supercollider(lexer);
          }
        }
        break;
      default:
        advance_supercollider(lexer);
        after_star = false;
        break;
      }
    }
  }

  return false;
}

#include "parser.h"
#include <wctype.h>

enum TokenType {
  TEMPLATE_CHARS_SINGLE,
  TEMPLATE_CHARS_DOUBLE,
  TEMPLATE_CHARS_SINGLE_SINGLE,
  TEMPLATE_CHARS_DOUBLE_SINGLE,
  TEMPLATE_CHARS_RAW_SLASH,
  BLOCK_COMMENT,
  DOCUMENTATION_BLOCK_COMMENT,
};

void *tree_sitter_dart_external_scanner_create() { return NULL; }
void tree_sitter_dart_external_scanner_destroy(void *p) {}
void tree_sitter_dart_external_scanner_reset(void *p) {}
unsigned tree_sitter_dart_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_dart_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance_dart(TSLexer *lexer) { lexer->advance_dart(lexer, false); }
static void skip_dart(TSLexer *lexer) { lexer->advance_dart(lexer, true); }

static bool scan_multiline_comments(TSLexer *lexer) {

    bool documentation_comment = false;
    advance_dart(lexer);
    if (lexer->lookahead != '*') return false;
    advance_dart(lexer);
    if (lexer->lookahead == '*') documentation_comment = true;

    bool after_star = false;
    unsigned nesting_depth = 1;
    for (;;) {
      switch (lexer->lookahead) {
        case '\0':
          return false;
        case '*':
          advance_dart(lexer);
          after_star = true;
          break;
        case '/':
          if (after_star) {
            advance_dart(lexer);
            after_star = false;
            nesting_depth--;
            if (nesting_depth == 0) {
              if (!documentation_comment) {
                lexer->result_symbol = BLOCK_COMMENT;
              } else {
                lexer->result_symbol = DOCUMENTATION_BLOCK_COMMENT;
              }
              return true;
            }
          } else {
            advance_dart(lexer);
            after_star = false;
            if (lexer->lookahead == '*') {
              nesting_depth++;
              advance_dart(lexer);
            }
          }
          break;
        default:
          advance_dart(lexer);
          after_star = false;
          break;
      }
    }
  return false;
}


static bool scan_templates(TSLexer *lexer, const bool *valid_symbols) {
  if(valid_symbols[TEMPLATE_CHARS_DOUBLE]) {
              lexer->result_symbol = TEMPLATE_CHARS_DOUBLE;
  } else if (valid_symbols[TEMPLATE_CHARS_SINGLE]) {
              lexer->result_symbol = TEMPLATE_CHARS_SINGLE;
  } else if (valid_symbols[TEMPLATE_CHARS_SINGLE_SINGLE]) {
              lexer->result_symbol = TEMPLATE_CHARS_SINGLE_SINGLE;
  } else {
              lexer->result_symbol = TEMPLATE_CHARS_DOUBLE_SINGLE;
  }
  for (bool has_content = false;; has_content = true) {
    lexer->mark_end(lexer);
    switch (lexer->lookahead) {
      case '\'':
      case '"':
        return has_content;
      case '\n':
        if (valid_symbols[TEMPLATE_CHARS_DOUBLE_SINGLE] || valid_symbols[TEMPLATE_CHARS_SINGLE_SINGLE]) return false;
        advance_dart(lexer);
        break;
      case '\0':
        return false;
      case '$':
        return has_content;
      case '\\':
        if (valid_symbols[TEMPLATE_CHARS_RAW_SLASH]) {
            lexer->result_symbol = TEMPLATE_CHARS_RAW_SLASH;
            advance_dart(lexer);
        } else {
            return has_content;
        }
        break;
      default:
        advance_dart(lexer);
    }
  }
  return true;
}



bool tree_sitter_dart_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  if (
      valid_symbols[TEMPLATE_CHARS_DOUBLE] ||
      valid_symbols[TEMPLATE_CHARS_SINGLE] ||
      valid_symbols[TEMPLATE_CHARS_DOUBLE_SINGLE] ||
      valid_symbols[TEMPLATE_CHARS_SINGLE_SINGLE]
  ) {
    return scan_templates(lexer, valid_symbols);
  }
  while (iswspace(lexer->lookahead)) lexer->advance_dart(lexer, true);

  if (lexer->lookahead == '/') {
    return scan_multiline_comments(lexer);
  }
  return false;
}

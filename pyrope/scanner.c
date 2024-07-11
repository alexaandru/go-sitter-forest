/*
 * Reference: https://github.com/tree-sitter/tree-sitter-javascript/blob/4213a6c331d068b67de17e2dac917a90968cd33c/src/scanner.c
 */

#include "parser.h"
#include <wctype.h>

enum TokenType {
  AUTOMATIC_SEMICOLON
};

void *tree_sitter_pyrope_external_scanner_create() { return NULL; }
void tree_sitter_pyrope_external_scanner_destroy(void *p) {}
void tree_sitter_pyrope_external_scanner_reset(void *p) {}
unsigned tree_sitter_pyrope_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_pyrope_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance_pyrope(TSLexer *lexer) { lexer->advance_pyrope(lexer, false); }

static bool scan_whitespace_and_comments(TSLexer *lexer) {
  for (;;) {
    while (iswspace(lexer->lookahead)) {
      advance_pyrope(lexer);
    }

    if (lexer->lookahead == '/') {
      advance_pyrope(lexer);

      if (lexer->lookahead == '/') {
        advance_pyrope(lexer);
        while (lexer->lookahead != 0 && lexer->lookahead != '\n') {
          advance_pyrope(lexer);
        }
      } else if (lexer->lookahead == '*') {
        advance_pyrope(lexer);
        while (lexer->lookahead != 0) {
          if (lexer->lookahead == '*') {
            advance_pyrope(lexer);
            if (lexer->lookahead == '/') {
              advance_pyrope(lexer);
              break;
            }
          } else {
            advance_pyrope(lexer);
          }
        }
      } else {
        return false;
      }
    } else {
      return true;
    }
  }
}

bool tree_sitter_pyrope_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  lexer->result_symbol = AUTOMATIC_SEMICOLON;
  lexer->mark_end(lexer);

  for (;;) {
    if (lexer->lookahead == 0) return true;


    // For code like:
    // a = { d } + 1
    // The 'd' is a statement, so it needs a \n before \}
    if (lexer->lookahead == '}') {
      return true;
    }

    if (lexer->is_at_included_range_start(lexer)) return true;
    if (!iswspace(lexer->lookahead)) return false;
    if (lexer->lookahead == '\n') break;
    advance_pyrope(lexer);
  }

  advance_pyrope(lexer);

  scan_whitespace_and_comments(lexer);

  switch (lexer->lookahead) {
    case ',':
    case '=':
    case '.':
    case '>':
    case '<':
    case '&':
    case '^':
    case '|':
    case '*':
    case '/':
    case '+':
    case '-':
      return false;

    case 'e': { // else or elif
      advance_pyrope(lexer);
      if (lexer->lookahead != 'l')
        return true;
      advance_pyrope(lexer);
      if (lexer->lookahead != 's' && lexer->lookahead != 'i')
        return true;
      if (lexer->lookahead == 's') {
        advance_pyrope(lexer);
        if (lexer->lookahead == 'e')
          return false;
      }else{
        advance_pyrope(lexer);
        if (lexer->lookahead == 'f')
          return false;
      }
    }

    // Don't insert a semicolon before `!=`, but do insert one before a unary `!`.
    case '!':
      advance_pyrope(lexer);
      return lexer->lookahead != '=';
  }

  return true;
}

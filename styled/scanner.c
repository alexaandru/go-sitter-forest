#include "parser.h"

#include <wctype.h>

enum TokenType {
  DESCENDANT_OP,
  PSEUDO_CLASS_SELECTOR_COLON,
  ERROR_RECOVERY,
};

static inline void advance_styled(TSLexer *lexer) { lexer->advance_styled(lexer, false); }

static inline void skip_styled(TSLexer *lexer) { lexer->advance_styled(lexer, true); }

void *tree_sitter_styled_external_scanner_create() { return NULL; }

void tree_sitter_styled_external_scanner_destroy(void *payload) {}

void tree_sitter_styled_external_scanner_reset(void *payload) {}

unsigned tree_sitter_styled_external_scanner_serialize(void *payload,
                                                       char *buffer) {
  return 0;
}

void tree_sitter_styled_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {}

bool tree_sitter_styled_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  if (valid_symbols[ERROR_RECOVERY]) {
    return false;
  }

  if (iswspace(lexer->lookahead) && valid_symbols[DESCENDANT_OP]) {
    lexer->result_symbol = DESCENDANT_OP;

    lexer->advance_styled(lexer, true);
    while (iswspace(lexer->lookahead)) {
      lexer->advance_styled(lexer, true);
    }
    lexer->mark_end(lexer);

    if (lexer->lookahead == '#' || lexer->lookahead == '.' ||
        lexer->lookahead == '[' || lexer->lookahead == '-' ||
        lexer->lookahead == '*' || iswalnum(lexer->lookahead)) {
      return true;
    }

    if (lexer->lookahead == ':') {
      lexer->advance_styled(lexer, false);
      if (iswspace(lexer->lookahead)) {
        return false;
      }
      for (;;) {
        if (lexer->lookahead == ';' || lexer->lookahead == '}' ||
            lexer->eof(lexer)) {
          return false;
        }
        if (lexer->lookahead == '{') {
          return true;
        }
        lexer->advance_styled(lexer, false);
      }
    }
  }

  if (valid_symbols[PSEUDO_CLASS_SELECTOR_COLON]) {
    while (iswspace(lexer->lookahead)) {
      lexer->advance_styled(lexer, true);
    }
    if (lexer->lookahead == ':') {
      advance_styled(lexer);
      if (lexer->lookahead == ':') {
        return false;
      }
      lexer->mark_end(lexer);
      // We need a { to be a pseudo class selector, a ; indicates a property
      // The $ is added for styled-components interpolation syntax which should
      // not be considered a pseudo class selector.
      while (lexer->lookahead != ';' && lexer->lookahead != '}' &&
             lexer->lookahead != '$' && !lexer->eof(lexer)) {
        advance_styled(lexer);
        if (lexer->lookahead == '{') {
          lexer->result_symbol = PSEUDO_CLASS_SELECTOR_COLON;
          return true;
        }
      }
      return false;
    }
  }

  return false;
}

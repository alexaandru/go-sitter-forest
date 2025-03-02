#include "parser.h"
#include <wctype.h>

enum TokenType { BRACKET_ARGUMENT, BRACKET_COMMENT, LINE_COMMENT };

static void skip_cmake(TSLexer *lexer) {
  lexer->advance_cmake(lexer, true);
}

static void advance_cmake(TSLexer *lexer) {
  lexer->advance_cmake(lexer, false);
}

static void skip_wspace(TSLexer *lexer) {
  while (iswspace(lexer->lookahead)) {
    skip_cmake(lexer);
  }
}

static bool is_bracket_argument(TSLexer *lexer) {
  if (lexer->lookahead != '[') {
    return false;
  }
  advance_cmake(lexer);

  int open_level = 0;
  while (lexer->lookahead == '=') {
    ++open_level;
    advance_cmake(lexer);
  }

  if (lexer->lookahead != '[') {
    return false;
  }

  while (lexer->lookahead != '\0') {
    advance_cmake(lexer);
    if (lexer->lookahead == ']') {
      advance_cmake(lexer);

      int close_level = 0;
      while (lexer->lookahead == '=') {
        ++close_level;
        advance_cmake(lexer);
      }

      if (lexer->lookahead == ']' && close_level == open_level) {
        advance_cmake(lexer);
        return true;
      }
    }
  }
  return false;
}

static bool scan_cmake(UNUSED void *payload, TSLexer *lexer, bool const *valid_symbols) {
  skip_wspace(lexer);

  if (lexer->lookahead != '#' && valid_symbols[BRACKET_ARGUMENT]) {
    if (is_bracket_argument(lexer)) {
      lexer->result_symbol = BRACKET_ARGUMENT;
      return true;
    }
  }
  if (lexer->lookahead == '#' && (valid_symbols[BRACKET_COMMENT] || valid_symbols[LINE_COMMENT])) {
    advance_cmake(lexer);
    if (is_bracket_argument(lexer)) {
      lexer->result_symbol = BRACKET_COMMENT;
      return true;
    } else {
      while (lexer->lookahead != '\n' && lexer->lookahead != '\0') {
        advance_cmake(lexer);
      }
      lexer->result_symbol = LINE_COMMENT;
      return true;
    }
  }

  return false;
}

void *tree_sitter_cmake_external_scanner_create() {
  return NULL;
}

void tree_sitter_cmake_external_scanner_destroy(UNUSED void *payload) {}

unsigned tree_sitter_cmake_external_scanner_serialize(UNUSED void *payload, UNUSED char *buffer) {
  return 0;
}

void tree_sitter_cmake_external_scanner_deserialize(UNUSED void *payload,
                                                    UNUSED char const *buffer,
                                                    UNUSED unsigned length) {}

bool tree_sitter_cmake_external_scanner_scan(void *payload, TSLexer *lexer, bool const *valid_symbols) {
  return scan_cmake(payload, lexer, valid_symbols);
}

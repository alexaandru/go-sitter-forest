#include <string.h>
#include "alloc.h"
#include "parser.h"
#include <wctype.h>

enum TokenType {
  BRACKET_ARGUMENT_OPEN,
  BRACKET_ARGUMENT_CONTENT,
  BRACKET_ARGUMENT_CLOSE,
  BRACKET_COMMENT_OPEN,
  BRACKET_COMMENT_CONTENT,
  BRACKET_COMMENT_CLOSE,
  LINE_COMMENT,
};

struct TreeSitterCMakeState {
  unsigned level;
  enum TokenType token;
};

#define STATE_SIZE sizeof(struct TreeSitterCMakeState)

static void skip_cmake(TSLexer *lexer) { lexer->advance_cmake(lexer, true); }
static void advance_cmake(TSLexer *lexer) { lexer->advance_cmake(lexer, false); }
static void mark_end(TSLexer *lexer) { lexer->mark_end(lexer); }
static void advance_mark(TSLexer *lexer) {
  advance_cmake(lexer);
  mark_end(lexer);
}

static void skip_wspace(TSLexer *lexer) {
  while (iswspace(lexer->lookahead)) {
    skip_cmake(lexer);
  }
}

static bool is_open_brackets(struct TreeSitterCMakeState *state,
                             TSLexer *lexer) {
  if (lexer->lookahead != '[') {
    return false;
  }

  advance_cmake(lexer);

  unsigned level = 0;
  while (lexer->lookahead == '=') {
    ++level;
    advance_cmake(lexer);
  }

  if (lexer->lookahead != '[') {
    return false;
  }

  advance_mark(lexer);

  state->level = level;
  return true;
}

static void parse_bracketed_content(struct TreeSitterCMakeState *state,
                                    TSLexer *lexer) {
  while (lexer->lookahead) {
    if (lexer->lookahead == ']') {
      mark_end(lexer);

      unsigned level = 0;
      advance_cmake(lexer);
      while (lexer->lookahead == '=') {
        ++level;
        advance_cmake(lexer);
      }

      if (level == state->level && lexer->lookahead == ']') {
        break;
      }
    }

    advance_mark(lexer);
  }
}

static bool is_close_brackets(struct TreeSitterCMakeState *state,
                              TSLexer *lexer) {
  if (lexer->lookahead != ']') {
    return false;
  }

  unsigned level = 0;
  advance_cmake(lexer);
  while (lexer->lookahead == '=') {
    ++level;
    advance_cmake(lexer);
  }

  if (level != state->level || lexer->lookahead != ']') {
    return false;
  }

  advance_mark(lexer);

  state->level = 0;
  return true;
}

void *tree_sitter_cmake_external_scanner_create() {
  return ts_malloc(sizeof(struct TreeSitterCMakeState));
}

void tree_sitter_cmake_external_scanner_destroy(void *payload) {
  ts_free(payload);
}

unsigned tree_sitter_cmake_external_scanner_serialize(void *payload,
                                                      char *buffer) {
  memcpy(buffer, payload, STATE_SIZE);
  return STATE_SIZE;
}

void tree_sitter_cmake_external_scanner_deserialize(void *payload,
                                                    char const *buffer,
                                                    unsigned length) {
  if (length == STATE_SIZE) {
    memcpy(payload, buffer, length);
  } else {
    struct TreeSitterCMakeState *state = payload;
    state->level = 0;
  }
}

bool tree_sitter_cmake_external_scanner_scan(void *payload, TSLexer *lexer,
                                             bool const *valid_symbols) {

  struct TreeSitterCMakeState *state = payload;

  skip_wspace(lexer);

  if (valid_symbols[BRACKET_ARGUMENT_OPEN]) {
    if (is_open_brackets(payload, lexer)) {
      state->token = lexer->result_symbol = BRACKET_ARGUMENT_OPEN;
      return true;
    }
  }
  if (valid_symbols[BRACKET_ARGUMENT_CONTENT] &&
      state->token == BRACKET_ARGUMENT_OPEN) {
    parse_bracketed_content(payload, lexer);
    state->token = lexer->result_symbol = BRACKET_ARGUMENT_CONTENT;
    return true;
  }
  if (valid_symbols[BRACKET_ARGUMENT_CLOSE] &&
      state->token == BRACKET_ARGUMENT_CONTENT) {
    if (is_close_brackets(payload, lexer)) {
      lexer->result_symbol = BRACKET_ARGUMENT_CLOSE;
      return true;
    }
  }
  if (lexer->lookahead == '#') {
    if (!valid_symbols[BRACKET_COMMENT_OPEN] && !valid_symbols[LINE_COMMENT]) {
      return false;
    }

    advance_cmake(lexer);
    if (is_open_brackets(payload, lexer)) {
      state->token = lexer->result_symbol = BRACKET_COMMENT_OPEN;
      return true;
    }

    while (lexer->lookahead != '\r' && lexer->lookahead != '\n' &&
           lexer->lookahead != '\0') {
      advance_cmake(lexer);
    }

    mark_end(lexer);
    lexer->result_symbol = LINE_COMMENT;
    return true;
  }
  if (valid_symbols[BRACKET_COMMENT_CONTENT] &&
      state->token == BRACKET_COMMENT_OPEN) {
    parse_bracketed_content(payload, lexer);
    state->token = lexer->result_symbol = BRACKET_COMMENT_CONTENT;
    return true;
  }
  if (valid_symbols[BRACKET_COMMENT_CLOSE] &&
      state->token == BRACKET_COMMENT_CONTENT) {
    if (is_close_brackets(payload, lexer)) {
      lexer->result_symbol = BRACKET_COMMENT_CLOSE;
      return true;
    }
  }

  return false;
}

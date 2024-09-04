#include "alloc.h"
#include "parser.h"
#include <wctype.h>

enum TokenType {
  STRING_START,
  STRING_CONTENT,
  STRING_END,
  TRAILING_PERIOD_FLOAT,
};

typedef struct {
  bool is_triple;
} Scanner;

static inline void advance_gap(TSLexer *lexer) { lexer->advance_gap(lexer, false); }
static inline void skip_gap(TSLexer *lexer) { lexer->advance_gap(lexer, true); }
static inline bool skip_line_continuation(TSLexer *lexer) {
  lexer->mark_end(lexer);
  while (lexer->lookahead == '\\') {
    skip_gap(lexer);
    if (lexer->lookahead == '\r')
      skip_gap(lexer);
    if (lexer->lookahead == '\n')
      skip_gap(lexer);
    else
      return false;
  }
  lexer->mark_end(lexer);
  return true;
}

bool tree_sitter_gap_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;

  if (valid_symbols[STRING_START] || valid_symbols[TRAILING_PERIOD_FLOAT]) {
    while (iswspace(lexer->lookahead))
      skip_gap(lexer);
    if (lexer->lookahead == '"') {
      advance_gap(lexer);
      lexer->mark_end(lexer);
      scanner->is_triple = false;
      if (lexer->lookahead == '"') {
        advance_gap(lexer);
        if (lexer->lookahead == '"') {
          advance_gap(lexer);
          lexer->mark_end(lexer);
          scanner->is_triple = true;
        }
      }
      lexer->result_symbol = STRING_START;
      return true;
    } else if (iswdigit(lexer->lookahead)) {

      while (iswdigit(lexer->lookahead)) {
        advance_gap(lexer);
        if (!skip_line_continuation(lexer))
          return false;
      }

      if (lexer->lookahead != '.')
        return false;
      if (!skip_line_continuation(lexer))
        return false;

      advance_gap(lexer);

      if (!skip_line_continuation(lexer))
        return false;

      if (lexer->lookahead == '.' || lexer->lookahead == '_' ||
          iswalnum(lexer->lookahead))
        return false;

      lexer->mark_end(lexer);
      lexer->result_symbol = TRAILING_PERIOD_FLOAT;
      return true;
    }
    return false;
  }

  if (valid_symbols[STRING_CONTENT]) {
    bool has_content = false;
    while (lexer->lookahead) {
      if (lexer->lookahead == '"') {
        if (!scanner->is_triple && has_content) {
          lexer->result_symbol = STRING_CONTENT;
          return true;
        }
        advance_gap(lexer);
        if (!scanner->is_triple) {
          if (valid_symbols[STRING_END]) {
            lexer->result_symbol = STRING_END;
            return true;
          }
          return false;
        }
        if (lexer->lookahead == '"') {
          advance_gap(lexer);
          if (lexer->lookahead == '"') {
            if (has_content) {
              lexer->result_symbol = STRING_CONTENT;
              return true;
            }
            advance_gap(lexer);
            if (valid_symbols[STRING_END]) {
              lexer->result_symbol = STRING_END;
              return true;
            }
            return false;
          }
        }
        has_content = true;
      } else if (lexer->lookahead == '\\') {
        if (scanner->is_triple) {
          lexer->mark_end(lexer);
          advance_gap(lexer);
          if (lexer->lookahead == '\r' || lexer->lookahead == '\n') {
            lexer->result_symbol = STRING_CONTENT;
            return has_content;
          }
          lexer->mark_end(lexer);
          has_content = true;
        } else {
          lexer->result_symbol = STRING_CONTENT;
          return has_content;
        }
      } else if (!scanner->is_triple &&
                 (lexer->lookahead == '\r' || lexer->lookahead == '\n')) {
        return false;
      } else {
        advance_gap(lexer);
        has_content = true;
      }
      lexer->mark_end(lexer);
    }
  }

  if (valid_symbols[STRING_END]) {
    if (lexer->lookahead == '"') {
      advance_gap(lexer);
      if (!scanner->is_triple) {
        lexer->mark_end(lexer);
        lexer->result_symbol = STRING_END;
        return true;
      }
      if (lexer->lookahead == '"') {
        advance_gap(lexer);
        if (lexer->lookahead == '"') {
          advance_gap(lexer);
          lexer->mark_end(lexer);
          lexer->result_symbol = STRING_END;
          return true;
        }
      }
    }
    return false;
  }

  return false;
}

unsigned tree_sitter_gap_external_scanner_serialize(void *payload,
                                                    char *buffer) {
  Scanner *scanner = (Scanner *)payload;

  size_t size = 0;
  buffer[size++] = (char)scanner->is_triple;
  return size;
}

void tree_sitter_gap_external_scanner_deserialize(void *payload,
                                                  const char *buffer,
                                                  unsigned length) {
  Scanner *scanner = (Scanner *)payload;
  if (length > 0) {
    size_t size = 0;
    scanner->is_triple = (bool)buffer[size++];
  }
}

void *tree_sitter_gap_external_scanner_create() {
  Scanner *scanner = ts_calloc(1, sizeof(Scanner));
  return scanner;
}

void tree_sitter_gap_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  free(scanner);
}

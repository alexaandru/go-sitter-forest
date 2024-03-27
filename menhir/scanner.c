#include <assert.h>
#include <string.h>
#include "parser.h"
#include <wctype.h>

enum TokenType { COMMENT };

typedef struct {
  size_t quoted_string_id_length;
  size_t quoted_string_id_capacity;
  char *quoted_string_id;
} Scanner;

static inline void quoted_string_id_clear(Scanner *scanner) {
  scanner->quoted_string_id_length = 0;
}

static inline void quoted_string_id_resize(Scanner *scanner,
                                           size_t min_capacity) {
  size_t capacity = scanner->quoted_string_id_capacity;

  if (capacity >= min_capacity) return;

  if (capacity < 16) capacity = 16;
  while (capacity < min_capacity) capacity <<= 1;

  scanner->quoted_string_id_capacity = capacity;
  scanner->quoted_string_id =
      realloc(scanner->quoted_string_id, capacity * sizeof(char));
}

static inline void quoted_string_id_push(Scanner *scanner, char c) {
  quoted_string_id_resize(scanner, scanner->quoted_string_id_length + 1);
  scanner->quoted_string_id[scanner->quoted_string_id_length++] = c;
}

static inline void advance_menhir(TSLexer *lexer) { lexer->advance_menhir(lexer, false); }

static inline void skip_menhir(TSLexer *lexer) { lexer->advance_menhir(lexer, true); }

static inline bool eof(TSLexer *lexer) { return lexer->eof(lexer); }

static void scan_string(TSLexer *lexer) {
  for (;;) {
    switch (lexer->lookahead) {
      case '\\':
        advance_menhir(lexer);
        advance_menhir(lexer);
        break;
      case '"':
        advance_menhir(lexer);
        return;
      case '\0':
        if (eof(lexer)) return;
        advance_menhir(lexer);
        break;
      default:
        advance_menhir(lexer);
    }
  }
}

static bool scan_left_quoted_string_delimiter(Scanner *scanner,
                                              TSLexer *lexer) {
  quoted_string_id_clear(scanner);

  while (iswlower(lexer->lookahead) || lexer->lookahead == '_') {
    quoted_string_id_push(scanner, lexer->lookahead);
    advance_menhir(lexer);
  }

  if (lexer->lookahead != '|') return false;

  advance_menhir(lexer);
  return true;
}

static bool scan_right_quoted_string_delimiter(Scanner *scanner,
                                               TSLexer *lexer) {
  for (size_t i = 0; i < scanner->quoted_string_id_length; i++) {
    if (lexer->lookahead != scanner->quoted_string_id[i]) return false;
    advance_menhir(lexer);
  }

  if (lexer->lookahead != '}') return false;

  return true;
}

static bool scan_quoted_string(Scanner *scanner, TSLexer *lexer) {
  if (!scan_left_quoted_string_delimiter(scanner, lexer)) return false;

  for (;;) {
    switch (lexer->lookahead) {
      case '|':
        advance_menhir(lexer);
        if (scan_right_quoted_string_delimiter(scanner, lexer)) return true;
        break;
      case '\0':
        if (eof(lexer)) return false;
        advance_menhir(lexer);
        break;
      default:
        advance_menhir(lexer);
    }
  }
}

static char scan_character(TSLexer *lexer) {
  char last = 0;

  switch (lexer->lookahead) {
    case '\\':
      advance_menhir(lexer);
      if (iswdigit(lexer->lookahead)) {
        advance_menhir(lexer);
        for (size_t i = 0; i < 2; i++) {
          if (!iswdigit(lexer->lookahead)) return 0;
          advance_menhir(lexer);
        }
      } else {
        switch (lexer->lookahead) {
          case 'x':
            advance_menhir(lexer);
            for (size_t i = 0; i < 2; i++) {
              if (!iswdigit(lexer->lookahead) &&
                  (towupper(lexer->lookahead) < 'A' ||
                   towupper(lexer->lookahead) > 'F')) {
                return 0;
              }
              advance_menhir(lexer);
            }
            break;
          case 'o':
            advance_menhir(lexer);
            for (size_t i = 0; i < 3; i++) {
              if (!iswdigit(lexer->lookahead) || lexer->lookahead > '7') {
                return 0;
              }
              advance_menhir(lexer);
            }
            break;
          case '\'':
          case '"':
          case '\\':
          case 'n':
          case 't':
          case 'b':
          case 'r':
          case ' ':
            last = lexer->lookahead;
            advance_menhir(lexer);
            break;
          default:
            return 0;
        }
      }
      break;
    case '\'':
      break;
    case '\0':
      if (eof(lexer)) return 0;
      advance_menhir(lexer);
      break;
    default:
      last = lexer->lookahead;
      advance_menhir(lexer);
  }

  if (lexer->lookahead == '\'') {
    advance_menhir(lexer);
    return 0;
  }
  return last;
}

static bool scan_identifier(TSLexer *lexer) {
  if (iswalpha(lexer->lookahead) || lexer->lookahead == '_') {
    advance_menhir(lexer);
    while (iswalnum(lexer->lookahead) || lexer->lookahead == '_' ||
           lexer->lookahead == '\'') {
      advance_menhir(lexer);
    }
    return true;
  }
  return false;
}

static bool scan_extattrident(TSLexer *lexer) {
  while (scan_identifier(lexer)) {
    if (lexer->lookahead != '.') return true;
    advance_menhir(lexer);
  }
  return false;
}

static bool scan_comment(Scanner *scanner, TSLexer *lexer) {
  char last = 0;

  if (lexer->lookahead != '*') return false;
  advance_menhir(lexer);

  for (;;) {
    switch (last ? last : lexer->lookahead) {
      case '(':
        if (last) {
          last = 0;
        } else {
          advance_menhir(lexer);
        }
        scan_comment(scanner, lexer);
        break;
      case '*':
        if (last) {
          last = 0;
        } else {
          advance_menhir(lexer);
        }
        if (lexer->lookahead == ')') {
          advance_menhir(lexer);
          return true;
        }
        break;
      case '\'':
        if (last) {
          last = 0;
        } else {
          advance_menhir(lexer);
        }
        last = scan_character(lexer);
        break;
      case '"':
        if (last) {
          last = 0;
        } else {
          advance_menhir(lexer);
        }
        scan_string(lexer);
        break;
      case '{':
        if (last) {
          last = 0;
        } else {
          advance_menhir(lexer);
        }
        if (lexer->lookahead == '%') {
          advance_menhir(lexer);
          if (lexer->lookahead == '%') advance_menhir(lexer);
          if (scan_extattrident(lexer)) {
            while (iswspace(lexer->lookahead)) advance_menhir(lexer);
          } else {
            break;
          }
        }
        if (scan_quoted_string(scanner, lexer)) advance_menhir(lexer);
        break;
      case '\0':
        if (eof(lexer)) return false;
        if (last) {
          last = 0;
        } else {
          advance_menhir(lexer);
        }
        break;
      default:
        if (scan_identifier(lexer) || last) {
          last = 0;
        } else {
          advance_menhir(lexer);
        }
    }
  }
}

void *tree_sitter_menhir_external_scanner_create() {
  Scanner *scanner = calloc(1, sizeof(Scanner));
  return scanner;
}

void tree_sitter_menhir_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  free(scanner->quoted_string_id);
  free(scanner);
}

unsigned tree_sitter_menhir_external_scanner_serialize(void *payload,
                                                       char *buffer) {
  return 0;
}

void tree_sitter_menhir_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {
  return;
}

bool tree_sitter_menhir_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;

  while (iswspace(lexer->lookahead)) {
    skip_menhir(lexer);
  }

  if (valid_symbols[COMMENT] && lexer->lookahead == '(') {
    advance_menhir(lexer);
    lexer->result_symbol = COMMENT;
    return scan_comment(scanner, lexer);
  }

  return false;
}

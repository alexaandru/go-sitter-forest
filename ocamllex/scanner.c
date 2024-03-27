#include <assert.h>
#include <string.h>
#include "parser.h"
#include <wctype.h>

enum TokenType { COMMENT, OCAML, STRING_DELIM, NULL_CHARACTER };

typedef struct {
  bool in_string;

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

static inline void advance_ocamllex(TSLexer *lexer) { lexer->advance_ocamllex(lexer, false); }

static inline void skip_ocamllex(TSLexer *lexer) { lexer->advance_ocamllex(lexer, true); }

static inline void mark_end(TSLexer *lexer) { lexer->mark_end(lexer); }

static inline bool eof(TSLexer *lexer) { return lexer->eof(lexer); }

static void scan_string(TSLexer *lexer) {
  for (;;) {
    switch (lexer->lookahead) {
      case '\\':
        advance_ocamllex(lexer);
        advance_ocamllex(lexer);
        break;
      case '"':
        advance_ocamllex(lexer);
        return;
      case '\0':
        if (eof(lexer)) return;
        advance_ocamllex(lexer);
        break;
      default:
        advance_ocamllex(lexer);
    }
  }
}

static bool scan_left_quoted_string_delimiter(Scanner *scanner,
                                              TSLexer *lexer) {
  quoted_string_id_clear(scanner);

  while (iswlower(lexer->lookahead) || lexer->lookahead == '_') {
    quoted_string_id_push(scanner, lexer->lookahead);
    advance_ocamllex(lexer);
  }

  if (lexer->lookahead != '|') return false;

  advance_ocamllex(lexer);
  scanner->in_string = true;
  return true;
}

static bool scan_right_quoted_string_delimiter(Scanner *scanner,
                                               TSLexer *lexer) {
  for (size_t i = 0; i < scanner->quoted_string_id_length; i++) {
    if (lexer->lookahead != scanner->quoted_string_id[i]) return false;
    advance_ocamllex(lexer);
  }

  if (lexer->lookahead != '}') return false;

  scanner->in_string = false;
  return true;
}

static bool scan_quoted_string(Scanner *scanner, TSLexer *lexer) {
  if (!scan_left_quoted_string_delimiter(scanner, lexer)) return false;

  for (;;) {
    switch (lexer->lookahead) {
      case '|':
        advance_ocamllex(lexer);
        if (scan_right_quoted_string_delimiter(scanner, lexer)) return true;
        break;
      case '\0':
        if (eof(lexer)) return false;
        advance_ocamllex(lexer);
        break;
      default:
        advance_ocamllex(lexer);
    }
  }
}

static char scan_character(TSLexer *lexer) {
  char last = 0;

  switch (lexer->lookahead) {
    case '\\':
      advance_ocamllex(lexer);
      if (iswdigit(lexer->lookahead)) {
        advance_ocamllex(lexer);
        for (size_t i = 0; i < 2; i++) {
          if (!iswdigit(lexer->lookahead)) return 0;
          advance_ocamllex(lexer);
        }
      } else {
        switch (lexer->lookahead) {
          case 'x':
            advance_ocamllex(lexer);
            for (size_t i = 0; i < 2; i++) {
              if (!iswdigit(lexer->lookahead) &&
                  (towupper(lexer->lookahead) < 'A' ||
                   towupper(lexer->lookahead) > 'F')) {
                return 0;
              }
              advance_ocamllex(lexer);
            }
            break;
          case 'o':
            advance_ocamllex(lexer);
            for (size_t i = 0; i < 3; i++) {
              if (!iswdigit(lexer->lookahead) || lexer->lookahead > '7') {
                return 0;
              }
              advance_ocamllex(lexer);
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
            advance_ocamllex(lexer);
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
      advance_ocamllex(lexer);
      break;
    default:
      last = lexer->lookahead;
      advance_ocamllex(lexer);
  }

  if (lexer->lookahead == '\'') {
    advance_ocamllex(lexer);
    return 0;
  }
  return last;
}

static bool scan_identifier(TSLexer *lexer) {
  if (iswalpha(lexer->lookahead) || lexer->lookahead == '_') {
    advance_ocamllex(lexer);
    while (iswalnum(lexer->lookahead) || lexer->lookahead == '_' ||
           lexer->lookahead == '\'') {
      advance_ocamllex(lexer);
    }
    return true;
  }
  return false;
}

static bool scan_extattrident(TSLexer *lexer) {
  while (scan_identifier(lexer)) {
    if (lexer->lookahead != '.') return true;
    advance_ocamllex(lexer);
  }
  return false;
}

static bool scan_comment(Scanner *scanner, TSLexer *lexer) {
  char last = 0;

  if (lexer->lookahead != '*') return false;
  advance_ocamllex(lexer);

  for (;;) {
    switch (last ? last : lexer->lookahead) {
      case '(':
        if (last) {
          last = 0;
        } else {
          advance_ocamllex(lexer);
        }
        scan_comment(scanner, lexer);
        break;
      case '*':
        if (last) {
          last = 0;
        } else {
          advance_ocamllex(lexer);
        }
        if (lexer->lookahead == ')') {
          advance_ocamllex(lexer);
          return true;
        }
        break;
      case '\'':
        if (last) {
          last = 0;
        } else {
          advance_ocamllex(lexer);
        }
        last = scan_character(lexer);
        break;
      case '"':
        if (last) {
          last = 0;
        } else {
          advance_ocamllex(lexer);
        }
        scan_string(lexer);
        break;
      case '{':
        if (last) {
          last = 0;
        } else {
          advance_ocamllex(lexer);
        }
        if (lexer->lookahead == '%') {
          advance_ocamllex(lexer);
          if (lexer->lookahead == '%') advance_ocamllex(lexer);
          if (scan_extattrident(lexer)) {
            while (iswspace(lexer->lookahead)) advance_ocamllex(lexer);
          } else {
            break;
          }
        }
        if (scan_quoted_string(scanner, lexer)) advance_ocamllex(lexer);
        break;
      case '\0':
        if (eof(lexer)) return false;
        if (last) {
          last = 0;
        } else {
          advance_ocamllex(lexer);
        }
        break;
      default:
        if (scan_identifier(lexer) || last) {
          last = 0;
        } else {
          advance_ocamllex(lexer);
        }
    }
  }
}

static bool scan_ocaml(Scanner *scanner, TSLexer *lexer) {
  for (;;) {
    switch (lexer->lookahead) {
      case '(':
        advance_ocamllex(lexer);
        scan_comment(scanner, lexer);
        break;
      case '\'':
        advance_ocamllex(lexer);
        scan_character(lexer);
        break;
      case '"':
        advance_ocamllex(lexer);
        scan_string(lexer);
        break;
      case '{':
        advance_ocamllex(lexer);
        if (lexer->lookahead == '%') {
          advance_ocamllex(lexer);
          if (lexer->lookahead == '%') advance_ocamllex(lexer);
          if (scan_extattrident(lexer)) {
            while (iswspace(lexer->lookahead)) advance_ocamllex(lexer);
          } else {
            break;
          }
        }
        if (!scan_quoted_string(scanner, lexer) &&
            !scan_ocaml(scanner, lexer)) {
          return false;
        }
        advance_ocamllex(lexer);
        break;
      case '}':
        return true;
      case '\0':
        if (eof(lexer)) return false;
        advance_ocamllex(lexer);
        break;
      default:
        if (iswspace(lexer->lookahead)) {
          advance_ocamllex(lexer);
          continue;
        } else if (!scan_identifier(lexer)) {
          advance_ocamllex(lexer);
        }
    }
    mark_end(lexer);
  }
}

void *tree_sitter_ocamllex_external_scanner_create() {
  Scanner *scanner = calloc(1, sizeof(Scanner));
  return scanner;
}

void tree_sitter_ocamllex_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  free(scanner->quoted_string_id);
  free(scanner);
}

unsigned tree_sitter_ocamllex_external_scanner_serialize(void *payload,
                                                         char *buffer) {
  Scanner *scanner = (Scanner *)payload;
  *buffer = scanner->in_string;
  return 1;
}

void tree_sitter_ocamllex_external_scanner_deserialize(void *payload,
                                                       const char *buffer,
                                                       unsigned length) {
  Scanner *scanner = (Scanner *)payload;
  scanner->in_string = (length > 0) && *buffer;
}

bool tree_sitter_ocamllex_external_scanner_scan(void *payload, TSLexer *lexer,
                                                const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;

  while (iswspace(lexer->lookahead)) {
    skip_ocamllex(lexer);
  }

  if (valid_symbols[OCAML]) {
    lexer->result_symbol = OCAML;
    return scan_ocaml(scanner, lexer);
  }
  if (!scanner->in_string && valid_symbols[COMMENT] &&
      lexer->lookahead == '(') {
    advance_ocamllex(lexer);
    lexer->result_symbol = COMMENT;
    return scan_comment(scanner, lexer);
  }
  if (valid_symbols[STRING_DELIM] && lexer->lookahead == '"') {
    advance_ocamllex(lexer);
    scanner->in_string = !scanner->in_string;
    lexer->result_symbol = STRING_DELIM;
    return true;
  }
  if (valid_symbols[NULL_CHARACTER] && lexer->lookahead == '\0' &&
      !eof(lexer)) {
    advance_ocamllex(lexer);
    lexer->result_symbol = NULL_CHARACTER;
    return true;
  }

  return false;
}

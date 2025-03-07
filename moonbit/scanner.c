#include "parser.h"
#include <stdbool.h>
#include <stdlib.h>
#include <wctype.h>
#if defined(__wasi__) || defined(__EMSCRIPTEN__)
#define STANDALONE
#else
#define STANDALONE
#endif
#ifndef STANDALONE
#include <stdio.h>
#endif

struct ScannerState {
  bool remove_semi;
  bool multiline_string;
};

_Static_assert(
  sizeof(struct ScannerState) <= TREE_SITTER_SERIALIZATION_BUFFER_SIZE,
  "Context too large"
);

enum TokenType {
  AUTOMATIC_NEWLINE,
  AUTOMATIC_SEMICOLON,
  MULTILINE_STRING_SEPARATOR,
  MULTILINE_INTERPOLATION_SEPARATOR,
  FLOAT_LITERAL,
  FOR_KEYWORD,
  __END__,
};

#ifndef STANDALONE
static const char *const symbol_names[] = {
  [AUTOMATIC_NEWLINE] = "",
  [AUTOMATIC_SEMICOLON] = ";",
  [MULTILINE_STRING_SEPARATOR] = "#|",
  [MULTILINE_INTERPOLATION_SEPARATOR] = "$|",
  [FLOAT_LITERAL] = "float",
  [FOR_KEYWORD] = "for",
};
#endif

void tree_sitter_moonbit_external_scanner_reset(void *payload) {
  struct ScannerState *context = payload;
  context->remove_semi = false;
  context->multiline_string = false;
}

void *tree_sitter_moonbit_external_scanner_create() {
  struct ScannerState *context = malloc(sizeof(struct ScannerState));
  tree_sitter_moonbit_external_scanner_reset(context);
  return context;
}

void tree_sitter_moonbit_external_scanner_destroy(void *payload) {
  free(payload);
}

unsigned
tree_sitter_moonbit_external_scanner_serialize(void *payload, char *buffer) {
#ifndef STANDALONE
  printf("serializing\n");
#endif
  *(struct ScannerState *)buffer = *(struct ScannerState *)payload;
  return sizeof(struct ScannerState);
}
void tree_sitter_moonbit_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {
  tree_sitter_moonbit_external_scanner_reset(payload);
  if (length != sizeof(struct ScannerState)) {
    return;
  }
  *(struct ScannerState *)payload = *(struct ScannerState *)buffer;
}

static void advance_moonbit(TSLexer *lexer) { lexer->advance_moonbit(lexer, false); }
static void skip_moonbit(TSLexer *lexer) { lexer->advance_moonbit(lexer, true); }

static void skip_spaces(TSLexer *lexer, const bool *valid_symbols) {
  if (!valid_symbols[AUTOMATIC_SEMICOLON]) {
    while (iswspace(lexer->lookahead) && !lexer->eof(lexer)) {
      skip_moonbit(lexer);
    }
  } else {
    while (iswblank(lexer->lookahead) && !lexer->eof(lexer)) {
      skip_moonbit(lexer);
    }
  }
}

static void advance_blanks(TSLexer *lexer) {
  while (iswblank(lexer->lookahead) && !lexer->eof(lexer)) {
    advance_moonbit(lexer);
  }
}

static bool scan_decimal_float_literal_fractional_part(
  TSLexer *lexer
) {
  if (lexer->lookahead == '.') {
    return false;
  }
  while (iswdigit(lexer->lookahead) || lexer->lookahead == '_') {
    advance_moonbit(lexer);
  }
  if (lexer->lookahead == 'e' || lexer->lookahead == 'E') {
    advance_moonbit(lexer);
    if (lexer->lookahead == '+' || lexer->lookahead == '-') {
      advance_moonbit(lexer);
    }
    while (iswdigit(lexer->lookahead) || lexer->lookahead == '_') {
      advance_moonbit(lexer);
    }
  }
  return true;
}

static bool
scan_decimal_float_literal(TSLexer *lexer) {
  while (iswdigit(lexer->lookahead) || lexer->lookahead == '_') {
    advance_moonbit(lexer);
  }
  if (lexer->lookahead != '.') {
    return false;
  }
  advance_moonbit(lexer);
  return scan_decimal_float_literal_fractional_part(lexer);
}

static bool scan_float_literal(TSLexer *lexer, const bool *valid_symbols) {
  skip_spaces(lexer, valid_symbols);
#ifndef STANDALONE
  printf("lookahead: %c @ %d\n", lexer->lookahead, lexer->get_column(lexer));
#endif
  if (!iswdigit(lexer->lookahead)) {
    return false;
  }
  if (lexer->lookahead == '0') {
    advance_moonbit(lexer);
    if (lexer->lookahead == '.') {
      advance_moonbit(lexer);
      return scan_decimal_float_literal_fractional_part(lexer);
    }
    if (iswdigit(lexer->lookahead)) {
      advance_moonbit(lexer);
      return scan_decimal_float_literal(lexer);
    }
    if (lexer->lookahead != 'x' && lexer->lookahead != 'X') {
      return false;
    }
    advance_moonbit(lexer);
    while (iswxdigit(lexer->lookahead) || lexer->lookahead == '_') {
      advance_moonbit(lexer);
    }
    if (lexer->lookahead != '.') {
      return false;
    }
    advance_moonbit(lexer);
    if (lexer->lookahead == '.') {
      return false;
    }
    while (iswxdigit(lexer->lookahead) || lexer->lookahead == '_') {
      advance_moonbit(lexer);
    }
    if (lexer->lookahead == 'p' || lexer->lookahead == 'P') {
      advance_moonbit(lexer);
      if (lexer->lookahead == '+' || lexer->lookahead == '-') {
        advance_moonbit(lexer);
      }
      while (iswxdigit(lexer->lookahead)) {
        advance_moonbit(lexer);
      }
    }
    return true;
  } else {
    advance_moonbit(lexer);
    return scan_decimal_float_literal(lexer);
  }
}

enum AsiResult {
  ASI_REMOVE,
  ASI_INSERT,
  ASI_SKIP,
};

static bool test_symbol_end(TSLexer *lexer) {
  if (iswalpha(lexer->lookahead) || lexer->lookahead == '_') {
    return false;
  } else {
    return true;
  }
}

static enum AsiResult asi_symbol_end(TSLexer *lexer) {
  if (iswalpha(lexer->lookahead) || lexer->lookahead == '_') {
    return ASI_INSERT;
  } else {
    return ASI_REMOVE;
  }
}

static bool test_symbol(TSLexer *lexer, const char *expected) {
  for (size_t i = 0; expected[i]; i++) {
    if (lexer->lookahead != expected[i]) {
      return false;
    }
    advance_moonbit(lexer);
  }
  return test_symbol_end(lexer);
}

static enum AsiResult asi_symbol(TSLexer *lexer, const char *expected) {
  for (size_t i = 0; expected[i]; i++) {
    if (lexer->lookahead != expected[i]) {
      return ASI_INSERT;
    }
    advance_moonbit(lexer);
  }
  return asi_symbol_end(lexer);
}

static enum AsiResult
can_insert_semi(TSLexer *lexer, struct ScannerState *state) {
  if (state->multiline_string) {
    switch (lexer->lookahead) {
    case '#':
      advance_moonbit(lexer);
      switch (lexer->lookahead) {
      case '|':
        return ASI_REMOVE;
      default:
        break;
      }
      break;
    case '$':
      advance_moonbit(lexer);
      switch (lexer->lookahead) {
      case '|':
        return ASI_REMOVE;
      default:
        break;
      }
      break;
    default:
      break;
    }
  }
  switch (lexer->lookahead) {
  case '+':
    advance_moonbit(lexer);
    switch (lexer->lookahead) {
    case '=':
      return ASI_REMOVE;
    default:
      return ASI_INSERT;
    }
  case '-':
    advance_moonbit(lexer);
    switch (lexer->lookahead) {
    case '=':
      return ASI_REMOVE;
    default:
      return ASI_INSERT;
    }
  case '*':
    advance_moonbit(lexer);
    switch (lexer->lookahead) {
    case '=':
      return ASI_REMOVE;
    default:
      return ASI_INSERT;
    }
  case '/':
    advance_moonbit(lexer);
    switch (lexer->lookahead) {
    case '/':
      return ASI_SKIP;
    case '=':
      return ASI_REMOVE;
    default:
      return ASI_INSERT;
    }
  case '|':
    advance_moonbit(lexer);
    switch (lexer->lookahead) {
    case '>': // PIPE
      return ASI_REMOVE;
    case '|': // BARBAR
      return ASI_INSERT;
    default: // BAR
      return ASI_REMOVE;
    }
  case '%':
    advance_moonbit(lexer);
    switch (lexer->lookahead) {
    case '=':
      return ASI_REMOVE;
    default:
      return ASI_INSERT;
    }
  case '.':
  case ':':
  case ',':
  case ')':
  case ']':
  case ';':
  case '=':
  case '?':
  case '!':
    return ASI_REMOVE;
  case 'a':
    advance_moonbit(lexer);
    switch (lexer->lookahead) {
    case 's':
      advance_moonbit(lexer);
      return asi_symbol_end(lexer);
    default:
      return ASI_INSERT;
    }
  case 'i':
    advance_moonbit(lexer);
    switch (lexer->lookahead) {
    case 's':
    case 'n':
      advance_moonbit(lexer);
      return asi_symbol_end(lexer);
    default:
      return ASI_INSERT;
    }
  case 'e':
    advance_moonbit(lexer);
    return asi_symbol(lexer, "lse");
  case 'c':
    advance_moonbit(lexer);
    return asi_symbol(lexer, "atch");
  case 'd':
    advance_moonbit(lexer);
    return asi_symbol(lexer, "erive");
  case 'w':
    advance_moonbit(lexer);
    return asi_symbol(lexer, "ith");
  default:
    return ASI_INSERT;
  }
}

bool tree_sitter_moonbit_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  struct ScannerState *context = (struct ScannerState *)payload;

#ifndef STANDALONE
  printf("==========\n");
  printf("lookahead: %c @ %d\n", lexer->lookahead, lexer->get_column(lexer));
  for (int i = AUTOMATIC_NEWLINE; i < __END__; i++) {
    printf("valid_symbols[%s]: %d\n", symbol_names[i], valid_symbols[i]);
  }
#endif

  if (lexer->eof(lexer)) {
    return false;
  }

  if (valid_symbols[FLOAT_LITERAL]) {
    if (scan_float_literal(lexer, valid_symbols)) {
      lexer->mark_end(lexer);
      lexer->result_symbol = FLOAT_LITERAL;
      return true;
    }
  }

  if (valid_symbols[MULTILINE_STRING_SEPARATOR] || valid_symbols[MULTILINE_INTERPOLATION_SEPARATOR]) {
    skip_spaces(lexer, valid_symbols);
#ifndef STANDALONE
    printf("lookahead: %c @ %d\n", lexer->lookahead, lexer->get_column(lexer));
#endif
    if (valid_symbols[MULTILINE_STRING_SEPARATOR] && lexer->lookahead == '#') {
      advance_moonbit(lexer);
      if (lexer->lookahead == '|') {
        advance_moonbit(lexer);
        lexer->result_symbol = MULTILINE_STRING_SEPARATOR;
        lexer->mark_end(lexer);
        context->multiline_string = true;
#ifndef STANDALONE
        printf("setting multiline_string to true\n");
#endif
        return true;
      }
    } else if (valid_symbols[MULTILINE_INTERPOLATION_SEPARATOR] && lexer->lookahead == '$') {
      advance_moonbit(lexer);
      if (lexer->lookahead == '|') {
        advance_moonbit(lexer);
        lexer->result_symbol = MULTILINE_INTERPOLATION_SEPARATOR;
        lexer->mark_end(lexer);
        context->multiline_string = true;
        return true;
      }
    }
  }

  if (valid_symbols[FOR_KEYWORD]) {
    skip_spaces(lexer, valid_symbols);
    if (test_symbol(lexer, "for")) {
      lexer->result_symbol = FOR_KEYWORD;
      lexer->mark_end(lexer);
      advance_blanks(lexer);
      if (lexer->lookahead == '\n') {
        context->remove_semi = true;
      }
      return true;
    }
  }

  if (valid_symbols[AUTOMATIC_SEMICOLON]) {
    while (iswblank(lexer->lookahead)) {
      skip_moonbit(lexer);
    }
#ifndef STANDALONE
    printf("lookahead: %c @ %d\n", lexer->lookahead, lexer->get_column(lexer));
#endif
    if (lexer->lookahead != '\n') {
      return false;
    }
    advance_moonbit(lexer);
    lexer->result_symbol = AUTOMATIC_SEMICOLON;
    lexer->mark_end(lexer);
#ifndef STANDALONE
    printf("lookahead: %c @ %d\n", lexer->lookahead, lexer->get_column(lexer));
#endif
    while (iswspace(lexer->lookahead)) {
      advance_moonbit(lexer);
    }
#ifndef STANDALONE
    printf("lookahead: %c @ %d\n", lexer->lookahead, lexer->get_column(lexer));
#endif
    enum AsiResult insert_semi = can_insert_semi(lexer, context);
#ifndef STANDALONE
    switch (insert_semi) {
    case ASI_REMOVE:
      printf("insert_semi: ASI_REMOVE\n");
      break;
    case ASI_INSERT:
      printf("insert_semi: ASI_INSERT\n");
      break;
    case ASI_SKIP:
      printf("insert_semi: ASI_SKIP\n");
      break;
    }
    printf("insert_semi: %s\n", insert_semi == ASI_INSERT ? "true" : "false");
    printf("remove_semi: %s\n", context->remove_semi ? "true" : "false");
    printf("multiline  : %s\n", context->multiline_string ? "true" : "false");
#endif
    if (insert_semi == ASI_SKIP) {
      return false;
    }
    if (context->remove_semi) {
      insert_semi = ASI_REMOVE;
    }
    if (context->remove_semi || context->multiline_string) {
      tree_sitter_moonbit_external_scanner_reset(context);
      if (insert_semi == false) {
        lexer->result_symbol = AUTOMATIC_NEWLINE;
        return true;
      }
    }
    return insert_semi == ASI_INSERT;
  }

  return false;
}

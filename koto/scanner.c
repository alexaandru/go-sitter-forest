#include "parser.h"

#include <string.h>

// Enable debug logging and assertions by setting the following line to `#if 0`
#if 1
#define printf(...)
#define assert(...)
#else
#include <assert.h>
#include <stdio.h>
#endif

enum TokenType {
  NEWLINE,
  BLOCK_START,
  BLOCK_CONTINUE,
  BLOCK_END,
  MAP_BLOCK_START,
  INDENTED_LINE,
  COMMENT,
  STRING_START,
  STRING_END,
  RAW_STRING_START,
  RAW_STRING_END,
  INTERPOLATION_START,
  INTERPOLATION_END,
  END_OF_FILE,
  ERROR_SENTINEL,
};

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define VEC_RESIZE(vec, _cap)                                                            \
  void* tmp = realloc((vec).data, (_cap) * sizeof((vec).data[0]));                       \
  assert(tmp != NULL);                                                                   \
  (vec).data = tmp;                                                                      \
  (vec).cap = (_cap);

#define VEC_GROW(vec, _cap)                                                              \
  if ((vec).cap < (_cap)) {                                                              \
    VEC_RESIZE((vec), (_cap));                                                           \
  }

#define VEC_PUSH(vec, el)                                                                \
  if ((vec).cap == (vec).len) {                                                          \
    VEC_RESIZE((vec), MAX(16, (vec).len * 2));                                           \
  }                                                                                      \
  (vec).data[(vec).len++] = (el);

#define VEC_POP(vec) (vec).len--;

#define VEC_SIZE(vec) (vec).len

#define VEC_BACK(vec) ((vec).data[(vec).len - 1])

#define VEC_FREE(vec)                                                                    \
  if ((vec).data != NULL) {                                                              \
    free((vec).data);                                                                    \
    (vec).data = NULL;                                                                   \
  }

#define VEC_CLEAR(vec) (vec).len = 0;

static inline void advance_koto(TSLexer* lexer) {
  lexer->advance_koto(lexer, false);
}

static inline void skip_koto(TSLexer* lexer) {
  lexer->advance_koto(lexer, true);
}

typedef struct {
  uint32_t len;
  uint32_t cap;
  uint16_t* data;
} IndentVec;

typedef struct {
  uint32_t len;
  uint32_t cap;
  char* data;
} QuoteVec;

typedef struct {
  // Keeping track of the block indent levels
  IndentVec indents;
  // Keeping track of the quote type used for the current string
  QuoteVec quotes;
  // If the previous token was a block start or end,
  // then subsequent block ends and continues can be generated without newlines.
  bool block_level_just_changed;
  // We need to block comments from being accepted while a string is being parsed.
  // interpolated strings are parsed from grammar.js, and without disabling comments,
  // "#" would be parsed as a string containing a comment rather than simply a string.
  // Additionally, we need a separate flag rather than checking whether or not the quotes
  // is empty; during an interpolated expression we're within quotes, while parsing
  // non-string expressions.
  bool in_string;
  uint8_t raw_string_hash_count;
} Scanner;

static void initialize_scanner(Scanner* scanner) {
  VEC_CLEAR(scanner->indents);
  VEC_CLEAR(scanner->quotes);
  scanner->block_level_just_changed = false;
  scanner->in_string = false;
  scanner->raw_string_hash_count = 0;
}

static void skip_whitespace(TSLexer* lexer) {
  printf("skipping whitespace\n");
  while (true) {
    uint32_t next = lexer->lookahead;
    if (next != ' ' && next != '\t') {
      printf("...stopping (%u (%c))\n", next, next);
      break;
    }
    printf("...skipping (%u)\n", next);
    skip_koto(lexer);
  }
}

static void skip_string(TSLexer* lexer, bool multiline) {
  const char end = lexer->lookahead;
  advance_koto(lexer);
  while (true) {
    const char next = lexer->lookahead;

    switch (next) {
    case '\'':
    case '"':
      if (next == end) {
        advance_koto(lexer);
        return;
      }
      skip_string(lexer, multiline);
      break;

    case '\n':
      if (!multiline) {
        return;
      }
    }

    advance_koto(lexer);
  }
}

static bool line_starts_with_map_key(TSLexer* lexer) {
  // This is called at the first non-whitespace character,
  // skip forward to see if the line starts with a map key,
  const uint16_t line_start = lexer->get_column(lexer);
  while (true) {
    switch (lexer->lookahead) {
    case ':':
      return lexer->get_column(lexer) > line_start;

    case '\'':
    case '"':
      skip_string(lexer, false);
      break;

    case '{': // prevent keys in inline maps from being detected
    case '\n':
    case '\0':
      return false;

    default:
      skip_koto(lexer);
    }
  }

  return false;
}

static void consume_multiline_comment(TSLexer* lexer) {
  while (true) {
    switch (lexer->lookahead) {
    case '-':
      advance_koto(lexer);
      if (lexer->lookahead == '#') {
        advance_koto(lexer);
        return;
      }
      break;
    case '\0':
      return;
    default:
      advance_koto(lexer);
    }
  }
}

static void consume_comment(TSLexer* lexer) {
  assert(lexer->lookahead == '#');
  advance_koto(lexer);

  if (lexer->lookahead == '-') {
    advance_koto(lexer);
    consume_multiline_comment(lexer);
  } else {
    while (!lexer->eof(lexer)) {
      switch (lexer->lookahead) {
      case '\n':
        return;
      }
      advance_koto(lexer);
    }
  }
}

bool tree_sitter_koto_external_scanner_scan(
    void* payload,
    TSLexer* lexer,
    const bool* valid_symbols) {
  printf(
      "scanner.scan: column: %u, lookahead: %i (%c)\n",
      lexer->get_column(lexer),
      lexer->lookahead,
      (char)lexer->lookahead);
  Scanner* scanner = (Scanner*)payload;

  printf("scanner.scan valid symbols:");
  for (int i = 0; i <= ERROR_SENTINEL; i++) {
    printf(" %u", valid_symbols[i]);
  }
  printf("\n");

  const bool error_recovery = valid_symbols[ERROR_SENTINEL];

  // Mark the end before doing anything else to allow lookahead to work correctly
  lexer->mark_end(lexer);

  // Skip any initial whitespace
  skip_whitespace(lexer);

  char next = lexer->lookahead;

  if (error_recovery) {
    printf("scanner.scan: in error recovery\n");
  }

  // String start/end detection
  if (valid_symbols[RAW_STRING_START] && !scanner->in_string && next == 'r') {
    advance_koto(lexer);
    uint8_t hash_count = 0;
    while (lexer->lookahead == '#') {
      if (hash_count == 255) {
        printf("scanner.scan: reached raw string hash limit\n");
        return false;
      }
      hash_count++;
      advance_koto(lexer);
    }
    next = lexer->lookahead;
    if (next == '"' || next == '\'') {
      printf(">>>> raw string start\n");
      advance_koto(lexer);
      VEC_PUSH(scanner->quotes, next);
      scanner->in_string = true;
      scanner->raw_string_hash_count = hash_count;
      lexer->mark_end(lexer);
      lexer->result_symbol = RAW_STRING_START;
      return true;
    } else {
      printf("scanner.scan: rejected raw string start\n");
      return false;
    }
  } else if (
      valid_symbols[RAW_STRING_END] && scanner->in_string
      && next == VEC_BACK(scanner->quotes)) {
    printf(">>>> raw string end\n");
    advance_koto(lexer);
    uint8_t hash_count = 0;
    while (lexer->lookahead == '#') {
      if (hash_count == 255) {
        break;
      }
      hash_count++;
      advance_koto(lexer);
    }
    if (hash_count != scanner->raw_string_hash_count) {
      printf("scanner.scan: rejected raw string end\n");
      return false;
    }
    VEC_POP(scanner->quotes);
    scanner->in_string = false;
    scanner->raw_string_hash_count = 0;
    lexer->mark_end(lexer);
    lexer->result_symbol = RAW_STRING_END;
    return true;
  } else if (
      valid_symbols[STRING_START] && !scanner->in_string
      && (next == '"' || next == '\'')) {
    printf(">>>> string start\n");
    advance_koto(lexer);
    lexer->mark_end(lexer);
    scanner->in_string = true;
    VEC_PUSH(scanner->quotes, next);
    lexer->result_symbol = STRING_START;
    return true;
  } else if (
      valid_symbols[STRING_END] && scanner->in_string
      && next == VEC_BACK(scanner->quotes)) {
    printf(">>>> string end\n");
    advance_koto(lexer);
    lexer->mark_end(lexer);
    VEC_POP(scanner->quotes);
    scanner->in_string = false;
    lexer->result_symbol = STRING_END;
    return true;
  } else if (valid_symbols[INTERPOLATION_START]) {
    printf(">>>> interpolation start\n");
    assert(scanner->in_string || error_recovery);
    scanner->in_string = false;
    lexer->result_symbol = INTERPOLATION_START;
    return true;
  } else if (valid_symbols[INTERPOLATION_END] && next == '}') {
    printf(">>>> interpolation end\n");
    assert(!scanner->in_string || error_recovery);
    scanner->in_string = true;
    lexer->result_symbol = INTERPOLATION_END;
    return true;
  }

  bool newline = false;

  // Consume newlines and starting indentation
  while (true) {
    // new_indent = lexer->get_column(lexer);
    if (lexer->lookahead == '\r') {
      skip_koto(lexer);
    }
    if (lexer->lookahead == '\n') {
      skip_koto(lexer);
      newline = true;
    } else {
      break;
    }
    skip_whitespace(lexer);
  }

  const uint16_t column = lexer->get_column(lexer);
  const uint16_t block_indent
      = VEC_SIZE(scanner->indents) > 0 ? VEC_BACK(scanner->indents) : 0;
  const bool block_just_changed = scanner->block_level_just_changed;
  scanner->block_level_just_changed = false;
  const bool eof = lexer->eof(lexer);

  printf(
      "scanner.scan: column: %u, block_indent: %u num_indents: %u newline: %i eof: %i\n",
      column,
      block_indent,
      scanner->indents.len,
      newline,
      eof);

  // Initial block?
  if (valid_symbols[BLOCK_START] && VEC_SIZE(scanner->indents) == 0) {
    printf(">>>> initial block start: %u\n", column);
    VEC_PUSH(scanner->indents, column);
    scanner->block_level_just_changed = true;
    lexer->result_symbol = BLOCK_START;
    return true;
  }
  // Block end?
  // This should be detected before the following call to mark_end so that the
  // end of the block is placed at the last token in the block rather than at the start of
  // the following line.
  else if (
      valid_symbols[BLOCK_END]
      && (eof || (newline || block_just_changed) && column < block_indent)) {
    printf(">>>> block end: %u\n", column);
    VEC_POP(scanner->indents);
    scanner->block_level_just_changed = true;
    lexer->result_symbol = BLOCK_END;
    return true;
  }

  // Mark the current end, telling the lexer that the consumed tokens are significant.
  lexer->mark_end(lexer);
  next = lexer->lookahead;

  // Comment?
  if (valid_symbols[COMMENT] && !scanner->in_string && next == '#') {
    consume_comment(lexer);
    lexer->mark_end(lexer);
    lexer->result_symbol = COMMENT;
    return true;
  }
  // Map block start?
  else if (
      valid_symbols[MAP_BLOCK_START] && newline && column > block_indent
      && line_starts_with_map_key(lexer)) {
    printf(">>>> map block start: %u\n", column);
    VEC_PUSH(scanner->indents, column);
    scanner->block_level_just_changed = true;
    lexer->result_symbol = MAP_BLOCK_START;
    return true;
  }
  // Block start?
  else if (valid_symbols[BLOCK_START] && newline && column > block_indent) {
    printf(">>>> block start: %u\n", column);
    VEC_PUSH(scanner->indents, column);
    scanner->block_level_just_changed = true;
    lexer->result_symbol = BLOCK_START;
    return true;
  }
  // Block continue?
  else if (
      valid_symbols[BLOCK_CONTINUE] && !eof && (newline || block_just_changed)
      && column == block_indent) {
    printf(">>>> block continue: %u\n", column);
    lexer->result_symbol = BLOCK_CONTINUE;
    return true;
  }
  // Indented line?
  else if (valid_symbols[INDENTED_LINE] && newline && column > block_indent) {
    printf(">>>> indented line\n");
    lexer->result_symbol = INDENTED_LINE;
    return true;
  }
  // Newline?
  else if (valid_symbols[NEWLINE] && newline) {
    printf(">>>> newline\n");
    lexer->result_symbol = NEWLINE;
    return true;
  }
  // EOF?
  else if (valid_symbols[END_OF_FILE] && eof) {
    printf(">>>> eof\n");
    lexer->result_symbol = END_OF_FILE;
    return true;
  }

  printf("scanner.scan: rejected\n");
  return false;
}

unsigned tree_sitter_koto_external_scanner_serialize(void* payload, char* buffer) {
  printf("scanner.serialize: payload %p, buffer %p\n", payload, buffer);

  char* write_ptr = buffer;

  Scanner* scanner = (Scanner*)payload;

  const uint32_t num_indents = scanner->indents.len;
  *((uint32_t*)write_ptr) = num_indents;
  write_ptr += sizeof(uint32_t);

  const unsigned indents_size = num_indents * sizeof(scanner->indents.data[0]);
  memcpy(write_ptr, scanner->indents.data, indents_size);
  write_ptr += indents_size;

  const uint32_t num_quotes = scanner->quotes.len;
  *((uint32_t*)write_ptr) = num_quotes;
  write_ptr += sizeof(uint32_t);

  memcpy(write_ptr, scanner->quotes.data, num_quotes);
  write_ptr += num_quotes;

  *write_ptr++ = scanner->block_level_just_changed;
  *write_ptr++ = scanner->in_string;
  *write_ptr++ = scanner->raw_string_hash_count;

  return write_ptr - buffer;
}

void tree_sitter_koto_external_scanner_deserialize(
    void* payload,
    const char* buffer,
    unsigned length) {
  printf(
      "scanner.deserialize: payload %p, buffer %p, length %d\n", payload, buffer, length);

  Scanner* scanner = (Scanner*)payload;
  initialize_scanner(scanner);

  if (length > 0) {
    const char* read_ptr = buffer;

    const uint32_t num_indents = *(uint32_t*)read_ptr;
    read_ptr += sizeof(uint32_t);

    VEC_CLEAR(scanner->indents);
    for (int i = 0; i < num_indents; i++) {
      const uint16_t indent = *(uint16_t*)read_ptr;
      read_ptr += sizeof(uint16_t);
      VEC_PUSH(scanner->indents, indent);
    }

    const uint32_t num_quotes = *(uint32_t*)read_ptr;
    read_ptr += sizeof(uint32_t);

    VEC_CLEAR(scanner->quotes);
    for (int i = 0; i < num_quotes; i++) {
      VEC_PUSH(scanner->quotes, *read_ptr++);
    }

    scanner->block_level_just_changed = *read_ptr++;
    scanner->in_string = *read_ptr++;
    scanner->raw_string_hash_count = *read_ptr++;

    printf("scanner.deserialize: in_string %i\n", scanner->in_string);
  }
}

void* tree_sitter_koto_external_scanner_create() {
  printf("scanner.create\n");

  Scanner* scanner = calloc(1, sizeof(Scanner));
  initialize_scanner(scanner);

  printf("scanner.create: payload: %p\n", scanner);

  return scanner;
}

void tree_sitter_koto_external_scanner_destroy(void* payload) {
  printf("scanner.destroy: payload: %p\n", payload);
  Scanner* scanner = (Scanner*)payload;

  VEC_FREE(scanner->indents);
  VEC_FREE(scanner->quotes);
  free(scanner);
}

#include "array.h"
#include "parser.h"
#include <stdint.h>
#include <wctype.h>

enum TokenType {
  INDENT,
  DEDENT,
  NEWLINE,
};

typedef struct {
  Array(uint16_t) indents;
} Scanner;

static inline void advance_nesfab(TSLexer *lexer) { lexer->advance_nesfab(lexer, false); }
static inline void skip_nesfab(TSLexer *lexer) { lexer->advance_nesfab(lexer, true); }

bool tree_sitter_nesfab_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;

  uint32_t column = lexer->get_column(lexer);
  printf("\
========\n\
INDENT: %d\n\
DEDENT: %d\n\
NEWLINE: %d\n\
indent size: %d\n\
column: %d\n\
lookahead: %c (%02X)\n\
--------\n\
",
         valid_symbols[INDENT], valid_symbols[DEDENT], valid_symbols[NEWLINE],
         scanner->indents.size, column, lexer->lookahead, lexer->lookahead);

  lexer->mark_end(lexer);

  bool found_end_of_line = false;
  uint32_t indent_length = 0;
  int32_t first_comment_indent_length = -1;
  for (;;) {
    if (lexer->lookahead == '\n') {
      found_end_of_line = true;
      indent_length = 0;
      skip_nesfab(lexer);
    } else if (lexer->lookahead == ' ') {
      indent_length++;
      skip_nesfab(lexer);
    } else if (lexer->lookahead == '\r' || lexer->lookahead == '\f') {
      indent_length = 0;
      skip_nesfab(lexer);
    } else if (lexer->lookahead == '\t') {
      indent_length += 8;
      skip_nesfab(lexer);
    } else if (lexer->eof(lexer)) {
      indent_length = 0;
      found_end_of_line = true;
      break;
    } else {
      break;
    }
  }

  if (found_end_of_line) {
    if (scanner->indents.size > 0) {
      uint16_t current_indent_length = *array_back(&scanner->indents);
      printf("indent length: %d\n", indent_length);
      printf("current indent length: %d\n", current_indent_length);

      if (valid_symbols[INDENT] && indent_length > current_indent_length) {
        array_push(&scanner->indents, indent_length);
        printf("INDENT is pushed\n");
        lexer->result_symbol = INDENT;
        return true;
      }

      bool next_tok_is_string_start = lexer->lookahead == '\"' ||
                                      lexer->lookahead == '\'' ||
                                      lexer->lookahead == '`';

      if ((valid_symbols[DEDENT] ||
           (!valid_symbols[NEWLINE] && !next_tok_is_string_start)) &&
          indent_length < current_indent_length &&
          first_comment_indent_length < (int32_t)current_indent_length) {
        array_pop(&scanner->indents);
        printf("DEDENT is pushed\n");
        lexer->result_symbol = DEDENT;
        return true;
      }
    }

    if (valid_symbols[NEWLINE] && !valid_symbols[INDENT]) {
      printf("NEWLINE is pushed\n");
      lexer->result_symbol = NEWLINE;
      return true;
    }
  }

  return false;
}

unsigned tree_sitter_nesfab_external_scanner_serialize(void *payload,
                                                       char *buffer) {
  Scanner *scanner = (Scanner *)payload;

  size_t size = 0;
  uint32_t iter = 1;
  for (; iter < scanner->indents.size &&
         size < TREE_SITTER_SERIALIZATION_BUFFER_SIZE;
       ++iter) {
    buffer[size++] = (char)*array_get(&scanner->indents, iter);
  }

  return size;
}

void tree_sitter_nesfab_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {
  Scanner *scanner = (Scanner *)payload;

  array_delete(&scanner->indents);
  array_push(&scanner->indents, 0);

  if (length > 0) {
    for (size_t size = 0; size < length; size++) {
      array_push(&scanner->indents, (unsigned char)buffer[size]);
    }
  }
}

void *tree_sitter_nesfab_external_scanner_create() {
  Scanner *scanner = calloc(1, sizeof(Scanner));
  array_init(&scanner->indents);
  tree_sitter_nesfab_external_scanner_deserialize(scanner, NULL, 0);
  return scanner;
}

void tree_sitter_nesfab_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  array_delete(&scanner->indents);
  free(scanner);
}

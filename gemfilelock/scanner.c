#include "parser.h"
#include <string.h>
#include <wctype.h>

enum TokenType {
  INDENT,
  DEDENT,
};

#define MAX_INDENT_LEVELS 100

typedef struct {
  int indent_stack[MAX_INDENT_LEVELS];
  int indent_stack_size;
} Scanner;

void scanner_reset(Scanner *scanner) {
  scanner->indent_stack[0] = 0;
  scanner->indent_stack_size = 1;
}

unsigned scanner_serialize(Scanner *scanner, char *buffer) {
  size_t i = 0;
  for (int j = 0; j < scanner->indent_stack_size; j++) {
    if (i + sizeof(int) > TREE_SITTER_SERIALIZATION_BUFFER_SIZE) break;
    memcpy(&buffer[i], &scanner->indent_stack[j], sizeof(int));
    i += sizeof(int);
  }
  return i;
}

void scanner_deserialize(Scanner *scanner, const char *buffer, unsigned length) {
  size_t i = 0;
  scanner->indent_stack_size = 0;
  while (i < length) {
    if (scanner->indent_stack_size >= MAX_INDENT_LEVELS) break;
    memcpy(&scanner->indent_stack[scanner->indent_stack_size], &buffer[i], sizeof(int));
    scanner->indent_stack_size++;
    i += sizeof(int);
  }
  if (scanner->indent_stack_size == 0) {
    scanner->indent_stack[0] = 0;
    scanner->indent_stack_size = 1;
  }
}

bool scanner_scan(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
  if (valid_symbols[INDENT] || valid_symbols[DEDENT]) {
    int current_indent = 0;
    while (iswspace(lexer->lookahead)) {
      if (lexer->lookahead == '\n') {
        current_indent = 0;
      } else {
        current_indent++;
      }
      lexer->advance_gemfilelock(lexer, false);
    }

    if (lexer->lookahead == 0) {
      while (scanner->indent_stack_size > 1) {
        scanner->indent_stack_size--;
        lexer->result_symbol = DEDENT;
        return true;
      }
    } else if (current_indent > scanner->indent_stack[scanner->indent_stack_size - 1]) {
      if (scanner->indent_stack_size < MAX_INDENT_LEVELS) {
        scanner->indent_stack[scanner->indent_stack_size] = current_indent;
        scanner->indent_stack_size++;
      }
      lexer->result_symbol = INDENT;
      return true;
    } else if (current_indent < scanner->indent_stack[scanner->indent_stack_size - 1]) {
      scanner->indent_stack_size--;
      lexer->result_symbol = DEDENT;
      return true;
    }
  }

  return false;
}

void *tree_sitter_gemfilelock_external_scanner_create() {
  Scanner *scanner = (Scanner *)malloc(sizeof(Scanner));
  scanner_reset(scanner);
  return scanner;
}

bool tree_sitter_gemfilelock_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;
  return scanner_scan(scanner, lexer, valid_symbols);
}

unsigned tree_sitter_gemfilelock_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = (Scanner *)payload;
  return scanner_serialize(scanner, buffer);
}

void tree_sitter_gemfilelock_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = (Scanner *)payload;
  scanner_deserialize(scanner, buffer, length);
}

void tree_sitter_gemfilelock_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  free(scanner);
}

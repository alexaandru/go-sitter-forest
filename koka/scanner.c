#include "parser.h"
#include <assert.h>
#include <stdlib.h>
#include <string.h>

enum TokenType {
  OpenBrace,
  CloseBrace,
  Semi,
  RawString,
  EndContinuationSignal
};

struct scanner {
  int close_braces_to_insert;
  bool insert_open_brace;
  int semis_to_insert;
  bool no_final_semi_insert;
  bool eof_semi_inserted;
  bool push_layout_stack_after_open_brace;
  size_t stack_len;
  size_t stack_cap;
  int *stack;
};

static void scanner_reset_koka(struct scanner *scanner) {
  scanner->close_braces_to_insert = 0;
  scanner->insert_open_brace = false;
  scanner->semis_to_insert = 0;
  scanner->no_final_semi_insert = false;
  scanner->eof_semi_inserted = false;
  scanner->push_layout_stack_after_open_brace = false;
  scanner->stack_len = 0;
  scanner->stack_cap = 0;
  scanner->stack = NULL;
}

static void scanner_push_indent(struct scanner *scanner, int indent_length) {
  if (scanner->stack_len == scanner->stack_cap) {
    // Full, so grow.
    size_t new_stack_cap = scanner->stack_cap == 0 ? 8 : scanner->stack_cap * 2;
    scanner->stack = realloc(scanner->stack, sizeof(int) * new_stack_cap);
    assert(scanner->stack);
    scanner->stack_cap = new_stack_cap;
  }

  scanner->stack[scanner->stack_len++] = indent_length;
}

static int scanner_pop_indent(struct scanner *scanner) {
  if (scanner->stack_len == 0) {
    return -1;
  }

  return scanner->stack[--scanner->stack_len];
}

// Mixing tabs and spaces appears to be legal, and tabs seem to take up a visual
// width of 8 based on lexer.l. This seems dangerous, might want to look into
// this...
#define TABWIDTH 8

static inline void advance_koka(TSLexer *lexer) { lexer->advance_koka(lexer, false); }

static inline void skip_koka(TSLexer *lexer) { lexer->advance_koka(lexer, true); }

static inline bool in_range(char c, char min, char max) {
  return min <= c && c <= max;
}

static inline bool resolve_maybe_start_cont(TSLexer *lexer) {
  switch (lexer->lookahead) {
  case '>': // Excluding ">>", ">|<"
    advance_koka(lexer);
    switch (lexer->lookahead) {
    case '>': // ">>"
      return false;

    case '|':
      advance_koka(lexer);
      return lexer->lookahead != '<'; // ">|<"

    default:
      return true;
    }

  case '<': // Also "<-", excluding "<<"
    advance_koka(lexer);
    return lexer->lookahead != '<';

  case 't': // For "then"
  case 'e': // For "else" and "elif"
    break;

  default:
    return false;
  }

  char word[4];
  for (size_t i = 0; i < 4; i++) {
    word[i] = lexer->lookahead;
    advance_koka(lexer);
  }
  if (strncmp(word, "then", 4) != 0 && strncmp(word, "else", 4) != 0 &&
      strncmp(word, "elif", 4) != 0) {
    // Then the starting characters don't match one of the possible start
    // continuation characters, so return.
    return false;
  }
  return !(in_range(lexer->lookahead, 'a', 'z') ||
           in_range(lexer->lookahead, 'A', 'Z') ||
           in_range(lexer->lookahead, '0', '9') || lexer->lookahead == '\'');
}

void *tree_sitter_koka_external_scanner_create() {
  struct scanner *scanner = malloc(sizeof(struct scanner));
  assert(scanner);
  scanner_reset_koka(scanner);
  return scanner;
}

void tree_sitter_koka_external_scanner_destroy(void *payload) {
  struct scanner *scanner = payload;
  free(scanner->stack);
  free(scanner);
}

unsigned tree_sitter_koka_external_scanner_serialize(void *payload,
                                                     char *buffer) {
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 201112L)
  _Static_assert(sizeof(struct scanner) <=
                     TREE_SITTER_SERIALIZATION_BUFFER_SIZE,
                 "serialization size is too small");
#else
  assert(sizeof(struct scanner) <= TREE_SITTER_SERIALIZATION_BUFFER_SIZE &&
         "serialization size is too small");
#endif

  // This serializes the stack pointer too, but that's fine as long as we don't
  // use it when deserializing, and desirable so we don't have to think about
  // struct layout rules.
  struct scanner *scanner = payload;
  memcpy(buffer, scanner, sizeof(struct scanner));
  memcpy(buffer + sizeof(struct scanner), scanner->stack,
         sizeof(int) * scanner->stack_len);
  return sizeof(struct scanner) + sizeof(int) * scanner->stack_len;
}

void tree_sitter_koka_external_scanner_deserialize(void *payload,
                                                   const char *buffer,
                                                   unsigned length) {
  struct scanner *scanner = payload;
  free(scanner->stack);
  scanner_reset_koka(scanner);

  if (length == 0) {
    return;
  }

  assert(length >= sizeof(struct scanner) && "invalid length");

  memcpy(scanner, buffer, sizeof(struct scanner));
  assert(scanner->stack_len ==
             (length - sizeof(struct scanner)) / sizeof(int) &&
         "invalid length");
  scanner->stack_cap = scanner->stack_len;
  if (scanner->stack_len == 0) {
    scanner->stack = NULL;
    return;
  }
  scanner->stack = malloc(scanner->stack_len * sizeof(int));
  assert(scanner->stack);
  memcpy(scanner->stack, buffer + sizeof(struct scanner),
         scanner->stack_len * sizeof(int));
}

bool tree_sitter_koka_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  struct scanner *scanner = payload;
  if (scanner->close_braces_to_insert >= scanner->semis_to_insert &&
      scanner->close_braces_to_insert > 0) {
    scanner->close_braces_to_insert--;
    if (scanner->semis_to_insert == 1 && scanner->no_final_semi_insert) {
      scanner->semis_to_insert = 0;
      scanner->no_final_semi_insert = false;
    }
    lexer->result_symbol = CloseBrace;
    return true;
  }
  if (scanner->semis_to_insert > 0) {
    scanner->semis_to_insert--;
    lexer->result_symbol = Semi;
    return true;
  }
  if (scanner->insert_open_brace) {
    scanner->insert_open_brace = false;
    if (valid_symbols[OpenBrace])
      lexer->result_symbol = OpenBrace;
    return true;
  }

  lexer->mark_end(lexer);

  // ' ', '\t', '\r', '\n'
  bool found_eol = false;
  int indent_length = 0;
  while (true) {
    switch (lexer->lookahead) {
    case ' ':
      indent_length++;
      break;

    case '\t':
      indent_length += TABWIDTH;
      break;

    case '\r':
      indent_length = 0;
      break;

    case '\n':
      found_eol = true;
      indent_length = 0;
      break;

    default:
      goto AFTER_WHITESPACE;
    }

    skip_koka(lexer);
  }

AFTER_WHITESPACE:
  if (scanner->push_layout_stack_after_open_brace) {
    scanner_push_indent(scanner,
                        found_eol ? indent_length : lexer->get_column(lexer));
    scanner->push_layout_stack_after_open_brace = false;
  }

  bool is_start_cont = false;
  bool maybe_start_cont = false;
  switch (lexer->lookahead) {
  case '$':
  case '%':
  case '&':
  case '*':
  case '+':
  case '@':
  case '\\':
  case '^':
  case '?':
  case '.':
  case '=':
  case ')':
  case ']':
  case '{':
  case '}':
  case ':': // Also ":="
  case '-': // Also "->"
  case '|': // Also "||"
    // On this branch, we're sure that the token we encountered is a start
    // continuation token.
    is_start_cont = true;
    break;

  case '>': // Excluding ">>", ">|<"
  case '<': // Also "<-", excluding "<<"
  case 't': // For "then"
  case 'e': // For "else" and "elif"
    // On this branch, we're not sure, but it might be. Note that the lookahead
    // token possibilities here are disjoint with those in the switch at the
    // end, which is good because it means we can advance the lookahead to
    // figure out what's going on, then skip the switch at the bottom because we
    // know it wouldn't have produced anything.
    maybe_start_cont = true;
    break;

  default:
    // On this branch, we know the token can't be a start continuation token.
    break;
  };

  if (found_eol) {
    int prev_indent_length =
        scanner->stack_len != 0 ? scanner->stack[scanner->stack_len - 1] : 0;
    if (prev_indent_length < indent_length && valid_symbols[OpenBrace] &&
        !valid_symbols[EndContinuationSignal] && !is_start_cont &&
        (!maybe_start_cont || !resolve_maybe_start_cont(lexer))) {
      assert(indent_length > prev_indent_length);
      scanner_push_indent(scanner, indent_length);
      lexer->result_symbol = OpenBrace;
      return true;
    } else if (prev_indent_length == indent_length && valid_symbols[Semi] &&
               !valid_symbols[EndContinuationSignal] && !is_start_cont) {
      lexer->result_symbol = Semi;
      lexer->mark_end(lexer);
      return !maybe_start_cont || !resolve_maybe_start_cont(lexer);
    } else if (prev_indent_length > indent_length && valid_symbols[Semi] &&
               lexer->lookahead != '}') {
      lexer->mark_end(lexer);
      while (scanner->stack_len != 0 &&
             scanner->stack[scanner->stack_len - 1] > indent_length) {
        scanner->close_braces_to_insert++;
        scanner->semis_to_insert++;
        scanner_pop_indent(scanner);
      }
      if (is_start_cont ||
          (maybe_start_cont && resolve_maybe_start_cont(lexer))) {
        scanner->no_final_semi_insert = true;
      }
      lexer->result_symbol = Semi;

      prev_indent_length =
          scanner->stack_len != 0 ? scanner->stack[scanner->stack_len - 1] : 0;
      if (prev_indent_length < indent_length) {
        scanner->insert_open_brace = true;
        scanner_push_indent(scanner, indent_length);
        scanner->no_final_semi_insert = true;
      }

      return true;
    }
  }

  if (lexer->eof(lexer) && !scanner->eof_semi_inserted) {
    scanner->eof_semi_inserted = true;
    lexer->result_symbol = Semi;
    return true;
  }

  if (maybe_start_cont) {
    // See the comment on the branch of the switch that sets this.
    return false;
  }
  switch (lexer->lookahead) {
  case '{':
    if (!valid_symbols[OpenBrace]) {
      break;
    }

    lexer->result_symbol = OpenBrace;
    advance_koka(lexer);
    lexer->mark_end(lexer);
    assert(!scanner->push_layout_stack_after_open_brace &&
           "encountered '{' before layout stack push for previous '{' was "
           "handled");
    scanner->push_layout_stack_after_open_brace = true;
    return true;

  case '}':
    if (!valid_symbols[CloseBrace]) {
      break;
    }

    advance_koka(lexer);
    lexer->mark_end(lexer);

    indent_length = found_eol ? indent_length : lexer->get_column(lexer);

    // do ... while ensures we pop at least one. We don't have to check
    // scanner->stack_len != 0 before the first loop because that is guaranteed
    // if valid_symbols[CloseBrace].
    do {
      scanner->close_braces_to_insert++;
      scanner->semis_to_insert++;
      scanner_pop_indent(scanner);
    } while (scanner->stack_len != 0 &&
             scanner->stack[scanner->stack_len - 1] > indent_length);
    scanner->no_final_semi_insert = true;

    lexer->result_symbol = Semi;
    return true;

  case ';':
    if (!valid_symbols[Semi]) {
      break;
    }

    lexer->result_symbol = Semi;
    advance_koka(lexer);
    lexer->mark_end(lexer);
    return true;

  case 'r':
    if (!valid_symbols[RawString]) {
      break;
    }

    advance_koka(lexer);

    int pound_count = 0;
    while (lexer->lookahead == '#') {
      pound_count++;
      advance_koka(lexer);
    }
    if (lexer->lookahead != '"') {
      return false;
    }

    while (!lexer->eof(lexer)) {
      advance_koka(lexer);
      if (lexer->lookahead == '"') {
        bool too_few_pounds = false;
        for (int pounds_remaining = pound_count; pounds_remaining > 0;
             pounds_remaining--) {
          advance_koka(lexer);
          if (lexer->lookahead != '#') {
            too_few_pounds = true;
            break;
          }
        }
        if (!too_few_pounds) {
          break;
        }
      }
    }
    if (lexer->eof(lexer)) {
      break;
    }

    lexer->result_symbol = RawString;
    advance_koka(lexer);
    lexer->mark_end(lexer);
    return true;
  }

  return false;
}

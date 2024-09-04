#include "parser.h"

enum TokenType { OUTPUT_LINE };

const char *GAP_PROMPT = "gap> ";

static inline void advance_gaptst(TSLexer *lexer) { lexer->advance_gaptst(lexer, false); }
static inline void skip_gaptst(TSLexer *lexer) { lexer->advance_gaptst(lexer, true); }
static inline bool advance_word(TSLexer *lexer, const char *word) {
  for (size_t i = 0; word[i] != '\0'; ++i) {
    if (lexer->lookahead != word[i])
      return false;
    advance_gaptst(lexer);
  }
  return true;
}

bool tree_sitter_gaptst_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  // It there is no more input, stop scanning
  if (!lexer->lookahead)
    return false;

  if (valid_symbols[OUTPUT_LINE]) {
    if (lexer->lookahead == '\n') {
      // Check if we have blank line followed by comment
      lexer->mark_end(lexer);
      advance_gaptst(lexer);
      if (lexer->lookahead == '#') {
        return false;
      }
      lexer->mark_end(lexer);
      lexer->result_symbol = OUTPUT_LINE;
      return true;
    } else if (lexer->lookahead == '#') {
      // Check if we have a statement
      lexer->mark_end(lexer);
      advance_gaptst(lexer);
      if (lexer->lookahead == '@') {
        return false;
      }
    } else if (lexer->lookahead == '>') {
      // Check if we have a continuation prompt
      lexer->mark_end(lexer);
      advance_gaptst(lexer);
      if (lexer->lookahead == ' ') {
        return false;
      }
    } else if (lexer->lookahead == GAP_PROMPT[0]) {
      // Check if we have a gap> prompt
      lexer->mark_end(lexer);
      if (advance_word(lexer, GAP_PROMPT)) {
        return false;
      }
    } else {
      // Otherwise we are safe to consume first character of output
      advance_gaptst(lexer);
    }

    while (lexer->lookahead) {
      if (lexer->lookahead == '\n') {
        advance_gaptst(lexer);
        break;
      }
      advance_gaptst(lexer);
    }

    // consumed a newline or ran out of input
    lexer->mark_end(lexer);
    lexer->result_symbol = OUTPUT_LINE;
    return true;
  }

  return false;
}

unsigned tree_sitter_gaptst_external_scanner_serialize(void *payload,
                                                       char *buffer) {
  return 0;
}
void tree_sitter_gaptst_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {}
void *tree_sitter_gaptst_external_scanner_create() { return NULL; }
void tree_sitter_gaptst_external_scanner_destroy(void *payload) {}

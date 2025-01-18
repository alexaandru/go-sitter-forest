#include "parser.h"

enum TokenType { BLOCK_COMMENT_TEXT };

static bool scan_block_comment(TSLexer *lexer) {
  int stack = 0; // Tracks nesting level of comments

  while (true) {
    // Handle end-of-file condition
    if (lexer->eof(lexer)) {
      lexer->mark_end(lexer);
      return true;
    }

    int32_t c = lexer->lookahead;

    // Handle potential comment opening sequence "/*"
    if (c == '/') {
      lexer->advance_jule(lexer, false);
      if (lexer->lookahead == '*') {
        lexer->advance_jule(lexer, false);
        stack++; // Enter new nesting level
      }
    }
    // Handle potential comment closing sequence "*/"
    else if (c == '*') {
      lexer->mark_end(lexer);
      lexer->advance_jule(lexer, false);

      if (lexer->lookahead == '/') {
        lexer->advance_jule(lexer, false);
        stack--; // Exit current nesting level

        // Complete comment found
        if (stack == -1) {
          return true;
        }
      }
    }
    // Handle regular comment content
    else {
      lexer->advance_jule(lexer, false);
    }
  }
  return false;
}

// Create a new scanner instance
void *tree_sitter_jule_external_scanner_create() { return NULL; }

// Clean up scanner resources
void tree_sitter_jule_external_scanner_destroy(void *p) {
  // No cleanup needed
}

// Reset scanner state
void tree_sitter_jule_external_scanner_reset(void *p) {
  // No state to reset
}

// Serialize scanner state
unsigned tree_sitter_jule_external_scanner_serialize(void *p, char *buffer) {
  return 0; // No state to serialize
}

// Deserialize scanner state
void tree_sitter_jule_external_scanner_deserialize(void *p, const char *b,
                                                   unsigned n) {
  // No state to deserialize
}

bool tree_sitter_jule_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  // Check if we should look for block comments
  if (valid_symbols[BLOCK_COMMENT_TEXT] && scan_block_comment(lexer)) {
    lexer->result_symbol = BLOCK_COMMENT_TEXT;
    return true;
  }
  return false;
}

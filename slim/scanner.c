#include "parser.h"
#include "alloc.h"
#include "array.h"

enum TokenType {
  BLOCK_START,
  BLOCK_END,
  LINE_SEPARATOR,

  ATTR_VALUE_QUOTED,
  ATTR_VALUE_RUBY,
  ATTR_VALUE_RUBY_P,
  ATTR_VALUE_RUBY_S,
  ATTR_VALUE_RUBY_B,
  RUBY,

  ERROR_SENTINEL
};

typedef struct {
  Array(uint16_t) indents;
  // 1 more than number of dedents to output. Value of 1 means need to
  // output line_separator.
  int dedents_to_output;
} Scanner;

void *tree_sitter_slim_external_scanner_create(void) {
  Scanner *scanner = ts_malloc(sizeof(Scanner));
  array_init(&scanner->indents);
  scanner->dedents_to_output = 0;
  return scanner;
}

void tree_sitter_slim_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner*)payload;
  array_delete(&scanner->indents);
}

unsigned tree_sitter_slim_external_scanner_serialize(
                                                     void *payload,
                                                     char *buffer
                                                     ) {
  Scanner *scanner = (Scanner*)payload;

  uint16_t *writer = (uint16_t*)buffer;
  size_t left_to_write = TREE_SITTER_SERIALIZATION_BUFFER_SIZE / sizeof(uint16_t);
  size_t length = 0;

  if (left_to_write < 1) {
    return 0;
  }

  *writer = (uint16_t)scanner->dedents_to_output;
  left_to_write--;
  length += sizeof(uint16_t);
  writer++;

  uint16_t *current_indent = array_front(&scanner->indents);
  uint32_t indents_items_left = scanner->indents.size;
  while(left_to_write > 0 && indents_items_left > 0) {
    *writer = *current_indent;
    left_to_write--;
    indents_items_left--;
    length += sizeof(uint16_t);
    current_indent++;
    writer++;
  }

  return length;
}

void tree_sitter_slim_external_scanner_deserialize(
                                                   void *payload,
                                                   const char *buffer,
                                                   unsigned length
                                                   ) {
  Scanner *scanner = (Scanner*)payload;
  array_clear(&scanner->indents);

  uint16_t *reader = (uint16_t*)buffer;
  size_t left_to_read = length / sizeof(uint16_t);

  if (left_to_read < 1) {
    scanner->dedents_to_output = 0;
    return;
  }
  scanner->dedents_to_output = (int)(*reader);
  left_to_read--;
  reader++;

  while(left_to_read > 0) {
    array_push(&scanner->indents, *reader);
    left_to_read--;
    reader++;
  }
}

static bool scan_attr_quoted(TSLexer *lexer, char quote_type) {
  int braces_level = 0;

  for(;;) {
    if (lexer->eof(lexer)) {
      return false;
    }

    if (braces_level == 0 && lexer->lookahead == quote_type) {
      lexer->advance_slim(lexer, false);
      lexer->result_symbol = ATTR_VALUE_QUOTED;
      return true;
    }

    if (lexer->lookahead == '{') {
      braces_level += 1;
    } else if (lexer->lookahead == '}') {
      if (braces_level > 0) {
        braces_level -= 1;
      }
    }

    lexer->advance_slim(lexer, false);
  }

  if (!lexer->eof(lexer)) {
    lexer->advance_slim(lexer, false);
    lexer->result_symbol = ATTR_VALUE_QUOTED;
    return true;
  } else {
    return false;
  }
}

static bool scan_attr_ruby(TSLexer *lexer, char closing_delimiter, TSSymbol result_symbol) {
  char internal_delimiter_open = 0;
  char internal_delimiter_close = 0;
  int internal_delimiter_nesting = 0;
  bool line_continuation = false;

  for(;;) {
    if (lexer->lookahead == '\n') {
      if (line_continuation) {
        lexer->advance_slim(lexer, false);
        continue;
      } else {
        break;
      }
    } else if (lexer->eof(lexer)) {
      break;
    } else if (closing_delimiter && lexer->lookahead == closing_delimiter) {
      if (!internal_delimiter_nesting) {
        break;
      }
    } else if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
      if (line_continuation) {
        lexer->advance_slim(lexer, false);
        continue;
      } else if (!internal_delimiter_nesting) {
        break;
      }
    } else if (lexer->lookahead == '\\' || lexer->lookahead == ',') {
      line_continuation = true;
      lexer->advance_slim(lexer, false);
      continue;
    } else if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
      if (!line_continuation && !internal_delimiter_nesting) {
        break;
      }
    }

    if (internal_delimiter_nesting) {
      if (lexer->lookahead == internal_delimiter_open) {
        internal_delimiter_nesting++;
      } else if (lexer->lookahead == internal_delimiter_close) {
        internal_delimiter_nesting--;
      }
    } else {
      switch (lexer->lookahead) {
      case '(':
        internal_delimiter_open = '(';
        internal_delimiter_close = ')';
        internal_delimiter_nesting = 1;
        break;
      case '[':
        internal_delimiter_open = '[';
        internal_delimiter_close = ']';
        internal_delimiter_nesting = 1;
        break;
      case '{':
        internal_delimiter_open = '{';
        internal_delimiter_close = '}';
        internal_delimiter_nesting = 1;
        break;
      }
    }

    line_continuation = false;
    lexer->advance_slim(lexer, false);
  }

  if (internal_delimiter_nesting) {
    return false;
  } else {
    lexer->result_symbol = result_symbol;
    return true;
  }
}

static bool scan_ruby(TSLexer *lexer) {
  bool line_continuation = false;

  for(;;) {
    if (lexer->lookahead == '\n') {
      if (!line_continuation) {
        break;
      }
    } else if (lexer->eof(lexer)) {
      break;
    } else if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
    } else if (lexer->lookahead == '\\' || lexer->lookahead == ',') {
      line_continuation = true;
    } else {
      line_continuation = false;
    }

    lexer->advance_slim(lexer, false);
  }

  lexer->result_symbol = RUBY;
  return true;
}


bool tree_sitter_slim_external_scanner_scan(
                                            void *payload,
                                            TSLexer *lexer,
                                            const bool *valid_symbols
                                            ) {
  Scanner *scanner = (Scanner*)payload;

  if (scanner->dedents_to_output > 0) {
    if (scanner->dedents_to_output == 1 && valid_symbols[LINE_SEPARATOR]) {
      lexer->result_symbol = LINE_SEPARATOR;
      scanner->dedents_to_output--;
      return true;
    } else if (valid_symbols[BLOCK_END]) {
      lexer->result_symbol = BLOCK_END;
      scanner->dedents_to_output--;
      return true;
    } else {
      return false;
    }
  }

  if (valid_symbols[BLOCK_START] || valid_symbols[BLOCK_END] || valid_symbols[LINE_SEPARATOR]) {
    bool found_end_of_line = false;
    int indent_length = 0;

    // Find the first non-space character and determine indent length
    for(;;) {
      if (lexer->lookahead == '\n') {
        found_end_of_line = true;
        indent_length = 0;
        lexer->advance_slim(lexer, true);
      } else if (lexer->lookahead == ' ') {
        lexer->advance_slim(lexer, true);
        indent_length++;
      } else if (lexer->lookahead == '\t') {
        // Tab size is configurable in slim, we support only tab size of 4
        indent_length += 4;
        lexer->advance_slim(lexer, true);
      } else if (lexer->eof(lexer)) {
        if (scanner->indents.size == 0) {
          indent_length = 0;
        } else {
          indent_length = (int)*array_front(&scanner->indents);
        }
        found_end_of_line = true;
        break;
      } else {
        break;
      }
    }

    if (scanner->indents.size == 0) {
      // Found initial indentation level
      array_push(&scanner->indents, indent_length);

      if (valid_symbols[BLOCK_START] && !lexer->eof(lexer)) {
        lexer->result_symbol = BLOCK_START;
        return true;
      } else {
        return false;
      }
    }

    int last_indent_length = (int)*array_back(&scanner->indents);

    if (valid_symbols[LINE_SEPARATOR] && found_end_of_line &&
        indent_length == last_indent_length && !lexer->eof(lexer)) {
      lexer->result_symbol = LINE_SEPARATOR;
      return true;
    }

    if (valid_symbols[BLOCK_END] && indent_length == last_indent_length && lexer->eof(lexer)) {
      lexer->result_symbol = BLOCK_END;
      return true;
    }

    if (valid_symbols[BLOCK_START] && found_end_of_line && indent_length > last_indent_length) {
      array_push(&scanner->indents, indent_length);
      lexer->result_symbol = BLOCK_START;
      return true;
    }

    if (valid_symbols[BLOCK_END] && found_end_of_line && indent_length < last_indent_length) {
      uint16_t *indent = array_back(&scanner->indents);
      uint16_t *first_indent = array_front(&scanner->indents);

      for(;;) {

        if (indent_length == *indent) {
          break;
        } else if (indent_length > *indent) {
          // No matching indent
          scanner->dedents_to_output = 0;
          return false;
        }

        scanner->dedents_to_output++;

        if (indent == first_indent) {
          break;
        }
        indent--;
      }
      // Should not dedent to less than first indentation level
      assert((int)scanner->indents.size > scanner->dedents_to_output);
      scanner->indents.size -= scanner->dedents_to_output;

      if (scanner->dedents_to_output > 0) {
        lexer->result_symbol = BLOCK_END;
        // Here we don't decrement dedents_to_output, because it
        // should be 1 more to indicate line_separator after all
        // dedents
        return true;
      } else {
        assert(false && "No dedents to output");
        return false;
      }
    }
  }

  if (valid_symbols[RUBY] && !valid_symbols[ERROR_SENTINEL]) {
    return scan_ruby(lexer);
  }

  if (valid_symbols[ATTR_VALUE_QUOTED]) {
    char quote_type = lexer->lookahead;
    if (quote_type == '\'' || quote_type == '"') {
      lexer->advance_slim(lexer, false);
      return scan_attr_quoted(lexer, quote_type);
    }
  }

  if (valid_symbols[ATTR_VALUE_RUBY] ||
      valid_symbols[ATTR_VALUE_RUBY_P] ||
      valid_symbols[ATTR_VALUE_RUBY_S] ||
      valid_symbols[ATTR_VALUE_RUBY_B]) {
    if (lexer->lookahead != ' ' &&
        lexer->lookahead != '\t' &&
        lexer->lookahead != '\n') {
      char closing_delimiter;
      TSSymbol result_symbol;

      if (valid_symbols[ATTR_VALUE_RUBY_P]) {
        closing_delimiter = ')';
        result_symbol = ATTR_VALUE_RUBY_P;
      } else if (valid_symbols[ATTR_VALUE_RUBY_S]) {
        closing_delimiter = ']';
        result_symbol = ATTR_VALUE_RUBY_S;
      } else if (valid_symbols[ATTR_VALUE_RUBY_B]) {
        closing_delimiter = '}';
        result_symbol = ATTR_VALUE_RUBY_B;
      } else {
        closing_delimiter = 0;
        result_symbol = ATTR_VALUE_RUBY;
      }

      return scan_attr_ruby(lexer, closing_delimiter, result_symbol);
    }
  }

  return false;
}

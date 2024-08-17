/**************************************************************************
 *
 * Copyright (c) 2024 Stefan Möding
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 **************************************************************************/


#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "parser.h"
#include "alloc.h"
#include "array.h"


/**
 * The tokens that this scanner will detect. The order must be the same as
 * defined in the 'externals' field in the grammar.
 */

enum TokenType {
  SIDE,
  SIDE_CORNER,
  DELIMITER,
  SHELL_COMMAND,
  DATA_TABLE,
  DATA_TABLE_TAG,
};


/**
 * Manage UTF32 strings using an array.
 */

typedef Array(int32_t) UTF32String;


/**
 * The state of the scanner to keep track of the heredoc tag that we are
 * currently looking for.
 */

typedef struct ScannerState {
  UTF32String data_table_tag;
  int32_t delimiter;  // the delimiter for a shell command
} ScannerState;


/**
 * The words we need to match with the scan_word function.
 */

static int32_t left[] = { U'l', U'e', U'f', U't', 0 };
static int32_t right[] = { U'r', U'i', U'g', U'h', U't', 0 };
static int32_t of[] = { U'o', U'f', 0 };


/**
 * Scan for a word.
 */

static bool scan_word(TSLexer *lexer, int32_t word[], bool skip) {
  while ((lexer->lookahead == U' ') || (lexer->lookahead == U'\t')) {
    // FIXME: an escaped newline should also be skipped
    lexer->advance_pic(lexer, skip);
  }

  for(int i=0; ; i++) {
    // We are done if the end of file is reached
    if (lexer->eof(lexer)) return false;

    // Success if the complete word has been matched
    if (word[i] == 0) return !isalnum(lexer->lookahead);

    // Fail if a letter does not match
    if (lexer->lookahead != word[i]) return false;

    lexer->advance_pic(lexer, false);
  }

  return false;
}


/**
 * Return the matching delimiter for a character. Braces are special while
 * any other character (e.g. a double quote char) matches itself.
 */

static inline int32_t matching_delimiter(int32_t ch) {
  return (ch == U'{') ? U'}' : ch;
}


/**
 * Skip over balanced text. The lookahead character is used as a delimiter
 * that starts and ends the balanced text.
 */

static bool skip_balanced(TSLexer *lexer) {
  int32_t delimiter = 0;

  for(;;) {
    // We are done if the end of file is reached
    if (lexer->eof(lexer)) return false;

    if (delimiter == 0) {
      delimiter = matching_delimiter(lexer->lookahead);
    }
    else if (lexer->lookahead == delimiter) {
      lexer->advance_pic(lexer, false);
      return true;
    }
    else if (lexer->lookahead == U'\\') {
      // Consume backslash and the following character
      lexer->advance_pic(lexer, false);
    }

    lexer->advance_pic(lexer, false);
  }
}


/**
 * Scan for a delimiter. If the delimiter is currently unset, we are at the
 * start and use the next non-whitespace character as the delimiter. The
 * delimiter is saved in the scanner state to be able to detect the end
 * later.
 */

static bool scan_delimiter(TSLexer *lexer, ScannerState *state) {
  for(;;) {
    // We are done if the end of file is reached
    if (lexer->eof(lexer)) return false;

    if (isspace(lexer->lookahead)) {
      // Skip whitespace
      lexer->advance_pic(lexer, true);
    }
    else if (state->delimiter == 0) {
      // Remember new delimiter
      state->delimiter = matching_delimiter(lexer->lookahead);
      lexer->advance_pic(lexer, false);
      return true;
    }
    else if (lexer->lookahead == state->delimiter) {
      // Look for end using saved delimiter
      state->delimiter = 0;
      lexer->advance_pic(lexer, false);
      return true;
    }
    else {
      return false;
    }
  }
}


/**
 * Scan for a shell command between delimiters. Strings and balanced braces
 * are allowed with so we skip over these as well until we find the matching
 * delimiter from the start of the shell command.
 */

static bool scan_shell_command(TSLexer *lexer, ScannerState *state) {
  for(bool has_content=false;; has_content=true) {
    // We are done if the end of file is reached
    if (lexer->eof(lexer)) return false;

    if (lexer->lookahead == state->delimiter) {
      return has_content;
    }
    else if ((lexer->lookahead == U'"') || (lexer->lookahead == U'{')) {
      skip_balanced(lexer);
    }
    else {
      lexer->advance_pic(lexer, false);
    }
  }
}


/**
 * Scan for a data table. A data table starts at the end of line of the copy
 * statement. A data table ends either with the tag given in the until clause
 * of the copy statement or with the next .PE/.PF line. A data table may be
 * empty if the next line after the copy statement contains the tag or the
 * .PE/.PF requests. In this case the newline character of the line with the
 * tag or the copy statement is not consumed and it will be read to complete
 * the copy statement line.
 */

static bool scan_data_table(TSLexer *lexer, ScannerState *state) {
  bool has_content = false;  // Anything but a tag has been found
  bool tag_matched = true;   // Set to false if the line does not match the tag
  bool start_table = false;  // False until we are sure that the table starts

  uint32_t tag_length = state->data_table_tag.size > 0 ?
                        state->data_table_tag.size : 3;

  for(;;) {
    // We are done if the end of file is reached
    if (lexer->eof(lexer)) return false;

    uint32_t col = lexer->get_column(lexer);

    if (!start_table) {
      switch (lexer->lookahead) {
      case U' ':
      case U'\t':
        // Skip over horizontal whitespace
        lexer->advance_pic(lexer, true);
        continue;

      case U'\n':
        // End of line for the copy statement; the data table starts here
        start_table = true;
        break;

      default:
        // Anything else means the copy statement probably has an until
        // clause and therefore this is not the start of the data table
        return false;
      }
    }

    if ((state->data_table_tag.size == 0) && (col < tag_length)) {
      // Tag is not set, so we use .PE or .PF as end tag
      if ((col == 0) && (lexer->lookahead != U'.'))
        tag_matched = false;
      if ((col == 1) && (lexer->lookahead != U'P'))
        tag_matched = false;
      if ((col == 2) && (lexer->lookahead != U'E') && (lexer->lookahead != U'F'))
        tag_matched = false;
    }
    else if ((col < tag_length) &&
        (*array_get(&state->data_table_tag, col) != lexer->lookahead)) {
      // Lookahead character does not match the tag we are looking for
      tag_matched = false;
    }
    else if ((col == tag_length) && tag_matched && isspace(lexer->lookahead)) {
      // Complete tag was matched
      if (state->data_table_tag.size > 0) {
        // Consume the end tag if a named tag has been used
        lexer->mark_end(lexer);
      }
      return has_content;
    }
    else if (lexer->lookahead == U'\n') {
      // Tag not found; continue in next line and try to match the tag
      lexer->mark_end(lexer);
      tag_matched = true;
    }
    else {
      // Tag not matched but something else was found
      has_content = true;
    }

    lexer->advance_pic(lexer, false);
  }
}


/**
 * Scan for a data table tag.
 */

static bool scan_data_table_tag(TSLexer *lexer, ScannerState *state) {
  bool skip = true;
  int quote = 0;

  array_clear(&state->data_table_tag);

  for(;;) {
    // We are done if the end of file is reached
    if (lexer->eof(lexer)) return false;

    switch (quote) {
    case 0:
      // before opening quote
      if (lexer->lookahead == U'"') {
        quote = 1;
        skip = false;
      }
      else if (!isspace(lexer->lookahead)) {
        return false;
      }
      break;

    case 1:
      // after opening quote
      if (lexer->lookahead == U'"') {
        quote = 2;
      }
      else if (lexer->lookahead == U'\n') {
        return false;
      }
      else {
        array_push(&state->data_table_tag, lexer->lookahead);
      }
      break;

    case 2:
      // closing quote
      return true;
      break;
    }
    lexer->advance_pic(lexer, skip);
  }
}


/**
 * The public interface used by the tree-sitter parser
 */

void *tree_sitter_pic_external_scanner_create() {
  ScannerState *state = ts_malloc(sizeof(ScannerState));

  if (state) {
    array_init(&state->data_table_tag);
    state->delimiter = 0;  // 0 means not inside a shell command
  }

  return state;
}

void tree_sitter_pic_external_scanner_destroy(void *payload) {
  ScannerState *state = (ScannerState*)payload;

  if (state) {
    array_delete(&state->data_table_tag);
    ts_free(state);
  }
}

unsigned tree_sitter_pic_external_scanner_serialize(void *payload, char *buffer) {
  ScannerState *state = (ScannerState*)payload;
  unsigned length = 0;  // total size of the serialized data in bytes
  unsigned objsiz;      // size of the current object to serialize

  // Serialize the scanner state. To prevent serialization of each struct
  // item we also include the bogus pointer to the array contents. The
  // pointer will be reset when the object is deserialized (see below).
  objsiz = sizeof(ScannerState);
  memcpy(buffer, state, objsiz);
  buffer += objsiz;
  length += objsiz;

  // Serialize the array contents.
  objsiz = state->data_table_tag.capacity * array_elem_size(&state->data_table_tag);
  if (objsiz > 0) {
    memcpy(buffer, state->data_table_tag.contents, objsiz);
    buffer += objsiz;
    length += objsiz;
  }

  return length;
}

void tree_sitter_pic_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  ScannerState *state = (ScannerState*)payload;
  unsigned objsiz;      // size of the current object to deserialize

  // Initialize the structure since the deserialization function will
  // sometimes also be called with length set to zero.
  array_init(&state->data_table_tag);
  state->delimiter = 0;

  // Deserialize the scanner state.
  if (length >= sizeof(ScannerState)) {
    objsiz = sizeof(ScannerState);
    memcpy(payload, buffer, objsiz);
    buffer += objsiz;
    length -= objsiz;

    // Check if the array content needs to be deserialized. In this case the
    // contents pointer is invalid as is now contains the address of the
    // contents when serialization has happened. So we need to allocate a new
    // memory chunk and deserialize it there. The size and capacity elements
    // are already defined correctly.
    if (length > 0) {
      state->data_table_tag.contents = ts_malloc(length);
      memcpy(state->data_table_tag.contents, buffer, length);
    }
  }
}

bool tree_sitter_pic_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  ScannerState *state = (ScannerState*)payload;

  if (valid_symbols[SIDE] || valid_symbols[SIDE_CORNER]) {

    // We try to parse the token 'left'. If that succeeds we check for the
    // token 'of' but do not consume it. Otherwise we try to parse the token
    // 'right' also optionally followed by 'of'.
    // The implementation requires that both words start with different
    // letters so that the first look-ahead is able to reject a word.

    if (scan_word(lexer, left, true)) {
      lexer->mark_end(lexer);
      lexer->result_symbol = SIDE;

      if (valid_symbols[SIDE_CORNER] && (scan_word(lexer, of, false))) {
        lexer->result_symbol = SIDE_CORNER;
      }

      return true;
    }
    else if (scan_word(lexer, right, true)) {
      lexer->mark_end(lexer);
      lexer->result_symbol = SIDE;

      if (valid_symbols[SIDE_CORNER] && (scan_word(lexer, of, false))) {
        lexer->result_symbol = SIDE_CORNER;
      }

      return true;
    }
  }

  if (valid_symbols[DELIMITER]) {
    if (scan_delimiter(lexer, state)) {
      lexer->result_symbol = DELIMITER;
      return true;
    }
  }

  if (valid_symbols[SHELL_COMMAND]) {
    if (scan_shell_command(lexer, state)) {
      lexer->result_symbol = SHELL_COMMAND;
      return true;
    }
  }

  if (valid_symbols[DATA_TABLE]) {
    if (scan_data_table(lexer, state)) {
      array_clear(&state->data_table_tag);
      lexer->result_symbol = DATA_TABLE;
      return true;
    }
  }

  if (valid_symbols[DATA_TABLE_TAG]) {
    if (scan_data_table_tag(lexer, state)) {
      lexer->result_symbol = DATA_TABLE_TAG;
      return true;
    }
  }
  return false;
}

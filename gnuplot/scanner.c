#include "parser.h"
#include <stdio.h>
#include <string.h>
#include <wctype.h>

#define MAX_WORD_LENGTH 100

// NOTE: I'm still not sure how I want to handle string_literals
// and escape sequences and fmt sequences
enum TokenType {
  DATABLOCK_START,
  DATABLOCK_END,
  // STRING_START,
  // STRING_CONTENT,
  // STRING_END,
  // ESCAPE_SEQUENCE,
  // FMT_SEQUENCE,
};

static inline void consume(TSLexer *lexer) { lexer->advance_gnuplot(lexer, false); }
static inline void skip_gnuplot(TSLexer *lexer) { lexer->advance_gnuplot(lexer, true); }

// static inline bool consume_char(char c, TSLexer *lexer) {
//   if (lexer->lookahead != c) {
//     return false;
//   }
//
//   consume(lexer);
//   return true;
// }

static inline void skip_whitespaces(TSLexer *lexer) {
  while (/*lexer->lookahead == ' ' || lexer->lookahead == '\t' ||
         lexer->lookahead == '\n' || lexer->lookahead == '\r' ||
         lexer->lookahead == '\f' || lexer->lookahead == '\v' ||*/
         iswspace(lexer->lookahead)) {
    skip_gnuplot(lexer);
  }
}

void *tree_sitter_gnuplot_external_scanner_create() { return NULL; }
void tree_sitter_gnuplot_external_scanner_destroy(void *payload) {}

char ending_char_gnuplot = 0;
char datablock_word[MAX_WORD_LENGTH] = {0};

static inline void reset_state() {
  ending_char_gnuplot = 0;
}

unsigned tree_sitter_gnuplot_external_scanner_serialize(void *payload,
                                                        char *buffer) {
  int length = strlen(datablock_word);
  memcpy(buffer, datablock_word,length);
  return length;
  // buffer[0] = ending_char_gnuplot;
  //
  // // Now serialize the datablock_word
  // size_t word_length = strlen(datablock_word);
  // if (word_length + 1 >= MAX_WORD_LENGTH) {
  //   // Handle error: not enough space in the buffer
  //   return 0;
  // }
  //
  // // Copy the datablock_word into the buffer after the first byte
  // strcpy(buffer + 1, datablock_word);
  // // Return the total length of the serialized data
  // return word_length + 2; // +1 for ending_char_gnuplot, +1 for null terminator
}

void tree_sitter_gnuplot_external_scanner_deserialize(void *payload,
                                                      const char *buffer,
                                                      unsigned length) {
  memcpy(datablock_word, buffer, length);
  // if (length < 1) {
  //   // Handle error: not enough data to deserialize
  //   return;
  // }
  //
  // // Deserialize the ending_char_gnuplot first
  // ending_char_gnuplot = buffer[0];
  //
  // // Now deserialize the datablock_word
  // if (length - 1 < MAX_WORD_LENGTH) {
  //   strcpy(datablock_word, buffer + 1);
  // } else {
  //   // Handle error: buffer overflow
  // }
}

static bool scan_datablock_start(TSLexer *lexer) {
  // Reset the datablock_word buffer
  memset(datablock_word, 0, sizeof(datablock_word));
  if (iswalpha(lexer->lookahead)) {
    // Capture entire word
    int i = 0;
    while (iswalpha(lexer->lookahead) && i < MAX_WORD_LENGTH - 1) {
      datablock_word[i++] = lexer->lookahead;
      consume(lexer);
    }
    datablock_word[i] = '\0'; // Null terminate the string
    return true;
  }

  return false;
}

static bool scan_datablock_end(TSLexer *lexer) {
  int i = 0;
  while (iswalpha(lexer->lookahead) && datablock_word[i] != '\0' &&
         lexer->lookahead == datablock_word[i]) {
    consume(lexer);
    i++;
  }
  if (datablock_word[i] == '\0' && !iswalpha(lexer->lookahead)) {
    return true;
  }
  return false;
}

// static bool scan_string_start(TSLexer *lexer) {
//   if (lexer->lookahead == '"' || lexer->lookahead == '\'') {
//     ending_char_gnuplot = lexer->lookahead;
//     consume(lexer);
//     return true;
//   }
//
//   return false;
// }
//
// static bool scan_string_end(TSLexer *lexer) {
//   if (lexer->lookahead == '\\') {
//     consume(lexer); // Consume the backslash
//     if (lexer->lookahead == ending_char_gnuplot) {
//       consume(lexer); // Consume the escaped ending_char_gnuplot
//       return false;   // This is not the end of the string
//     }
//   }
//
//   if (consume_char(ending_char_gnuplot, lexer)) {
//     return true;
//   }
//
//   return false;
// }
//
// static bool scan_escape_sequence(TSLexer *lexer) {
//   if (lexer->lookahead == '\\') {
//     consume(lexer); // Consume the backslash
//     if (lexer->lookahead != 0) {
//       consume(lexer); // Consume the escape sequence character
//       return true;
//     }
//   }
//   return false;
// }
//
// static bool scan_fmt_sequence(TSLexer *lexer) {
//   if (lexer->lookahead == '%') {
//     consume(lexer); // Consume the percent sign
//     while (lexer->lookahead != 0 && !iswspace(lexer->lookahead) && lexer->lookahead != ending_char_gnuplot) {
//       consume(lexer); // Consume the formatter characters
//     }
//     return true;
//   }
//   return false;
// }
//
// static bool scan_string_content(TSLexer *lexer) {
//   while (lexer->lookahead != 0 && lexer->lookahead != ending_char_gnuplot) {
//     if (lexer->lookahead == '\\') {
//       if (scan_escape_sequence(lexer)) {
//         lexer->result_symbol = ESCAPE_SEQUENCE;
//         return true;
//       }
//     } else if (lexer->lookahead == '%') {
//       if (scan_fmt_sequence(lexer)) {
//         lexer->result_symbol = FMT_SEQUENCE;
//         return true;
//       }
//     }
//     consume(lexer); // Consume the string content
//   }
//   return true;
// }

bool tree_sitter_gnuplot_external_scanner_scan(void *payload, TSLexer *lexer,
                                               const bool *valid_symbols) {
  // if (valid_symbols[STRING_END] && scan_string_end(lexer)) {
  //   reset_state();
  //   lexer->result_symbol = STRING_END;
  //   return true;
  // }
  //
  // if (valid_symbols[STRING_CONTENT] && scan_string_content(lexer)) {
  //   lexer->result_symbol = STRING_CONTENT;
  //   return true;
  // }

  skip_whitespaces(lexer);

  // if (valid_symbols[STRING_START] && scan_string_start(lexer)) {
  //   lexer->result_symbol = STRING_START;
  //   return true;
  // }

  if (valid_symbols[DATABLOCK_END] && scan_datablock_end(lexer)) {
    lexer->result_symbol = DATABLOCK_END;
    return true;
  }

  if (valid_symbols[DATABLOCK_START] && scan_datablock_start(lexer)) {
    lexer->result_symbol = DATABLOCK_START;
    return true;
  }

  return false;
}

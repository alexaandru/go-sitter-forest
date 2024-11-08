#include "parser.h"
#include <stdio.h>
#include <stdlib.h>

namespace {

enum TokenType { COMMENT, STRING_LITERAL, COL, DATASIZE };

struct Scanner {
  char toLower(char c) {
    char C;
    int asciival = (int)c;
    if (asciival < 65 || asciival > 90) {
      C = c;
    } else {
      C = (char)(asciival + 32);
    }

    return C;
  }

  bool isWspace(char c) {
    int ascii = (int)c;
    if (ascii == 32 || ascii == 9 || ascii == 10 || ascii == 11 ||
        ascii == 12 || ascii == 13) {
      return true;
    }
    return false;
  }
  unsigned serialize_poweron(char *buffer) { return 0; }

  void deserialize_poweron(const char *buffer, unsigned length) {}

  bool scan_datasize(TSLexer *lexer) {
    const char datasize[] = "datasize=";
    bool match_found = false;
    for (int i = 0; i < 9; i++) {
      if (i == 8) {
        while (isWspace(lexer->lookahead) && lexer->lookahead != 0) {
          lexer->advance_poweron(lexer, false);
        }
      }
      if (toLower(lexer->lookahead) == datasize[i]) {
        match_found = true;
        lexer->advance_poweron(lexer, false);
      } else {
        match_found = false;
      }
      if (!match_found) {
        break;
      }
    }
    return match_found;
  }

  bool scan_col(TSLexer *lexer) {
    const char col[] = "col=";
    bool match_found = false;
    for (int i = 0; i < 4; i++) {
      if (i == 3) {
        while (isWspace(lexer->lookahead) && lexer->lookahead != 0) {
          lexer->advance_poweron(lexer, false);
        }
      }
      if (toLower(lexer->lookahead) == col[i]) {
        match_found = true;
        lexer->advance_poweron(lexer, false);
      } else {
        match_found = false;
      }
      if (!match_found) {
        break;
      }
    }
    return match_found;
  }

  bool scan_poweron(TSLexer *lexer, const bool *valid_symbols) {
    while (isWspace(lexer->lookahead)) {
      lexer->advance_poweron(lexer, true);
    }

    char next_char = lexer->lookahead;

    if (next_char == '"') {
      lexer->advance_poweron(lexer, false);
      while (lexer->lookahead != '"' && lexer->lookahead != 0) {
        lexer->advance_poweron(lexer, false);
      }
      lexer->advance_poweron(lexer, false);
      lexer->result_symbol = STRING_LITERAL;
      return true;
    }

    if (toLower(next_char) == 'd') {
      bool is_datasize = scan_datasize(lexer);
      if (is_datasize) {
        lexer->result_symbol = DATASIZE;
        return true;
      }
      return false;
    }

    if (toLower(next_char) == 'c') {
      bool is_col = scan_col(lexer);
      if (is_col) {
        lexer->result_symbol = COL;
        return true;
      }
      return false;
    }

    char close_bracket = ']';
    int open_bracket_count = 0;
    int close_bracket_count = 0;

    if (next_char != '[') {
      return false;
    }
    char open_bracket = next_char;

    open_bracket_count += 1;
    lexer->advance_poweron(lexer, false);

    for (; lexer->lookahead != 0; lexer->advance_poweron(lexer, false)) {
      if (lexer->lookahead == open_bracket) {
        open_bracket_count = open_bracket_count + 1;
      }

      if (lexer->lookahead == close_bracket) {
        close_bracket_count = close_bracket_count + 1;
      }

      if (close_bracket_count == open_bracket_count) {
        lexer->result_symbol = COMMENT;
        lexer->advance_poweron(lexer, false);
        return true;
      } else {
        if (isWspace(lexer->lookahead)) {
        } else {
        }
        continue;
      }
    }
    return false;
  }
};

} // namespace

extern "C" {

void *tree_sitter_poweron_external_scanner_create() { return new Scanner(); }

bool tree_sitter_poweron_external_scanner_scan(void *payload, TSLexer *lexer,
                                               const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan_poweron(lexer, valid_symbols);
  return false;
}

unsigned tree_sitter_poweron_external_scanner_serialize(void *payload,
                                                        char *state) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize_poweron(state);
}

void tree_sitter_poweron_external_scanner_deserialize(void *payload,
                                                      const char *state,
                                                      unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize_poweron(state, length);
}

void tree_sitter_poweron_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}
}

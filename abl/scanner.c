#include "parser.h"
#include <wctype.h>
#include <stdio.h>

bool match_keyword(TSLexer *lexer, const char *keyword, TSSymbol symbol);

enum TokenType {
  NAMEDOT,
  NAMECOLON,
  NAMEDOUBLECOLON,
  OR_OPERATOR,
  AND_OPERATOR,
  AUGMENTED_ASSIGNMENT,
  ESCAPED_STRING,
  INPUT_KEYWORD,
  OUTPUT_KEYWORD,
  NEW_KEYWORD,
  OLD_KEYWORD,
  FOR_KEYWORD,
  DEF_KEYWORD
};

void *tree_sitter_abl_external_scanner_create() {
  return NULL;
}

void tree_sitter_abl_external_scanner_destroy(void *payload) {
}

unsigned int tree_sitter_abl_external_scanner_serialize(
  void *payload, char *buffer
) {
  return 0u;
}

void tree_sitter_abl_external_scanner_deserialize(
  void *payload, const char *buffer, unsigned int length
) {
}

bool insensitive_equals(int32_t codepoint, char character) {
  const int32_t uppercase_codepoint = (int32_t)character;
  return uppercase_codepoint == codepoint || (uppercase_codepoint  + 0x0020) == codepoint;
}

bool tree_sitter_abl_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  if (valid_symbols[NAMEDOT] || valid_symbols[NAMECOLON] || valid_symbols[NAMEDOUBLECOLON]) {
    while (!lexer->eof(lexer) && iswspace(lexer->lookahead)) {
      lexer->advance_abl(lexer, true);
    }

    if (!lexer->eof(lexer) && lexer->lookahead == '.') {
      lexer->advance_abl(lexer, false);
      if (!lexer->eof(lexer) && !iswspace(lexer->lookahead)) {
        lexer->result_symbol = NAMEDOT;
        return true;
      }
    }
    else if (!lexer->eof(lexer) && lexer->lookahead == ':') {
      lexer->advance_abl(lexer, false);

      if (!lexer->eof(lexer) && lexer->lookahead == ':') {
        lexer->advance_abl(lexer, false);
        if (!iswspace(lexer->lookahead)) {
          lexer->result_symbol = NAMEDOUBLECOLON;
          return true;
        }
      }
      else if (!lexer->eof(lexer) && !iswspace(lexer->lookahead)) {
        lexer->result_symbol = NAMECOLON;
        return true;
      }
    }
  }

  if (valid_symbols[OR_OPERATOR] && match_keyword(lexer, "OR", OR_OPERATOR)) return true;
  if (valid_symbols[AND_OPERATOR] && match_keyword(lexer, "AND", AND_OPERATOR)) return true;

  if (valid_symbols[INPUT_KEYWORD] && match_keyword(lexer, "INPUT", INPUT_KEYWORD)) return true;
  if (valid_symbols[OUTPUT_KEYWORD] && match_keyword(lexer, "OUTPUT", OUTPUT_KEYWORD)) return true;
  if (valid_symbols[NEW_KEYWORD] && match_keyword(lexer, "NEW", NEW_KEYWORD)) return true;
  if (valid_symbols[OLD_KEYWORD] && match_keyword(lexer, "OLD", OLD_KEYWORD)) return true;
  if (valid_symbols[FOR_KEYWORD] && match_keyword(lexer, "FOR", FOR_KEYWORD)) return true;
  if (valid_symbols[DEF_KEYWORD] && match_keyword(lexer, "DEF", DEF_KEYWORD)) return true;

  if (valid_symbols[AUGMENTED_ASSIGNMENT]) {
    while (!lexer->eof(lexer) && iswspace(lexer->lookahead)) {
      lexer->advance_abl(lexer, true);
    }

    if (!lexer->eof(lexer) && (lexer->lookahead == '+' || lexer->lookahead == '-' || lexer->lookahead == '*' || lexer->lookahead == '/' )) {
      lexer->advance_abl(lexer, false);
      if (!lexer->eof(lexer) && insensitive_equals(lexer->lookahead, '=')) {
        lexer->advance_abl(lexer, false);
        if (!lexer->eof(lexer) && iswspace(lexer->lookahead)) {
          lexer->result_symbol = AUGMENTED_ASSIGNMENT;
          return true;
        }
      }
    }
  }

  if (valid_symbols[ESCAPED_STRING] && (lexer->lookahead == '"' || lexer->lookahead == '\'')) {
    char start = lexer->lookahead;
    lexer->advance_abl(lexer, false);

    while (!lexer->eof(lexer) && lexer->lookahead != start) {
      if (lexer->lookahead == '~') {
        lexer->advance_abl(lexer, false);
        if (!lexer->eof(lexer))
          lexer->advance_abl(lexer, false);
      }
      else lexer->advance_abl(lexer, false);
    }

    if (!lexer->eof(lexer) && lexer->lookahead == start) {
      lexer->advance_abl(lexer, false);
      lexer->result_symbol = ESCAPED_STRING;
      return true;
    }
  }

  return false;
}

bool match_keyword(TSLexer *lexer, const char *keyword, TSSymbol symbol) {
  while (!lexer->eof(lexer) && iswspace(lexer->lookahead)) {
      lexer->advance_abl(lexer, true);
  }

  const char *k = keyword;
  TSLexer checkpoint = *lexer;

  while (*k) {
      if (lexer->eof(lexer) || !insensitive_equals(lexer->lookahead, *k)) {
          *lexer = checkpoint;
          return false;
      }
      lexer->advance_abl(lexer, false);
      k++;
  }

  if (lexer->eof(lexer) || iswspace(lexer->lookahead) ||
      lexer->lookahead == '(' || lexer->lookahead == '.' || lexer->lookahead == ':' ||
      lexer->lookahead == ',') {

      lexer->result_symbol = symbol;
      return true;
  }

  *lexer = checkpoint;
  return false;
}



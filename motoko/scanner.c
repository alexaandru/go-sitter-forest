#include "parser.h"
#include <wctype.h>

enum TokenType {
  TEXT_LITERAL,
  BLOCK_COMMENT,
};

void *tree_sitter_motoko_external_scanner_create() { return NULL; }
void tree_sitter_motoko_external_scanner_destroy(void *p) {}
void tree_sitter_motoko_external_scanner_reset(void *p) {}
unsigned tree_sitter_motoko_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_motoko_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance_motoko(TSLexer *lexer) {
  lexer->advance_motoko(lexer, false);
}

static bool is_num_char(int32_t c) {
  return c == '_' || iswdigit(c);
}

static bool is_valid_utf8(int32_t c) {
  uint8_t c1 = c & 0xff;
  uint8_t c2 = (c >> 8) & 0xff;
  uint8_t c3 = (c >> 16) & 0xff;
  uint8_t c4 = (c >> 24) & 0xff;
  
  #define utf8_cont(cn) (cn >= 0x80 && cn <= 0xbf)
  
  return (((c1 >= 0x00 && c1 <= 0x09) || (c1 >= 0x0b && c1 <= 0x7f))
    || (c1 >= 0xc2 && c1 <= 0xdf) && utf8_cont(c2))
    || (c1 == 0xe0 && (c2 >= 0xa0 && c2 <= 0xbf) && utf8_cont(c3))
    || (c1 == 0xed && (c2 >= 0x80 && c2 <= 0x9f) && utf8_cont(c3))
    || (((c1 >= 0xe1 && c1 <= 0xec) || c1 == 0xee || c1 == 0xef) && utf8_cont(c2) && utf8_cont(c3))
    || (c1 == 0xf0 && (c2 >= 0x90 && c2 <= 0xbf) && utf8_cont(c3) && utf8_cont(c4))
    || (c1 == 0xf4 && (c2 >= 0x80 && c2 <= 0x8f) && utf8_cont(c3) && utf8_cont(c4))
    || ((c1 >= 0xf1 && c1 <= 0xf3) && utf8_cont(c2) && utf8_cont(c3) && utf8_cont(c4));
}

bool tree_sitter_motoko_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  
  if (valid_symbols[TEXT_LITERAL]) {
    bool has_content = false;
    for (;;) { 
      if (lexer->lookahead == '\"' || lexer->lookahead == '\\' || !is_valid_utf8(lexer->lookahead)) {
        break;
      } else if (lexer->lookahead == 0) {
        return false;
      }
      has_content = true;
      advance_motoko(lexer);
    }
    lexer->result_symbol = TEXT_LITERAL;
    return has_content;
  }
  
  while (iswspace(lexer->lookahead)) lexer->advance_motoko(lexer, true);
  
  if (lexer->lookahead == '/') {
    advance_motoko(lexer);
    if (lexer->lookahead != '*') return false;
    advance_motoko(lexer);

    bool after_star = false;
    unsigned nesting_depth = 1;
    for (;;) {
      switch (lexer->lookahead) {
        case '\0':
          return false;
        case '*':
          advance_motoko(lexer);
          after_star = true;
          break;
        case '/':
          if (after_star) {
            advance_motoko(lexer);
            after_star = false;
            nesting_depth--;
            if (nesting_depth == 0) {
              lexer->result_symbol = BLOCK_COMMENT;
              return true;
            }
          } else {
            advance_motoko(lexer);
            after_star = false;
            if (lexer->lookahead == '*') {
              nesting_depth++;
              advance_motoko(lexer);
            }
          }
          break;
        default:
          advance_motoko(lexer);
          after_star = false;
          break;
      }
    }
  }  
  /*
  if (valid_symbols[STRING_CONTENT] && !valid_symbols[FLOAT_LITERAL]) {
    bool has_content = false;
    for (;;) {
      if (lexer->lookahead == '\"' || lexer->lookahead == '\\') {
        break;
      } else if (lexer->lookahead == 0) {
        return false;
      }
      has_content = true;
      advance_motoko(lexer);
    }
    lexer->result_symbol = STRING_CONTENT;
    return has_content;
  }

  while (iswspace(lexer->lookahead)) lexer->advance_motoko(lexer, true);

  if (
    valid_symbols[RAW_STRING_LITERAL] &&
    (lexer->lookahead == 'r' || lexer->lookahead == 'b')
  ) {
    lexer->result_symbol = RAW_STRING_LITERAL;
    if (lexer->lookahead == 'b') advance_motoko(lexer);
    if (lexer->lookahead != 'r') return false;
    advance_motoko(lexer);

    unsigned opening_hash_count = 0;
    while (lexer->lookahead == '#') {
      advance_motoko(lexer);
      opening_hash_count++;
    }

    if (lexer->lookahead != '"') return false;
    advance_motoko(lexer);

    for (;;) {
      if (lexer->lookahead == 0) {
        return false;
      } else if (lexer->lookahead == '"') {
        advance_motoko(lexer);
        unsigned hash_count = 0;
        while (lexer->lookahead == '#' && hash_count < opening_hash_count) {
          advance_motoko(lexer);
          hash_count++;
        }
        if (hash_count == opening_hash_count) {
          return true;
        }
      } else {
        advance_motoko(lexer);
      }
    }
  }

  if (valid_symbols[FLOAT_LITERAL] && iswdigit(lexer->lookahead)) {
    lexer->result_symbol = FLOAT_LITERAL;

    advance_motoko(lexer);
    while (is_num_char(lexer->lookahead)) {
      advance_motoko(lexer);
    }

    bool has_fraction = false, has_exponent = false;

    if (lexer->lookahead == '.') {
      has_fraction = true;
      advance_motoko(lexer);
      if (iswalpha(lexer->lookahead)) {
          // The dot is followed by a letter: 1.max(2) => not a float but an integer
          return false;
      }

      if (lexer->lookahead == '.') {
        return false;
      }
      while (is_num_char(lexer->lookahead)) {
        advance_motoko(lexer);
      }
    }

    lexer->mark_end(lexer);

    if (lexer->lookahead == 'e' || lexer->lookahead == 'E') {
      has_exponent = true;
      advance_motoko(lexer);
      if (lexer->lookahead == '+' || lexer->lookahead == '-') {
        advance_motoko(lexer);
      }
      if (!is_num_char(lexer->lookahead)) {
        return true;
      }
      advance_motoko(lexer);
      while (is_num_char(lexer->lookahead)) {
        advance_motoko(lexer);
      }

      lexer->mark_end(lexer);
    }

    if (!has_exponent && !has_fraction) return false;

    if (lexer->lookahead != 'u' && lexer->lookahead != 'i' && lexer->lookahead != 'f') {
      return true;
    }
    advance_motoko(lexer);
    if (!iswdigit(lexer->lookahead)) {
      return true;
    }

    while (iswdigit(lexer->lookahead)) {
      advance_motoko(lexer);
    }

    lexer->mark_end(lexer);
    return true;
  }

  if (lexer->lookahead == '/') {
    advance_motoko(lexer);
    if (lexer->lookahead != '*') return false;
    advance_motoko(lexer);

    bool after_star = false;
    unsigned nesting_depth = 1;
    for (;;) {
      switch (lexer->lookahead) {
        case '\0':
          return false;
        case '*':
          advance_motoko(lexer);
          after_star = true;
          break;
        case '/':
          if (after_star) {
            advance_motoko(lexer);
            after_star = false;
            nesting_depth--;
            if (nesting_depth == 0) {
              lexer->result_symbol = BLOCK_COMMENT;
              return true;
            }
          } else {
            advance_motoko(lexer);
            after_star = false;
            if (lexer->lookahead == '*') {
              nesting_depth++;
              advance_motoko(lexer);
            }
          }
          break;
        default:
          advance_motoko(lexer);
          after_star = false;
          break;
      }
    }
  }*/

  return false;
}

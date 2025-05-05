
#include "chars.h"

static bool is_upper_comment(int32_t c)
{
  const int32_t upper = 65;
  const int32_t lower = 90;
  return c >= upper && c <= lower;
}

static bool is_digit_comment(int32_t c)
{
  const int32_t upper = 48;
  const int32_t lower = 57;
  return c >= upper && c <= lower;
}

static bool is_newline_comment(int32_t c)
{
  const int32_t newline_chars[] = {
    CHAR_EOF,
    CHAR_NEWLINE,
    CHAR_CARRIAGE_RETURN,
  };
  const int length = sizeof(newline_chars) / sizeof(int32_t);
  for (int i = 0; i < length; i++) {
    if (c == newline_chars[i]) {
      return true;
    }
  }
  return false;
}

static bool is_space_comment(int32_t c)
{
  const int32_t space_chars[] = {
    CHAR_SPACE,
    CHAR_FORM_FEED,
    CHAR_TAB,
    CHAR_VERTICAL_TAB,
  };
  const int length = sizeof(space_chars) / sizeof(int32_t);
  bool is_space_char = false;
  for (int i = 0; i < length; i++) {
    if (c == space_chars[i]) {
      is_space_char = true;
      break;
    }
  }
  return is_space_char || is_newline_comment(c);
}

/// Check if the character is allowed inside the name.
static bool is_internal_char_comment(int32_t c)
{
  const int32_t valid_chars[] = {
    '-',
    '_',
  };
  const int length = sizeof(valid_chars) / sizeof(int32_t);
  for (int i = 0; i < length; i++) {
    if (c == valid_chars[i]) {
      return true;
    }
  }
  return false;
}

#include "parser.h"

#include "_parser.c"
#include "tokens.h"

void* tree_sitter_comment_external_scanner_create()
{
  return NULL;
}

void tree_sitter_comment_external_scanner_destroy(void* payload)
{
}

unsigned tree_sitter_comment_external_scanner_serialize(
    void* payload,
    char* buffer)
{
  return 0;
}

void tree_sitter_comment_external_scanner_deserialize(
    void* payload,
    const char* buffer,
    unsigned length)
{
}

bool tree_sitter_comment_external_scanner_scan(
    void* payload,
    TSLexer* lexer,
    const bool* valid_symbols)
{
  return parse(lexer, valid_symbols);
}

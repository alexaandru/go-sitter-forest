#include "parser.h"
#include <wctype.h>
#include <stdio.h>

enum TokenType
{
  AUTOMATIC_SEMICOLON,
  TERNARY_COLON,
  PREPROC_ARG
};

void *tree_sitter_sourcepawn_external_scanner_create() { return NULL; }
void tree_sitter_sourcepawn_external_scanner_destroy(void *p) {}
void tree_sitter_sourcepawn_external_scanner_reset(void *p) {}
unsigned tree_sitter_sourcepawn_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_sourcepawn_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static bool scan_whitespace_and_comments(TSLexer *lexer)
{
  for (;;)
  {
    while (iswspace(lexer->lookahead))
    {
      skip(lexer);
    }

    if (lexer->lookahead == '/')
    {
      skip(lexer);

      if (lexer->lookahead == '/')
      {
        skip(lexer);
        while (lexer->lookahead != 0 && lexer->lookahead != '\n')
        {
          skip(lexer);
        }
      }
      else if (lexer->lookahead == '*')
      {
        skip(lexer);
        while (lexer->lookahead != 0)
        {
          if (lexer->lookahead == '*')
          {
            skip(lexer);
            if (lexer->lookahead == '/')
            {
              skip(lexer);
              break;
            }
          }
          else
          {
            skip(lexer);
          }
        }
      }
      else
      {
        return false;
      }
    }
    else
    {
      return true;
    }
  }
}

static bool preproc_arg(TSLexer *lexer)
{
  lexer->result_symbol = PREPROC_ARG;

  if (lexer->lookahead == '(')
  {
    // Macro declaration.
    return false;
  }

  int in_string = 0;
  bool is_escaped = false;
  bool ends_with_multiline_comment = false;
  for (;;)
  {
    if (lexer->lookahead == '/')
    {
      // Check if we are in a comment.
      // Halt the preproc_arg token matching in case it's a comment.
      lexer->mark_end(lexer);
      advance(lexer);
      if (lexer->lookahead == '/')
      {
        // Single line comment, return true here, line continuation
        // would be invalid anyways.
        return true;
      }

      if (lexer->lookahead == '*')
      {
        // Multiline comment, look for the end.
        advance(lexer);
        bool end = false;
        while (!end)
        {
          if (lexer->lookahead == '\n' && !is_escaped)
          {
            // EOL reached without any line continuation.
            // Return true as we are no longer in a preproc_arg.
            return true;
          }
          if (lexer->lookahead != '\r')
          {
            // Reached a potential line continuation, and avoid
            // it being cancelled by a carriage return.
            is_escaped = lexer->lookahead == '\\';
          }
          if (lexer->lookahead != '*')
          {
            // Can't be the end of the multiline comment, skip.
            advance(lexer);
            continue;
          }
          // Check for the end of the multiline comment or EOF.
          advance(lexer);
          end = lexer->lookahead == '/' || lexer->lookahead == 0;
        }
        // For now, assume the preproc_arg token has ended.
        ends_with_multiline_comment = true;
        advance(lexer);
      }
    }

    if (!(iswspace(lexer->lookahead) || lexer->lookahead == 0) && ends_with_multiline_comment)
    {
      // Found a token that is not a WS/EOF, after a multiline comment,
      // the preproc_arg is therefore not finished.
      ends_with_multiline_comment = false;
    }

    if ((lexer->lookahead == '\n' && !is_escaped) || lexer->lookahead == 0)
    {
      if (!ends_with_multiline_comment)
      {
        // Does not end with a multiline comment, move the end of the
        // preproc_arg here.
        lexer->mark_end(lexer);
      }
      advance(lexer);
      return true;
    }

    if (lexer->lookahead != '\r')
    {
      // Reached a potential line continuation, and avoid
      // it being cancelled by a carriage return.
      is_escaped = lexer->lookahead == '\\';
    }

    advance(lexer);
  }
}

static bool scan_automatic_semicolon(TSLexer *lexer)
{
  lexer->result_symbol = AUTOMATIC_SEMICOLON;
  lexer->mark_end(lexer);

  for (;;)
  {
    if (lexer->lookahead == 0)
      return true;
    if (lexer->lookahead == '}')
      return true;
    if (lexer->is_at_included_range_start(lexer))
      return true;
    if (lexer->lookahead == '\n')
      break;
    if (!iswspace(lexer->lookahead))
      return false;
    skip(lexer);
  }

  skip(lexer);

  if (!scan_whitespace_and_comments(lexer))
    return false;

  switch (lexer->lookahead)
  {
  case ',':
  case '.':
  case ':':
  case ';':
  case '*':
  case '%':
  case '>':
  case '<':
  case '=':
  case '[':
  case '(':
  case '?':
  case '^':
  case '|':
  case '&':
  case '/':
    return false;

  // Insert a semicolon before `--` and `++`, but not before binary `+` or `-`.
  case '+':
    skip(lexer);
    return lexer->lookahead == '+';
  case '-':
    skip(lexer);
    return lexer->lookahead == '-';

  // Don't insert a semicolon before `!=`, but do insert one before a unary `!`.
  case '!':
    skip(lexer);
    return lexer->lookahead != '=';
  }

  // The following covers an edge case in global variable declarations. For example:
  // ```cpp
  // Action
  //    action1,
  //    action2;
  // ```
  // In this case, we don't want to insert a semicolon after Action.

  // We are at the beginning of a word (`action1` in our example).
  while (iswalnum(lexer->lookahead))
  {
    skip(lexer);
  }

  // We are at the end of a word (`action1` in our example). Skip comments and whitespaces.
  scan_whitespace_and_comments(lexer);

  switch (lexer->lookahead)
  {
  case ',':
  case ';':
  case '[':
    return false;
  }

  return true;
}

static bool ternary_colon(TSLexer *lexer)
{
  lexer->result_symbol = TERNARY_COLON;
  while (iswspace(lexer->lookahead))
  {
    skip(lexer);
  }
  if (lexer->lookahead == ':')
  {
    advance(lexer);
    lexer->mark_end(lexer);
    return lexer->lookahead != ':';
  }
  return false;
}

bool tree_sitter_sourcepawn_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols)
{
  if (valid_symbols[AUTOMATIC_SEMICOLON] && lexer->lookahead != ':' && lexer->lookahead != '?')
  {
    return scan_automatic_semicolon(lexer);
  }

  if (valid_symbols[PREPROC_ARG])
  {
    return preproc_arg(lexer);
  }

  if (valid_symbols[TERNARY_COLON])
  {
    return ternary_colon(lexer);
  }

  return false;
}
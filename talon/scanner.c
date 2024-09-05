#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.h"
#include <wctype.h>

typedef enum
{
  LINE_START,
  LINE_CONTENT,
  DASHES,
  AFTER_DASHES,
} MatchState;

typedef enum
{
  NEWLINE,
  INDENT,
  DEDENT,
  STRING_START,
  STRING_CONTENT,
  STRING_END,
  COMMENT,
} TokenType;

typedef struct
{
  char flags;
} Delimiter;

#define SINGLE_QUOTE (1 << 0)
#define DOUBLE_QUOTE (1 << 1)

typedef struct
{
  Delimiter *data;
  size_t size;
  size_t capacity;
} DelimiterStack;

typedef struct
{
  uint16_t previous_indent_length;
  DelimiterStack delimiter_stack;
} Scanner;

// Delimiter functions
static void
Delimiter_init (Delimiter *delimiter)
{
  delimiter->flags = 0;
}

static int32_t
Delimiter_end_character (const Delimiter *delimiter)
{
  if (delimiter->flags & SINGLE_QUOTE)
    return '\'';
  if (delimiter->flags & DOUBLE_QUOTE)
    return '"';
  return 0;
}

static void
Delimiter_set_end_character (Delimiter *delimiter, int32_t character)
{
  switch (character)
    {
    case '\'':
      delimiter->flags |= SINGLE_QUOTE;
      break;
    case '"':
      delimiter->flags |= DOUBLE_QUOTE;
      break;
    default:
      assert (false);
    }
}

// DelimiterStack functions
static inline void
DelimiterStack_init (DelimiterStack *stack)
{
  stack->data = NULL;
  stack->size = 0;
  stack->capacity = 0;
}

static inline void
DelimiterStack_free (DelimiterStack *stack)
{
  if (stack->data != NULL)
    {
      free (stack->data);
    }
}

static inline void
DelimiterStack_clear (DelimiterStack *stack)
{
  DelimiterStack_free (stack);
  DelimiterStack_init (stack);
}

static inline void
DelimiterStack_resize (DelimiterStack *stack, size_t new_size)
{
  stack->data = (Delimiter *)realloc (stack->data, new_size);
  assert (stack->data != NULL);
  stack->capacity = new_size;
  stack->size = new_size;
}

static void
DelimiterStack_push (DelimiterStack *stack, Delimiter delimiter)
{
  if (stack->size == stack->capacity)
    {
      stack->capacity = stack->capacity ? stack->capacity * 2 : 1;
      stack->data = (Delimiter *)realloc (stack->data, stack->capacity);
      assert (stack->data != NULL);
    }
  stack->data[stack->size++] = delimiter;
}

static inline Delimiter
DelimiterStack_pop (DelimiterStack *stack)
{
  assert (stack->size > 0);
  return stack->data[--stack->size];
}

static inline Delimiter
DelimiterStack_peek (const DelimiterStack *stack)
{
  assert (stack->size > 0);
  return stack->data[stack->size - 1];
}

static inline bool
DelimiterStack_is_empty (const DelimiterStack *stack)
{
  return stack->size == 0;
}

// Scanner functions
static Scanner *
Scanner_new ()
{
  Scanner *scanner = (Scanner *)malloc (sizeof (Scanner));
  assert (scanner != NULL);
  scanner->previous_indent_length = 0;
  DelimiterStack_init (&scanner->delimiter_stack);
  return scanner;
}

static void
Scanner_free (Scanner *scanner)
{
  DelimiterStack_free (&scanner->delimiter_stack);
  free (scanner);
}

static unsigned
Scanner_serialize (Scanner *scanner, char *buffer)
{
  size_t i = 0;

  // Serialize the delimiter_stack
  size_t delimiter_count = scanner->delimiter_stack.size;
  if (delimiter_count > UINT8_MAX)
    delimiter_count = UINT8_MAX;
  buffer[i++] = delimiter_count;

  if (delimiter_count > 0)
    {
      memcpy (&buffer[i], scanner->delimiter_stack.data, delimiter_count);
    }
  i += delimiter_count;

  // Serialize the previous_indent_length
  buffer[i++] = scanner->previous_indent_length;

  return i;
}

static void
Scanner_deserialize (Scanner *scanner, const char *buffer, unsigned length)
{
  DelimiterStack_clear (&scanner->delimiter_stack);
  scanner->previous_indent_length = 0;

  if (length > 0)
    {
      size_t i = 0;

      // Deserialize (delimiter_count, *delimiter_stack)
      size_t delimiter_count = (uint8_t)buffer[i++];
      DelimiterStack_resize (&scanner->delimiter_stack, delimiter_count);
      if (delimiter_count > 0)
        {
          memcpy (scanner->delimiter_stack.data, &buffer[i], delimiter_count);
        }
      i += delimiter_count;

      // Deserialize previous_indent_length
      scanner->previous_indent_length = buffer[i++];
    }
}

static void
skip (TSLexer *lexer)
{
  lexer->advance_talon(lexer, true);
}

static void
advance_line (TSLexer *lexer, bool skip)
{
  while (lexer->lookahead && lexer->lookahead != '\n')
    {
      lexer->advance_talon(lexer, skip);
    }
  lexer->advance_talon(lexer, true);
}

static void
advance_talon(TSLexer *lexer)
{
  lexer->advance_talon(lexer, false);
}

static bool
Scanner_scan (Scanner *scanner, TSLexer *lexer, const bool *valid_symbols)
{
  // Check for string content.
  if (valid_symbols[STRING_CONTENT]
      && !DelimiterStack_is_empty (&scanner->delimiter_stack))
    {
      Delimiter delimiter = DelimiterStack_peek (&scanner->delimiter_stack);
      int32_t end_character = Delimiter_end_character (&delimiter);
      bool has_content = false;
      while (lexer->lookahead)
        {
          if (lexer->lookahead == '{' || lexer->lookahead == '}')
            {
              lexer->mark_end (lexer);
              lexer->result_symbol = STRING_CONTENT;
              return has_content;
            }
          else if (lexer->lookahead == '\\')
            {
              lexer->mark_end (lexer);
              lexer->result_symbol = STRING_CONTENT;
              return has_content;
            }
          else if (lexer->lookahead == end_character)
            {
              if (has_content)
                {
                  lexer->result_symbol = STRING_CONTENT;
                }
              else
                {
                  advance_talon(lexer);
                  DelimiterStack_pop (&scanner->delimiter_stack);
                  lexer->result_symbol = STRING_END;
                }
              lexer->mark_end (lexer);
              return true;
            }
          else if (lexer->lookahead == '\n' && has_content)
            {
              return false;
            }
          advance_talon(lexer);
          has_content = true;
        }
    }

  lexer->mark_end (lexer);

  bool found_end_of_line = false;
  uint32_t indent_length = 0;
  int32_t first_comment_indent_length = -1;

  // loop until we find the next content character
  for (;;)
    {
      if (lexer->lookahead == '\n')
        { // newline
          found_end_of_line = true;
          indent_length = 0;
          skip (lexer);
        }
      else if (lexer->lookahead == ' ')
        { // space
          indent_length++;
          skip (lexer);
        }
      else if (lexer->lookahead == '\t')
        { // tab - treat as 8 spaces
          indent_length += 8;
          skip (lexer);
        }
      else if (lexer->lookahead == '\r')
        { // carriage return - reset indent
          indent_length = 0;
          skip (lexer);
        }
      else if (lexer->lookahead == '\f')
        { // form feed - reset indent
          indent_length = 0;
          skip (lexer);
        }
      else if (lexer->lookahead == 0)
        { // end of file
          indent_length = 0;
          found_end_of_line = true;
          break;
        }
      else if (lexer->lookahead == '#')
        { // comment
          if (first_comment_indent_length == -1)
            {
              first_comment_indent_length = (int32_t)indent_length;
            }
          advance_line (lexer, true);
          indent_length = 0;
        }
      else
        { // any content character
          break;
        }
    }

  if (found_end_of_line)
    {
      if (valid_symbols[INDENT] && scanner->previous_indent_length == 0
          && indent_length > 0)
        {
          scanner->previous_indent_length = indent_length;
          lexer->result_symbol = INDENT;
          return true;
        }

      if (valid_symbols[DEDENT] && scanner->previous_indent_length > 0
          && indent_length == 0 &&

          // Wait to create a dedent token until we've consumed any comments
          // whose indentation matches the current block.
          first_comment_indent_length
              < (int32_t)scanner->previous_indent_length)
        {
          scanner->previous_indent_length = indent_length;
          lexer->result_symbol = DEDENT;
          return true;
        }

      if (valid_symbols[NEWLINE])
        {
          lexer->result_symbol = NEWLINE;
          return true;
        }
    }

  if (first_comment_indent_length == -1 && valid_symbols[STRING_START])
    {
      Delimiter delimiter;
      Delimiter_init (&delimiter);

      if (lexer->lookahead == '\'')
        {
          Delimiter_set_end_character (&delimiter, '\'');
          advance_talon(lexer);
          lexer->mark_end (lexer);
        }
      else if (lexer->lookahead == '"')
        {
          Delimiter_set_end_character (&delimiter, '"');
          advance_talon(lexer);
          lexer->mark_end (lexer);
        }

      if (Delimiter_end_character (&delimiter))
        {
          DelimiterStack_push (&scanner->delimiter_stack, delimiter);
          lexer->result_symbol = STRING_START;
          return true;
        }
    }

  return false;
}

void *
tree_sitter_talon_external_scanner_create ()
{
  return Scanner_new ();
}

bool
tree_sitter_talon_external_scanner_scan (void *payload, TSLexer *lexer,
                                         const bool *valid_symbols)
{
  Scanner *scanner = (Scanner *)payload;
  return Scanner_scan (scanner, lexer, valid_symbols);
}

unsigned
tree_sitter_talon_external_scanner_serialize (void *payload, char *buffer)
{
  Scanner *scanner = (Scanner *)payload;
  return Scanner_serialize (scanner, buffer);
}

void
tree_sitter_talon_external_scanner_deserialize (void *payload,
                                                const char *buffer,
                                                unsigned length)
{
  Scanner *scanner = (Scanner *)payload;
  Scanner_deserialize (scanner, buffer, length);
}

void
tree_sitter_talon_external_scanner_destroy (void *payload)
{
  Scanner *scanner = (Scanner *)payload;
  Scanner_free (scanner);
}

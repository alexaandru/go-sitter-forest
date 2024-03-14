#include "parser.h"

/* Set this to #define instead to enable debug printing */
#undef DEBUGGING

/* for debug */
#ifdef DEBUGGING
#  include <stdio.h>
#  define DEBUG(fmt,...)  fprintf(stderr, "scanner.c DEBUG: " fmt, __VA_ARGS__)
#else
#  define DEBUG(fmt,...)
#endif

#include <string.h>

#define ADVANCE_C \
  do {                                         \
    if(lexer->lookahead == '\r')               \
      DEBUG("> advance U+%04X = \\r\n",        \
          lexer->lookahead);                   \
    else if(lexer->lookahead == '\n')          \
      DEBUG("> advance U+%04X = \\n\n",        \
          lexer->lookahead);                   \
    else                                       \
      DEBUG("> advance U+%04X = '%c'\n",       \
          lexer->lookahead, lexer->lookahead); \
    lexer->advance(lexer, false);              \
    c = lexer->lookahead;                      \
  } while(0)

#define TOKEN(type) \
  do {                            \
    DEBUG("token(%s)\n", #type);  \
    lexer->result_symbol = type;  \
    return true;                  \
  } while(0)

enum TokenType {
  TOKEN_EOL,
  TOKEN_START_COMMAND,
  TOKEN_START_PLAIN,
  TOKEN_START_VERBATIM,
  TOKEN_CONTENT_PLAIN,
  TOKEN_INTSEQ_LETTER,
  TOKEN_INTSEQ_START,
  TOKEN_INTSEQ_END,
};

#define MAX_NESTED_CHEVRONS 8

struct LexerState {
  unsigned char chevron_count[MAX_NESTED_CHEVRONS]; /* stores at most MAX count */
  unsigned char nchevrons; /* always the true number, further are implied =1 if beyond MAX */
};

void *tree_sitter_pod_external_scanner_create()
{
  struct LexerState *state = malloc(sizeof(struct LexerState));

  state->nchevrons = 0;

  return state;
}

void tree_sitter_pod_external_scanner_destroy(void *payload)
{
  free(payload);
}

void tree_sitter_pod_external_scanner_reset(void *payload)
{
  struct LexerState *state = payload;

  state->nchevrons = 0;
}

unsigned int tree_sitter_pod_external_scanner_serialize(void *payload, char *buffer)
{
  struct LexerState *state = payload;

  unsigned int n = sizeof(struct LexerState);
  memcpy(buffer, state, n);
  return n;
}

void tree_sitter_pod_external_scanner_deserialize(void *payload, const char *buffer, unsigned int n)
{
  struct LexerState *state = payload;

  memcpy(state, buffer, n);
}

static void chevron_count_push(struct LexerState *state, int count)
{
  if(state->nchevrons < MAX_NESTED_CHEVRONS)
    state->chevron_count[state->nchevrons] = count;
  state->nchevrons++;
}

static int chevron_count_top(struct LexerState *state)
{
  if(state->nchevrons >= MAX_NESTED_CHEVRONS)
    return 1;
  return state->chevron_count[state->nchevrons-1];
}

static void chevron_count_pop(struct LexerState *state)
{
  state->nchevrons--;
}

bool tree_sitter_pod_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  struct LexerState *state = payload;

  int c = lexer->lookahead;

  if(valid_symbols[TOKEN_EOL]) {
    /* Consumes a single \r?\n, also true at EOF */
    if(lexer->eof(lexer)) {
      TOKEN(TOKEN_EOL);
    }

    if(c == '\r') {
      DEBUG("> skip \\r\n", 0);
      lexer->advance(lexer, true);
      c = lexer->lookahead;
    }
    if(c == '\n') {
      DEBUG("> advance \\n\n", 0);
      lexer->advance(lexer, true);
      TOKEN(TOKEN_EOL);
    }
  }

  if(lexer->eof(lexer))
    return false;

  if(valid_symbols[TOKEN_START_COMMAND] ||
     valid_symbols[TOKEN_START_PLAIN] ||
     valid_symbols[TOKEN_START_VERBATIM]) {

    uint32_t column = lexer->get_column(lexer);

    if(column > 0)
      return false;

    switch(c) {
      case 0: // EOF
        return false;

      case '=':
        TOKEN(TOKEN_START_COMMAND);

      case '\n':
      case '\r':
        return false;

      case ' ':
      case '\t':
        TOKEN(TOKEN_START_VERBATIM);
    }

    TOKEN(TOKEN_START_PLAIN);
  }

  if(valid_symbols[TOKEN_INTSEQ_START]) {
    if(c == '<') {
      int count = 1;
      ADVANCE_C;
      while(c == '<') {
        count++;
        ADVANCE_C;
      }

      chevron_count_push(state, count);
      TOKEN(TOKEN_INTSEQ_START);
    }
  }

  if(valid_symbols[TOKEN_CONTENT_PLAIN]) {
    /* We're looking for content plain, escape_start, maybe escape_end */
    bool want_end = valid_symbols[TOKEN_INTSEQ_END];
    bool got_plain = false;

    if(want_end && c == '>') {
      int count = chevron_count_top(state);
      while(count && c == '>') {
        ADVANCE_C;
        count--;
      }
      if(!count) {
        chevron_count_pop(state);
        TOKEN(TOKEN_INTSEQ_END);
      }
    }

    if(c >= 'A' && c <= 'Z') {
      ADVANCE_C;
      got_plain = true;

      /* don't read these in a verbatim paragraph */
      if(c == '<' && valid_symbols[TOKEN_INTSEQ_LETTER]) {
        TOKEN(TOKEN_INTSEQ_LETTER);
      }
    }

    bool at_linefeed = false;

    while(!lexer->eof(lexer)) {
      if(c == '\r') {
        ADVANCE_C;
        continue;
      }

      if(c == '\n') {
        if(at_linefeed) {
          /* Seen double-linefeed; stop here without consuming it */
          if(!got_plain)
            /* No content yet so don't bother */
            return false;

          DEBUG("PLAIN ends on double-linefeed\n", 0);
          TOKEN(TOKEN_CONTENT_PLAIN);
        }

        at_linefeed = true;
        lexer->mark_end(lexer);
        ADVANCE_C;
        continue;
      }
      if(c == '=' && at_linefeed) {
        /* Technically there should be a blank line before the next command.
         * But so many people omit it. We'll allow this here */
        DEBUG("PLAIN ends at a single linefeed because next line begins '='\n", 0);
        /* if we haven't gotten content, then we're gonna return a zero-width
         * CONTENT_PLAIN + loop FOREVER; better bail out */
        if(!got_plain)
          return false;
        TOKEN(TOKEN_CONTENT_PLAIN);
      }

      at_linefeed = false;

      /* don't give up our letters if intseqs ain't valid */
      if(c >= 'A' && c <= 'Z' && valid_symbols[TOKEN_INTSEQ_LETTER]) {
        lexer->mark_end(lexer);
        ADVANCE_C;

        if(c == '<') {
          TOKEN(TOKEN_CONTENT_PLAIN);
        }
      }
      else if(c == '>' && want_end) {
        lexer->mark_end(lexer);
        int count = chevron_count_top(state);
        while(count > 1 && c == '>') {
          ADVANCE_C;
          count--;
        }
        if(c == '>') {
          DEBUG("End plain got=%d\n", got_plain);
          TOKEN(TOKEN_CONTENT_PLAIN);
        }
      }
      else {
        ADVANCE_C;
      }

      got_plain = true;

      c = lexer->lookahead;
    }

    DEBUG("End plain got=%d\n", got_plain);

    lexer->mark_end(lexer);
    TOKEN(TOKEN_CONTENT_PLAIN);
  }

  return false;
}

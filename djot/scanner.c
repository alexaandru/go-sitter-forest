#include "alloc.h"
#include "array.h"
#include "parser.h"
#include <stdio.h>

// #define DEBUG

#ifdef DEBUG
#include <assert.h>
#endif

// The different tokens the external scanner support
// See `externals` in `grammar.js` for a description of most of them.
typedef enum {
  IGNORED,

  BLOCK_CLOSE,
  EOF_OR_NEWLINE,
  NEWLINE,
  NEWLINE_INLINE,

  FRONTMATTER_MARKER,

  HEADING1_BEGIN,
  HEADING1_CONTINUATION,
  HEADING2_BEGIN,
  HEADING2_CONTINUATION,
  HEADING3_BEGIN,
  HEADING3_CONTINUATION,
  HEADING4_BEGIN,
  HEADING4_CONTINUATION,
  HEADING5_BEGIN,
  HEADING5_CONTINUATION,
  HEADING6_BEGIN,
  HEADING6_CONTINUATION,
  DIV_BEGIN,
  DIV_END,
  CODE_BLOCK_BEGIN,
  CODE_BLOCK_END,
  LIST_MARKER_DASH,
  LIST_MARKER_STAR,
  LIST_MARKER_PLUS,
  LIST_MARKER_TASK_BEGIN,
  LIST_MARKER_DEFINITION,
  LIST_MARKER_DECIMAL_PERIOD,
  LIST_MARKER_LOWER_ALPHA_PERIOD,
  LIST_MARKER_UPPER_ALPHA_PERIOD,
  LIST_MARKER_LOWER_ROMAN_PERIOD,
  LIST_MARKER_UPPER_ROMAN_PERIOD,
  LIST_MARKER_DECIMAL_PAREN,
  LIST_MARKER_LOWER_ALPHA_PAREN,
  LIST_MARKER_UPPER_ALPHA_PAREN,
  LIST_MARKER_LOWER_ROMAN_PAREN,
  LIST_MARKER_UPPER_ROMAN_PAREN,
  LIST_MARKER_DECIMAL_PARENS,
  LIST_MARKER_LOWER_ALPHA_PARENS,
  LIST_MARKER_UPPER_ALPHA_PARENS,
  LIST_MARKER_LOWER_ROMAN_PARENS,
  LIST_MARKER_UPPER_ROMAN_PARENS,
  LIST_ITEM_CONTINUATION,
  LIST_ITEM_END,
  CLOSE_PARAGRAPH,
  BLOCK_QUOTE_BEGIN,
  BLOCK_QUOTE_CONTINUATION,
  THEMATIC_BREAK_DASH,
  THEMATIC_BREAK_STAR,
  FOOTNOTE_BEGIN,
  FOOTNOTE_END,
  TABLE_CAPTION_BEGIN,
  TABLE_CAPTION_END,

  VERBATIM_BEGIN,
  VERBATIM_END,
  VERBATIM_CONTENT,

  ERROR,
} TokenType;

// The different blocks in Djot that we track,
// in order to match or close them properly.
// Note that paragraphs are anonymous and aren't tracked.
typedef enum {
  BLOCK_QUOTE,
  CODE_BLOCK,
  DIV,
  SECTION,
  HEADING,
  FOOTNOTE,
  TABLE_CAPTION,
  LIST_DASH,
  LIST_STAR,
  LIST_PLUS,
  LIST_TASK,
  LIST_DEFINITION,
  LIST_DECIMAL_PERIOD,
  LIST_LOWER_ALPHA_PERIOD,
  LIST_UPPER_ALPHA_PERIOD,
  LIST_LOWER_ROMAN_PERIOD,
  LIST_UPPER_ROMAN_PERIOD,
  LIST_DECIMAL_PAREN,
  LIST_LOWER_ALPHA_PAREN,
  LIST_UPPER_ALPHA_PAREN,
  LIST_LOWER_ROMAN_PAREN,
  LIST_UPPER_ROMAN_PAREN,
  LIST_DECIMAL_PARENS,
  LIST_LOWER_ALPHA_PARENS,
  LIST_UPPER_ALPHA_PARENS,
  LIST_LOWER_ROMAN_PARENS,
  LIST_UPPER_ROMAN_PARENS,
} BlockType;

// The different types of "numbers" in ordered lists.
typedef enum {
  DECIMAL,
  LOWER_ALPHA,
  UPPER_ALPHA,
  LOWER_ROMAN,
  UPPER_ROMAN,
} OrderedListType;

typedef struct {
  BlockType type;
  // Level can be either indentation or number of opening/ending symbols,
  // or it may be unused for some block types.
  uint8_t level;
} Block;

typedef struct {
  // Open blocks is a stack of the blocks that haven't been closed.
  // Used to match closing markers or for implicitly closing blocks.
  Array(Block *) * open_blocks;

  // How many BLOCK_CLOSE we should output right now?
  uint8_t blocks_to_close;

  // Delayed output of a token, used to first output closing token(s)
  // before this token.
  TokenType delayed_token;
  uint8_t delayed_token_width;

  // The number of ` we are currently matching, or 0 when not inside.
  uint8_t verbatim_tick_count;

  // What's our current block quote level?
  uint8_t block_quote_level;

  // The whitespace indent of the current line.
  uint8_t indent;
} Scanner;

static TokenType scan_list_marker_token(Scanner *s, TSLexer *lexer);
static TokenType scan_unordered_list_marker_token(Scanner *s, TSLexer *lexer);

#ifdef DEBUG
static char *block_type_s(BlockType t);
static char *token_type_s(TokenType t);
#endif

static bool is_list(BlockType type) {
  switch (type) {
  case LIST_DASH:
  case LIST_STAR:
  case LIST_PLUS:
  case LIST_TASK:
  case LIST_DEFINITION:
  case LIST_DECIMAL_PERIOD:
  case LIST_LOWER_ALPHA_PERIOD:
  case LIST_UPPER_ALPHA_PERIOD:
  case LIST_LOWER_ROMAN_PERIOD:
  case LIST_UPPER_ROMAN_PERIOD:
  case LIST_DECIMAL_PAREN:
  case LIST_LOWER_ALPHA_PAREN:
  case LIST_UPPER_ALPHA_PAREN:
  case LIST_LOWER_ROMAN_PAREN:
  case LIST_UPPER_ROMAN_PAREN:
  case LIST_DECIMAL_PARENS:
  case LIST_LOWER_ALPHA_PARENS:
  case LIST_UPPER_ALPHA_PARENS:
  case LIST_LOWER_ROMAN_PARENS:
  case LIST_UPPER_ROMAN_PARENS:
    return true;
  default:
    return false;
  }
}

static BlockType list_marker_to_block(TokenType type) {
  switch (type) {
  case LIST_MARKER_DASH:
    return LIST_DASH;
  case LIST_MARKER_STAR:
    return LIST_STAR;
  case LIST_MARKER_PLUS:
    return LIST_PLUS;
  case LIST_MARKER_TASK_BEGIN:
    return LIST_TASK;
  case LIST_MARKER_DEFINITION:
    return LIST_DEFINITION;
  case LIST_MARKER_DECIMAL_PERIOD:
    return LIST_DECIMAL_PERIOD;
  case LIST_MARKER_LOWER_ALPHA_PERIOD:
    return LIST_LOWER_ALPHA_PERIOD;
  case LIST_MARKER_UPPER_ALPHA_PERIOD:
    return LIST_UPPER_ALPHA_PERIOD;
  case LIST_MARKER_LOWER_ROMAN_PERIOD:
    return LIST_LOWER_ROMAN_PERIOD;
  case LIST_MARKER_UPPER_ROMAN_PERIOD:
    return LIST_UPPER_ROMAN_PERIOD;
  case LIST_MARKER_DECIMAL_PAREN:
    return LIST_DECIMAL_PAREN;
  case LIST_MARKER_LOWER_ALPHA_PAREN:
    return LIST_LOWER_ALPHA_PAREN;
  case LIST_MARKER_UPPER_ALPHA_PAREN:
    return LIST_UPPER_ALPHA_PAREN;
  case LIST_MARKER_LOWER_ROMAN_PAREN:
    return LIST_LOWER_ROMAN_PAREN;
  case LIST_MARKER_UPPER_ROMAN_PAREN:
    return LIST_UPPER_ROMAN_PAREN;
  case LIST_MARKER_DECIMAL_PARENS:
    return LIST_DECIMAL_PARENS;
  case LIST_MARKER_LOWER_ALPHA_PARENS:
    return LIST_LOWER_ALPHA_PARENS;
  case LIST_MARKER_UPPER_ALPHA_PARENS:
    return LIST_UPPER_ALPHA_PARENS;
  case LIST_MARKER_LOWER_ROMAN_PARENS:
    return LIST_LOWER_ROMAN_PARENS;
  case LIST_MARKER_UPPER_ROMAN_PARENS:
    return LIST_UPPER_ROMAN_PARENS;
  default:
#ifdef DEBUG
    assert(false);
#endif
    return LIST_DASH;
  }
}

static void advance_djot(Scanner *s, TSLexer *lexer) {
  lexer->advance_djot(lexer, false);
  // Carriage returns should simply be ignored.
  if (lexer->lookahead == '\r') {
    lexer->advance_djot(lexer, false);
  }
}

static uint8_t consume_chars(Scanner *s, TSLexer *lexer, char c) {
  uint8_t count = 0;
  while (lexer->lookahead == c) {
    advance_djot(s, lexer);
    ++count;
  }
  return count;
}

static uint8_t consume_whitespace(Scanner *s, TSLexer *lexer) {
  uint8_t indent = 0;
  for (;;) {
    if (lexer->lookahead == ' ') {
      advance_djot(s, lexer);
      ++indent;
    } else if (lexer->lookahead == '\r') {
      advance_djot(s, lexer);
    } else if (lexer->lookahead == '\t') {
      advance_djot(s, lexer);
      indent += 4;
    } else {
      break;
    }
  }
  return indent;
}

static Block *create_block(BlockType type, uint8_t level) {
  Block *b = ts_malloc(sizeof(Block));
  b->type = type;
  b->level = level;
  return b;
}

static void push_block(Scanner *s, BlockType type, uint8_t level) {
  array_push(s->open_blocks, create_block(type, level));
}

static void remove_block(Scanner *s) {
  if (s->open_blocks->size > 0) {
    ts_free(array_pop(s->open_blocks));
    if (s->blocks_to_close > 0) {
      --s->blocks_to_close;
    }
  }
}

static Block *peek_block(Scanner *s) {
  if (s->open_blocks->size > 0) {
    return *array_back(s->open_blocks);
  } else {
    return NULL;
  }
}

void set_delayed_token(Scanner *s, TokenType token, uint8_t token_width) {
  s->delayed_token = token;
  s->delayed_token_width = token_width;
}

static bool output_delayed_token(Scanner *s, TSLexer *lexer,
                                 const bool *valid_symbols) {
  if (s->delayed_token == IGNORED || !valid_symbols[s->delayed_token]) {
    return false;
  }

  lexer->result_symbol = s->delayed_token;
  s->delayed_token = IGNORED;
  while (s->delayed_token_width--) {
    advance_djot(s, lexer);
  }
  lexer->mark_end(lexer);
  return true;
}

// How many blocks from the top of the stack can we find a matching block?
// If it's directly on the top, returns 1.
// If it cannot be found, returns 0.
static size_t number_of_blocks_from_top(Scanner *s, BlockType type,
                                        uint8_t level) {
  for (int i = s->open_blocks->size - 1; i >= 0; --i) {
    Block *b = *array_get(s->open_blocks, i);
    if (b->type == type && b->level == level) {
      return s->open_blocks->size - i;
    }
  }
  return 0;
}

static Block *find_block(Scanner *s, BlockType type) {
  for (int i = s->open_blocks->size - 1; i >= 0; --i) {
    Block *b = *array_get(s->open_blocks, i);
    if (b->type == type) {
      return b;
    }
  }
  return NULL;
}

static Block *find_list(Scanner *s) {
  for (int i = s->open_blocks->size - 1; i >= 0; --i) {
    Block *b = *array_get(s->open_blocks, i);
    if (is_list(b->type)) {
      return b;
    }
  }
  return NULL;
}

static uint8_t count_blocks(Scanner *s, BlockType type) {
  uint8_t count = 0;
  for (int i = s->open_blocks->size - 1; i >= 0; --i) {
    Block *b = *array_get(s->open_blocks, i);
    if (b->type == type) {
      ++count;
    }
  }
  return count;
}

// Mark that we should close `count` blocks.
// This call will only emit a single BLOCK_CLOSE token,
// the other are emitted in `handle_blocks_to_close`.
static void close_blocks(Scanner *s, TSLexer *lexer, size_t count) {
#ifdef DEBUG
  assert(s->open_blocks->size > 0);
#endif
  if (s->open_blocks->size > 0) {
    remove_block(s);
    s->blocks_to_close = s->blocks_to_close + count - 1;
  }
  lexer->result_symbol = BLOCK_CLOSE;
}

// Mark that we should close `count` blocks.
// This call will only emit a single BLOCK_CLOSE token,
// the other are emitted in `handle_blocks_to_close`.
//
// The final block type (such as a `DIV_END` token)
// is emitted from `output_delayed_token` when all BLOCK_CLOSE
// tokens are handled.
static void close_blocks_with_final_token(Scanner *s, TSLexer *lexer,
                                          size_t count, TokenType final,
                                          uint8_t final_token_width) {
  close_blocks(s, lexer, count);
  set_delayed_token(s, final, final_token_width);
}

// Output BLOCK_CLOSE tokens, delegated from previous iteration.
static bool handle_blocks_to_close(Scanner *s, TSLexer *lexer) {
  if (s->open_blocks->size == 0) {
    return false;
  }

  // If we reach eof with open blocks, we should close them all.
  if (lexer->eof(lexer) || s->blocks_to_close > 0) {
    lexer->result_symbol = BLOCK_CLOSE;
    remove_block(s);
    return true;
  } else {
    return false;
  }
}

// Close open list if list markers are different.
static bool parse_list_item_continuation(Scanner *s, TSLexer *lexer,
                                         bool is_newline) {
  if (is_newline) {
    return false;
  }
  Block *list = find_list(s);
  if (list && s->indent >= list->level) {
    lexer->mark_end(lexer);
    lexer->result_symbol = LIST_ITEM_CONTINUATION;
    return true;
  }
  return false;
}

// Close a block inside a list.
// They should be closed if indentation is too little.
static bool close_list_nested_block_if_needed(Scanner *s, TSLexer *lexer,
                                              bool non_newline) {
  if (s->open_blocks->size == 0) {
    return false;
  }

  Block *top = peek_block(s);
  Block *list = find_list(s);

  // If we're in a block that's in a list
  // we should check the indentation level,
  // and if it's less than the current list, we need to close that block.
  if (non_newline && list && list != top) {
    if (s->indent < list->level) {
      lexer->result_symbol = BLOCK_CLOSE;
      remove_block(s);
      return true;
    }
  }

  return false;
}

static bool close_different_list_if_needed(Scanner *s, TSLexer *lexer,
                                           Block *list, TokenType list_marker) {
  if (list_marker != IGNORED) {
    BlockType to_open = list_marker_to_block(list_marker);
    if (list->type != to_open) {
      lexer->result_symbol = BLOCK_CLOSE;
      remove_block(s);
      return true;
    }
  }
  return false;
}

// Check if we're starting a list of a different type and close the open one.
static bool try_close_different_typed_list(Scanner *s, TSLexer *lexer,
                                           TokenType ordered_list_marker) {
  if (s->open_blocks->size == 0) {
    return false;
  }

  Block *top = peek_block(s);
  if (top->type == CODE_BLOCK) {
    return false;
  }
  Block *list = find_list(s);

  // If we're about to open a list of a different type, we
  // need to close the previous list.
  if (list) {
    if (close_different_list_if_needed(s, lexer, list, ordered_list_marker)) {
      return true;
    }
    TokenType other_list_marker = scan_unordered_list_marker_token(s, lexer);
    if (close_different_list_if_needed(s, lexer, list, other_list_marker)) {
      return true;
    }
  }

  return false;
}

static bool scan_div_marker(Scanner *s, TSLexer *lexer, uint8_t *colons,
                            size_t *from_top) {
  *colons = consume_chars(s, lexer, ':');
  if (*colons < 3) {
    return false;
  }
  *from_top = number_of_blocks_from_top(s, DIV, *colons);
  return true;
}

static bool is_div_marker_next(Scanner *s, TSLexer *lexer) {
  uint8_t colons;
  size_t from_top;
  return scan_div_marker(s, lexer, &colons, &from_top);
}

static bool parse_code_block(Scanner *s, TSLexer *lexer, uint8_t ticks) {
  if (ticks < 3) {
    return false;
  }

  if (s->open_blocks->size > 0) {
    // Code blocks can't contain other blocks, so we only look at the top.
    Block *top = peek_block(s);
    if (top->type == CODE_BLOCK) {
      if (top->level == ticks) {
        // Found a matching block that we should close.
        // Issue BLOCK_CLOSE before CODE_BLOCK_END.
        // Don't consume ` characters this time, do it in the future.
        close_blocks_with_final_token(s, lexer, 1, CODE_BLOCK_END, ticks);
        return true;
      } else {
        // We're in a code block with a different number of `, ignore these.
        return false;
      }
    }
  }

  // Not in a code block, let's start a new one.
  lexer->mark_end(lexer);
  push_block(s, CODE_BLOCK, ticks);
  lexer->result_symbol = CODE_BLOCK_BEGIN;
  return true;
}

static void output_verbatim_begin(Scanner *s, TSLexer *lexer, uint8_t ticks) {
  lexer->mark_end(lexer);
  s->verbatim_tick_count = ticks;
  lexer->result_symbol = VERBATIM_BEGIN;
}

static bool try_close_verbatim(Scanner *s, TSLexer *lexer) {
  if (s->verbatim_tick_count > 0) {
    s->verbatim_tick_count = 0;
    lexer->result_symbol = VERBATIM_END;
    return true;
  } else {
    return false;
  }
}

// Parsing verbatim content is also responsible for parsing VERBATIM_END.
static bool parse_verbatim_content(Scanner *s, TSLexer *lexer) {
  if (s->verbatim_tick_count == 0) {
    return false;
  }

  uint8_t ticks = 0;
  while (!lexer->eof(lexer)) {
    if (lexer->lookahead == '\n') {
      // We should only end verbatim if the paragraph is ended by a
      // blankline.

      // Advance over the first newline.
      advance_djot(s, lexer);
      // Remove any whitespace on the next line.
      consume_whitespace(s, lexer);
      if (lexer->eof(lexer) || lexer->lookahead == '\n') {
        // Found a blankline, meaning the paragraph containing the varbatim
        // should be closed. So now we can close the verbatim.
        break;
      } else {
        // No blankline, continue parsing.
        lexer->mark_end(lexer);
        ticks = 0;
      }
    } else if (lexer->lookahead == '`') {
      // If we find a `, we need to count them to see if we should stop.
      uint8_t current = consume_chars(s, lexer, '`');
      if (current == s->verbatim_tick_count) {
        // We found a matching number of `
        // We need to return VERBATIM_CONTENT then VERBATIM_END in the next
        // scan.
        s->verbatim_tick_count = 0;
        set_delayed_token(s, VERBATIM_END, current);
        break;
      } else {
        // Found a number of ` that doesn't match the start,
        // we should consume them.
        lexer->mark_end(lexer);
        ticks = 0;
      }
    } else {
      // Non-` token found, this we should consume.
      advance_djot(s, lexer);
      lexer->mark_end(lexer);
      ticks = 0;
    }
  }

  // Scanned all the verbatim.
  lexer->result_symbol = VERBATIM_CONTENT;
  return true;
}

static bool parse_backtick(Scanner *s, TSLexer *lexer,
                           const bool *valid_symbols) {
  uint8_t ticks = consume_chars(s, lexer, '`');
  if (ticks == 0) {
    return false;
  }

  // CODE_BLOCK_END is issued after BLOCK_CLOSE and is handled with a delayed
  // output.
  if (valid_symbols[CODE_BLOCK_BEGIN] || valid_symbols[BLOCK_CLOSE]) {
    if (parse_code_block(s, lexer, ticks)) {
      return true;
    }
  }
  // VERBATIM_END is handled by `parse_verbatim_content`.
  // Don't capture leading whitespace for prettier conceal.
  if (valid_symbols[VERBATIM_BEGIN] && s->indent == 0) {
    output_verbatim_begin(s, lexer, ticks);
    return true;
  }
  return false;
}

// Scan a '+ ' or similar.
static bool scan_bullet_list_marker(Scanner *s, TSLexer *lexer, char marker) {
  if (lexer->lookahead != marker) {
    return false;
  }
  advance_djot(s, lexer);
  if (lexer->lookahead != ' ') {
    return false;
  }
  advance_djot(s, lexer);
  return true;
}

// Scan a `> ` or `>\n`.
static bool scan_block_quote_marker(Scanner *s, TSLexer *lexer,
                                    bool *ending_newline) {
  if (lexer->lookahead != '>') {
    return false;
  }
  advance_djot(s, lexer);

  // Carriage returns should be ignored.
  if (lexer->lookahead == '\r') {
    advance_djot(s, lexer);
  }
  if (lexer->lookahead == ' ') {
    advance_djot(s, lexer);
    return true;
  } else if (lexer->lookahead == '\n') {
    advance_djot(s, lexer);
    *ending_newline = true;
    return true;
  } else {
    return false;
  }
}

static uint8_t scan_block_quote_markers(Scanner *s, TSLexer *lexer,
                                        bool *ending_newline) {
  uint8_t marker_count = 0;
  while (scan_block_quote_marker(s, lexer, ending_newline)) {
    ++marker_count;
    if (*ending_newline) {
      break;
    }
  }
  return marker_count;
}

static void output_block_quote_continuation(Scanner *s, TSLexer *lexer,
                                            uint8_t marker_count,
                                            bool ending_newline) {
  // It's important to always clear the stored level on newlines.
  if (ending_newline) {
    s->block_quote_level = 0;
  } else {
    s->block_quote_level = marker_count;
  }
  lexer->result_symbol = BLOCK_QUOTE_CONTINUATION;
}

// Parse block quote related things.
//
// It's made complicated by the need to match nested quotes,
// but we still want to keep block quotes separated,
// so we can't match '> > ' in one go, but in multiple passes.
//
// We also need to close any contained paragraphs if there's a mismatch of
// quote indentation, or if there's an "empty line" (only > on a line).
//
// And we also need to close open blocks when we go down a nesting level.
static bool parse_block_quote(Scanner *s, TSLexer *lexer,
                              const bool *valid_symbols) {
  if (!valid_symbols[BLOCK_QUOTE_BEGIN] &&
      !valid_symbols[BLOCK_QUOTE_CONTINUATION] && !valid_symbols[BLOCK_CLOSE] &&
      !valid_symbols[CLOSE_PARAGRAPH]) {
    return false;
  }

  bool ending_newline = false;
  // A valid marker is a '> ' or '>\n'.
  bool has_marker = scan_block_quote_marker(s, lexer, &ending_newline);

  // If we have a marker but with an empty line,
  // we need to close the paragraph.
  if (has_marker && ending_newline && valid_symbols[CLOSE_PARAGRAPH]) {
    lexer->result_symbol = CLOSE_PARAGRAPH;
    return true;
  }

  // Store nesting level on the scanner, to keep it between runs
  // in the case of multiple `>`, like `> > > txt`.
  uint8_t marker_count = s->block_quote_level + has_marker;
  size_t matching_block_pos =
      number_of_blocks_from_top(s, BLOCK_QUOTE, marker_count);
  Block *highest_block_quote = find_block(s, BLOCK_QUOTE);

  // There's an open block quote with a higher nesting level.
  if (highest_block_quote && marker_count < highest_block_quote->level) {
    // Close the paragraph, but allow lazy continuation (without any `>`).
    if (valid_symbols[CLOSE_PARAGRAPH] && has_marker) {
      lexer->result_symbol = CLOSE_PARAGRAPH;
      return true;
    }
    if (valid_symbols[BLOCK_CLOSE]) {
      // We may need to close more than one block (nested block quotes, lists,
      // divs, etc).
      size_t close_pos =
          number_of_blocks_from_top(s, BLOCK_QUOTE, marker_count + 1);
      close_blocks(s, lexer, close_pos);
      return true;
    }
  }

  // If we should continue an open block quote.
  if (valid_symbols[BLOCK_QUOTE_CONTINUATION] && has_marker &&
      matching_block_pos != 0) {
    lexer->mark_end(lexer);
    output_block_quote_continuation(s, lexer, marker_count, ending_newline);
    return true;
  }

  // Finally, start a new block quote if there's any marker.
  if (valid_symbols[BLOCK_QUOTE_BEGIN] && has_marker) {
    push_block(s, BLOCK_QUOTE, marker_count);
    lexer->mark_end(lexer);
    // It's important to always clear the stored level on newlines.
    if (ending_newline) {
      s->block_quote_level = 0;
    } else {
      s->block_quote_level = marker_count;
    }
    lexer->result_symbol = BLOCK_QUOTE_BEGIN;
    return true;
  }

  return false;
}

static bool is_decimal(char c) { return '0' <= c && c <= '9'; }
static bool is_lower_alpha(char c) { return 'a' <= c && c <= 'z'; }
static bool is_upper_alpha(char c) { return 'A' <= c && c <= 'Z'; }
static bool is_lower_roman(char c) {
  switch (c) {
  case 'i':
  case 'v':
  case 'x':
  case 'l':
  case 'c':
  case 'd':
  case 'm':
    return true;
  default:
    return false;
  }
}
static bool is_upper_roman(char c) {
  switch (c) {
  case 'I':
  case 'V':
  case 'X':
  case 'L':
  case 'C':
  case 'D':
  case 'M':
    return true;
  default:
    return false;
  }
}

static bool matches_ordered_list(OrderedListType type, char c) {
  switch (type) {
  case DECIMAL:
    return is_decimal(c);
  case LOWER_ALPHA:
    return is_lower_alpha(c);
  case UPPER_ALPHA:
    return is_upper_alpha(c);
  case LOWER_ROMAN:
    return is_lower_roman(c);
  case UPPER_ROMAN:
    return is_upper_roman(c);
  default:
    return false;
  }
}

// Return true if we scan any character.
static bool scan_ordered_list_enumerator(Scanner *s, TSLexer *lexer,
                                         OrderedListType type) {
  uint8_t scanned = 0;
  while (!lexer->eof(lexer)) {
    // Note that we don't check if marker is a valid roman numeral.
    if (matches_ordered_list(type, lexer->lookahead)) {
      ++scanned;
      advance_djot(s, lexer);
    } else {
      break;
    }
  }
  return scanned > 0;
}

static bool scan_ordered_list_type(Scanner *s, TSLexer *lexer,
                                   OrderedListType *res) {
  if (scan_ordered_list_enumerator(s, lexer, DECIMAL)) {
    *res = DECIMAL;
    return true;
  }
  // We don't differentiate between alpha and roman lists, but prefer roman.
  if (scan_ordered_list_enumerator(s, lexer, LOWER_ROMAN)) {
    *res = LOWER_ROMAN;
    return true;
  }
  if (scan_ordered_list_enumerator(s, lexer, UPPER_ROMAN)) {
    *res = UPPER_ROMAN;
    return true;
  }
  if (scan_ordered_list_enumerator(s, lexer, LOWER_ALPHA)) {
    *res = LOWER_ALPHA;
    return true;
  }
  if (scan_ordered_list_enumerator(s, lexer, UPPER_ALPHA)) {
    *res = UPPER_ALPHA;
    return true;
  }
  return false;
}

static TokenType scan_ordered_list_marker_token_type(Scanner *s,
                                                     TSLexer *lexer) {
  // A marker can be `(a)` or `a)`.
  bool surrounding_parens = false;
  if (lexer->lookahead == '(') {
    surrounding_parens = true;
    advance_djot(s, lexer);
  }

  OrderedListType list_type;
  if (!scan_ordered_list_type(s, lexer, &list_type)) {
    return IGNORED;
  }

  switch (lexer->lookahead) {
  case ')':
    advance_djot(s, lexer);
    if (surrounding_parens) {
      // (a)
      switch (list_type) {
      case DECIMAL:
        return LIST_MARKER_DECIMAL_PARENS;
      case LOWER_ALPHA:
        return LIST_MARKER_LOWER_ALPHA_PARENS;
      case UPPER_ALPHA:
        return LIST_MARKER_UPPER_ALPHA_PARENS;
      case LOWER_ROMAN:
        return LIST_MARKER_LOWER_ROMAN_PARENS;
      case UPPER_ROMAN:
        return LIST_MARKER_UPPER_ROMAN_PARENS;
      default:
        return IGNORED;
      }
    } else {
      // a)
      switch (list_type) {
      case DECIMAL:
        return LIST_MARKER_DECIMAL_PAREN;
      case LOWER_ALPHA:
        return LIST_MARKER_LOWER_ALPHA_PAREN;
      case UPPER_ALPHA:
        return LIST_MARKER_UPPER_ALPHA_PAREN;
      case LOWER_ROMAN:
        return LIST_MARKER_LOWER_ROMAN_PAREN;
      case UPPER_ROMAN:
        return LIST_MARKER_UPPER_ROMAN_PAREN;
      default:
        return IGNORED;
      }
    }
  case '.':
    // a.
    advance_djot(s, lexer);
    switch (list_type) {
    case DECIMAL:
      return LIST_MARKER_DECIMAL_PERIOD;
    case LOWER_ALPHA:
      return LIST_MARKER_LOWER_ALPHA_PERIOD;
    case UPPER_ALPHA:
      return LIST_MARKER_UPPER_ALPHA_PERIOD;
    case LOWER_ROMAN:
      return LIST_MARKER_LOWER_ROMAN_PERIOD;
    case UPPER_ROMAN:
      return LIST_MARKER_UPPER_ROMAN_PERIOD;
    default:
      return IGNORED;
    }
  default:
    return IGNORED;
  }
}

static TokenType scan_ordered_list_marker_token(Scanner *s, TSLexer *lexer) {
  TokenType res = scan_ordered_list_marker_token_type(s, lexer);
  if (res == IGNORED) {
    return res;
  }

  if (lexer->lookahead == ' ') {
    advance_djot(s, lexer);
    return res;
  } else {
    return IGNORED;
  }
}

// Scans a task marker box, e.g. `[x] `.
static bool scan_task_list_marker(Scanner *s, TSLexer *lexer) {
  if (lexer->lookahead != '[') {
    return false;
  }
  advance_djot(s, lexer);
  if (lexer->lookahead != 'x' && lexer->lookahead != 'X' &&
      lexer->lookahead != ' ') {
    return false;
  }
  advance_djot(s, lexer);
  if (lexer->lookahead != ']') {
    return false;
  }
  advance_djot(s, lexer);
  return lexer->lookahead == ' ';
}

static TokenType scan_unordered_list_marker_token(Scanner *s, TSLexer *lexer) {
  // A task marker token can be started with any of `-`, `*`, or `+` and
  // still be of the same type.
  if (scan_bullet_list_marker(s, lexer, '-')) {
    if (scan_task_list_marker(s, lexer)) {
      return LIST_MARKER_TASK_BEGIN;
    } else {
      return LIST_MARKER_DASH;
    }
  }
  if (scan_bullet_list_marker(s, lexer, '*')) {
    if (scan_task_list_marker(s, lexer)) {
      return LIST_MARKER_TASK_BEGIN;
    } else {
      return LIST_MARKER_STAR;
    }
  }
  if (scan_bullet_list_marker(s, lexer, '+')) {
    if (scan_task_list_marker(s, lexer)) {
      return LIST_MARKER_TASK_BEGIN;
    } else {
      return LIST_MARKER_PLUS;
    }
  }
  if (scan_bullet_list_marker(s, lexer, ':')) {
    return LIST_MARKER_DEFINITION;
  }
  return IGNORED;
}

static TokenType scan_list_marker_token(Scanner *s, TSLexer *lexer) {
  TokenType unordered = scan_unordered_list_marker_token(s, lexer);
  if (unordered != IGNORED) {
    return unordered;
  }
  return scan_ordered_list_marker_token(s, lexer);
}

static bool scan_list_marker(Scanner *s, TSLexer *lexer) {
  TokenType marker = scan_list_marker_token(s, lexer);
  return marker != IGNORED;
}

static bool scan_eof_or_blankline(Scanner *s, TSLexer *lexer) {
  if (lexer->eof(lexer)) {
    return true;
    // We've already parsed any leading whitespace in the beginning of the
    // scan function.
  } else if (lexer->lookahead == '\n') {
    advance_djot(s, lexer);
    return true;
  } else {
    return false;
  }
}

// Can we scan a block closing marker?
// For example, if we see a valid div marker.
static bool scan_containing_block_closing_marker(Scanner *s, TSLexer *lexer) {
  return is_div_marker_next(s, lexer) || scan_list_marker(s, lexer);
}

static void ensure_list_open(Scanner *s, BlockType type, uint8_t indent) {
  Block *top = peek_block(s);
  // Found a list with the same type and indent, we should continue it.
  if (top && top->type == type && top->level == indent) {
    return;
    // There might be other cases, like if the top list is a list of different
    // types, but that's handled by BLOCK_CLOSE in `close_list_if_needed` and
    // we shouldn't see that state here.
  }

  push_block(s, type, indent);
}

static bool handle_ordered_list_marker(Scanner *s, TSLexer *lexer,
                                       const bool *valid_symbols,
                                       TokenType marker) {
  if (marker != IGNORED && valid_symbols[marker]) {
    ensure_list_open(s, list_marker_to_block(marker), s->indent + 1);
    lexer->result_symbol = marker;
    lexer->mark_end(lexer);
    return true;
  } else {
    return false;
  }
}

// Consumes until newline or eof, only allowing 'c' or whitespace.
// Returns the number of 'c' encountered (0 if any other character is
// encountered).
static uint8_t consume_line_with_char_or_whitespace(Scanner *s, TSLexer *lexer,
                                                    char c) {
  uint8_t seen = 0;
  while (!lexer->eof(lexer)) {
    if (lexer->lookahead == c) {
      ++seen;
      advance_djot(s, lexer);
    } else if (lexer->lookahead == ' ') {
      advance_djot(s, lexer);
    } else if (lexer->lookahead == '\r') {
      advance_djot(s, lexer);
    } else if (lexer->lookahead == '\n') {
      return seen;
    } else {
      return 0;
    }
  }
  return seen;
}

// Either parse a list item marker (like '- ') or a thematic break
// (like '- - -').
static bool parse_list_marker_or_thematic_break(
    Scanner *s, TSLexer *lexer, const bool *valid_symbols, char marker,
    TokenType marker_type, BlockType list_type, TokenType thematic_break_type) {
  // This is a bit ugly to do here, but eh, refactoring will look very ugly.
  bool check_frontmatter = valid_symbols[FRONTMATTER_MARKER] && marker == '-';

  if (!check_frontmatter && !valid_symbols[marker_type] &&
      !valid_symbols[thematic_break_type] &&
      !valid_symbols[LIST_MARKER_TASK_BEGIN]) {
    return false;
  }

#ifdef DEBUG
  assert(lexer->lookahead == marker);
#endif
  advance_djot(s, lexer);

  // We should prioritize a thematic break over lists.
  // We need to remember if a '- ' is found, which means we can open a list.
  bool can_be_list_marker =
      (valid_symbols[marker_type] || valid_symbols[LIST_MARKER_TASK_BEGIN]) &&
      lexer->lookahead == ' ';

  // We have now checked the two first characters.
  uint32_t marker_count = lexer->lookahead == marker ? 2 : 1;

  bool can_be_thematic_break = valid_symbols[thematic_break_type] &&
                               (marker_count == 2 || lexer->lookahead == ' ');

  // We might have scanned a '- ', we need to mark the end here
  // so we can go back to simply returning a list marker that
  // only consumes these two characters.
  advance_djot(s, lexer);
  lexer->mark_end(lexer);

  // Check frontmatter, if needed.
  if (check_frontmatter) {
    marker_count += consume_chars(s, lexer, marker);
    if (marker_count >= 3) {
      lexer->result_symbol = FRONTMATTER_MARKER;
      lexer->mark_end(lexer);
      return true;
    }
  }

  // Check a thematic break that can span the entire line.
  if (can_be_thematic_break) {
    marker_count += consume_line_with_char_or_whitespace(s, lexer, marker);
    if (marker_count >= 3) {
      lexer->result_symbol = thematic_break_type;
      lexer->mark_end(lexer);
      return true;
    }
  }

  if (can_be_list_marker) {
    if (valid_symbols[LIST_MARKER_TASK_BEGIN]) {
      if (scan_task_list_marker(s, lexer)) {
        ensure_list_open(s, LIST_TASK, s->indent + 1);
        lexer->result_symbol = LIST_MARKER_TASK_BEGIN;
        return true;
      }
    }

    if (valid_symbols[marker_type]) {
      ensure_list_open(s, list_type, s->indent + 1);
      lexer->result_symbol = marker_type;
      return true;
    }
  }

  return false;
}

static bool parse_dash(Scanner *s, TSLexer *lexer, const bool *valid_symbols) {
  return parse_list_marker_or_thematic_break(s, lexer, valid_symbols, '-',
                                             LIST_MARKER_DASH, LIST_DASH,
                                             THEMATIC_BREAK_DASH);
}

static bool parse_star(Scanner *s, TSLexer *lexer, const bool *valid_symbols) {
  return parse_list_marker_or_thematic_break(s, lexer, valid_symbols, '*',
                                             LIST_MARKER_STAR, LIST_STAR,
                                             THEMATIC_BREAK_STAR);
}

static bool parse_plus(Scanner *s, TSLexer *lexer, const bool *valid_symbols) {
  if (!valid_symbols[LIST_MARKER_PLUS] &&
      !valid_symbols[LIST_MARKER_TASK_BEGIN]) {
    return false;
  }
  if (!scan_bullet_list_marker(s, lexer, '+')) {
    return false;
  }

  // We should only consume '+ '.
  lexer->mark_end(lexer);

  if (valid_symbols[LIST_MARKER_TASK_BEGIN]) {
    if (scan_task_list_marker(s, lexer)) {
      ensure_list_open(s, LIST_TASK, s->indent + 1);
      lexer->result_symbol = LIST_MARKER_TASK_BEGIN;
      return true;
    }
  }

  if (valid_symbols[LIST_MARKER_PLUS]) {
    ensure_list_open(s, LIST_PLUS, s->indent + 1);
    lexer->result_symbol = LIST_MARKER_PLUS;
    return true;
  }

  return false;
}

static bool parse_list_item_end(Scanner *s, TSLexer *lexer,
                                const bool *valid_symbols) {
  // We only look at the top, list item end is only valid if we're
  // about to close the list. Otherwise we need to close the open blocks
  // first.
  Block *list = peek_block(s);
  if (!list || !is_list(list->type)) {
    return false;
  }

  // We're still inside the list, don't end it yet.
  if (s->indent >= list->level) {
    return false;
  }

  // Scanning the block prefix markers are necessary so we can
  // tell if we should end a list item or not.
  // For example in a list like this:
  //
  //   > - a
  //   > - b
  //
  // If we should end the `a` list item we need to be able to scan `- b`
  // later in this function.
  // But first we need to skip the `> ` tokens.
  bool ending_newline;
  uint8_t block_quote_markers =
      scan_block_quote_markers(s, lexer, &ending_newline);

  // Delayed output of BLOCK_QUOTE_CONTINUATION, if necessary.
  uint8_t has_block_quote_continuation = false;

  if (block_quote_markers > 0) {
    uint8_t block_quotes = count_blocks(s, BLOCK_QUOTE);

    if (block_quotes != block_quote_markers) {
      lexer->result_symbol = LIST_ITEM_END;
      s->blocks_to_close = 1;
      return true;
    }

    // With a sparse list we need to scan past one newline:
    //
    //   > - a
    //   >
    //   > - b
    //
    // By scanning once again we allow `next_marker` below to find `- b`.
    if (ending_newline) {
      // If we're not ending the list, for example with an indented paragraph:
      //
      //   > - a
      //   >
      //   >   text
      //
      // Then we should output a block quote prefix.
      if (valid_symbols[BLOCK_QUOTE_CONTINUATION]) {
        has_block_quote_continuation = true;
      }

      bool second_newline;
      uint8_t second_block_quote_markers =
          scan_block_quote_markers(s, lexer, &second_newline);

      if (block_quotes != second_block_quote_markers) {
        lexer->result_symbol = LIST_ITEM_END;
        s->blocks_to_close = 1;
        return true;
      }
    }

    // Check indent again after we've parsed the block quote markers.
    // This to allow indented paragraphs inside lists:
    //
    //   > - a
    //   >
    //   >   text
    //
    if (has_block_quote_continuation) {
      s->indent = consume_whitespace(s, lexer);
      if (s->indent >= list->level) {
        lexer->mark_end(lexer);
        output_block_quote_continuation(s, lexer, block_quote_markers,
                                        ending_newline);
        return true;
      }
    }
  }

  // Handle the special case of a list item following this,
  // which may close the entire list if it's of a different type
  // or a mismatching indent. For instance:
  //
  //      - a
  //
  //    - b     <- different indent should close the `a` list.
  TokenType next_marker = scan_list_marker_token(s, lexer);
  if (next_marker != IGNORED) {
    bool different_type = list_marker_to_block(next_marker) != list->type;
    bool different_indent = list->level != s->indent + 1;

    // If we're continuing the list we shouldn't emit a BLOCK_CLOSE.
    if (different_type || different_indent) {
      s->blocks_to_close = 1;
    }
    lexer->result_symbol = LIST_ITEM_END;
    return true;
  }

  lexer->result_symbol = LIST_ITEM_END;
  s->blocks_to_close = 1;
  return true;
}

static bool parse_colon(Scanner *s, TSLexer *lexer, const bool *valid_symbols) {
  bool can_be_div = valid_symbols[DIV_BEGIN] || valid_symbols[DIV_END];
  if (!valid_symbols[LIST_MARKER_DEFINITION] && !can_be_div) {
    return false;
  }
#ifdef DEBUG
  assert(lexer->lookahead == ':');
#endif
  advance_djot(s, lexer);

  if (lexer->lookahead == ' ') {
    // Found a `: `, can only be a list.
    if (valid_symbols[LIST_MARKER_DEFINITION]) {
      ensure_list_open(s, LIST_DEFINITION, s->indent + 1);
      lexer->result_symbol = LIST_MARKER_DEFINITION;
      lexer->mark_end(lexer);
      return true;
    } else {
      // Can't be a div anymore.
      return false;
    }
  }

  if (!can_be_div) {
    return false;
  }

  // We consumed a colon in the start of the function.
  uint8_t colons = consume_chars(s, lexer, ':') + 1;
  if (colons < 3) {
    return false;
  }

  size_t from_top = number_of_blocks_from_top(s, DIV, colons);

  if (from_top > 0) {
    // Found a div we should close.
    close_blocks_with_final_token(s, lexer, from_top, DIV_END, colons);
    return true;
  } else {
    // We can consume the colons as we start a new div now.
    lexer->mark_end(lexer);
    push_block(s, DIV, colons);
    lexer->result_symbol = DIV_BEGIN;
    return true;
  }
}

static TokenType heading_start_token(uint8_t level) {
  switch (level) {
  case 1:
    return HEADING1_BEGIN;
  case 2:
    return HEADING2_BEGIN;
  case 3:
    return HEADING3_BEGIN;
  case 4:
    return HEADING4_BEGIN;
  case 5:
    return HEADING5_BEGIN;
  case 6:
    return HEADING6_BEGIN;
  default:
    return ERROR;
  }
}

static TokenType heading_continuation_token(uint8_t level) {
  switch (level) {
  case 1:
    return HEADING1_CONTINUATION;
  case 2:
    return HEADING2_CONTINUATION;
  case 3:
    return HEADING3_CONTINUATION;
  case 4:
    return HEADING4_CONTINUATION;
  case 5:
    return HEADING5_CONTINUATION;
  case 6:
    return HEADING6_CONTINUATION;
  default:
    return ERROR;
  }
}

static bool parse_heading(Scanner *s, TSLexer *lexer,
                          const bool *valid_symbols) {
  // Note that headings don't contain other blocks, only inline.
  Block *top = peek_block(s);

  // Avoids consuming `#` inside code/verbatim contexts.
  if ((top && top->type == CODE_BLOCK) || s->verbatim_tick_count > 0) {
    return false;
  }

  bool top_heading = top && top->type == HEADING;

  uint8_t hash_count = consume_chars(s, lexer, '#');

  // We found a `# ` that can start or continue a heading.
  if (hash_count > 0 && lexer->lookahead == ' ') {
    TokenType start_token = heading_start_token(hash_count);
    TokenType continuation_token = heading_continuation_token(hash_count);

    if (!valid_symbols[start_token] && !valid_symbols[continuation_token] &&
        !valid_symbols[BLOCK_CLOSE]) {
      return false;
    }

    advance_djot(s, lexer); // Consume the ' '.

    if (valid_symbols[continuation_token] && top_heading &&
        top->level == hash_count) {
      // We're in a heading matching the same number of '#'.
      lexer->mark_end(lexer);
      lexer->result_symbol = continuation_token;
      return true;
    }

    if (valid_symbols[BLOCK_CLOSE] && top_heading && top->level != hash_count) {
      // Found a mismatched heading level, need to close the previous
      // before opening this one.
      lexer->result_symbol = BLOCK_CLOSE;
      remove_block(s);
      return true;
    }

    // Open a new heading.
    if (valid_symbols[start_token]) {
      // Sections are created on the root level (or nested inside other
      // sections). They should be closed when a header with the same or fewer
      // `#` is encountered, and then a new section should be started.
      if (!top || (top->type == SECTION && top->level < hash_count)) {
        push_block(s, SECTION, hash_count);
      } else if (top && top->type == SECTION && top->level >= hash_count) {
        // NOTE closing multiple nested sections requires us to re-scan the
        // heading when we return without saving our work.
        lexer->result_symbol = BLOCK_CLOSE;
        remove_block(s);
        return true;
      }

      push_block(s, HEADING, hash_count);
      lexer->mark_end(lexer);
      lexer->result_symbol = start_token;
      return true;
    }
  } else if (hash_count == 0 && top_heading) {
    // We didn't find any `#`, but we might be able to continue
    // the heading lazily.

    // We need to always provide a BLOCK_CLOSE to end headings.
    // We do this here, either when a blankline is followed or
    // by the end of a container block.
    if (valid_symbols[BLOCK_CLOSE] &&
        (scan_eof_or_blankline(s, lexer) ||
         scan_containing_block_closing_marker(s, lexer))) {
      remove_block(s);
      lexer->result_symbol = BLOCK_CLOSE;
      return true;
    }

    // We should continue the heading, if it's open.
    TokenType res = heading_continuation_token(top->level);
    if (valid_symbols[res]) {
      lexer->result_symbol = res;
      return true;
    }
  }

  return false;
}

static bool parse_open_bracket(Scanner *s, TSLexer *lexer,
                               const bool *valid_symbols) {
  if (!valid_symbols[FOOTNOTE_BEGIN]) {
    return false;
  }

  advance_djot(s, lexer);
  if (lexer->lookahead != '^') {
    return false;
  }
  advance_djot(s, lexer);
  push_block(s, FOOTNOTE, s->indent + 2);
  lexer->mark_end(lexer);
  lexer->result_symbol = FOOTNOTE_BEGIN;
  return true;
}

static bool parse_footnote_end(Scanner *s, TSLexer *lexer,
                               const bool *valid_symbols) {
  if (!valid_symbols[FOOTNOTE_END]) {
    return false;
  }

  Block *footnote = peek_block(s);
  if (!footnote || footnote->type != FOOTNOTE) {
    return false;
  }

  if (s->indent >= footnote->level) {
    return false;
  }

  remove_block(s);
  lexer->result_symbol = FOOTNOTE_END;
  return true;
}

static bool parse_table_caption_begin(Scanner *s, TSLexer *lexer) {
  if (lexer->lookahead != '^') {
    return false;
  }

  advance_djot(s, lexer);
  if (lexer->lookahead != ' ') {
    return false;
  }
  advance_djot(s, lexer);
  push_block(s, TABLE_CAPTION, s->indent + 2);
  lexer->mark_end(lexer);
  lexer->result_symbol = TABLE_CAPTION_BEGIN;
  return true;
}

static bool parse_table_caption_end(Scanner *s, TSLexer *lexer) {
  Block *caption = peek_block(s);
  if (!caption || caption->type != TABLE_CAPTION) {
    return false;
  }

  // End is only checked at the beginning of a line, and should stop if we're
  // not indented enough.
  if (s->indent >= caption->level) {
    return false;
  }

  remove_block(s);
  lexer->result_symbol = TABLE_CAPTION_END;
  return true;
}

static bool end_paragraph_in_block_quote(Scanner *s, TSLexer *lexer) {
  Block *block = find_block(s, BLOCK_QUOTE);
  if (!block) {
    return false;
  }

  // Scan all `> ` markers we can find.
  bool ending_newline;
  uint8_t marker_count = scan_block_quote_markers(s, lexer, &ending_newline);

  // No blockquote marker.
  if (marker_count == 0) {
    return false;
  }

  // We've gone down a blockquote level, we need to close the paragraph.
  if (marker_count < block->level || ending_newline) {
    return true;
  }

  if (block != peek_block(s) &&
      scan_containing_block_closing_marker(s, lexer)) {
    return true;
  }

  // Check if there's a blankline following the blockquote marker.
  consume_whitespace(s, lexer);
  return lexer->lookahead == '\n';
}

static bool close_paragraph(Scanner *s, TSLexer *lexer) {
  // Workaround for not including the following blankline when closing a
  // paragraph inside a block.
  Block *top = peek_block(s);
  if (top && top->type == BLOCK_QUOTE && lexer->lookahead == '\n') {
    return true;
  }

  return scan_containing_block_closing_marker(s, lexer);
}

static bool parse_close_paragraph(Scanner *s, TSLexer *lexer) {
  // TODO merge both functions
  if (close_paragraph(s, lexer) || end_paragraph_in_block_quote(s, lexer)) {
    lexer->result_symbol = CLOSE_PARAGRAPH;
    return true;
  }

  return false;
}

// Decide if we should emit a `NEWLINE_INLINE` token.
//
// This should only be allowed inside a paragraph (or inline context),
// not at the end of a paragraph. Therefore there's logic
// here to detect the end of a paragraph.
//
// We should have already advanced over `\n` before calling this function.
static bool emit_newline_inline(Scanner *s, TSLexer *lexer,
                                uint32_t newline_column) {
  // Need a proper `NEWLINE` to end a paragraph.
  if (lexer->eof(lexer)) {
    return false;
  }

  // Is never valid as the first character of a line.
  if (newline_column == 0) {
    return false;
  }

  // This is a lookahead for the next line, to check if
  // there's a blankline ending the paragraph or not (in which case we
  // shouldn't emit a `NEWLINE_INLINE`).
  uint8_t next_line_whitespace = consume_whitespace(s, lexer);
  if (lexer->lookahead == '\n') {
    return false;
  }

  Block *top = peek_block(s);

  // Disallow `NEWLINE_INLINE` inside headings as it uses lines of inline
  // with heading continuations instead.
  if (top && top->type == HEADING) {
    return false;
  }

  // Need an extra check so we don't emit a NEWLINE_INLINE at the end
  // of a table caption if there's a mismatched indent.
  if (top && top->type == TABLE_CAPTION && next_line_whitespace < top->level) {
    return false;
  }

  // Paragraph should end, don't continue.
  if (close_paragraph(s, lexer) || end_paragraph_in_block_quote(s, lexer)) {
    return false;
  }

  lexer->result_symbol = NEWLINE_INLINE;
  return true;
}

static bool parse_newline(Scanner *s, TSLexer *lexer,
                          const bool *valid_symbols) {
  if (valid_symbols[VERBATIM_END] && try_close_verbatim(s, lexer)) {
    return true;
  }

  // Various different newline types share the `\n` consumption.
  if (!valid_symbols[NEWLINE] && !valid_symbols[NEWLINE_INLINE] &&
      !valid_symbols[EOF_OR_NEWLINE]) {
    return false;
  }

  uint32_t newline_column = lexer->get_column(lexer);

  if (lexer->lookahead == '\n') {
    advance_djot(s, lexer);
  }
  lexer->mark_end(lexer);

  // Prefer NEWLINE_INLINE for newlines in inline context.
  // When they're no longer accepted, this marks the end of a paragraph
  // and a regular NEWLINE (or EOF_OR_NEWLINE) can be emitted.
  if (valid_symbols[NEWLINE_INLINE] &&
      emit_newline_inline(s, lexer, newline_column)) {
    lexer->result_symbol = NEWLINE_INLINE;
    return true;
  }

  // We need to handle NEWLINE in the external scanner for our
  // changes to the Scanner state to be saved
  // (the reset of `block_quote_level` at newline in the main scan function).
  if (valid_symbols[NEWLINE]) {
    lexer->result_symbol = NEWLINE;
    return true;
  }

  if (valid_symbols[EOF_OR_NEWLINE]) {
    lexer->result_symbol = EOF_OR_NEWLINE;
    return true;
  }

  // Something should already have matched, but lets not rely on that shall
  // we?
  return false;
}

#ifdef DEBUG
static void dump(Scanner *s, TSLexer *lexer);
static void dump_valid_symbols(const bool *valid_symbols);
#endif

bool tree_sitter_djot_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {

  Scanner *s = (Scanner *)payload;

#ifdef DEBUG
  printf("SCAN\n");
  dump(s, lexer);
  dump_valid_symbols(valid_symbols);
#endif

  // Mark end right from the start and then when outputting results
  // we mark it again to make it consume.
  // I found it easier to opt-in to consume tokens.
  lexer->mark_end(lexer);
  // Important to remember to skip all carriage returns.
  if (lexer->lookahead == '\r') {
    advance_djot(s, lexer);
  }
  if (lexer->get_column(lexer) == 0) {
    s->indent = consume_whitespace(s, lexer);
  }
  bool is_newline = lexer->lookahead == '\n';

  if (is_newline) {
    s->block_quote_level = 0;
  }

#ifdef DEBUG
  printf("Setup whitespace\n");
  printf("  block_quote_level: %u\n", s->block_quote_level);
  printf("  indent: %u\n", s->indent);
  printf("  is_newline: %b\n", is_newline);
  printf("---\n");
#endif

  if (valid_symbols[BLOCK_CLOSE] && handle_blocks_to_close(s, lexer)) {
    return true;
  }
  // The above shouldn't allow us to continue past this point,
  // but it may happen if we've encountered a bug somewhere.
#ifdef DEBUG
  assert(s->blocks_to_close == 0);
#else
  if (s->blocks_to_close > 0) {
    return ERROR;
  }
#endif

  // Buffered tokens can come after blocks are closed.
  if (output_delayed_token(s, lexer, valid_symbols)) {
    return true;
  }

  if (valid_symbols[LIST_ITEM_CONTINUATION] &&
      parse_list_item_continuation(s, lexer, is_newline)) {
    return true;
  }

  if (valid_symbols[CLOSE_PARAGRAPH] && parse_close_paragraph(s, lexer)) {
    return true;
  }
  if (parse_footnote_end(s, lexer, valid_symbols)) {
    return true;
  }

  if (valid_symbols[BLOCK_CLOSE] &&
      close_list_nested_block_if_needed(s, lexer, !is_newline)) {
    return true;
  }

  // End previous list item before opening new ones.
  if (valid_symbols[LIST_ITEM_END] &&
      parse_list_item_end(s, lexer, valid_symbols)) {
    return true;
  }

  // Verbatim content parsing is responsible for setting VERBATIM_END
  // for normal instances as well.
  if (valid_symbols[VERBATIM_CONTENT] && parse_verbatim_content(s, lexer)) {
    return true;
  }
  if (valid_symbols[VERBATIM_END] && lexer->eof) {
    if (try_close_verbatim(s, lexer)) {
      return true;
    }
  }

  if (parse_block_quote(s, lexer, valid_symbols)) {
    return true;
  }
  if (parse_heading(s, lexer, valid_symbols)) {
    return true;
  }

  switch (lexer->lookahead) {
  case '-':
    if (parse_dash(s, lexer, valid_symbols)) {
      return true;
    }
    break;
  case '*':
    if (parse_star(s, lexer, valid_symbols)) {
      return true;
    }
    break;
  case '+':
    if (parse_plus(s, lexer, valid_symbols)) {
      return true;
    }
    break;
  case ':':
    if (parse_colon(s, lexer, valid_symbols)) {
      return true;
    }
    break;
  case '`':
    if (parse_backtick(s, lexer, valid_symbols)) {
      return true;
    }
    break;
  case '[':
    if (parse_open_bracket(s, lexer, valid_symbols)) {
      return true;
    }
    break;
  case '\n':
    if (parse_newline(s, lexer, valid_symbols)) {
      return true;
    }
    break;
  default:
    break;
  }

  // Scan ordered list markers outside because the parsing may conflict with
  // closing of lists (both may try to parse the same characters).
  TokenType ordered_list_marker = scan_ordered_list_marker_token(s, lexer);
  if (ordered_list_marker != IGNORED &&
      handle_ordered_list_marker(s, lexer, valid_symbols,
                                 ordered_list_marker)) {
    return true;
  }

  if (valid_symbols[TABLE_CAPTION_END] && parse_table_caption_end(s, lexer)) {
    return true;
  }
  if (valid_symbols[TABLE_CAPTION_BEGIN] &&
      parse_table_caption_begin(s, lexer)) {
    return true;
  }

  // May scan a complete list marker, which we can't do before checking if
  // we should output the list marker itself.
  // Yeah, the order dependencies aren't very nice.
  if (valid_symbols[BLOCK_CLOSE] &&
      try_close_different_typed_list(s, lexer, ordered_list_marker)) {
    return true;
  }

  if (valid_symbols[EOF_OR_NEWLINE] && lexer->eof(lexer)) {
    lexer->result_symbol = EOF_OR_NEWLINE;
    return true;
  }

  return false;
}

void init(Scanner *s) {
  array_init(s->open_blocks);
  s->blocks_to_close = 0;
  s->delayed_token = IGNORED;
  s->delayed_token_width = 0;
  s->verbatim_tick_count = 0;
  s->block_quote_level = 0;
  s->indent = 0;
}

void *tree_sitter_djot_external_scanner_create() {
  Scanner *s = (Scanner *)ts_malloc(sizeof(Scanner));
  s->open_blocks = ts_malloc(sizeof(Array(Block *)));
  init(s);
  return s;
}

void tree_sitter_djot_external_scanner_destroy(void *payload) {
  Scanner *s = (Scanner *)payload;
  for (size_t i = 0; i < s->open_blocks->size; ++i) {
    ts_free(*array_get(s->open_blocks, i));
  }
  array_delete(s->open_blocks);
  ts_free(s);
}

unsigned tree_sitter_djot_external_scanner_serialize(void *payload,
                                                     char *buffer) {
  Scanner *s = (Scanner *)payload;
  unsigned size = 0;
  buffer[size++] = (char)s->blocks_to_close;
  buffer[size++] = (char)s->delayed_token;
  buffer[size++] = (char)s->delayed_token_width;
  buffer[size++] = (char)s->verbatim_tick_count;
  buffer[size++] = (char)s->block_quote_level;
  buffer[size++] = (char)s->indent;

  for (size_t i = 0; i < s->open_blocks->size; ++i) {
    Block *b = *array_get(s->open_blocks, i);
    buffer[size++] = (char)b->type;
    buffer[size++] = (char)b->level;
  }

  return size;
}

void tree_sitter_djot_external_scanner_deserialize(void *payload, char *buffer,
                                                   unsigned length) {
  Scanner *s = (Scanner *)payload;
  init(s);
  if (length > 0) {
    size_t size = 0;
    s->blocks_to_close = (uint8_t)buffer[size++];
    s->delayed_token = (TokenType)buffer[size++];
    s->delayed_token_width = (uint8_t)buffer[size++];
    s->verbatim_tick_count = (uint8_t)buffer[size++];
    s->block_quote_level = (uint8_t)buffer[size++];
    s->indent = (uint8_t)buffer[size++];

    while (size < length) {
      BlockType type = (BlockType)buffer[size++];
      uint8_t level = (uint8_t)buffer[size++];
      array_push(s->open_blocks, create_block(type, level));
    }
  }
}

#ifdef DEBUG

static char *token_type_s(TokenType t) {
  switch (t) {
  case BLOCK_CLOSE:
    return "BLOCK_CLOSE";
  case EOF_OR_NEWLINE:
    return "EOF_OR_NEWLINE";
  case NEWLINE:
    return "NEWLINE";
  case NEWLINE_INLINE:
    return "NEWLINE_INLINE";

  case FRONTMATTER_MARKER:
    return "FRONTMATTER_MARKER";

  case HEADING1_BEGIN:
    return "HEADING1_BEGIN";
  case HEADING1_CONTINUATION:
    return "HEADING1_CONTINUATION";
  case HEADING2_BEGIN:
    return "HEADING2_BEGIN";
  case HEADING2_CONTINUATION:
    return "HEADING2_CONTINUATION";
  case HEADING3_BEGIN:
    return "HEADING3_BEGIN";
  case HEADING3_CONTINUATION:
    return "HEADING3_CONTINUATION";
  case HEADING4_BEGIN:
    return "HEADING4_BEGIN";
  case HEADING4_CONTINUATION:
    return "HEADING4_CONTINUATION";
  case HEADING5_BEGIN:
    return "HEADING5_BEGIN";
  case HEADING5_CONTINUATION:
    return "HEADING5_CONTINUATION";
  case HEADING6_BEGIN:
    return "HEADING6_BEGIN";
  case HEADING6_CONTINUATION:
    return "HEADING6_CONTINUATION";
  case DIV_BEGIN:
    return "DIV_BEGIN";
  case DIV_END:
    return "DIV_END";
  case CODE_BLOCK_BEGIN:
    return "CODE_BLOCK_BEGIN";
  case CODE_BLOCK_END:
    return "CODE_BLOCK_END";
  case LIST_MARKER_DASH:
    return "LIST_MARKER_DASH";
  case LIST_MARKER_STAR:
    return "LIST_MARKER_STAR";
  case LIST_MARKER_PLUS:
    return "LIST_MARKER_PLUS";
  case LIST_MARKER_TASK_BEGIN:
    return "LIST_MARKER_TASK_BEGIN";
  case LIST_MARKER_DEFINITION:
    return "LIST_MARKER_DEFINITION";
  case LIST_MARKER_DECIMAL_PERIOD:
    return "LIST_MARKER_DECIMAL_PERIOD";
  case LIST_MARKER_LOWER_ALPHA_PERIOD:
    return "LIST_MARKER_LOWER_ALPHA_PERIOD";
  case LIST_MARKER_UPPER_ALPHA_PERIOD:
    return "LIST_MARKER_UPPER_ALPHA_PERIOD";
  case LIST_MARKER_LOWER_ROMAN_PERIOD:
    return "LIST_MARKER_LOWER_ROMAN_PERIOD";
  case LIST_MARKER_UPPER_ROMAN_PERIOD:
    return "LIST_MARKER_UPPER_ROMAN_PERIOD";
  case LIST_MARKER_DECIMAL_PAREN:
    return "LIST_MARKER_DECIMAL_PAREN";
  case LIST_MARKER_LOWER_ALPHA_PAREN:
    return "LIST_MARKER_LOWER_ALPHA_PAREN";
  case LIST_MARKER_UPPER_ALPHA_PAREN:
    return "LIST_MARKER_UPPER_ALPHA_PAREN";
  case LIST_MARKER_LOWER_ROMAN_PAREN:
    return "LIST_MARKER_LOWER_ROMAN_PAREN";
  case LIST_MARKER_UPPER_ROMAN_PAREN:
    return "LIST_MARKER_UPPER_ROMAN_PAREN";
  case LIST_MARKER_DECIMAL_PARENS:
    return "LIST_MARKER_DECIMAL_PARENS";
  case LIST_MARKER_LOWER_ALPHA_PARENS:
    return "LIST_MARKER_LOWER_ALPHA_PARENS";
  case LIST_MARKER_UPPER_ALPHA_PARENS:
    return "LIST_MARKER_UPPER_ALPHA_PARENS";
  case LIST_MARKER_LOWER_ROMAN_PARENS:
    return "LIST_MARKER_LOWER_ROMAN_PARENS";
  case LIST_MARKER_UPPER_ROMAN_PARENS:
    return "LIST_MARKER_UPPER_ROMAN_PARENS";
  case LIST_ITEM_CONTINUATION:
    return "LIST_ITEM_CONTINUATION";
  case LIST_ITEM_END:
    return "LIST_ITEM_END";
  case CLOSE_PARAGRAPH:
    return "CLOSE_PARAGRAPH";
  case BLOCK_QUOTE_BEGIN:
    return "BLOCK_QUOTE_BEGIN";
  case BLOCK_QUOTE_CONTINUATION:
    return "BLOCK_QUOTE_CONTINUATION";
  case THEMATIC_BREAK_DASH:
    return "THEMATIC_BREAK_DASH";
  case THEMATIC_BREAK_STAR:
    return "THEMATIC_BREAK_STAR";
  case FOOTNOTE_BEGIN:
    return "FOOTNOTE_BEGIN";
  case FOOTNOTE_END:
    return "FOOTNOTE_END";
  case TABLE_CAPTION_BEGIN:
    return "TABLE_CAPTION_BEGIN";
  case TABLE_CAPTION_END:
    return "TABLE_CAPTION_END";

  case VERBATIM_BEGIN:
    return "VERBATIM_BEGIN";
  case VERBATIM_END:
    return "VERBATIM_END";
  case VERBATIM_CONTENT:
    return "VERBATIM_CONTENT";

  case ERROR:
    return "ERROR";
  case IGNORED:
    return "IGNORED";
  default:
    return "NOT IMPLEMENTED";
  }
}

static char *block_type_s(BlockType t) {
  switch (t) {
  case SECTION:
    return "SECTION";
  case HEADING:
    return "HEADING";
  case DIV:
    return "DIV";
  case BLOCK_QUOTE:
    return "BLOCK_QUOTE";
  case CODE_BLOCK:
    return "CODE_BLOCK";
  case FOOTNOTE:
    return "FOOTNOTE";
  case TABLE_CAPTION:
    return "TABLE_CAPTION";
  case LIST_DASH:
    return "LIST_DASH";
  case LIST_STAR:
    return "LIST_STAR";
  case LIST_PLUS:
    return "LIST_PLUS";
  case LIST_TASK:
    return "LIST_TASK";
  case LIST_DEFINITION:
    return "LIST_DEFINITION";
  case LIST_DECIMAL_PERIOD:
    return "LIST_DECIMAL_PERIOD";
  case LIST_LOWER_ALPHA_PERIOD:
    return "LIST_LOWER_ALPHA_PERIOD";
  case LIST_UPPER_ALPHA_PERIOD:
    return "LIST_UPPER_ALPHA_PERIOD";
  case LIST_LOWER_ROMAN_PERIOD:
    return "LIST_LOWER_ROMAN_PERIOD";
  case LIST_UPPER_ROMAN_PERIOD:
    return "LIST_UPPER_ROMAN_PERIOD";
  case LIST_DECIMAL_PAREN:
    return "LIST_DECIMAL_PAREN";
  case LIST_LOWER_ALPHA_PAREN:
    return "LIST_LOWER_ALPHA_PAREN";
  case LIST_UPPER_ALPHA_PAREN:
    return "LIST_UPPER_ALPHA_PAREN";
  case LIST_LOWER_ROMAN_PAREN:
    return "LIST_LOWER_ROMAN_PAREN";
  case LIST_UPPER_ROMAN_PAREN:
    return "LIST_UPPER_ROMAN_PAREN";
  case LIST_DECIMAL_PARENS:
    return "LIST_DECIMAL_PARENS";
  case LIST_LOWER_ALPHA_PARENS:
    return "LIST_LOWER_ALPHA_PARENS";
  case LIST_UPPER_ALPHA_PARENS:
    return "LIST_UPPER_ALPHA_PARENS";
  case LIST_LOWER_ROMAN_PARENS:
    return "LIST_LOWER_ROMAN_PARENS";
  case LIST_UPPER_ROMAN_PARENS:
    return "LIST_UPPER_ROMAN_PARENS";
  default:
    return "NOT IMPLEMENTED";
  }
}

static void dump_scanner(Scanner *s) {
  printf("--- Open blocks: %u (last -> first)\n", s->open_blocks->size);
  for (size_t i = 0; i < s->open_blocks->size; ++i) {
    Block *b = *array_get(s->open_blocks, i);
    printf("  %d %s\n", b->level, block_type_s(b->type));
  }
  printf("---\n");
  printf("  blocks_to_close: %d\n", s->blocks_to_close);
  if (s->delayed_token != IGNORED) {
    printf("  delayed_token: %s\n", token_type_s(s->delayed_token));
    printf("  delayed_token_width: %d\n", s->delayed_token_width);
  }
  printf("  verbatim_tick_count: %u\n", s->verbatim_tick_count);
  printf("  block_quote_level: %u\n", s->block_quote_level);
  printf("  indent: %u\n", s->indent);
  printf("===\n");
}

static void dump(Scanner *s, TSLexer *lexer) {
  printf("=== Lookahead: ");
  if (lexer->eof(lexer)) {
    printf("eof\n");
  } else {
    printf("`%c`\n", lexer->lookahead);
  }
  dump_scanner(s);
}

static void dump_valid_symbols(const bool *valid_symbols) {
  // printf("# valid_symbols:\n");
  // for (int i = 0; i <= ERROR; ++i) {
  //   if (valid_symbols[i]) {
  //     printf("%s\n", token_type_s(i));
  //   }
  // }
  if (valid_symbols[ERROR]) {
    printf("# In error recovery ALL SYMBOLS ARE VALID\n");
    return;
  }
  printf("# valid_symbols (shortened):\n");
  for (int i = 0; i <= ERROR; ++i) {
    switch (i) {
    case BLOCK_CLOSE:
    // case BLOCK_QUOTE_BEGIN:
    case BLOCK_QUOTE_CONTINUATION:
    case CLOSE_PARAGRAPH:
    // case FOOTNOTE_BEGIN:
    // case FOOTNOTE_END:
    case NEWLINE:
    case NEWLINE_INLINE:
    // case LIST_MARKER_TASK_BEGIN:
    case LIST_MARKER_DASH:
    // case LIST_MARKER_STAR:
    // case LIST_MARKER_PLUS:
    case LIST_ITEM_CONTINUATION:
    case LIST_ITEM_END:
    case EOF_OR_NEWLINE:
    case DIV_BEGIN:
    case DIV_END:
      // case TABLE_CAPTION_BEGIN:
      // case TABLE_CAPTION_END:
      if (valid_symbols[i]) {
        printf("%s\n", token_type_s(i));
      }
      break;
    default:
      continue;
    }
  }
  printf("#\n");
}

#endif

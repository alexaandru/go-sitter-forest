#include "parser.h"
#include "alloc.h"
#include "array.h"
#include <stdint.h>

typedef enum {
  END_OF_LINE,
  KNOT_BLOCK_START,
  KNOT_BLOCK_END,
  STITCH_BLOCK_START,
  STITCH_BLOCK_END,
  CHOICE_BLOCK_START,
  CHOICE_BLOCK_END,
  GATHER_BLOCK_START,
  GATHER_BLOCK_END,
  CHOICE_MARK,
  GATHER_MARK,
  ERROR,
} Token;

#define DEBUG 0
// From this badass: https://stackoverflow.com/a/1644898
// and this https://www.reddit.com/r/C_Programming/comments/jq8zsq/gblfq5y/ for the ## __VA_ARGS bit
#define DBG(fmt, ...) \
        do { if (DEBUG) fprintf(stderr, "%s:%d:%s(): " fmt, __FILE__, \
                                __LINE__, __func__, ## __VA_ARGS__); } while (0)

// Less noisy than DBG, but provides no context.
#define MSG(fmt, ...) \
        do { if (DEBUG) fprintf(stderr, fmt, ## __VA_ARGS__); } while (0)

void print_valid_symbols(const bool *valid_symbols) {
  if (valid_symbols[ERROR])
    MSG("======================================== ERROR =========================================\n");
  else
    MSG("========================================================================================\n");
  MSG(" %s END_OF_LINE        \n", valid_symbols[END_OF_LINE]        ? "*" : "-");
  MSG(" %s KNOT_BLOCK_START   \t", valid_symbols[KNOT_BLOCK_START]   ? "*" : "-");
  MSG(" %s KNOT_BLOCK_END     \n", valid_symbols[KNOT_BLOCK_END]     ? "*" : "-");
  MSG(" %s STITCH_BLOCK_START \t", valid_symbols[STITCH_BLOCK_START] ? "*" : "-");
  MSG(" %s STITCH_BLOCK_END   \n", valid_symbols[STITCH_BLOCK_END]   ? "*" : "-");
  MSG(" %s CHOICE_BLOCK_START \t", valid_symbols[CHOICE_BLOCK_START] ? "*" : "-");
  MSG(" %s CHOICE_BLOCK_END   \n", valid_symbols[CHOICE_BLOCK_END]   ? "*" : "-");
  MSG(" %s GATHER_BLOCK_START \t", valid_symbols[GATHER_BLOCK_START] ? "*" : "-");
  MSG(" %s GATHER_BLOCK_END   \n", valid_symbols[GATHER_BLOCK_END]   ? "*" : "-");
  MSG(" %s CHOICE_MARK        \t", valid_symbols[CHOICE_MARK]        ? "*" : "-");
  MSG(" %s GATHER_MARK        \n", valid_symbols[GATHER_MARK]        ? "*" : "-");
  MSG("------------------\n");
}

char pretty(char c) {
  switch (c) {
    case '\n':
    case '\t':
    case '\f':
    case '\r':
      return '\0';
    default:
      return c;
  }
}

typedef enum {
  BLOCK_TYPE_NONE,
  BLOCK_TYPE_CONTENT,
  BLOCK_TYPE_CHOICE,
  BLOCK_TYPE_GATHER,
  BLOCK_TYPE_STITCH,
  BLOCK_TYPE_KNOT
} BlockType;

// Typedef for numeric block level; juuust in case we want to change the amount of nesting we allow.
// To future self … CAUTION: This needs to be serialized to a string of bytes,
// so account for that when changing it to something larger.
typedef uint8_t BlockLevel;
const BlockLevel BLOCK_LEVEL_NONE = 0; // treat this an _unset_
const BlockLevel BLOCK_LEVEL_KNOT = 1;
const BlockLevel BLOCK_LEVEL_STITCH = 2;
const BlockLevel BLOCK_LEVEL_FLOW = 3;
const BlockLevel BLOCK_LEVEL_MAX = UINT8_MAX;

typedef struct BlockInfo {
  BlockType type;
  BlockLevel level;
} BlockInfo;

#define BLOCK_INFO_INIT (BlockInfo) {.type = BLOCK_TYPE_NONE, .level = BLOCK_LEVEL_NONE}

typedef struct {
  /// When parsing a gather/choice: Number of block chars remaining at current parse position
  BlockLevel remaining_flow_marks;

  /// When parsing a gather/choice: Type of block delimiter currently being parsed
  BlockType block_type;

  /// The stack of blocks that we're currently in. Used to establish the tree structure of the document.
  Array(BlockLevel) blocks;
} Scanner;

void print_scanner_state(Scanner *scanner) {
  if (scanner->remaining_flow_marks > 0)
    MSG("Scanner: marks type %d ramaining: %d\n", scanner->block_type, scanner->remaining_flow_marks);
  MSG("Scanner: blocks=");
  for (uint32_t i = 0; i < scanner->blocks.size; i++)
    MSG("%d", *array_get(&scanner->blocks, i));
  MSG("\n");
}


////////////////////
// Lexing Helpers //
////////////////////

void mark_end(TSLexer *lexer) {
  lexer->mark_end(lexer);
}

void skip_ink(TSLexer *lexer) {
  lexer->advance_ink(lexer, true);
}

void consume(TSLexer *lexer) {
  lexer->advance_ink(lexer, false);
}

bool is_eof(TSLexer *lexer) {
  return lexer->eof(lexer);
}

int32_t lookahead(TSLexer *lexer) {
  return lexer->lookahead;
}

bool skip_char(TSLexer *lexer, char c) {
  MSG("Expecting %c", pretty(c));
  if (lexer->lookahead == c) {
    MSG(", which we got\n");
    skip_ink(lexer);
    return true;
  } else {
    MSG(", but got '%c'.\n", pretty(lexer->lookahead));
    return false;
  }
}

bool is_at_line_start(TSLexer *lexer) {
  return lexer->get_column(lexer) == 0;
}


///////////////////////
// Scanner Callbacks //
///////////////////////
unsigned tree_sitter_ink_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = (Scanner *)payload;
  uint32_t size = 0;

  buffer[size++] = scanner->remaining_flow_marks;
  buffer[size++] = scanner->block_type;

  for (uint32_t i = 0; i < scanner->blocks.size && size <= TREE_SITTER_SERIALIZATION_BUFFER_SIZE; i++) {
    buffer[size] = (char) *array_get(&scanner->blocks, i);
    size++;
  }

  if (size >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
    // printf needs to be commented out to be compiled for wasm (i.e. to use the playground).
    // printf("WARN: Bumped up against tree sitter serialization limit (%d)! We may have lost data!\n",
    //        TREE_SITTER_SERIALIZATION_BUFFER_SIZE);
  }
  // MSG("Serializing %d bytes of state\n", size);
  return size;
}

void tree_sitter_ink_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = (Scanner *)payload;

  // reset all members as per suggestion in the docs
  scanner->remaining_flow_marks = 0;
  scanner->block_type = 0;
  array_delete(&scanner->blocks);

  // init from buffer, if present and required
  // MSG("Deserializing %d bytes of state.\n", length);
  if (buffer != NULL && length > 0) {
    uint32_t size = 0;

    scanner->remaining_flow_marks = (BlockLevel) buffer[size++];
    scanner->block_type = (BlockType) buffer[size++];

    while (size < length)
      array_push(&scanner->blocks, buffer[size++]);
  }
  // MSG("Deserialized %d bytes of state.\n", size);

  // Make sure the thing is never empty so we never have to check.
  if (scanner->blocks.size == 0)
    array_push(&scanner->blocks, BLOCK_LEVEL_NONE);
}


void *tree_sitter_ink_external_scanner_create(void) {
  Scanner *scanner = ts_calloc(1, sizeof(Scanner));
  tree_sitter_ink_external_scanner_deserialize(scanner, NULL, 0);
  return scanner;
}

void tree_sitter_ink_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  array_delete(&scanner->blocks);
  ts_free(scanner);
}

/// Skip all whitspace (including carriage returns).
void skip_ws(TSLexer *lexer) {
  while (lookahead(lexer) <= ' ' && !is_eof(lexer))
    skip_ink(lexer);
}

/// Skip whitespace until _before_ a carriage return (don't consume it).
/// Return `true` if ended up at up carriage return, false otherwise.
bool skip_whitspace_to_newline(TSLexer *lexer) {
  while (lookahead(lexer) <= ' ' && lookahead(lexer) != '\n' && !is_eof(lexer))
    skip_ink(lexer);
  return lookahead(lexer) == '\n';
}

/// Set `token` as the lexer result and add `level` to the `scanner` block hierarchy.
bool start_block(TSLexer *lexer, Scanner *scanner, Token token, BlockLevel level) {
  lexer->result_symbol = token;
  array_push(&scanner->blocks, level);
  return true; // Just so this can be called inline.
}

/// Set `token` as the lexer result and pop/discard the topmest element from the `scanner`'s block hierarchy.
bool end_block(TSLexer *lexer, Scanner *scanner, Token token) {
  lexer->result_symbol = token;
  (void) array_pop(&scanner->blocks);  // cast to void to shut up warnings about unused values.
  return true; // Just so this can be called inline.
}

typedef enum {
  LINE_COMMENT_TOKEN,
  BLOCK_COMMENT_TOKEN,
  NO_COMMENT_TOKEN,
} CommentType;

/// Identify comment token. Does not skip ahead; skip all whitespace as appropriate before calling this.
///
/// If a block comment is still open at EOF then return NO_COMMENT_TOKEN,
/// so that tree-sitter can treat it as an error.
CommentType lookahead_comment(TSLexer *lexer) {
  if (!skip_char(lexer, '/'))
    return NO_COMMENT_TOKEN;

  CommentType type = NO_COMMENT_TOKEN;
  if (skip_char(lexer, '/')) {
    type = LINE_COMMENT_TOKEN;
  } else if (skip_char(lexer, '*')) {
    type = BLOCK_COMMENT_TOKEN;
  } else {
    return NO_COMMENT_TOKEN;
  }

  while (!is_eof(lexer)) {
    if (type == LINE_COMMENT_TOKEN && lookahead(lexer) == '\n') {
      // NOTE: We don't eat the carriage return, because other syntax may depend on it.
      return LINE_COMMENT_TOKEN;
    } else if (type == BLOCK_COMMENT_TOKEN) {
      if (skip_char(lexer, '*') && skip_char(lexer, '/')) {
          return BLOCK_COMMENT_TOKEN;
      }
    }
    skip_ink(lexer);
  }

  // We're at EOF; all comments simply end here, even if they're unterminated.
  return type;
}

/// Looks ahead to see if a new block could be started here.
///
/// At EOF BlockType is BLOCK_TYPE_NONE.
///
/// It would have been nice to not include the the lines between blocks, but that would require rewinding
/// to a previous position based on information that we only learn after we've hit a mark.
/// Maybe revisit this if and when tree-sitter gets more explicit control over token start positions than `mark_end()`.
///
/// CAUTION: This can (and will) report a gather start marker when it encounters a condition in a conditional block
/// (i.e. `- some_expression:`). We can't really distinguish that here without more complicated parsing.
/// That's why it is important to cross-reference the result with the valid symbols at that position (i.e.
/// can a gather even start here?).
BlockInfo lookahead_block_start(TSLexer *lexer) {
  MSG("Looking ahead for block start marker\n");

  BlockInfo block = BLOCK_INFO_INIT;

  if (is_eof(lexer)) {
    MSG("EOF, so no next block.\n");
    return block;
  }

  if (skip_char(lexer, '=')) {
    if (skip_char(lexer, '=')) {
      block.type = BLOCK_TYPE_KNOT;
      block.level = BLOCK_LEVEL_KNOT;
      return block;
    } else {
      block.type = BLOCK_TYPE_STITCH;
      block.level= BLOCK_LEVEL_STITCH;
      return block;
    }
  }

  BlockLevel markers = 0;
  uint32_t c = lookahead(lexer);
  uint32_t first_marker = 0;
  while ((c == '*' || c == '+' || (c == '-')) && (markers < BLOCK_LEVEL_MAX)) {
    MSG("%c ", c);
    skip_ink(lexer);
    if (c == '-' && lookahead(lexer) == '>') {
      MSG("capped off by a divert ");
      break;
    } else {
      if (first_marker == 0) {
        first_marker = c;
      } else if (c != first_marker) {
        break;
      }
      markers += 1;
      skip_whitspace_to_newline(lexer);  // flow markers can't span newlines
      lookahead_comment(lexer);
      skip_whitspace_to_newline(lexer);
      c = lookahead(lexer);
    }
  }

  MSG("Next block is flow. Level indicators: %d\n", markers);

  block.level = BLOCK_LEVEL_FLOW + markers;

  switch (first_marker) {
  case '-':
    block.type = BLOCK_TYPE_GATHER;
    break;
  case '*':
  case '+':
    block.type = BLOCK_TYPE_CHOICE;
    break;
  default:
    block.type = BLOCK_TYPE_CONTENT;
    break;
  }

  return block;
}


bool tree_sitter_ink_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  Scanner *scanner = (Scanner *)payload;

  print_valid_symbols(valid_symbols);
  print_scanner_state(scanner);

  if (valid_symbols[ERROR]) {
    // MSG("Abort like babies!\n"); assert(false);
    return false;
  }

  MSG("at '%c' (%d).\n", pretty(lookahead(lexer)), lookahead(lexer));

  // Try to end lines (that's always the innermost 'block')
  if (valid_symbols[END_OF_LINE]) {
    MSG("Checking for EO[L|F]\n");
    if (skip_whitspace_to_newline(lexer)) {
      MSG("  at EOL\n");
      lexer->result_symbol = END_OF_LINE;
      return true;
    } else if (is_eof(lexer)) {
      MSG("  at EOF\n");
      lexer->result_symbol = END_OF_LINE;
      return true;
    }
  }

  if (scanner->remaining_flow_marks) {
    skip_ws(lexer);
    MSG("Still %d remaining block marks. Trying to emit one.\n", scanner->remaining_flow_marks);
    bool found_correct_mark = false;
    int32_t c = lookahead(lexer);
    if (scanner->block_type == BLOCK_TYPE_CHOICE) {
      found_correct_mark = c == '*' || c == '+';
      lexer->result_symbol = CHOICE_MARK;
    } else if (scanner->block_type == BLOCK_TYPE_GATHER) {
      found_correct_mark = c == '-';
      lexer->result_symbol = GATHER_MARK;
    } else {
      MSG("Unexpected block type %d while emitting choice/gather marks\n", scanner->block_type);
      exit(255);
    }
    if (found_correct_mark) {
      consume(lexer);
      scanner->remaining_flow_marks--;
      return true;
    } else {
      return false;
    }
  }

  bool is_block_boundary = valid_symbols[KNOT_BLOCK_START]
                        || valid_symbols[KNOT_BLOCK_END]
                        || valid_symbols[STITCH_BLOCK_START]
                        || valid_symbols[STITCH_BLOCK_END]
                        || valid_symbols[CHOICE_BLOCK_START]
                        || valid_symbols[CHOICE_BLOCK_END]
                        || valid_symbols[GATHER_BLOCK_START]
                        || valid_symbols[GATHER_BLOCK_END];

  if (is_block_boundary) {
    MSG("Checking for Block delimiters.\n");

    skip_ws(lexer);
    mark_end(lexer);
    while (lookahead_comment(lexer) != NO_COMMENT_TOKEN) {
      skip_ws(lexer);
    }

    BlockLevel current_block_level = *array_back(&scanner->blocks);
    BlockInfo next_block = lookahead_block_start(lexer);

    if (next_block.type == BLOCK_TYPE_NONE) {
      MSG("Blocks can only end here.\n");
      if (valid_symbols[CHOICE_BLOCK_END])
        return end_block(lexer, scanner, CHOICE_BLOCK_END);
      else if (valid_symbols[GATHER_BLOCK_END])
        return end_block(lexer, scanner, GATHER_BLOCK_END);
      else if (valid_symbols[STITCH_BLOCK_END])
        return end_block(lexer, scanner, STITCH_BLOCK_END);
      else if (valid_symbols[KNOT_BLOCK_END])
        return end_block(lexer, scanner, KNOT_BLOCK_END);
      else
        return false;
    }

    if (next_block.type == BLOCK_TYPE_CONTENT) {
      MSG("Next up is just content, the block remains the same.\n");
      return false;
    }

    MSG("Current %d -> Next %d|%d: ", current_block_level, next_block.type, next_block.level);
    if (next_block.level > current_block_level) {
      MSG("Next block is deeper. Start block.\n");

      // Remember the marks we're going to emit next.
      scanner->block_type = next_block.type;
      scanner->remaining_flow_marks = (next_block.level >= BLOCK_LEVEL_FLOW)
                                       ? next_block.level - BLOCK_LEVEL_FLOW
                                       : 0;

      if (next_block.type == BLOCK_TYPE_CHOICE && valid_symbols[CHOICE_BLOCK_START]) {
        return start_block(lexer, scanner, CHOICE_BLOCK_START, next_block.level);
      } else if (next_block.type == BLOCK_TYPE_GATHER && valid_symbols[GATHER_BLOCK_START]) {
        return start_block(lexer, scanner, GATHER_BLOCK_START, next_block.level);
      } else if (next_block.type == BLOCK_TYPE_KNOT && valid_symbols[KNOT_BLOCK_START]) {
        return start_block(lexer, scanner, KNOT_BLOCK_START, next_block.level);
      } else if (next_block.type == BLOCK_TYPE_STITCH && valid_symbols[STITCH_BLOCK_START]) {
        return start_block(lexer, scanner, STITCH_BLOCK_START, next_block.level);
      }

    } else {

      MSG("Next block same or shallower. End block.\n");
      if (valid_symbols[CHOICE_BLOCK_END]) {
        return end_block(lexer, scanner, CHOICE_BLOCK_END);
      } else if (valid_symbols[GATHER_BLOCK_END]) {
        return end_block(lexer, scanner, GATHER_BLOCK_END);
      } else if (valid_symbols[STITCH_BLOCK_END]) {
        return end_block(lexer, scanner, STITCH_BLOCK_END);
      } else if (valid_symbols[KNOT_BLOCK_END]) {
        return end_block(lexer, scanner, KNOT_BLOCK_END);
      } else {
        return false; // Weird. Error recovery next
      }

    }
  }

  MSG("*** FALLTHROUGH! ***\n");
  return false;
}

#include "alloc.h"
#include "array.h"
#include "parser.h"
#include <stdio.h>

// #define DEBUG

// The different tokens the external scanner support
// See `externals` in `grammar.js` for a description of most of them.
typedef enum {
  IGNORED,

  VERBATIM_BEGIN,
  VERBATIM_END,
  VERBATIM_CONTENT,

  // The different spans.
  // Begin is marked by a zero-width token to push elements on the open stack
  // (unless when we're parsing a fallback token).
  // End scans an actual ending token (such as `_}` or `_`) and checks the open
  // stack.
  EMPHASIS_MARK_BEGIN,
  EMPHASIS_END,
  STRONG_MARK_BEGIN,
  STRONG_END,
  SUPERSCRIPT_MARK_BEGIN,
  SUPERSCRIPT_END,
  SUBSCRIPT_MARK_BEGIN,
  SUBSCRIPT_END,
  HIGHLIGHTED_MARK_BEGIN,
  HIGHLIGHTED_END,
  INSERT_MARK_BEGIN,
  INSERT_END,
  DELETE_MARK_BEGIN,
  DELETE_END,

  PARENS_SPAN_MARK_BEGIN,
  PARENS_SPAN_END,
  CURLY_BRACKET_SPAN_MARK_BEGIN,
  CURLY_BRACKET_SPAN_END,
  SQUARE_BRACKET_SPAN_MARK_BEGIN,
  SQUARE_BRACKET_SPAN_END,

  // If we're scanning a fallback token then we should accept the beginning
  // markers, but not push anything on the stack.
  IN_FALLBACK,
  // Zero-width check for a non-whitespace token.
  NON_WHITESPACE_CHECK,

  ERROR,
} TokenType;

typedef enum {
  VERBATIM,
  EMPHASIS,
  STRONG,
  SUPERSCRIPT,
  SUBSCRIPT,
  HIGHLIGHTED,
  INSERT,
  DELETE,
  // Spans where the start token is managed by `grammar.js`
  // and the tokens specify the ending token ), }, or ]
  PARENS_SPAN,
  CURLY_BRACKET_SPAN,
  SQUARE_BRACKET_SPAN,
} ElementType;

// What kind of span we should parse.
typedef enum {
  // Only delimited by a single character, for example `[text]`.
  SpanSingle,
  // Only delimited by a curly bracketed tags, for example `{= highlight =}`.
  SpanBracketed,
  // Either single or bracketed, for example `^superscript^}`.
  SpanBracketedAndSingle,
  // Either single or bracketed, but no whitespace next to the single tags.
  // For example `_emphasis_}` (but not `_ emphasis _`).
  SpanBracketedAndSingleNoWhitespace,
} SpanType;

typedef struct {
  ElementType type;
  // Different types may use `data` differently.
  // Spans use it to count how many fallback symbols was returned after the
  // opening tag.
  // Verbatim counts the number of open and closing ticks.
  uint8_t data;
} Element;

typedef struct {
  Array(Element *) * open_elements;

  // Parser state flags.
  uint8_t state;
} Scanner;

// Tracks if a `[` starts an inline link.
// It's used to prune branches where it does not, fixing precedence
// issues with multiple elements inside the destination.
static const uint8_t STATE_BRACKET_STARTS_INLINE_LINK = 1 << 0;
// Tracks if a `[` starts a span (the Djot element).
// It's used to prune branches where it does not, fixing precedence
// issues where the span wasn't chosen despite being closed first.
static const uint8_t STATE_BRACKET_STARTS_SPAN = 1 << 1;

#ifdef DEBUG
#include <assert.h>
static void dump(Scanner *s, TSLexer *lexer);
static void dump_valid_symbols(const bool *valid_symbols);
#endif

static void advance_djot_inline(TSLexer *lexer) {
  lexer->advance_djot_inline(lexer, false);
  // Carriage returns should simply be ignored.
  if (lexer->lookahead == '\r') {
    lexer->advance_djot_inline(lexer, false);
  }
}

static uint8_t consume_chars(TSLexer *lexer, char c) {
  uint8_t count = 0;
  while (lexer->lookahead == c) {
    advance_djot_inline(lexer);
    ++count;
  }
  return count;
}

static bool is_whitespace(char c) {
  switch (c) {
  case ' ':
  case '\t':
  case '\r':
  case '\n':
    return true;
  default:
    return false;
  }
}

static uint8_t consume_whitespace(TSLexer *lexer) {
  uint8_t indent = 0;
  for (;;) {
    if (lexer->lookahead == ' ') {
      advance_djot_inline(lexer);
      ++indent;
    } else if (lexer->lookahead == '\r') {
      advance_djot_inline(lexer);
    } else if (lexer->lookahead == '\t') {
      advance_djot_inline(lexer);
      indent += 4;
    } else {
      break;
    }
  }
  return indent;
}

static Element *create_element(ElementType type, uint8_t data) {
  Element *e = ts_malloc(sizeof(Element));
  e->type = type;
  e->data = data;
  return e;
}

static void push_element(Scanner *s, ElementType type, uint8_t data) {
  array_push(s->open_elements, create_element(type, data));
}

static Element *peek_element(Scanner *s) {
  if (s->open_elements->size > 0) {
    return *array_back(s->open_elements);
  } else {
    return NULL;
  }
}

static SpanType element_span_type(ElementType type) {
  switch (type) {
  case VERBATIM:
    // Not used as verbatim is parsed separately.
    return SpanSingle;
  case EMPHASIS:
  case STRONG:
    return SpanBracketedAndSingleNoWhitespace;
  case SUPERSCRIPT:
  case SUBSCRIPT:
    return SpanBracketedAndSingle;
  case HIGHLIGHTED:
  case INSERT:
  case DELETE:
    return SpanBracketed;
  case PARENS_SPAN:
  case CURLY_BRACKET_SPAN:
  case SQUARE_BRACKET_SPAN:
    return SpanSingle;
  }
}

static char element_begin_token(ElementType type) {
  switch (type) {
  case VERBATIM:
    return VERBATIM_BEGIN;
  case EMPHASIS:
    return EMPHASIS_MARK_BEGIN;
  case STRONG:
    return STRONG_MARK_BEGIN;
  case SUPERSCRIPT:
    return SUPERSCRIPT_MARK_BEGIN;
  case SUBSCRIPT:
    return SUBSCRIPT_MARK_BEGIN;
  case HIGHLIGHTED:
    return HIGHLIGHTED_MARK_BEGIN;
  case INSERT:
    return INSERT_MARK_BEGIN;
  case DELETE:
    return DELETE_MARK_BEGIN;
  case PARENS_SPAN:
    return PARENS_SPAN_MARK_BEGIN;
  case CURLY_BRACKET_SPAN:
    return CURLY_BRACKET_SPAN_MARK_BEGIN;
  case SQUARE_BRACKET_SPAN:
    return SQUARE_BRACKET_SPAN_MARK_BEGIN;
  }
}

static char element_end_token(ElementType type) {
  switch (type) {
  case VERBATIM:
    return VERBATIM_END;
  case EMPHASIS:
    return EMPHASIS_END;
  case STRONG:
    return STRONG_END;
  case SUPERSCRIPT:
    return SUPERSCRIPT_END;
  case SUBSCRIPT:
    return SUBSCRIPT_END;
  case HIGHLIGHTED:
    return HIGHLIGHTED_END;
  case INSERT:
    return INSERT_END;
  case DELETE:
    return DELETE_END;
  case PARENS_SPAN:
    return PARENS_SPAN_END;
  case CURLY_BRACKET_SPAN:
    return CURLY_BRACKET_SPAN_END;
  case SQUARE_BRACKET_SPAN:
    return SQUARE_BRACKET_SPAN_END;
  }
}

static char element_marker(ElementType type) {
  switch (type) {
  case VERBATIM:
    // Not used as verbatim is parsed separately.
    return '`';
  case EMPHASIS:
    return '_';
  case STRONG:
    return '*';
  case SUPERSCRIPT:
    return '^';
  case SUBSCRIPT:
    return '~';
  case HIGHLIGHTED:
    return '=';
  case INSERT:
    return '+';
  case DELETE:
    return '-';
  case PARENS_SPAN:
    return ')';
  case CURLY_BRACKET_SPAN:
    return '}';
  case SQUARE_BRACKET_SPAN:
    return ']';
  }
}

static bool parse_verbatim_content(Scanner *s, TSLexer *lexer) {
  uint8_t ticks = 0;
  Element *top = peek_element(s);
  if (!top || top->type != VERBATIM) {
    // Should always have the top element, but crashing is not great.
    return false;
  }

  while (!lexer->eof(lexer)) {
    if (lexer->lookahead == '`') {
      // If we find a `, we need to count them to see if we should stop.
      uint8_t current = consume_chars(lexer, '`');
      if (current == top->data) {
        // We found a matching number of `
        break;
      } else {
        // Found a number of ` that doesn't match the start,
        // we should consume them.
        lexer->mark_end(lexer);
        ticks = 0;
      }
    } else {
      // Non-` token found, just consume.
      advance_djot_inline(lexer);
      lexer->mark_end(lexer);
      ticks = 0;
    }
  }

  // Scanned all the verbatim.
  lexer->result_symbol = VERBATIM_CONTENT;
  return true;
}

static bool parse_verbatim_end(Scanner *s, TSLexer *lexer) {
  Element *top = peek_element(s);
  if (!top || top->type != VERBATIM) {
    return false;
  }
  if (lexer->eof(lexer)) {
    lexer->result_symbol = VERBATIM_END;
    array_pop(s->open_elements);
    return true;
  }
  uint8_t ticks = consume_chars(lexer, '`');
  if (ticks != top->data) {
    return false;
  }
  lexer->mark_end(lexer);
  lexer->result_symbol = VERBATIM_END;
  array_pop(s->open_elements);
  return true;
}

static bool parse_verbatim_start(Scanner *s, TSLexer *lexer) {
  uint8_t ticks = consume_chars(lexer, '`');
  if (ticks == 0) {
    return false;
  }
  lexer->mark_end(lexer);
  lexer->result_symbol = VERBATIM_BEGIN;
  push_element(s, VERBATIM, ticks);
  return true;
}

static bool parse_verbatim(Scanner *s, TSLexer *lexer,
                           const bool *valid_symbols) {
  if (valid_symbols[VERBATIM_CONTENT] && parse_verbatim_content(s, lexer)) {
    return true;
  }
  if (lexer->eof(lexer)) {
    if (valid_symbols[VERBATIM_END] && parse_verbatim_end(s, lexer)) {
      return true;
    }
  }

  if (lexer->lookahead == '`') {
    if (valid_symbols[VERBATIM_BEGIN] && parse_verbatim_start(s, lexer)) {
      return true;
    }
    if (valid_symbols[VERBATIM_END] && parse_verbatim_end(s, lexer)) {
      return true;
    }
  }
  return false;
}

static bool element_on_top(Scanner *s, ElementType type) {
  return s->open_elements->size > 0 &&
         (*array_back(s->open_elements))->type == type;
}

static Element *find_element(Scanner *s, ElementType type) {
  for (int i = s->open_elements->size - 1; i >= 0; --i) {
    Element *e = *array_get(s->open_elements, i);
    if (e->type == type) {
      return e;
    }
  }
  return NULL;
}

static bool scan_single_span_end(TSLexer *lexer, char marker) {
  if (lexer->lookahead != marker) {
    return false;
  }
  advance_djot_inline(lexer);
  return true;
}

// Match a `_}` style token.
static bool scan_bracketed_span_end(TSLexer *lexer, char marker) {
  if (lexer->lookahead != marker) {
    return false;
  }
  advance_djot_inline(lexer);
  if (lexer->lookahead != '}') {
    return false;
  }
  advance_djot_inline(lexer);
  return true;
}

// Scan an ending token for a span (`_` or `_}`) if marker == '_'.
//
// This routine is responsible for parsing the trailing whitespace in a span,
// so the token may become a `  _}`.
//
// If `whitespace_sensitive == true` then we should not allow a space
// before the single marker (` _` isn't a valid ending token)
// and only allow spaces with the bracketed variant.
static bool scan_span_end(TSLexer *lexer, char marker,
                          bool whitespace_sensitive) {
  // Match `_` or `_}`
  if (lexer->lookahead == marker) {
    advance_djot_inline(lexer);
    if (lexer->lookahead == '}') {
      advance_djot_inline(lexer);
    }
    return true;
  }

  if (whitespace_sensitive && consume_whitespace(lexer) == 0) {
    return false;
  }

  // Only match `_}`.
  return scan_bracketed_span_end(lexer, marker);
}

static bool scan_span_end_marker(TSLexer *lexer, ElementType element) {
  char marker = element_marker(element);

  switch (element_span_type(element)) {
  case SpanSingle:
    return scan_single_span_end(lexer, marker);
  case SpanBracketed:
    return scan_bracketed_span_end(lexer, marker);
  case SpanBracketedAndSingle:
    return scan_span_end(lexer, marker, false);
  case SpanBracketedAndSingleNoWhitespace:
    return scan_span_end(lexer, marker, true);
  }
}

// Scan until `c`, aborting if an ending marker for the `top` element is found.
static bool scan_until(TSLexer *lexer, char c, ElementType *top) {
  while (!lexer->eof(lexer)) {
    if (top && scan_span_end_marker(lexer, *top)) {
      return false;
    }
    if (lexer->lookahead == c) {
      return true;
    } else if (lexer->lookahead == '\\') {
      advance_djot_inline(lexer);
    }
    advance_djot_inline(lexer);
  }
  return false;
}

// Updates lookahead states that are used to block the acceptance of
// the fallback characters `(` and `{` if there's a valid inline link
// or span to be chosen.
static void update_square_bracket_lookahead_states(Scanner *s, TSLexer *lexer,
                                                   Element *top) {
  // Reset flags so we can set them later if the scanning succeeds.
  s->state &= ~STATE_BRACKET_STARTS_INLINE_LINK;
  s->state &= ~STATE_BRACKET_STARTS_SPAN;

  ElementType *top_type = NULL;
  if (top) {
    top_type = &top->type;
  }

  // Scan the `[some text]` span.
  if (!scan_until(lexer, ']', top_type)) {
    return;
  }
  advance_djot_inline(lexer);

  if (lexer->lookahead == '(') {
    // An inline link may follow.
    if (scan_until(lexer, ')', top_type)) {
      s->state |= STATE_BRACKET_STARTS_INLINE_LINK;
    }
  } else if (lexer->lookahead == '{') {
    // An inline attribute my follow, turning it into the Djot `span` type.
    //
    // Please note that we're not parsing the actual inline attribute
    // that may have false positives.
    //
    // An invalid attribute may error out whole tree-sitter parsing
    // because we're actively blocking fallback characters, preventing
    // the parser from falling back to a paragraph.
    //
    // For a more correct implementation we should scan the inline attribute
    // in the same way as defined in `grammar.js`.
    if (scan_until(lexer, '}', top_type)) {
      s->state |= STATE_BRACKET_STARTS_SPAN;
    }
  }
}

static bool open_bracket_before_closing_marker(TSLexer *lexer,
                                               ElementType element) {
  return scan_until(lexer, '[', &element);
}

static bool mark_span_begin(Scanner *s, TSLexer *lexer,
                            const bool *valid_symbols, ElementType element,
                            TokenType token) {
  Element *top = peek_element(s);
  // If IN_FALLBACK is valid then it means we're processing the
  // `_symbol_fallback` branch (see `grammar.js`).
  if (valid_symbols[IN_FALLBACK]) {
    // There's a challenge when we have multiple elements inside an inline link:
    //
    //     [x](a_b_c_d_e)
    //
    // Because of the dynamic precedence treesitter will not parse this as a
    // link but as some fallback characters and then some emphasis.
    //
    // To prevent this we don't allow the parsing of `(` when it's a fallback
    // symbol if we can scan ahead and see that we should be able to parse it as
    // a link, stopping the contained emphasis from being considered.
    //
    // This is done here at `[` as a fallback character so when we reach `(`
    // we can abort and prune that branch (since we should parse it as a link).
    if (element == SQUARE_BRACKET_SPAN) {
      update_square_bracket_lookahead_states(s, lexer, top);
    }

    // This is where we've reached the `(` in:
    //
    //     [x](a_b_c_d_e)
    //
    // and if `STATE_BRACKET_CAN_START_INLINE_LINK` is true then we should prune
    // the branch and instead treat it as a link.
    if (element == PARENS_SPAN &&
        (s->state & STATE_BRACKET_STARTS_INLINE_LINK)) {
      return false;
    }

    // For spans `[text]{.class}` we use the same mechanism to solve precedence
    // in this example:
    //
    //     [_]{.c}_
    //
    // Where we'll block at `{` if we should instead treat it as a span.
    if (element == CURLY_BRACKET_SPAN &&
        (s->state & STATE_BRACKET_STARTS_SPAN)) {
      return false;
    }

    // If there's multiple valid opening spans, for example:
    //
    //      {_ {_ a_
    //
    // Then we should choose the shorter one and the first `{_`
    // should be regarded as regular text.
    // To handle this case we count the number of opening tags
    // an open element has and when we try to close an element with
    // open tags then we issue an error (in `parse_span_end`).
    //
    // The reason we're not immediately issuing an error here
    // is that spans might be nested, for example:
    //
    //      _a _b_ a_
    //
    // If we issue an error here at `_b` then we won't find the nested
    // emphasis. The solution i found was to do the check when closing the
    // span instead.
    Element *open = find_element(s, element);
    if (open != NULL) {
      ++open->data;
    }
    // We need to output the token common to both the fallback symbol and
    // the span so the resolver will detect the collision.
    lexer->result_symbol = token;
    return true;
  } else {
    // Reset blocking states when the correct branch was chosen.
    if (element == PARENS_SPAN) {
      s->state &= ~STATE_BRACKET_STARTS_INLINE_LINK;
    } else if (element == CURLY_BRACKET_SPAN) {
      s->state &= ~STATE_BRACKET_STARTS_SPAN;
    }

    lexer->result_symbol = token;
    push_element(s, element, 0);
    return true;
  }
}

// Parse a span ending token, either `_` or `_}`.
static bool parse_span_end(Scanner *s, TSLexer *lexer, ElementType element,
                           TokenType token) {
  // if (!scan_span_end_element(s, lexer, element)) {
  //   return false;
  // }
  // Only close the topmost element, so in:
  //
  //    _a *b_
  //
  // The `*` isn't allowed to open a span, and that branch should not be
  // valid.
  Element *top = peek_element(s);
  if (!top || top->type != element) {
    return false;
  }
  // If we've chosen any fallback symbols inside the span then we
  // should not accept the span.
  if (top->data > 0) {
    return false;
  }

  if (!scan_span_end_marker(lexer, element)) {
    return false;
  }

  lexer->mark_end(lexer);
  lexer->result_symbol = token;
  array_pop(s->open_elements);
  return true;
}

// Parse a span delimited with `marker`, with `_`, `{_`, and `_}` being valid
// delimiters.
static bool parse_span(Scanner *s, TSLexer *lexer, const bool *valid_symbols,
                       ElementType element) {
  TokenType begin_token = element_begin_token(element);
  TokenType end_token = element_end_token(element);
  if (valid_symbols[end_token] &&
      parse_span_end(s, lexer, element, end_token)) {
    return true;
  }
  if (valid_symbols[begin_token] &&
      mark_span_begin(s, lexer, valid_symbols, element, begin_token)) {
    return true;
  }
  return false;
}

static bool check_non_whitespace(Scanner *s, TSLexer *lexer) {
  switch (lexer->lookahead) {
  case ' ':
  case '\t':
  case '\r':
  case '\n':
    return false;
  default:
    lexer->result_symbol = NON_WHITESPACE_CHECK;
    return true;
  }
}

bool tree_sitter_djot_inline_external_scanner_scan(void *payload,
                                                   TSLexer *lexer,
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

  if (valid_symbols[ERROR]) {
    lexer->result_symbol = ERROR;
    return true;
  }

  if (valid_symbols[NON_WHITESPACE_CHECK] && check_non_whitespace(s, lexer)) {
    return true;
  }

  // There's no overlap of leading characters that the scanner needs to
  // manage, so we can hide all individual character checks inside these parse
  // functions.
  if (parse_verbatim(s, lexer, valid_symbols)) {
    return true;
  }
  if (parse_span(s, lexer, valid_symbols, EMPHASIS)) {
    return true;
  }
  if (parse_span(s, lexer, valid_symbols, STRONG)) {
    return true;
  }
  if (parse_span(s, lexer, valid_symbols, SUPERSCRIPT)) {
    return true;
  }
  if (parse_span(s, lexer, valid_symbols, SUBSCRIPT)) {
    return true;
  }
  if (parse_span(s, lexer, valid_symbols, HIGHLIGHTED)) {
    return true;
  }
  if (parse_span(s, lexer, valid_symbols, INSERT)) {
    return true;
  }
  if (parse_span(s, lexer, valid_symbols, DELETE)) {
    return true;
  }
  if (parse_span(s, lexer, valid_symbols, PARENS_SPAN)) {
    return true;
  }
  if (parse_span(s, lexer, valid_symbols, CURLY_BRACKET_SPAN)) {
    return true;
  }
  if (parse_span(s, lexer, valid_symbols, SQUARE_BRACKET_SPAN)) {
    return true;
  }

  return false;
}

void init_djot_inline(Scanner *s) {
  array_init(s->open_elements);
  s->state = 0;
}

void *tree_sitter_djot_inline_external_scanner_create() {
  Scanner *s = (Scanner *)ts_malloc(sizeof(Scanner));
  s->open_elements = ts_malloc(sizeof(Array(ElementType)));
  init_djot_inline(s);
  return s;
}

void tree_sitter_djot_inline_external_scanner_destroy(void *payload) {
  Scanner *s = (Scanner *)payload;
  array_delete(s->open_elements);
  ts_free(s);
}

unsigned tree_sitter_djot_inline_external_scanner_serialize(void *payload,
                                                            char *buffer) {
  Scanner *s = (Scanner *)payload;
  unsigned size = 0;
  buffer[size++] = (char)s->state;

  for (size_t i = 0; i < s->open_elements->size; ++i) {
    Element *e = *array_get(s->open_elements, i);
    buffer[size++] = (char)e->type;
    buffer[size++] = (char)e->data;
  }
  return size;
}

void tree_sitter_djot_inline_external_scanner_deserialize(void *payload,
                                                          char *buffer,
                                                          unsigned length) {
  Scanner *s = (Scanner *)payload;
  init_djot_inline(s);
  if (length > 0) {
    size_t size = 0;
    s->state = (uint8_t)buffer[size++];

    while (size < length) {
      ElementType type = (ElementType)buffer[size++];
      uint8_t data = (uint8_t)buffer[size++];
      array_push(s->open_elements, create_element(type, data));
    }
  }
}

#ifdef DEBUG

static char *token_type_s(TokenType t) {
  switch (t) {
  case VERBATIM_BEGIN:
    return "VERBATIM_BEGIN";
  case VERBATIM_END:
    return "VERBATIM_END";
  case VERBATIM_CONTENT:
    return "VERBATIM_CONTENT";

  case EMPHASIS_MARK_BEGIN:
    return "EMPHASIS_MARK_BEGIN";
  case EMPHASIS_END:
    return "EMPHASIS_END";
  case STRONG_MARK_BEGIN:
    return "STRONG_MARK_BEGIN";
  case STRONG_END:
    return "STRONG_END";
  case SUPERSCRIPT_MARK_BEGIN:
    return "SUPERSCRIPT_MARK_BEGIN";
  case SUPERSCRIPT_END:
    return "SUPERSCRIPT_END";
  case SUBSCRIPT_MARK_BEGIN:
    return "SUBSCRIPT_MARK_BEGIN";
  case SUBSCRIPT_END:
    return "SUBSCRIPT_END";
  case HIGHLIGHTED_MARK_BEGIN:
    return "HIGHLIGHTED_MARK_BEGIN";
  case HIGHLIGHTED_END:
    return "HIGHLIGHTED_END";
  case INSERT_MARK_BEGIN:
    return "INSERT_MARK_BEGIN";
  case INSERT_END:
    return "INSERT_END";
  case DELETE_MARK_BEGIN:
    return "DELETE_MARK_BEGIN";
  case DELETE_END:
    return "DELETE_END";

  case PARENS_SPAN_MARK_BEGIN:
    return "PARENS_SPAN_MARK_BEGIN";
  case PARENS_SPAN_END:
    return "PARENS_SPAN_END";
  case CURLY_BRACKET_SPAN_MARK_BEGIN:
    return "CURLY_BRACKET_SPAN_MARK_BEGIN";
  case CURLY_BRACKET_SPAN_END:
    return "CURLY_BRACKET_SPAN_END";
  case SQUARE_BRACKET_SPAN_MARK_BEGIN:
    return "SQUARE_BRACKET_SPAN_MARK_BEGIN";
  case SQUARE_BRACKET_SPAN_END:
    return "SQUARE_BRACKET_SPAN_END";

  case IN_FALLBACK:
    return "IN_FALLBACK";
  case NON_WHITESPACE_CHECK:
    return "NON_WHITESPACE_CHECK";

  case ERROR:
    return "ERROR";
  case IGNORED:
    return "IGNORED";
  }
}

static char *element_type_s(ElementType t) {
  switch (t) {
  case VERBATIM:
    return "VERBATIM";
  case EMPHASIS:
    return "EMPHASIS";
  case STRONG:
    return "STRONG";
  case SUPERSCRIPT:
    return "SUPERSCRIPT";
  case SUBSCRIPT:
    return "SUBSCRIPT";
  case HIGHLIGHTED:
    return "HIGHLIGHTED";
  case INSERT:
    return "INSERT";
  case DELETE:
    return "DELETE";
  case PARENS_SPAN:
    return "PARENS_SPAN";
  case SQUARE_BRACKET_SPAN:
    return "SQUARE_BRACKET_SPAN";
  case CURLY_BRACKET_SPAN:
    return "CURLY_BRACKET_SPAN";
  }
}

static void dump_scanner(Scanner *s) {
  if (s->state & STATE_BRACKET_STARTS_SPAN) {
    printf("STATE_BRACKET_STARTS_SPAN");
  }
  if (s->state & STATE_BRACKET_STARTS_INLINE_LINK) {
    printf("STATE_BRACKET_STARTS_INLINE_LINK");
  }
  printf("--- Open elements: %u (last -> first)\n", s->open_elements->size);
  for (size_t i = 0; i < s->open_elements->size; ++i) {
    Element *e = *array_get(s->open_elements, i);
    printf("  %s data: %u\n", element_type_s(e->type), e->data);
  }
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
  printf("# valid_symbols:\n");
  for (int i = 0; i <= ERROR; ++i) {
    if (valid_symbols[i]) {
      printf("%s\n", token_type_s(i));
    }
  }
}

#endif

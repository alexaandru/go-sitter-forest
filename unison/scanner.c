
/**
 * I really hate having functions that can fail in C, so this is my
 * fix.
 */

#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    bool has_value;
    void * value;
} Maybe;

void * just(void * a) {
    Maybe * result = (Maybe *)malloc(sizeof(Maybe));
    result->has_value = true;
    result->value = a;
    return result;
}

Maybe nothing = { false, 0 };

void freeJust(Maybe* a) {
    if (a->has_value) {
        free(a->value);
        free(a);
    }
}

bool isJust(Maybe* a) {
    return a->has_value;
}

void * justDouble(double d) {
    double * it = (double *) malloc(sizeof(double));
    *it = d;
    return just(it);
}

void * justLong(long l) {
    long * it = (long *) malloc(sizeof(long));
    *it = l;
    return just(it);
}

void * justInt64(int64_t i) {
    int64_t * it = (int64_t *) malloc(sizeof(int64_t));
    *it = i;
    return just(it);
}
/**
 * Print input and result information.
 */
#ifndef __wasm32__ // disable logging for Zed build
#define DEBUG 0
#endif

#define LOG_LEVEL ERROR
typedef enum {
  VERBOSE,
  INFO,
  WARN,
  ERROR,
  NONE,
} LogLevel;

#include "parser.h"
#include <stdlib.h> // malloc, free, calloc
#include <stdio.h> // fprintf, stderr
#include <assert.h> // assert
#include <string.h> // memcpy, strlen, strncat
#include <ctype.h> // isalpha, isdigit
#include "jtckdint.h" // needed to prevent integer overflow in get_whole


#ifndef __wasm32__
#include <inttypes.h> // needed for portability of PRId64
#endif

#define ASCII_OFFSET 48
#define NUMERIC_CASES \
  case '0': \
  case '1': \
  case '2': \
  case '3': \
  case '4': \
  case '5': \
  case '6': \
  case '7': \
  case '8': \
  case '9'

// Short circuit
#define SHORT_SCANNER if (res.finished) return res;
#define PEEK state->lexer->lookahead
#define COL state->lexer->get_column(state->lexer)
// Move the parser position one character to the right.
#define S_ADVANCE state->lexer->advance_unison(state->lexer, false)
#define S_SKIP state->lexer->advance_unison(state->lexer, true)
#define SYM(s) (state->symbols[s])

#ifndef __wasm32__
#define LOG(level, format, ...) \
  do { \
    if ((level) >= LOG_LEVEL) { \
      fprintf(stderr, format, ##__VA_ARGS__); \
    } \
  } while(0)
#else
#define LOG(level, format, ...) \
  do {} while (0)
#endif

#ifdef DEBUG
  #ifndef __wasm32__
  #define DEBUG_PRINTF(...) do{ fprintf( stderr, __VA_ARGS__ ); } while( false )
  #else
  #define DEBUG_PRINTF(...) do{ } while ( false )
  #endif
#else
#define DEBUG_PRINTF(...) do{ } while ( false )
#endif

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define VEC_RESIZE(vec, _cap) \
  (vec)->data = realloc((vec)->data, (_cap) * sizeof((vec)->data[0])); \
  assert((vec)->data != NULL); \
  (vec)->cap = (_cap);

#define VEC_GROW(vec, _cap) if ((vec)->cap < (_cap)) { VEC_RESIZE((vec), (_cap)); }\

#define VEC_PUSH(vec, el) \
  if ((vec)->cap == (vec)->len) { VEC_RESIZE((vec), MAX(20, (vec)->len * 2)); } \
  (vec)->data[(vec)->len++] = (el);

#define VEC_POP(vec) (vec)->len--;

#define VEC_BACK(vec) ((vec)->data[(vec)->len - 1])

#define VEC_FREE(vec) { if ((vec)->data != NULL) free((vec)->data); }

// ---------
// Symbols
// ---------

typedef enum {
    SEMICOLON,
    START,
    END,
    DOT,
    WHERE,
    VARSYM,
    COMMENT,
    FOLD,
    COMMA,
    IN,
    INDENT,
    EMPTY,
    SYMOP,
    PREFIX_SYMOP,
    WATCH,
    START_AND_ARROW,
    OCTOTHORPE,
    DOC_BLOCK,
    FAIL, // always last in list
} Sym;

// #ifdef DEBUG
static char *sym_names[] = {
    "semicolon",
    "start",
    "end",
    "dot",
    "where",
    "varsym",
    "comment",
    "fold",
    "comma",
    "in",
    "indent",
    "empty",
    "symop",
    "(symop)",
    "watch",
    "start ->",
    "octothorpe",
    "doc block",
    "fail",
};
// #endif

/**
 * The parser appears to call `scan` with all symbols declared as valid directly after it encountered an error, so
 * this function is used to detect them.
 */
static bool all_syms(const bool *syms) {
  for (int i = 0; i <= DOC_BLOCK; i++) {
    if (!syms[i]) return false;
  }
  return true;
}

#ifdef DEBUG
/**
 * Produce a comma-separated string of valid symbols.
 */
static void debug_valid(const bool *syms) {
  if (all_syms(syms)) {
    LOG(VERBOSE, "all");
    return;
  }
  bool fst = true;
  LOG(VERBOSE, "\"");
  for (Sym i = SEMICOLON; i <= DOC_BLOCK; i++) {
    if (syms[i]) {
      if (!fst) LOG(VERBOSE, ",");
      LOG(VERBOSE, "%s", sym_names[i]);
      fst = false;
    }
  }
  LOG(VERBOSE, "\"");
}
#endif

// State
typedef struct {
    uint32_t len;
    uint32_t cap;
    uint16_t *data;
} indent_vec;

// --------------------------------------------------------------------------------------------------------
// State
// --------------------------------------------------------------------------------------------------------

/**
 * This structure contains the external and internal state.
 *
 * The parser provides the lexer interface and the list of valid symbols.
 *
 * The internal state consists of a stack of indentation widths that is manipulated whenever a layout is started or
 * terminated.
 */
typedef struct {
    TSLexer *lexer;
    const bool *symbols;
    indent_vec *indents;
#ifdef DEBUG
    int marked;
    char *marked_by;
    bool needs_free;
#endif
} State;

State state_new_unison(TSLexer *l, const bool * restrict vs, indent_vec *is) {
  return (State) {
    .lexer = l,
    .symbols = vs,
    .indents = is,
#ifdef DEBUG
    .marked = -1,
    .marked_by = "",
    .needs_free = false,
#endif
  };
}

#ifdef DEBUG
static void debug_indents(indent_vec *indents) {
  if (indents->len == 0) LOG(VERBOSE, "empty");
  bool empty = true;
  for (size_t i = 0; i < indents->len; i++) {
    if (!empty) LOG(VERBOSE, "-");
    LOG(VERBOSE, "%d", indents->data[i]);
    empty = false;
  }
}

void debug_state(State *state) {
  LOG(VERBOSE, "State { syms = ");
  debug_valid(state->symbols);
  LOG(VERBOSE, "col = %d", state->lexer->get_column(state->lexer));
  LOG(VERBOSE, ", indents = ");
  debug_indents(state->indents);
  LOG(VERBOSE, " }\n");
}
#else
static void debug_indents(indent_vec *indents) { return; }
void debug_state(State *state) { return; }
#endif

/**
 * These functions provide the basic interface to the lexer.
 * They are not defined as members for easier composition.
 */
static bool is_eof(State *state) { return state->lexer->eof(state->lexer); }

/**
 * The parser's position in the current line.
 */
static uint32_t column(State *state) {
  return is_eof(state) ? 0 : state->lexer->get_column(state->lexer);
}

/**
 * Instruct the lexer that the current position is the end of the potentially detected symbol, causing the next run to
 * be started after this character in the success case.
 *
 * This is useful if the validity of the detected symbol depends on what follows, e.g. in the case of a layout end
 * before a `where` token.
 */

// Only use string literals we actually need
#ifdef DEBUG
static void MARK(char *marked_by, bool needs_free, State *state) {
  state->marked = column(state);
  if (state->needs_free) free(state->marked_by);
  state->marked_by = marked_by;
  state->needs_free = needs_free;
  state->lexer->mark_end(state->lexer);
}
#else
#define MARK(s, nf, state) state->lexer->mark_end(state->lexer);
#endif

// --------------------------------------------------------------------------------------------------------
// Condition
// --------------------------------------------------------------------------------------------------------

/**
 * The set of conditions used in the parser implementation.
 */
 
static bool seq(const char * restrict s, State *state) {
  size_t len = strlen(s);
  for (size_t i = 0; i < len; i++) {
    int32_t c = s[i];
    int32_t c2 = PEEK;
    if (c != c2) return false;
    S_ADVANCE;
  }
  return true;
}
 
#define WS_CASES \
  case ' ': \
  case '\f': \
  case '\n': \
  case '\r': \
  case '\t': \
  case '\v'

/**
 * Require that the next character is whitespace (space or newline) without advancing the parser.
 */
static bool isws(uint32_t c) {
  switch (c) {
    WS_CASES: return true;
    default: return false;
  }
}
 
/**
 * A token like a varsym can be terminated by whitespace or brackets.
 */
static bool token_end(uint32_t c) {
  switch (c) {
    WS_CASES:
    case 0:
    case '(':
    case ')':
    case '[':
    case ']':
      return true;
    default:
      return false;
  }
}
 
/**
 * Require that the argument string follows the current position and is followed by whitespace.
 * See `seq`
 */
static bool token(const char *restrict s, State *state) {
  return seq(s, state) && token_end(PEEK);
}
 
/**
 * Require that the stack of layout indentations is not empty.
 * This is mostly used for safety.
 */
static bool indent_exists(State *state) { return state->indents->len != 0; };
 
/**
 * Require that the current line's indent is greater or equal than the containing layout's, so the current layout is
 * continued.
 */
// static bool keep_layout(uint16_t indent, State *state) {
  // return indent_exists(state) && indent >= VEC_BACK(state->indents);
// }
 
/**
 * Require that the current line's indent is equal to the containing layout's, so the line may start a new `decl`.
 */
static bool same_indent(uint32_t indent, State *state) { return indent_exists(state) && indent == VEC_BACK(state->indents); }
 
/**
 * Require that the current line's indent is smaller than the containing layout's, so the layout may be ended.
 */
static bool smaller_indent(uint32_t indent, State *state) {
  LOG(INFO, "->smaller_indent (indent = %u, col = %u, PEEK = %c, indent exists: %s)\n", indent, COL, PEEK, indent_exists(state) ? "yes" : "no");
  return indent_exists(state) && indent < VEC_BACK(state->indents);
}
 
static bool indent_lesseq(uint32_t indent, State *state) { return indent_exists(state) && indent <= VEC_BACK(state->indents); }


#define NEWLINE_CASES \
  case '\n': \
  case '\r': \
  case '\f'

static bool is_newline(uint32_t c) {
  switch (c) {
    NEWLINE_CASES:
      return true;
    default:
      return false;
  }
}

/**
 * NOT NECESSARY IN UNISON. JUST HASKELL.
 * Require that the state has not been initialized after parsing has started.
 *
 * This is necessary to handle a nonexistent `module` declaration.
 */
// static bool uninitialized(State *state) { return !indent_exists(state); }

/**
 * Require that the parser determined an error in the previous step (see `all_syms`).
 */
static bool after_error(State *state) { return all_syms(state->symbols); }
// !$%^&*-=+<>.~\\/|:
#define SYMBOLICS_WITHOUT_BAR \
    case '!': \
    case '$': \
    case '%': \
    case '^': \
    case '&': \
    case '*': \
    case '-': \
    case '=': \
    case '+': \
    case '<': \
    case '>': \
    case '.': \
    case '~': \
    case '\\': \
    case '/': \
    case ':'

#define SYMBOLIC_CASES \
    SYMBOLICS_WITHOUT_BAR: \
    case '|'

static bool symbolic(uint32_t c) {
  switch (c) {
    SYMBOLIC_CASES:
      return true;
    default:
      return false;
  }
}


typedef enum {
  S_CON,
  S_OP,
  S_SPLICE,
  S_STRICT,
  S_STAR,
  S_TILDE,
  S_IMPLICIT,
  S_MODIFIER,
  S_MINUS,
  S_UNBOXED_TUPLE_CLOSE,
  S_BAR,
  S_COMMENT,
  S_INVALID,
} Symbolic;

// --------------------------------------------------------------------------------------------------------
// Result
// --------------------------------------------------------------------------------------------------------

typedef struct {
    Sym sym;
    bool finished;
} Result;

#ifdef DEBUG
void debug_result(Result res) {
  LOG(VERBOSE, "Result { finished = %d", res.finished);
  if (res.finished) {
    LOG(VERBOSE, ", result = %s }\n", sym_names[res.sym]);
  }
  else
    LOG(VERBOSE, " }\n");
}
#endif

/**
 * Constructors for the continue, failure and success results.
 */
static Result res_cont = {.sym = FAIL, .finished = false};
static Result res_finish(Sym t) { return (Result) {.sym = t, .finished = true}; }
static Result res_fail = {.sym = FAIL, .finished = true};

// --------------------------------------------------------------------------------------------------------
// Parser
// --------------------------------------------------------------------------------------------------------

/**
 * Parser that terminates the execution with the successful detection of the given symbol.
 */
static Result finish(const Sym s, char *restrict desc) {
  LOG(INFO, "finish: %s\n", desc);
  return res_finish(s);
}

/**
 * Parser that terminates the execution with the successful detection of the given symbol, but only if it is expected.
 */
static Result finish_if_valid(const Sym s, char *restrict desc, State *state) {
  LOG(INFO, "->finish_if_valid %s (%u, %c)\n", desc, COL, PEEK);
  return SYM(s) ? finish(s, desc) : res_cont;
}

/**
 * Add one level of indentation to the stack, caused by starting a layout.
 */
static void push(uint16_t ind, State *state) {
  LOG(VERBOSE, "push: %d\n", ind);
  VEC_PUSH(state->indents, ind);
}

/**
 * Remove one level of indentation from the stack, caused by the end of a layout.
 */
static void pop(State *state) {
  LOG(VERBOSE, "->pop\n");
  debug_indents(state->indents);
  LOG(VERBOSE, "\n");
  // LOG(VERBOSE, "[pop] before: %s\n", debug_indents_str(state->indents));
  if (indent_exists(state)) {
    VEC_POP(state->indents);
  }
  debug_indents(state->indents);
  LOG(VERBOSE, "\n");
  // LOG(VERBOSE, "[pop] after: %s\n", debug_indents_str(state->indents));
}

/**
 * Advance the lexer until the following character is neither space nor tab.
 */
static void skipspace(State *state) {
  for (;;) {
    switch (PEEK) {
      case ' ':
      case '\t':
        S_SKIP;
        break;
      default:
        return;
    }
  }
}

static Result layout_end(char *desc, State *state) {
  LOG(INFO, "->layout_end (col = %u, desc = %s, PEEK = %c)\n", COL, desc, PEEK);
    if(SYM(END)) {
        pop(state);
        return finish(END, desc);
    }
    return res_cont;
}

/**
 * Convenience parser, since those two are often used together.
 */
static Result end_or_semicolon(char *desc, State *state) {
  LOG(INFO, "->end_or_semicolon (%u, %c)\n", COL, PEEK);
  Result res = layout_end(desc, state);
  SHORT_SCANNER;
  return finish_if_valid(SEMICOLON, desc, state);
}

// --------------------------------------------------------------------------------------------------------
// Logic
// --------------------------------------------------------------------------------------------------------

/**
 * These parsers constitute the higher-level logic, loosely.
 */
 
/**
 * Advance the parser until a non-whitespace character is encountered, while counting whitespace according to the rules
 * in the syntax reference, resetting the counter on each newline.
 *
 * This advances to the first nonwhite character in the next nonempty line and determines its indentation.
 */
static uint32_t count_indent(State *state) {
  uint32_t indent = 0;
  for (;;) {
    switch (PEEK) {
      NEWLINE_CASES:
        S_SKIP;
        indent = 0;
        break;
      case ' ':
        S_SKIP;
        indent++;
        break;
      case '\t':
        S_SKIP;
        indent += 8;
        break;
      default:
        return indent;
    }
  }
}
 
/** End-of-file check.
 *
 * If EOF has been reached, two scenarios are valid:
 *  - The file is empty, in which case the parser is still at the root rule, where `S_EMPTY` is valid.
 *  - The current layout can be ended. This may happen multiple times, since the parser will restart until the last
 *    layout end rule has been parsed.
 * If those cases do not apply, parsing fails.
 */
static Result eof(State *state) {
  LOG(INFO, "->eof (%u, %c)\n", COL, PEEK);
  if (is_eof(state)) {
    if (SYM(EMPTY)) {
      return finish(EMPTY, "eof");
    }
    Result res = end_or_semicolon("eof", state);
    // return layout_end("eof", state);
    SHORT_SCANNER;
    return res_fail;
  }
  return res_cont;
}
 
 /**
 * NOT NECESSARY IN UNISON. JUST HASKELL.
 * Set the initial indentation at the beginning of the file or module decl to the column of first nonwhite character,
 * then succeed with the dummy symbol `INDENT`.
 *
 * If there is a `module` declaration, this will be handled by the grammar.
 */
// static Result initialize(uint32_t column, State *state) {
  // if (uninitialized(state)) {
  //   MARK("initialize", false, state);
  //   bool match = token("module", state);
  //   if (match) return res_fail;
  //   push(column, state);
  //   return finish(INDENT, "init");
  // }
  // return res_cont;
// }
 
 // NOT NECESSARY IN UNISON. JUST HASKELL.
 // static Result initialize_init(State *state) {
  // if (uninitialized(state)) {
  //   uint32_t col = column(state);
  //   if (col == 0) return initialize(col, state);
  // };
  // return res_cont;
// }

/**
 * Detect the cyclic and cid parts of a hash (OCTOTHORPE and DOT).
 * A hash is of the form ##builtin or #prefix(.cyclic)(#cid)
 * We let builtins be discovered by the JS, so fail for ##.
 * We also detect #prefix in the JS. So only detect the #cid and .cyclic
 * The cid is only valid if we've just found the prefix, so can never
 * detect the cid when should be detecting the prefix.
 */
static Result hash(State *state) {
  if (SYM(OCTOTHORPE)) {
    if (!is_eof(state) && PEEK == '#') { // Could be the cid of a hash
      S_ADVANCE;
      bool found = false;
      while (isdigit(PEEK) || isalpha(PEEK)) {
        found = true;
        S_ADVANCE;
      }
      if (found) {
        MARK("hash", false, state);
        return finish(OCTOTHORPE, "hash");
      } else {
        return res_fail;
      }
    }
  }
  if (SYM(DOT)) {
    if (!is_eof(state) && PEEK == '.') { // Could be cyclic of a hash
      S_ADVANCE;
      bool found = false;
      while (isdigit(PEEK) || isalpha(PEEK)) {
        found = true;
        S_ADVANCE;
      }
      if(found) {
        MARK("hash", false, state);
        return finish(DOT, "hash");
      } else {
        return res_fail;
      }
    }
  }
  return res_cont;
}
 
/**
 * Check for fold. However, because check for fold consumes -- it needs to consider line comments as well.
 */
static Result fold(State *state) {
  LOG(INFO, "->fold with PEEK =%c@%u\n", PEEK, column(state));
  if (seq("--", state)) { // either FOLD or COMMENT
    LOG(VERBOSE, "--- and PEEK is %c@%u\n", PEEK, column(state));
    switch(PEEK) {
      case '-': { // FOLD
        while(!is_eof(state)) S_ADVANCE;
        LOG(VERBOSE, "after advancing, PEEK is %c and should be EOF: %s\n", PEEK, is_eof(state) ? "true" : "false");
        MARK("fold", false, state);
        return finish(FOLD, "fold");
      }
      default: { // COMMENT
        while(!is_eof(state) && !is_newline(PEEK)) S_ADVANCE;
        LOG(VERBOSE, "after advancing, PEEK is %c and should be EOF: %s\n", PEEK, is_eof(state) ? "true" : "false");
        MARK("fold", false, state);
        return finish(COMMENT, "comment");
      }
    }
  }
  return res_cont;
}
 
/**
 * End a layout by removing an indentation from the stack, but only if the current column (which should be in the next
 * line after skipping whitespace) is smaller than the layout indent.
 */
static Result dedent(uint32_t indent, State *state) {
  LOG(INFO, "->dedent (indent = %u, col = %u, PEEK = %c)\n", indent, COL, PEEK);
  LOG(VERBOSE, "smaller_indent = %s\n", smaller_indent(indent, state) ? "yes" : "no");
  if (smaller_indent(indent, state)) return layout_end("dedent", state);
  return res_cont;
}
 
/**
 * Succeed if a `where` on a newline can end a statement or layout (see `is_newline_where`).
 *
 * This is the case after `do` or `of`, where the `where` can be on the same indent.
 */
// static Result newline_where(uint32_t indent, State *state) {
//   if (is_newline_where(indent, state)) {
//     MARK("newline_where", false, state);
//     if (token("where", state)) {
//       return end_or_semicolon("newline_where", state);
//     }
//     return res_fail;
//   }
//   return res_cont;
// }
 
/**
 * Succeed for `SEMICOLON` if the indent of the next line is equal to the current layout's.
 */
static Result newline_semicolon(uint32_t indent, State *state) {
  if (SYM(SEMICOLON) && same_indent(indent, state)) {
    return finish(SEMICOLON, "newline_semicolon");
  }
  return res_cont;
}

/**
 * Parse an inline `where` or `with` token.
 *
 * Necessary because `is_newline_where` needs to know that no `where` may follow, and `with` can end a layout started by `handle`.
 */
static Result where_or_with(State *state) {
  LOG(INFO, "->where_or_with (col = %u, peek = %c)\n", COL, PEEK);
  if (PEEK == 'w') {
    S_ADVANCE;
    if (token("here", state)) {
      if (SYM(WHERE)) {
            MARK("where_or_when", false, state);
            return finish(WHERE, "where");
          }
    } else if (SYM(END) && token("ith", state)) {
      return layout_end("with", state);
    }
  }
  return res_cont;
}
 
/**
 * An `in` token ends the layout openend by a `let` and its nested layouts.
 */
static Result in(State *state) {
  if (SYM(IN) && token("in", state)) {
    MARK("in", false, state);
    pop(state);
    return finish(IN, "in");
  }
  return res_cont;
}

/**
 * An `else` token may end a layout opened in the body of a `then`.
 */
static Result else_(State *state) {
  return token("else", state) ? layout_end("else", state) : res_cont;
}

/**
 * A `then` token may end a layout opened in the body of an `if`.
 */
 static Result then(State *state) {
   return token("then", state) ? layout_end("then", state) : res_cont;
 }

/**
 * Consume all characters up to the end of line and succeed with `syms::commment`.
 */
static Result inline_comment(State *state) {
  LOG(INFO, "->inline_comment: consume rest of line then succeed with COMMENT\n");
  for (;;) {
    LOG(VERBOSE, "Examining if still same line: %c\n", PEEK);
    switch (PEEK) {
      NEWLINE_CASES:
      case 0:
        goto inline_comment_after_skip;
      default:
        S_ADVANCE;
        break;
    }
  }

inline_comment_after_skip:
  MARK("inline_comment", false, state);
  return finish(COMMENT, "inline_comment");
}

/**
 * Parse for byte literal. If detect "0x" then fail and let the JS grammar handle this.
 */
static Result byte_literal(State *state) {
  LOG(INFO, "->byte_literal (col = %u, peek = %c)\n", COL, PEEK);
  if (!is_eof(state) && PEEK == '0') {
    S_ADVANCE;
    if (!is_eof(state) && PEEK == 'x') {
      return res_fail;
    }
  }
  return res_cont;
}


/**
 * Handle an operator that begins with `=`. If it's a single `=` then fail
 * and allow the JS to handle it instead. Without this, the JS often
 * sees a term assignment as function application with operator `=` as
 * discovered by the external scanner. This function exists to prevent
 * this.
 */
static Result equals(State *state) {
  LOG(INFO, "->equals (%u, %c)\n", COL, PEEK);
  if (PEEK == '=') {
    S_ADVANCE;
    if (is_eof(state) || isws(PEEK) || !symbolic(PEEK)) {
      return res_fail;
    }
  }
  return res_cont;
}

/**
 * Handle the case of `(op)`, which is not detected successfully by JS.
 */
static Result paren_symop(State *state) {
  LOG(INFO, "->paren_symop (col = %u, peek = %c)\n", COL, PEEK);
  if (PEEK != '(') {
    return res_cont; 
  }
  S_ADVANCE;
  skipspace(state);
  if (PEEK == '=') {
    Result res = equals(state);
    SHORT_SCANNER;
  }
  if (is_eof(state) || !symbolic(PEEK)) {
    return res_fail;
  }
  S_ADVANCE;
  while (!is_eof(state) && PEEK != ')' && !isws(PEEK)) {
    if (symbolic(PEEK)) {
      S_ADVANCE;
    } else {
      return res_fail;
    }
  }
  skipspace(state);
  if (PEEK == ')') {
    MARK("paren symop", false, state);
    return finish_if_valid(PREFIX_SYMOP, "paren symop", state);
  }
  return res_fail;
}

/**
 * Detect || and &&, which should fail so JS can process it. It is only meant to be called from `operator` since it assumes
 * `res_cont` will continue operator parsing.
 */
// static Result boolean_operator(State *state) {
//   if (PEEK != '|' && PEEK != '&') return res_cont;
//   switch (PEEK) {
//     case '|': {
//       S_ADVANCE;
//       if (is_eof(state) || PEEK != '|') return res_cont;
//       S_ADVANCE;
//       if (!is_eof(state) && symbolic(PEEK)) return res_cont;
//       return res_fail;
//     }
//     case '&': {
//       S_ADVANCE;
//       if (is_eof(state) || PEEK != '&') return res_cont;
//       S_ADVANCE;
//       if (!is_eof(state) && symbolic(PEEK)) return res_cont;
//       return res_fail;
//     }
//   }
//   return res_cont;
// }

static bool found_pipe_or_logical_op(uint8_t pipe_count, uint8_t amp_count) {
  return pipe_count == 1 || pipe_count == 2 || amp_count == 2;
}

/**
 * Detect operators.
 * Cannot run before determining DOT is not an absolute qualifier.
 * Need to exclude certain symbols as solutions. The following cannot
 * be considered operators: =, &&, ||, | (`|` is handled by the JS)
 * Also need to exclude !( and ! bc these are bangs, a reserved keyword not an operator.
 *
 * Needs to recognize `(OPERATOR)` as a parenthesized operator
 */
static Result operator(State *state) {
  LOG(INFO, "->operator (%u, %c)\n", COL, PEEK);
  
  if (is_eof(state)) return res_cont;
  
  // Process WATCH
  if (COL == 0 && PEEK == '>') {
    S_ADVANCE;
    if (!symbolic(PEEK)) {
      MARK("operator", false, state);
      return finish_if_valid(WATCH, "watch", state);
    }
  }
  
  if (PEEK == '(') {
    Result res = paren_symop(state);
    SHORT_SCANNER;
  }
  
  bool parenthesized = false;
  
  if (!symbolic(PEEK)) return res_fail;
  if (PEEK == '=') {
    Result res = equals(state);
    SHORT_SCANNER;
  }
  
  // Detect bangs and let JS handle them
  if ( PEEK == '!') {
    S_ADVANCE;
    if (is_eof(state) || PEEK == '(' || !symbolic(PEEK)) {
      return res_fail;
    }
  }

  uint8_t and_count = 0;
  uint8_t or_count = 0;
  bool previous_was_colon = false;
    
  /*
   * scan until:
   * - if parenthesized and space, skip all succeeding spaces
   * - if parenthesized and `)`, return successful operator
   * - if non-symbolic, succeed without advancing
   * 
   */
  while (!is_eof(state)) {
    LOG(VERBOSE, "[operator] Looping with PEEK = %c\n", PEEK);
    if (!symbolic(PEEK) && previous_was_colon) {
      return res_fail; // This means we just recognized a `:` by itself, which is not an operator but part of a type signature.
    }
    if (symbolic(PEEK)) { // If we find | or & as first symbol, count it. Otherwise, ensure code never thinks it has found || or &&
      previous_was_colon = false;
      switch (PEEK) {
        case '|': {
          if (or_count == 0 || or_count == 1) ++or_count;
          break;
        }
        case '&': {
          if (and_count == 0 || and_count == 1) ++and_count;
          break;
        }
        case ':': previous_was_colon = true;
        default: {
          or_count = -1;
          and_count = -1;
        }
      }
      S_ADVANCE;
      MARK("operator", false, state);
    } else if (parenthesized && PEEK == ' ') { 
      skipspace(state);
    } else if (parenthesized && PEEK == ')') {
      S_ADVANCE;
      MARK("operator", false, state);
      return finish_if_valid(SYMOP, "symbolic operator", state);
    } else {
      if (found_pipe_or_logical_op(or_count, and_count)) return res_fail;
      return finish_if_valid(SYMOP, "symbolic operator", state);
    }
  }
  if (found_pipe_or_logical_op(or_count, and_count)) return res_fail;
  S_ADVANCE;
  MARK("operator", false, state);
  return finish_if_valid(SYMOP, "symbolic operator", state);
}

/**
 * This function is called after a +/- is consumed.
 * The following cases must be handled:
 // * 2. SYMOP that begins with +/- and is terminated by whitespace or ')', the latter of which indicates a parenthetical operator
 // * 3. post-sign symbolic chars as SYMOP
 // * 4. 
 */
static Result post_pos_neg_sign(State *state, bool can_be_operator) {
  (void) can_be_operator; // suppresses "unused variable" warning
  LOG(INFO, "->post_pos_neg_sign; PEEK = %c\n", PEEK);
  Result res = res_fail;
  // Immediately terminate as symop if sign followed by whitespace, EOF, or ')', the latter of which is expected in the case of the parenthetical op pattern in JS grammar.
  if (isws(PEEK) || is_eof(state) || PEEK == ')') {
    MARK("post_pos_neg_sign", false, state);
    return finish_if_valid(SYMOP, "+/-", state);
  }
  switch(PEEK) {
    case '>':
      S_ADVANCE;
      if(!symbolic(PEEK)) {
        return res_fail;
      } else {
        return operator(state);
      }
      break;
    case '.':
      S_ADVANCE;
      if(isdigit(PEEK)) {
        return res_fail;
      } else {
        return operator(state);
      }
      break;
    NUMERIC_CASES:
      return res_fail;
      break;
    default:
      LOG(VERBOSE, "non-dot symbolic PEEK %c\n", PEEK);
      res = operator(state);
      LOG(VERBOSE, "Result of operator: %s\n", sym_names[res.sym]);
      SHORT_SCANNER;
  }
  return res_fail;
}

/**
 * Parse an inline comment if the next chars are two or more minuses and the char after the last minus is not
 * symbolic.
 *
 * To be called when it is certain that two (or three!) minuses cannot succeed as a symbolic operator.
 * Or when one cannot be.
 * Those cases are:
 *   - `START` is valid
 *   - Operator matching was done already
 */
static Result minus(State *state) {
  LOG(INFO, "->minus\n");
  if (PEEK != '-') return res_cont;
  S_ADVANCE;
  switch(PEEK) {
    NUMERIC_CASES:
      return res_fail;
    case '.': {
      return post_pos_neg_sign(state, false);
    }
    case '-': { // COMMENT, FOLD
      S_ADVANCE;
      if (PEEK == '-') { // FOLD
        S_ADVANCE;
        LOG(VERBOSE, "After advancing, PEEK: %c\n", PEEK);
        if (is_eof(state) || is_newline(PEEK)) {
          while(!is_eof(state)) S_ADVANCE;
          MARK("minus", false, state);
          return finish_if_valid(FOLD, "fold", state);
        } else {
          return res_fail;
        }
      } 
      return inline_comment(state);
    } 
  }
  return res_cont;  
}

/**
 * Succeed for a comment.
 */
static Result multiline_comment_success(State *state) {
  MARK("multiline_comment", false, state);
  return finish(COMMENT, "multiline_comment");
}

/**
 * Can appear anywhere. Only call once we've consumed a `{{` (in `multiline_comment`).
 */
static Result doc_block(State *state) {
  LOG(INFO, "doc_block (col = %u, peek = %c)\n", COL, PEEK);
  if (!SYM(DOC_BLOCK)) {
    return res_fail;
  }
  uint16_t level = 0;
  for (;;) {
    switch(PEEK) {
      case '{': {
        S_ADVANCE;
        if (PEEK == '{') {
          S_ADVANCE;
          ++level;
        }
        break;
      }
      case '}': {
        S_ADVANCE;
        if (PEEK == '}') {
          S_ADVANCE;
          if (level == 0) {
            MARK("doc_block", false, state);
            return res_finish(DOC_BLOCK);
          }
          --level;
        }
        break;
      }
      case 0: {
        Result res = eof(state);
        SHORT_SCANNER;
        return res_fail;
      }
      default:
        S_ADVANCE;
        break;
    }
  }
  while (level > 0 && !is_eof(state)) {
    if (PEEK == '{') {
      S_ADVANCE;
      if (!is_eof(state) && PEEK == '{') {
        ++level;
      }
    }
    if (PEEK == '}') {
      S_ADVANCE;
      if (!is_eof(state) && PEEK == '}') {
        --level;
      }
    }
    S_ADVANCE;
  }
  if (level == 0) {
    MARK("doc_block", false, state);
    return res_finish(DOC_BLOCK);
  }
  return res_fail;
}

/**
 * See `nested_comment`.
 *
 * Since {- -} comments and {{ }} doc blocks can be nested arbitrarily, this has to keep track of how many have been openend, so that the
 * outermost comment isn't closed prematurely.
 */
static Result multiline_comment(State *state) {
  LOG(INFO, "->multiline_comment (col = %u, PEEK = %c)\n", COL, PEEK);
  uint16_t level = 0;
  for (;;) {
    switch (PEEK) {
      case '{':
        S_ADVANCE;
        if (PEEK == '-') {
          S_ADVANCE;
          level++;
        }
        break;
      case '-':
        S_ADVANCE;
        if (PEEK == '}') {
          S_ADVANCE;
          if (level == 0) return multiline_comment_success(state);
          level--;
        }
        break;
      case 0: {
        Result res = eof(state);
        SHORT_SCANNER;
        return res_fail;
      }
      default:
        S_ADVANCE;
        break;
    }
  }
}

/**
 * When a brace is encountered, it can be a multi-line comment, doc block, or ability-related.
 * In the first two cases, the comment/doc block is parsed, otherwise parsing fails to delegate to the corresponding grammar rule.
 */
static Result brace(State *state) {
  LOG(INFO, "->brace (col = %u, peek = %c)\n", COL, PEEK);
  if (PEEK != '{') return res_fail;
  S_ADVANCE;
  switch (PEEK) {
    case '{': {
      S_ADVANCE;
      return doc_block(state);
    }
    case '-': return multiline_comment(state);
    default: return res_fail;
  }
  if (PEEK != '-') return res_fail;
  S_ADVANCE;
  // if (PEEK == '#') return res_fail;
  return multiline_comment(state);
}


/**
 * Parse either inline or block comments. (or fold)
 */
static Result comment(State *state) {
  LOG(INFO, "->comment (col = %u, PEEK = %c)\n", state->lexer->get_column(state->lexer), PEEK);
  switch (PEEK) {
    case '-': {
      Result res = minus(state);
      SHORT_SCANNER;
      return res_fail;
    }
    case '{': {
      Result res = brace(state);
      SHORT_SCANNER;
      return res_fail;
    }
  }
  return res_cont;
}
 
static Result close_layout_in_list(State *state) {
  switch (PEEK) {
    case ']': {
      if (state->symbols[END]) {
        pop(state);
        return finish(END, "bracket");
      }
      break;
    }
    case ',': {
      S_ADVANCE;
      if (state->symbols[COMMA]) {
        MARK("comma", false, state);
        return finish(COMMA, "comma");
      }
      Result res = layout_end("comma", state);
      SHORT_SCANNER;
      return res_fail;
    }
  }
  return res_cont;
}

/**
 * Handles `(` in the case of a prefixed operator. JS grammar appears
 * to have difficulty with `(+)` being seq('(', $.operator, ')') bc need
 * to be able to token.immediate($.operator) but that is not possible.
 */
// static Result open_paren(State *state) {
//   LOG(INFO, "->open_paren (%u, %c)\n", COL, PEEK);
//   if (PEEK != '(') {
//     return res_cont;
//   }
//   S_ADVANCE;
//   skipspace(state);
//   Result op_res = operator(state);
//   if (op_res.finished) {
//     skipspace(state);
//     if (PEEK == ')') {
//       MARK("open_paren", false, state);
//       return finish(SYMOP, "parenthesized operator");
//     }
//   }
//   return res_fail;
// }



/**
 * Parse things that begin with `-`. This is 
 * 1. symops
 * 2. negative numbers
 * 3. inline comment (TODO)
 * 4. fold (TODO)
 * Note: I do not think comments are implicated here.
 * Note 2: Must fail for `->` so the JS grammar can take over and recognize the arrow.
 */
static Result handle_negative(State *state) {
  LOG(VERBOSE, "->handle_negative; PEEK = %c\n", PEEK);
  if (PEEK != '-' && PEEK != '+') return res_cont;
  S_ADVANCE;
  return post_pos_neg_sign(state, true);
}

/** Parse special tokens before the first newline that can't be reliably detected by tree-sitter:
 *
 *   - `where` here is just for the actual valid token
 *   - `in` closes a layout when inline
 *   - `then` closes a layout when inline
 *   - '+' closes a layout when inline if END valid
 *   - `)` can end the layout of an `of`
 *   - symbolic operators are complicated to implement with regex
 *   - `$` can be a splice if not followed by whitespace
 *   - '[' can be a list or a quasiquote
 *   - '|' in a quasiquote, since it can be followed by symbolic operator characters, which would be consumed
 * TODO: should this handle -> instead of layout_start handling it?
 */
static Result inline_tokens(State *state) {
  LOG(INFO, "->inline_tokens (%u, %c)\n", COL, PEEK);
  if (PEEK == '+') {
    Result res = layout_end("+", state);
    SHORT_SCANNER;
    return res_fail;
  }
  switch (PEEK) {
    case 'w': {
      Result res = where_or_with(state);
      SHORT_SCANNER;
      return res_fail;
    }
    case 'i': {
      Result res = in(state);
      SHORT_SCANNER;
      return res_fail;
    }
    case 'e': {
      Result res = else_(state);
      SHORT_SCANNER;
      return res_fail;
    }
    case 't': {
      Result res = then(state);
      SHORT_SCANNER;
      return res_fail;
    }
    case ')': {
      Result res = layout_end(")", state);
      SHORT_SCANNER;
      return res_fail;
    }
    case '}': {
      Result res = layout_end("}", state);
      SHORT_SCANNER;
      return res_fail;
    }
    // case '(': {
    //   Result res = open_paren(state);
    //   SHORT_SCANNER;
    //   return res_fail;
    // }
    case '(':
    SYMBOLIC_CASES: {
      Result res = operator(state);
      SHORT_SCANNER;
      return res_fail;
    }
    case ',': {
      // There should not be any parsing if you encounter a comma
      return res_fail;
    }
    // TODO(414owen) does this clash with inline comments '--'?
    // I'm not sure why there's a `symbolic::comment` and a `COMMENT`...
    // SYMBOLICS_WITHOUT_BAR: {
    //   Symbolic s = read_symop(state);
    //   return symop(s, state);
    // }
    // case '|': {
    //   if (state->symbols[QQ_BAR]) {
    //     S_ADVANCE;
    //     MARK("qq_bar", false, state);
    //     return res_finish(QQ_BAR);
    //   }
    //   Symbolic s = read_symop(state);
    //   return symop(s, state);
    // }
    // case '[': {
    //   if (state->symbols[QQ_START]) {
    //     S_ADVANCE;
    //     Result res = qq_start(state);
    //     SHORT_SCANNER;
    //   }
    //   return res_fail;
    // }
    // '-' case covered by symop
    case '{': {
      Result res = comment(state);
      SHORT_SCANNER;
    }
  }
  return close_layout_in_list(state);
}

/**
 * Parser for numbers and symops. JS grammar is detecting zero-length nat for some reason.
 * - Nat
 * - Int
 * - Float
 * - Byte
 * Parser must fail if it detects a non-number/byte that begins with digit/decimal,
 * or if it detects a number out of range of permissible values.
 */
static Result numeric(State *state) {
  LOG(INFO, "->numeric, %c\n", PEEK);
  Result res = res_cont;
  switch (PEEK) {
    case '+':
    case '-':
      res = handle_negative(state);
      SHORT_SCANNER;
      break;
    NUMERIC_CASES:
      res = res_fail;//detect_nat_ufloat_byte(state);
      SHORT_SCANNER;
      break;
  }
  return res;
}

/**
 * If the symbol `START` is valid, starting a new layout is almost always indicated.
 *
 * If the next character is a left brace, it is either a comment, pragma or an explicit layout. In the comment case, the
 * it must be parsed here.
 * If the next character is a minus, it might be a comment.
 * If the next character is a +, it might be ->
 *
 * In all of those cases, the layout can't be started now. In the comment and pragma case, it will be started in the
 * next run.
 *
 * This pushes the indentation of the first non-whitespace character onto the stack.
 */
static Result layout_start(uint32_t column, State *state) {
    LOG(INFO, "->layout_start (col = %u, PEEK = %c)\n", COL, PEEK);
    if (state->symbols[START_AND_ARROW]) {
      if (PEEK == '-') {
        S_ADVANCE;
        if (PEEK == '>') {
          S_ADVANCE;
          if (!symbolic(PEEK)) {
            push(column, state);
            return finish(START_AND_ARROW, "layout_start before ->");
          }
        }
        else if (PEEK == '-') {
          return inline_comment(state);
        }
        return res_fail;
      }
      return res_cont;
    }
    // Need to make sure we aren't calculating a layout based on comment col
    if (state->symbols[START]) {
      if (PEEK == '-') {
        S_ADVANCE;
        if (PEEK == '-') {
          return inline_comment(state);
        }
      }
        switch (PEEK) {
          case '{': {
            S_ADVANCE;
            if (PEEK == '-') {
              return multiline_comment(state);
            }
            goto foo;
          }
          SYMBOLIC_CASES: { // Cannot start a layout with a -/+ unless it's part of '->'
            if (PEEK == '+') {
              return res_fail;
            }
            if (PEEK == '-') { // look to see if -> or -. or -DIGIT
              S_ADVANCE;
              if (PEEK == '.') { // if -. see if -.DIGIT
                S_ADVANCE;
                if(isdigit(PEEK)) {
                  return res_fail; // fail so JS can parse
                }
              }
              if (PEEK == '>') { // check if ->
                S_ADVANCE;
                if (!symbolic(PEEK)) {
                  goto foo;
                }
              } else if(isdigit(PEEK)) { // check if -DIGIT
                return res_fail; // fail so JS can look
              }
            }
            return res_cont;
          }
        }
        foo:
        push(column, state);
        return finish(START, "layout_start");
    }
    return res_cont;
}

/**
 * After a layout has ended, the originator might need to be terminated by semicolon as well, but since the layout end
 * advances until the next line, it cannot be done in the newline checks.
 *
 * This can happen, for example, with nested `do` layouts:
 *
 * f = do
 *   a <- b
 *   do c <- d
 *      e
 *   f
 *
 * Here, when the inner `do`'s  layout is ended, the next step is started at `f`, but the outer `do`'s layout expects a
 * semicolon. Since `f` is on the same indent as the outer `do`'s layout, this parser matches.
 */
static Result post_end_semicolon(uint32_t column, State *state) {
  LOG(INFO, "->post_end_semicolon(%u, %c)\n", column, PEEK);
  return SYM(SEMICOLON) && indent_lesseq(column, state)
    ? finish(SEMICOLON, "post_end_semicolon")
    : res_cont;
}

/** 
 * Like `post_end_semicolon`, but for layout end.
 */
static Result repeat_end(uint32_t column, State *state) {
  LOG(INFO, "->repeat_end(%u, %c)\n", column, PEEK);
  if (state->symbols[END] && smaller_indent(column, state)) {
    return layout_end("repeat_end", state);
  }
  return res_cont;
}
 
/**
 * Rules that decide based on the indent of the next line.
 */
static Result newline_indent(uint32_t indent, State *state) {
  LOG(INFO, "->newline_indent (col = %u, indent = %u, PEEK = %c)\n", COL, indent, PEEK);
  Result res = dedent(indent, state);
  SHORT_SCANNER;
  res = close_layout_in_list(state);
  SHORT_SCANNER;
  return newline_semicolon(indent, state);
}
 
/**
 * Rules that decide based on the first token on the next line.
 * - starts with `-` (COMMENT, FOLD)
 * - starts with `w` (END)
 * - starts with `>` (WATCH)
 * NOTE: not SYMOP because cannot begin a line with one.
 */
static Result newline_token(uint32_t indent, State *state) {
  (void) indent; //suppress "unused variable" warning
  LOG(INFO, "->newline_token (col = %u, peek = %c)\n", COL, PEEK);
  if (PEEK == '-') {
    return minus(state);
  }
  switch (PEEK) {
    NUMERIC_CASES: {
      Result res = numeric(state);
      SHORT_SCANNER;
      break;
    }
    SYMBOLIC_CASES:
    case '`': {
      if (PEEK == '+') {
        Result res = handle_negative(state);
        SHORT_SCANNER;
      } else if (PEEK == '>') {
        S_ADVANCE;
        if (!symbolic(PEEK)) {
          MARK("newline_token", false, state);
          return finish_if_valid(WATCH, "watch", state);
        }
      }
      return res_fail;
    }
    case 'w': {
      Result res = where_or_with(state);
      SHORT_SCANNER;
    }
  }
  // NOTE: "where" cannot begin a new line in Unison, just Haskell
  // Result res = newline_where(indent, state);
  // SHORT_SCANNER;
  if (PEEK == 'i') return in(state);
  return res_cont;
}
 
/**
 * To be called after parsing a newline, with the indent of the next line as argument.
 */
static Result newline(uint32_t indent, State *state) {
  LOG(INFO, "->newline(%u)\n", indent);
  Result res = eof(state);
  SHORT_SCANNER;
  if(SYM(START)) {
    Result res = layout_start(indent, state);
    SHORT_SCANNER;
  }
  // res = initialize(indent, state);
  // SHORT_SCANNER;
  // res = cpp(state);
  // SHORT_SCANNER;
  res = comment(state);
  SHORT_SCANNER;
  res = newline_indent(indent, state);
  SHORT_SCANNER;
  return newline_token(indent, state);
  
}
      
/**
 * Parsers that have to run when the next non-space character is not a newline:
 *
 *   - Layout start
 *   - ending nested layouts at the same position
 *   - numeric literals + symops
 *   - Tokens `where`, `with`, `in`, `$`, `)`, `]`, `,`
 *   - comments
 */
static Result immediate(uint32_t column, State *state) {
  LOG(INFO, "->immediate (col = %u, PEEK = %c)\n", COL, PEEK);
  Result res = layout_start(column, state);
  SHORT_SCANNER;
  res = post_end_semicolon(column, state);
  SHORT_SCANNER;
  res = repeat_end(column, state);
  SHORT_SCANNER;
  res = numeric(state);
  SHORT_SCANNER;
  return inline_tokens(state);
}

/**
 * Parsers that have to run _before_ parsing whitespace:
 *
 *   - Error check
 *   - Indent stack initialization
 *   - Qualified module dot (leading whitespace would mean it would be `(.)`)
 *   - Fold
 */
static Result init(State *state) {
  LOG(INFO, "->init (col = %u, PEEK = %c)\n", COL, PEEK);
  
  Result res = after_error(state) ? res_fail : res_cont;
  SHORT_SCANNER;
  
  res = eof(state);
  SHORT_SCANNER;
  
  
  // res = after_error(state) ? res_fail : res_cont;
  // SHORT_SCANNER;
  
  
  // res = initialize_init(state);
  // SHORT_SCANNER;
  res = hash(state);
  SHORT_SCANNER;  
  if (SYM(FOLD)) {
    res = fold(state);
    SHORT_SCANNER;
  }
  
  // if (state->symbols[QQ_BODY]) {
    // return qq_body(state);
  // }
  return res_cont;
}

/**
 * The main parser checks whether the first non-space character is a newline and delegates accordingly.
 */
static Result scan_main(State *state) {
  LOG(INFO, "->scan_main (%u, %c)\n", COL, PEEK);
  skipspace(state);
  Result res = eof(state);
  SHORT_SCANNER;
  MARK("main", false, state);
  if (is_newline(PEEK)) {
    LOG(VERBOSE, "is newline\n");
    S_SKIP;
    uint32_t indent = count_indent(state);
    return newline(indent, state);
  }
  uint32_t col = column(state);
  return immediate(col, state);
}

/**
 * The entry point to the parser.
 */
static Result scan_all(State *state) {
  LOG(INFO, "->scan_all (%u, %c)\n", COL, PEEK);
  Result res = init(state);
  SHORT_SCANNER;
  return scan_main(state);
}

// --------------------------------------------------------------------------------------------------------
// Evaluation
// --------------------------------------------------------------------------------------------------------

/**
  * Helper that consume_if all characters up to the next whitespace, for debugging after a run.
  *
  * Note: This may break the parser, since not all paths use `mark`.
  */
// #ifdef DEBUG
// static void debug_lookahead(State *state) {
//   bool first = true;
//   for (;;) {
//     if (isws(PEEK) || PEEK == 0) break;
//     else {
//       if (first) LOG(VERBOSE, "next: ");
//       LOG(VERBOSE, "%c\n", PEEK);
//       S_ADVANCE;
//       first = false;
//     }
//   }
// }
// #endif

/**
  * The main function of the parsing machinery, executing the parser by passing in the initial state and analyzing the
  * result.
  *
  * If the parser concluded with success, the `result_symbol` attribute of the lexer is set, by which the parsed symbol
  * is communicated to tree-sitter, and `true` is returned, indicating to tree-sitter to use the result.
  *
  * If the parser concluded with failure, no `result_symbol` is set and `false` is returned.
  *
  * If the parser did _not_ conclude, i.e. all steps finished with `cont`, a failure is reported as well.
  *
  * If the `DEBUG_NEXT_TOKEN` flag is set, the next token will be printed.
  */
static bool eval(Result (*chk)(State *state), State *state) {
  Result result = chk(state);
#ifdef DEBUG_NEXT_TOKEN
  debug_lookahead(state);
#endif
  if (result.finished && result.sym != FAIL) {
#ifdef DEBUG
    // TODO(414owen) can names[] fail?
    if (state->marked == -1) {
      LOG(VERBOSE, "%d\n", column(state));
    } else {
      LOG(VERBOSE, "%s@%d\n", state->marked_by, state->marked);
    }
#endif
    state->lexer->result_symbol = result.sym;
    LOG(WARN, "Lexer result: %s\n", sym_names[state->lexer->result_symbol]);
    return true;
  } else return false;
}

// ----------
// API
// ----------

/**
 * This function allocates the persistent state of the parser that is passed into the other API functions.
 */
void *tree_sitter_unison_external_scanner_create() {
  void *res = calloc(sizeof(indent_vec), 1);
  return res;
}

/**
 * Main logic entry point.
 * Since the state is a singular vector, it can just be cast and used directly.
 */
bool tree_sitter_unison_external_scanner_scan(void *indents_v, TSLexer *lexer, const bool *syms) {
  indent_vec *indents = (indent_vec*) indents_v;
  State state = {
    .lexer = lexer,
    .symbols = syms,
    .indents = indents
  };
  LOG(WARN, "===================\nBeginning scanner\n");
  debug_state(&state);
#if DEBUG 
  if (state.needs_free) free(state.marked_by);
#endif
  bool res = eval(scan_all, &state);
  LOG(WARN, "End scanner with %s and symbol %s\n", res ? "success" : "failure", state.lexer->result_symbol ? sym_names[state.lexer->result_symbol] : "(none)");
  return res;
}

/**
 * Copy the current state to another location for later reuse.
 * This is normally more complex, but since this parser's state constists solely of a vector of integers, it can just be
 * copied.
 */
unsigned tree_sitter_unison_external_scanner_serialize(void *indents_v, char *buffer) {
  indent_vec *indents = (indent_vec*) indents_v;
  unsigned to_copy = sizeof(indents->data[0]) * indents->len;
  if (to_copy > TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
    return 0;
  }
  memcpy(buffer, indents->data, to_copy);
  return to_copy;
}

/**
 * Load another parser state into the currently active state.
 * `payload` is the state of the previous parser execution, while `buffer` is the saved state of a different position
 * (e.g. when doing incremental parsing).
 */
void tree_sitter_unison_external_scanner_deserialize(void *indents_v, char *buffer, unsigned length) {
  indent_vec *indents = (indent_vec*) indents_v;
  unsigned els = length / sizeof(indents->data[0]);
  if (els > 0) {
    VEC_GROW(indents, els);
    indents->len = els;
    memcpy(indents->data, buffer, length);
  }
}

/**
 * Destroy the state.
 */
void tree_sitter_unison_external_scanner_destroy(void *indents_v) {
  indent_vec *indents = (indent_vec*) indents_v;
  VEC_FREE(indents);
  free(indents);
}

// For unit tests
// int main(int argc, char *arvg[]) {
  // #ifdef DEBUG
  // assert()
  // #endif
// } 
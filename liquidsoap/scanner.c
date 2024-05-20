#include "alloc.h"
#include "array.h"
#include "parser.h"
#include <stdlib.h>

enum TokenType {
  VAR,
  LPAR,
  LBRA,
  FLOAT_NO_LBRA,
  FLOAT_EXP,
  NO_EXTERNAL,
  PARSE_DECORATOR,
  COMMENT,
  UMINUS
};

enum State {
  START,
  POST_VAR,
  PRE_PARSE_DECORATOR,
  IN_PARSE_DECORATOR,
  POST_PARSE_DECORATOR,
  IN_FLOAT,
  IN_FLOAT_NO_LBRA_OR_EXP,
  IN_FLOAT_NO_LBRA,
  IN_FLOAT_EXP,
  IN_COMMENT_START,
  IN_INLINE_COMMENT,
  IN_INLINE_COMMENT_CONTINUE,
  IN_INLINE_COMMENT_END,
  IN_MULTILINE_COMMENT,
  IN_MULTILINE_COMMENT_END,
  IS_UMINUS,
  IS_COMMENT,
};

typedef Array(int32_t) ustring_t;

typedef struct config {
  int no_uminus;
  int comment_level;
  ustring_t lookahead;
  ustring_t parser_decorator;
} config_t;

#define RESET_CONFIG(config)                                                   \
  {                                                                            \
    config->no_uminus = 0;                                                     \
    config->comment_level = 0;                                                 \
    array_clear(&config->lookahead);                                           \
    array_clear(&config->parser_decorator);                                    \
  }

#define SPACE_UCHAR 0x20
#define FIRST_CONTROL_UCHAR 0x9
#define LAST_CONTROL_UCHAR 0xd
#define FIRST_NUMBER_UCHAR 0x30
#define LAST_NUMBER_UCHAR 0x39
#define FIRST_ALPHA_UCHAR 0x61
#define LAST_ALPHA_UCHAR 0x7a
#define DOT_UCHAR 0x2e
#define PARSE_DECORATOR_REX L"[a-z.]"

static inline int is_space_liquidsoap(ustring_t *s) {
  uint32_t i;

  for (i = 0; i < s->size; i++) {
    if (*array_get(s, i) != SPACE_UCHAR)
      return 0;
  }

  return 1;
};

static inline int is_skip(ustring_t *s) {
  uint32_t i;
  uint32_t c;

  for (i = 0; i < s->size; i++) {
    c = *array_get(s, i);
    if (c != SPACE_UCHAR && (c < FIRST_CONTROL_UCHAR || LAST_CONTROL_UCHAR < c))
      return 0;
  }

  return 1;
};

static inline int is_number(ustring_t *s) {
  uint32_t i;
  uint32_t c;

  for (i = 0; i < s->size; i++) {
    c = *array_get(s, i);
    if (c < FIRST_NUMBER_UCHAR || LAST_NUMBER_UCHAR < c)
      return 0;
  }

  return 1;
};

static inline int is_parse_decorator(ustring_t *s) {
  uint32_t i;
  uint32_t c;

  for (i = 0; i < s->size; i++) {
    c = *array_get(s, i);
    if ((c < FIRST_ALPHA_UCHAR || LAST_ALPHA_UCHAR < c) && c != DOT_UCHAR)
      return 0;
  }

  return 1;
};

static inline int ustring_equal(ustring_t *s, char *t) {
  size_t len = strlen(t);
  size_t i;

  if (s->size != len)
    return 0;

  for (i = 0; i < len; i++) {
    if (*array_get(s, i) != (uint32_t)t[i])
      return 0;
  }

  return 1;
}

void *tree_sitter_liquidsoap_external_scanner_create() {
  config_t *config = ts_malloc(sizeof(config_t));
  array_init(&config->lookahead);
  array_init(&config->parser_decorator);
  RESET_CONFIG(config);
  return config;
}

void tree_sitter_liquidsoap_external_scanner_destroy(void *config) {
  ts_free(config);
}

void tree_sitter_liquidsoap_external_scanner_reset(void *config) {
  RESET_CONFIG(((config_t *)config));
}

unsigned tree_sitter_liquidsoap_external_scanner_serialize(void *payload,
                                                           char *buffer) {
  return 0;
}

void tree_sitter_liquidsoap_external_scanner_deserialize(void *payload,
                                                         const char *buffer,
                                                         unsigned n) {}

bool tree_sitter_liquidsoap_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  enum State state = START;
  config_t *config = (config_t *)payload;
  array_clear(&config->parser_decorator);

  if (!valid_symbols[VAR] && !valid_symbols[LBRA] && !valid_symbols[LPAR] &&
      !valid_symbols[NO_EXTERNAL] && !valid_symbols[FLOAT_NO_LBRA] &&
      !valid_symbols[FLOAT_EXP] && !valid_symbols[PARSE_DECORATOR] &&
      !valid_symbols[COMMENT] && !valid_symbols[UMINUS]) {
    RESET_CONFIG(config);
    return 0;
  }

  if (valid_symbols[NO_EXTERNAL])
    return 0;

  if (valid_symbols[VAR] || valid_symbols[LBRA] || valid_symbols[LPAR])
    state = POST_VAR;

  if (valid_symbols[PARSE_DECORATOR])
    state = PRE_PARSE_DECORATOR;

  START_LEXER();
  eof = lexer->eof(lexer);
  array_clear(&config->lookahead);
  array_push(&config->lookahead, lookahead);

  if (eof) {
    if (state == IN_INLINE_COMMENT || state == IN_INLINE_COMMENT_END)
      ACCEPT_TOKEN(COMMENT);
    RESET_CONFIG(config);
    END_STATE();
  }

  switch (state) {
  case START:
    if (is_skip(&config->lookahead))
      SKIP(START);

    if (is_number(&config->lookahead)) {
      config->no_uminus = 1;
      ADVANCE(IN_FLOAT);
    }

    if (lookahead == ')') {
      config->no_uminus = 1;
      END_STATE();
    }

    if (lookahead == '}') {
      config->no_uminus = 1;
      END_STATE();
    }

    if (lookahead == '#')
      ADVANCE(IN_COMMENT_START);

    if (lookahead == '-') {
      if (config->no_uminus) {
        ADVANCE(IN_FLOAT);
      } else {
        ADVANCE(IS_UMINUS);
      }
    }

    RESET_CONFIG(config);
    END_STATE();

  case IN_FLOAT:
    if (is_number(&config->lookahead))
      ADVANCE(IN_FLOAT);

    if (lookahead == '_')
      ADVANCE(IN_FLOAT);

    if (lookahead == '.')
      ADVANCE(IN_FLOAT_NO_LBRA_OR_EXP);

    if (lookahead == 'e' || lookahead == 'E') {
      ADVANCE(IN_FLOAT_EXP);
    }

    config->no_uminus = 1;
    END_STATE();

  case IN_FLOAT_NO_LBRA_OR_EXP:
    if (lookahead == 'e' || lookahead == 'E') {
      ADVANCE(IN_FLOAT_EXP);
    }

  case IN_FLOAT_NO_LBRA:
    if (is_space_liquidsoap(&config->lookahead)) {
      SKIP(IN_FLOAT_NO_LBRA);
    }

    if (lookahead == '{') {
      config->no_uminus = 1;
      END_STATE();
    }

    if (is_number(&config->lookahead)) {
      config->no_uminus = 1;
      END_STATE();
    }

    ACCEPT_TOKEN(FLOAT_NO_LBRA);
    config->no_uminus = 1;
    END_STATE();

  case IN_FLOAT_EXP:
    if (is_space_liquidsoap(&config->lookahead)) {
      SKIP(IN_FLOAT_EXP);
    }

    if (lookahead == '+' || lookahead == '-') {
      ADVANCE(IN_FLOAT_EXP);
    }

    ACCEPT_TOKEN(FLOAT_EXP);
    config->no_uminus = 1;
    END_STATE();

  case IN_COMMENT_START:
    if (lookahead == '<') {
      config->comment_level++;
      ADVANCE(IN_MULTILINE_COMMENT);
    }

    if (config->comment_level) {
      ADVANCE(IN_MULTILINE_COMMENT);
    }

    if (lookahead == '\n')
      ADVANCE(IS_COMMENT);

    ADVANCE(IN_INLINE_COMMENT);

  case IN_INLINE_COMMENT:
    if (lookahead == '\n') {
      lexer->mark_end(lexer);
      ADVANCE(IN_INLINE_COMMENT_END);
    }

    ADVANCE(IN_INLINE_COMMENT);

  case IN_INLINE_COMMENT_END:
    if (is_space_liquidsoap(&config->lookahead))
      ADVANCE(IN_INLINE_COMMENT_END);

    if (lookahead == '#')
      ADVANCE(IN_INLINE_COMMENT_CONTINUE);

    result = 1;
    lexer->result_symbol = COMMENT;
    RESET_CONFIG(config);
    END_STATE();

  case IN_INLINE_COMMENT_CONTINUE:
    if (lookahead == '\n') {
      lexer->mark_end(lexer);
      ADVANCE(IN_INLINE_COMMENT_END);
    }

    if (!ustring_equal(&config->lookahead, "<"))
      ADVANCE(IN_INLINE_COMMENT);

    result = 1;
    lexer->result_symbol = COMMENT;
    RESET_CONFIG(config);
    END_STATE();

  case IN_MULTILINE_COMMENT:
    if (lookahead == '#')
      ADVANCE(IN_COMMENT_START);

    if (lookahead == '>')
      ADVANCE(IN_MULTILINE_COMMENT_END);

    ADVANCE(IN_MULTILINE_COMMENT);

  case IN_MULTILINE_COMMENT_END:
    if (lookahead == '#') {
      config->comment_level--;

      if (!config->comment_level)
        ADVANCE(IS_COMMENT);
    }

    ADVANCE(IN_MULTILINE_COMMENT);

  case PRE_PARSE_DECORATOR:
    if (is_space_liquidsoap(&config->lookahead))
      SKIP(PRE_PARSE_DECORATOR);

    if (!is_parse_decorator(&config->lookahead))
      END_STATE();

    array_push_all(&config->parser_decorator, &config->lookahead);
    ADVANCE(IN_PARSE_DECORATOR);

  case IN_PARSE_DECORATOR:
    if (is_parse_decorator(&config->lookahead)) {
      array_push_all(&config->parser_decorator, &config->lookahead);
      ADVANCE(IN_PARSE_DECORATOR);
    }

    if (!ustring_equal(&config->parser_decorator, "json.parse") &&
        !ustring_equal(&config->parser_decorator, "yaml.parse") &&
        !ustring_equal(&config->parser_decorator, "sqlite.row") &&
        !ustring_equal(&config->parser_decorator, "sqlite.query")) {
      END_STATE();
    }

    ACCEPT_TOKEN(PARSE_DECORATOR);
    ADVANCE(POST_PARSE_DECORATOR);

  case POST_PARSE_DECORATOR:
    if (is_space_liquidsoap(&config->lookahead))
      SKIP(POST_PARSE_DECORATOR);

    if (lookahead == '.' || lookahead == '=')
      result = 0;

    END_STATE();

  case POST_VAR:
    if (is_space_liquidsoap(&config->lookahead))
      SKIP(POST_VAR);

    result = 1;

    if (lookahead == '(') {
      lexer->result_symbol = LPAR;
    } else if (lookahead == '[') {
      lexer->result_symbol = LBRA;
    } else
      lexer->result_symbol = VAR;

    config->no_uminus = 1;
    END_STATE();
  case IS_UMINUS:
    ACCEPT_TOKEN(UMINUS);
    RESET_CONFIG(config);
    END_STATE();
  case IS_COMMENT:
    ACCEPT_TOKEN(COMMENT);
    RESET_CONFIG(config);
    END_STATE();
  default:
    RESET_CONFIG(config);
    END_STATE();
  }
}

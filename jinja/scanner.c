#include <string.h>
#include "alloc.h"
#include "parser.h"

enum TokenType {
    TOKEN_TYPE_RAW_STATR,
    TOKEN_TYPE_RAW_CHAR,
    TOKEN_TYPE_RAW_END,
};

static inline bool skip_white_space(TSLexer *lexer, bool skip_newline);
static inline bool is_white_space(int32_t ch);
static inline bool is_newline_jinja(int32_t ch);
static inline bool parse_sequence_impl(TSLexer *lexer, char const *sequence, uintptr_t len);
#define parse_sequence(lexer, sequence) parse_sequence_impl(lexer, sequence, sizeof(sequence) - 1)

typedef struct Scanner {
    bool is_block_raw;
    bool is_matching_raw;
} Scanner;

static inline void skip_char(TSLexer *lexer, char ch);

bool tree_sitter_jinja_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    if(lexer->eof(lexer)) {
        return false;
    }
    Scanner *s = (Scanner *)payload;

    if(valid_symbols[TOKEN_TYPE_RAW_STATR]) {
        if(lexer->lookahead == '{') {
            if(parse_sequence(lexer, "{%")) {
                skip_char(lexer, '-');
                skip_white_space(lexer, true);
                if(parse_sequence(lexer, "raw")) {
                    skip_white_space(lexer, true);
                    skip_char(lexer, '-');
                    if(parse_sequence(lexer, "%}")) {
                        lexer->result_symbol = TOKEN_TYPE_RAW_STATR;
                        s->is_block_raw = true;
                        s->is_matching_raw = true;
                        return true;
                    }
                }
            }
        } else if(lexer->lookahead == '#') {
            lexer->advance_jinja(lexer, false);
            if(lexer->lookahead == ' ') {
                if(parse_sequence(lexer, "raw")) {
                    skip_white_space(lexer, false);
                    if(is_newline_jinja(lexer->lookahead)) {
                        lexer->result_symbol = TOKEN_TYPE_RAW_STATR;
                        s->is_block_raw = false;
                        s->is_matching_raw = true;
                        return true;
                    }
                }
            }
        }
        return false;
    }

    if(valid_symbols[TOKEN_TYPE_RAW_CHAR]) {
        lexer->result_symbol = TOKEN_TYPE_RAW_CHAR;
        if(lexer->lookahead == '{') {
            if(parse_sequence(lexer, "{%")) {
                skip_char(lexer, '-');
                skip_white_space(lexer, true);
                if(parse_sequence(lexer, "endraw")) {
                    skip_white_space(lexer, true);
                    skip_char(lexer, '-');
                    if(parse_sequence(lexer, "%}") && s->is_matching_raw && s->is_block_raw) {
                        s->is_matching_raw = false;
                        lexer->result_symbol = TOKEN_TYPE_RAW_END;
                        s->is_block_raw = false;
                        return true;
                    }
                }
            }
        } else if(lexer->lookahead == '#') {
            lexer->advance_jinja(lexer, false);
            if(lexer->lookahead == ' ') {
                if(parse_sequence(lexer, "endraw")) {
                    skip_white_space(lexer, false);
                    if(is_newline_jinja(lexer->lookahead) && s->is_matching_raw && !s->is_block_raw) {
                        s->is_matching_raw = false;
                        lexer->result_symbol = TOKEN_TYPE_RAW_END;
                        return true;
                    }
                }
            }
        } else {
            lexer->advance_jinja(lexer, false);
        }

        return true;
    }

    return false;
}

void *tree_sitter_jinja_external_scanner_create() {
    return ts_calloc(1, sizeof(Scanner));
}

void tree_sitter_jinja_external_scanner_destroy(void *payload) {
    ts_free(payload);
}

unsigned tree_sitter_jinja_external_scanner_serialize(void *payload, char *buffer) {
    memcpy(buffer, payload, sizeof(Scanner));
    return sizeof(Scanner);
}

void tree_sitter_jinja_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    if(buffer == NULL) {
        return;
    }
    memcpy(payload, buffer, sizeof(Scanner));
}

static inline bool skip_white_space(TSLexer *lexer, bool skip_newline) {
    bool has_skiped = false;
    while(is_white_space(lexer->lookahead) ||
          (skip_newline && is_newline_jinja(lexer->lookahead))) {
        lexer->advance_jinja(lexer, false);
        has_skiped = true;
    }

    return has_skiped;
}

static inline bool is_white_space(int32_t ch) {
    return ch == ' ' || ch == '\t';
}

static inline bool is_newline_jinja(int32_t ch) {
    return ch == '\r' || ch == '\n';
}

static inline bool parse_sequence_impl(TSLexer *lexer, char const *sequence, uintptr_t len) {
    uintptr_t pos = 0;

    while(pos < len) {
        if(lexer->lookahead != sequence[pos]) {
            return false;
        }

        lexer->advance_jinja(lexer, false);
        ++pos;
    }

    return true;
}

static inline void skip_char(TSLexer *lexer, char ch) {
    if(lexer->lookahead == ch) {
        lexer->advance_jinja(lexer, false);
    }
}

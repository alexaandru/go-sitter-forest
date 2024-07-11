#include "array.h"
#include "parser.h"
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

enum TokenType {
    STRING_START,
    STRING_CONTENT,
    STRING_END,
};

typedef enum {
    SingleQuote = 1 << 0,
    DoubleQuote = 1 << 1,
    BackQuote = 1 << 2,
    Raw = 1 << 3,
    Triple = 1 << 5,
    Bytes = 1 << 6,
} Flags;

typedef struct {
    char flags;
} Delimiter;

static inline Delimiter new_delimiter() { return (Delimiter){0}; }

static inline bool is_triple(Delimiter *delimiter) {
    return delimiter->flags & Triple;
}

static inline int32_t end_character(Delimiter *delimiter) {
    if (delimiter->flags & SingleQuote)
        return '\'';
    if (delimiter->flags & DoubleQuote)
        return '"';
    return 0;
}

static inline void set_raw(Delimiter *delimiter) { delimiter->flags |= Raw; }

static inline void set_triple(Delimiter *delimiter) {
    delimiter->flags |= Triple;
}

static inline void set_bytes(Delimiter *delimiter) {
    delimiter->flags |= Bytes;
}

static inline void set_end_character(Delimiter *delimiter, int32_t character) {
    switch (character) {
    case '\'':
        delimiter->flags |= SingleQuote;
        break;
    case '"':
        delimiter->flags |= DoubleQuote;
        break;
    default:
        assert(false);
    }
}

typedef struct {
    Array(Delimiter) delimiters;
} Scanner;

static inline void advance_sql_bigquery(TSLexer *lexer) { lexer->advance_sql_bigquery(lexer, false); }

static inline void skip_sql_bigquery(TSLexer *lexer) { lexer->advance_sql_bigquery(lexer, true); }

bool tree_sitter_sql_bigquery_external_scanner_scan(void *payload,
                                                    TSLexer *lexer,
                                                    const bool *valid_symbols) {
    Scanner *scanner = (Scanner *)payload;

    if (valid_symbols[STRING_CONTENT] && scanner->delimiters.size > 0) {
        Delimiter *delimiter = array_back(&scanner->delimiters);
        int32_t end_char = end_character(delimiter);
        bool has_content = false;

        while (lexer->lookahead) {

            if (lexer->lookahead == end_char) {
                if (is_triple(delimiter)) {
                    lexer->mark_end(lexer);
                    advance_sql_bigquery(lexer);
                    if (lexer->lookahead == end_char) {
                        advance_sql_bigquery(lexer);
                        if (lexer->lookahead == end_char) {
                            if (has_content) {
                                lexer->result_symbol = STRING_CONTENT;
                            } else {
                                advance_sql_bigquery(lexer);
                                lexer->mark_end(lexer);
                                array_pop(&scanner->delimiters);
                                lexer->result_symbol = STRING_END;
                            }
                            return true;
                        } else {
                            lexer->mark_end(lexer);
                            lexer->result_symbol = STRING_CONTENT;
                            return true;
                        }
                    } else {
                        lexer->mark_end(lexer);
                        lexer->result_symbol = STRING_CONTENT;
                        return true;
                    }
                } else {
                    if (has_content) {
                        lexer->result_symbol = STRING_CONTENT;
                    } else {
                        advance_sql_bigquery(lexer);
                        array_pop(&scanner->delimiters);
                        lexer->result_symbol = STRING_END;
                    }
                    lexer->mark_end(lexer);
                    return true;
                }
            } else if (lexer->lookahead == '\n' && has_content &&
                       !is_triple(delimiter)) {
                return false;
            }
            advance_sql_bigquery(lexer);
            has_content = true;
        }
    }

    lexer->mark_end(lexer);

    bool found_end_of_line = false;
    while (true) {
        if (lexer->lookahead == '\n') {
            found_end_of_line = true;
            skip_sql_bigquery(lexer);
        } else if (lexer->lookahead == ' ') {
            skip_sql_bigquery(lexer);
        } else if (lexer->lookahead == '\r') {
            skip_sql_bigquery(lexer);
        } else if (lexer->lookahead == '\t') {
            skip_sql_bigquery(lexer);
        } else if (lexer->lookahead == '#') {
            while (lexer->lookahead && lexer->lookahead != '\n') {
                skip_sql_bigquery(lexer);
            }
            skip_sql_bigquery(lexer);
        } else if (lexer->lookahead == '\\') {
            skip_sql_bigquery(lexer);
            if (lexer->lookahead == '\r') {
                skip_sql_bigquery(lexer);
            }
            if (lexer->lookahead == '\n' || lexer->eof(lexer)) {
                skip_sql_bigquery(lexer);
            } else {
                return false;
            }
        } else if (lexer->eof(lexer)) {
            found_end_of_line = true;
            break;
        } else {
            break;
        }
    }

    if (valid_symbols[STRING_START]) {
        Delimiter delimiter = new_delimiter();

        bool has_flags = false;
        while (lexer->lookahead) {

            if (lexer->lookahead == 'r' || lexer->lookahead == 'R') {
                set_raw(&delimiter);
            } else if (lexer->lookahead == 'b' || lexer->lookahead == 'B') {
                set_bytes(&delimiter);
            } else {
                break;
            }
            has_flags = true;
            advance_sql_bigquery(lexer);
        }

        if (lexer->lookahead == '\'') {
            set_end_character(&delimiter, '\'');
            advance_sql_bigquery(lexer);
            lexer->mark_end(lexer);
            if (lexer->lookahead == '\'') {
                advance_sql_bigquery(lexer);
                if (lexer->lookahead == '\'') {
                    advance_sql_bigquery(lexer);
                    lexer->mark_end(lexer);
                    set_triple(&delimiter);
                }
            }
        } else if (lexer->lookahead == '"') {
            set_end_character(&delimiter, '"');
            advance_sql_bigquery(lexer);
            lexer->mark_end(lexer);
            if (lexer->lookahead == '"') {
                advance_sql_bigquery(lexer);
                if (lexer->lookahead == '"') {
                    advance_sql_bigquery(lexer);
                    lexer->mark_end(lexer);
                    set_triple(&delimiter);
                }
            }
        }

        if (end_character(&delimiter)) {
            array_push(&scanner->delimiters, delimiter);
            lexer->result_symbol = STRING_START;
            return true;
        }
        if (has_flags) {
            return false;
        }
    }

    return false;
}

unsigned tree_sitter_sql_bigquery_external_scanner_serialize(void *payload,
                                                             char *buffer) {
    Scanner *scanner = (Scanner *)payload;

    size_t size = 0;

    size_t delimiter_count = scanner->delimiters.size;
    if (delimiter_count > UINT8_MAX) {
        delimiter_count = UINT8_MAX;
    }
    buffer[size++] = (char)delimiter_count;

    if (delimiter_count > 0) {
        memcpy(&buffer[size], scanner->delimiters.contents, delimiter_count);
    }
    size += delimiter_count;

    return size;
}

void tree_sitter_sql_bigquery_external_scanner_deserialize(void *payload,
                                                           const char *buffer,
                                                           unsigned length) {
    Scanner *scanner = (Scanner *)payload;
    array_clear(&scanner->delimiters);
    if(length == 0) return;

    size_t size = 0;
    size_t delimiter_count = (uint8_t)buffer[size++];
    if (delimiter_count > 0) {
        array_reserve(&scanner->delimiters, delimiter_count);
        scanner->delimiters.size = delimiter_count;
        memcpy(scanner->delimiters.contents, &buffer[size], delimiter_count);
    }
}

void *tree_sitter_sql_bigquery_external_scanner_create() {
    Scanner *scanner = (Scanner *)ts_calloc(1, sizeof(Scanner));
    return scanner;
}

void tree_sitter_sql_bigquery_external_scanner_destroy(void *payload) {
    Scanner *scanner = (Scanner *)payload;
    array_delete(&scanner->delimiters);
    ts_free(scanner);
}

#include "parser.h"
#include "alloc.h"
#include "array.h"
#include <stdint.h>

enum TokenType {
    COMMAND,
    STRING_TO_FILEEND,
    // ARROW,
    // FOREACH,
};

struct State {
    // When this is set, ignore anything and create a arrow
    bool make_arrow;
};

void *tree_sitter_tup_external_scanner_create(void) {
    return NULL;
}


void tree_sitter_tup_external_scanner_destroy(void* payload) {
}


unsigned tree_sitter_tup_external_scanner_serialize(void *payload, char *buffer) {
    return 0;
}


void tree_sitter_tup_external_scanner_deserialize(void *payload, char *buffer, unsigned length) {
}


// expects that mark end is already set
bool is_variable(TSLexer *lexer, bool *advanced) {
    if (
        lexer->lookahead == '$'
        || lexer->lookahead == '@'
        || lexer->lookahead == '&'
    ) {
        lexer->advance_tup(lexer, false);
        *advanced = true;
        if (lexer->lookahead == '(' || lexer->lookahead == '{') {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}


bool tree_sitter_tup_external_scanner_scan(
    void* payload,
    TSLexer *lexer,
    const bool *valid_symbols
) {
    Array(char) next_string = array_new();

    if (valid_symbols[STRING_TO_FILEEND] && lexer->lookahead != '\n') {
        lexer->advance_tup(lexer, false);
        while (lexer->lookahead != '\n' && !lexer->eof(lexer)) {
            lexer->advance_tup(lexer, false);
        }
        lexer->result_symbol = STRING_TO_FILEEND;
        lexer->mark_end(lexer);
        return true;
    } else if (valid_symbols[COMMAND]
            && lexer->lookahead != '%'
            && lexer->lookahead != '^'
    ) {
        uint32_t next = lexer->lookahead;

        bool advanced = false;
        if (is_variable(lexer, &advanced)) {
            return false;
        }
        if (advanced) {
            array_push(&next_string, next);
        }

        advanced = false;
        if (lexer->lookahead == '|') {
            lexer->advance_tup(lexer, false);
            advanced = true;
            if (lexer->lookahead == '>') {
                return false;
            }
            array_push(&next_string, next);
        }
        if (!advanced) {
            lexer->advance_tup(lexer, false);
        }

        while (lexer->lookahead != '\n'
            && lexer->lookahead != '^'
            && !lexer->eof(lexer)) {
            if (lexer->lookahead == '|') {
                // dap|>
                //   ^
                lexer->result_symbol = COMMAND;
                lexer->mark_end(lexer);
                lexer->advance_tup(lexer, false);
                // dap|>
                //   *^
                if (lexer->lookahead == '>') {
                    return next_string.size > 0;
                } else {
                    lexer->mark_end(lexer);
                }
            } else if (lexer->lookahead == '%'
            ) {
                lexer->mark_end(lexer);
                lexer->result_symbol = COMMAND;
                return true;
            }

            uint32_t next = lexer->lookahead;
            lexer->mark_end(lexer);
            bool advanced = false;
            if (is_variable(lexer, &advanced)) {
                lexer->result_symbol = COMMAND;
                return true;
            }
            if (advanced) {
                array_push(&next_string, lexer->lookahead);
            }

            array_push(&next_string, lexer->lookahead);
            lexer->advance_tup(lexer, false);
        }
    }
    return false;
}

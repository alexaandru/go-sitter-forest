#include "parser.h"
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <wctype.h>

enum TokenType {
    TEXT_BLOCK_START,
    TEXT_BLOCK_END,
    TEXT_BLOCK_RAW_TEXT,
    BLOCK_COMMENT,
};

typedef struct {
    int16_t *escape_char_stack;
    size_t escape_char_stack_size;
    size_t escape_char_stack_capacity;
} Scanner;

static void vector_push(Scanner *scanner, int16_t value) {
    if (scanner->escape_char_stack_size == scanner->escape_char_stack_capacity) {
        scanner->escape_char_stack_capacity = scanner->escape_char_stack_capacity * 2 + 1;
        scanner->escape_char_stack = realloc(scanner->escape_char_stack, scanner->escape_char_stack_capacity * sizeof(int16_t));
    }
    scanner->escape_char_stack[scanner->escape_char_stack_size++] = value;
}

static void vector_clear(Scanner *scanner) {
    scanner->escape_char_stack_size = 0;
}

static void advance_d2(TSLexer *lexer) {
    lexer->advance_d2(lexer, false);
}

static void skip_d2(TSLexer *lexer) {
    lexer->advance_d2(lexer, true);
}

static void skip_whitespaces(TSLexer *lexer) {
    while (lexer->lookahead != 0 && iswspace(lexer->lookahead)) {
        skip_d2(lexer);
    }
}

static bool is_text_block_end(Scanner *scanner, TSLexer *lexer) {
    for (int i = scanner->escape_char_stack_size - 1; i >= 0; i--) {
        if (lexer->lookahead != scanner->escape_char_stack[i]) {
            return false;
        }
        advance_d2(lexer);
    }
    return true;
}

static bool is_triple_double_quote(TSLexer *lexer) {
    for (int i = 0; i < 3; ++i) {
        if (lexer->lookahead != '"') {
            return false;
        }
        advance_d2(lexer);
    }
    return true;
}

static bool scan_d2(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    Scanner *scanner = (Scanner *)payload;

    if (valid_symbols[TEXT_BLOCK_START] && scanner->escape_char_stack_size == 0) {
        lexer->result_symbol = TEXT_BLOCK_START;
        lexer->mark_end(lexer);

        skip_whitespaces(lexer);

        if (lexer->lookahead != '|') {
            return false;
        }

        advance_d2(lexer);
        vector_push(scanner, '|');

        if (iswalnum(lexer->lookahead) || iswspace(lexer->lookahead)) {
            lexer->mark_end(lexer);
            return true;
        }

        int16_t escape_char = lexer->lookahead;
        while (lexer->lookahead == escape_char) {
            vector_push(scanner, escape_char);
            advance_d2(lexer);
        }

        lexer->mark_end(lexer);

        return true;
    } else if (valid_symbols[TEXT_BLOCK_END] && scanner->escape_char_stack_size > 0) {
        lexer->result_symbol = TEXT_BLOCK_END;
        lexer->mark_end(lexer);

        skip_whitespaces(lexer);

        if (is_text_block_end(scanner, lexer)) {
            lexer->mark_end(lexer);
            vector_clear(scanner);
            return true;
        }
    } else if (valid_symbols[TEXT_BLOCK_RAW_TEXT] && scanner->escape_char_stack_size > 0) {
        lexer->result_symbol = TEXT_BLOCK_RAW_TEXT;
        lexer->mark_end(lexer);
        
        while (lexer->lookahead != 0 && !is_text_block_end(scanner, lexer)) {
            advance_d2(lexer);
            lexer->mark_end(lexer);
        }
        
        return true;
    } else if (valid_symbols[BLOCK_COMMENT]) {
        lexer->result_symbol = BLOCK_COMMENT;
        lexer->mark_end(lexer);

        skip_whitespaces(lexer);
        // Check start of block comment
        if (!is_triple_double_quote(lexer)) {
            return false;
        }

        // Search end of block comment
        while (!is_triple_double_quote(lexer)) {
            // d2 expects closed tag for block comment
            if (lexer->lookahead == 0) return false;
            advance_d2(lexer);
        }

        lexer->mark_end(lexer);

        return true;
    }

    return false;
}

void *tree_sitter_d2_external_scanner_create() {
    Scanner *scanner = calloc(1, sizeof(Scanner));
    scanner->escape_char_stack_capacity = 10;
    scanner->escape_char_stack = malloc(scanner->escape_char_stack_capacity * sizeof(int16_t));
    return scanner;
}

bool tree_sitter_d2_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    return scan_d2(payload, lexer, valid_symbols);
}

unsigned tree_sitter_d2_external_scanner_serialize(void *payload, char *buffer) {
    Scanner *scanner = (Scanner *)payload;
    size_t i = 0;
    buffer[i++] = scanner->escape_char_stack_size;

    for (size_t j = 0; j < scanner->escape_char_stack_size && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++j) {
        buffer[i++] = scanner->escape_char_stack[j];
    }

    return i;
}

void tree_sitter_d2_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    Scanner *scanner = (Scanner *)payload;
    vector_clear(scanner);
    if (length == 0) return;
    size_t i = 0;
    size_t escape_char_count = (uint8_t)buffer[i++];
    for (; i < escape_char_count + 1 && i < length; i++) {
        vector_push(scanner, buffer[i]);
    }
}

void tree_sitter_d2_external_scanner_destroy(void *payload) {
    Scanner *scanner = (Scanner *)payload;
    free(scanner->escape_char_stack);
    free(scanner);
}


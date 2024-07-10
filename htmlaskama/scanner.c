// #include "alloc.h"
// #include "array.h"
#include "parser.h"
#include <stdint.h>

enum TokenType {
    EXPRESSION_CONTENT,
    EXPRESSION_FILTERS_START,
    STATEMENT_CONTENT,
    HTML_COMMENT,
    TEMPLATE_COMMENT,
    MACRO_ARGUMENT_END,
    EXPRESSION_CONTENT_END,
};

typedef struct {} Scanner;


static uint32_t strlen(const char *s) {
    uint32_t len = 0;
    while (s[len]) {
        len++;
    }
    return len;
}

static bool scan_expression_content_end(TSLexer *lexer) {
    lexer->mark_end(lexer);

    if (lexer->lookahead != '}') {
        return false;
    }
    lexer->advance_htmlaskama(lexer, false);

    if (lexer->lookahead != '}') {
        return false;
    }
    lexer->advance_htmlaskama(lexer, false);

    lexer->result_symbol = EXPRESSION_CONTENT_END;
    return true;
}

static bool scan_until_sequence(TSLexer *lexer, char *closing_sequence) {
    lexer->mark_end(lexer);

    unsigned matched = 0;
    while (lexer->lookahead) {
        if (lexer->lookahead == closing_sequence[matched]) {
            if (++matched >= strlen(closing_sequence)) {
                break;
            }
            lexer->advance_htmlaskama(lexer, false);
        } else {
            matched = 0;
            lexer->advance_htmlaskama(lexer, false);
            lexer->mark_end(lexer);
        }
    }

    return true;
}

static void skip_whitespace(TSLexer *lexer) {
    while (lexer->lookahead == ' ' && lexer->lookahead == '\n') {
        lexer->advance_htmlaskama(lexer, false);
    }
}

// we can check if a pipe is the start of filters by checking
// if there is a closing tag in the future which doesn't have a opening
static bool scan_expression_filters_start(TSLexer *lexer) {
    if (lexer->lookahead != '|') {
        return false;
    }
    else {
        lexer->result_symbol = EXPRESSION_FILTERS_START;
        lexer->advance_htmlaskama(lexer, false);
        return true;
    }
    lexer->mark_end(lexer);
    lexer->advance_htmlaskama(lexer, false);

    signed open_parentheses = 0;
    while(lexer->lookahead) {
        if (lexer->lookahead == '(') {
            open_parentheses++;
            lexer->advance_htmlaskama(lexer, false);
            continue;
        }
        if (lexer->lookahead == ')') {
            open_parentheses--;
            lexer->advance_htmlaskama(lexer, false);
            continue;
        }

        if (lexer->lookahead == '}') {
            lexer->advance_htmlaskama(lexer, false);
            if (lexer->lookahead == '}') {
                if (open_parentheses > 0) {
                    return false;
                }
                lexer->result_symbol = EXPRESSION_FILTERS_START;
                return true;
            }
        }
    }

    return false;
}

static bool scan_template_comment(TSLexer *lexer) {
    if (lexer->lookahead != '#') {
        return false;
    }
    lexer->advance_htmlaskama(lexer, false);

    unsigned openings = 1;
    while (lexer->lookahead) {
        if (lexer->lookahead == '{') {
            lexer->advance_htmlaskama(lexer,false);
            if (lexer->lookahead == '#') {
                openings++;
                lexer->advance_htmlaskama(lexer,false);
            }
        }

        if (lexer->lookahead == '#') {
            lexer->advance_htmlaskama(lexer,false);
            if (lexer->lookahead == '}') {
                openings--;
                if (openings == 0) {
                    lexer->advance_htmlaskama(lexer, false);
                    lexer->result_symbol = TEMPLATE_COMMENT;
                    lexer->mark_end(lexer);
                    return true;
                }
            }
        }

        lexer->advance_htmlaskama(lexer, false);
    }

    return false;
}

/// https://github.com/tree-sitter/tree-sitter-html/blob/e4d834eb4918df01dcad5c27d1b15d56e3bd94cd/src/scanner.c#L112
static bool scan_comment(TSLexer *lexer) {
    if (lexer->lookahead != '-') {
        return false;
    }
    lexer->advance_htmlaskama(lexer, false);

    if (lexer->lookahead != '-') {
        return false;
    }
    lexer->advance_htmlaskama(lexer, false);

    unsigned dashes = 0;
    while (lexer->lookahead) {
        switch (lexer->lookahead) {
            case '-':
                ++dashes;
                break;
            case '>':
                if (dashes >= 2) {
                    lexer->result_symbol = HTML_COMMENT;
                    lexer->advance_htmlaskama(lexer, false);
                    lexer->mark_end(lexer);
                    return true;
                }
            default:
                dashes = 0;
        }
        lexer->advance_htmlaskama(lexer, false);
    }
    return false;
}

bool tree_sitter_htmlaskama_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
) {
    if (valid_symbols[EXPRESSION_FILTERS_START] && scan_expression_filters_start(lexer)) {
        return true;
    }
    if (valid_symbols[EXPRESSION_CONTENT_END] && scan_expression_content_end(lexer)) {
        return true;
    }
    if (valid_symbols[HTML_COMMENT] && scan_comment(lexer)){
        return true;
    }
    if (valid_symbols[TEMPLATE_COMMENT] && scan_template_comment(lexer)){
        return true;
    }
    if (valid_symbols[MACRO_ARGUMENT_END] && (scan_until_sequence(lexer, ","))){
        lexer->result_symbol = MACRO_ARGUMENT_END;
        skip_whitespace(lexer);
        return true;
    }
    if (valid_symbols[STATEMENT_CONTENT] && scan_until_sequence(lexer, "%}")) {
        lexer->result_symbol = STATEMENT_CONTENT;
        return true;
    }
    if (valid_symbols[EXPRESSION_CONTENT] && scan_until_sequence(lexer, "}}")) {
        lexer->result_symbol = EXPRESSION_CONTENT;
        return true;
    }
    return false;
}

// If we need to allocate/deallocate state, we do it in these functions.
void *tree_sitter_htmlaskama_external_scanner_create() { return NULL; }

void tree_sitter_htmlaskama_external_scanner_destroy(void *payload) {}

// If we have state, we should load and save it in these functions.
unsigned tree_sitter_htmlaskama_external_scanner_serialize(void *payload, char *buffer) {
    return 0;
}

void tree_sitter_htmlaskama_external_scanner_deserialize(void *payload, char *buffer, unsigned length) {}

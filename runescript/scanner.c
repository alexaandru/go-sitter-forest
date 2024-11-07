#include "parser.h"
#include "alloc.h"
#include "array.h"

enum TokenType {
    STRING_CHARS,
};

void *tree_sitter_runescript_external_scanner_create() { return NULL; }

void tree_sitter_runescript_external_scanner_destroy(void *p) {}

unsigned tree_sitter_runescript_external_scanner_serialize(void *payload, char *buffer) { return 0; }

void tree_sitter_runescript_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static inline void advance_runescript(TSLexer *lexer) { lexer->advance_runescript(lexer, false); }

static bool scan_string_chars(TSLexer *lexer) {
    lexer->result_symbol = STRING_CHARS;
    for (bool has_content = false;; has_content = true) {
        lexer->mark_end(lexer);
        switch (lexer->lookahead) {
            case '"':
            case '\\':
            case '<':
                return has_content;
            case '\0':
                return false;
            default:
                advance_runescript(lexer);
        }
    }
}

bool tree_sitter_runescript_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[STRING_CHARS]) {
        return scan_string_chars(lexer);
    }

    return false;
}

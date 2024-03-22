#include "parser.h"
#include <wctype.h>

enum TokenType {
    L,
    CLASS_IDENTIFIER,
};

void *tree_sitter_smali_external_scanner_create() { return NULL; }

void tree_sitter_smali_external_scanner_destroy(void *payload) {}

void tree_sitter_smali_external_scanner_reset(void *payload) {}

unsigned tree_sitter_smali_external_scanner_serialize(void *payload,
                                                      char *buffer) {
    return 0;
}

void tree_sitter_smali_external_scanner_deserialize(void       *payload,
                                                    const char *buffer,
                                                    unsigned    length) {}

static void advance_smali(TSLexer *lexer) { lexer->advance_smali(lexer, false); }

static void skip_smali(TSLexer *lexer) { lexer->advance_smali(lexer, true); }

bool tree_sitter_smali_external_scanner_scan(void *payload, TSLexer *lexer,
                                             const bool *valid_symbols) {
    if (valid_symbols[L]) {
        while (iswspace(lexer->lookahead)) {
            skip_smali(lexer);
        }

        if (lexer->lookahead == 'L') {
            lexer->result_symbol = L;
            advance_smali(lexer);
            return true;
        }
    }

    if (valid_symbols[CLASS_IDENTIFIER]) {
        // any alnum, stop at /
        lexer->result_symbol = CLASS_IDENTIFIER;
        while (iswalnum(lexer->lookahead) || lexer->lookahead == '_' ||
               lexer->lookahead == '-' || lexer->lookahead == '$') {
            advance_smali(lexer);
        }
        return true;
    }

    return false;
}

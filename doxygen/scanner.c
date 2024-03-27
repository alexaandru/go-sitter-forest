#include <ctype.h>
#include <stdio.h>
#include <wctype.h>

#include "parser.h"

enum TokenType {
    BRIEF_DESCRIPTION,
    CODE_BLOCK_START,
    CODE_BLOCK_LANGUAGE,
    CODE_BLOCK_CONTENT,
    CODE_BLOCK_END,
};

typedef struct {
    uint32_t codeblock_delimiter_length;
    uint32_t codeblock_start_column;
} Scanner;

static inline void advance_doxygen(TSLexer *lexer) { lexer->advance_doxygen(lexer, false); }

static inline void skip_doxygen(TSLexer *lexer) { lexer->advance_doxygen(lexer, true); }

/* #define advance_doxygen(lexer) \ */
/*     { \ */
/*         printf("advance %c, col %d, L%d\n", lexer->lookahead, \ */
/*                lexer->get_column(lexer), __LINE__); \ */
/*         lexer->advance_doxygen(lexer, false); \ */
/*     } */

unsigned tree_sitter_doxygen_external_scanner_serialize(void *payload,
                                                        char *buffer) {
    Scanner *scanner = (Scanner *)payload;

    if (scanner->codeblock_start_column > 255 ||
        scanner->codeblock_delimiter_length > 255) {
        return 0;
    }

    buffer[0] = (char)scanner->codeblock_delimiter_length;
    buffer[1] = (char)scanner->codeblock_start_column;
    return 2;
}

void tree_sitter_doxygen_external_scanner_deserialize(void *payload,
                                                      const char *buffer,
                                                      unsigned length) {
    Scanner *scanner = (Scanner *)payload;

    if (length == 2) {
        scanner->codeblock_delimiter_length = (uint32_t)buffer[0];
        scanner->codeblock_start_column = (uint32_t)buffer[1];
    } else if (length != 0 && length != 2) {
        fprintf(stderr,
                "tree-sitter-doxygen: Invalid buffer length %d! This should "
                "never happen\n",
                length);
        abort();
    }
}

bool tree_sitter_doxygen_external_scanner_scan(void *payload, TSLexer *lexer,
                                               const bool *valid_symbols) {
    Scanner *scanner = (Scanner *)payload;

    if (valid_symbols[BRIEF_DESCRIPTION] &&
        !valid_symbols[CODE_BLOCK_LANGUAGE]) {
        uint32_t column_start = 0;
        bool advanced_once = false;

        while ((iswspace(lexer->lookahead) || lexer->lookahead == '*') &&
               lexer->lookahead != '\n' && !lexer->eof(lexer)) {
            skip_doxygen(lexer);
        }

        if (lexer->lookahead == '\n' || lexer->eof(lexer)) {
            return false;
        }

        column_start = lexer->get_column(lexer);

    content:
        while (lexer->lookahead != '\n' && !lexer->eof(lexer)) {
            advanced_once = true;
            advance_doxygen(lexer);
        }

        if (lexer->eof(lexer)) {
            return false;
        }

        lexer->mark_end(lexer);
        advance_doxygen(lexer);

        // go past space, / and * to check next text's column
        while (lexer->lookahead != '\n' && !lexer->eof(lexer) &&
               (iswspace(lexer->lookahead) || lexer->lookahead == '/' ||
                lexer->lookahead == '*')) {
            advance_doxygen(lexer);
        }

        if (!lexer->eof(lexer) && lexer->get_column(lexer) == column_start) {
            goto content;
        } else if (advanced_once) {
            lexer->result_symbol = BRIEF_DESCRIPTION;
            return true;
        }

        return false;
    }

    if (valid_symbols[CODE_BLOCK_START]) {
        while (iswspace(lexer->lookahead) && !lexer->eof(lexer)) {
            skip_doxygen(lexer);
        }

        if (lexer->eof(lexer)) {
            return false;
        }

        if (lexer->lookahead == '`') {
            scanner->codeblock_start_column = lexer->get_column(lexer);
            advance_doxygen(lexer);
            scanner->codeblock_delimiter_length = 1;

            while (lexer->lookahead == '`') {
                advance_doxygen(lexer);
                scanner->codeblock_delimiter_length++;
            }
            if (isalpha(lexer->lookahead)) {
                lexer->mark_end(lexer);
                lexer->result_symbol = CODE_BLOCK_START;
                return true;
            }
        }

        return false;
    }

    if (valid_symbols[CODE_BLOCK_LANGUAGE] && isalnum(lexer->lookahead)) {
        while (isalnum(lexer->lookahead)) {
            advance_doxygen(lexer);
        }

        lexer->mark_end(lexer);

        while (iswspace(lexer->lookahead) && lexer->lookahead != '\n') {
            advance_doxygen(lexer);
        }

        lexer->result_symbol = CODE_BLOCK_LANGUAGE;
        return lexer->lookahead == '\n' || lexer->lookahead == '}';
    }

    if (valid_symbols[CODE_BLOCK_CONTENT]) {
        // optional language
        if (lexer->lookahead == '{') {
            return false;
        }

        // skip ws and newline before block
        while (iswspace(lexer->lookahead)) {
            skip_doxygen(lexer);
            if (lexer->lookahead == '\n') {
                break;
            }
        }

        while (lexer->lookahead != '`' && lexer->lookahead != '@' &&
               !lexer->eof(lexer)) {
            advance_doxygen(lexer);
        }

        if (lexer->eof(lexer)) {
            return false;
        }

        if (lexer->lookahead == '`' &&
            lexer->get_column(lexer) == scanner->codeblock_start_column) {
            lexer->mark_end(lexer);
            advance_doxygen(lexer);
            uint32_t col_count = 1;

            while (lexer->lookahead == '`') {
                advance_doxygen(lexer);
                col_count++;
            }

            if (col_count == scanner->codeblock_delimiter_length) {
                lexer->result_symbol = CODE_BLOCK_CONTENT;
                return true;
            }
        }

        if (lexer->lookahead == '@') {
            lexer->mark_end(lexer);
            advance_doxygen(lexer);
            const char *const remainder = "endcode";

            for (uint32_t i = 0; i < 7; i++) {
                if (lexer->lookahead != remainder[i]) {
                    return false;
                }

                advance_doxygen(lexer);
            }

            lexer->result_symbol = CODE_BLOCK_CONTENT;
            return true;
        }

        return false;
    }

    if (valid_symbols[CODE_BLOCK_END]) {
        if (lexer->lookahead == '`') {
            advance_doxygen(lexer);
            uint32_t col_count = 1;

            while (lexer->lookahead == '`') {
                advance_doxygen(lexer);
                col_count++;
            }

            if (col_count == scanner->codeblock_delimiter_length) {
                lexer->result_symbol = CODE_BLOCK_END;
                return true;
            }
        }

        return false;
    }

    return false;
}

void *tree_sitter_doxygen_external_scanner_create() {
    Scanner *scanner = (Scanner *)calloc(1, sizeof(Scanner));
    return scanner;
}

void tree_sitter_doxygen_external_scanner_destroy(void *payload) {
    Scanner *scanner = (Scanner *)payload;
    free(scanner);
}

#include "alloc.h"
#include "array.h"
#include "parser.h"

#include <string.h>
#include <wchar.h>
#include <wctype.h>

typedef enum {
    // IDENTIFIER,
    HEREDOC_START,
    HEREDOC_END,
    ERROR_SENTINEL,
} TokenType;

// typedef Array(char)    String;
typedef Array(int32_t) String32;

static inline bool string_eq(String32 *self, String32 *other) {
    if (self->size != other->size)
        return false;
    if (self->size == 0)
        return self->size == other->size;
    return memcmp(self->contents, other->contents, self->size * sizeof(self->contents[0])) == 0;
}

typedef struct {
    Array(String32) heredocs;
} Scanner;

typedef enum { ERROR, END } ScanContentResult;

static inline void reset_heredoc(String32 *heredoc) {
    array_delete(heredoc);
}

static inline void advance_jai(TSLexer *lexer) { if (!lexer->eof(lexer)) lexer->advance_jai(lexer, false); }
static inline void    skip_jai(TSLexer *lexer) { if (!lexer->eof(lexer)) lexer->advance_jai(lexer, true);  }

static inline bool starts_identifier(int32_t c)    { return iswalpha(c) || c == '_' || c >= 0x80; }
static inline bool continues_identifier(int32_t c) { return iswalnum(c) || c == '_' || c >= 0x80; }

static String32 scan_heredoc_word(TSLexer *lexer) {
    String32 result = (String32)array_new();

    while (continues_identifier(lexer->lookahead)) {
        array_push(&result, lexer->lookahead);
        advance_jai(lexer);
    }

    return result;
}

/*
static int check_for_keyword(String ident) {
    switch (ident.size) {
    case 2:
        if (strncmp(ident.contents, "if", 2) == 0) return 1;
        if (strncmp(ident.contents, "xx", 2) == 0) return 1;
        return 0;
    case 3:
        if (strncmp(ident.contents, "ifx", 3) == 0) return 1;
        if (strncmp(ident.contents, "for", 3) == 0) return 1;
        return 0;
    case 4:
        if (strncmp(ident.contents, "then", 4) == 0) return 1;
        if (strncmp(ident.contents, "else", 4) == 0) return 1;
        if (strncmp(ident.contents, "null", 4) == 0) return 1;
        if (strncmp(ident.contents, "case", 4) == 0) return 1;
        if (strncmp(ident.contents, "enum", 4) == 0) return 1;
        if (strncmp(ident.contents, "true", 4) == 0) return 1;
        if (strncmp(ident.contents, "cast", 4) == 0) return 1;
        return 0;
    case 5:
        if (strncmp(ident.contents, "while", 5) == 0) return 1;
        if (strncmp(ident.contents, "break", 5) == 0) return 1;
        if (strncmp(ident.contents, "using", 5) == 0) return 1;
        if (strncmp(ident.contents, "defer", 5) == 0) return 1;
        if (strncmp(ident.contents, "false", 5) == 0) return 1;
        if (strncmp(ident.contents, "union", 5) == 0) return 1;
        return 0;
    case 6:
        if (strncmp(ident.contents, "return", 6) == 0) return 1;
        if (strncmp(ident.contents, "struct", 6) == 0) return 1;
        if (strncmp(ident.contents, "remove", 6) == 0) return 1;
        if (strncmp(ident.contents, "inline", 6) == 0) return 1;
        return 0;
    case 7:
        if (strncmp(ident.contents, "size_of", 7) == 0) return 1;
        if (strncmp(ident.contents, "type_of", 7) == 0) return 1;
        if (strncmp(ident.contents, "code_of", 7) == 0) return 1;
        if (strncmp(ident.contents, "context", 7) == 0) return 1;
        return 0;
    case 8:
        if (strncmp(ident.contents, "continue", 8) == 0) return 1;
        if (strncmp(ident.contents, "operator", 8) == 0) return 1;
        return 0;
    case 9:
        if (strncmp(ident.contents, "type_info", 9) == 0) return 1;
        if (strncmp(ident.contents, "no_inline", 9) == 0) return 1;
        if (strncmp(ident.contents, "interface", 9) == 0) return 1;
        return 0;
    case 10:
        if (strncmp(ident.contents, "enum_flags", 10) == 0) return 1;
        return 0;
    case 11:
        if (strncmp(ident.contents, "is_constant", 11) == 0) return 1;
        return 0;
    case 12:
        if (strncmp(ident.contents, "push_context", 12) == 0) return 1;
        return 0;
    case 14:
        if (strncmp(ident.contents, "initializer_of", 14) == 0) return 1;
        return 0;
    default:
        return 0;
    }
    return 0;
}
*/

bool tree_sitter_jai_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    const bool is_error_recovery = valid_symbols[ERROR_SENTINEL];
    if (is_error_recovery)
        return false;

    lexer->mark_end(lexer);
/* 
    if (valid_symbols[IDENTIFIER]) {

        lexer->result_symbol = IDENTIFIER;
        while (iswspace(lexer->lookahead))
            skip_jai(lexer);

        if (starts_identifier(lexer->lookahead)) {
            String ident = (String)array_new();
            array_push(&ident, lexer->lookahead);

            advance_jai(lexer);
            while (1) {
                if (continues_identifier(lexer->lookahead)) {
                    array_push(&ident, lexer->lookahead);
                    advance_jai(lexer);
                    continue;
                } else if (lexer->lookahead == '\\') {
                    advance_jai(lexer);
                    while (iswspace(lexer->lookahead)) {
                        advance_jai(lexer);
                    }
                    continue;
                }
                break;
            }
            bool keyword = check_for_keyword(ident);
            array_delete(&ident);

            lexer->mark_end(lexer);
            return !keyword;
        }
        return false;
    }
*/

    Scanner *scanner = (Scanner *)payload;

    if (valid_symbols[HEREDOC_END]) {
        lexer->result_symbol = HEREDOC_END;
        if (scanner->heredocs.size == 0)
            return false;

        String32 heredoc = *array_back(&scanner->heredocs);
        while (iswspace(lexer->lookahead))
            skip_jai(lexer);

        String32 word = scan_heredoc_word(lexer);
        if (!string_eq(&word, &heredoc)) {
            array_delete(&word);
            return false;
        }
        array_delete(&word);

        lexer->mark_end(lexer);
        array_delete(&array_pop(&scanner->heredocs));
        return true;
    }

    if (valid_symbols[HEREDOC_START]) {
        lexer->result_symbol = HEREDOC_START;
        String32 heredoc = array_new();

        while (iswspace(lexer->lookahead))
            skip_jai(lexer);

        heredoc = scan_heredoc_word(lexer);
        if (heredoc.size == 0) {
            array_delete(&heredoc);
            return false;
        }
        lexer->mark_end(lexer);

        array_push(&scanner->heredocs, heredoc);
        return true;
    }

    return false;
}


void *tree_sitter_jai_external_scanner_create() {
    Scanner *scanner = ts_calloc(1, sizeof(Scanner));
    array_init(&scanner->heredocs);
    return scanner;
}

unsigned tree_sitter_jai_external_scanner_serialize(void *payload, char *buffer) {
    Scanner *scanner = (Scanner *)payload;
    unsigned size = 0;

    buffer[size++] = (char)scanner->heredocs.size;
    for (unsigned j = 0; j < scanner->heredocs.size; j++) {
        String32 *heredoc = &scanner->heredocs.contents[j];
        unsigned word_size = heredoc->size * sizeof(heredoc->contents[0]);

        if (size + 5 + word_size >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE)
            return 0;

        memcpy(&buffer[size], &heredoc->size, sizeof(int32_t));
        size += sizeof(int32_t);
        if (heredoc->size > 0) {
            memcpy(&buffer[size], heredoc->contents, word_size);
            size += word_size;
        }
    }

    return size;
}


void tree_sitter_jai_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    Scanner *scanner = (Scanner *)payload;
    unsigned size = 0;
    for (uint32_t i = 0; i < scanner->heredocs.size; i++)
        reset_heredoc(array_get(&scanner->heredocs, i));

    if (length == 0)
        return;

    uint8_t open_heredoc_count = buffer[size++];
    for (unsigned i = 0; i < open_heredoc_count; i++) {
        String32 *heredoc = NULL;
        if (i < scanner->heredocs.size) {
            heredoc = array_get(&scanner->heredocs, i);
        } else {
            String32 new_heredoc = array_new();
            array_push(&scanner->heredocs, new_heredoc);
            heredoc = array_back(&scanner->heredocs);
        }

        memcpy(&heredoc->size, &buffer[size], sizeof(int32_t));
        size += sizeof(int32_t);
        unsigned word_size = heredoc->size * sizeof(heredoc->contents[0]);
        if (word_size > 0) {
            array_reserve(heredoc, heredoc->size);
            memcpy(heredoc->contents, &buffer[size], word_size);
            size += word_size;
        }
    }

    assert(size == length);
}

void tree_sitter_jai_external_scanner_destroy(void *payload) {
    Scanner *scanner = (Scanner *)payload;
    for (size_t i = 0; i < scanner->heredocs.size; i++) {
        array_delete(&scanner->heredocs.contents[i]);
    }
    array_delete(&scanner->heredocs);
    ts_free(scanner);
}


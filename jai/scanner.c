#include "alloc.h"
#include "array.h"
#include "parser.h"

#include <string.h>
#include <wchar.h>
#include <wctype.h>

typedef enum {
    HEREDOC_START,
    HEREDOC_END,

    ERROR_SENTINEL,
} TokenType;

typedef Array(int32_t) String;

static inline bool string_eq(String *self, String *other) {
    if (self->size != other->size)
        return false;
    if (self->size == 0)
        return self->size == other->size;
    return memcmp(self->contents, other->contents, self->size * sizeof(self->contents[0])) == 0;
}

typedef struct {
    Array(String) heredocs;
} Scanner;

typedef enum { ERROR, END } ScanContentResult;

static inline void reset_heredoc(String *heredoc) {
    array_delete(heredoc);
}

static inline void advance_jai(TSLexer *lexer) { lexer->advance_jai(lexer, false); }
static inline void    skip_jai(TSLexer *lexer) { lexer->advance_jai(lexer, true); }

static unsigned serialize_jai(Scanner *scanner, char *buffer) {
    unsigned size = 0;

    buffer[size++] = (char)scanner->heredocs.size;
    for (unsigned j = 0; j < scanner->heredocs.size; j++) {
        String *heredoc = &scanner->heredocs.contents[j];
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

static void deserialize_jai(Scanner *scanner, const char *buffer, unsigned length) {
    unsigned size = 0;
    for (uint32_t i = 0; i < scanner->heredocs.size; i++)
        reset_heredoc(array_get(&scanner->heredocs, i));

    if (length == 0)
        return;

    uint8_t open_heredoc_count = buffer[size++];
    for (unsigned i = 0; i < open_heredoc_count; i++) {
        String *heredoc = NULL;
        if (i < scanner->heredocs.size) {
            heredoc = array_get(&scanner->heredocs, i);
        } else {
            String new_heredoc = array_new();
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

static inline bool is_valid_name_char(TSLexer *lexer) {
    return iswalnum(lexer->lookahead) || lexer->lookahead == '_' || lexer->lookahead >= 0x80;
}

static String scan_heredoc_word(TSLexer *lexer) {
    String result = (String)array_new();

    while (is_valid_name_char(lexer)) {
        array_push(&result, lexer->lookahead);
        advance_jai(lexer);
    }

    return result;
}

static bool scan_jai(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
    const bool is_error_recovery = valid_symbols[ERROR_SENTINEL];
    if (is_error_recovery)
        return false;

    lexer->mark_end(lexer);

    if (valid_symbols[HEREDOC_END]) {
        lexer->result_symbol = HEREDOC_END;
        if (scanner->heredocs.size == 0)
            return false;

        String heredoc = *array_back(&scanner->heredocs);
        while (iswspace(lexer->lookahead))
            skip_jai(lexer);

        String word = scan_heredoc_word(lexer);
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
        String heredoc = array_new();

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
    return serialize_jai(scanner, buffer);
}
void tree_sitter_jai_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    Scanner *scanner = (Scanner *)payload;
    deserialize_jai(scanner, buffer, length);
}
bool tree_sitter_jai_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    Scanner *scanner = (Scanner *)payload;
    return scan_jai(scanner, lexer, valid_symbols);

}
void tree_sitter_jai_external_scanner_destroy(void *payload) {
    Scanner *scanner = (Scanner *)payload;
    for (size_t i = 0; i < scanner->heredocs.size; i++) {
        array_delete(&scanner->heredocs.contents[i]);
    }
    array_delete(&scanner->heredocs);
    ts_free(scanner);
}


#include "parser.h"

enum TokenType {
    END_OF_FILE,
    INTEGER_RANGE_START,
    KEY_NAME_TRIMMED,
};

static inline bool is_digit_editorconfig(int32_t character)
{
    return character >= '0' && character <= '9';
}

static inline bool is_space_editorconfig(int32_t character)
{
    return character == ' ' || character == '\t';
}

static inline bool is_newline_editorconfig(int32_t character)
{
    return character == '\n' || character == '\r';
}

/// Parse the name of the key in a pair, without including trainling white space.
/// See 'Key-Value Pair' in: https://spec.editorconfig.org/#file-format
static inline bool parse_key_name(TSLexer *lexer)
{
    while (is_space_editorconfig(lexer->lookahead)) {
        lexer->advance_editorconfig(lexer, true);
    }

    if (is_newline_editorconfig(lexer->lookahead) || lexer->eof(lexer)) {
        return false;
    }

    // Characters not allowed as the first character of the
    // key since they correspond to different tokens
    switch (lexer->lookahead) {
        case ';': // comment
        case '#':
        case '[': // section header
        case '=': // this would mean an 'empty key', which is not allowed
            return false;
        default:
            break;
    }

    lexer->advance_editorconfig(lexer, false);
    lexer->mark_end(lexer);

    while (lexer->lookahead != '=') {
        if (is_newline_editorconfig(lexer->lookahead) || lexer->eof(lexer)) {
            // NOTE: Tecnically is not valid since there is be no value
            // on the right side, but it gives better error recovery
            lexer->result_symbol = KEY_NAME_TRIMMED;
            return true;
        }
        if (is_space_editorconfig(lexer->lookahead)) {
            lexer->advance_editorconfig(lexer, false);
        } else {
            lexer->advance_editorconfig(lexer, false);
            lexer->mark_end(lexer);
        }
    }

    lexer->result_symbol = KEY_NAME_TRIMMED;
    return true;
}

static inline bool parse_integer_range(TSLexer *lexer)
{
    int32_t previous = lexer->lookahead;
    lexer->advance_editorconfig(lexer, false);

    if (!is_digit_editorconfig(previous) && !(previous == '-' && is_digit_editorconfig(lexer->lookahead))) {
        return false;
    }

    while (is_digit_editorconfig(lexer->lookahead)) {
        lexer->advance_editorconfig(lexer, false);
    }
    // Integer ends here, but keep parsing to see if its a valid integer range
    lexer->mark_end(lexer);

    previous = lexer->lookahead;
    lexer->advance_editorconfig(lexer, false);

    if (!(previous == '.' && lexer->lookahead == '.')) {
        return false;
    }

    lexer->result_symbol = INTEGER_RANGE_START;
    return true;
}

bool tree_sitter_editorconfig_external_scanner_scan(
    void *payload, TSLexer *lexer, const bool *valid_symbols)
{
    if (valid_symbols[END_OF_FILE] && valid_symbols[KEY_NAME_TRIMMED] &&
        valid_symbols[INTEGER_RANGE_START]) {
        // Tree-sitter is in error correction mode, don't parse anything
        return false;
    }

    if (valid_symbols[END_OF_FILE] && lexer->eof(lexer)) {
        lexer->advance_editorconfig(lexer, false);
        lexer->mark_end(lexer);
        lexer->result_symbol = END_OF_FILE;
        return true;
    }

    if (valid_symbols[KEY_NAME_TRIMMED]) {
        return parse_key_name(lexer);
    }

    const int32_t next_char = lexer->lookahead;

    if (valid_symbols[INTEGER_RANGE_START] && (next_char == '-' || is_digit_editorconfig(next_char))) {
        return parse_integer_range(lexer);
    }

    return false;
}

void *tree_sitter_editorconfig_external_scanner_create(void)
{
    return NULL;
}

void tree_sitter_editorconfig_external_scanner_destroy(void *payload)
{
    /* NOOP */
}

unsigned tree_sitter_editorconfig_external_scanner_serialize(void *payload, char *buffer)
{
    return 0;
}

void tree_sitter_editorconfig_external_scanner_deserialize(
    void *payload, const char *buffer, unsigned length)
{
    /* NOOP */
}

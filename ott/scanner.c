#include "parser.h"
#include <ctype.h>

enum TokenType {
    LINE_CONT,
    EOF,
    HOM_STRING,
    HOM_INNER_STRING_INIT,
    HOM_INNER_STRING_LEFT,
    HOM_INNER_STRING_RIGHT,
    HOM_INNER_COMP_LEFT,
    ERROR_SENTINEL
};

typedef struct {
    uint32_t left;
    uint32_t right;
    bool is_dots;
} delim_exp;

const delim_exp HOM_INNER_CLOSE = {.left = ']', .right = ']', .is_dots = false};
const delim_exp HOM_INNER_OPEN  = {.left = '[', .right = '[', .is_dots = false};
const delim_exp HOM_CLOSE       = {.left = '}', .right = '}', .is_dots = false};
const delim_exp COMP_OPEN       = {.left = '<', .right = '/', .is_dots = false};
const delim_exp COMP_CLOSE      = {.left = '/', .right = '>', .is_dots = false};
const delim_exp COMP_MIDDLE     = {.left = '/', .right = '/', .is_dots = false};
const delim_exp DOTS            = {.left = '.', .right = '.', .is_dots = true};

void *tree_sitter_ott_external_scanner_create(void) {
    return NULL;
}

void tree_sitter_ott_external_scanner_destroy(void *payload) {
    // NOTE: if `create` returns NULL, this is a no-op.
}

unsigned tree_sitter_ott_external_scanner_serialize(
    void *payload,
    char *buffer
) {
    // NOTE: This function should copy the complete state of the
    // scanner into the byte buffer and return the number of
    // bytes written.
    return 0;
}

void tree_sitter_ott_external_scanner_deserialize(
    void *payload,
    const char *buffer,
    unsigned length
) {
    // NOTE: This function should restore the state
    // of the scanner based on the bytes that were previously
    // written by the serialize function.
}

static bool scan_line_cont(TSLexer *lexer) {
    while(
        lexer->lookahead != '\n'
        && isspace(lexer->lookahead)
    ) {
        lexer->advance_ott(lexer, true);
    }

    if (lexer->lookahead == '\n') { return false; }
    return true;
}

static bool scan_eof(TSLexer *lexer) {
    return lexer->eof(lexer);
}

static bool _advance_if_any_valid(
    TSLexer *lexer,
    int array_size,
    const bool array[array_size]
) {
    for (int i = 0; i < array_size; ++i) {
        if (array[i]) {
            lexer->advance_ott(lexer, false);
            return true;
        }
    }
    return false;
}

static bool _is_delim_still_valid(
    uint32_t lookahead,
    delim_exp delim,
    int match_id
) {
    if (match_id == 0 && lookahead != delim.left) { return false; }
    if (match_id == 1 && lookahead != delim.right) { return false; }
    if (match_id > 1) { return false; }
    return  true;
}

static bool _is_delim_matched(
    TSLexer *lexer,
    delim_exp delim,
    int match_id,
    bool is_valid
) {
    if (match_id >= 1 && is_valid) {
        if (delim.is_dots) {
            // eat the remaining dots
            int count = 1;
            while (lexer->lookahead == '.') { lexer->advance_ott(lexer, false); ++count; }
            return count <= 4;
        }
        return true;
    }
    return false;
}

enum TryMatchResult {
    FAILED_WITHOUT_ADVANCING,
    FAILED_AFTER_ADVANCING,
    FOUND_MATCH,
};
static enum TryMatchResult _try_match(
    TSLexer *lexer,
    int num_delims,
    delim_exp delims[num_delims]
) {
    bool valid_delims[num_delims];
    for (int i = 0; i < num_delims; ++i) {
        valid_delims[i] = true;
    }

    int match_id = 0;
    do {
        for (int delim_id = 0; delim_id < num_delims; ++delim_id) {
            if (!valid_delims[delim_id]) {
                continue;
            }
            if (!_is_delim_still_valid(lexer->lookahead, delims[delim_id], match_id)) {
                valid_delims[delim_id] = false;
            }
            if (_is_delim_matched(lexer, delims[delim_id], match_id, valid_delims[delim_id])) {
                return FOUND_MATCH;
            }
        }
        ++match_id;
    } while (_advance_if_any_valid(lexer, num_delims, valid_delims));

    if (match_id > 1) {
        return FAILED_AFTER_ADVANCING;
    }
    return FAILED_WITHOUT_ADVANCING;
}

static bool scan_string(
    TSLexer *lexer,
    int num_avoid_delims,
    delim_exp avoid_delims[num_avoid_delims],
    bool avoid_whitespace
) {
    if (avoid_whitespace) {
        while (isspace(lexer->lookahead)) {
            lexer->advance_ott(lexer, true);
        }
    }
    bool has_content = false;
    enum TryMatchResult try_match_result;
    while(
        ((try_match_result = _try_match(lexer, num_avoid_delims, avoid_delims)) != FOUND_MATCH)
        && !(lexer->eof(lexer))
        && !(avoid_whitespace && isspace(lexer->lookahead))
    ) {
        if (try_match_result == FAILED_WITHOUT_ADVANCING) {
            lexer->advance_ott(lexer, false);
        }
        lexer->mark_end(lexer);
        has_content = true;
    }
    return has_content;
}

bool tree_sitter_ott_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
) {
    if (valid_symbols[ERROR_SENTINEL]) { return false; }
    if (valid_symbols[LINE_CONT]) {
        lexer->result_symbol = LINE_CONT;
        return scan_line_cont(lexer);
    }
    if (valid_symbols[EOF]) {
        lexer->result_symbol = EOF;
        return scan_eof(lexer);
    }
    if (valid_symbols[HOM_STRING]) {
        lexer->result_symbol = HOM_STRING;
        delim_exp delims[] = { HOM_CLOSE, HOM_INNER_OPEN, DOTS };
        return scan_string(lexer, 5, delims, false);
    }
    if (valid_symbols[HOM_INNER_STRING_RIGHT]) {
        lexer->result_symbol = HOM_INNER_STRING_RIGHT;
        delim_exp delims[] = { HOM_INNER_CLOSE };
        return scan_string(lexer, 1, delims, true);
    }
    if (valid_symbols[HOM_INNER_STRING_LEFT]) {
        lexer->result_symbol = HOM_INNER_STRING_LEFT;
        delim_exp delims[] = { HOM_INNER_CLOSE, DOTS };
        return scan_string(lexer, 4, delims, true);
    }
    if (valid_symbols[HOM_INNER_STRING_INIT]) {
        lexer->result_symbol = HOM_INNER_STRING_INIT;
        delim_exp delims[] = { COMP_OPEN, HOM_INNER_CLOSE, DOTS };
        return scan_string(lexer, 5, delims, true);
    }
    if (valid_symbols[HOM_INNER_COMP_LEFT]) {
        lexer->result_symbol = HOM_INNER_COMP_LEFT;
        delim_exp delims[] = { COMP_MIDDLE };
        return scan_string(lexer, 1, delims, false);
    }
    return false;
}

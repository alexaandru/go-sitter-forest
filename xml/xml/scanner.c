#include "scanner.h"

#include <assert.h>
#include <string.h>

/// The default capacity of strings
#define STRING_CAP 16

/// Return the maximum of two numbers
#define MAX(a, b) ((a) > (b) ? (a) : (b))

/// Free a container's data field
#define FREE_DATA(container) \
    do { \
        if ((container)->data != NULL) { \
            free((container)->data); \
            (container)->data = NULL; \
        } \
    } while (0)

typedef struct {
    uint32_t len;
    uint32_t cap;
    char *data;
} String;

typedef struct {
    uint32_t len;
    uint32_t cap;
    String *data;
} Vector;

/// Create a new String instance
#define String() { .len = 0, .cap = STRING_CAP, .data = calloc(STRING_CAP + 1, sizeof(char)) }

/// Resize a vector to the given capacity
static inline void vec_resize(Vector *vec, uint32_t cap) {
    if (cap > vec->cap && cap > 0) {
        void *tmp = realloc(vec->data, cap * sizeof *vec->data);
        assert(tmp != NULL);
        vec->data = tmp;
        vec->cap = cap;
    }
}

/// Push data to a vector
static inline void vec_push(Vector *vec, String data) {
    if (vec->cap == vec->len)
        vec_resize(vec, MAX(STRING_CAP, vec->len << 1));
    vec->data[vec->len++] = data;
}

/// Return the last element of a vector
static inline String *vec_tail(Vector *vec) {
    return &vec->data[vec->len - 1];
}

/// Remove the last element of a vector
static inline void vec_pop(Vector *vec) {
    FREE_DATA(vec_tail(vec));
    vec->len -= 1;
}

/// Clear the data of a vector
static inline void vec_clear(Vector *vec) {
    for (uint32_t i = 0; i < vec->len; ++i) {
        FREE_DATA(&vec->data[i]);
    }
    vec->len = 0;
}

/// Push a character to a string
static inline void string_push(String *string, char data) {
    if (string->cap == string->len) {
        uint32_t cap = MAX(STRING_CAP, string->len << 1);
        void *tmp = realloc(string->data, (cap + 1) * sizeof *string->data);
        assert(tmp != NULL);
        string->data = (char *)tmp;
        memset(string->data + string->len, 0, (cap + 1 - string->len) * sizeof *string->data);
        string->cap = cap;
    }
    string->data[string->len++] = data;
}

static String scan_tag_name(TSLexer *lexer) {
    String tag_name = String();
    if (is_valid_name_start_char(lexer->lookahead)) {
        string_push(&tag_name, (char)lexer->lookahead);
        advance(lexer);
    }
    while (is_valid_name_char(lexer->lookahead)) {
        string_push(&tag_name, (char)lexer->lookahead);
        advance(lexer);
    }
    return tag_name;
}

static bool scan_start_tag_name(Vector *tags, TSLexer *lexer) {
    String tag = scan_tag_name(lexer);
    if (tag.len == 0) {
        FREE_DATA(&tag);
        return false;
    }

    lexer->result_symbol = START_TAG_NAME;
    vec_push(tags, tag);
    return true;
}

static bool scan_end_tag_name(Vector *tags, TSLexer *lexer) {
    String tag_name = scan_tag_name(lexer);
    if (tag_name.len == 0) {
        FREE_DATA(&tag_name);
        return false;
    }
    if (tags->len > 0 && strcmp(vec_tail(tags)->data, tag_name.data) == 0) {
        vec_pop(tags);
        lexer->result_symbol = END_TAG_NAME;
    } else {
        lexer->result_symbol = ERRONEOUS_END_NAME;
    }
    FREE_DATA(&tag_name);
    return true;
}

static bool scan_self_closing_tag_delimiter(Vector *tags, TSLexer *lexer) {
    advance(lexer);
    if (lexer->lookahead == '>') {
        advance(lexer);
        if (tags->len > 0) {
            vec_pop(tags);
            lexer->result_symbol = SELF_CLOSING_TAG_DELIMITER;
        }
        return true;
    }
    return false;
}

/// Check if the lexer is in error recovery mode
static inline bool in_error_recovery(const bool *valid_symbols) {
    return valid_symbols[PI_TARGET] && valid_symbols[PI_CONTENT] && valid_symbols[COMMENT] &&
           valid_symbols[CHAR_DATA] && valid_symbols[CDATA];
}

/// Scan for a CharData node
static bool scan_char_data(TSLexer *lexer) {
    bool advanced_once = false;

    while (!lexer->eof(lexer) && lexer->lookahead != '<' && lexer->lookahead != '&') {
        if (lexer->lookahead == ']') {
            lexer->mark_end(lexer);
            advance(lexer);
            if (lexer->lookahead == ']') {
                advance(lexer);
                if (lexer->lookahead == '>') {
                    advance(lexer);
                    if (advanced_once) {
                        lexer->result_symbol = CHAR_DATA;
                        return false;
                    }
                }
            }
        }
        advanced_once = true;
        advance(lexer);
    }

    if (advanced_once) {
        lexer->mark_end(lexer);
        lexer->result_symbol = CHAR_DATA;
        return true;
    }
    return false;
}

/// Scan for a CData node
static bool scan_cdata(TSLexer *lexer) {
    bool advanced_once = false;

    while (!lexer->eof(lexer)) {
        if (lexer->lookahead == ']') {
            lexer->mark_end(lexer);
            advance(lexer);
            if (lexer->lookahead == ']') {
                advance(lexer);
                if (lexer->lookahead == '>' && advanced_once) {
                    lexer->result_symbol = CDATA;
                    return true;
                }
            }
        }
        advanced_once = true;
        advance(lexer);
    }

    return false;
}

bool tree_sitter_xml_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    Vector *tags = (Vector *)payload;

    if (in_error_recovery(valid_symbols))
        return false;

    if (valid_symbols[PI_TARGET])
        return scan_pi_target(lexer, valid_symbols);

    if (valid_symbols[PI_CONTENT])
        return scan_pi_content(lexer);

    if (valid_symbols[CHAR_DATA] && scan_char_data(lexer))
        return true;

    if (valid_symbols[CDATA] && scan_cdata(lexer))
        return true;

    switch (lexer->lookahead) {
        case '<':
            lexer->mark_end(lexer);
            advance(lexer);
            if (lexer->lookahead == '!') {
                advance(lexer);
                return scan_comment(lexer);
            }
            break;
        case '/':
            if (valid_symbols[SELF_CLOSING_TAG_DELIMITER])
                return scan_self_closing_tag_delimiter(tags, lexer);
            break;
        case '\0':
            break;
        default:
            if (valid_symbols[START_TAG_NAME])
                return scan_start_tag_name(tags, lexer);
            if (valid_symbols[END_TAG_NAME])
                return scan_end_tag_name(tags, lexer);
    }

    return false;
}

void *tree_sitter_xml_external_scanner_create() {
    return calloc(1, sizeof(Vector));
}

void tree_sitter_xml_external_scanner_destroy(void *payload) {
    Vector *tags = (Vector *)payload;
    for (uint32_t i = 0; i < tags->len; ++i) {
        FREE_DATA(&tags->data[i]);
    }
    FREE_DATA(tags);
}

unsigned tree_sitter_xml_external_scanner_serialize(void *payload, char *buffer) {
    Vector *tags = (Vector *)payload;
    uint32_t tag_count = tags->len > UINT16_MAX ? UINT16_MAX : tags->len;
    uint32_t serialized_tag_count = 0, size = sizeof tag_count;

    memcpy(&buffer[size], &tag_count, size);
    size += sizeof tag_count;

    for (; serialized_tag_count < tag_count; ++serialized_tag_count) {
        String tag = tags->data[serialized_tag_count];
        uint32_t name_length = tag.len;
        if (name_length > UINT8_MAX) {
            name_length = UINT8_MAX;
        }
        if (size + 2 + name_length >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
            break;
        }
        buffer[size++] = (char)name_length;
        strncpy(&buffer[size], tag.data, name_length);
        size += name_length;
    }

    memcpy(&buffer[0], &serialized_tag_count, sizeof serialized_tag_count);
    return size;
}

void tree_sitter_xml_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
    Vector *tags = (Vector *)payload;
    vec_clear(tags);

    if (length > 0) {
        uint32_t size = 0, tag_count = 0, serialized_tag_count = 0;

        memcpy(&serialized_tag_count, &buffer[size], sizeof serialized_tag_count);
        size += sizeof serialized_tag_count;

        memcpy(&tag_count, &buffer[size], sizeof tag_count);
        size += sizeof tag_count;

        vec_resize(tags, tag_count);
        if (tag_count > 0) {
            uint32_t iter = 0;
            for (; iter < serialized_tag_count; ++iter) {
                String tag = tags->data[iter];
                tag.len = tag.cap = (unsigned)buffer[size++];
                tag.data = (char *)calloc(1, (tag.len + 1) * sizeof(char));
                strncpy(tag.data, &buffer[size], tag.len);
                size += tag.len;
                vec_push(tags, tag);
            }
            // add zero tags if we didn't read enough, this is because the
            // buffer had no more room but we held more tags.
            for (; iter < tag_count; ++iter) {
                String tag = String();
                vec_push(tags, tag);
            }
        }
    }
}

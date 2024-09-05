#include "parser.h"
#include "alloc.h"
#include "array.h"

enum TokenType {
    END_COMMENT,
    ERROR_SENTINEL
};

void *tree_sitter_simula_external_scanner_create(void) {
    // noop
    return NULL;
}

void tree_sitter_simula_external_scanner_destroy(void *payload) {
// noop
}

unsigned tree_sitter_simula_external_scanner_serialize(
  void *payload,
  char *buffer
) {
    // noop
  return 0;
}

void tree_sitter_simula_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {
    // noop
}

static inline bool is_whitespace(char c) {
    return c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v';
}

static inline void advance_simula(TSLexer *lexer) {    
    lexer->advance_simula(lexer, false);
}

static inline void mark_end(TSLexer *lexer) {
    lexer->mark_end(lexer);
}

static inline char lowercase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

static inline bool is_non_word(char c) {
    // It should not be [A-Za-z0-9_]
    return !(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z') && !(c >= '0' && c <= '9') && c != '_';
}

typedef Array(char) str;

static inline bool is_terminal(str *word) {
    // check if it's either end, else, when, or otherwise
    char *stop_at[] = {
        "end",
        "else",
        "when",
        "otherwise",
    };
    int word_lengths[] = {3, 4, 4, 9};
    for (int i = 0; i < 4; i++) {
        if (word->size == word_lengths[i]) {
            bool is_match = true;
            for (int j = 0; j < word_lengths[i]; j++) {
                char lowercased = lowercase(*array_get(word, j));
                if (lowercased != stop_at[i][j]) {
                    is_match = false;
                    break;
                }
            }
            if (is_match) {
                return true;
            }
        }
    }
    return false;
}

bool tree_sitter_simula_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
    if (valid_symbols[ERROR_SENTINEL]) {
        // In here, tree-sitter is in error correction mode. We let tree-sitter guess as good as
        // it can, but whatever the user has mistyped, it probably wasn't an end-comment.
        // So we just always return false here.
        return false;
    }
    if (valid_symbols[END_COMMENT]) {
        // 1.8.1 End comment

        // This function needs multi-character lookahead.
        // As recommended by the tree-sitter documentation,
        // we mark_end() right away, to disable "auto-marking"
        // behavior.
        mark_end(lexer);

        // We keep track of whether we've read actual non-whitespace content.
        // The reason is so that we don't want to interpret pure whitespace as an end-comment token.
        // (for a cleaner-looking syntax tree.)
        bool has_read_content = false;

        while(!lexer->eof(lexer)) {
            // Read the next word
            str next_word = array_new();
            bool is_empty_word = true;
            while (!lexer->eof(lexer) && !is_non_word(lexer->lookahead)) {
                is_empty_word = false;
                array_push(&next_word, lexer->lookahead);
                advance_simula(lexer);
            }

            bool terminal = is_terminal(&next_word);

            // Garbage collect the word
            array_delete(&next_word);

            if (terminal) {
                if (has_read_content) {
                    lexer->result_symbol = END_COMMENT;
                    return true;
                } else {
                    // This is valid syntax - but we don't interpret
                    // the pure whitespace as a comment.
                    return false;
                }
            } else {
                mark_end(lexer);

                has_read_content = has_read_content || !is_empty_word;
                
                // skip the non-word characters
                while (!lexer->eof(lexer) && is_non_word(lexer->lookahead)) {
                    // handle semicolon
                    if (lexer->lookahead == ';') {
                        if (has_read_content) {
                            lexer->result_symbol = END_COMMENT;
                            return true;
                        } else {
                            // This is valid syntax - but we don't interpret
                            // the pure whitespace as a comment.
                            return false;
                        }
                    }

                    has_read_content = has_read_content || !is_whitespace(lexer->lookahead);
                    
                    advance_simula(lexer);
                    mark_end(lexer);
                }
            }
        }

        mark_end(lexer);

        if (has_read_content) {
            lexer->result_symbol = END_COMMENT;
            return true;
        } else {
            return false;
        }
    } else {
        // should be unreachable. This scanner should not be invoked if we're
        // not looking for any of the "supported" tokens.
        return false;
    }
}

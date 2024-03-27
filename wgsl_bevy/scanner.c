#include "parser.h"
#include <wctype.h>

enum TokenType {
	BLOCK_COMMENT
};

void *tree_sitter_wgsl_bevy_external_scanner_create() {
	return NULL;
}
void tree_sitter_wgsl_bevy_external_scanner_destroy(void *p) {}
void tree_sitter_wgsl_bevy_external_scanner_reset(void *p) {}
unsigned int tree_sitter_wgsl_bevy_external_scanner_serialize(void *p, char *buffer) {
	return 0;
}
void tree_sitter_wgsl_bevy_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance_wgsl_bevy(TSLexer *lexer) {
	lexer->advance_wgsl_bevy(lexer, false);
}

static bool at_eof(TSLexer *lexer) {
	return lexer->eof(lexer);
}

// based on https://github.com/tree-sitter/tree-sitter-rust/blob/f7fb205c424b0962de59b26b931fe484e1262b35/src/scanner.c
bool tree_sitter_wgsl_bevy_external_scanner_scan(
	void *payload,
	TSLexer *lexer,
	const bool *valid_symbols
) {
	while (iswspace(lexer->lookahead)) {
		lexer->advance_wgsl_bevy(lexer, true);
	}

	if (lexer->lookahead != '/') {
		return false;
	}
	advance_wgsl_bevy(lexer);

	if (lexer->lookahead != '*') {
		return false;
	}
	advance_wgsl_bevy(lexer);

	unsigned int comment_depth = 1;
	while (true) {
		if (lexer->lookahead == '/') {
			advance_wgsl_bevy(lexer);

			if (lexer->lookahead == '*') {
				advance_wgsl_bevy(lexer);
				comment_depth += 1;
			}
		} else if (lexer->lookahead == '*') {
			advance_wgsl_bevy(lexer);

			if (lexer->lookahead == '/') {
				advance_wgsl_bevy(lexer);
				comment_depth -= 1;
				
				if (comment_depth == 0) {
					lexer->result_symbol = BLOCK_COMMENT;
					return true;
				}
			}
		} else if (at_eof(lexer)) {
			return false;
		} else {
			advance_wgsl_bevy(lexer);
		}
	}
}

#include "parser.h"
#include <stdint.h>
#include <stdlib.h>
#include <wctype.h>
#include <stdio.h>

typedef uint32_t uchar;

typedef enum TokenType {
	// Reader Macros
	TK_HASHFN,
	TK_QUOTE,
	TK_QUASI_QUOTE,
	TK_UNQUOTE,
	TK_READER_MACRO_COUNT,

	TK_COLON_STRING_START_MARK,
	TK_COLON_STRING_END_MARK,

	TK_SHEBANG,

	TK_COUNT,
} TokenType;

// SAFETY: Make sure that these values are synced with all
// possible reader macro tokens.
static const uchar READER_MACRO_CHARS[TK_READER_MACRO_COUNT] = {
	[TK_HASHFN] = '#',
	[TK_QUOTE] = '\'',
	[TK_QUASI_QUOTE] = '`',
	[TK_UNQUOTE] = ',',
};

inline static bool in_error_recovery(const bool *valid_symbols) {
	return valid_symbols[TK_COUNT];
}

inline static bool is_close_bracket(const uchar ch) {
	switch (ch) {
		case ')':
		case '}':
		case ']':
			return true;
	}
	return false;
}

// SAFETY: Must only contain boolean values
typedef enum ScanResult {
	// Scanning should be stopped
	SCAN_STOP = false,
	// A particular token did not scan successfuly
	SCAN_FAILURE = false,
	// Token scanned successfuly
	SCAN_SUCCESS = true,
} ScanResult;

static ScanResult scan_shebang(TSLexer *lexer, bool * const skipped_hashfn) {
	lexer->mark_end(lexer);

	if (lexer->lookahead != '#') {
		return SCAN_FAILURE;
	}
	*skipped_hashfn = true;
	lexer->advance_fennel(lexer, false);

	if (lexer->lookahead != '!') {
		return SCAN_FAILURE;
	}
	*skipped_hashfn = false;
	lexer->advance_fennel(lexer, false);

	while (lexer->lookahead != '\n' && !lexer->eof(lexer)) {
		lexer->advance_fennel(lexer, false);
	}
	lexer->mark_end(lexer);
	lexer->result_symbol = TK_SHEBANG;
	return SCAN_SUCCESS;
}

static ScanResult scan_reader_macro(TSLexer *lexer, const bool skipped_hashfn) {
	bool reader_macro_matched = false;
	TokenType reader_macro;

	if (skipped_hashfn) {
		reader_macro_matched = true;
		reader_macro = TK_HASHFN;
	} else {
		for (size_t tk = 0; tk < TK_READER_MACRO_COUNT; tk++) {
			if (lexer->lookahead == READER_MACRO_CHARS[tk]) {
				reader_macro_matched = true;
				reader_macro = tk;
				break;
			}
		}
	}

	if (!reader_macro_matched) {
		return SCAN_FAILURE;
	}

	if (!skipped_hashfn) {
		lexer->advance_fennel(lexer, false);
	}

	const bool is_valid_reader_macro_position = !iswspace(lexer->lookahead)
		&& !is_close_bracket(lexer->lookahead)
		&& !lexer->eof(lexer);

	if (!is_valid_reader_macro_position) {
		return SCAN_FAILURE;
	}

	lexer->mark_end(lexer);
	lexer->result_symbol = reader_macro;
	return SCAN_SUCCESS;
}

void* tree_sitter_fennel_external_scanner_create(void) {
	return NULL;
}

void tree_sitter_fennel_external_scanner_destroy(void* payload) {}

unsigned tree_sitter_fennel_external_scanner_serialize(void* payload, char* buffer) {
	return 0;
}

void tree_sitter_fennel_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

ScanResult tree_sitter_fennel_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
	if (in_error_recovery(valid_symbols)) {
		return SCAN_STOP;
	}

	const bool skipped_whitespace = iswspace(lexer->lookahead);
	while (iswspace(lexer->lookahead)) {
		lexer->advance_fennel(lexer, true);
	}

	bool skipped_hashfn = false;
	if (valid_symbols[TK_SHEBANG]) {
		if (scan_shebang(lexer, &skipped_hashfn) == SCAN_SUCCESS) {
			return SCAN_SUCCESS;
		}
	}

	// NOTE: If one reader macro is expected, then all of them are
	if (valid_symbols[TK_HASHFN] && (skipped_whitespace || !valid_symbols[TK_COLON_STRING_START_MARK])) {
		if (scan_reader_macro(lexer, skipped_hashfn) == SCAN_SUCCESS) {
			return SCAN_SUCCESS;
		}
	}

	return SCAN_FAILURE;
}

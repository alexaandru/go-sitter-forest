/* SPDX-FileCopyrightText: 2022 Christoph Sax <c_sax@mailbox.org>
 *
 * SPDX-License-Identifier: MIT
 */

#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdio.h>
#include <assert.h>

#include "parser.h"


#if defined(_MSC_VER)
# define STATIC_ASSERT(c__, msg__)  static_assert(c__, msg__)
#else
# define STATIC_ASSERT(c__, msg__)  _Static_assert(c__, msg__)
#endif


enum TokenType {
	LABEL_IDENTIFIER,
	AND_OPERATOR_PRE_HOOK,
	DECIMAL_NUMBER,
	DECIMAL_NUMBER_PRE_HOOK,
	HLL_NUMBER_LITERAL,
	HLL_NUMBER_LITERAL_PRE_HOOK,
	PATH,
	LOGICAL_AND,
	BITWISE_AND,
	AMPERSAND_CHAR
};

typedef struct scannerState_s {
	unsigned and_operator_len;
	unsigned decimal_number_len;
	unsigned hll_number_literal_len;
}
scannerState_t;

typedef struct sequences_s {
	unsigned num_tildes;
	unsigned num_dots;
	unsigned num_slashes;
	unsigned num_backslashes;
}
sequences_t;

typedef struct pathScan_s {
	bool has_dir_shorthand;
	bool has_file_suffix;
	bool has_drive;
	bool has_wildcard;
	bool has_root;
	bool has_letters;
	sequences_t seq[1];
	unsigned num_total_slashes;
}
pathScan_t;


static void Advance(
	TSLexer *const lexer)
{
	assert(lexer != NULL);
	lexer->advance_t32(lexer, false);
}


static void MarkEnd(
	TSLexer *const lexer)
{
	assert(lexer != NULL);
	lexer->mark_end(lexer);
}


static bool IsEof(
	TSLexer *const lexer)
{
	assert(lexer != NULL);
	return lexer->eof(lexer);
}


unsigned tree_sitter_t32_external_scanner_serialize(
	void * payload,
	char * buffer)
{
	assert(payload != NULL && buffer != NULL);

	scannerState_t *const s = (scannerState_t *) payload;

	size_t const num = sizeof(s[0]);
	STATIC_ASSERT(sizeof(s[0]) <= TREE_SITTER_SERIALIZATION_BUFFER_SIZE, "Buffer too small");

	memcpy(buffer, s, num);
	return num;
}


void tree_sitter_t32_external_scanner_deserialize(
	void * payload,
	const char * buffer,
	unsigned length)
{
	assert(payload != NULL && (buffer != NULL || length <= 0));
	if (length <= 0) {
		return;
	};

	scannerState_t *const s = (scannerState_t *) payload;
	memcpy(s, buffer, length);
}


static bool IsAlpha(
	int32_t const glyph)
{
	return (
		(glyph >= 'A' && glyph <= 'Z') ||
		(glyph >= 'a' && glyph <= 'z')
	);
}


static bool IsDecimalDigit(
	int32_t const glyph)
{
	return (glyph >= '0' && glyph <= '9');
}


static bool IsHexDigit(
	int32_t const glyph)
{
	return (   (glyph >= '0' && glyph <= '9')
	        || ( glyph >= 'a' && glyph <= 'f')
	        || ( glyph >= 'A' && glyph <= 'F')
	);
}


static bool IsBinaryDigit(
	int32_t const glyph)
{
	return (glyph >= '0' && glyph <= '1');
}


static bool IsIntegerLiteralSuffix(
	int32_t const glyph)
{
	return (   (glyph == 'u' || glyph == 'U')
	        || (glyph == 'l' || glyph == 'L')
	);
}


static bool IsFloatingPointLiteralSuffix(
	int32_t const glyph)
{
	return (   (glyph == 'f' || glyph == 'F')
	        || (glyph == 'l' || glyph == 'L')
	);
}


static bool IsAlphaNum(
	int32_t const glyph)
{
	return (IsAlpha(glyph) || IsDecimalDigit(glyph));
}


static bool IsSpace(
	int32_t const glyph)
{
	return (
		glyph == ' ' ||
		glyph == '\t' ||
		glyph == '\r' ||
		glyph == '\n'
	);
}


static bool IsSign(
	int32_t const glyph)
{
	return (glyph == '+' && glyph <= '-');
}


static unsigned ScanLengthLabelIdentifier(
	TSLexer * lexer)
{
	assert(lexer != NULL);

	unsigned len = 0;
	while (
		IsAlphaNum(lexer->lookahead) ||
		lexer->lookahead == '_' ||
		lexer->lookahead == '.'
	) {
		Advance(lexer);
		len += 1u;

		if (IsEof(lexer)) {
			break;
		}
	}
	return len;
}


static void ScanIdentifier(
	TSLexer * lexer)
{
	assert(lexer != NULL);

	Advance(lexer);
	while (
		IsAlphaNum(lexer->lookahead) ||
		lexer->lookahead == '_'
	) {
		Advance(lexer);
		if (IsEof(lexer)) {
			break;
		}
	}
}


static unsigned ScanLengthAndOperator(
	TSLexer *const lexer)
{
	assert(lexer != NULL && lexer->lookahead == '&');

	/* LOCAL &a &b
	 * &a = TRUE()
	 * &b = FALSE()&&&a
	 *
	 * LOCAL &c &d
	 * &c = 0x1
	 * &d = 0xf&&c
	 *
	 * LOCAL &e
	 * &e = 0xf&14.
	 *
	 * LOCAL &f
	 * &f = FALSE()&&sYmbol.Exit(main)
	 *
	 * LOCAL &g
	 * &g = FALSE()&&(&macro!=0)
	 */

	MarkEnd(lexer);

	unsigned len = 0;
	int32_t macro_delim = '\0';
	while (
		lexer->lookahead == '&' ||
		lexer->lookahead == '(' ||
		lexer->lookahead == '{'
	) {
		if (macro_delim == '\0' && lexer->lookahead == '&') {
			len += 1u;
		}
		else if (lexer->lookahead == '(') {
			macro_delim = ')';
		}
		else if (lexer->lookahead == '{') {
			macro_delim = '}';
		}

		Advance(lexer);
		if (IsEof(lexer)) {
			break;
		}
	}

	// Check for number literal on right hand side
	if (len <= 0 || !IsAlpha(lexer->lookahead)) {
		return len;
	}

	// Check for PRACTICE function calls or parenthesized
	// expressions on right hand side
	ScanIdentifier(lexer);
	if (
		lexer->lookahead == '.' ||
		(macro_delim != '\0' && macro_delim != lexer->lookahead)
	) {
		return len;
	}
	return len - 1u;;
}


static unsigned ScanLengthDecimalNumber(
	TSLexer *const lexer)
{
	assert(lexer != NULL && IsDecimalDigit(lexer->lookahead));

	/* LOCAL &a
	 * &a = 1...4
	 *
	 * LOCAL &b
	 * &b = 1..2
	 *
	 * LOCAL &c
	 * &c = 1.MHZ
	 *
	 * LOCAL &d
	 * &d = 1.ms
	 *
	 * LOCAL &e
	 * &e = 1.0%
	 *
	 * WINPOS A 50%,0
	 */
	MarkEnd(lexer);

	unsigned len = 0;
	unsigned num_dots = 0;
	while (
		IsDecimalDigit(lexer->lookahead) ||
		lexer->lookahead == '.'
	) {
		if (IsDecimalDigit(lexer->lookahead)) {
			if (num_dots == 1u) {
				// Floating point number detected
				return 0;
			}
			else if (num_dots > 1u) {
				// Number after range operator
				break;
			}
			len += 1u;
		}
		else if (lexer->lookahead == '.') {
			num_dots += 1u;
		}

		Advance(lexer);
		if (IsEof(lexer)) {
			break;
		}
	}

	// Check for binary, hexadecimal numbers, time and frequency
	// literals, strings and symbols
	if (
		lexer->lookahead ==  '\'' || lexer->lookahead ==  '`' ||
		// bitmasks
		lexer->lookahead == 'x' || lexer->lookahead == 'X' ||
		lexer->lookahead == 'y' || lexer->lookahead == 'Y' ||
		// time
		lexer->lookahead == 'm' || lexer->lookahead == 'u' || lexer->lookahead == 'n' || lexer->lookahead == 's' ||
		lexer->lookahead == 'M' || lexer->lookahead == 'U' || lexer->lookahead == 'N' || lexer->lookahead == 'S' ||
		// frequency
		lexer->lookahead == 'k' || lexer->lookahead == 'm' || lexer->lookahead == 'g' || lexer->lookahead == 'h' ||
		lexer->lookahead == 'K' || lexer->lookahead == 'M' || lexer->lookahead == 'G' || lexer->lookahead == 'H'
	) {
		return 0;
	}

	// Check for percentage literals separated by space or argument separator
	if (lexer->lookahead == '%') {
		Advance(lexer);
		if (IsSpace(lexer->lookahead) || lexer->lookahead == ',') {
			return 0;
		}
	}

	if (num_dots == 1u || num_dots == 3u) {
		len += 1u;
	}
	return len;
}


/*
 *  hll_number_literal: $ => {
 *    const separator = "'";
 *    const hex = /[0-9a-fA-F]/;
 *    const decimal = /[0-9]/;
 *    const hexDigits = seq(repeat1(hex), repeat(seq(separator, repeat1(hex))));
 *    const decimalDigits = seq(repeat1(decimal), repeat(seq(separator, repeat1(decimal))));
 *    return token(seq(
 *      optional(/[-\+]/),
 *      optional(choice('0x', '0b')),
 *      choice(
 *        seq(
 *          choice(
 *            decimalDigits,
 *            seq('0b', decimalDigits),
 *            seq('0x', hexDigits)
 *          ),
 *          optional(seq('.', optional(hexDigits)))
 *        ),
 *        seq('.', decimalDigits)
 *      ),
 *      optional(seq(
 *        /[eEpP]/,
 *        optional(seq(
 *          optional(/[-\+]/),
 *          hexDigits
 *        ))
 *      )),
 *      repeat(choice('u', 'l', 'U', 'L', 'f', 'F'))
 *    ))
 *  },
 */
static unsigned ScanLengthHllNumberLiteral(
	TSLexer *const lexer)
{
	assert(lexer != NULL && (IsDecimalDigit(lexer->lookahead) || IsSign(lexer->lookahead)));

	MarkEnd(lexer);

	bool const has_sign = IsSign(lexer->lookahead);
	if (has_sign) {
		Advance(lexer);
		if (IsEof(lexer)) {
			return 0;
		}
	}

	/*
	 * double x = 1.; // floating-point 1.0 (fractional part optional)
	 * double y = .1; // floating-point 0.1 (whole-number part optional)
	 */
	bool const starts_with_fraction = (lexer->lookahead == '.');
	if (starts_with_fraction) {
		Advance(lexer);
		if (IsEof(lexer)) {
			return 0;
		}
	}

	if (!IsDecimalDigit(lexer->lookahead)) {
		return 0;
	}

	unsigned num_digits = 0;
	unsigned len = 0;
	if (has_sign) {
		len += 1u;
	}
	if (starts_with_fraction) {
		len += 1u;
	}

	// Prefix for hex and binary numbers
	bool is_hex = false;
	bool is_bin = false;
	if (lexer->lookahead == '0') {
		len += 1u;
		Advance(lexer);
		if (IsEof(lexer)) {
			return len;
		}

		if (lexer->lookahead == 'x' || lexer->lookahead == 'X') {
			is_hex = true;
		}
		else if (lexer->lookahead == 'b' || lexer->lookahead == 'B') {
			is_bin = true;
		}

		if (is_hex || is_bin) {
			len += 1u;
			Advance(lexer);
			if (IsEof(lexer)) {
				return len;
			}
		}
		else {
			num_digits += 1u;
		}
	}

	unsigned num_dots = 0;
	if (is_hex) {
		while (IsHexDigit(lexer->lookahead) || lexer->lookahead == '.') {
			if (lexer->lookahead == '.') {
				num_dots += 1u;
			}
			else {
				num_digits += 1u;
			}

			if (num_dots > 1u) {
				// Range operator after number detected
				len -= 1u;
				return len;
			}

			len += 1u;
			Advance(lexer);
			if (IsEof(lexer)) {
				break;
			}
		}
	}
	else if (is_bin) {
		while (IsBinaryDigit(lexer->lookahead)) {
			num_digits += 1u;
			len += 1u;
			Advance(lexer);
			if (IsEof(lexer)) {
				break;
			}
		}

		if (lexer->lookahead == '.') {
			// Range operator after number detected
			return len;
		}
	}
	else {
		while (IsDecimalDigit(lexer->lookahead) || lexer->lookahead == '.') {
			if (lexer->lookahead == '.') {
				num_dots += 1u;
			}
			else {
				num_digits += 1u;
			}

			if (num_dots > 1u) {
				// Range operator after number detected
				len -= 1u;
				return len;
			}

			len += 1u;
			Advance(lexer);
			if (IsEof(lexer)) {
				break;
			}
		}
	}

	if (num_digits <= 0) {
		return 0;
	}

	// Hex and decimal floating point constants
	if (   is_hex
	    && (lexer->lookahead == 'p' || lexer->lookahead == 'P')
	) {
		Advance(lexer);
		if (IsEof(lexer)) {
			return len;
		}

		bool const has_signed_exp = IsSign(lexer->lookahead);
		if (has_signed_exp) {
			Advance(lexer);
			if (IsEof(lexer)) {
				return len;
			}
		}

		if (!IsHexDigit(lexer->lookahead)) {
			return 0;
		}

		if (has_signed_exp) {
			len += 2u;
		}
		else {
			len += 1u;
		}

		while (IsHexDigit(lexer->lookahead)) {
			len += 1u;
			Advance(lexer);
			if (IsEof(lexer)) {
				break;
			}
		}
	}
	else if (   !is_bin
	         && (lexer->lookahead == 'e' || lexer->lookahead == 'E')
	) {
		Advance(lexer);
		if (IsEof(lexer)) {
			return len;
		}

		bool const has_signed_exp = IsSign(lexer->lookahead);
		if (has_signed_exp) {
			Advance(lexer);
			if (IsEof(lexer)) {
				return len;
			}
		}

		if (!IsDecimalDigit(lexer->lookahead)) {
			return 0;
		}

		if (has_signed_exp) {
			len += 2u;
		}
		else {
			len += 1u;
		}

		while (IsDecimalDigit(lexer->lookahead)) {
			len += 1u;
			Advance(lexer);
			if (IsEof(lexer)) {
				break;
			}
		}
	}

	// Type suffixes
	if (1u == 1u && IsFloatingPointLiteralSuffix(lexer->lookahead)) {
		len += 1u;
		Advance(lexer);
	}
	else {
		unsigned num_suffixes = 0;
		while (IsIntegerLiteralSuffix(lexer->lookahead)) {
			len += 1u;
			num_suffixes += 1u;
			if (num_suffixes >= 3u) {
				break;
			}

			Advance(lexer);
			if (IsEof(lexer)) {
				break;
			}
		}
	}
	return len;
}


static unsigned TrackConsecutiveSymbols(
	char const sym,
	int32_t const glyph,
	unsigned counter)
{
	if (glyph == sym) {
		return counter + 1u;
	}
	return 0;
}


static bool ScanPathLiteral(
	TSLexer *const lexer)
{
	assert(lexer != NULL);

	bool is_expression = false;
	bool is_comment = false;
	bool is_line_continuation = false;
	bool is_option = false;
	bool is_symbol = false;

	pathScan_t scan[1] = {{0}};

	unsigned ii = 0;
	while (!(IsSpace(lexer->lookahead) || IsEof(lexer))) {
		if (
			lexer->lookahead == '(' ||
			lexer->lookahead == ')' ||
			lexer->lookahead == '&' ||
			lexer->lookahead == '%' ||
			lexer->lookahead == '+' ||
			lexer->lookahead == '"' ||
			lexer->lookahead == '`' ||
			lexer->lookahead == '\'' ||
			((ii == 0 || scan->seq->num_tildes > 0) && IsDecimalDigit(lexer->lookahead))
		) {
			/*
			 * Detect expressions containing tilde operators, macros or
			 * time literals.
			 */
			is_expression = true;
			break;
		}
		else if (lexer->lookahead == '/') {
			if (scan->seq->num_slashes > 0) {
				is_comment = true;
				break;
			}

			if (ii == 0) {
				is_option = true;
				scan->has_root = true;
			}
		}
		else if (lexer->lookahead == '\\' && scan->seq->num_backslashes) {
			is_symbol = true;
			break;
		}
		else if (IsAlpha(lexer->lookahead)) {
			scan->has_letters = true;
		}

		if (ii == 1 && lexer->lookahead == ':') {
			scan->has_drive = true;
		}
		else if (ii == 2 && scan->has_drive) {
			scan->has_drive = (lexer->lookahead == '\\');
		}
		else if (lexer->lookahead == '*' || lexer->lookahead == '?') {
			if (scan->seq->num_slashes > 0 || scan->seq->num_backslashes > 0) {
				scan->has_wildcard = true;
			}
		}
		else if (lexer->lookahead == '/' || lexer->lookahead == '\\') {
			if (scan->seq->num_tildes > 0 || scan->seq->num_dots > 0) {
				scan->has_dir_shorthand = true;
			}
		}
		else if (scan->seq->num_dots > 0 && IsAlpha(lexer->lookahead)) {
			scan->has_file_suffix = true;
		}

		scan->seq->num_tildes = TrackConsecutiveSymbols('~', lexer->lookahead, scan->seq->num_tildes);

		scan->seq->num_dots = TrackConsecutiveSymbols('.', lexer->lookahead, scan->seq->num_dots);

		scan->seq->num_slashes = TrackConsecutiveSymbols('/', lexer->lookahead, scan->seq->num_slashes);

		scan->seq->num_backslashes = TrackConsecutiveSymbols('\\', lexer->lookahead, scan->seq->num_backslashes);

		if (lexer->lookahead == '/') {
			scan->num_total_slashes += 1u;
		}

		Advance(lexer);
		ii += 1u;
	}

	if (scan->seq->num_backslashes > 0 && (lexer->lookahead == '\r' || lexer->lookahead == '\n')) {
		is_line_continuation = true;
	}
	else if (is_option && scan->num_total_slashes != 1u) {
		is_option = false;
	}

	if (is_comment || is_line_continuation || is_option || is_symbol) {
		return false;
	}

	// Differentiate between paths with macros and expressions.
	// We prioritize paths that start with a directory.
	if (scan->has_dir_shorthand ||
	    (scan->has_drive && ii > 2u)  // Drive letter + ':' + '\\'
	) {
		return true;
	}

	if (is_expression) {
		return false;
	}

	return (
		scan->has_file_suffix ||
		scan->has_wildcard ||
		(scan->has_root && scan->has_letters && scan->num_total_slashes > 1u)
	);
}


bool tree_sitter_t32_external_scanner_scan(
	void * payload,
	TSLexer * lexer,
	const bool * valid_symbols)
{
	assert(payload != NULL && lexer != NULL && valid_symbols != NULL);

	scannerState_t *const state = (scannerState_t *) payload;

	if (IsSpace(lexer->lookahead)) {
		return false;
	}

	// Labels must start in the first column
	if (valid_symbols[LABEL_IDENTIFIER] && lexer->get_column(lexer) == 0) {
		bool const starts_with_device_prefix = (lexer->lookahead == 'B');

		unsigned const len = ScanLengthLabelIdentifier(lexer);
		if (len > 0 && lexer->lookahead == ':') {
			MarkEnd(lexer);
			Advance(lexer);

			/* B:: is a device prefix at the beginning of commands */
			if (len == 1 && starts_with_device_prefix && lexer->lookahead == ':') {
				return false;
			}
			lexer->result_symbol = LABEL_IDENTIFIER;
			return true;
		}
	}
	else if (valid_symbols[AND_OPERATOR_PRE_HOOK] && lexer->lookahead == '&') {
		state->and_operator_len = ScanLengthAndOperator(lexer);
		if (state->and_operator_len > 0) {
			lexer->result_symbol = AND_OPERATOR_PRE_HOOK;
			return true;
		}
	}
	else if (
		(valid_symbols[LOGICAL_AND] || valid_symbols[BITWISE_AND]) &&
		state->and_operator_len > 0
	) {
		unsigned const len = state->and_operator_len;
		for (unsigned ii = 0; ii < len; ii++) {
			Advance(lexer);
		}

		if (len == 1) {
			state->and_operator_len = 0;
			lexer->result_symbol = BITWISE_AND;
			return true;
		}
		if (len == 2) {
			state->and_operator_len = 0;
			lexer->result_symbol = LOGICAL_AND;
			return true;
		}
	}
	else if (valid_symbols[AMPERSAND_CHAR] && lexer->lookahead == '&') {
		Advance(lexer);

		/* PRACTICE macros may not start with a number */
		if (IsEof(lexer) || IsAlpha(lexer->lookahead)) {
			return false;
		}
		lexer->result_symbol = AMPERSAND_CHAR;
		return true;
	}
	else if (valid_symbols[DECIMAL_NUMBER_PRE_HOOK] && IsDecimalDigit(lexer->lookahead)) {
		state->decimal_number_len = ScanLengthDecimalNumber(lexer);
		if (state->decimal_number_len > 0) {
			lexer->result_symbol = DECIMAL_NUMBER_PRE_HOOK;
			return true;
		}
	}
	else if (valid_symbols[DECIMAL_NUMBER] && state->decimal_number_len > 0) {
		unsigned const len = state->decimal_number_len;
		for (unsigned ii = 0; ii < len; ii++) {
			Advance(lexer);
		}

		if (len > 0) {
			state->decimal_number_len = 0;
			lexer->result_symbol = DECIMAL_NUMBER;
			return true;
		}
	}
	else if (   valid_symbols[HLL_NUMBER_LITERAL_PRE_HOOK]
	         && (IsDecimalDigit(lexer->lookahead) || IsSign(lexer->lookahead))
	) {
		state->hll_number_literal_len = ScanLengthHllNumberLiteral(lexer);
		if (state->hll_number_literal_len > 0) {
			lexer->result_symbol = HLL_NUMBER_LITERAL_PRE_HOOK;
			return true;
		}
	}
	else if (valid_symbols[HLL_NUMBER_LITERAL] && state->hll_number_literal_len > 0) {
		unsigned const len = state->hll_number_literal_len;
		for (unsigned ii = 0; ii < len; ii++) {
			Advance(lexer);
		}

		if (len > 0) {
			state->hll_number_literal_len = 0;
			lexer->result_symbol = HLL_NUMBER_LITERAL;
			return true;
		}
	}
	else if (valid_symbols[PATH] && ScanPathLiteral(lexer)) {
		lexer->result_symbol = PATH;
		return true;
	}
	return false;
}


void * tree_sitter_t32_external_scanner_create()
{
	scannerState_t *const s = calloc(1u, sizeof(s[0]));
	assert(s != NULL);

	return s;
}


void tree_sitter_t32_external_scanner_destroy(void * payload)
{
	assert(payload != NULL);

	free(payload);
}

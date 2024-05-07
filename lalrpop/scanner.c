#include "scanner_table.h"
#include "parser.h"

#include <search.h>
#include <stdio.h>
#include <wctype.h>

#define SYMBOLS(...)                                                           \
	enum TokenType { __VA_ARGS__ };                                            \
	const enum TokenType variants[] = { __VA_ARGS__ };

SYMBOLS(MACRO_ID, USE, STRING_CONTENT, REGEX_LITERAL, NORMAL_ACTION,
        FAILIBLE_ACTION)

#define for_each_symbol(var)                                                   \
	for (int i = 0, (var) = variants[0];                                       \
	     i < sizeof(variants) / sizeof(enum TokenType);                        \
	     i++, (var) = variants[i])

static bool other_variants(const bool *valid_symbols, enum TokenType variant) {
	bool other = false;

	enum TokenType iter_var = variants[0];
	for_each_symbol(iter_var) {
		if (iter_var == variant) {
			continue;
		}

		other |= valid_symbols[variants[i]];
	}

	return other;
}

static void print_valid_syms(const bool *valid_symbols) {
	enum TokenType var = variants[0];

	printf("Valid variants: ");
	for_each_symbol(var) {
		if (valid_symbols[var]) {
			printf(" %d ", var);
		}
	}

	printf("\n");
}

void *tree_sitter_lalrpop_external_scanner_create() {
	return NULL;
}

void tree_sitter_lalrpop_external_scanner_destroy(void *payload) {
}

unsigned tree_sitter_lalrpop_external_scanner_serialize(void *payload,
                                                        char *buffer) {
	return 0;
}

void tree_sitter_lalrpop_external_scanner_deserialize(void *payload,
                                                      const char *buffer,
                                                      unsigned length) {
}

static void advance_lalrpop(TSLexer *lexer) {
	lexer->advance_lalrpop(lexer, false);
}

static bool string_literal(TSLexer *lexer, char quote) {
	bool escape = false;
	bool terminate = false;

	for (;;) {
		if (lexer->lookahead == 0) {
			return false;
		}
		if (lexer->lookahead == quote) {
			advance_lalrpop(lexer);
			return true;
		}

		if (escape) {
			escape = false;
		} else {
			escape = lexer->lookahead == '\\';
		}

		advance_lalrpop(lexer);
	}

	return false;
}

static bool take_until_terminating(TSLexer *lexer, char terminator) {
	for (;;) {
		if (lexer->lookahead == terminator) {
			advance_lalrpop(lexer);
			return true;
		}
		if (lexer->lookahead == 0) {
			return false;
		}

		advance_lalrpop(lexer);
	}
}

static bool lifetime_or_char_literal(TSLexer *lexer) {
	if (lexer->lookahead == 0) {
		return false;
	}

	if (lexer->lookahead == '\\') {
		advance_lalrpop(lexer); // Consume the backslash
		advance_lalrpop(lexer); // Consume the escaped char
		return take_until_terminating(lexer, '\'');
	}
	advance_lalrpop(lexer); // Consume the lookahead
	if (lexer->lookahead == '\'') {
		advance_lalrpop(lexer); // it was a char literal, Consume the quote
	}
	return true;

	return true;
}

static bool unicode_strchr(const char *str, int32_t chr) {
	while (*str != 0) {
		if (*str == chr) {
			return true;
		}
		str++;
	}

	return false;
}

static bool code(TSLexer *lexer, const char *open_delims,
                 const char *close_delims) {
	size_t balance = 0;

	for (;;) {
		switch (lexer->lookahead) {
		case '"':
			advance_lalrpop(lexer);
			if (!string_literal(lexer, '"')) {
				return false;
			}
			continue;
		case '\'':
			advance_lalrpop(lexer);
			if (!lifetime_or_char_literal(lexer)) {
				return false;
			}
			continue;
		case 'r':
			advance_lalrpop(lexer);
			if (lexer->lookahead == '#') {
				return false;
				/* abort(); */
			}
			continue;
		case '/':
			advance_lalrpop(lexer);
			if (lexer->lookahead == '/') {
				take_until_terminating(lexer, '\n');
			}
			continue;
		case 0:
			return balance == 0;
		default:
			if (unicode_strchr(open_delims, lexer->lookahead)) {
				balance++;
			} else if (balance > 0) {
				if (unicode_strchr(close_delims, lexer->lookahead)) {
					balance--;
				}
			} else {
				if (lexer->lookahead == ',' || lexer->lookahead == ';' ||
				    unicode_strchr(close_delims, lexer->lookahead)) {
					return true;
				}
			}
			break;
		}
		advance_lalrpop(lexer);
	}
}

static int range_comparator(const void *key, const void *v_range) {
	const struct range *range = v_range;
	const int32_t *chr = key;

	if (range->start > *chr) {
		return 1;
	}
	if (range->end < *chr) {
		return -1;
	}
	return 0;
}

static bool xid_start_extended(int32_t chr) {
	return bsearch(&chr, xid_start_class,
	               sizeof(xid_start_class) / sizeof(struct range),
	               sizeof(struct range), range_comparator) != NULL;
}

static bool is_xid_start(int32_t chr) {
	return ('a' <= chr && chr <= 'z') || ('A' <= chr && chr <= 'Z') ||
	       (chr > 0x7f && xid_start_extended(chr));
}

static bool xid_continue_extended(int32_t chr) {
	return bsearch(&chr, xid_continue_class,
	               sizeof(xid_continue_class) / sizeof(struct range),
	               sizeof(struct range), range_comparator) != NULL;
}

static bool is_xid_continue(int32_t chr) {
	return ('a' <= chr && chr <= 'z') || ('A' <= chr && chr <= 'Z') ||
	       ('0' <= chr && chr <= '9') || chr == '_' ||
	       (chr > 0x7f && xid_continue_extended(chr));
}

static bool match_word(TSLexer *lexer, const char *word, size_t len) {
	while (len > 0) {
		if (lexer->lookahead == *word) {
			advance_lalrpop(lexer);
			len--;
			word++;
		} else {
			return false;
		}
	}

	return !(is_xid_continue(lexer->lookahead));
}

#define STRLEN(s) (sizeof(s) - 1)
#define MATCH_WORD(lex, s) match_word(lex, s, STRLEN(s))

static bool regex_literal(TSLexer *lexer, size_t consumed_hash) {
	lexer->result_symbol = REGEX_LITERAL;

	size_t hash_count = consumed_hash;
	while (lexer->lookahead == '#') {
		hash_count++;
		advance_lalrpop(lexer);
	}

	if (lexer->lookahead != '"') {
		return false;
	}

	advance_lalrpop(lexer); // we are now in the string contents

	size_t state = 0;
	for (;;) {
		if (lexer->lookahead == 0) {
			return false;
		}

		if (lexer->lookahead == '"') {
			advance_lalrpop(lexer);

			size_t closing_hashes = 0;
			while (lexer->lookahead == '#' && closing_hashes < hash_count) {
				advance_lalrpop(lexer);
				closing_hashes++;
			}

			if (closing_hashes == hash_count) {
				return true;
			}
		} else {
			advance_lalrpop(lexer);
		}
	}
}

bool tree_sitter_lalrpop_external_scanner_scan(void *payload, TSLexer *lexer,
                                               const bool *valid_symbols) {
	while (iswspace(lexer->lookahead)) {
		lexer->advance_lalrpop(lexer, true);
	}

	if (valid_symbols[NORMAL_ACTION] && lexer->lookahead == '=') {
		advance_lalrpop(lexer);
		lexer->result_symbol = NORMAL_ACTION;

		if (lexer->lookahead != '>') {
			goto string_content;
		}

		advance_lalrpop(lexer);

		if (lexer->lookahead == '?') {
			lexer->result_symbol = FAILIBLE_ACTION;
			advance_lalrpop(lexer);
		}

		// =>@R or =>@L
		if (lexer->lookahead == '@') {
			goto string_content;
		}

		while (iswspace(lexer->lookahead)) {
			lexer->advance_lalrpop(lexer, true);
		}

		if (code(lexer, "([{", "}])")) {
			return true;
		}

		goto string_content;
	}

	if (valid_symbols[REGEX_LITERAL] || valid_symbols[MACRO_ID]) {
		if (lexer->lookahead == 'r') {
			advance_lalrpop(lexer);

			if (lexer->lookahead == '"') {
				return regex_literal(lexer, 0);
			}
			if (lexer->lookahead == '#') {
				advance_lalrpop(lexer);
				if (lexer->lookahead == '#' || lexer->lookahead == '"') {
					return regex_literal(lexer, 1);
				}
			}
		}

		lexer->result_symbol = MACRO_ID;

		// If are here then we are maybe in a macro id, and it could be of the form r#...
		if (!is_xid_start(lexer->lookahead)) {
			goto string_content;
		}

		advance_lalrpop(lexer);
		while (is_xid_continue(lexer->lookahead)) {
			advance_lalrpop(lexer);
		}

		while (iswspace(lexer->lookahead)) {
			lexer->advance_lalrpop(lexer, true);
		}

		return lexer->lookahead == '<';
	}

	if (valid_symbols[USE]) {
		if (!MATCH_WORD(lexer, "use")) {
			goto string_content;
		}

		if (code(lexer, "([{", "}])")) {
			lexer->result_symbol = USE;
			return true;
		}
	}

string_content:
	if (valid_symbols[STRING_CONTENT]) {
		/* if (other_variants(valid_symbols, STRING_CONTENT)) {
			printf("You should handle this case (line %d)\n", __LINE__);
			print_valid_syms(valid_symbols);
		} */

		bool has_content = false;
		for (;;) {
			if (lexer->lookahead == '\"' || lexer->lookahead == '\\') {
				break;
			}
			if (lexer->lookahead == 0) {
				return false;
			}
			has_content = true;
			advance_lalrpop(lexer);
		}
		lexer->result_symbol = STRING_CONTENT;
		return has_content;
	}

	return false;
}

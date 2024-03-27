#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.h"

#define ESN 4
#define SEXPR 6

enum TokenType {
	_LATEX_WORD,
	RENV_INLINE,
	RENV_SIG_BEG,
	RENV_SIG_END,
	RENV_CONTENT,
};

bool ws(int32_t val)
{
	return(val == ' ' || val == '\t' || val == '\n');
}

void advance_ws(TSLexer* lexer)
{
	// If the current character is whitesapce, skip it
	while (ws(lexer->lookahead))  lexer->advance_rnoweb(lexer, true);
};

bool rnw_content(TSLexer* lexer)
{
	// The current character
	bool eof = lexer->eof(lexer);
	if (eof) return(false);

	int32_t col = lexer->get_column(lexer);
	int32_t val = lexer->lookahead;

	// Going to have to call it at having a "@" in the first column
	while (
		((lexer->get_column(lexer) != 0) || (lexer->lookahead != '@')) &&
		(! lexer->eof(lexer))
		) {
		lexer->mark_end(lexer);
		lexer->advance_rnoweb(lexer, false);
	}

	lexer->result_symbol = RENV_CONTENT;
	return(true);
};

bool rnw_sig_end(TSLexer* lexer)
{
	// End of file, return false
	if (lexer->eof(lexer)) return(false);

	// We're at column 0, now is this character '<'
	char tocheck[ESN] = {'>', '>', '=', '\n'};

	bool res = true;
	int32_t val = lexer->lookahead;

	for (int i = 0; i < ESN; i++)
	{
		// The current character
		val = lexer->lookahead;
		if (val != tocheck[i])
		{
			res = false;
			break;
		} else
		{
			lexer->advance_rnoweb(lexer, false);
		}
	}

	if (res)
	{
		lexer->result_symbol = RENV_SIG_END;
		lexer->mark_end(lexer);
	}

	return(res);
}

bool word_or_sig(TSLexer* lexer)
{
	// End of file, return false
	bool eof = lexer->eof(lexer);
	if (eof) return(false);

	// Start marking the end before we advace
	lexer->mark_end(lexer);

	// What column are we - 0 indexed
	int32_t col = lexer->get_column(lexer);
	// The current character
	int32_t val  = lexer->lookahead;
	int32_t fval = lexer->lookahead;

	// If we're in col0 we could be in a sig
	if ((col == 0) && (val != '\\')) {
		bool issig = true;
		char begcheck[2] = {'<', '<'};
		for (int i = 0; i < 2; i++)
		{
			if (val != begcheck[i])
			{
					issig = false;
					break;
			}
			lexer->advance_rnoweb(lexer, false);
			val = lexer->lookahead;
		}
		if (issig) {
			lexer->mark_end(lexer);
			lexer->result_symbol = RENV_SIG_BEG;
			return(true);
		}
	}

	// If we're in a command, we need to know if it's a Sexpr, otherwise keep it
	// going till whitespace or another command start ('\\')

	// If we advanced once already, thenn fval is "<", twice, we wouldn't be here.
	// So if we're not at a '\\' or whitespace, keep marking the line until we hit whitespace.
	if (lexer->lookahead != '\\')
	{
		while ((!ws(val)) && (val != '\\') && ! lexer->eof(lexer))
		{
			lexer->advance_rnoweb(lexer, false);
			val = lexer->lookahead;
		}
		lexer->mark_end(lexer);
		lexer->result_symbol = _LATEX_WORD;
		return(true);
	}

	// If we haven't advanced, but now we're at a command begginning, check if
	// we're in Sexpr, otherwise continue until space or new command
	if (lexer->lookahead == '\\')
	{
		bool is_sexpr = true;
		char sexpr_check[SEXPR] = {'\\', 'S', 'e', 'x', 'p', 'r'};
		for (int i = 0; i < SEXPR; i++)
		{
			if (val != sexpr_check[i])
			{
				is_sexpr = false;
				break;
			}
			lexer->advance_rnoweb(lexer, false);
			val = lexer->lookahead;
		}

		if (is_sexpr) {
			lexer->mark_end(lexer);
			lexer->result_symbol = RENV_INLINE;
			return(true);
		}

		while ((!ws(val)) && (val != '\\') && ! lexer->eof(lexer))
		{
			lexer->advance_rnoweb(lexer, false);
			val = lexer->lookahead;
		}
		lexer->mark_end(lexer);
		lexer->result_symbol = _LATEX_WORD;
		return(true);
	}

}

void tree_sitter_rnoweb_external_scanner_create()
{};
void* tree_sitter_rnoweb_external_scanner_destroy(void *payload)
{};
unsigned tree_sitter_rnoweb_external_scanner_serialize(
  void *payload,
  char *buffer
) {
	return 0;
};
void tree_sitter_rnoweb_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
)
{};

bool tree_sitter_rnoweb_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
)
{
	// Move past whitespace
	advance_ws(lexer);

	bool res;


	if (valid_symbols[_LATEX_WORD] || valid_symbols[RENV_INLINE] || valid_symbols[RENV_SIG_BEG])
	{
		res = word_or_sig(lexer);
	} else if (valid_symbols[RENV_SIG_END]) {
		res = rnw_sig_end(lexer);
	} else if (valid_symbols[RENV_CONTENT]) {
		res = rnw_content(lexer);
	}

	return(res);
};

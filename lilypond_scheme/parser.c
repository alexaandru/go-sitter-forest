#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 71
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_scheme_comment_token1 = 1,
  anon_sym_POUND_PIPE = 2,
  aux_sym__scheme_block_comment_token1 = 3,
  aux_sym__scheme_block_comment_token2 = 4,
  anon_sym_PIPE_POUND = 5,
  sym_scheme_boolean = 6,
  sym_scheme_character = 7,
  aux_sym_scheme_number_token1 = 8,
  anon_sym_POUND_COLON = 9,
  sym_scheme_keyword_name = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_scheme_string_fragment_token1 = 12,
  sym_scheme_escape_sequence = 13,
  sym_scheme_symbol = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_SQUOTE = 17,
  anon_sym_BQUOTE = 18,
  anon_sym_COMMA = 19,
  anon_sym_COMMA_AT = 20,
  anon_sym_POUND_LPAREN = 21,
  anon_sym_POUNDvu8_LPAREN = 22,
  anon_sym_POUND_LBRACE = 23,
  anon_sym_POUND_RBRACE = 24,
  aux_sym_scheme_embedded_lilypond_text_fragment_token1 = 25,
  sym_lilypond_comment = 26,
  sym_lilypond_escape_sequence = 27,
  sym_scheme_program = 28,
  sym__scheme_token = 29,
  sym_scheme_comment = 30,
  sym__scheme_block_comment = 31,
  sym__scheme_datum = 32,
  sym__scheme_simple_datum = 33,
  sym_scheme_number = 34,
  sym_scheme_keyword = 35,
  sym_scheme_string = 36,
  sym_scheme_string_fragment = 37,
  sym__scheme_compound_datum = 38,
  sym_scheme_list = 39,
  sym_scheme_quote = 40,
  sym_scheme_quasiquote = 41,
  sym_scheme_unquote = 42,
  sym_scheme_unquote_splicing = 43,
  sym_scheme_vector = 44,
  sym_scheme_byte_vector = 45,
  sym_scheme_embedded_lilypond = 46,
  sym_scheme_embedded_lilypond_text = 47,
  sym_scheme_embedded_lilypond_text_fragment = 48,
  sym_lilypond_string = 49,
  sym_lilypond_string_fragment = 50,
  aux_sym_scheme_program_repeat1 = 51,
  aux_sym__scheme_block_comment_repeat1 = 52,
  aux_sym_scheme_string_repeat1 = 53,
  aux_sym_scheme_quote_repeat1 = 54,
  aux_sym_scheme_embedded_lilypond_text_repeat1 = 55,
  aux_sym_scheme_embedded_lilypond_text_fragment_repeat1 = 56,
  aux_sym_lilypond_string_repeat1 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_scheme_comment_token1] = "scheme_comment_token1",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym__scheme_block_comment_token1] = "_scheme_block_comment_token1",
  [aux_sym__scheme_block_comment_token2] = "_scheme_block_comment_token2",
  [anon_sym_PIPE_POUND] = "|#",
  [sym_scheme_boolean] = "scheme_boolean",
  [sym_scheme_character] = "scheme_character",
  [aux_sym_scheme_number_token1] = "scheme_number_token1",
  [anon_sym_POUND_COLON] = "#:",
  [sym_scheme_keyword_name] = "scheme_keyword_name",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_scheme_string_fragment_token1] = "scheme_string_fragment_token1",
  [sym_scheme_escape_sequence] = "scheme_escape_sequence",
  [sym_scheme_symbol] = "scheme_symbol",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA] = ",",
  [anon_sym_COMMA_AT] = ",@",
  [anon_sym_POUND_LPAREN] = "#(",
  [anon_sym_POUNDvu8_LPAREN] = "#vu8(",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_POUND_RBRACE] = "#}",
  [aux_sym_scheme_embedded_lilypond_text_fragment_token1] = "scheme_embedded_lilypond_text_fragment_token1",
  [sym_lilypond_comment] = "lilypond_comment",
  [sym_lilypond_escape_sequence] = "lilypond_escape_sequence",
  [sym_scheme_program] = "scheme_program",
  [sym__scheme_token] = "_scheme_token",
  [sym_scheme_comment] = "scheme_comment",
  [sym__scheme_block_comment] = "_scheme_block_comment",
  [sym__scheme_datum] = "_scheme_datum",
  [sym__scheme_simple_datum] = "_scheme_simple_datum",
  [sym_scheme_number] = "scheme_number",
  [sym_scheme_keyword] = "scheme_keyword",
  [sym_scheme_string] = "scheme_string",
  [sym_scheme_string_fragment] = "scheme_string_fragment",
  [sym__scheme_compound_datum] = "_scheme_compound_datum",
  [sym_scheme_list] = "scheme_list",
  [sym_scheme_quote] = "scheme_quote",
  [sym_scheme_quasiquote] = "scheme_quasiquote",
  [sym_scheme_unquote] = "scheme_unquote",
  [sym_scheme_unquote_splicing] = "scheme_unquote_splicing",
  [sym_scheme_vector] = "scheme_vector",
  [sym_scheme_byte_vector] = "scheme_byte_vector",
  [sym_scheme_embedded_lilypond] = "scheme_embedded_lilypond",
  [sym_scheme_embedded_lilypond_text] = "scheme_embedded_lilypond_text",
  [sym_scheme_embedded_lilypond_text_fragment] = "scheme_embedded_lilypond_text_fragment",
  [sym_lilypond_string] = "lilypond_string",
  [sym_lilypond_string_fragment] = "lilypond_string_fragment",
  [aux_sym_scheme_program_repeat1] = "scheme_program_repeat1",
  [aux_sym__scheme_block_comment_repeat1] = "_scheme_block_comment_repeat1",
  [aux_sym_scheme_string_repeat1] = "scheme_string_repeat1",
  [aux_sym_scheme_quote_repeat1] = "scheme_quote_repeat1",
  [aux_sym_scheme_embedded_lilypond_text_repeat1] = "scheme_embedded_lilypond_text_repeat1",
  [aux_sym_scheme_embedded_lilypond_text_fragment_repeat1] = "scheme_embedded_lilypond_text_fragment_repeat1",
  [aux_sym_lilypond_string_repeat1] = "lilypond_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_scheme_comment_token1] = aux_sym_scheme_comment_token1,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym__scheme_block_comment_token1] = aux_sym__scheme_block_comment_token1,
  [aux_sym__scheme_block_comment_token2] = aux_sym__scheme_block_comment_token2,
  [anon_sym_PIPE_POUND] = anon_sym_PIPE_POUND,
  [sym_scheme_boolean] = sym_scheme_boolean,
  [sym_scheme_character] = sym_scheme_character,
  [aux_sym_scheme_number_token1] = aux_sym_scheme_number_token1,
  [anon_sym_POUND_COLON] = anon_sym_POUND_COLON,
  [sym_scheme_keyword_name] = sym_scheme_keyword_name,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_scheme_string_fragment_token1] = aux_sym_scheme_string_fragment_token1,
  [sym_scheme_escape_sequence] = sym_scheme_escape_sequence,
  [sym_scheme_symbol] = sym_scheme_symbol,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COMMA_AT] = anon_sym_COMMA_AT,
  [anon_sym_POUND_LPAREN] = anon_sym_POUND_LPAREN,
  [anon_sym_POUNDvu8_LPAREN] = anon_sym_POUNDvu8_LPAREN,
  [anon_sym_POUND_LBRACE] = anon_sym_POUND_LBRACE,
  [anon_sym_POUND_RBRACE] = anon_sym_POUND_RBRACE,
  [aux_sym_scheme_embedded_lilypond_text_fragment_token1] = aux_sym_scheme_embedded_lilypond_text_fragment_token1,
  [sym_lilypond_comment] = sym_lilypond_comment,
  [sym_lilypond_escape_sequence] = sym_lilypond_escape_sequence,
  [sym_scheme_program] = sym_scheme_program,
  [sym__scheme_token] = sym__scheme_token,
  [sym_scheme_comment] = sym_scheme_comment,
  [sym__scheme_block_comment] = sym__scheme_block_comment,
  [sym__scheme_datum] = sym__scheme_datum,
  [sym__scheme_simple_datum] = sym__scheme_simple_datum,
  [sym_scheme_number] = sym_scheme_number,
  [sym_scheme_keyword] = sym_scheme_keyword,
  [sym_scheme_string] = sym_scheme_string,
  [sym_scheme_string_fragment] = sym_scheme_string_fragment,
  [sym__scheme_compound_datum] = sym__scheme_compound_datum,
  [sym_scheme_list] = sym_scheme_list,
  [sym_scheme_quote] = sym_scheme_quote,
  [sym_scheme_quasiquote] = sym_scheme_quasiquote,
  [sym_scheme_unquote] = sym_scheme_unquote,
  [sym_scheme_unquote_splicing] = sym_scheme_unquote_splicing,
  [sym_scheme_vector] = sym_scheme_vector,
  [sym_scheme_byte_vector] = sym_scheme_byte_vector,
  [sym_scheme_embedded_lilypond] = sym_scheme_embedded_lilypond,
  [sym_scheme_embedded_lilypond_text] = sym_scheme_embedded_lilypond_text,
  [sym_scheme_embedded_lilypond_text_fragment] = sym_scheme_embedded_lilypond_text_fragment,
  [sym_lilypond_string] = sym_lilypond_string,
  [sym_lilypond_string_fragment] = sym_lilypond_string_fragment,
  [aux_sym_scheme_program_repeat1] = aux_sym_scheme_program_repeat1,
  [aux_sym__scheme_block_comment_repeat1] = aux_sym__scheme_block_comment_repeat1,
  [aux_sym_scheme_string_repeat1] = aux_sym_scheme_string_repeat1,
  [aux_sym_scheme_quote_repeat1] = aux_sym_scheme_quote_repeat1,
  [aux_sym_scheme_embedded_lilypond_text_repeat1] = aux_sym_scheme_embedded_lilypond_text_repeat1,
  [aux_sym_scheme_embedded_lilypond_text_fragment_repeat1] = aux_sym_scheme_embedded_lilypond_text_fragment_repeat1,
  [aux_sym_lilypond_string_repeat1] = aux_sym_lilypond_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_scheme_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__scheme_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__scheme_block_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_scheme_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_character] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_scheme_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_scheme_keyword_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_scheme_string_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_scheme_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDvu8_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_scheme_embedded_lilypond_text_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_lilypond_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_lilypond_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_program] = {
    .visible = true,
    .named = true,
  },
  [sym__scheme_token] = {
    .visible = false,
    .named = true,
  },
  [sym_scheme_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__scheme_block_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__scheme_datum] = {
    .visible = false,
    .named = true,
  },
  [sym__scheme_simple_datum] = {
    .visible = false,
    .named = true,
  },
  [sym_scheme_number] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_string] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__scheme_compound_datum] = {
    .visible = false,
    .named = true,
  },
  [sym_scheme_list] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_quasiquote] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_unquote_splicing] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_byte_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_embedded_lilypond] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_embedded_lilypond_text] = {
    .visible = true,
    .named = true,
  },
  [sym_scheme_embedded_lilypond_text_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_lilypond_string] = {
    .visible = true,
    .named = true,
  },
  [sym_lilypond_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_scheme_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__scheme_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scheme_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scheme_quote_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scheme_embedded_lilypond_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scheme_embedded_lilypond_text_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lilypond_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 42,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 47,
  [52] = 50,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 30,
  [61] = 40,
  [62] = 62,
  [63] = 32,
  [64] = 21,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 67,
};

static TSCharacterRange sym_scheme_character_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', 0x9f}, {0xa1, 0x167f}, {0x1681, 0x1fff}, {0x200b, 0x2027}, {0x202a, 0x202e}, {0x2030, 0x205e},
  {0x2060, 0x2fff}, {0x3001, 0x10ffff},
};

static TSCharacterRange sym_scheme_keyword_name_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'$', '&'}, {'*', '+'}, {'-', ':'}, {'<', 'Z'}, {'^', '_'},
  {'a', 'z'}, {'|', '|'}, {'~', 0x9f}, {0xa1, 0x167f}, {0x1681, 0x1fff}, {0x200b, 0x2027}, {0x202a, 0x202e}, {0x2030, 0x205e},
  {0x2060, 0x2fff}, {0x3001, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(166);
      ADVANCE_MAP(
        '"', 274,
        '#', 27,
        '\'', 317,
        '(', 315,
        ')', 316,
        ',', 319,
        ';', 167,
        '\\', 50,
        '`', 318,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(164);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(273);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '%') ADVANCE(328);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '\\') ADVANCE(163);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '\\') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(211);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(62);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '|') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(171);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(173);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(234);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 25:
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '}') ADVANCE(327);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '%') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '(', 321,
        ':', 272,
        ';', 167,
        '\\', 63,
        'v', 49,
        '{', 323,
        '|', 168,
        '}', 324,
        'F', 175,
        'f', 175,
        'T', 176,
        't', 176,
      );
      END_STATE();
    case 28:
      ADVANCE_MAP(
        '(', 321,
        ':', 272,
        ';', 167,
        '\\', 63,
        'v', 49,
        '{', 323,
        '|', 168,
        'B', 4,
        'b', 4,
        'D', 18,
        'd', 18,
        'F', 175,
        'f', 175,
        'O', 21,
        'o', 21,
        'T', 176,
        't', 176,
        'X', 24,
        'x', 24,
        'E', 5,
        'I', 5,
        'e', 5,
        'i', 5,
      );
      END_STATE();
    case 29:
      if (lookahead == '(') ADVANCE(322);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(264);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == '0') ADVANCE(200);
      END_STATE();
    case 42:
      if (lookahead == '0') ADVANCE(259);
      END_STATE();
    case 43:
      if (lookahead == '0') ADVANCE(92);
      END_STATE();
    case 44:
      if (lookahead == '0') ADVANCE(256);
      END_STATE();
    case 45:
      if (lookahead == '0') ADVANCE(260);
      END_STATE();
    case 46:
      if (lookahead == '0') ADVANCE(261);
      END_STATE();
    case 47:
      if (lookahead == '8') ADVANCE(29);
      END_STATE();
    case 48:
      if (lookahead == ';') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 'x') ADVANCE(331);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 51:
      if (lookahead == 'x') ADVANCE(157);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 52:
      if (lookahead == '{') ADVANCE(323);
      if (lookahead == '}') ADVANCE(324);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 53:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(211);
      END_STATE();
    case 54:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(234);
      END_STATE();
    case 55:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 56:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(226);
      END_STATE();
    case 57:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(240);
      END_STATE();
    case 58:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    case 59:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 60:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 61:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 62:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 63:
      ADVANCE_MAP(
        'A', 185,
        'a', 185,
        'B', 179,
        'b', 179,
        'C', 180,
        'c', 180,
        'D', 186,
        'd', 186,
        'E', 192,
        'e', 192,
        'F', 197,
        'f', 197,
        'G', 194,
        'g', 194,
        'H', 195,
        'h', 195,
        'L', 189,
        'l', 189,
        'N', 178,
        'n', 178,
        'P', 181,
        'p', 181,
        'R', 187,
        'r', 187,
        'S', 193,
        's', 193,
        'T', 182,
        't', 182,
        'U', 194,
        'u', 194,
        'V', 196,
        'v', 196,
        'X', 199,
        'x', 199,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(198);
      if ((!eof && set_contains(sym_scheme_character_character_set_1, 10, lookahead))) ADVANCE(177);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 72:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(177);
      END_STATE();
    case 73:
      ADVANCE_MAP(
        'B', 53,
        'b', 53,
        'D', 30,
        'd', 30,
        'O', 54,
        'o', 54,
        'X', 55,
        'x', 55,
      );
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 83:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 84:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 85:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 86:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 87:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 88:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 89:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(40);
      END_STATE();
    case 90:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(263);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(219);
      END_STATE();
    case 92:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 95:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(226);
      END_STATE();
    case 96:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(240);
      END_STATE();
    case 97:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    case 98:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(264);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(11);
      END_STATE();
    case 99:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(264);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      END_STATE();
    case 100:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(264);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(236);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(268);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 103:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(177);
      END_STATE();
    case 104:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(127);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 108:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 109:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 110:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(177);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 118:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 119:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 120:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 121:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 122:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 123:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(177);
      END_STATE();
    case 124:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 125:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 126:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(79);
      END_STATE();
    case 127:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 128:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      END_STATE();
    case 129:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 130:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 131:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 132:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 133:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(109);
      END_STATE();
    case 134:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(177);
      END_STATE();
    case 135:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(224);
      END_STATE();
    case 136:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(228);
      END_STATE();
    case 137:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(230);
      END_STATE();
    case 138:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      END_STATE();
    case 139:
      if (lookahead == 'B' ||
          lookahead == 'X' ||
          lookahead == 'b' ||
          lookahead == 'x') ADVANCE(177);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 144:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(177);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(238);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(242);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(231);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(14);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 162:
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(273);
      END_STATE();
    case 163:
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 164:
      if (eof) ADVANCE(166);
      ADVANCE_MAP(
        '"', 274,
        '#', 27,
        '\'', 317,
        '(', 315,
        ')', 316,
        ',', 319,
        ';', 167,
        '`', 318,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(164);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 165:
      if (eof) ADVANCE(166);
      ADVANCE_MAP(
        '"', 274,
        '#', 28,
        '\'', 317,
        '(', 315,
        ')', 316,
        ',', 319,
        '.', 306,
        ';', 167,
        '`', 318,
        '+', 281,
        '-', 281,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_scheme_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__scheme_block_comment_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__scheme_block_comment_token2);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__scheme_block_comment_token2);
      if (lookahead == '#') ADVANCE(172);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(170);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__scheme_block_comment_token2);
      if (lookahead == '|') ADVANCE(168);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_scheme_boolean);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_scheme_boolean);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_scheme_boolean);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_scheme_character);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_scheme_character);
      ADVANCE_MAP(
        'A', 103,
        'a', 103,
        'E', 133,
        'e', 133,
        'U', 108,
        'u', 108,
        'L', 177,
        'P', 177,
        'l', 177,
        'p', 177,
      );
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(103);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(177);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(177);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_scheme_character);
      ADVANCE_MAP(
        'M', 177,
        'm', 177,
        'N', 123,
        'n', 123,
        'O', 128,
        'o', 128,
        'S', 76,
        's', 76,
        'T', 139,
        't', 139,
      );
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_scheme_character);
      ADVANCE_MAP(
        'O', 190,
        'o', 190,
        'P', 184,
        'p', 184,
        'T', 134,
        't', 134,
        'U', 72,
        'u', 72,
        'Y', 111,
        'y', 111,
        'I', 177,
        'S', 177,
        'i', 177,
        's', 177,
      );
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_scheme_character);
      if (lookahead == 'F' ||
          lookahead == 'S' ||
          lookahead == 'f' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_scheme_character);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_scheme_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '/') ADVANCE(306);
      if (lookahead == '@') ADVANCE(283);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(286);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(59);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '@') ADVANCE(283);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(286);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(59);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      ADVANCE_MAP(
        '#', 208,
        '.', 212,
        '/', 307,
        '@', 283,
        '+', 286,
        '-', 286,
        'I', 271,
        'i', 271,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      ADVANCE_MAP(
        '#', 208,
        '.', 213,
        '/', 151,
        '@', 34,
        '+', 37,
        '-', 37,
        'I', 200,
        'i', 200,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(60);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      ADVANCE_MAP(
        '#', 208,
        '.', 214,
        '/', 151,
        '@', 34,
        '+', 37,
        '-', 37,
        'I', 200,
        'i', 200,
      );
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '@') ADVANCE(283);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(286);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(271);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(60);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '.') ADVANCE(220);
      if (lookahead == '/') ADVANCE(310);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '/') ADVANCE(153);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '/') ADVANCE(153);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(61);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      ADVANCE_MAP(
        '#', 218,
        '/', 136,
        '@', 56,
        '+', 98,
        '-', 98,
        'I', 200,
        'i', 200,
        '0', 219,
        '1', 219,
      );
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(221);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(221);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(61);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(221);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '/') ADVANCE(137);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '/') ADVANCE(147);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '/') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '/') ADVANCE(160);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '/') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(283);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(286);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(283);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(286);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(271);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(283);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(297);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(298);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_scheme_number_token1);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_POUND_COLON);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_scheme_keyword_name);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_scheme_string_fragment_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_scheme_string_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_scheme_escape_sequence);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == '/') ADVANCE(311);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(271);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(271);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '.') ADVANCE(288);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '.') ADVANCE(289);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(305);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '.') ADVANCE(287);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(265);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '0') ADVANCE(271);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '0') ADVANCE(254);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '0') ADVANCE(301);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(303);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(280);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(282);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(285);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(271);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(280);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(282);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(285);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(299);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_scheme_symbol);
      if ((!eof && set_contains(sym_scheme_keyword_name_character_set_1, 18, lookahead))) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(320);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_POUNDvu8_LPAREN);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_scheme_embedded_lilypond_text_fragment_token1);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_scheme_embedded_lilypond_text_fragment_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%') ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_lilypond_comment);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_lilypond_comment);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(329);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_lilypond_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_lilypond_escape_sequence);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_lilypond_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 165},
  [2] = {.lex_state = 165},
  [3] = {.lex_state = 165},
  [4] = {.lex_state = 165},
  [5] = {.lex_state = 165},
  [6] = {.lex_state = 165},
  [7] = {.lex_state = 165},
  [8] = {.lex_state = 165},
  [9] = {.lex_state = 165},
  [10] = {.lex_state = 165},
  [11] = {.lex_state = 165},
  [12] = {.lex_state = 165},
  [13] = {.lex_state = 165},
  [14] = {.lex_state = 165},
  [15] = {.lex_state = 165},
  [16] = {.lex_state = 165},
  [17] = {.lex_state = 165},
  [18] = {.lex_state = 165},
  [19] = {.lex_state = 165},
  [20] = {.lex_state = 165},
  [21] = {.lex_state = 165},
  [22] = {.lex_state = 165},
  [23] = {.lex_state = 165},
  [24] = {.lex_state = 165},
  [25] = {.lex_state = 165},
  [26] = {.lex_state = 165},
  [27] = {.lex_state = 165},
  [28] = {.lex_state = 165},
  [29] = {.lex_state = 165},
  [30] = {.lex_state = 165},
  [31] = {.lex_state = 165},
  [32] = {.lex_state = 165},
  [33] = {.lex_state = 165},
  [34] = {.lex_state = 165},
  [35] = {.lex_state = 165},
  [36] = {.lex_state = 165},
  [37] = {.lex_state = 165},
  [38] = {.lex_state = 165},
  [39] = {.lex_state = 165},
  [40] = {.lex_state = 165},
  [41] = {.lex_state = 165},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 16},
  [51] = {.lex_state = 16},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 162},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_scheme_comment_token1] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [sym_scheme_boolean] = ACTIONS(1),
    [sym_scheme_character] = ACTIONS(1),
    [anon_sym_POUND_COLON] = ACTIONS(1),
    [sym_scheme_keyword_name] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_scheme_escape_sequence] = ACTIONS(1),
    [sym_scheme_symbol] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COMMA_AT] = ACTIONS(1),
    [anon_sym_POUND_LPAREN] = ACTIONS(1),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_POUND_RBRACE] = ACTIONS(1),
    [sym_lilypond_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_scheme_program] = STATE(69),
    [sym__scheme_token] = STATE(6),
    [sym_scheme_comment] = STATE(6),
    [sym__scheme_block_comment] = STATE(25),
    [sym__scheme_datum] = STATE(6),
    [sym__scheme_simple_datum] = STATE(6),
    [sym_scheme_number] = STATE(6),
    [sym_scheme_keyword] = STATE(6),
    [sym_scheme_string] = STATE(6),
    [sym__scheme_compound_datum] = STATE(6),
    [sym_scheme_list] = STATE(6),
    [sym_scheme_quote] = STATE(6),
    [sym_scheme_quasiquote] = STATE(6),
    [sym_scheme_unquote] = STATE(6),
    [sym_scheme_unquote_splicing] = STATE(6),
    [sym_scheme_vector] = STATE(6),
    [sym_scheme_byte_vector] = STATE(6),
    [sym_scheme_embedded_lilypond] = STATE(6),
    [aux_sym_scheme_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(9),
    [sym_scheme_character] = ACTIONS(9),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [2] = {
    [sym__scheme_token] = STATE(2),
    [sym_scheme_comment] = STATE(2),
    [sym__scheme_block_comment] = STATE(25),
    [sym__scheme_datum] = STATE(2),
    [sym__scheme_simple_datum] = STATE(2),
    [sym_scheme_number] = STATE(2),
    [sym_scheme_keyword] = STATE(2),
    [sym_scheme_string] = STATE(2),
    [sym__scheme_compound_datum] = STATE(2),
    [sym_scheme_list] = STATE(2),
    [sym_scheme_quote] = STATE(2),
    [sym_scheme_quasiquote] = STATE(2),
    [sym_scheme_unquote] = STATE(2),
    [sym_scheme_unquote_splicing] = STATE(2),
    [sym_scheme_vector] = STATE(2),
    [sym_scheme_byte_vector] = STATE(2),
    [sym_scheme_embedded_lilypond] = STATE(2),
    [aux_sym_scheme_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym_scheme_comment_token1] = ACTIONS(37),
    [anon_sym_POUND_PIPE] = ACTIONS(40),
    [sym_scheme_boolean] = ACTIONS(43),
    [sym_scheme_character] = ACTIONS(43),
    [aux_sym_scheme_number_token1] = ACTIONS(46),
    [anon_sym_POUND_COLON] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(52),
    [sym_scheme_symbol] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [anon_sym_BQUOTE] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_COMMA_AT] = ACTIONS(70),
    [anon_sym_POUND_LPAREN] = ACTIONS(73),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(76),
    [anon_sym_POUND_LBRACE] = ACTIONS(79),
  },
  [3] = {
    [sym__scheme_token] = STATE(8),
    [sym_scheme_comment] = STATE(8),
    [sym__scheme_block_comment] = STATE(25),
    [sym__scheme_datum] = STATE(8),
    [sym__scheme_simple_datum] = STATE(8),
    [sym_scheme_number] = STATE(8),
    [sym_scheme_keyword] = STATE(8),
    [sym_scheme_string] = STATE(8),
    [sym__scheme_compound_datum] = STATE(8),
    [sym_scheme_list] = STATE(8),
    [sym_scheme_quote] = STATE(8),
    [sym_scheme_quasiquote] = STATE(8),
    [sym_scheme_unquote] = STATE(8),
    [sym_scheme_unquote_splicing] = STATE(8),
    [sym_scheme_vector] = STATE(8),
    [sym_scheme_byte_vector] = STATE(8),
    [sym_scheme_embedded_lilypond] = STATE(8),
    [aux_sym_scheme_program_repeat1] = STATE(8),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(82),
    [sym_scheme_character] = ACTIONS(82),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(86),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [4] = {
    [sym__scheme_token] = STATE(9),
    [sym_scheme_comment] = STATE(9),
    [sym__scheme_block_comment] = STATE(25),
    [sym__scheme_datum] = STATE(9),
    [sym__scheme_simple_datum] = STATE(9),
    [sym_scheme_number] = STATE(9),
    [sym_scheme_keyword] = STATE(9),
    [sym_scheme_string] = STATE(9),
    [sym__scheme_compound_datum] = STATE(9),
    [sym_scheme_list] = STATE(9),
    [sym_scheme_quote] = STATE(9),
    [sym_scheme_quasiquote] = STATE(9),
    [sym_scheme_unquote] = STATE(9),
    [sym_scheme_unquote_splicing] = STATE(9),
    [sym_scheme_vector] = STATE(9),
    [sym_scheme_byte_vector] = STATE(9),
    [sym_scheme_embedded_lilypond] = STATE(9),
    [aux_sym_scheme_program_repeat1] = STATE(9),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(88),
    [sym_scheme_character] = ACTIONS(88),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [5] = {
    [sym__scheme_token] = STATE(7),
    [sym_scheme_comment] = STATE(7),
    [sym__scheme_block_comment] = STATE(25),
    [sym__scheme_datum] = STATE(7),
    [sym__scheme_simple_datum] = STATE(7),
    [sym_scheme_number] = STATE(7),
    [sym_scheme_keyword] = STATE(7),
    [sym_scheme_string] = STATE(7),
    [sym__scheme_compound_datum] = STATE(7),
    [sym_scheme_list] = STATE(7),
    [sym_scheme_quote] = STATE(7),
    [sym_scheme_quasiquote] = STATE(7),
    [sym_scheme_unquote] = STATE(7),
    [sym_scheme_unquote_splicing] = STATE(7),
    [sym_scheme_vector] = STATE(7),
    [sym_scheme_byte_vector] = STATE(7),
    [sym_scheme_embedded_lilypond] = STATE(7),
    [aux_sym_scheme_program_repeat1] = STATE(7),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(94),
    [sym_scheme_character] = ACTIONS(94),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [6] = {
    [sym__scheme_token] = STATE(2),
    [sym_scheme_comment] = STATE(2),
    [sym__scheme_block_comment] = STATE(25),
    [sym__scheme_datum] = STATE(2),
    [sym__scheme_simple_datum] = STATE(2),
    [sym_scheme_number] = STATE(2),
    [sym_scheme_keyword] = STATE(2),
    [sym_scheme_string] = STATE(2),
    [sym__scheme_compound_datum] = STATE(2),
    [sym_scheme_list] = STATE(2),
    [sym_scheme_quote] = STATE(2),
    [sym_scheme_quasiquote] = STATE(2),
    [sym_scheme_unquote] = STATE(2),
    [sym_scheme_unquote_splicing] = STATE(2),
    [sym_scheme_vector] = STATE(2),
    [sym_scheme_byte_vector] = STATE(2),
    [sym_scheme_embedded_lilypond] = STATE(2),
    [aux_sym_scheme_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(102),
    [sym_scheme_character] = ACTIONS(102),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [7] = {
    [sym__scheme_token] = STATE(2),
    [sym_scheme_comment] = STATE(2),
    [sym__scheme_block_comment] = STATE(25),
    [sym__scheme_datum] = STATE(2),
    [sym__scheme_simple_datum] = STATE(2),
    [sym_scheme_number] = STATE(2),
    [sym_scheme_keyword] = STATE(2),
    [sym_scheme_string] = STATE(2),
    [sym__scheme_compound_datum] = STATE(2),
    [sym_scheme_list] = STATE(2),
    [sym_scheme_quote] = STATE(2),
    [sym_scheme_quasiquote] = STATE(2),
    [sym_scheme_unquote] = STATE(2),
    [sym_scheme_unquote_splicing] = STATE(2),
    [sym_scheme_vector] = STATE(2),
    [sym_scheme_byte_vector] = STATE(2),
    [sym_scheme_embedded_lilypond] = STATE(2),
    [aux_sym_scheme_program_repeat1] = STATE(2),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(102),
    [sym_scheme_character] = ACTIONS(102),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [8] = {
    [sym__scheme_token] = STATE(2),
    [sym_scheme_comment] = STATE(2),
    [sym__scheme_block_comment] = STATE(25),
    [sym__scheme_datum] = STATE(2),
    [sym__scheme_simple_datum] = STATE(2),
    [sym_scheme_number] = STATE(2),
    [sym_scheme_keyword] = STATE(2),
    [sym_scheme_string] = STATE(2),
    [sym__scheme_compound_datum] = STATE(2),
    [sym_scheme_list] = STATE(2),
    [sym_scheme_quote] = STATE(2),
    [sym_scheme_quasiquote] = STATE(2),
    [sym_scheme_unquote] = STATE(2),
    [sym_scheme_unquote_splicing] = STATE(2),
    [sym_scheme_vector] = STATE(2),
    [sym_scheme_byte_vector] = STATE(2),
    [sym_scheme_embedded_lilypond] = STATE(2),
    [aux_sym_scheme_program_repeat1] = STATE(2),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(102),
    [sym_scheme_character] = ACTIONS(102),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [9] = {
    [sym__scheme_token] = STATE(2),
    [sym_scheme_comment] = STATE(2),
    [sym__scheme_block_comment] = STATE(25),
    [sym__scheme_datum] = STATE(2),
    [sym__scheme_simple_datum] = STATE(2),
    [sym_scheme_number] = STATE(2),
    [sym_scheme_keyword] = STATE(2),
    [sym_scheme_string] = STATE(2),
    [sym__scheme_compound_datum] = STATE(2),
    [sym_scheme_list] = STATE(2),
    [sym_scheme_quote] = STATE(2),
    [sym_scheme_quasiquote] = STATE(2),
    [sym_scheme_unquote] = STATE(2),
    [sym_scheme_unquote_splicing] = STATE(2),
    [sym_scheme_vector] = STATE(2),
    [sym_scheme_byte_vector] = STATE(2),
    [sym_scheme_embedded_lilypond] = STATE(2),
    [aux_sym_scheme_program_repeat1] = STATE(2),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(102),
    [sym_scheme_character] = ACTIONS(102),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [10] = {
    [sym_scheme_comment] = STATE(18),
    [sym__scheme_block_comment] = STATE(25),
    [sym__scheme_datum] = STATE(39),
    [sym__scheme_simple_datum] = STATE(39),
    [sym_scheme_number] = STATE(39),
    [sym_scheme_keyword] = STATE(39),
    [sym_scheme_string] = STATE(39),
    [sym__scheme_compound_datum] = STATE(39),
    [sym_scheme_list] = STATE(39),
    [sym_scheme_quote] = STATE(39),
    [sym_scheme_quasiquote] = STATE(39),
    [sym_scheme_unquote] = STATE(39),
    [sym_scheme_unquote_splicing] = STATE(39),
    [sym_scheme_vector] = STATE(39),
    [sym_scheme_byte_vector] = STATE(39),
    [sym_scheme_embedded_lilypond] = STATE(39),
    [aux_sym_scheme_quote_repeat1] = STATE(18),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(112),
    [sym_scheme_character] = ACTIONS(112),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [11] = {
    [sym_scheme_comment] = STATE(10),
    [sym__scheme_block_comment] = STATE(25),
    [sym__scheme_datum] = STATE(24),
    [sym__scheme_simple_datum] = STATE(24),
    [sym_scheme_number] = STATE(24),
    [sym_scheme_keyword] = STATE(24),
    [sym_scheme_string] = STATE(24),
    [sym__scheme_compound_datum] = STATE(24),
    [sym_scheme_list] = STATE(24),
    [sym_scheme_quote] = STATE(24),
    [sym_scheme_quasiquote] = STATE(24),
    [sym_scheme_unquote] = STATE(24),
    [sym_scheme_unquote_splicing] = STATE(24),
    [sym_scheme_vector] = STATE(24),
    [sym_scheme_byte_vector] = STATE(24),
    [sym_scheme_embedded_lilypond] = STATE(24),
    [aux_sym_scheme_quote_repeat1] = STATE(10),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(116),
    [sym_scheme_character] = ACTIONS(116),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [12] = {
    [sym_scheme_comment] = STATE(18),
    [sym__scheme_block_comment] = STATE(25),
    [sym__scheme_datum] = STATE(35),
    [sym__scheme_simple_datum] = STATE(35),
    [sym_scheme_number] = STATE(35),
    [sym_scheme_keyword] = STATE(35),
    [sym_scheme_string] = STATE(35),
    [sym__scheme_compound_datum] = STATE(35),
    [sym_scheme_list] = STATE(35),
    [sym_scheme_quote] = STATE(35),
    [sym_scheme_quasiquote] = STATE(35),
    [sym_scheme_unquote] = STATE(35),
    [sym_scheme_unquote_splicing] = STATE(35),
    [sym_scheme_vector] = STATE(35),
    [sym_scheme_byte_vector] = STATE(35),
    [sym_scheme_embedded_lilypond] = STATE(35),
    [aux_sym_scheme_quote_repeat1] = STATE(18),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(120),
    [sym_scheme_character] = ACTIONS(120),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [13] = {
    [sym_scheme_comment] = STATE(18),
    [sym__scheme_block_comment] = STATE(25),
    [sym__scheme_datum] = STATE(37),
    [sym__scheme_simple_datum] = STATE(37),
    [sym_scheme_number] = STATE(37),
    [sym_scheme_keyword] = STATE(37),
    [sym_scheme_string] = STATE(37),
    [sym__scheme_compound_datum] = STATE(37),
    [sym_scheme_list] = STATE(37),
    [sym_scheme_quote] = STATE(37),
    [sym_scheme_quasiquote] = STATE(37),
    [sym_scheme_unquote] = STATE(37),
    [sym_scheme_unquote_splicing] = STATE(37),
    [sym_scheme_vector] = STATE(37),
    [sym_scheme_byte_vector] = STATE(37),
    [sym_scheme_embedded_lilypond] = STATE(37),
    [aux_sym_scheme_quote_repeat1] = STATE(18),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(124),
    [sym_scheme_character] = ACTIONS(124),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [14] = {
    [sym_scheme_comment] = STATE(18),
    [sym__scheme_block_comment] = STATE(25),
    [sym__scheme_datum] = STATE(19),
    [sym__scheme_simple_datum] = STATE(19),
    [sym_scheme_number] = STATE(19),
    [sym_scheme_keyword] = STATE(19),
    [sym_scheme_string] = STATE(19),
    [sym__scheme_compound_datum] = STATE(19),
    [sym_scheme_list] = STATE(19),
    [sym_scheme_quote] = STATE(19),
    [sym_scheme_quasiquote] = STATE(19),
    [sym_scheme_unquote] = STATE(19),
    [sym_scheme_unquote_splicing] = STATE(19),
    [sym_scheme_vector] = STATE(19),
    [sym_scheme_byte_vector] = STATE(19),
    [sym_scheme_embedded_lilypond] = STATE(19),
    [aux_sym_scheme_quote_repeat1] = STATE(18),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(128),
    [sym_scheme_character] = ACTIONS(128),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [15] = {
    [sym_scheme_comment] = STATE(12),
    [sym__scheme_block_comment] = STATE(25),
    [sym__scheme_datum] = STATE(31),
    [sym__scheme_simple_datum] = STATE(31),
    [sym_scheme_number] = STATE(31),
    [sym_scheme_keyword] = STATE(31),
    [sym_scheme_string] = STATE(31),
    [sym__scheme_compound_datum] = STATE(31),
    [sym_scheme_list] = STATE(31),
    [sym_scheme_quote] = STATE(31),
    [sym_scheme_quasiquote] = STATE(31),
    [sym_scheme_unquote] = STATE(31),
    [sym_scheme_unquote_splicing] = STATE(31),
    [sym_scheme_vector] = STATE(31),
    [sym_scheme_byte_vector] = STATE(31),
    [sym_scheme_embedded_lilypond] = STATE(31),
    [aux_sym_scheme_quote_repeat1] = STATE(12),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(132),
    [sym_scheme_character] = ACTIONS(132),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [16] = {
    [sym_scheme_comment] = STATE(13),
    [sym__scheme_block_comment] = STATE(25),
    [sym__scheme_datum] = STATE(38),
    [sym__scheme_simple_datum] = STATE(38),
    [sym_scheme_number] = STATE(38),
    [sym_scheme_keyword] = STATE(38),
    [sym_scheme_string] = STATE(38),
    [sym__scheme_compound_datum] = STATE(38),
    [sym_scheme_list] = STATE(38),
    [sym_scheme_quote] = STATE(38),
    [sym_scheme_quasiquote] = STATE(38),
    [sym_scheme_unquote] = STATE(38),
    [sym_scheme_unquote_splicing] = STATE(38),
    [sym_scheme_vector] = STATE(38),
    [sym_scheme_byte_vector] = STATE(38),
    [sym_scheme_embedded_lilypond] = STATE(38),
    [aux_sym_scheme_quote_repeat1] = STATE(13),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(136),
    [sym_scheme_character] = ACTIONS(136),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
  [17] = {
    [sym_scheme_comment] = STATE(14),
    [sym__scheme_block_comment] = STATE(25),
    [sym__scheme_datum] = STATE(22),
    [sym__scheme_simple_datum] = STATE(22),
    [sym_scheme_number] = STATE(22),
    [sym_scheme_keyword] = STATE(22),
    [sym_scheme_string] = STATE(22),
    [sym__scheme_compound_datum] = STATE(22),
    [sym_scheme_list] = STATE(22),
    [sym_scheme_quote] = STATE(22),
    [sym_scheme_quasiquote] = STATE(22),
    [sym_scheme_unquote] = STATE(22),
    [sym_scheme_unquote_splicing] = STATE(22),
    [sym_scheme_vector] = STATE(22),
    [sym_scheme_byte_vector] = STATE(22),
    [sym_scheme_embedded_lilypond] = STATE(22),
    [aux_sym_scheme_quote_repeat1] = STATE(14),
    [aux_sym_scheme_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [sym_scheme_boolean] = ACTIONS(140),
    [sym_scheme_character] = ACTIONS(140),
    [aux_sym_scheme_number_token1] = ACTIONS(11),
    [anon_sym_POUND_COLON] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_scheme_symbol] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_POUND_LPAREN] = ACTIONS(29),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(31),
    [anon_sym_POUND_LBRACE] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(144), 1,
      aux_sym_scheme_comment_token1,
    ACTIONS(147), 1,
      anon_sym_POUND_PIPE,
    STATE(25), 1,
      sym__scheme_block_comment,
    STATE(18), 2,
      sym_scheme_comment,
      aux_sym_scheme_quote_repeat1,
    ACTIONS(152), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(150), 11,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [32] = 2,
    ACTIONS(156), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(154), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [55] = 2,
    ACTIONS(160), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(158), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [78] = 2,
    ACTIONS(164), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(162), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [101] = 2,
    ACTIONS(168), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(166), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [124] = 2,
    ACTIONS(172), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(170), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [147] = 2,
    ACTIONS(176), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(174), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [170] = 2,
    ACTIONS(180), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(178), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [193] = 2,
    ACTIONS(184), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(182), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [216] = 2,
    ACTIONS(188), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(186), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [239] = 2,
    ACTIONS(192), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(190), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [262] = 2,
    ACTIONS(196), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(194), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [285] = 2,
    ACTIONS(200), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(198), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [308] = 2,
    ACTIONS(204), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(202), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [331] = 2,
    ACTIONS(208), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(206), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [354] = 2,
    ACTIONS(212), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(210), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [377] = 2,
    ACTIONS(216), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(214), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [400] = 2,
    ACTIONS(220), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(218), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [423] = 2,
    ACTIONS(224), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(222), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [446] = 2,
    ACTIONS(228), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(226), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [469] = 2,
    ACTIONS(232), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(230), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [492] = 2,
    ACTIONS(236), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(234), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [515] = 2,
    ACTIONS(240), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(238), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [538] = 2,
    ACTIONS(244), 3,
      aux_sym_scheme_number_token1,
      sym_scheme_symbol,
      anon_sym_COMMA,
    ACTIONS(242), 15,
      ts_builtin_sym_end,
      aux_sym_scheme_comment_token1,
      anon_sym_POUND_PIPE,
      sym_scheme_boolean,
      sym_scheme_character,
      anon_sym_POUND_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
      anon_sym_POUND_LBRACE,
  [561] = 8,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(250), 1,
      anon_sym_POUND_RBRACE,
    ACTIONS(252), 1,
      aux_sym_scheme_embedded_lilypond_text_fragment_token1,
    ACTIONS(254), 1,
      sym_lilypond_comment,
    STATE(48), 1,
      aux_sym_scheme_embedded_lilypond_text_fragment_repeat1,
    STATE(70), 1,
      sym_scheme_embedded_lilypond_text,
    STATE(44), 4,
      sym_scheme_embedded_lilypond,
      sym_scheme_embedded_lilypond_text_fragment,
      sym_lilypond_string,
      aux_sym_scheme_embedded_lilypond_text_repeat1,
  [589] = 8,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(252), 1,
      aux_sym_scheme_embedded_lilypond_text_fragment_token1,
    ACTIONS(254), 1,
      sym_lilypond_comment,
    ACTIONS(256), 1,
      anon_sym_POUND_RBRACE,
    STATE(48), 1,
      aux_sym_scheme_embedded_lilypond_text_fragment_repeat1,
    STATE(67), 1,
      sym_scheme_embedded_lilypond_text,
    STATE(44), 4,
      sym_scheme_embedded_lilypond,
      sym_scheme_embedded_lilypond_text_fragment,
      sym_lilypond_string,
      aux_sym_scheme_embedded_lilypond_text_repeat1,
  [617] = 7,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(252), 1,
      aux_sym_scheme_embedded_lilypond_text_fragment_token1,
    ACTIONS(258), 1,
      anon_sym_POUND_RBRACE,
    ACTIONS(260), 1,
      sym_lilypond_comment,
    STATE(48), 1,
      aux_sym_scheme_embedded_lilypond_text_fragment_repeat1,
    STATE(45), 4,
      sym_scheme_embedded_lilypond,
      sym_scheme_embedded_lilypond_text_fragment,
      sym_lilypond_string,
      aux_sym_scheme_embedded_lilypond_text_repeat1,
  [642] = 7,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(268), 1,
      anon_sym_POUND_RBRACE,
    ACTIONS(270), 1,
      aux_sym_scheme_embedded_lilypond_text_fragment_token1,
    ACTIONS(273), 1,
      sym_lilypond_comment,
    STATE(48), 1,
      aux_sym_scheme_embedded_lilypond_text_fragment_repeat1,
    STATE(45), 4,
      sym_scheme_embedded_lilypond,
      sym_scheme_embedded_lilypond_text_fragment,
      sym_lilypond_string,
      aux_sym_scheme_embedded_lilypond_text_repeat1,
  [667] = 3,
    ACTIONS(278), 1,
      aux_sym_scheme_embedded_lilypond_text_fragment_token1,
    STATE(46), 1,
      aux_sym_scheme_embedded_lilypond_text_fragment_repeat1,
    ACTIONS(276), 4,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND_RBRACE,
      sym_lilypond_comment,
  [680] = 4,
    ACTIONS(281), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(285), 1,
      anon_sym_PIPE_POUND,
    ACTIONS(283), 2,
      aux_sym__scheme_block_comment_token1,
      aux_sym__scheme_block_comment_token2,
    STATE(50), 2,
      sym__scheme_block_comment,
      aux_sym__scheme_block_comment_repeat1,
  [695] = 3,
    ACTIONS(289), 1,
      aux_sym_scheme_embedded_lilypond_text_fragment_token1,
    STATE(46), 1,
      aux_sym_scheme_embedded_lilypond_text_fragment_repeat1,
    ACTIONS(287), 4,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND_RBRACE,
      sym_lilypond_comment,
  [708] = 4,
    ACTIONS(292), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(298), 1,
      anon_sym_PIPE_POUND,
    ACTIONS(295), 2,
      aux_sym__scheme_block_comment_token1,
      aux_sym__scheme_block_comment_token2,
    STATE(49), 2,
      sym__scheme_block_comment,
      aux_sym__scheme_block_comment_repeat1,
  [723] = 4,
    ACTIONS(281), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(302), 1,
      anon_sym_PIPE_POUND,
    ACTIONS(300), 2,
      aux_sym__scheme_block_comment_token1,
      aux_sym__scheme_block_comment_token2,
    STATE(49), 2,
      sym__scheme_block_comment,
      aux_sym__scheme_block_comment_repeat1,
  [738] = 4,
    ACTIONS(281), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(306), 1,
      anon_sym_PIPE_POUND,
    ACTIONS(304), 2,
      aux_sym__scheme_block_comment_token1,
      aux_sym__scheme_block_comment_token2,
    STATE(52), 2,
      sym__scheme_block_comment,
      aux_sym__scheme_block_comment_repeat1,
  [753] = 4,
    ACTIONS(281), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(308), 1,
      anon_sym_PIPE_POUND,
    ACTIONS(300), 2,
      aux_sym__scheme_block_comment_token1,
      aux_sym__scheme_block_comment_token2,
    STATE(49), 2,
      sym__scheme_block_comment,
      aux_sym__scheme_block_comment_repeat1,
  [768] = 4,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(312), 1,
      aux_sym_scheme_string_fragment_token1,
    ACTIONS(314), 1,
      sym_lilypond_escape_sequence,
    STATE(56), 2,
      sym_lilypond_string_fragment,
      aux_sym_lilypond_string_repeat1,
  [782] = 4,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      aux_sym_scheme_string_fragment_token1,
    ACTIONS(320), 1,
      sym_scheme_escape_sequence,
    STATE(57), 2,
      sym_scheme_string_fragment,
      aux_sym_scheme_string_repeat1,
  [796] = 1,
    ACTIONS(322), 5,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND_RBRACE,
      aux_sym_scheme_embedded_lilypond_text_fragment_token1,
      sym_lilypond_comment,
  [804] = 4,
    ACTIONS(312), 1,
      aux_sym_scheme_string_fragment_token1,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      sym_lilypond_escape_sequence,
    STATE(58), 2,
      sym_lilypond_string_fragment,
      aux_sym_lilypond_string_repeat1,
  [818] = 4,
    ACTIONS(328), 1,
      anon_sym_DQUOTE,
    ACTIONS(330), 1,
      aux_sym_scheme_string_fragment_token1,
    ACTIONS(333), 1,
      sym_scheme_escape_sequence,
    STATE(57), 2,
      sym_scheme_string_fragment,
      aux_sym_scheme_string_repeat1,
  [832] = 4,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      aux_sym_scheme_string_fragment_token1,
    ACTIONS(341), 1,
      sym_lilypond_escape_sequence,
    STATE(58), 2,
      sym_lilypond_string_fragment,
      aux_sym_lilypond_string_repeat1,
  [846] = 1,
    ACTIONS(344), 5,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND_RBRACE,
      aux_sym_scheme_embedded_lilypond_text_fragment_token1,
      sym_lilypond_comment,
  [854] = 1,
    ACTIONS(198), 5,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND_RBRACE,
      aux_sym_scheme_embedded_lilypond_text_fragment_token1,
      sym_lilypond_comment,
  [862] = 1,
    ACTIONS(238), 5,
      anon_sym_DQUOTE,
      anon_sym_POUND_LBRACE,
      anon_sym_POUND_RBRACE,
      aux_sym_scheme_embedded_lilypond_text_fragment_token1,
      sym_lilypond_comment,
  [870] = 4,
    ACTIONS(318), 1,
      aux_sym_scheme_string_fragment_token1,
    ACTIONS(346), 1,
      anon_sym_DQUOTE,
    ACTIONS(348), 1,
      sym_scheme_escape_sequence,
    STATE(54), 2,
      sym_scheme_string_fragment,
      aux_sym_scheme_string_repeat1,
  [884] = 1,
    ACTIONS(208), 4,
      anon_sym_POUND_PIPE,
      aux_sym__scheme_block_comment_token1,
      aux_sym__scheme_block_comment_token2,
      anon_sym_PIPE_POUND,
  [891] = 1,
    ACTIONS(164), 4,
      anon_sym_POUND_PIPE,
      aux_sym__scheme_block_comment_token1,
      aux_sym__scheme_block_comment_token2,
      anon_sym_PIPE_POUND,
  [898] = 2,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 2,
      aux_sym_scheme_string_fragment_token1,
      sym_scheme_escape_sequence,
  [906] = 2,
    ACTIONS(354), 1,
      anon_sym_DQUOTE,
    ACTIONS(356), 2,
      aux_sym_scheme_string_fragment_token1,
      sym_lilypond_escape_sequence,
  [914] = 1,
    ACTIONS(358), 1,
      anon_sym_POUND_RBRACE,
  [918] = 1,
    ACTIONS(360), 1,
      sym_scheme_keyword_name,
  [922] = 1,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
  [926] = 1,
    ACTIONS(364), 1,
      anon_sym_POUND_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 32,
  [SMALL_STATE(20)] = 55,
  [SMALL_STATE(21)] = 78,
  [SMALL_STATE(22)] = 101,
  [SMALL_STATE(23)] = 124,
  [SMALL_STATE(24)] = 147,
  [SMALL_STATE(25)] = 170,
  [SMALL_STATE(26)] = 193,
  [SMALL_STATE(27)] = 216,
  [SMALL_STATE(28)] = 239,
  [SMALL_STATE(29)] = 262,
  [SMALL_STATE(30)] = 285,
  [SMALL_STATE(31)] = 308,
  [SMALL_STATE(32)] = 331,
  [SMALL_STATE(33)] = 354,
  [SMALL_STATE(34)] = 377,
  [SMALL_STATE(35)] = 400,
  [SMALL_STATE(36)] = 423,
  [SMALL_STATE(37)] = 446,
  [SMALL_STATE(38)] = 469,
  [SMALL_STATE(39)] = 492,
  [SMALL_STATE(40)] = 515,
  [SMALL_STATE(41)] = 538,
  [SMALL_STATE(42)] = 561,
  [SMALL_STATE(43)] = 589,
  [SMALL_STATE(44)] = 617,
  [SMALL_STATE(45)] = 642,
  [SMALL_STATE(46)] = 667,
  [SMALL_STATE(47)] = 680,
  [SMALL_STATE(48)] = 695,
  [SMALL_STATE(49)] = 708,
  [SMALL_STATE(50)] = 723,
  [SMALL_STATE(51)] = 738,
  [SMALL_STATE(52)] = 753,
  [SMALL_STATE(53)] = 768,
  [SMALL_STATE(54)] = 782,
  [SMALL_STATE(55)] = 796,
  [SMALL_STATE(56)] = 804,
  [SMALL_STATE(57)] = 818,
  [SMALL_STATE(58)] = 832,
  [SMALL_STATE(59)] = 846,
  [SMALL_STATE(60)] = 854,
  [SMALL_STATE(61)] = 862,
  [SMALL_STATE(62)] = 870,
  [SMALL_STATE(63)] = 884,
  [SMALL_STATE(64)] = 891,
  [SMALL_STATE(65)] = 898,
  [SMALL_STATE(66)] = 906,
  [SMALL_STATE(67)] = 914,
  [SMALL_STATE(68)] = 918,
  [SMALL_STATE(69)] = 922,
  [SMALL_STATE(70)] = 926,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scheme_program_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scheme_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scheme_program_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_program_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_program, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scheme_quote_repeat1, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scheme_quote_repeat1, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_unquote, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_unquote, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_number, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_number, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scheme_block_comment, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__scheme_block_comment, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_unquote, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_unquote, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_keyword, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_keyword, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_unquote_splicing, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_unquote_splicing, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_comment, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_comment, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_vector, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_vector, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_string, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_string, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_byte_vector, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_byte_vector, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_list, 2, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_list, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_embedded_lilypond, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_embedded_lilypond, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_quote, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_quote, 2, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scheme_block_comment, 3, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__scheme_block_comment, 3, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_string, 3, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_string, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_list, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_list, 3, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_quote, 3, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_quote, 3, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_vector, 3, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_vector, 3, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_quasiquote, 3, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_quasiquote, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_quasiquote, 2, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_quasiquote, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_unquote_splicing, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_unquote_splicing, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_embedded_lilypond, 3, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_embedded_lilypond, 3, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_byte_vector, 3, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_byte_vector, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_embedded_lilypond_text, 1, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_embedded_lilypond_text_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_embedded_lilypond_text_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scheme_embedded_lilypond_text_repeat1, 2, 0, 0),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_embedded_lilypond_text_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_embedded_lilypond_text_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scheme_embedded_lilypond_text_fragment_repeat1, 2, 0, 0),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_embedded_lilypond_text_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_embedded_lilypond_text_fragment, 1, 0, 0),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scheme_embedded_lilypond_text_fragment, 1, 0, 0), SHIFT(46),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__scheme_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__scheme_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__scheme_block_comment_repeat1, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lilypond_string, 2, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scheme_string_repeat1, 2, 0, 0),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_string_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scheme_string_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_lilypond_string_repeat1, 2, 0, 0),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lilypond_string_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lilypond_string_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lilypond_string, 3, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scheme_string_fragment, 1, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme_string_fragment, 1, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lilypond_string_fragment, 1, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lilypond_string_fragment, 1, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [362] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_lilypond_scheme(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

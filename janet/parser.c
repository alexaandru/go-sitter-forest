#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 41
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_false = 2,
  anon_sym_true = 3,
  aux_sym_kwd_lit_token1 = 4,
  sym_nil_lit = 5,
  sym__radix = 6,
  sym__hex = 7,
  sym__dec = 8,
  sym_str_lit = 9,
  sym_buf_lit = 10,
  sym_sym_lit = 11,
  anon_sym_AT_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_AT_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_AT_LBRACE = 18,
  anon_sym_LPAREN = 19,
  anon_sym_LBRACK = 20,
  anon_sym_TILDE = 21,
  anon_sym_SQUOTE = 22,
  anon_sym_PIPE = 23,
  anon_sym_SEMI = 24,
  anon_sym_COMMA = 25,
  sym_long_buf_lit = 26,
  sym_long_str_lit = 27,
  sym_source = 28,
  sym__lit = 29,
  sym_bool_lit = 30,
  sym_kwd_lit = 31,
  sym_num_lit = 32,
  sym_par_arr_lit = 33,
  sym_sqr_arr_lit = 34,
  sym_struct_lit = 35,
  sym_tbl_lit = 36,
  sym_par_tup_lit = 37,
  sym_sqr_tup_lit = 38,
  sym_qq_lit = 39,
  sym_quote_lit = 40,
  sym_short_fn_lit = 41,
  sym_splice_lit = 42,
  sym_unquote_lit = 43,
  aux_sym_source_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_false] = "false",
  [anon_sym_true] = "true",
  [aux_sym_kwd_lit_token1] = "kwd_lit_token1",
  [sym_nil_lit] = "nil_lit",
  [sym__radix] = "_radix",
  [sym__hex] = "_hex",
  [sym__dec] = "_dec",
  [sym_str_lit] = "str_lit",
  [sym_buf_lit] = "buf_lit",
  [sym_sym_lit] = "sym_lit",
  [anon_sym_AT_LPAREN] = "@(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_AT_LBRACK] = "@[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_TILDE] = "~",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_PIPE] = "|",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [sym_long_buf_lit] = "long_buf_lit",
  [sym_long_str_lit] = "long_str_lit",
  [sym_source] = "source",
  [sym__lit] = "_lit",
  [sym_bool_lit] = "bool_lit",
  [sym_kwd_lit] = "kwd_lit",
  [sym_num_lit] = "num_lit",
  [sym_par_arr_lit] = "par_arr_lit",
  [sym_sqr_arr_lit] = "sqr_arr_lit",
  [sym_struct_lit] = "struct_lit",
  [sym_tbl_lit] = "tbl_lit",
  [sym_par_tup_lit] = "par_tup_lit",
  [sym_sqr_tup_lit] = "sqr_tup_lit",
  [sym_qq_lit] = "qq_lit",
  [sym_quote_lit] = "quote_lit",
  [sym_short_fn_lit] = "short_fn_lit",
  [sym_splice_lit] = "splice_lit",
  [sym_unquote_lit] = "unquote_lit",
  [aux_sym_source_repeat1] = "source_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_true] = anon_sym_true,
  [aux_sym_kwd_lit_token1] = aux_sym_kwd_lit_token1,
  [sym_nil_lit] = sym_nil_lit,
  [sym__radix] = sym__radix,
  [sym__hex] = sym__hex,
  [sym__dec] = sym__dec,
  [sym_str_lit] = sym_str_lit,
  [sym_buf_lit] = sym_buf_lit,
  [sym_sym_lit] = sym_sym_lit,
  [anon_sym_AT_LPAREN] = anon_sym_AT_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_AT_LBRACK] = anon_sym_AT_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_long_buf_lit] = sym_long_buf_lit,
  [sym_long_str_lit] = sym_long_str_lit,
  [sym_source] = sym_source,
  [sym__lit] = sym__lit,
  [sym_bool_lit] = sym_bool_lit,
  [sym_kwd_lit] = sym_kwd_lit,
  [sym_num_lit] = sym_num_lit,
  [sym_par_arr_lit] = sym_par_arr_lit,
  [sym_sqr_arr_lit] = sym_sqr_arr_lit,
  [sym_struct_lit] = sym_struct_lit,
  [sym_tbl_lit] = sym_tbl_lit,
  [sym_par_tup_lit] = sym_par_tup_lit,
  [sym_sqr_tup_lit] = sym_sqr_tup_lit,
  [sym_qq_lit] = sym_qq_lit,
  [sym_quote_lit] = sym_quote_lit,
  [sym_short_fn_lit] = sym_short_fn_lit,
  [sym_splice_lit] = sym_splice_lit,
  [sym_unquote_lit] = sym_unquote_lit,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_kwd_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_nil_lit] = {
    .visible = true,
    .named = true,
  },
  [sym__radix] = {
    .visible = false,
    .named = true,
  },
  [sym__hex] = {
    .visible = false,
    .named = true,
  },
  [sym__dec] = {
    .visible = false,
    .named = true,
  },
  [sym_str_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_buf_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_sym_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_long_buf_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_long_str_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__lit] = {
    .visible = false,
    .named = true,
  },
  [sym_bool_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_kwd_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_num_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_par_arr_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_sqr_arr_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_tbl_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_par_tup_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_sqr_tup_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_qq_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_quote_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_short_fn_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_splice_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote_lit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '"', 1,
        '#', 19,
        '\'', 102,
        '(', 99,
        ')', 93,
        ',', 105,
        '.', 82,
        '0', 49,
        '1', 46,
        '2', 45,
        '3', 47,
        ':', 22,
        ';', 104,
        '@', 66,
        '[', 100,
        ']', 95,
        'f', 70,
        'n', 73,
        't', 76,
        '{', 96,
        '|', 103,
        '}', 97,
        '~', 101,
        '+', 67,
        '-', 67,
      );
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if ((!eof && lookahead == 00) ||
          ('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('!' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 6:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 7:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 11:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 12:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 13:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 17:
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_kwd_lit_token1);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_nil_lit);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__radix);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__radix);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == ':') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__radix);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == ':') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__radix);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == ':') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__radix);
      if (lookahead == '&') ADVANCE(80);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__radix);
      if (lookahead == '&') ADVANCE(80);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__radix);
      if (lookahead == '&') ADVANCE(80);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__radix);
      if (lookahead == ':') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__radix);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__radix);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__hex);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == ':') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__hex);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__dec);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('7' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (('7' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(54);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(56);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == 'x') ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(56);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(56);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == ':') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(61);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == ':') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__dec);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_str_lit);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_buf_lit);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == '1') ADVANCE(52);
      if (lookahead == '2') ADVANCE(51);
      if (lookahead == '3') ADVANCE(53);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '.') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == 's') ADVANCE(72);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == 'u') ADVANCE(71);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_sym_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_sym_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_sym_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_sym_lit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '_') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '_') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '_') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_sym_lit);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_AT_LBRACK);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 0, .external_lex_state = 1},
  [3] = {.lex_state = 0, .external_lex_state = 1},
  [4] = {.lex_state = 0, .external_lex_state = 1},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 0, .external_lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 1},
  [14] = {.lex_state = 0, .external_lex_state = 1},
  [15] = {.lex_state = 0, .external_lex_state = 1},
  [16] = {.lex_state = 0, .external_lex_state = 1},
  [17] = {.lex_state = 0, .external_lex_state = 1},
  [18] = {.lex_state = 0, .external_lex_state = 1},
  [19] = {.lex_state = 0, .external_lex_state = 1},
  [20] = {.lex_state = 0, .external_lex_state = 1},
  [21] = {.lex_state = 0, .external_lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 1},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 0, .external_lex_state = 1},
  [26] = {.lex_state = 0, .external_lex_state = 1},
  [27] = {.lex_state = 0, .external_lex_state = 1},
  [28] = {.lex_state = 0, .external_lex_state = 1},
  [29] = {.lex_state = 0, .external_lex_state = 1},
  [30] = {.lex_state = 0, .external_lex_state = 1},
  [31] = {.lex_state = 0, .external_lex_state = 1},
  [32] = {.lex_state = 0, .external_lex_state = 1},
  [33] = {.lex_state = 0, .external_lex_state = 1},
  [34] = {.lex_state = 0, .external_lex_state = 1},
  [35] = {.lex_state = 0, .external_lex_state = 1},
  [36] = {.lex_state = 0, .external_lex_state = 1},
  [37] = {.lex_state = 0, .external_lex_state = 1},
  [38] = {.lex_state = 0, .external_lex_state = 1},
  [39] = {.lex_state = 0, .external_lex_state = 1},
  [40] = {.lex_state = 0, .external_lex_state = 1},
  [41] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [aux_sym_kwd_lit_token1] = ACTIONS(1),
    [sym_nil_lit] = ACTIONS(1),
    [sym__radix] = ACTIONS(1),
    [sym__hex] = ACTIONS(1),
    [sym__dec] = ACTIONS(1),
    [sym_str_lit] = ACTIONS(1),
    [sym_buf_lit] = ACTIONS(1),
    [sym_sym_lit] = ACTIONS(1),
    [anon_sym_AT_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AT_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_long_buf_lit] = ACTIONS(1),
    [sym_long_str_lit] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(41),
    [sym__lit] = STATE(10),
    [sym_bool_lit] = STATE(10),
    [sym_kwd_lit] = STATE(10),
    [sym_num_lit] = STATE(10),
    [sym_par_arr_lit] = STATE(10),
    [sym_sqr_arr_lit] = STATE(10),
    [sym_struct_lit] = STATE(10),
    [sym_tbl_lit] = STATE(10),
    [sym_par_tup_lit] = STATE(10),
    [sym_sqr_tup_lit] = STATE(10),
    [sym_qq_lit] = STATE(10),
    [sym_quote_lit] = STATE(10),
    [sym_short_fn_lit] = STATE(10),
    [sym_splice_lit] = STATE(10),
    [sym_unquote_lit] = STATE(10),
    [aux_sym_source_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(11),
    [sym__radix] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__dec] = ACTIONS(13),
    [sym_str_lit] = ACTIONS(15),
    [sym_buf_lit] = ACTIONS(15),
    [sym_sym_lit] = ACTIONS(11),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buf_lit] = ACTIONS(15),
    [sym_long_str_lit] = ACTIONS(15),
  },
  [2] = {
    [sym__lit] = STATE(2),
    [sym_bool_lit] = STATE(2),
    [sym_kwd_lit] = STATE(2),
    [sym_num_lit] = STATE(2),
    [sym_par_arr_lit] = STATE(2),
    [sym_sqr_arr_lit] = STATE(2),
    [sym_struct_lit] = STATE(2),
    [sym_tbl_lit] = STATE(2),
    [sym_par_tup_lit] = STATE(2),
    [sym_sqr_tup_lit] = STATE(2),
    [sym_qq_lit] = STATE(2),
    [sym_quote_lit] = STATE(2),
    [sym_short_fn_lit] = STATE(2),
    [sym_splice_lit] = STATE(2),
    [sym_unquote_lit] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(41),
    [aux_sym_kwd_lit_token1] = ACTIONS(44),
    [sym_nil_lit] = ACTIONS(47),
    [sym__radix] = ACTIONS(50),
    [sym__hex] = ACTIONS(50),
    [sym__dec] = ACTIONS(50),
    [sym_str_lit] = ACTIONS(53),
    [sym_buf_lit] = ACTIONS(53),
    [sym_sym_lit] = ACTIONS(47),
    [anon_sym_AT_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_AT_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(62),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_AT_LBRACE] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_TILDE] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(80),
    [anon_sym_SEMI] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(86),
    [sym_long_buf_lit] = ACTIONS(53),
    [sym_long_str_lit] = ACTIONS(53),
  },
  [3] = {
    [sym__lit] = STATE(2),
    [sym_bool_lit] = STATE(2),
    [sym_kwd_lit] = STATE(2),
    [sym_num_lit] = STATE(2),
    [sym_par_arr_lit] = STATE(2),
    [sym_sqr_arr_lit] = STATE(2),
    [sym_struct_lit] = STATE(2),
    [sym_tbl_lit] = STATE(2),
    [sym_par_tup_lit] = STATE(2),
    [sym_sqr_tup_lit] = STATE(2),
    [sym_qq_lit] = STATE(2),
    [sym_quote_lit] = STATE(2),
    [sym_short_fn_lit] = STATE(2),
    [sym_splice_lit] = STATE(2),
    [sym_unquote_lit] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(89),
    [sym__radix] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__dec] = ACTIONS(13),
    [sym_str_lit] = ACTIONS(91),
    [sym_buf_lit] = ACTIONS(91),
    [sym_sym_lit] = ACTIONS(89),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buf_lit] = ACTIONS(91),
    [sym_long_str_lit] = ACTIONS(91),
  },
  [4] = {
    [sym__lit] = STATE(14),
    [sym_bool_lit] = STATE(14),
    [sym_kwd_lit] = STATE(14),
    [sym_num_lit] = STATE(14),
    [sym_par_arr_lit] = STATE(14),
    [sym_sqr_arr_lit] = STATE(14),
    [sym_struct_lit] = STATE(14),
    [sym_tbl_lit] = STATE(14),
    [sym_par_tup_lit] = STATE(14),
    [sym_sqr_tup_lit] = STATE(14),
    [sym_qq_lit] = STATE(14),
    [sym_quote_lit] = STATE(14),
    [sym_short_fn_lit] = STATE(14),
    [sym_splice_lit] = STATE(14),
    [sym_unquote_lit] = STATE(14),
    [aux_sym_source_repeat1] = STATE(14),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(95),
    [sym__radix] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__dec] = ACTIONS(13),
    [sym_str_lit] = ACTIONS(97),
    [sym_buf_lit] = ACTIONS(97),
    [sym_sym_lit] = ACTIONS(95),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buf_lit] = ACTIONS(97),
    [sym_long_str_lit] = ACTIONS(97),
  },
  [5] = {
    [sym__lit] = STATE(12),
    [sym_bool_lit] = STATE(12),
    [sym_kwd_lit] = STATE(12),
    [sym_num_lit] = STATE(12),
    [sym_par_arr_lit] = STATE(12),
    [sym_sqr_arr_lit] = STATE(12),
    [sym_struct_lit] = STATE(12),
    [sym_tbl_lit] = STATE(12),
    [sym_par_tup_lit] = STATE(12),
    [sym_sqr_tup_lit] = STATE(12),
    [sym_qq_lit] = STATE(12),
    [sym_quote_lit] = STATE(12),
    [sym_short_fn_lit] = STATE(12),
    [sym_splice_lit] = STATE(12),
    [sym_unquote_lit] = STATE(12),
    [aux_sym_source_repeat1] = STATE(12),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(101),
    [sym__radix] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__dec] = ACTIONS(13),
    [sym_str_lit] = ACTIONS(103),
    [sym_buf_lit] = ACTIONS(103),
    [sym_sym_lit] = ACTIONS(101),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buf_lit] = ACTIONS(103),
    [sym_long_str_lit] = ACTIONS(103),
  },
  [6] = {
    [sym__lit] = STATE(15),
    [sym_bool_lit] = STATE(15),
    [sym_kwd_lit] = STATE(15),
    [sym_num_lit] = STATE(15),
    [sym_par_arr_lit] = STATE(15),
    [sym_sqr_arr_lit] = STATE(15),
    [sym_struct_lit] = STATE(15),
    [sym_tbl_lit] = STATE(15),
    [sym_par_tup_lit] = STATE(15),
    [sym_sqr_tup_lit] = STATE(15),
    [sym_qq_lit] = STATE(15),
    [sym_quote_lit] = STATE(15),
    [sym_short_fn_lit] = STATE(15),
    [sym_splice_lit] = STATE(15),
    [sym_unquote_lit] = STATE(15),
    [aux_sym_source_repeat1] = STATE(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(107),
    [sym__radix] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__dec] = ACTIONS(13),
    [sym_str_lit] = ACTIONS(109),
    [sym_buf_lit] = ACTIONS(109),
    [sym_sym_lit] = ACTIONS(107),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buf_lit] = ACTIONS(109),
    [sym_long_str_lit] = ACTIONS(109),
  },
  [7] = {
    [sym__lit] = STATE(11),
    [sym_bool_lit] = STATE(11),
    [sym_kwd_lit] = STATE(11),
    [sym_num_lit] = STATE(11),
    [sym_par_arr_lit] = STATE(11),
    [sym_sqr_arr_lit] = STATE(11),
    [sym_struct_lit] = STATE(11),
    [sym_tbl_lit] = STATE(11),
    [sym_par_tup_lit] = STATE(11),
    [sym_sqr_tup_lit] = STATE(11),
    [sym_qq_lit] = STATE(11),
    [sym_quote_lit] = STATE(11),
    [sym_short_fn_lit] = STATE(11),
    [sym_splice_lit] = STATE(11),
    [sym_unquote_lit] = STATE(11),
    [aux_sym_source_repeat1] = STATE(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(113),
    [sym__radix] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__dec] = ACTIONS(13),
    [sym_str_lit] = ACTIONS(115),
    [sym_buf_lit] = ACTIONS(115),
    [sym_sym_lit] = ACTIONS(113),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buf_lit] = ACTIONS(115),
    [sym_long_str_lit] = ACTIONS(115),
  },
  [8] = {
    [sym__lit] = STATE(13),
    [sym_bool_lit] = STATE(13),
    [sym_kwd_lit] = STATE(13),
    [sym_num_lit] = STATE(13),
    [sym_par_arr_lit] = STATE(13),
    [sym_sqr_arr_lit] = STATE(13),
    [sym_struct_lit] = STATE(13),
    [sym_tbl_lit] = STATE(13),
    [sym_par_tup_lit] = STATE(13),
    [sym_sqr_tup_lit] = STATE(13),
    [sym_qq_lit] = STATE(13),
    [sym_quote_lit] = STATE(13),
    [sym_short_fn_lit] = STATE(13),
    [sym_splice_lit] = STATE(13),
    [sym_unquote_lit] = STATE(13),
    [aux_sym_source_repeat1] = STATE(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(119),
    [sym__radix] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__dec] = ACTIONS(13),
    [sym_str_lit] = ACTIONS(121),
    [sym_buf_lit] = ACTIONS(121),
    [sym_sym_lit] = ACTIONS(119),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buf_lit] = ACTIONS(121),
    [sym_long_str_lit] = ACTIONS(121),
  },
  [9] = {
    [sym__lit] = STATE(3),
    [sym_bool_lit] = STATE(3),
    [sym_kwd_lit] = STATE(3),
    [sym_num_lit] = STATE(3),
    [sym_par_arr_lit] = STATE(3),
    [sym_sqr_arr_lit] = STATE(3),
    [sym_struct_lit] = STATE(3),
    [sym_tbl_lit] = STATE(3),
    [sym_par_tup_lit] = STATE(3),
    [sym_sqr_tup_lit] = STATE(3),
    [sym_qq_lit] = STATE(3),
    [sym_quote_lit] = STATE(3),
    [sym_short_fn_lit] = STATE(3),
    [sym_splice_lit] = STATE(3),
    [sym_unquote_lit] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(125),
    [sym__radix] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__dec] = ACTIONS(13),
    [sym_str_lit] = ACTIONS(127),
    [sym_buf_lit] = ACTIONS(127),
    [sym_sym_lit] = ACTIONS(125),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buf_lit] = ACTIONS(127),
    [sym_long_str_lit] = ACTIONS(127),
  },
  [10] = {
    [sym__lit] = STATE(2),
    [sym_bool_lit] = STATE(2),
    [sym_kwd_lit] = STATE(2),
    [sym_num_lit] = STATE(2),
    [sym_par_arr_lit] = STATE(2),
    [sym_sqr_arr_lit] = STATE(2),
    [sym_struct_lit] = STATE(2),
    [sym_tbl_lit] = STATE(2),
    [sym_par_tup_lit] = STATE(2),
    [sym_sqr_tup_lit] = STATE(2),
    [sym_qq_lit] = STATE(2),
    [sym_quote_lit] = STATE(2),
    [sym_short_fn_lit] = STATE(2),
    [sym_splice_lit] = STATE(2),
    [sym_unquote_lit] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(89),
    [sym__radix] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__dec] = ACTIONS(13),
    [sym_str_lit] = ACTIONS(91),
    [sym_buf_lit] = ACTIONS(91),
    [sym_sym_lit] = ACTIONS(89),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buf_lit] = ACTIONS(91),
    [sym_long_str_lit] = ACTIONS(91),
  },
  [11] = {
    [sym__lit] = STATE(2),
    [sym_bool_lit] = STATE(2),
    [sym_kwd_lit] = STATE(2),
    [sym_num_lit] = STATE(2),
    [sym_par_arr_lit] = STATE(2),
    [sym_sqr_arr_lit] = STATE(2),
    [sym_struct_lit] = STATE(2),
    [sym_tbl_lit] = STATE(2),
    [sym_par_tup_lit] = STATE(2),
    [sym_sqr_tup_lit] = STATE(2),
    [sym_qq_lit] = STATE(2),
    [sym_quote_lit] = STATE(2),
    [sym_short_fn_lit] = STATE(2),
    [sym_splice_lit] = STATE(2),
    [sym_unquote_lit] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(89),
    [sym__radix] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__dec] = ACTIONS(13),
    [sym_str_lit] = ACTIONS(91),
    [sym_buf_lit] = ACTIONS(91),
    [sym_sym_lit] = ACTIONS(89),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buf_lit] = ACTIONS(91),
    [sym_long_str_lit] = ACTIONS(91),
  },
  [12] = {
    [sym__lit] = STATE(2),
    [sym_bool_lit] = STATE(2),
    [sym_kwd_lit] = STATE(2),
    [sym_num_lit] = STATE(2),
    [sym_par_arr_lit] = STATE(2),
    [sym_sqr_arr_lit] = STATE(2),
    [sym_struct_lit] = STATE(2),
    [sym_tbl_lit] = STATE(2),
    [sym_par_tup_lit] = STATE(2),
    [sym_sqr_tup_lit] = STATE(2),
    [sym_qq_lit] = STATE(2),
    [sym_quote_lit] = STATE(2),
    [sym_short_fn_lit] = STATE(2),
    [sym_splice_lit] = STATE(2),
    [sym_unquote_lit] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(89),
    [sym__radix] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__dec] = ACTIONS(13),
    [sym_str_lit] = ACTIONS(91),
    [sym_buf_lit] = ACTIONS(91),
    [sym_sym_lit] = ACTIONS(89),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buf_lit] = ACTIONS(91),
    [sym_long_str_lit] = ACTIONS(91),
  },
  [13] = {
    [sym__lit] = STATE(2),
    [sym_bool_lit] = STATE(2),
    [sym_kwd_lit] = STATE(2),
    [sym_num_lit] = STATE(2),
    [sym_par_arr_lit] = STATE(2),
    [sym_sqr_arr_lit] = STATE(2),
    [sym_struct_lit] = STATE(2),
    [sym_tbl_lit] = STATE(2),
    [sym_par_tup_lit] = STATE(2),
    [sym_sqr_tup_lit] = STATE(2),
    [sym_qq_lit] = STATE(2),
    [sym_quote_lit] = STATE(2),
    [sym_short_fn_lit] = STATE(2),
    [sym_splice_lit] = STATE(2),
    [sym_unquote_lit] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(89),
    [sym__radix] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__dec] = ACTIONS(13),
    [sym_str_lit] = ACTIONS(91),
    [sym_buf_lit] = ACTIONS(91),
    [sym_sym_lit] = ACTIONS(89),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buf_lit] = ACTIONS(91),
    [sym_long_str_lit] = ACTIONS(91),
  },
  [14] = {
    [sym__lit] = STATE(2),
    [sym_bool_lit] = STATE(2),
    [sym_kwd_lit] = STATE(2),
    [sym_num_lit] = STATE(2),
    [sym_par_arr_lit] = STATE(2),
    [sym_sqr_arr_lit] = STATE(2),
    [sym_struct_lit] = STATE(2),
    [sym_tbl_lit] = STATE(2),
    [sym_par_tup_lit] = STATE(2),
    [sym_sqr_tup_lit] = STATE(2),
    [sym_qq_lit] = STATE(2),
    [sym_quote_lit] = STATE(2),
    [sym_short_fn_lit] = STATE(2),
    [sym_splice_lit] = STATE(2),
    [sym_unquote_lit] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(89),
    [sym__radix] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__dec] = ACTIONS(13),
    [sym_str_lit] = ACTIONS(91),
    [sym_buf_lit] = ACTIONS(91),
    [sym_sym_lit] = ACTIONS(89),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buf_lit] = ACTIONS(91),
    [sym_long_str_lit] = ACTIONS(91),
  },
  [15] = {
    [sym__lit] = STATE(2),
    [sym_bool_lit] = STATE(2),
    [sym_kwd_lit] = STATE(2),
    [sym_num_lit] = STATE(2),
    [sym_par_arr_lit] = STATE(2),
    [sym_sqr_arr_lit] = STATE(2),
    [sym_struct_lit] = STATE(2),
    [sym_tbl_lit] = STATE(2),
    [sym_par_tup_lit] = STATE(2),
    [sym_sqr_tup_lit] = STATE(2),
    [sym_qq_lit] = STATE(2),
    [sym_quote_lit] = STATE(2),
    [sym_short_fn_lit] = STATE(2),
    [sym_splice_lit] = STATE(2),
    [sym_unquote_lit] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(89),
    [sym__radix] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__dec] = ACTIONS(13),
    [sym_str_lit] = ACTIONS(91),
    [sym_buf_lit] = ACTIONS(91),
    [sym_sym_lit] = ACTIONS(89),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(141),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buf_lit] = ACTIONS(91),
    [sym_long_str_lit] = ACTIONS(91),
  },
  [16] = {
    [sym__lit] = STATE(29),
    [sym_bool_lit] = STATE(29),
    [sym_kwd_lit] = STATE(29),
    [sym_num_lit] = STATE(29),
    [sym_par_arr_lit] = STATE(29),
    [sym_sqr_arr_lit] = STATE(29),
    [sym_struct_lit] = STATE(29),
    [sym_tbl_lit] = STATE(29),
    [sym_par_tup_lit] = STATE(29),
    [sym_sqr_tup_lit] = STATE(29),
    [sym_qq_lit] = STATE(29),
    [sym_quote_lit] = STATE(29),
    [sym_short_fn_lit] = STATE(29),
    [sym_splice_lit] = STATE(29),
    [sym_unquote_lit] = STATE(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(143),
    [sym__radix] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__dec] = ACTIONS(13),
    [sym_str_lit] = ACTIONS(145),
    [sym_buf_lit] = ACTIONS(145),
    [sym_sym_lit] = ACTIONS(143),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buf_lit] = ACTIONS(145),
    [sym_long_str_lit] = ACTIONS(145),
  },
  [17] = {
    [sym__lit] = STATE(21),
    [sym_bool_lit] = STATE(21),
    [sym_kwd_lit] = STATE(21),
    [sym_num_lit] = STATE(21),
    [sym_par_arr_lit] = STATE(21),
    [sym_sqr_arr_lit] = STATE(21),
    [sym_struct_lit] = STATE(21),
    [sym_tbl_lit] = STATE(21),
    [sym_par_tup_lit] = STATE(21),
    [sym_sqr_tup_lit] = STATE(21),
    [sym_qq_lit] = STATE(21),
    [sym_quote_lit] = STATE(21),
    [sym_short_fn_lit] = STATE(21),
    [sym_splice_lit] = STATE(21),
    [sym_unquote_lit] = STATE(21),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(147),
    [sym__radix] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__dec] = ACTIONS(13),
    [sym_str_lit] = ACTIONS(149),
    [sym_buf_lit] = ACTIONS(149),
    [sym_sym_lit] = ACTIONS(147),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buf_lit] = ACTIONS(149),
    [sym_long_str_lit] = ACTIONS(149),
  },
  [18] = {
    [sym__lit] = STATE(33),
    [sym_bool_lit] = STATE(33),
    [sym_kwd_lit] = STATE(33),
    [sym_num_lit] = STATE(33),
    [sym_par_arr_lit] = STATE(33),
    [sym_sqr_arr_lit] = STATE(33),
    [sym_struct_lit] = STATE(33),
    [sym_tbl_lit] = STATE(33),
    [sym_par_tup_lit] = STATE(33),
    [sym_sqr_tup_lit] = STATE(33),
    [sym_qq_lit] = STATE(33),
    [sym_quote_lit] = STATE(33),
    [sym_short_fn_lit] = STATE(33),
    [sym_splice_lit] = STATE(33),
    [sym_unquote_lit] = STATE(33),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(151),
    [sym__radix] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__dec] = ACTIONS(13),
    [sym_str_lit] = ACTIONS(153),
    [sym_buf_lit] = ACTIONS(153),
    [sym_sym_lit] = ACTIONS(151),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buf_lit] = ACTIONS(153),
    [sym_long_str_lit] = ACTIONS(153),
  },
  [19] = {
    [sym__lit] = STATE(32),
    [sym_bool_lit] = STATE(32),
    [sym_kwd_lit] = STATE(32),
    [sym_num_lit] = STATE(32),
    [sym_par_arr_lit] = STATE(32),
    [sym_sqr_arr_lit] = STATE(32),
    [sym_struct_lit] = STATE(32),
    [sym_tbl_lit] = STATE(32),
    [sym_par_tup_lit] = STATE(32),
    [sym_sqr_tup_lit] = STATE(32),
    [sym_qq_lit] = STATE(32),
    [sym_quote_lit] = STATE(32),
    [sym_short_fn_lit] = STATE(32),
    [sym_splice_lit] = STATE(32),
    [sym_unquote_lit] = STATE(32),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(155),
    [sym__radix] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__dec] = ACTIONS(13),
    [sym_str_lit] = ACTIONS(157),
    [sym_buf_lit] = ACTIONS(157),
    [sym_sym_lit] = ACTIONS(155),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buf_lit] = ACTIONS(157),
    [sym_long_str_lit] = ACTIONS(157),
  },
  [20] = {
    [sym__lit] = STATE(31),
    [sym_bool_lit] = STATE(31),
    [sym_kwd_lit] = STATE(31),
    [sym_num_lit] = STATE(31),
    [sym_par_arr_lit] = STATE(31),
    [sym_sqr_arr_lit] = STATE(31),
    [sym_struct_lit] = STATE(31),
    [sym_tbl_lit] = STATE(31),
    [sym_par_tup_lit] = STATE(31),
    [sym_sqr_tup_lit] = STATE(31),
    [sym_qq_lit] = STATE(31),
    [sym_quote_lit] = STATE(31),
    [sym_short_fn_lit] = STATE(31),
    [sym_splice_lit] = STATE(31),
    [sym_unquote_lit] = STATE(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(7),
    [aux_sym_kwd_lit_token1] = ACTIONS(9),
    [sym_nil_lit] = ACTIONS(159),
    [sym__radix] = ACTIONS(13),
    [sym__hex] = ACTIONS(13),
    [sym__dec] = ACTIONS(13),
    [sym_str_lit] = ACTIONS(161),
    [sym_buf_lit] = ACTIONS(161),
    [sym_sym_lit] = ACTIONS(159),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_AT_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_AT_LBRACE] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(37),
    [sym_long_buf_lit] = ACTIONS(161),
    [sym_long_str_lit] = ACTIONS(161),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(165),
    [aux_sym_kwd_lit_token1] = ACTIONS(163),
    [sym_nil_lit] = ACTIONS(165),
    [sym__radix] = ACTIONS(165),
    [sym__hex] = ACTIONS(165),
    [sym__dec] = ACTIONS(165),
    [sym_str_lit] = ACTIONS(163),
    [sym_buf_lit] = ACTIONS(163),
    [sym_sym_lit] = ACTIONS(165),
    [anon_sym_AT_LPAREN] = ACTIONS(163),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_AT_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_AT_LBRACE] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_TILDE] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(163),
    [anon_sym_SEMI] = ACTIONS(163),
    [anon_sym_COMMA] = ACTIONS(163),
    [sym_long_buf_lit] = ACTIONS(163),
    [sym_long_str_lit] = ACTIONS(163),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(169),
    [anon_sym_true] = ACTIONS(169),
    [aux_sym_kwd_lit_token1] = ACTIONS(167),
    [sym_nil_lit] = ACTIONS(169),
    [sym__radix] = ACTIONS(169),
    [sym__hex] = ACTIONS(169),
    [sym__dec] = ACTIONS(169),
    [sym_str_lit] = ACTIONS(167),
    [sym_buf_lit] = ACTIONS(167),
    [sym_sym_lit] = ACTIONS(169),
    [anon_sym_AT_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_AT_LBRACK] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(167),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_AT_LBRACE] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_PIPE] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(167),
    [sym_long_buf_lit] = ACTIONS(167),
    [sym_long_str_lit] = ACTIONS(167),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(173),
    [anon_sym_true] = ACTIONS(173),
    [aux_sym_kwd_lit_token1] = ACTIONS(171),
    [sym_nil_lit] = ACTIONS(173),
    [sym__radix] = ACTIONS(173),
    [sym__hex] = ACTIONS(173),
    [sym__dec] = ACTIONS(173),
    [sym_str_lit] = ACTIONS(171),
    [sym_buf_lit] = ACTIONS(171),
    [sym_sym_lit] = ACTIONS(173),
    [anon_sym_AT_LPAREN] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_AT_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_AT_LBRACE] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_TILDE] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(171),
    [sym_long_buf_lit] = ACTIONS(171),
    [sym_long_str_lit] = ACTIONS(171),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(177),
    [anon_sym_true] = ACTIONS(177),
    [aux_sym_kwd_lit_token1] = ACTIONS(175),
    [sym_nil_lit] = ACTIONS(177),
    [sym__radix] = ACTIONS(177),
    [sym__hex] = ACTIONS(177),
    [sym__dec] = ACTIONS(177),
    [sym_str_lit] = ACTIONS(175),
    [sym_buf_lit] = ACTIONS(175),
    [sym_sym_lit] = ACTIONS(177),
    [anon_sym_AT_LPAREN] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_AT_LBRACK] = ACTIONS(175),
    [anon_sym_RBRACK] = ACTIONS(175),
    [anon_sym_LBRACE] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(175),
    [anon_sym_AT_LBRACE] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(175),
    [anon_sym_PIPE] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_COMMA] = ACTIONS(175),
    [sym_long_buf_lit] = ACTIONS(175),
    [sym_long_str_lit] = ACTIONS(175),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(181),
    [aux_sym_kwd_lit_token1] = ACTIONS(179),
    [sym_nil_lit] = ACTIONS(181),
    [sym__radix] = ACTIONS(181),
    [sym__hex] = ACTIONS(181),
    [sym__dec] = ACTIONS(181),
    [sym_str_lit] = ACTIONS(179),
    [sym_buf_lit] = ACTIONS(179),
    [sym_sym_lit] = ACTIONS(181),
    [anon_sym_AT_LPAREN] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_AT_LBRACK] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(179),
    [anon_sym_AT_LBRACE] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_COMMA] = ACTIONS(179),
    [sym_long_buf_lit] = ACTIONS(179),
    [sym_long_str_lit] = ACTIONS(179),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(185),
    [anon_sym_true] = ACTIONS(185),
    [aux_sym_kwd_lit_token1] = ACTIONS(183),
    [sym_nil_lit] = ACTIONS(185),
    [sym__radix] = ACTIONS(185),
    [sym__hex] = ACTIONS(185),
    [sym__dec] = ACTIONS(185),
    [sym_str_lit] = ACTIONS(183),
    [sym_buf_lit] = ACTIONS(183),
    [sym_sym_lit] = ACTIONS(185),
    [anon_sym_AT_LPAREN] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_AT_LBRACK] = ACTIONS(183),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_AT_LBRACE] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(183),
    [sym_long_buf_lit] = ACTIONS(183),
    [sym_long_str_lit] = ACTIONS(183),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(189),
    [aux_sym_kwd_lit_token1] = ACTIONS(187),
    [sym_nil_lit] = ACTIONS(189),
    [sym__radix] = ACTIONS(189),
    [sym__hex] = ACTIONS(189),
    [sym__dec] = ACTIONS(189),
    [sym_str_lit] = ACTIONS(187),
    [sym_buf_lit] = ACTIONS(187),
    [sym_sym_lit] = ACTIONS(189),
    [anon_sym_AT_LPAREN] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_AT_LBRACK] = ACTIONS(187),
    [anon_sym_RBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_AT_LBRACE] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_TILDE] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(187),
    [sym_long_buf_lit] = ACTIONS(187),
    [sym_long_str_lit] = ACTIONS(187),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(193),
    [anon_sym_true] = ACTIONS(193),
    [aux_sym_kwd_lit_token1] = ACTIONS(191),
    [sym_nil_lit] = ACTIONS(193),
    [sym__radix] = ACTIONS(193),
    [sym__hex] = ACTIONS(193),
    [sym__dec] = ACTIONS(193),
    [sym_str_lit] = ACTIONS(191),
    [sym_buf_lit] = ACTIONS(191),
    [sym_sym_lit] = ACTIONS(193),
    [anon_sym_AT_LPAREN] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(191),
    [anon_sym_AT_LBRACK] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_RBRACE] = ACTIONS(191),
    [anon_sym_AT_LBRACE] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_PIPE] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(191),
    [sym_long_buf_lit] = ACTIONS(191),
    [sym_long_str_lit] = ACTIONS(191),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(197),
    [anon_sym_true] = ACTIONS(197),
    [aux_sym_kwd_lit_token1] = ACTIONS(195),
    [sym_nil_lit] = ACTIONS(197),
    [sym__radix] = ACTIONS(197),
    [sym__hex] = ACTIONS(197),
    [sym__dec] = ACTIONS(197),
    [sym_str_lit] = ACTIONS(195),
    [sym_buf_lit] = ACTIONS(195),
    [sym_sym_lit] = ACTIONS(197),
    [anon_sym_AT_LPAREN] = ACTIONS(195),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_AT_LBRACK] = ACTIONS(195),
    [anon_sym_RBRACK] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_RBRACE] = ACTIONS(195),
    [anon_sym_AT_LBRACE] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_TILDE] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(195),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_SEMI] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(195),
    [sym_long_buf_lit] = ACTIONS(195),
    [sym_long_str_lit] = ACTIONS(195),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(201),
    [aux_sym_kwd_lit_token1] = ACTIONS(199),
    [sym_nil_lit] = ACTIONS(201),
    [sym__radix] = ACTIONS(201),
    [sym__hex] = ACTIONS(201),
    [sym__dec] = ACTIONS(201),
    [sym_str_lit] = ACTIONS(199),
    [sym_buf_lit] = ACTIONS(199),
    [sym_sym_lit] = ACTIONS(201),
    [anon_sym_AT_LPAREN] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_AT_LBRACK] = ACTIONS(199),
    [anon_sym_RBRACK] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_AT_LBRACE] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(199),
    [anon_sym_SQUOTE] = ACTIONS(199),
    [anon_sym_PIPE] = ACTIONS(199),
    [anon_sym_SEMI] = ACTIONS(199),
    [anon_sym_COMMA] = ACTIONS(199),
    [sym_long_buf_lit] = ACTIONS(199),
    [sym_long_str_lit] = ACTIONS(199),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(205),
    [aux_sym_kwd_lit_token1] = ACTIONS(203),
    [sym_nil_lit] = ACTIONS(205),
    [sym__radix] = ACTIONS(205),
    [sym__hex] = ACTIONS(205),
    [sym__dec] = ACTIONS(205),
    [sym_str_lit] = ACTIONS(203),
    [sym_buf_lit] = ACTIONS(203),
    [sym_sym_lit] = ACTIONS(205),
    [anon_sym_AT_LPAREN] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_AT_LBRACK] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(203),
    [anon_sym_AT_LBRACE] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_SEMI] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(203),
    [sym_long_buf_lit] = ACTIONS(203),
    [sym_long_str_lit] = ACTIONS(203),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(209),
    [anon_sym_true] = ACTIONS(209),
    [aux_sym_kwd_lit_token1] = ACTIONS(207),
    [sym_nil_lit] = ACTIONS(209),
    [sym__radix] = ACTIONS(209),
    [sym__hex] = ACTIONS(209),
    [sym__dec] = ACTIONS(209),
    [sym_str_lit] = ACTIONS(207),
    [sym_buf_lit] = ACTIONS(207),
    [sym_sym_lit] = ACTIONS(209),
    [anon_sym_AT_LPAREN] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_AT_LBRACK] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_AT_LBRACE] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_SQUOTE] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
    [sym_long_buf_lit] = ACTIONS(207),
    [sym_long_str_lit] = ACTIONS(207),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(213),
    [aux_sym_kwd_lit_token1] = ACTIONS(211),
    [sym_nil_lit] = ACTIONS(213),
    [sym__radix] = ACTIONS(213),
    [sym__hex] = ACTIONS(213),
    [sym__dec] = ACTIONS(213),
    [sym_str_lit] = ACTIONS(211),
    [sym_buf_lit] = ACTIONS(211),
    [sym_sym_lit] = ACTIONS(213),
    [anon_sym_AT_LPAREN] = ACTIONS(211),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_AT_LBRACK] = ACTIONS(211),
    [anon_sym_RBRACK] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(211),
    [anon_sym_RBRACE] = ACTIONS(211),
    [anon_sym_AT_LBRACE] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_TILDE] = ACTIONS(211),
    [anon_sym_SQUOTE] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(211),
    [anon_sym_SEMI] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(211),
    [sym_long_buf_lit] = ACTIONS(211),
    [sym_long_str_lit] = ACTIONS(211),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(217),
    [anon_sym_true] = ACTIONS(217),
    [aux_sym_kwd_lit_token1] = ACTIONS(215),
    [sym_nil_lit] = ACTIONS(217),
    [sym__radix] = ACTIONS(217),
    [sym__hex] = ACTIONS(217),
    [sym__dec] = ACTIONS(217),
    [sym_str_lit] = ACTIONS(215),
    [sym_buf_lit] = ACTIONS(215),
    [sym_sym_lit] = ACTIONS(217),
    [anon_sym_AT_LPAREN] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_AT_LBRACK] = ACTIONS(215),
    [anon_sym_RBRACK] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_RBRACE] = ACTIONS(215),
    [anon_sym_AT_LBRACE] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(215),
    [anon_sym_TILDE] = ACTIONS(215),
    [anon_sym_SQUOTE] = ACTIONS(215),
    [anon_sym_PIPE] = ACTIONS(215),
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_COMMA] = ACTIONS(215),
    [sym_long_buf_lit] = ACTIONS(215),
    [sym_long_str_lit] = ACTIONS(215),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(221),
    [aux_sym_kwd_lit_token1] = ACTIONS(219),
    [sym_nil_lit] = ACTIONS(221),
    [sym__radix] = ACTIONS(221),
    [sym__hex] = ACTIONS(221),
    [sym__dec] = ACTIONS(221),
    [sym_str_lit] = ACTIONS(219),
    [sym_buf_lit] = ACTIONS(219),
    [sym_sym_lit] = ACTIONS(221),
    [anon_sym_AT_LPAREN] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_AT_LBRACK] = ACTIONS(219),
    [anon_sym_RBRACK] = ACTIONS(219),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_RBRACE] = ACTIONS(219),
    [anon_sym_AT_LBRACE] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_TILDE] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(219),
    [sym_long_buf_lit] = ACTIONS(219),
    [sym_long_str_lit] = ACTIONS(219),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(225),
    [anon_sym_true] = ACTIONS(225),
    [aux_sym_kwd_lit_token1] = ACTIONS(223),
    [sym_nil_lit] = ACTIONS(225),
    [sym__radix] = ACTIONS(225),
    [sym__hex] = ACTIONS(225),
    [sym__dec] = ACTIONS(225),
    [sym_str_lit] = ACTIONS(223),
    [sym_buf_lit] = ACTIONS(223),
    [sym_sym_lit] = ACTIONS(225),
    [anon_sym_AT_LPAREN] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_AT_LBRACK] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_AT_LBRACE] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_TILDE] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(223),
    [anon_sym_PIPE] = ACTIONS(223),
    [anon_sym_SEMI] = ACTIONS(223),
    [anon_sym_COMMA] = ACTIONS(223),
    [sym_long_buf_lit] = ACTIONS(223),
    [sym_long_str_lit] = ACTIONS(223),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(229),
    [anon_sym_true] = ACTIONS(229),
    [aux_sym_kwd_lit_token1] = ACTIONS(227),
    [sym_nil_lit] = ACTIONS(229),
    [sym__radix] = ACTIONS(229),
    [sym__hex] = ACTIONS(229),
    [sym__dec] = ACTIONS(229),
    [sym_str_lit] = ACTIONS(227),
    [sym_buf_lit] = ACTIONS(227),
    [sym_sym_lit] = ACTIONS(229),
    [anon_sym_AT_LPAREN] = ACTIONS(227),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_AT_LBRACK] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(227),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(227),
    [anon_sym_AT_LBRACE] = ACTIONS(227),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_TILDE] = ACTIONS(227),
    [anon_sym_SQUOTE] = ACTIONS(227),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_SEMI] = ACTIONS(227),
    [anon_sym_COMMA] = ACTIONS(227),
    [sym_long_buf_lit] = ACTIONS(227),
    [sym_long_str_lit] = ACTIONS(227),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(233),
    [anon_sym_true] = ACTIONS(233),
    [aux_sym_kwd_lit_token1] = ACTIONS(231),
    [sym_nil_lit] = ACTIONS(233),
    [sym__radix] = ACTIONS(233),
    [sym__hex] = ACTIONS(233),
    [sym__dec] = ACTIONS(233),
    [sym_str_lit] = ACTIONS(231),
    [sym_buf_lit] = ACTIONS(231),
    [sym_sym_lit] = ACTIONS(233),
    [anon_sym_AT_LPAREN] = ACTIONS(231),
    [anon_sym_RPAREN] = ACTIONS(231),
    [anon_sym_AT_LBRACK] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_RBRACE] = ACTIONS(231),
    [anon_sym_AT_LBRACE] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_TILDE] = ACTIONS(231),
    [anon_sym_SQUOTE] = ACTIONS(231),
    [anon_sym_PIPE] = ACTIONS(231),
    [anon_sym_SEMI] = ACTIONS(231),
    [anon_sym_COMMA] = ACTIONS(231),
    [sym_long_buf_lit] = ACTIONS(231),
    [sym_long_str_lit] = ACTIONS(231),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(237),
    [anon_sym_true] = ACTIONS(237),
    [aux_sym_kwd_lit_token1] = ACTIONS(235),
    [sym_nil_lit] = ACTIONS(237),
    [sym__radix] = ACTIONS(237),
    [sym__hex] = ACTIONS(237),
    [sym__dec] = ACTIONS(237),
    [sym_str_lit] = ACTIONS(235),
    [sym_buf_lit] = ACTIONS(235),
    [sym_sym_lit] = ACTIONS(237),
    [anon_sym_AT_LPAREN] = ACTIONS(235),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_AT_LBRACK] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(235),
    [anon_sym_LBRACE] = ACTIONS(235),
    [anon_sym_RBRACE] = ACTIONS(235),
    [anon_sym_AT_LBRACE] = ACTIONS(235),
    [anon_sym_LPAREN] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_TILDE] = ACTIONS(235),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_SEMI] = ACTIONS(235),
    [anon_sym_COMMA] = ACTIONS(235),
    [sym_long_buf_lit] = ACTIONS(235),
    [sym_long_str_lit] = ACTIONS(235),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(241),
    [anon_sym_true] = ACTIONS(241),
    [aux_sym_kwd_lit_token1] = ACTIONS(239),
    [sym_nil_lit] = ACTIONS(241),
    [sym__radix] = ACTIONS(241),
    [sym__hex] = ACTIONS(241),
    [sym__dec] = ACTIONS(241),
    [sym_str_lit] = ACTIONS(239),
    [sym_buf_lit] = ACTIONS(239),
    [sym_sym_lit] = ACTIONS(241),
    [anon_sym_AT_LPAREN] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_AT_LBRACK] = ACTIONS(239),
    [anon_sym_RBRACK] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_RBRACE] = ACTIONS(239),
    [anon_sym_AT_LBRACE] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(239),
    [anon_sym_TILDE] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(239),
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(239),
    [sym_long_buf_lit] = ACTIONS(239),
    [sym_long_str_lit] = ACTIONS(239),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(41)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote_lit, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote_lit, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_num_lit, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_num_lit, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_lit, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_lit, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tbl_lit, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tbl_lit, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sqr_arr_lit, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sqr_arr_lit, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_par_tup_lit, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_par_tup_lit, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_par_arr_lit, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_par_arr_lit, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sqr_tup_lit, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sqr_tup_lit, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qq_lit, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qq_lit, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwd_lit, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kwd_lit, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_fn_lit, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_short_fn_lit, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_splice_lit, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_splice_lit, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_lit, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_lit, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_par_arr_lit, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_par_arr_lit, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sqr_arr_lit, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sqr_arr_lit, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_lit, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_lit, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tbl_lit, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tbl_lit, 3, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_par_tup_lit, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_par_tup_lit, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sqr_tup_lit, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sqr_tup_lit, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_long_buf_lit = 0,
  ts_external_token_long_str_lit = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_long_buf_lit] = sym_long_buf_lit,
  [ts_external_token_long_str_lit] = sym_long_str_lit,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_long_buf_lit] = true,
    [ts_external_token_long_str_lit] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_janet_simple_external_scanner_create(void);
void tree_sitter_janet_simple_external_scanner_destroy(void *);
bool tree_sitter_janet_simple_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_janet_simple_external_scanner_serialize(void *, char *);
void tree_sitter_janet_simple_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_janet_simple(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_janet_simple_external_scanner_create,
      tree_sitter_janet_simple_external_scanner_destroy,
      tree_sitter_janet_simple_external_scanner_scan,
      tree_sitter_janet_simple_external_scanner_serialize,
      tree_sitter_janet_simple_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

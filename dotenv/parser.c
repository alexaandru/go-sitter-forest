#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_EQ = 2,
  anon_sym_DOLLAR = 3,
  anon_sym_DOLLAR_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_COLON_DASH = 6,
  anon_sym_DOLLAR_LPAREN = 7,
  anon_sym_RPAREN = 8,
  sym_shell_command = 9,
  sym_identifier = 10,
  anon_sym_true = 11,
  anon_sym_false = 12,
  sym_integer = 13,
  anon_sym_DQUOTE = 14,
  aux_sym__interpolated_content_token1 = 15,
  anon_sym_SQUOTE = 16,
  aux_sym_string_literal_token1 = 17,
  sym_escape_sequence = 18,
  sym_url = 19,
  sym_raw_value = 20,
  sym_source_file = 21,
  sym_variable = 22,
  sym_interpolated_variable = 23,
  sym_value = 24,
  sym_bool = 25,
  sym_string_interpolated = 26,
  sym__interpolated_content = 27,
  sym_string_literal = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_string_interpolated_repeat1 = 30,
  aux_sym_string_literal_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_EQ] = "=",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [anon_sym_RPAREN] = ")",
  [sym_shell_command] = "shell_command",
  [sym_identifier] = "identifier",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__interpolated_content_token1] = "_interpolated_content_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_url] = "url",
  [sym_raw_value] = "raw_value",
  [sym_source_file] = "source_file",
  [sym_variable] = "variable",
  [sym_interpolated_variable] = "interpolated_variable",
  [sym_value] = "value",
  [sym_bool] = "bool",
  [sym_string_interpolated] = "string_interpolated",
  [sym__interpolated_content] = "_interpolated_content",
  [sym_string_literal] = "string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_interpolated_repeat1] = "string_interpolated_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [anon_sym_DOLLAR_LPAREN] = anon_sym_DOLLAR_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_shell_command] = sym_shell_command,
  [sym_identifier] = sym_identifier,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__interpolated_content_token1] = aux_sym__interpolated_content_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_url] = sym_url,
  [sym_raw_value] = sym_raw_value,
  [sym_source_file] = sym_source_file,
  [sym_variable] = sym_variable,
  [sym_interpolated_variable] = sym_interpolated_variable,
  [sym_value] = sym_value,
  [sym_bool] = sym_bool,
  [sym_string_interpolated] = sym_string_interpolated,
  [sym__interpolated_content] = sym__interpolated_content,
  [sym_string_literal] = sym_string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_interpolated_repeat1] = aux_sym_string_interpolated_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_shell_command] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__interpolated_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_value] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolated_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_string_interpolated] = {
    .visible = true,
    .named = true,
  },
  [sym__interpolated_content] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_interpolated_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 0},
    {field_value, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      ADVANCE_MAP(
        '"', 42,
        '#', 28,
        '$', 30,
        '\'', 45,
        ')', 35,
        ':', 5,
        '=', 29,
        '\\', 20,
        'f', 10,
        'h', 18,
        't', 15,
        '}', 32,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 'h') ADVANCE(69);
      if (lookahead == 't') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '"', 48,
        '$', 48,
        '\'', 48,
        '\\', 48,
        'b', 48,
        'f', 48,
        'n', 48,
        'r', 48,
        't', 48,
      );
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 22:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '\n') SKIP(23);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 'h') ADVANCE(69);
      if (lookahead == 't') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(28);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(28);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(28);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == '{') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '#') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__interpolated_content_token1);
      if (lookahead == '#') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__interpolated_content_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '#') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == ':') ADVANCE(21);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '/') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == ':') ADVANCE(71);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '/') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 'h') ADVANCE(69);
      if (lookahead == 't') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_raw_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(73);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_url] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym_variable] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    STATE(15), 1,
      sym_value,
    ACTIONS(13), 2,
      sym_comment,
      sym_identifier,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(17), 3,
      sym_integer,
      sym_url,
      sym_raw_value,
    STATE(14), 3,
      sym_bool,
      sym_string_interpolated,
      sym_string_literal,
  [31] = 7,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 2,
      aux_sym__interpolated_content_token1,
      sym_escape_sequence,
    STATE(4), 3,
      sym_interpolated_variable,
      sym__interpolated_content,
      aux_sym_string_interpolated_repeat1,
  [56] = 7,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(29), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 2,
      aux_sym__interpolated_content_token1,
      sym_escape_sequence,
    STATE(5), 3,
      sym_interpolated_variable,
      sym__interpolated_content,
      aux_sym_string_interpolated_repeat1,
  [81] = 7,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    ACTIONS(42), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 2,
      aux_sym__interpolated_content_token1,
      sym_escape_sequence,
    STATE(5), 3,
      sym_interpolated_variable,
      sym__interpolated_content,
      aux_sym_string_interpolated_repeat1,
  [106] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(53), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__interpolated_content_token1,
      sym_escape_sequence,
  [118] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(55), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__interpolated_content_token1,
      sym_escape_sequence,
  [130] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(57), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__interpolated_content_token1,
      sym_escape_sequence,
  [142] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(61), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [156] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(65), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [170] = 4,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      sym_comment,
    STATE(13), 2,
      sym_variable,
      aux_sym_source_file_repeat1,
  [184] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(74), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [198] = 4,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_identifier,
    STATE(13), 2,
      sym_variable,
      aux_sym_source_file_repeat1,
  [212] = 1,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [218] = 1,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [224] = 1,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [230] = 1,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [236] = 1,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [242] = 1,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 1,
      anon_sym_COLON_DASH,
  [258] = 1,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_identifier,
  [264] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_shell_command,
  [271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
  [278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_EQ,
  [285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_identifier,
  [292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
  [299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_identifier,
  [306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
  [313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 106,
  [SMALL_STATE(7)] = 118,
  [SMALL_STATE(8)] = 130,
  [SMALL_STATE(9)] = 142,
  [SMALL_STATE(10)] = 156,
  [SMALL_STATE(11)] = 170,
  [SMALL_STATE(12)] = 184,
  [SMALL_STATE(13)] = 198,
  [SMALL_STATE(14)] = 212,
  [SMALL_STATE(15)] = 218,
  [SMALL_STATE(16)] = 224,
  [SMALL_STATE(17)] = 230,
  [SMALL_STATE(18)] = 236,
  [SMALL_STATE(19)] = 242,
  [SMALL_STATE(20)] = 248,
  [SMALL_STATE(21)] = 258,
  [SMALL_STATE(22)] = 264,
  [SMALL_STATE(23)] = 271,
  [SMALL_STATE(24)] = 278,
  [SMALL_STATE(25)] = 285,
  [SMALL_STATE(26)] = 292,
  [SMALL_STATE(27)] = 299,
  [SMALL_STATE(28)] = 306,
  [SMALL_STATE(29)] = 313,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, 0, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolated_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolated_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolated_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_interpolated_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolated_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_variable, 5, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_variable, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_variable, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolated, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolated, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [114] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_env(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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

#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 99
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_EQ_GT = 4,
  anon_sym_LBRACK = 5,
  anon_sym_COMMA = 6,
  anon_sym_RBRACK = 7,
  anon_sym_if = 8,
  anon_sym_else = 9,
  anon_sym_BANG = 10,
  anon_sym_and = 11,
  anon_sym_or = 12,
  anon_sym_EQ_EQ = 13,
  anon_sym_BANG_EQ = 14,
  anon_sym_LT = 15,
  anon_sym_GT = 16,
  anon_sym_LT_EQ = 17,
  anon_sym_GT_EQ = 18,
  anon_sym_EQ_TILDE = 19,
  anon_sym_BANG_TILDE = 20,
  anon_sym_for = 21,
  anon_sym_in = 22,
  anon_sym_map = 23,
  sym_comment = 24,
  anon_sym_DQUOTE = 25,
  aux_sym_string_token1 = 26,
  sym_escaped_char = 27,
  anon_sym_PERCENT_LBRACE = 28,
  anon_sym_COLON = 29,
  sym_parser = 30,
  sym_block = 31,
  sym_function = 32,
  sym_key_value_pair = 33,
  sym_array = 34,
  sym_statement = 35,
  sym_if_statement = 36,
  sym_else_clause = 37,
  sym_expression = 38,
  sym_operator = 39,
  sym_for_statement = 40,
  sym_property = 41,
  sym_parameter = 42,
  sym_string = 43,
  sym_interpolation = 44,
  aux_sym_parser_repeat1 = 45,
  aux_sym_block_repeat1 = 46,
  aux_sym_function_repeat1 = 47,
  aux_sym_array_repeat1 = 48,
  aux_sym_statement_repeat1 = 49,
  aux_sym_string_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_BANG] = "!",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ_TILDE] = "=~",
  [anon_sym_BANG_TILDE] = "!~",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_map] = "map",
  [sym_comment] = "comment",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escaped_char] = "escaped_char",
  [anon_sym_PERCENT_LBRACE] = "%{",
  [anon_sym_COLON] = ":",
  [sym_parser] = "parser",
  [sym_block] = "block",
  [sym_function] = "function",
  [sym_key_value_pair] = "key_value_pair",
  [sym_array] = "array",
  [sym_statement] = "statement",
  [sym_if_statement] = "if_statement",
  [sym_else_clause] = "else_clause",
  [sym_expression] = "expression",
  [sym_operator] = "operator",
  [sym_for_statement] = "for_statement",
  [sym_property] = "property",
  [sym_parameter] = "parameter",
  [sym_string] = "string",
  [sym_interpolation] = "interpolation",
  [aux_sym_parser_repeat1] = "parser_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_statement_repeat1] = "statement_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ_TILDE] = anon_sym_EQ_TILDE,
  [anon_sym_BANG_TILDE] = anon_sym_BANG_TILDE,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_map] = anon_sym_map,
  [sym_comment] = sym_comment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escaped_char] = sym_escaped_char,
  [anon_sym_PERCENT_LBRACE] = anon_sym_PERCENT_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_parser] = sym_parser,
  [sym_block] = sym_block,
  [sym_function] = sym_function,
  [sym_key_value_pair] = sym_key_value_pair,
  [sym_array] = sym_array,
  [sym_statement] = sym_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_else_clause] = sym_else_clause,
  [sym_expression] = sym_expression,
  [sym_operator] = sym_operator,
  [sym_for_statement] = sym_for_statement,
  [sym_property] = sym_property,
  [sym_parameter] = sym_parameter,
  [sym_string] = sym_string,
  [sym_interpolation] = sym_interpolation,
  [aux_sym_parser_repeat1] = aux_sym_parser_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_statement_repeat1] = aux_sym_statement_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_parser] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_parser_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alternative = 1,
  field_argument = 2,
  field_condition = 3,
  field_consequence = 4,
  field_key = 5,
  field_name = 6,
  field_negation = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_key] = "key",
  [field_name] = "name",
  [field_negation] = "negation",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 3},
  [7] = {.index = 13, .length = 1},
  [8] = {.index = 14, .length = 4},
  [9] = {.index = 18, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_condition, 1},
    {field_consequence, 2},
  [3] =
    {field_name, 0},
    {field_value, 2},
  [5] =
    {field_argument, 2},
    {field_name, 0},
  [7] =
    {field_alternative, 3},
    {field_condition, 1},
    {field_consequence, 2},
  [10] =
    {field_argument, 2},
    {field_argument, 3},
    {field_name, 0},
  [13] =
    {field_negation, 0},
  [14] =
    {field_argument, 2},
    {field_argument, 3},
    {field_argument, 4},
    {field_name, 0},
  [18] =
    {field_key, 0},
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
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '!', 21,
        '"', 31,
        '#', 30,
        '%', 8,
        ',', 18,
        ':', 37,
        '<', 24,
        '=', 5,
        '>', 25,
        '[', 17,
        '\\', 7,
        ']', 19,
        '{', 14,
        '}', 15,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(25);
      if (lookahead == '{') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '[') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '~') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '~') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '~') ADVANCE(28);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        'u', 12,
        'x', 10,
        '"', 35,
        '\'', 35,
        '\\', 35,
        'b', 35,
        'f', 35,
        'n', 35,
        'r', 35,
        't', 35,
      );
      END_STATE();
    case 8:
      if (lookahead == '{') ADVANCE(36);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '~') ADVANCE(29);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '%') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_escaped_char);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'm') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 12:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ_TILDE] = ACTIONS(1),
    [anon_sym_BANG_TILDE] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escaped_char] = ACTIONS(1),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_parser] = STATE(84),
    [sym_block] = STATE(32),
    [aux_sym_parser_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_operator,
    ACTIONS(11), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(15), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [23] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_operator,
    ACTIONS(15), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(13), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [46] = 2,
    ACTIONS(21), 5,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_for,
      sym_identifier,
    ACTIONS(23), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_comment,
      anon_sym_DQUOTE,
  [63] = 2,
    ACTIONS(25), 5,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_for,
      sym_identifier,
    ACTIONS(27), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_comment,
      anon_sym_DQUOTE,
  [80] = 6,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      sym_comment,
    STATE(7), 6,
      sym_block,
      sym_function,
      sym_if_statement,
      sym_for_statement,
      sym_property,
      aux_sym_block_repeat1,
  [104] = 6,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      sym_comment,
    STATE(8), 6,
      sym_block,
      sym_function,
      sym_if_statement,
      sym_for_statement,
      sym_property,
      aux_sym_block_repeat1,
  [128] = 6,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      anon_sym_for,
    ACTIONS(54), 1,
      sym_comment,
    STATE(8), 6,
      sym_block,
      sym_function,
      sym_if_statement,
      sym_for_statement,
      sym_property,
      aux_sym_block_repeat1,
  [152] = 4,
    ACTIONS(61), 1,
      anon_sym_else,
    STATE(28), 1,
      sym_else_clause,
    ACTIONS(59), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(57), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [168] = 5,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_string,
    STATE(12), 3,
      sym_key_value_pair,
      sym_parameter,
      aux_sym_function_repeat1,
  [186] = 5,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      sym_string,
    STATE(10), 3,
      sym_key_value_pair,
      sym_parameter,
      aux_sym_function_repeat1,
  [204] = 5,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_string,
    STATE(12), 3,
      sym_key_value_pair,
      sym_parameter,
      aux_sym_function_repeat1,
  [222] = 2,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(81), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [233] = 6,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_array,
    STATE(26), 1,
      sym_string,
  [252] = 2,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(91), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [263] = 2,
    ACTIONS(93), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
    ACTIONS(95), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_DQUOTE,
  [274] = 4,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(99), 2,
      aux_sym_string_token1,
      sym_escaped_char,
    STATE(21), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [289] = 2,
    ACTIONS(105), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(103), 4,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      sym_identifier,
  [300] = 2,
    ACTIONS(107), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
    ACTIONS(109), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_DQUOTE,
  [311] = 2,
    ACTIONS(111), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
    ACTIONS(113), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_DQUOTE,
  [322] = 4,
    ACTIONS(101), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 2,
      aux_sym_string_token1,
      sym_escaped_char,
    STATE(22), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [337] = 4,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(121), 2,
      aux_sym_string_token1,
      sym_escaped_char,
    STATE(22), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [352] = 2,
    ACTIONS(129), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(127), 4,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      sym_identifier,
  [363] = 2,
    ACTIONS(131), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
    ACTIONS(133), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_DQUOTE,
  [374] = 2,
    ACTIONS(135), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
    ACTIONS(137), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_DQUOTE,
  [385] = 2,
    ACTIONS(141), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(139), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [395] = 4,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(148), 1,
      sym_comment,
    STATE(27), 2,
      sym_block,
      aux_sym_parser_repeat1,
  [409] = 2,
    ACTIONS(153), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(151), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [419] = 2,
    ACTIONS(157), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(155), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [429] = 2,
    ACTIONS(161), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(159), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [439] = 2,
    ACTIONS(165), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(163), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [449] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 1,
      sym_comment,
    STATE(27), 2,
      sym_block,
      aux_sym_parser_repeat1,
  [463] = 2,
    ACTIONS(173), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(171), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [473] = 2,
    ACTIONS(177), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(175), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [483] = 2,
    ACTIONS(181), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(179), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [493] = 4,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      aux_sym_array_repeat1,
    STATE(60), 1,
      sym_string,
  [506] = 3,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      anon_sym_if,
    STATE(31), 2,
      sym_statement,
      sym_if_statement,
  [517] = 3,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(58), 2,
      sym_function,
      sym_string,
  [528] = 3,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    STATE(59), 2,
      sym_array,
      sym_string,
  [539] = 4,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      aux_sym_array_repeat1,
    STATE(60), 1,
      sym_string,
  [552] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(44), 2,
      sym_block,
      aux_sym_statement_repeat1,
  [563] = 1,
    ACTIONS(198), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym_escaped_char,
      anon_sym_PERCENT_LBRACE,
  [570] = 4,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      aux_sym_array_repeat1,
    STATE(60), 1,
      sym_string,
  [583] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    STATE(46), 2,
      sym_block,
      aux_sym_statement_repeat1,
  [594] = 1,
    ACTIONS(204), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym_escaped_char,
      anon_sym_PERCENT_LBRACE,
  [601] = 3,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(46), 2,
      sym_block,
      aux_sym_statement_repeat1,
  [612] = 2,
    ACTIONS(213), 1,
      anon_sym_EQ_GT,
    ACTIONS(211), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_identifier,
  [621] = 1,
    ACTIONS(215), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym_escaped_char,
      anon_sym_PERCENT_LBRACE,
  [628] = 3,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      anon_sym_BANG,
    STATE(91), 1,
      sym_expression,
  [638] = 3,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      anon_sym_BANG,
    STATE(80), 1,
      sym_expression,
  [648] = 3,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(221), 1,
      anon_sym_map,
    STATE(29), 1,
      sym_statement,
  [658] = 3,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(223), 1,
      anon_sym_map,
    STATE(33), 1,
      sym_statement,
  [668] = 3,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(225), 1,
      anon_sym_map,
    STATE(30), 1,
      sym_statement,
  [678] = 2,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
    ACTIONS(229), 2,
      anon_sym_and,
      anon_sym_or,
  [686] = 3,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_in,
  [696] = 3,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(237), 1,
      anon_sym_map,
    STATE(34), 1,
      sym_statement,
  [706] = 3,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      anon_sym_BANG,
    STATE(72), 1,
      sym_expression,
  [716] = 1,
    ACTIONS(239), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_identifier,
  [722] = 1,
    ACTIONS(241), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_identifier,
  [728] = 2,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(245), 2,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [736] = 2,
    ACTIONS(247), 1,
      anon_sym_LBRACE,
    ACTIONS(249), 2,
      anon_sym_and,
      anon_sym_or,
  [744] = 3,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_array,
  [754] = 3,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      anon_sym_BANG,
    STATE(96), 1,
      sym_expression,
  [764] = 3,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      anon_sym_BANG,
    STATE(85), 1,
      sym_expression,
  [774] = 2,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_statement,
  [781] = 1,
    ACTIONS(183), 2,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [786] = 2,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 1,
      anon_sym_COLON,
  [793] = 2,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym_string,
  [800] = 2,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_in,
  [807] = 2,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_statement,
  [814] = 2,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_string,
  [821] = 2,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_statement,
  [828] = 2,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_statement,
  [835] = 2,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_statement,
  [842] = 2,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    ACTIONS(261), 1,
      anon_sym_COLON,
  [849] = 2,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_EQ_GT,
  [856] = 1,
    ACTIONS(267), 1,
      sym_identifier,
  [860] = 1,
    ACTIONS(269), 1,
      sym_identifier,
  [864] = 1,
    ACTIONS(271), 1,
      anon_sym_EQ_GT,
  [868] = 1,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
  [872] = 1,
    ACTIONS(273), 1,
      sym_identifier,
  [876] = 1,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
  [880] = 1,
    ACTIONS(277), 1,
      sym_identifier,
  [884] = 1,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
  [888] = 1,
    ACTIONS(247), 1,
      anon_sym_LBRACE,
  [892] = 1,
    ACTIONS(281), 1,
      sym_identifier,
  [896] = 1,
    ACTIONS(283), 1,
      anon_sym_EQ_GT,
  [900] = 1,
    ACTIONS(285), 1,
      anon_sym_RBRACK,
  [904] = 1,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
  [908] = 1,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
  [912] = 1,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
  [916] = 1,
    ACTIONS(291), 1,
      anon_sym_RBRACK,
  [920] = 1,
    ACTIONS(293), 1,
      sym_identifier,
  [924] = 1,
    ACTIONS(295), 1,
      sym_identifier,
  [928] = 1,
    ACTIONS(297), 1,
      sym_identifier,
  [932] = 1,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
  [936] = 1,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
  [940] = 1,
    ACTIONS(303), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 104,
  [SMALL_STATE(8)] = 128,
  [SMALL_STATE(9)] = 152,
  [SMALL_STATE(10)] = 168,
  [SMALL_STATE(11)] = 186,
  [SMALL_STATE(12)] = 204,
  [SMALL_STATE(13)] = 222,
  [SMALL_STATE(14)] = 233,
  [SMALL_STATE(15)] = 252,
  [SMALL_STATE(16)] = 263,
  [SMALL_STATE(17)] = 274,
  [SMALL_STATE(18)] = 289,
  [SMALL_STATE(19)] = 300,
  [SMALL_STATE(20)] = 311,
  [SMALL_STATE(21)] = 322,
  [SMALL_STATE(22)] = 337,
  [SMALL_STATE(23)] = 352,
  [SMALL_STATE(24)] = 363,
  [SMALL_STATE(25)] = 374,
  [SMALL_STATE(26)] = 385,
  [SMALL_STATE(27)] = 395,
  [SMALL_STATE(28)] = 409,
  [SMALL_STATE(29)] = 419,
  [SMALL_STATE(30)] = 429,
  [SMALL_STATE(31)] = 439,
  [SMALL_STATE(32)] = 449,
  [SMALL_STATE(33)] = 463,
  [SMALL_STATE(34)] = 473,
  [SMALL_STATE(35)] = 483,
  [SMALL_STATE(36)] = 493,
  [SMALL_STATE(37)] = 506,
  [SMALL_STATE(38)] = 517,
  [SMALL_STATE(39)] = 528,
  [SMALL_STATE(40)] = 539,
  [SMALL_STATE(41)] = 552,
  [SMALL_STATE(42)] = 563,
  [SMALL_STATE(43)] = 570,
  [SMALL_STATE(44)] = 583,
  [SMALL_STATE(45)] = 594,
  [SMALL_STATE(46)] = 601,
  [SMALL_STATE(47)] = 612,
  [SMALL_STATE(48)] = 621,
  [SMALL_STATE(49)] = 628,
  [SMALL_STATE(50)] = 638,
  [SMALL_STATE(51)] = 648,
  [SMALL_STATE(52)] = 658,
  [SMALL_STATE(53)] = 668,
  [SMALL_STATE(54)] = 678,
  [SMALL_STATE(55)] = 686,
  [SMALL_STATE(56)] = 696,
  [SMALL_STATE(57)] = 706,
  [SMALL_STATE(58)] = 716,
  [SMALL_STATE(59)] = 722,
  [SMALL_STATE(60)] = 728,
  [SMALL_STATE(61)] = 736,
  [SMALL_STATE(62)] = 744,
  [SMALL_STATE(63)] = 754,
  [SMALL_STATE(64)] = 764,
  [SMALL_STATE(65)] = 774,
  [SMALL_STATE(66)] = 781,
  [SMALL_STATE(67)] = 786,
  [SMALL_STATE(68)] = 793,
  [SMALL_STATE(69)] = 800,
  [SMALL_STATE(70)] = 807,
  [SMALL_STATE(71)] = 814,
  [SMALL_STATE(72)] = 821,
  [SMALL_STATE(73)] = 828,
  [SMALL_STATE(74)] = 835,
  [SMALL_STATE(75)] = 842,
  [SMALL_STATE(76)] = 849,
  [SMALL_STATE(77)] = 856,
  [SMALL_STATE(78)] = 860,
  [SMALL_STATE(79)] = 864,
  [SMALL_STATE(80)] = 868,
  [SMALL_STATE(81)] = 872,
  [SMALL_STATE(82)] = 876,
  [SMALL_STATE(83)] = 880,
  [SMALL_STATE(84)] = 884,
  [SMALL_STATE(85)] = 888,
  [SMALL_STATE(86)] = 892,
  [SMALL_STATE(87)] = 896,
  [SMALL_STATE(88)] = 900,
  [SMALL_STATE(89)] = 904,
  [SMALL_STATE(90)] = 908,
  [SMALL_STATE(91)] = 912,
  [SMALL_STATE(92)] = 916,
  [SMALL_STATE(93)] = 920,
  [SMALL_STATE(94)] = 924,
  [SMALL_STATE(95)] = 928,
  [SMALL_STATE(96)] = 932,
  [SMALL_STATE(97)] = 936,
  [SMALL_STATE(98)] = 940,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parser, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4, 0, 7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, 0, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3, 0, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3, 0, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4, 0, 6),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4, 0, 6),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 5, 0, 8),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, 0, 8),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, 0, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, 0, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parser_repeat1, 2, 0, 0),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parser_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parser_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 5),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 5),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parser, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 8, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 7, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, 0, 0),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 5, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 5, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 3, 0, 9),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 6, 0, 7),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [279] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 7, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 8, 0, 7),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
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

TS_PUBLIC const TSLanguage *tree_sitter_sop(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

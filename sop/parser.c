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
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
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
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
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
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
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
    [sym_parser] = STATE(98),
    [sym_block] = STATE(28),
    [aux_sym_parser_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(9), 5,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_for,
      sym_identifier,
    ACTIONS(11), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_comment,
      anon_sym_DQUOTE,
  [17] = 5,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_operator,
    ACTIONS(15), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(19), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
  [40] = 5,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_operator,
    ACTIONS(19), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(17), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
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
    STATE(8), 6,
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
    STATE(6), 6,
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
  [152] = 5,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_string,
    STATE(11), 3,
      sym_key_value_pair,
      sym_parameter,
      aux_sym_function_repeat1,
  [170] = 4,
    ACTIONS(67), 1,
      anon_sym_else,
    STATE(27), 1,
      sym_else_clause,
    ACTIONS(65), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(63), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [186] = 5,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_string,
    STATE(11), 3,
      sym_key_value_pair,
      sym_parameter,
      aux_sym_function_repeat1,
  [204] = 5,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym_string,
    STATE(9), 3,
      sym_key_value_pair,
      sym_parameter,
      aux_sym_function_repeat1,
  [222] = 2,
    ACTIONS(79), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
    ACTIONS(81), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_DQUOTE,
  [233] = 2,
    ACTIONS(85), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(83), 4,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      sym_identifier,
  [244] = 4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(89), 2,
      aux_sym_string_token1,
      sym_escaped_char,
    STATE(17), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [259] = 2,
    ACTIONS(93), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
    ACTIONS(95), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_DQUOTE,
  [270] = 4,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(99), 2,
      aux_sym_string_token1,
      sym_escaped_char,
    STATE(17), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [285] = 2,
    ACTIONS(107), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(105), 4,
      anon_sym_if,
      anon_sym_else,
      anon_sym_for,
      sym_identifier,
  [296] = 6,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_array,
    STATE(29), 1,
      sym_string,
  [315] = 2,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [326] = 2,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [337] = 4,
    ACTIONS(91), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 2,
      aux_sym_string_token1,
      sym_escaped_char,
    STATE(15), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [352] = 2,
    ACTIONS(127), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
    ACTIONS(129), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_DQUOTE,
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
  [395] = 2,
    ACTIONS(145), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(143), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [405] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      sym_comment,
    STATE(30), 2,
      sym_block,
      aux_sym_parser_repeat1,
  [419] = 2,
    ACTIONS(153), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(151), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [429] = 4,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(160), 1,
      sym_comment,
    STATE(30), 2,
      sym_block,
      aux_sym_parser_repeat1,
  [443] = 2,
    ACTIONS(165), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(163), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
  [453] = 2,
    ACTIONS(169), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(167), 3,
      anon_sym_if,
      anon_sym_for,
      sym_identifier,
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
  [493] = 3,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(58), 2,
      sym_function,
      sym_string,
  [504] = 3,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    STATE(57), 2,
      sym_array,
      sym_string,
  [515] = 3,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_if,
    STATE(34), 2,
      sym_statement,
      sym_if_statement,
  [526] = 3,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(39), 2,
      sym_block,
      aux_sym_statement_repeat1,
  [537] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(39), 2,
      sym_block,
      aux_sym_statement_repeat1,
  [548] = 1,
    ACTIONS(196), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym_escaped_char,
      anon_sym_PERCENT_LBRACE,
  [555] = 2,
    ACTIONS(200), 1,
      anon_sym_EQ_GT,
    ACTIONS(198), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_identifier,
  [564] = 4,
    ACTIONS(202), 1,
      anon_sym_RBRACK,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_array_repeat1,
    STATE(55), 1,
      sym_string,
  [577] = 4,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_array_repeat1,
    STATE(55), 1,
      sym_string,
  [590] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(40), 2,
      sym_block,
      aux_sym_statement_repeat1,
  [601] = 1,
    ACTIONS(211), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym_escaped_char,
      anon_sym_PERCENT_LBRACE,
  [608] = 4,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      aux_sym_array_repeat1,
    STATE(55), 1,
      sym_string,
  [621] = 1,
    ACTIONS(215), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym_escaped_char,
      anon_sym_PERCENT_LBRACE,
  [628] = 2,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 2,
      anon_sym_and,
      anon_sym_or,
  [636] = 2,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    ACTIONS(223), 2,
      anon_sym_and,
      anon_sym_or,
  [644] = 3,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      anon_sym_BANG,
    STATE(81), 1,
      sym_expression,
  [654] = 3,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      anon_sym_BANG,
    STATE(73), 1,
      sym_expression,
  [664] = 3,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      anon_sym_BANG,
    STATE(96), 1,
      sym_expression,
  [674] = 3,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_array,
  [684] = 2,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 2,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [692] = 3,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      anon_sym_BANG,
    STATE(91), 1,
      sym_expression,
  [702] = 1,
    ACTIONS(233), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_identifier,
  [708] = 1,
    ACTIONS(235), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_identifier,
  [714] = 3,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(237), 1,
      anon_sym_map,
    STATE(26), 1,
      sym_statement,
  [724] = 3,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_map,
    STATE(32), 1,
      sym_statement,
  [734] = 3,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_map,
    STATE(35), 1,
      sym_statement,
  [744] = 3,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      anon_sym_BANG,
    STATE(85), 1,
      sym_expression,
  [754] = 3,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_in,
  [764] = 3,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(249), 1,
      anon_sym_map,
    STATE(33), 1,
      sym_statement,
  [774] = 2,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_statement,
  [781] = 2,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 1,
      anon_sym_COLON,
  [788] = 2,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_string,
  [795] = 2,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    ACTIONS(257), 1,
      anon_sym_EQ_GT,
  [802] = 2,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    ACTIONS(261), 1,
      anon_sym_COLON,
  [809] = 2,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_statement,
  [816] = 2,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym_string,
  [823] = 1,
    ACTIONS(202), 2,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [828] = 2,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_statement,
  [835] = 2,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_in,
  [842] = 2,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_statement,
  [849] = 2,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_statement,
  [856] = 1,
    ACTIONS(267), 1,
      anon_sym_EQ_GT,
  [860] = 1,
    ACTIONS(269), 1,
      anon_sym_RBRACK,
  [864] = 1,
    ACTIONS(271), 1,
      anon_sym_EQ_GT,
  [868] = 1,
    ACTIONS(273), 1,
      sym_identifier,
  [872] = 1,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
  [876] = 1,
    ACTIONS(275), 1,
      sym_identifier,
  [880] = 1,
    ACTIONS(277), 1,
      sym_identifier,
  [884] = 1,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
  [888] = 1,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
  [892] = 1,
    ACTIONS(281), 1,
      sym_identifier,
  [896] = 1,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
  [900] = 1,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
  [904] = 1,
    ACTIONS(285), 1,
      sym_identifier,
  [908] = 1,
    ACTIONS(287), 1,
      sym_identifier,
  [912] = 1,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
  [916] = 1,
    ACTIONS(291), 1,
      sym_identifier,
  [920] = 1,
    ACTIONS(293), 1,
      sym_identifier,
  [924] = 1,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
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
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 104,
  [SMALL_STATE(8)] = 128,
  [SMALL_STATE(9)] = 152,
  [SMALL_STATE(10)] = 170,
  [SMALL_STATE(11)] = 186,
  [SMALL_STATE(12)] = 204,
  [SMALL_STATE(13)] = 222,
  [SMALL_STATE(14)] = 233,
  [SMALL_STATE(15)] = 244,
  [SMALL_STATE(16)] = 259,
  [SMALL_STATE(17)] = 270,
  [SMALL_STATE(18)] = 285,
  [SMALL_STATE(19)] = 296,
  [SMALL_STATE(20)] = 315,
  [SMALL_STATE(21)] = 326,
  [SMALL_STATE(22)] = 337,
  [SMALL_STATE(23)] = 352,
  [SMALL_STATE(24)] = 363,
  [SMALL_STATE(25)] = 374,
  [SMALL_STATE(26)] = 385,
  [SMALL_STATE(27)] = 395,
  [SMALL_STATE(28)] = 405,
  [SMALL_STATE(29)] = 419,
  [SMALL_STATE(30)] = 429,
  [SMALL_STATE(31)] = 443,
  [SMALL_STATE(32)] = 453,
  [SMALL_STATE(33)] = 463,
  [SMALL_STATE(34)] = 473,
  [SMALL_STATE(35)] = 483,
  [SMALL_STATE(36)] = 493,
  [SMALL_STATE(37)] = 504,
  [SMALL_STATE(38)] = 515,
  [SMALL_STATE(39)] = 526,
  [SMALL_STATE(40)] = 537,
  [SMALL_STATE(41)] = 548,
  [SMALL_STATE(42)] = 555,
  [SMALL_STATE(43)] = 564,
  [SMALL_STATE(44)] = 577,
  [SMALL_STATE(45)] = 590,
  [SMALL_STATE(46)] = 601,
  [SMALL_STATE(47)] = 608,
  [SMALL_STATE(48)] = 621,
  [SMALL_STATE(49)] = 628,
  [SMALL_STATE(50)] = 636,
  [SMALL_STATE(51)] = 644,
  [SMALL_STATE(52)] = 654,
  [SMALL_STATE(53)] = 664,
  [SMALL_STATE(54)] = 674,
  [SMALL_STATE(55)] = 684,
  [SMALL_STATE(56)] = 692,
  [SMALL_STATE(57)] = 702,
  [SMALL_STATE(58)] = 708,
  [SMALL_STATE(59)] = 714,
  [SMALL_STATE(60)] = 724,
  [SMALL_STATE(61)] = 734,
  [SMALL_STATE(62)] = 744,
  [SMALL_STATE(63)] = 754,
  [SMALL_STATE(64)] = 764,
  [SMALL_STATE(65)] = 774,
  [SMALL_STATE(66)] = 781,
  [SMALL_STATE(67)] = 788,
  [SMALL_STATE(68)] = 795,
  [SMALL_STATE(69)] = 802,
  [SMALL_STATE(70)] = 809,
  [SMALL_STATE(71)] = 816,
  [SMALL_STATE(72)] = 823,
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
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4, 0, 7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, 0, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2, 0, 0),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4, 0, 6),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4, 0, 6),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3, 0, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3, 0, 4),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 5, 0, 8),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, 0, 8),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parser, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, 0, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, 0, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parser_repeat1, 2, 0, 0),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parser_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parser_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 8, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 7, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 5, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 5, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 6, 0, 7),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 3, 0, 9),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 7, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 8, 0, 7),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [303] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

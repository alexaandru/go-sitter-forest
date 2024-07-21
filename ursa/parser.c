#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 276
#define LARGE_STATE_COUNT 64
#define SYMBOL_COUNT 93
#define ALIAS_COUNT 1
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  aux_sym__shebang_token1 = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_let = 4,
  anon_sym_EQ = 5,
  anon_sym_use = 6,
  anon_sym_DOT = 7,
  anon_sym_SEMI = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_break = 11,
  sym_continue = 12,
  anon_sym_return = 13,
  anon_sym_await = 14,
  anon_sym_launch = 15,
  anon_sym_yield = 16,
  anon_sym_if = 17,
  anon_sym_else = 18,
  anon_sym_fn = 19,
  anon_sym_gen = 20,
  anon_sym_COMMA = 21,
  anon_sym_loop = 22,
  anon_sym_for = 23,
  anon_sym_of = 24,
  anon_sym_LBRACK = 25,
  anon_sym_RBRACK = 26,
  anon_sym_COLON = 27,
  anon_sym_LF = 28,
  anon_sym_COLON_EQ = 29,
  anon_sym_or = 30,
  anon_sym_and = 31,
  anon_sym_EQ_EQ = 32,
  anon_sym_BANG_EQ = 33,
  anon_sym_LT = 34,
  anon_sym_LT_EQ = 35,
  anon_sym_GT = 36,
  anon_sym_GT_EQ = 37,
  anon_sym_PLUS = 38,
  anon_sym_DASH = 39,
  anon_sym_STAR = 40,
  anon_sym_SLASH = 41,
  anon_sym_PERCENT = 42,
  anon_sym_STAR_STAR = 43,
  anon_sym_not = 44,
  sym_identifier = 45,
  sym_number = 46,
  anon_sym_false = 47,
  anon_sym_true = 48,
  sym_null = 49,
  anon_sym_DQUOTE = 50,
  sym__unescaped_string_fragment = 51,
  sym__escape_sequence = 52,
  sym_line_comment = 53,
  sym__automatic_semicolon = 54,
  sym_block_comment = 55,
  sym_raw_string_literal = 56,
  sym_module = 57,
  sym__shebang = 58,
  sym__sequence = 59,
  sym_block = 60,
  sym_let = 61,
  sym_use = 62,
  sym__sc = 63,
  sym__exp = 64,
  sym_break = 65,
  sym_return = 66,
  sym_await = 67,
  sym_launch = 68,
  sym_yield = 69,
  sym_if = 70,
  sym__fn = 71,
  sym_lambda = 72,
  sym_loop = 73,
  sym_for = 74,
  sym_list = 75,
  sym_map = 76,
  sym_object = 77,
  sym_assignment = 78,
  sym_binary_exp = 79,
  sym_unary_exp = 80,
  sym_call = 81,
  sym_property_exp = 82,
  sym_bool = 83,
  sym_string = 84,
  aux_sym__sequence_repeat1 = 85,
  aux_sym_use_repeat1 = 86,
  aux_sym_lambda_repeat1 = 87,
  aux_sym_list_repeat1 = 88,
  aux_sym_map_repeat1 = 89,
  aux_sym_object_repeat1 = 90,
  aux_sym_property_exp_repeat1 = 91,
  aux_sym_string_repeat1 = 92,
  alias_sym_property_identifier = 93,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__shebang_token1] = "line_comment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_use] = "use",
  [anon_sym_DOT] = ".",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_break] = "break",
  [sym_continue] = "continue",
  [anon_sym_return] = "return",
  [anon_sym_await] = "await",
  [anon_sym_launch] = "launch",
  [anon_sym_yield] = "yield",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_fn] = "fn",
  [anon_sym_gen] = "gen",
  [anon_sym_COMMA] = ",",
  [anon_sym_loop] = "loop",
  [anon_sym_for] = "for",
  [anon_sym_of] = "of",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_not] = "not",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_false] = "false",
  [anon_sym_true] = "true",
  [sym_null] = "null",
  [anon_sym_DQUOTE] = "\"",
  [sym__unescaped_string_fragment] = "_unescaped_string_fragment",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_line_comment] = "line_comment",
  [sym__automatic_semicolon] = "_automatic_semicolon",
  [sym_block_comment] = "block_comment",
  [sym_raw_string_literal] = "raw_string_literal",
  [sym_module] = "module",
  [sym__shebang] = "_shebang",
  [sym__sequence] = "_sequence",
  [sym_block] = "block",
  [sym_let] = "let",
  [sym_use] = "use",
  [sym__sc] = "_sc",
  [sym__exp] = "_exp",
  [sym_break] = "break",
  [sym_return] = "return",
  [sym_await] = "await",
  [sym_launch] = "launch",
  [sym_yield] = "yield",
  [sym_if] = "if",
  [sym__fn] = "_fn",
  [sym_lambda] = "lambda",
  [sym_loop] = "loop",
  [sym_for] = "for",
  [sym_list] = "list",
  [sym_map] = "map",
  [sym_object] = "object",
  [sym_assignment] = "assignment",
  [sym_binary_exp] = "binary_exp",
  [sym_unary_exp] = "unary_exp",
  [sym_call] = "call",
  [sym_property_exp] = "property_exp",
  [sym_bool] = "bool",
  [sym_string] = "string",
  [aux_sym__sequence_repeat1] = "_sequence_repeat1",
  [aux_sym_use_repeat1] = "use_repeat1",
  [aux_sym_lambda_repeat1] = "lambda_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_property_exp_repeat1] = "property_exp_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_property_identifier] = "property_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__shebang_token1] = sym_line_comment,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_break] = anon_sym_break,
  [sym_continue] = sym_continue,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_await] = anon_sym_await,
  [anon_sym_launch] = anon_sym_launch,
  [anon_sym_yield] = anon_sym_yield,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_gen] = anon_sym_gen,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_loop] = anon_sym_loop,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_not] = anon_sym_not,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_true] = anon_sym_true,
  [sym_null] = sym_null,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__unescaped_string_fragment] = sym__unescaped_string_fragment,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_line_comment] = sym_line_comment,
  [sym__automatic_semicolon] = sym__automatic_semicolon,
  [sym_block_comment] = sym_block_comment,
  [sym_raw_string_literal] = sym_raw_string_literal,
  [sym_module] = sym_module,
  [sym__shebang] = sym__shebang,
  [sym__sequence] = sym__sequence,
  [sym_block] = sym_block,
  [sym_let] = sym_let,
  [sym_use] = sym_use,
  [sym__sc] = sym__sc,
  [sym__exp] = sym__exp,
  [sym_break] = sym_break,
  [sym_return] = sym_return,
  [sym_await] = sym_await,
  [sym_launch] = sym_launch,
  [sym_yield] = sym_yield,
  [sym_if] = sym_if,
  [sym__fn] = sym__fn,
  [sym_lambda] = sym_lambda,
  [sym_loop] = sym_loop,
  [sym_for] = sym_for,
  [sym_list] = sym_list,
  [sym_map] = sym_map,
  [sym_object] = sym_object,
  [sym_assignment] = sym_assignment,
  [sym_binary_exp] = sym_binary_exp,
  [sym_unary_exp] = sym_unary_exp,
  [sym_call] = sym_call,
  [sym_property_exp] = sym_property_exp,
  [sym_bool] = sym_bool,
  [sym_string] = sym_string,
  [aux_sym__sequence_repeat1] = aux_sym__sequence_repeat1,
  [aux_sym_use_repeat1] = aux_sym_use_repeat1,
  [aux_sym_lambda_repeat1] = aux_sym_lambda_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_property_exp_repeat1] = aux_sym_property_exp_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_property_identifier] = alias_sym_property_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__shebang_token1] = {
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
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [sym_continue] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_await] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_launch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yield] = {
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
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
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
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
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
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__unescaped_string_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__automatic_semicolon] = {
    .visible = false,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym__shebang] = {
    .visible = false,
    .named = true,
  },
  [sym__sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_let] = {
    .visible = true,
    .named = true,
  },
  [sym_use] = {
    .visible = true,
    .named = true,
  },
  [sym__sc] = {
    .visible = false,
    .named = true,
  },
  [sym__exp] = {
    .visible = false,
    .named = true,
  },
  [sym_break] = {
    .visible = true,
    .named = true,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym_await] = {
    .visible = true,
    .named = true,
  },
  [sym_launch] = {
    .visible = true,
    .named = true,
  },
  [sym_yield] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym__fn] = {
    .visible = false,
    .named = true,
  },
  [sym_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_for] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_property_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lambda_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_exp_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_property_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_function = 1,
  field_identifier = 2,
  field_iterator = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function] = "function",
  [field_identifier] = "identifier",
  [field_iterator] = "iterator",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function, 0},
  [1] =
    {field_identifier, 1},
    {field_value, 3},
  [3] =
    {field_identifier, 1},
    {field_iterator, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_property_identifier,
  },
  [5] = {
    [1] = alias_sym_property_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 21,
  [24] = 22,
  [25] = 20,
  [26] = 19,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 32,
  [34] = 34,
  [35] = 34,
  [36] = 36,
  [37] = 27,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 28,
  [44] = 44,
  [45] = 42,
  [46] = 46,
  [47] = 44,
  [48] = 48,
  [49] = 49,
  [50] = 46,
  [51] = 51,
  [52] = 49,
  [53] = 51,
  [54] = 54,
  [55] = 48,
  [56] = 41,
  [57] = 40,
  [58] = 39,
  [59] = 38,
  [60] = 36,
  [61] = 30,
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
  [77] = 68,
  [78] = 78,
  [79] = 69,
  [80] = 80,
  [81] = 81,
  [82] = 80,
  [83] = 70,
  [84] = 84,
  [85] = 65,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 71,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 66,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 72,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 73,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 76,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 67,
  [131] = 64,
  [132] = 93,
  [133] = 108,
  [134] = 121,
  [135] = 118,
  [136] = 101,
  [137] = 125,
  [138] = 112,
  [139] = 105,
  [140] = 100,
  [141] = 126,
  [142] = 99,
  [143] = 98,
  [144] = 102,
  [145] = 127,
  [146] = 119,
  [147] = 92,
  [148] = 128,
  [149] = 96,
  [150] = 129,
  [151] = 95,
  [152] = 94,
  [153] = 74,
  [154] = 124,
  [155] = 113,
  [156] = 86,
  [157] = 106,
  [158] = 107,
  [159] = 91,
  [160] = 75,
  [161] = 78,
  [162] = 88,
  [163] = 90,
  [164] = 81,
  [165] = 111,
  [166] = 116,
  [167] = 123,
  [168] = 84,
  [169] = 114,
  [170] = 103,
  [171] = 120,
  [172] = 87,
  [173] = 109,
  [174] = 110,
  [175] = 175,
  [176] = 176,
  [177] = 175,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 179,
  [182] = 182,
  [183] = 182,
  [184] = 180,
  [185] = 185,
  [186] = 186,
  [187] = 186,
  [188] = 188,
  [189] = 189,
  [190] = 189,
  [191] = 191,
  [192] = 191,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 197,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 201,
  [204] = 198,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 207,
  [211] = 211,
  [212] = 205,
  [213] = 213,
  [214] = 214,
  [215] = 208,
  [216] = 214,
  [217] = 209,
  [218] = 218,
  [219] = 211,
  [220] = 213,
  [221] = 221,
  [222] = 222,
  [223] = 221,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 224,
  [230] = 225,
  [231] = 227,
  [232] = 232,
  [233] = 222,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 226,
  [239] = 234,
  [240] = 228,
  [241] = 236,
  [242] = 235,
  [243] = 237,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 251,
  [257] = 252,
  [258] = 258,
  [259] = 244,
  [260] = 258,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 262,
  [265] = 265,
  [266] = 266,
  [267] = 254,
  [268] = 255,
  [269] = 265,
  [270] = 248,
  [271] = 263,
  [272] = 266,
  [273] = 250,
  [274] = 245,
  [275] = 275,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43471
    ? (c < 4186
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'd'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3634
            ? (c < 3406
              ? (c < 3313
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3332 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3386 || c == 3389))))
              : (c <= 3406 || (c < 3482
                ? (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))))))
            : (c <= 3635 || (c < 3776
              ? (c < 3724
                ? (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3763 || c == 3773))))
              : (c <= 3780 || (c < 3913
                ? (c < 3840
                  ? (c < 3804
                    ? c == 3782
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4159
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))))))))))))
      : (c <= 4189 || (c < 8126
        ? (c < 6108
          ? (c < 4802
            ? (c < 4682
              ? (c < 4256
                ? (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))))
              : (c <= 4685 || (c < 4746
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))))))
            : (c <= 4805 || (c < 5761
              ? (c < 4992
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))))
              : (c <= 5786 || (c < 5952
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))))))))
          : (c <= 6108 || (c < 7258
            ? (c < 6656
              ? (c < 6400
                ? (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))
                : (c <= 6430 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))
              : (c <= 6678 || (c < 7043
                ? (c < 6917
                  ? (c < 6823
                    ? (c >= 6688 && c <= 6740)
                    : c <= 6823)
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7168
                  ? (c < 7098
                    ? (c >= 7086 && c <= 7087)
                    : c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))))))
            : (c <= 7293 || (c < 7960
              ? (c < 7406
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7424
                  ? (c < 7418
                    ? (c >= 7413 && c <= 7414)
                    : c <= 7418)
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8027
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))))))))
        : (c <= 8126 || (c < 12293
          ? (c < 8517
            ? (c < 8450
              ? (c < 8178
                ? (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))
                : (c <= 8180 || (c < 8319
                  ? (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)
                  : (c <= 8319 || (c >= 8336 && c <= 8348)))))
              : (c <= 8450 || (c < 8484
                ? (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c >= 8472 && c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))
            : (c <= 8521 || (c < 11631
              ? (c < 11506
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))
              : (c <= 11631 || (c < 11704
                ? (c < 11688
                  ? (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))))))))
          : (c <= 12295 || (c < 42656
            ? (c < 12704
              ? (c < 12443
                ? (c < 12344
                  ? (c < 12337
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))
                : (c <= 12447 || (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))
              : (c <= 12735 || (c < 42240
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))))))
            : (c <= 42735 || (c < 43020
              ? (c < 42963
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 43011
                  ? (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))))
              : (c <= 43042 || (c < 43261
                ? (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))))))))))))
    : (c <= 43471 || (c < 70784
      ? (c < 66979
        ? (c < 64467
          ? (c < 43808
            ? (c < 43701
              ? (c < 43588
                ? (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)))
                : (c <= 43595 || (c < 43646
                  ? (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)
                  : (c <= 43695 || c == 43697))))
              : (c <= 43702 || (c < 43744
                ? (c < 43714
                  ? (c < 43712
                    ? (c >= 43705 && c <= 43709)
                    : c <= 43712)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))
                : (c <= 43754 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))))))
            : (c <= 43814 || (c < 64256
              ? (c < 44032
                ? (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))))
              : (c <= 64262 || (c < 64312
                ? (c < 64287
                  ? (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64285)
                  : (c <= 64296 || (c >= 64298 && c <= 64310)))
                : (c <= 64316 || (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))))))
          : (c <= 64829 || (c < 65856
            ? (c < 65482
              ? (c < 65142
                ? (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))
              : (c <= 65487 || (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65908 || (c < 66560
              ? (c < 66384
                ? (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))
                : (c <= 66421 || (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))))
              : (c <= 66717 || (c < 66928
                ? (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))))))))
        : (c <= 66993 || (c < 69376
          ? (c < 67968
            ? (c < 67594
              ? (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))))
              : (c <= 67637 || (c < 67712
                ? (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))
                : (c <= 67742 || (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))))))
            : (c <= 68023 || (c < 68352
              ? (c < 68121
                ? (c < 68112
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68096)
                  : (c <= 68115 || (c >= 68117 && c <= 68119)))
                : (c <= 68149 || (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c >= 68297 && c <= 68324)))))
              : (c <= 68405 || (c < 68736
                ? (c < 68480
                  ? (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)
                  : (c <= 68497 || (c >= 68608 && c <= 68680)))
                : (c <= 68786 || (c < 69248
                  ? (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68899)
                  : (c <= 69289 || (c >= 69296 && c <= 69297)))))))))
          : (c <= 69404 || (c < 70144
            ? (c < 69840
              ? (c < 69600
                ? (c < 69488
                  ? (c < 69424
                    ? c == 69415
                    : c <= 69445)
                  : (c <= 69505 || (c >= 69552 && c <= 69572)))
                : (c <= 69622 || (c < 69749
                  ? (c < 69745
                    ? (c >= 69635 && c <= 69687)
                    : c <= 69746)
                  : (c <= 69749 || (c >= 69763 && c <= 69807)))))
              : (c <= 69864 || (c < 70006
                ? (c < 69959
                  ? (c < 69956
                    ? (c >= 69891 && c <= 69926)
                    : c <= 69956)
                  : (c <= 69959 || (c >= 69968 && c <= 70002)))
                : (c <= 70006 || (c < 70106
                  ? (c < 70081
                    ? (c >= 70019 && c <= 70066)
                    : c <= 70084)
                  : (c <= 70106 || c == 70108))))))
            : (c <= 70161 || (c < 70419
              ? (c < 70287
                ? (c < 70280
                  ? (c < 70272
                    ? (c >= 70163 && c <= 70187)
                    : c <= 70278)
                  : (c <= 70280 || (c >= 70282 && c <= 70285)))
                : (c <= 70301 || (c < 70405
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70366)
                  : (c <= 70412 || (c >= 70415 && c <= 70416)))))
              : (c <= 70440 || (c < 70480
                ? (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || c == 70461))
                : (c <= 70480 || (c < 70727
                  ? (c < 70656
                    ? (c >= 70493 && c <= 70497)
                    : c <= 70708)
                  : (c <= 70730 || (c >= 70751 && c <= 70753)))))))))))))
      : (c <= 70831 || (c < 119966
        ? (c < 73066
          ? (c < 72106
            ? (c < 71680
              ? (c < 71236
                ? (c < 71040
                  ? (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)
                  : (c <= 71086 || (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)))
                : (c <= 71236 || (c < 71424
                  ? (c < 71352
                    ? (c >= 71296 && c <= 71338)
                    : c <= 71352)
                  : (c <= 71450 || (c >= 71488 && c <= 71494)))))
              : (c <= 71723 || (c < 71957
                ? (c < 71945
                  ? (c < 71935
                    ? (c >= 71840 && c <= 71903)
                    : c <= 71942)
                  : (c <= 71945 || (c >= 71948 && c <= 71955)))
                : (c <= 71958 || (c < 72001
                  ? (c < 71999
                    ? (c >= 71960 && c <= 71983)
                    : c <= 71999)
                  : (c <= 72001 || (c >= 72096 && c <= 72103)))))))
            : (c <= 72144 || (c < 72704
              ? (c < 72250
                ? (c < 72192
                  ? (c < 72163
                    ? c == 72161
                    : c <= 72163)
                  : (c <= 72192 || (c >= 72203 && c <= 72242)))
                : (c <= 72250 || (c < 72349
                  ? (c < 72284
                    ? c == 72272
                    : c <= 72329)
                  : (c <= 72349 || (c >= 72368 && c <= 72440)))))
              : (c <= 72712 || (c < 72968
                ? (c < 72818
                  ? (c < 72768
                    ? (c >= 72714 && c <= 72750)
                    : c <= 72768)
                  : (c <= 72847 || (c >= 72960 && c <= 72966)))
                : (c <= 72969 || (c < 73056
                  ? (c < 73030
                    ? (c >= 72971 && c <= 73008)
                    : c <= 73030)
                  : (c <= 73061 || (c >= 73063 && c <= 73064)))))))))
          : (c <= 73097 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73648
                  ? (c < 73440
                    ? c == 73112
                    : c <= 73458)
                  : (c <= 73648 || (c >= 73728 && c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43471
    ? (c < 4186
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3634
            ? (c < 3406
              ? (c < 3313
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3332 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3386 || c == 3389))))
              : (c <= 3406 || (c < 3482
                ? (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))))))
            : (c <= 3635 || (c < 3776
              ? (c < 3724
                ? (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3763 || c == 3773))))
              : (c <= 3780 || (c < 3913
                ? (c < 3840
                  ? (c < 3804
                    ? c == 3782
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4159
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))))))))))))
      : (c <= 4189 || (c < 8126
        ? (c < 6108
          ? (c < 4802
            ? (c < 4682
              ? (c < 4256
                ? (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))))
              : (c <= 4685 || (c < 4746
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))))))
            : (c <= 4805 || (c < 5761
              ? (c < 4992
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))))
              : (c <= 5786 || (c < 5952
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))))))))
          : (c <= 6108 || (c < 7258
            ? (c < 6656
              ? (c < 6400
                ? (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))
                : (c <= 6430 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))
              : (c <= 6678 || (c < 7043
                ? (c < 6917
                  ? (c < 6823
                    ? (c >= 6688 && c <= 6740)
                    : c <= 6823)
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7168
                  ? (c < 7098
                    ? (c >= 7086 && c <= 7087)
                    : c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))))))
            : (c <= 7293 || (c < 7960
              ? (c < 7406
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7424
                  ? (c < 7418
                    ? (c >= 7413 && c <= 7414)
                    : c <= 7418)
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8027
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))))))))
        : (c <= 8126 || (c < 12293
          ? (c < 8517
            ? (c < 8450
              ? (c < 8178
                ? (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))
                : (c <= 8180 || (c < 8319
                  ? (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)
                  : (c <= 8319 || (c >= 8336 && c <= 8348)))))
              : (c <= 8450 || (c < 8484
                ? (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c >= 8472 && c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))
            : (c <= 8521 || (c < 11631
              ? (c < 11506
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))
              : (c <= 11631 || (c < 11704
                ? (c < 11688
                  ? (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))))))))
          : (c <= 12295 || (c < 42656
            ? (c < 12704
              ? (c < 12443
                ? (c < 12344
                  ? (c < 12337
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))
                : (c <= 12447 || (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))
              : (c <= 12735 || (c < 42240
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))))))
            : (c <= 42735 || (c < 43020
              ? (c < 42963
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 43011
                  ? (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))))
              : (c <= 43042 || (c < 43261
                ? (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))))))))))))
    : (c <= 43471 || (c < 70784
      ? (c < 66979
        ? (c < 64467
          ? (c < 43808
            ? (c < 43701
              ? (c < 43588
                ? (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)))
                : (c <= 43595 || (c < 43646
                  ? (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)
                  : (c <= 43695 || c == 43697))))
              : (c <= 43702 || (c < 43744
                ? (c < 43714
                  ? (c < 43712
                    ? (c >= 43705 && c <= 43709)
                    : c <= 43712)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))
                : (c <= 43754 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))))))
            : (c <= 43814 || (c < 64256
              ? (c < 44032
                ? (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 55203 || (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))))
              : (c <= 64262 || (c < 64312
                ? (c < 64287
                  ? (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64285)
                  : (c <= 64296 || (c >= 64298 && c <= 64310)))
                : (c <= 64316 || (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))))))
          : (c <= 64829 || (c < 65856
            ? (c < 65482
              ? (c < 65142
                ? (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))
              : (c <= 65487 || (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))))
            : (c <= 65908 || (c < 66560
              ? (c < 66384
                ? (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))
                : (c <= 66421 || (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))))
              : (c <= 66717 || (c < 66928
                ? (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))))))))
        : (c <= 66993 || (c < 69376
          ? (c < 67968
            ? (c < 67594
              ? (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))))
              : (c <= 67637 || (c < 67712
                ? (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))
                : (c <= 67742 || (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))))))
            : (c <= 68023 || (c < 68352
              ? (c < 68121
                ? (c < 68112
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68096)
                  : (c <= 68115 || (c >= 68117 && c <= 68119)))
                : (c <= 68149 || (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c >= 68297 && c <= 68324)))))
              : (c <= 68405 || (c < 68736
                ? (c < 68480
                  ? (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)
                  : (c <= 68497 || (c >= 68608 && c <= 68680)))
                : (c <= 68786 || (c < 69248
                  ? (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68899)
                  : (c <= 69289 || (c >= 69296 && c <= 69297)))))))))
          : (c <= 69404 || (c < 70144
            ? (c < 69840
              ? (c < 69600
                ? (c < 69488
                  ? (c < 69424
                    ? c == 69415
                    : c <= 69445)
                  : (c <= 69505 || (c >= 69552 && c <= 69572)))
                : (c <= 69622 || (c < 69749
                  ? (c < 69745
                    ? (c >= 69635 && c <= 69687)
                    : c <= 69746)
                  : (c <= 69749 || (c >= 69763 && c <= 69807)))))
              : (c <= 69864 || (c < 70006
                ? (c < 69959
                  ? (c < 69956
                    ? (c >= 69891 && c <= 69926)
                    : c <= 69956)
                  : (c <= 69959 || (c >= 69968 && c <= 70002)))
                : (c <= 70006 || (c < 70106
                  ? (c < 70081
                    ? (c >= 70019 && c <= 70066)
                    : c <= 70084)
                  : (c <= 70106 || c == 70108))))))
            : (c <= 70161 || (c < 70419
              ? (c < 70287
                ? (c < 70280
                  ? (c < 70272
                    ? (c >= 70163 && c <= 70187)
                    : c <= 70278)
                  : (c <= 70280 || (c >= 70282 && c <= 70285)))
                : (c <= 70301 || (c < 70405
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70366)
                  : (c <= 70412 || (c >= 70415 && c <= 70416)))))
              : (c <= 70440 || (c < 70480
                ? (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || c == 70461))
                : (c <= 70480 || (c < 70727
                  ? (c < 70656
                    ? (c >= 70493 && c <= 70497)
                    : c <= 70708)
                  : (c <= 70730 || (c >= 70751 && c <= 70753)))))))))))))
      : (c <= 70831 || (c < 119966
        ? (c < 73066
          ? (c < 72106
            ? (c < 71680
              ? (c < 71236
                ? (c < 71040
                  ? (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)
                  : (c <= 71086 || (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)))
                : (c <= 71236 || (c < 71424
                  ? (c < 71352
                    ? (c >= 71296 && c <= 71338)
                    : c <= 71352)
                  : (c <= 71450 || (c >= 71488 && c <= 71494)))))
              : (c <= 71723 || (c < 71957
                ? (c < 71945
                  ? (c < 71935
                    ? (c >= 71840 && c <= 71903)
                    : c <= 71942)
                  : (c <= 71945 || (c >= 71948 && c <= 71955)))
                : (c <= 71958 || (c < 72001
                  ? (c < 71999
                    ? (c >= 71960 && c <= 71983)
                    : c <= 71999)
                  : (c <= 72001 || (c >= 72096 && c <= 72103)))))))
            : (c <= 72144 || (c < 72704
              ? (c < 72250
                ? (c < 72192
                  ? (c < 72163
                    ? c == 72161
                    : c <= 72163)
                  : (c <= 72192 || (c >= 72203 && c <= 72242)))
                : (c <= 72250 || (c < 72349
                  ? (c < 72284
                    ? c == 72272
                    : c <= 72329)
                  : (c <= 72349 || (c >= 72368 && c <= 72440)))))
              : (c <= 72712 || (c < 72968
                ? (c < 72818
                  ? (c < 72768
                    ? (c >= 72714 && c <= 72750)
                    : c <= 72768)
                  : (c <= 72847 || (c >= 72960 && c <= 72966)))
                : (c <= 72969 || (c < 73056
                  ? (c < 73030
                    ? (c >= 72971 && c <= 73008)
                    : c <= 73030)
                  : (c <= 73061 || (c >= 73063 && c <= 73064)))))))))
          : (c <= 73097 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73648
                  ? (c < 73440
                    ? c == 73112
                    : c <= 73458)
                  : (c <= 73648 || (c >= 73728 && c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43584
    ? (c < 3776
      ? (c < 2741
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 890
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))))))
        : (c <= 2745 || (c < 3165
          ? (c < 2949
            ? (c < 2858
              ? (c < 2790
                ? (c < 2763
                  ? (c < 2759
                    ? (c >= 2748 && c <= 2757)
                    : c <= 2761)
                  : (c <= 2765 || (c < 2784
                    ? c == 2768
                    : c <= 2787)))
                : (c <= 2799 || (c < 2821
                  ? (c < 2817
                    ? (c >= 2809 && c <= 2815)
                    : c <= 2819)
                  : (c <= 2828 || (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)))))
              : (c <= 2864 || (c < 2901
                ? (c < 2876
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2884 || (c < 2891
                    ? (c >= 2887 && c <= 2888)
                    : c <= 2893)))
                : (c <= 2903 || (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))))))
            : (c <= 2954 || (c < 3024
              ? (c < 2979
                ? (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))
                : (c <= 2980 || (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))))
              : (c <= 3024 || (c < 3114
                ? (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)))
                : (c <= 3129 || (c < 3146
                  ? (c < 3142
                    ? (c >= 3132 && c <= 3140)
                    : c <= 3144)
                  : (c <= 3149 || (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)))))))))
          : (c <= 3165 || (c < 3430
            ? (c < 3285
              ? (c < 3218
                ? (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))
                : (c <= 3240 || (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))))
              : (c <= 3286 || (c < 3342
                ? (c < 3302
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)
                  : (c <= 3311 || (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)))))))
            : (c <= 3439 || (c < 3558
              ? (c < 3517
                ? (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)))
                : (c <= 3517 || (c < 3535
                  ? (c < 3530
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3530)
                  : (c <= 3540 || (c < 3544
                    ? c == 3542
                    : c <= 3551)))))
              : (c <= 3567 || (c < 3716
                ? (c < 3648
                  ? (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)
                  : (c <= 3662 || (c < 3713
                    ? (c >= 3664 && c <= 3673)
                    : c <= 3714)))
                : (c <= 3716 || (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3773)))))))))))))
      : (c <= 3780 || (c < 8008
        ? (c < 5870
          ? (c < 4682
            ? (c < 3913
              ? (c < 3864
                ? (c < 3792
                  ? (c < 3784
                    ? c == 3782
                    : c <= 3789)
                  : (c <= 3801 || (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)))
                : (c <= 3865 || (c < 3895
                  ? (c < 3893
                    ? (c >= 3872 && c <= 3881)
                    : c <= 3893)
                  : (c <= 3895 || (c < 3902
                    ? c == 3897
                    : c <= 3911)))))
              : (c <= 3948 || (c < 4176
                ? (c < 3993
                  ? (c < 3974
                    ? (c >= 3953 && c <= 3972)
                    : c <= 3991)
                  : (c <= 4028 || (c < 4096
                    ? c == 4038
                    : c <= 4169)))
                : (c <= 4253 || (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)))))))
            : (c <= 4685 || (c < 4824
              ? (c < 4752
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)))))
              : (c <= 4880 || (c < 5024
                ? (c < 4957
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 4959 || (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)))))))))
          : (c <= 5880 || (c < 6656
            ? (c < 6159
              ? (c < 6002
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5909)
                    : c <= 5940)
                  : (c <= 5971 || (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)))
                : (c <= 6003 || (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6099)
                    : c <= 6103)
                  : (c <= 6109 || (c < 6155
                    ? (c >= 6112 && c <= 6121)
                    : c <= 6157)))))
              : (c <= 6169 || (c < 6448
                ? (c < 6320
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)))
                : (c <= 6459 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6470 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c < 6608
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6618)))))))
            : (c <= 6683 || (c < 7168
              ? (c < 6832
                ? (c < 6783
                  ? (c < 6752
                    ? (c >= 6688 && c <= 6750)
                    : c <= 6780)
                  : (c <= 6793 || (c < 6823
                    ? (c >= 6800 && c <= 6809)
                    : c <= 6823)))
                : (c <= 6845 || (c < 6992
                  ? (c < 6912
                    ? (c >= 6847 && c <= 6862)
                    : c <= 6988)
                  : (c <= 7001 || (c < 7040
                    ? (c >= 7019 && c <= 7027)
                    : c <= 7155)))))
              : (c <= 7223 || (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7960
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))))))))
        : (c <= 8013 || (c < 11696
          ? (c < 8450
            ? (c < 8150
              ? (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)))))
              : (c <= 8155 || (c < 8305
                ? (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || (c < 8276
                    ? (c >= 8255 && c <= 8256)
                    : c <= 8276)))
                : (c <= 8305 || (c < 8400
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8412 || (c < 8421
                    ? c == 8417
                    : c <= 8432)))))))
            : (c <= 8450 || (c < 8544
              ? (c < 8486
                ? (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)))
                : (c <= 8486 || (c < 8508
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8505)
                  : (c <= 8511 || (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)))))
              : (c <= 8584 || (c < 11568
                ? (c < 11520
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)
                  : (c <= 11557 || (c < 11565
                    ? c == 11559
                    : c <= 11565)))
                : (c <= 11623 || (c < 11680
                  ? (c < 11647
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))))))))
          : (c <= 11702 || (c < 42560
            ? (c < 12441
              ? (c < 11744
                ? (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)))
                : (c <= 11775 || (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)
                  : (c <= 12341 || (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)))))
              : (c <= 12447 || (c < 12784
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)))
                : (c <= 12799 || (c < 42192
                  ? (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))))))
            : (c <= 42607 || (c < 43136
              ? (c < 42960
                ? (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43047 || (c < 43072
                    ? c == 43052
                    : c <= 43123)))))
              : (c <= 43205 || (c < 43360
                ? (c < 43259
                  ? (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)
                  : (c <= 43259 || (c < 43312
                    ? (c >= 43261 && c <= 43309)
                    : c <= 43347)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43392 && c <= 43456)
                    : c <= 43481)
                  : (c <= 43518 || (c >= 43520 && c <= 43574)))))))))))))))
    : (c <= 43597 || (c < 71488
      ? (c < 67680
        ? (c < 65490
          ? (c < 64285
            ? (c < 43824
              ? (c < 43762
                ? (c < 43642
                  ? (c < 43616
                    ? (c >= 43600 && c <= 43609)
                    : c <= 43638)
                  : (c <= 43714 || (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43759)))
                : (c <= 43766 || (c < 43793
                  ? (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)
                  : (c <= 43798 || (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)))))
              : (c <= 43866 || (c < 55216
                ? (c < 44012
                  ? (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44010)
                  : (c <= 44013 || (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 55203)))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)))))))
            : (c <= 64296 || (c < 65056
              ? (c < 64326
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)))
                : (c <= 64433 || (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))))
              : (c <= 65071 || (c < 65313
                ? (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))
                : (c <= 65338 || (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))))))))
          : (c <= 65495 || (c < 66776
            ? (c < 66208
              ? (c < 65599
                ? (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)))
                : (c <= 65613 || (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c < 66176
                    ? c == 66045
                    : c <= 66204)))))
              : (c <= 66256 || (c < 66464
                ? (c < 66349
                  ? (c < 66304
                    ? c == 66272
                    : c <= 66335)
                  : (c <= 66378 || (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)))
                : (c <= 66499 || (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c < 66736
                    ? (c >= 66720 && c <= 66729)
                    : c <= 66771)))))))
            : (c <= 66811 || (c < 67392
              ? (c < 66964
                ? (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)))
                : (c <= 66965 || (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))))
              : (c <= 67413 || (c < 67592
                ? (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))))))))
        : (c <= 67702 || (c < 70006
          ? (c < 68736
            ? (c < 68121
              ? (c < 67968
                ? (c < 67828
                  ? (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)
                  : (c <= 67829 || (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)))
                : (c <= 68023 || (c < 68101
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)
                  : (c <= 68102 || (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)))))
              : (c <= 68149 || (c < 68297
                ? (c < 68192
                  ? (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)
                  : (c <= 68220 || (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)))
                : (c <= 68326 || (c < 68448
                  ? (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)
                  : (c <= 68466 || (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)))))))
            : (c <= 68786 || (c < 69600
              ? (c < 69296
                ? (c < 68912
                  ? (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)
                  : (c <= 68921 || (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)))
                : (c <= 69297 || (c < 69424
                  ? (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)
                  : (c <= 69456 || (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)))))
              : (c <= 69622 || (c < 69872
                ? (c < 69759
                  ? (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)
                  : (c <= 69818 || (c < 69840
                    ? c == 69826
                    : c <= 69864)))
                : (c <= 69881 || (c < 69956
                  ? (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)
                  : (c <= 69959 || (c >= 69968 && c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 43584
    ? (c < 3776
      ? (c < 2748
        ? (c < 2048
          ? (c < 1155
            ? (c < 736
              ? (c < 183
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 183 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)))))
              : (c <= 740 || (c < 895
                ? (c < 768
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)))
                : (c <= 895 || (c < 910
                  ? (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)
                  : (c <= 929 || (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)))))))
            : (c <= 1159 || (c < 1552
              ? (c < 1471
                ? (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)))
                : (c <= 1471 || (c < 1479
                  ? (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)
                  : (c <= 1479 || (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)))))
              : (c <= 1562 || (c < 1791
                ? (c < 1749
                  ? (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)
                  : (c <= 1756 || (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)))
                : (c <= 1791 || (c < 1984
                  ? (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)
                  : (c <= 2037 || (c < 2045
                    ? c == 2042
                    : c <= 2045)))))))))
          : (c <= 2093 || (c < 2561
            ? (c < 2474
              ? (c < 2275
                ? (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)
                  : (c <= 2183 || (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)))
                : (c <= 2403 || (c < 2437
                  ? (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)
                  : (c <= 2444 || (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)))))
              : (c <= 2480 || (c < 2519
                ? (c < 2492
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2500 || (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)))
                : (c <= 2519 || (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))))))
            : (c <= 2563 || (c < 2641
              ? (c < 2613
                ? (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))
                : (c <= 2614 || (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))))
              : (c <= 2641 || (c < 2703
                ? (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)))
                : (c <= 2705 || (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))))))))
        : (c <= 2757 || (c < 3165
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))))))
          : (c <= 3165 || (c < 3430
            ? (c < 3285
              ? (c < 3218
                ? (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))
                : (c <= 3240 || (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))))
              : (c <= 3286 || (c < 3342
                ? (c < 3302
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)
                  : (c <= 3311 || (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)))))))
            : (c <= 3439 || (c < 3558
              ? (c < 3517
                ? (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)))
                : (c <= 3517 || (c < 3535
                  ? (c < 3530
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3530)
                  : (c <= 3540 || (c < 3544
                    ? c == 3542
                    : c <= 3551)))))
              : (c <= 3567 || (c < 3716
                ? (c < 3648
                  ? (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)
                  : (c <= 3662 || (c < 3713
                    ? (c >= 3664 && c <= 3673)
                    : c <= 3714)))
                : (c <= 3716 || (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3773)))))))))))))
      : (c <= 3780 || (c < 8008
        ? (c < 5870
          ? (c < 4682
            ? (c < 3913
              ? (c < 3864
                ? (c < 3792
                  ? (c < 3784
                    ? c == 3782
                    : c <= 3789)
                  : (c <= 3801 || (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)))
                : (c <= 3865 || (c < 3895
                  ? (c < 3893
                    ? (c >= 3872 && c <= 3881)
                    : c <= 3893)
                  : (c <= 3895 || (c < 3902
                    ? c == 3897
                    : c <= 3911)))))
              : (c <= 3948 || (c < 4176
                ? (c < 3993
                  ? (c < 3974
                    ? (c >= 3953 && c <= 3972)
                    : c <= 3991)
                  : (c <= 4028 || (c < 4096
                    ? c == 4038
                    : c <= 4169)))
                : (c <= 4253 || (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)))))))
            : (c <= 4685 || (c < 4824
              ? (c < 4752
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)))))
              : (c <= 4880 || (c < 5024
                ? (c < 4957
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 4959 || (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)))))))))
          : (c <= 5880 || (c < 6656
            ? (c < 6159
              ? (c < 6002
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5909)
                    : c <= 5940)
                  : (c <= 5971 || (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)))
                : (c <= 6003 || (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6099)
                    : c <= 6103)
                  : (c <= 6109 || (c < 6155
                    ? (c >= 6112 && c <= 6121)
                    : c <= 6157)))))
              : (c <= 6169 || (c < 6448
                ? (c < 6320
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)))
                : (c <= 6459 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6470 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c < 6608
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6618)))))))
            : (c <= 6683 || (c < 7168
              ? (c < 6832
                ? (c < 6783
                  ? (c < 6752
                    ? (c >= 6688 && c <= 6750)
                    : c <= 6780)
                  : (c <= 6793 || (c < 6823
                    ? (c >= 6800 && c <= 6809)
                    : c <= 6823)))
                : (c <= 6845 || (c < 6992
                  ? (c < 6912
                    ? (c >= 6847 && c <= 6862)
                    : c <= 6988)
                  : (c <= 7001 || (c < 7040
                    ? (c >= 7019 && c <= 7027)
                    : c <= 7155)))))
              : (c <= 7223 || (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7960
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))))))))
        : (c <= 8013 || (c < 11696
          ? (c < 8450
            ? (c < 8150
              ? (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)))))
              : (c <= 8155 || (c < 8305
                ? (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || (c < 8276
                    ? (c >= 8255 && c <= 8256)
                    : c <= 8276)))
                : (c <= 8305 || (c < 8400
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8412 || (c < 8421
                    ? c == 8417
                    : c <= 8432)))))))
            : (c <= 8450 || (c < 8544
              ? (c < 8486
                ? (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)))
                : (c <= 8486 || (c < 8508
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8505)
                  : (c <= 8511 || (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)))))
              : (c <= 8584 || (c < 11568
                ? (c < 11520
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)
                  : (c <= 11557 || (c < 11565
                    ? c == 11559
                    : c <= 11565)))
                : (c <= 11623 || (c < 11680
                  ? (c < 11647
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))))))))
          : (c <= 11702 || (c < 42560
            ? (c < 12441
              ? (c < 11744
                ? (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)))
                : (c <= 11775 || (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)
                  : (c <= 12341 || (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)))))
              : (c <= 12447 || (c < 12784
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)))
                : (c <= 12799 || (c < 42192
                  ? (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))))))
            : (c <= 42607 || (c < 43136
              ? (c < 42960
                ? (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43047 || (c < 43072
                    ? c == 43052
                    : c <= 43123)))))
              : (c <= 43205 || (c < 43360
                ? (c < 43259
                  ? (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)
                  : (c <= 43259 || (c < 43312
                    ? (c >= 43261 && c <= 43309)
                    : c <= 43347)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43392 && c <= 43456)
                    : c <= 43481)
                  : (c <= 43518 || (c >= 43520 && c <= 43574)))))))))))))))
    : (c <= 43597 || (c < 71488
      ? (c < 67680
        ? (c < 65490
          ? (c < 64285
            ? (c < 43824
              ? (c < 43762
                ? (c < 43642
                  ? (c < 43616
                    ? (c >= 43600 && c <= 43609)
                    : c <= 43638)
                  : (c <= 43714 || (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43759)))
                : (c <= 43766 || (c < 43793
                  ? (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)
                  : (c <= 43798 || (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)))))
              : (c <= 43866 || (c < 55216
                ? (c < 44012
                  ? (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44010)
                  : (c <= 44013 || (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 55203)))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)))))))
            : (c <= 64296 || (c < 65056
              ? (c < 64326
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)))
                : (c <= 64433 || (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))))
              : (c <= 65071 || (c < 65313
                ? (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))
                : (c <= 65338 || (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))))))))
          : (c <= 65495 || (c < 66776
            ? (c < 66208
              ? (c < 65599
                ? (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)))
                : (c <= 65613 || (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c < 66176
                    ? c == 66045
                    : c <= 66204)))))
              : (c <= 66256 || (c < 66464
                ? (c < 66349
                  ? (c < 66304
                    ? c == 66272
                    : c <= 66335)
                  : (c <= 66378 || (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)))
                : (c <= 66499 || (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c < 66736
                    ? (c >= 66720 && c <= 66729)
                    : c <= 66771)))))))
            : (c <= 66811 || (c < 67392
              ? (c < 66964
                ? (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)))
                : (c <= 66965 || (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))))
              : (c <= 67413 || (c < 67592
                ? (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))))))))
        : (c <= 67702 || (c < 70006
          ? (c < 68736
            ? (c < 68121
              ? (c < 67968
                ? (c < 67828
                  ? (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)
                  : (c <= 67829 || (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)))
                : (c <= 68023 || (c < 68101
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)
                  : (c <= 68102 || (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)))))
              : (c <= 68149 || (c < 68297
                ? (c < 68192
                  ? (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)
                  : (c <= 68220 || (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)))
                : (c <= 68326 || (c < 68448
                  ? (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)
                  : (c <= 68466 || (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)))))))
            : (c <= 68786 || (c < 69600
              ? (c < 69296
                ? (c < 68912
                  ? (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)
                  : (c <= 68921 || (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)))
                : (c <= 69297 || (c < 69424
                  ? (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)
                  : (c <= 69456 || (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)))))
              : (c <= 69622 || (c < 69872
                ? (c < 69759
                  ? (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)
                  : (c <= 69818 || (c < 69840
                    ? c == 69826
                    : c <= 69864)))
                : (c <= 69881 || (c < 69956
                  ? (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)
                  : (c <= 69959 || (c >= 69968 && c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 43584
    ? (c < 3776
      ? (c < 2741
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 890
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))))))
        : (c <= 2745 || (c < 3165
          ? (c < 2949
            ? (c < 2858
              ? (c < 2790
                ? (c < 2763
                  ? (c < 2759
                    ? (c >= 2748 && c <= 2757)
                    : c <= 2761)
                  : (c <= 2765 || (c < 2784
                    ? c == 2768
                    : c <= 2787)))
                : (c <= 2799 || (c < 2821
                  ? (c < 2817
                    ? (c >= 2809 && c <= 2815)
                    : c <= 2819)
                  : (c <= 2828 || (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)))))
              : (c <= 2864 || (c < 2901
                ? (c < 2876
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2884 || (c < 2891
                    ? (c >= 2887 && c <= 2888)
                    : c <= 2893)))
                : (c <= 2903 || (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))))))
            : (c <= 2954 || (c < 3024
              ? (c < 2979
                ? (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))
                : (c <= 2980 || (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))))
              : (c <= 3024 || (c < 3114
                ? (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)))
                : (c <= 3129 || (c < 3146
                  ? (c < 3142
                    ? (c >= 3132 && c <= 3140)
                    : c <= 3144)
                  : (c <= 3149 || (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)))))))))
          : (c <= 3165 || (c < 3430
            ? (c < 3285
              ? (c < 3218
                ? (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))
                : (c <= 3240 || (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))))
              : (c <= 3286 || (c < 3342
                ? (c < 3302
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)
                  : (c <= 3311 || (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)))))))
            : (c <= 3439 || (c < 3558
              ? (c < 3517
                ? (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)))
                : (c <= 3517 || (c < 3535
                  ? (c < 3530
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3530)
                  : (c <= 3540 || (c < 3544
                    ? c == 3542
                    : c <= 3551)))))
              : (c <= 3567 || (c < 3716
                ? (c < 3648
                  ? (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)
                  : (c <= 3662 || (c < 3713
                    ? (c >= 3664 && c <= 3673)
                    : c <= 3714)))
                : (c <= 3716 || (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3773)))))))))))))
      : (c <= 3780 || (c < 8008
        ? (c < 5870
          ? (c < 4682
            ? (c < 3913
              ? (c < 3864
                ? (c < 3792
                  ? (c < 3784
                    ? c == 3782
                    : c <= 3789)
                  : (c <= 3801 || (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)))
                : (c <= 3865 || (c < 3895
                  ? (c < 3893
                    ? (c >= 3872 && c <= 3881)
                    : c <= 3893)
                  : (c <= 3895 || (c < 3902
                    ? c == 3897
                    : c <= 3911)))))
              : (c <= 3948 || (c < 4176
                ? (c < 3993
                  ? (c < 3974
                    ? (c >= 3953 && c <= 3972)
                    : c <= 3991)
                  : (c <= 4028 || (c < 4096
                    ? c == 4038
                    : c <= 4169)))
                : (c <= 4253 || (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)))))))
            : (c <= 4685 || (c < 4824
              ? (c < 4752
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)))))
              : (c <= 4880 || (c < 5024
                ? (c < 4957
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 4959 || (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)))))))))
          : (c <= 5880 || (c < 6656
            ? (c < 6159
              ? (c < 6002
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5909)
                    : c <= 5940)
                  : (c <= 5971 || (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)))
                : (c <= 6003 || (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6099)
                    : c <= 6103)
                  : (c <= 6109 || (c < 6155
                    ? (c >= 6112 && c <= 6121)
                    : c <= 6157)))))
              : (c <= 6169 || (c < 6448
                ? (c < 6320
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)))
                : (c <= 6459 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6470 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c < 6608
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6618)))))))
            : (c <= 6683 || (c < 7168
              ? (c < 6832
                ? (c < 6783
                  ? (c < 6752
                    ? (c >= 6688 && c <= 6750)
                    : c <= 6780)
                  : (c <= 6793 || (c < 6823
                    ? (c >= 6800 && c <= 6809)
                    : c <= 6823)))
                : (c <= 6845 || (c < 6992
                  ? (c < 6912
                    ? (c >= 6847 && c <= 6862)
                    : c <= 6988)
                  : (c <= 7001 || (c < 7040
                    ? (c >= 7019 && c <= 7027)
                    : c <= 7155)))))
              : (c <= 7223 || (c < 7376
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)))
                : (c <= 7378 || (c < 7960
                  ? (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))))))))
        : (c <= 8013 || (c < 11696
          ? (c < 8450
            ? (c < 8150
              ? (c < 8064
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || (c < 8031
                    ? c == 8029
                    : c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)))))
              : (c <= 8155 || (c < 8305
                ? (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || (c < 8276
                    ? (c >= 8255 && c <= 8256)
                    : c <= 8276)))
                : (c <= 8305 || (c < 8400
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8412 || (c < 8421
                    ? c == 8417
                    : c <= 8432)))))))
            : (c <= 8450 || (c < 8544
              ? (c < 8486
                ? (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)))
                : (c <= 8486 || (c < 8508
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8505)
                  : (c <= 8511 || (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)))))
              : (c <= 8584 || (c < 11568
                ? (c < 11520
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)
                  : (c <= 11557 || (c < 11565
                    ? c == 11559
                    : c <= 11565)))
                : (c <= 11623 || (c < 11680
                  ? (c < 11647
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))))))))
          : (c <= 11702 || (c < 42560
            ? (c < 12441
              ? (c < 11744
                ? (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)))
                : (c <= 11775 || (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)
                  : (c <= 12341 || (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)))))
              : (c <= 12447 || (c < 12784
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)))
                : (c <= 12799 || (c < 42192
                  ? (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)
                  : (c <= 42237 || (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)))))))
            : (c <= 42607 || (c < 43136
              ? (c < 42960
                ? (c < 42775
                  ? (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)
                  : (c <= 42783 || (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43047 || (c < 43072
                    ? c == 43052
                    : c <= 43123)))))
              : (c <= 43205 || (c < 43360
                ? (c < 43259
                  ? (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)
                  : (c <= 43259 || (c < 43312
                    ? (c >= 43261 && c <= 43309)
                    : c <= 43347)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43392 && c <= 43456)
                    : c <= 43481)
                  : (c <= 43518 || (c >= 43520 && c <= 43574)))))))))))))))
    : (c <= 43597 || (c < 71488
      ? (c < 67680
        ? (c < 65490
          ? (c < 64285
            ? (c < 43824
              ? (c < 43762
                ? (c < 43642
                  ? (c < 43616
                    ? (c >= 43600 && c <= 43609)
                    : c <= 43638)
                  : (c <= 43714 || (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43759)))
                : (c <= 43766 || (c < 43793
                  ? (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)
                  : (c <= 43798 || (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)))))
              : (c <= 43866 || (c < 55216
                ? (c < 44012
                  ? (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44010)
                  : (c <= 44013 || (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 55203)))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)))))))
            : (c <= 64296 || (c < 65056
              ? (c < 64326
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)))
                : (c <= 64433 || (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65039)))))
              : (c <= 65071 || (c < 65313
                ? (c < 65136
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65140 || (c < 65296
                    ? (c >= 65142 && c <= 65276)
                    : c <= 65305)))
                : (c <= 65338 || (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))))))))
          : (c <= 65495 || (c < 66776
            ? (c < 66208
              ? (c < 65599
                ? (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)))
                : (c <= 65613 || (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c < 66176
                    ? c == 66045
                    : c <= 66204)))))
              : (c <= 66256 || (c < 66464
                ? (c < 66349
                  ? (c < 66304
                    ? c == 66272
                    : c <= 66335)
                  : (c <= 66378 || (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)))
                : (c <= 66499 || (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c < 66736
                    ? (c >= 66720 && c <= 66729)
                    : c <= 66771)))))))
            : (c <= 66811 || (c < 67392
              ? (c < 66964
                ? (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)))
                : (c <= 66965 || (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))))
              : (c <= 67413 || (c < 67592
                ? (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))))))))
        : (c <= 67702 || (c < 70006
          ? (c < 68736
            ? (c < 68121
              ? (c < 67968
                ? (c < 67828
                  ? (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)
                  : (c <= 67829 || (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)))
                : (c <= 68023 || (c < 68101
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)
                  : (c <= 68102 || (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)))))
              : (c <= 68149 || (c < 68297
                ? (c < 68192
                  ? (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)
                  : (c <= 68220 || (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)))
                : (c <= 68326 || (c < 68448
                  ? (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)
                  : (c <= 68466 || (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)))))))
            : (c <= 68786 || (c < 69600
              ? (c < 69296
                ? (c < 68912
                  ? (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)
                  : (c <= 68921 || (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)))
                : (c <= 69297 || (c < 69424
                  ? (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)
                  : (c <= 69456 || (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)))))
              : (c <= 69622 || (c < 69872
                ? (c < 69759
                  ? (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)
                  : (c <= 69818 || (c < 69840
                    ? c == 69826
                    : c <= 69864)))
                : (c <= 69881 || (c < 69956
                  ? (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)
                  : (c <= 69959 || (c >= 69968 && c <= 70003)))))))))
          : (c <= 70006 || (c < 70475
            ? (c < 70303
              ? (c < 70163
                ? (c < 70094
                  ? (c < 70089
                    ? (c >= 70016 && c <= 70084)
                    : c <= 70092)
                  : (c <= 70106 || (c < 70144
                    ? c == 70108
                    : c <= 70161)))
                : (c <= 70199 || (c < 70280
                  ? (c < 70272
                    ? c == 70206
                    : c <= 70278)
                  : (c <= 70280 || (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)))))
              : (c <= 70312 || (c < 70419
                ? (c < 70400
                  ? (c < 70384
                    ? (c >= 70320 && c <= 70378)
                    : c <= 70393)
                  : (c <= 70403 || (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)))
                : (c <= 70440 || (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || (c < 70471
                    ? (c >= 70459 && c <= 70468)
                    : c <= 70472)))))))
            : (c <= 70477 || (c < 71040
              ? (c < 70656
                ? (c < 70493
                  ? (c < 70487
                    ? c == 70480
                    : c <= 70487)
                  : (c <= 70499 || (c < 70512
                    ? (c >= 70502 && c <= 70508)
                    : c <= 70516)))
                : (c <= 70730 || (c < 70784
                  ? (c < 70750
                    ? (c >= 70736 && c <= 70745)
                    : c <= 70753)
                  : (c <= 70853 || (c < 70864
                    ? c == 70855
                    : c <= 70873)))))
              : (c <= 71093 || (c < 71296
                ? (c < 71168
                  ? (c < 71128
                    ? (c >= 71096 && c <= 71104)
                    : c <= 71133)
                  : (c <= 71232 || (c < 71248
                    ? c == 71236
                    : c <= 71257)))
                : (c <= 71352 || (c < 71453
                  ? (c < 71424
                    ? (c >= 71360 && c <= 71369)
                    : c <= 71450)
                  : (c <= 71467 || (c >= 71472 && c <= 71481)))))))))))))
      : (c <= 71494 || (c < 119977
        ? (c < 92160
          ? (c < 72818
            ? (c < 72106
              ? (c < 71957
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71738)
                    : c <= 71913)
                  : (c <= 71942 || (c < 71948
                    ? c == 71945
                    : c <= 71955)))
                : (c <= 71958 || (c < 71995
                  ? (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)
                  : (c <= 72003 || (c < 72096
                    ? (c >= 72016 && c <= 72025)
                    : c <= 72103)))))
              : (c <= 72151 || (c < 72349
                ? (c < 72192
                  ? (c < 72163
                    ? (c >= 72154 && c <= 72161)
                    : c <= 72164)
                  : (c <= 72254 || (c < 72272
                    ? c == 72263
                    : c <= 72345)))
                : (c <= 72349 || (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72758 || (c < 72784
                    ? (c >= 72760 && c <= 72768)
                    : c <= 72793)))))))
            : (c <= 72847 || (c < 73066
              ? (c < 73018
                ? (c < 72960
                  ? (c < 72873
                    ? (c >= 72850 && c <= 72871)
                    : c <= 72886)
                  : (c <= 72966 || (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73014)))
                : (c <= 73018 || (c < 73040
                  ? (c < 73023
                    ? (c >= 73020 && c <= 73021)
                    : c <= 73031)
                  : (c <= 73049 || (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)))))
              : (c <= 73102 || (c < 73728
                ? (c < 73120
                  ? (c < 73107
                    ? (c >= 73104 && c <= 73105)
                    : c <= 73112)
                  : (c <= 73129 || (c < 73648
                    ? (c >= 73440 && c <= 73462)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)))))))))
          : (c <= 92728 || (c < 110589
            ? (c < 93760
              ? (c < 92912
                ? (c < 92784
                  ? (c < 92768
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92777)
                  : (c <= 92862 || (c < 92880
                    ? (c >= 92864 && c <= 92873)
                    : c <= 92909)))
                : (c <= 92916 || (c < 93008
                  ? (c < 92992
                    ? (c >= 92928 && c <= 92982)
                    : c <= 92995)
                  : (c <= 93017 || (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)))))
              : (c <= 93823 || (c < 94192
                ? (c < 94095
                  ? (c < 94031
                    ? (c >= 93952 && c <= 94026)
                    : c <= 94087)
                  : (c <= 94111 || (c < 94179
                    ? (c >= 94176 && c <= 94177)
                    : c <= 94180)))
                : (c <= 94193 || (c < 101632
                  ? (c < 100352
                    ? (c >= 94208 && c <= 100343)
                    : c <= 101589)
                  : (c <= 101640 || (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)))))))
            : (c <= 110590 || (c < 119141
              ? (c < 113776
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)))
                : (c <= 113788 || (c < 113821
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 113822 || (c < 118576
                    ? (c >= 118528 && c <= 118573)
                    : c <= 118598)))))
              : (c <= 119145 || (c < 119808
                ? (c < 119173
                  ? (c < 119163
                    ? (c >= 119149 && c <= 119154)
                    : c <= 119170)
                  : (c <= 119179 || (c < 119362
                    ? (c >= 119210 && c <= 119213)
                    : c <= 119364)))
                : (c <= 119892 || (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c >= 119973 && c <= 119974)))))))))))
        : (c <= 119980 || (c < 124912
          ? (c < 120772
            ? (c < 120138
              ? (c < 120077
                ? (c < 119997
                  ? (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)
                  : (c <= 120003 || (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)))
                : (c <= 120084 || (c < 120123
                  ? (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)
                  : (c <= 120126 || (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)))))
              : (c <= 120144 || (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))))))
            : (c <= 120779 || (c < 122915
              ? (c < 121499
                ? (c < 121403
                  ? (c < 121344
                    ? (c >= 120782 && c <= 120831)
                    : c <= 121398)
                  : (c <= 121452 || (c < 121476
                    ? c == 121461
                    : c <= 121476)))
                : (c <= 121503 || (c < 122880
                  ? (c < 122624
                    ? (c >= 121505 && c <= 121519)
                    : c <= 122654)
                  : (c <= 122886 || (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)))))
              : (c <= 122916 || (c < 123536
                ? (c < 123184
                  ? (c < 123136
                    ? (c >= 122918 && c <= 122922)
                    : c <= 123180)
                  : (c <= 123197 || (c < 123214
                    ? (c >= 123200 && c <= 123209)
                    : c <= 123214)))
                : (c <= 123566 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123641)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == ',') ADVANCE(107);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(125);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == ']') ADVANCE(114);
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'g') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == 'y') ADVANCE(28);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '}') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E') ADVANCE(192);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == ',') ADVANCE(107);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'c') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'g') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(178);
      if (lookahead == 'y') ADVANCE(156);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(190);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(75);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == ',') ADVANCE(107);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '}') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(190);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(208);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(100);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == 'k') ADVANCE(88);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(11);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(66);
      if (lookahead == 'x') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(206);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 68:
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == ',') ADVANCE(107);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(125);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == ']') ADVANCE(114);
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'g') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == 'y') ADVANCE(28);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '}') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68)
      if (('.' <= lookahead && lookahead <= '9') ||
          lookahead == 'E') ADVANCE(192);
      END_STATE();
    case 69:
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == ',') ADVANCE(107);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(125);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == ']') ADVANCE(114);
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'c') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'g') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(178);
      if (lookahead == 'y') ADVANCE(156);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(190);
      END_STATE();
    case 70:
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == ',') ADVANCE(107);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(125);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == ']') ADVANCE(114);
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'c') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'g') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(178);
      if (lookahead == 'y') ADVANCE(156);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(70)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(190);
      END_STATE();
    case 71:
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == ',') ADVANCE(107);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(125);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == ']') ADVANCE(114);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(47);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '}') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(72)
      END_STATE();
    case 72:
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == ',') ADVANCE(107);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(125);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == ']') ADVANCE(114);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(47);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '}') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(72)
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == ',') ADVANCE(107);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == ']') ADVANCE(114);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'c') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'g') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(178);
      if (lookahead == 'y') ADVANCE(156);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(190);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__shebang_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_use);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_break);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_continue);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_await);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_await);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_launch);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_launch);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_yield);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_gen);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_gen);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_loop);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_for);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(134);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(208);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(190);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(173);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(190);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(170);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(190);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(158);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(190);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(157);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(190);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(154);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(99);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(122);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(82);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(196);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(194);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(140);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(163);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(184);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(101);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(97);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(168);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(152);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(182);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(89);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(198);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(143);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(159);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(179);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(106);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(142);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(93);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == 'w') ADVANCE(141);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(183);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(188);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(167);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(172);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(161);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(109);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(111);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(120);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(187);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(149);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(165);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(145);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(147);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(79);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(136);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(95);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(155);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(186);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(164);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(177);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(146);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(148);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(141);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_null);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(190);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(202);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__unescaped_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(204);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(205);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 73, .external_lex_state = 2},
  [2] = {.lex_state = 69, .external_lex_state = 2},
  [3] = {.lex_state = 69, .external_lex_state = 3},
  [4] = {.lex_state = 69, .external_lex_state = 3},
  [5] = {.lex_state = 69, .external_lex_state = 2},
  [6] = {.lex_state = 69, .external_lex_state = 2},
  [7] = {.lex_state = 69, .external_lex_state = 3},
  [8] = {.lex_state = 1, .external_lex_state = 2},
  [9] = {.lex_state = 1, .external_lex_state = 2},
  [10] = {.lex_state = 73, .external_lex_state = 2},
  [11] = {.lex_state = 73, .external_lex_state = 2},
  [12] = {.lex_state = 73, .external_lex_state = 2},
  [13] = {.lex_state = 73, .external_lex_state = 2},
  [14] = {.lex_state = 73, .external_lex_state = 2},
  [15] = {.lex_state = 73, .external_lex_state = 2},
  [16] = {.lex_state = 73, .external_lex_state = 2},
  [17] = {.lex_state = 73, .external_lex_state = 2},
  [18] = {.lex_state = 73, .external_lex_state = 2},
  [19] = {.lex_state = 73, .external_lex_state = 2},
  [20] = {.lex_state = 73, .external_lex_state = 2},
  [21] = {.lex_state = 73, .external_lex_state = 2},
  [22] = {.lex_state = 73, .external_lex_state = 2},
  [23] = {.lex_state = 73, .external_lex_state = 2},
  [24] = {.lex_state = 73, .external_lex_state = 2},
  [25] = {.lex_state = 73, .external_lex_state = 2},
  [26] = {.lex_state = 73, .external_lex_state = 2},
  [27] = {.lex_state = 73, .external_lex_state = 2},
  [28] = {.lex_state = 73, .external_lex_state = 2},
  [29] = {.lex_state = 73, .external_lex_state = 2},
  [30] = {.lex_state = 73, .external_lex_state = 2},
  [31] = {.lex_state = 73, .external_lex_state = 2},
  [32] = {.lex_state = 73, .external_lex_state = 2},
  [33] = {.lex_state = 73, .external_lex_state = 2},
  [34] = {.lex_state = 73, .external_lex_state = 2},
  [35] = {.lex_state = 73, .external_lex_state = 2},
  [36] = {.lex_state = 73, .external_lex_state = 2},
  [37] = {.lex_state = 73, .external_lex_state = 2},
  [38] = {.lex_state = 73, .external_lex_state = 2},
  [39] = {.lex_state = 73, .external_lex_state = 2},
  [40] = {.lex_state = 73, .external_lex_state = 2},
  [41] = {.lex_state = 73, .external_lex_state = 2},
  [42] = {.lex_state = 73, .external_lex_state = 2},
  [43] = {.lex_state = 73, .external_lex_state = 2},
  [44] = {.lex_state = 73, .external_lex_state = 2},
  [45] = {.lex_state = 73, .external_lex_state = 2},
  [46] = {.lex_state = 73, .external_lex_state = 2},
  [47] = {.lex_state = 73, .external_lex_state = 2},
  [48] = {.lex_state = 73, .external_lex_state = 2},
  [49] = {.lex_state = 73, .external_lex_state = 2},
  [50] = {.lex_state = 73, .external_lex_state = 2},
  [51] = {.lex_state = 73, .external_lex_state = 2},
  [52] = {.lex_state = 73, .external_lex_state = 2},
  [53] = {.lex_state = 73, .external_lex_state = 2},
  [54] = {.lex_state = 73, .external_lex_state = 2},
  [55] = {.lex_state = 73, .external_lex_state = 2},
  [56] = {.lex_state = 73, .external_lex_state = 2},
  [57] = {.lex_state = 73, .external_lex_state = 2},
  [58] = {.lex_state = 73, .external_lex_state = 2},
  [59] = {.lex_state = 73, .external_lex_state = 2},
  [60] = {.lex_state = 73, .external_lex_state = 2},
  [61] = {.lex_state = 73, .external_lex_state = 2},
  [62] = {.lex_state = 73, .external_lex_state = 2},
  [63] = {.lex_state = 73, .external_lex_state = 2},
  [64] = {.lex_state = 71, .external_lex_state = 2},
  [65] = {.lex_state = 71, .external_lex_state = 2},
  [66] = {.lex_state = 71, .external_lex_state = 2},
  [67] = {.lex_state = 71, .external_lex_state = 2},
  [68] = {.lex_state = 71, .external_lex_state = 2},
  [69] = {.lex_state = 71, .external_lex_state = 2},
  [70] = {.lex_state = 71, .external_lex_state = 2},
  [71] = {.lex_state = 71, .external_lex_state = 2},
  [72] = {.lex_state = 71, .external_lex_state = 2},
  [73] = {.lex_state = 71, .external_lex_state = 2},
  [74] = {.lex_state = 71, .external_lex_state = 2},
  [75] = {.lex_state = 71, .external_lex_state = 2},
  [76] = {.lex_state = 71, .external_lex_state = 3},
  [77] = {.lex_state = 71, .external_lex_state = 3},
  [78] = {.lex_state = 71, .external_lex_state = 2},
  [79] = {.lex_state = 71, .external_lex_state = 3},
  [80] = {.lex_state = 71, .external_lex_state = 3},
  [81] = {.lex_state = 71, .external_lex_state = 2},
  [82] = {.lex_state = 71, .external_lex_state = 3},
  [83] = {.lex_state = 71, .external_lex_state = 3},
  [84] = {.lex_state = 71, .external_lex_state = 2},
  [85] = {.lex_state = 71, .external_lex_state = 3},
  [86] = {.lex_state = 71, .external_lex_state = 2},
  [87] = {.lex_state = 71, .external_lex_state = 2},
  [88] = {.lex_state = 71, .external_lex_state = 2},
  [89] = {.lex_state = 71, .external_lex_state = 3},
  [90] = {.lex_state = 71, .external_lex_state = 2},
  [91] = {.lex_state = 71, .external_lex_state = 2},
  [92] = {.lex_state = 71, .external_lex_state = 2},
  [93] = {.lex_state = 71, .external_lex_state = 2},
  [94] = {.lex_state = 71, .external_lex_state = 2},
  [95] = {.lex_state = 71, .external_lex_state = 2},
  [96] = {.lex_state = 71, .external_lex_state = 2},
  [97] = {.lex_state = 71, .external_lex_state = 3},
  [98] = {.lex_state = 71, .external_lex_state = 2},
  [99] = {.lex_state = 71, .external_lex_state = 2},
  [100] = {.lex_state = 71, .external_lex_state = 2},
  [101] = {.lex_state = 71, .external_lex_state = 2},
  [102] = {.lex_state = 71, .external_lex_state = 2},
  [103] = {.lex_state = 71, .external_lex_state = 2},
  [104] = {.lex_state = 71, .external_lex_state = 3},
  [105] = {.lex_state = 71, .external_lex_state = 2},
  [106] = {.lex_state = 71, .external_lex_state = 2},
  [107] = {.lex_state = 71, .external_lex_state = 2},
  [108] = {.lex_state = 71, .external_lex_state = 2},
  [109] = {.lex_state = 71, .external_lex_state = 2},
  [110] = {.lex_state = 71, .external_lex_state = 2},
  [111] = {.lex_state = 71, .external_lex_state = 2},
  [112] = {.lex_state = 71, .external_lex_state = 2},
  [113] = {.lex_state = 71, .external_lex_state = 2},
  [114] = {.lex_state = 71, .external_lex_state = 2},
  [115] = {.lex_state = 71, .external_lex_state = 3},
  [116] = {.lex_state = 71, .external_lex_state = 2},
  [117] = {.lex_state = 71, .external_lex_state = 3},
  [118] = {.lex_state = 71, .external_lex_state = 2},
  [119] = {.lex_state = 71, .external_lex_state = 2},
  [120] = {.lex_state = 71, .external_lex_state = 2},
  [121] = {.lex_state = 71, .external_lex_state = 2},
  [122] = {.lex_state = 71, .external_lex_state = 3},
  [123] = {.lex_state = 71, .external_lex_state = 2},
  [124] = {.lex_state = 71, .external_lex_state = 2},
  [125] = {.lex_state = 71, .external_lex_state = 2},
  [126] = {.lex_state = 71, .external_lex_state = 2},
  [127] = {.lex_state = 71, .external_lex_state = 2},
  [128] = {.lex_state = 71, .external_lex_state = 2},
  [129] = {.lex_state = 71, .external_lex_state = 2},
  [130] = {.lex_state = 71, .external_lex_state = 3},
  [131] = {.lex_state = 71, .external_lex_state = 3},
  [132] = {.lex_state = 71, .external_lex_state = 3},
  [133] = {.lex_state = 71, .external_lex_state = 3},
  [134] = {.lex_state = 71, .external_lex_state = 3},
  [135] = {.lex_state = 71, .external_lex_state = 3},
  [136] = {.lex_state = 71, .external_lex_state = 3},
  [137] = {.lex_state = 71, .external_lex_state = 3},
  [138] = {.lex_state = 71, .external_lex_state = 3},
  [139] = {.lex_state = 71, .external_lex_state = 3},
  [140] = {.lex_state = 71, .external_lex_state = 3},
  [141] = {.lex_state = 71, .external_lex_state = 3},
  [142] = {.lex_state = 71, .external_lex_state = 3},
  [143] = {.lex_state = 71, .external_lex_state = 3},
  [144] = {.lex_state = 71, .external_lex_state = 3},
  [145] = {.lex_state = 71, .external_lex_state = 3},
  [146] = {.lex_state = 71, .external_lex_state = 3},
  [147] = {.lex_state = 71, .external_lex_state = 3},
  [148] = {.lex_state = 71, .external_lex_state = 3},
  [149] = {.lex_state = 71, .external_lex_state = 3},
  [150] = {.lex_state = 71, .external_lex_state = 3},
  [151] = {.lex_state = 71, .external_lex_state = 3},
  [152] = {.lex_state = 71, .external_lex_state = 3},
  [153] = {.lex_state = 71, .external_lex_state = 3},
  [154] = {.lex_state = 71, .external_lex_state = 3},
  [155] = {.lex_state = 71, .external_lex_state = 3},
  [156] = {.lex_state = 71, .external_lex_state = 3},
  [157] = {.lex_state = 71, .external_lex_state = 3},
  [158] = {.lex_state = 71, .external_lex_state = 3},
  [159] = {.lex_state = 71, .external_lex_state = 3},
  [160] = {.lex_state = 71, .external_lex_state = 3},
  [161] = {.lex_state = 71, .external_lex_state = 3},
  [162] = {.lex_state = 71, .external_lex_state = 3},
  [163] = {.lex_state = 71, .external_lex_state = 3},
  [164] = {.lex_state = 71, .external_lex_state = 3},
  [165] = {.lex_state = 71, .external_lex_state = 3},
  [166] = {.lex_state = 71, .external_lex_state = 3},
  [167] = {.lex_state = 71, .external_lex_state = 3},
  [168] = {.lex_state = 71, .external_lex_state = 3},
  [169] = {.lex_state = 71, .external_lex_state = 3},
  [170] = {.lex_state = 71, .external_lex_state = 3},
  [171] = {.lex_state = 71, .external_lex_state = 3},
  [172] = {.lex_state = 71, .external_lex_state = 3},
  [173] = {.lex_state = 71, .external_lex_state = 3},
  [174] = {.lex_state = 71, .external_lex_state = 3},
  [175] = {.lex_state = 71, .external_lex_state = 3},
  [176] = {.lex_state = 71, .external_lex_state = 3},
  [177] = {.lex_state = 71, .external_lex_state = 3},
  [178] = {.lex_state = 71, .external_lex_state = 2},
  [179] = {.lex_state = 71, .external_lex_state = 2},
  [180] = {.lex_state = 71, .external_lex_state = 2},
  [181] = {.lex_state = 71, .external_lex_state = 2},
  [182] = {.lex_state = 71, .external_lex_state = 2},
  [183] = {.lex_state = 71, .external_lex_state = 2},
  [184] = {.lex_state = 71, .external_lex_state = 2},
  [185] = {.lex_state = 71, .external_lex_state = 3},
  [186] = {.lex_state = 71, .external_lex_state = 2},
  [187] = {.lex_state = 71, .external_lex_state = 2},
  [188] = {.lex_state = 71, .external_lex_state = 2},
  [189] = {.lex_state = 71, .external_lex_state = 2},
  [190] = {.lex_state = 71, .external_lex_state = 2},
  [191] = {.lex_state = 71, .external_lex_state = 2},
  [192] = {.lex_state = 71, .external_lex_state = 2},
  [193] = {.lex_state = 71, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 3},
  [195] = {.lex_state = 0, .external_lex_state = 3},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 3, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 3},
  [199] = {.lex_state = 3, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 3},
  [201] = {.lex_state = 3, .external_lex_state = 2},
  [202] = {.lex_state = 3, .external_lex_state = 2},
  [203] = {.lex_state = 3, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 3},
  [205] = {.lex_state = 0, .external_lex_state = 3},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 4, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 3},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 4, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 4, .external_lex_state = 2},
  [227] = {.lex_state = 4, .external_lex_state = 2},
  [228] = {.lex_state = 4, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 4, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 4, .external_lex_state = 2},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 4, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 4, .external_lex_state = 2},
  [241] = {.lex_state = 4, .external_lex_state = 2},
  [242] = {.lex_state = 0, .external_lex_state = 2},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 4, .external_lex_state = 2},
  [245] = {.lex_state = 4, .external_lex_state = 2},
  [246] = {.lex_state = 4, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 0, .external_lex_state = 2},
  [249] = {.lex_state = 4, .external_lex_state = 2},
  [250] = {.lex_state = 4, .external_lex_state = 2},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 4, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 4, .external_lex_state = 2},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 4, .external_lex_state = 2},
  [258] = {.lex_state = 4, .external_lex_state = 2},
  [259] = {.lex_state = 4, .external_lex_state = 2},
  [260] = {.lex_state = 4, .external_lex_state = 2},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 0, .external_lex_state = 2},
  [263] = {.lex_state = 0, .external_lex_state = 2},
  [264] = {.lex_state = 0, .external_lex_state = 2},
  [265] = {.lex_state = 0, .external_lex_state = 2},
  [266] = {.lex_state = 0, .external_lex_state = 2},
  [267] = {.lex_state = 0, .external_lex_state = 2},
  [268] = {.lex_state = 4, .external_lex_state = 2},
  [269] = {.lex_state = 0, .external_lex_state = 2},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 0, .external_lex_state = 2},
  [272] = {.lex_state = 0, .external_lex_state = 2},
  [273] = {.lex_state = 4, .external_lex_state = 2},
  [274] = {.lex_state = 4, .external_lex_state = 2},
  [275] = {.lex_state = 0, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__shebang_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [sym_continue] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_await] = ACTIONS(1),
    [anon_sym_launch] = ACTIONS(1),
    [anon_sym_yield] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_gen] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_loop] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
    [sym_raw_string_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(247),
    [sym__shebang] = STATE(10),
    [sym__sequence] = STATE(253),
    [sym_block] = STATE(117),
    [sym_let] = STATE(117),
    [sym_use] = STATE(117),
    [sym__exp] = STATE(117),
    [sym_break] = STATE(117),
    [sym_return] = STATE(117),
    [sym_await] = STATE(117),
    [sym_launch] = STATE(117),
    [sym_yield] = STATE(117),
    [sym_if] = STATE(117),
    [sym__fn] = STATE(117),
    [sym_loop] = STATE(117),
    [sym_for] = STATE(117),
    [sym_list] = STATE(117),
    [sym_map] = STATE(117),
    [sym_object] = STATE(117),
    [sym_assignment] = STATE(117),
    [sym_binary_exp] = STATE(117),
    [sym_unary_exp] = STATE(117),
    [sym_call] = STATE(117),
    [sym_property_exp] = STATE(117),
    [sym_bool] = STATE(117),
    [sym_string] = STATE(117),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__shebang_token1] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_block] = STATE(116),
    [sym_let] = STATE(116),
    [sym_use] = STATE(116),
    [sym__exp] = STATE(116),
    [sym_break] = STATE(116),
    [sym_return] = STATE(116),
    [sym_await] = STATE(116),
    [sym_launch] = STATE(116),
    [sym_yield] = STATE(116),
    [sym_if] = STATE(116),
    [sym__fn] = STATE(116),
    [sym_loop] = STATE(116),
    [sym_for] = STATE(116),
    [sym_list] = STATE(116),
    [sym_map] = STATE(116),
    [sym_object] = STATE(116),
    [sym_assignment] = STATE(116),
    [sym_binary_exp] = STATE(116),
    [sym_unary_exp] = STATE(116),
    [sym_call] = STATE(116),
    [sym_property_exp] = STATE(116),
    [sym_bool] = STATE(116),
    [sym_string] = STATE(116),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_DOT] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(63),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_COLON] = ACTIONS(51),
    [anon_sym_or] = ACTIONS(57),
    [anon_sym_and] = ACTIONS(57),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(51),
    [anon_sym_STAR_STAR] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_block] = STATE(166),
    [sym_let] = STATE(166),
    [sym_use] = STATE(166),
    [sym__exp] = STATE(166),
    [sym_break] = STATE(166),
    [sym_return] = STATE(166),
    [sym_await] = STATE(166),
    [sym_launch] = STATE(166),
    [sym_yield] = STATE(166),
    [sym_if] = STATE(166),
    [sym__fn] = STATE(166),
    [sym_loop] = STATE(166),
    [sym_for] = STATE(166),
    [sym_list] = STATE(166),
    [sym_map] = STATE(166),
    [sym_object] = STATE(166),
    [sym_assignment] = STATE(166),
    [sym_binary_exp] = STATE(166),
    [sym_unary_exp] = STATE(166),
    [sym_call] = STATE(166),
    [sym_property_exp] = STATE(166),
    [sym_bool] = STATE(166),
    [sym_string] = STATE(166),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(57),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(93),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(51),
    [anon_sym_or] = ACTIONS(57),
    [anon_sym_and] = ACTIONS(57),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(51),
    [anon_sym_STAR_STAR] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(51),
    [sym_block_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_block] = STATE(169),
    [sym_let] = STATE(169),
    [sym_use] = STATE(169),
    [sym__exp] = STATE(169),
    [sym_break] = STATE(169),
    [sym_return] = STATE(169),
    [sym_await] = STATE(169),
    [sym_launch] = STATE(169),
    [sym_yield] = STATE(169),
    [sym_if] = STATE(169),
    [sym__fn] = STATE(169),
    [sym_loop] = STATE(169),
    [sym_for] = STATE(169),
    [sym_list] = STATE(169),
    [sym_map] = STATE(169),
    [sym_object] = STATE(169),
    [sym_assignment] = STATE(169),
    [sym_binary_exp] = STATE(169),
    [sym_unary_exp] = STATE(169),
    [sym_call] = STATE(169),
    [sym_property_exp] = STATE(169),
    [sym_bool] = STATE(169),
    [sym_string] = STATE(169),
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(99),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_or] = ACTIONS(97),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(95),
    [anon_sym_BANG_EQ] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_LT_EQ] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_GT_EQ] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(95),
    [anon_sym_STAR_STAR] = ACTIONS(95),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(99),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(95),
    [sym_block_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_block] = STATE(114),
    [sym_let] = STATE(114),
    [sym_use] = STATE(114),
    [sym__exp] = STATE(114),
    [sym_break] = STATE(114),
    [sym_return] = STATE(114),
    [sym_await] = STATE(114),
    [sym_launch] = STATE(114),
    [sym_yield] = STATE(114),
    [sym_if] = STATE(114),
    [sym__fn] = STATE(114),
    [sym_loop] = STATE(114),
    [sym_for] = STATE(114),
    [sym_list] = STATE(114),
    [sym_map] = STATE(114),
    [sym_object] = STATE(114),
    [sym_assignment] = STATE(114),
    [sym_binary_exp] = STATE(114),
    [sym_unary_exp] = STATE(114),
    [sym_call] = STATE(114),
    [sym_property_exp] = STATE(114),
    [sym_bool] = STATE(114),
    [sym_string] = STATE(114),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_DOT] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(101),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_or] = ACTIONS(97),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(95),
    [anon_sym_BANG_EQ] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_LT_EQ] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_GT_EQ] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(95),
    [anon_sym_STAR_STAR] = ACTIONS(95),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(101),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_block] = STATE(111),
    [sym_let] = STATE(111),
    [sym_use] = STATE(111),
    [sym__exp] = STATE(111),
    [sym_break] = STATE(111),
    [sym_return] = STATE(111),
    [sym_await] = STATE(111),
    [sym_launch] = STATE(111),
    [sym_yield] = STATE(111),
    [sym_if] = STATE(111),
    [sym__fn] = STATE(111),
    [sym_loop] = STATE(111),
    [sym_for] = STATE(111),
    [sym_list] = STATE(111),
    [sym_map] = STATE(111),
    [sym_object] = STATE(111),
    [sym_assignment] = STATE(111),
    [sym_binary_exp] = STATE(111),
    [sym_unary_exp] = STATE(111),
    [sym_call] = STATE(111),
    [sym_property_exp] = STATE(111),
    [sym_bool] = STATE(111),
    [sym_string] = STATE(111),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(107),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_or] = ACTIONS(105),
    [anon_sym_and] = ACTIONS(105),
    [anon_sym_EQ_EQ] = ACTIONS(103),
    [anon_sym_BANG_EQ] = ACTIONS(103),
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(105),
    [anon_sym_PERCENT] = ACTIONS(103),
    [anon_sym_STAR_STAR] = ACTIONS(103),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(107),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_block] = STATE(165),
    [sym_let] = STATE(165),
    [sym_use] = STATE(165),
    [sym__exp] = STATE(165),
    [sym_break] = STATE(165),
    [sym_return] = STATE(165),
    [sym_await] = STATE(165),
    [sym_launch] = STATE(165),
    [sym_yield] = STATE(165),
    [sym_if] = STATE(165),
    [sym__fn] = STATE(165),
    [sym_loop] = STATE(165),
    [sym_for] = STATE(165),
    [sym_list] = STATE(165),
    [sym_map] = STATE(165),
    [sym_object] = STATE(165),
    [sym_assignment] = STATE(165),
    [sym_binary_exp] = STATE(165),
    [sym_unary_exp] = STATE(165),
    [sym_call] = STATE(165),
    [sym_property_exp] = STATE(165),
    [sym_bool] = STATE(165),
    [sym_string] = STATE(165),
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_SEMI] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(109),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_or] = ACTIONS(105),
    [anon_sym_and] = ACTIONS(105),
    [anon_sym_EQ_EQ] = ACTIONS(103),
    [anon_sym_BANG_EQ] = ACTIONS(103),
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(105),
    [anon_sym_PERCENT] = ACTIONS(103),
    [anon_sym_STAR_STAR] = ACTIONS(103),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(103),
    [sym_block_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__sequence] = STATE(254),
    [sym_block] = STATE(82),
    [sym_let] = STATE(82),
    [sym_use] = STATE(82),
    [sym__exp] = STATE(82),
    [sym_break] = STATE(82),
    [sym_return] = STATE(82),
    [sym_await] = STATE(82),
    [sym_launch] = STATE(82),
    [sym_yield] = STATE(82),
    [sym_if] = STATE(82),
    [sym__fn] = STATE(82),
    [sym_loop] = STATE(82),
    [sym_for] = STATE(82),
    [sym_list] = STATE(82),
    [sym_map] = STATE(82),
    [sym_object] = STATE(82),
    [sym_assignment] = STATE(82),
    [sym_binary_exp] = STATE(82),
    [sym_unary_exp] = STATE(82),
    [sym_call] = STATE(82),
    [sym_property_exp] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_string] = STATE(82),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(119),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_LF] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(129),
    [sym_number] = ACTIONS(119),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [sym_line_comment] = ACTIONS(133),
    [sym_block_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__sequence] = STATE(267),
    [sym_block] = STATE(80),
    [sym_let] = STATE(80),
    [sym_use] = STATE(80),
    [sym__exp] = STATE(80),
    [sym_break] = STATE(80),
    [sym_return] = STATE(80),
    [sym_await] = STATE(80),
    [sym_launch] = STATE(80),
    [sym_yield] = STATE(80),
    [sym_if] = STATE(80),
    [sym__fn] = STATE(80),
    [sym_loop] = STATE(80),
    [sym_for] = STATE(80),
    [sym_list] = STATE(80),
    [sym_map] = STATE(80),
    [sym_object] = STATE(80),
    [sym_assignment] = STATE(80),
    [sym_binary_exp] = STATE(80),
    [sym_unary_exp] = STATE(80),
    [sym_call] = STATE(80),
    [sym_property_exp] = STATE(80),
    [sym_bool] = STATE(80),
    [sym_string] = STATE(80),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(139),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_LF] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(145),
    [sym_number] = ACTIONS(139),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [sym_line_comment] = ACTIONS(133),
    [sym_block_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__sequence] = STATE(261),
    [sym_block] = STATE(117),
    [sym_let] = STATE(117),
    [sym_use] = STATE(117),
    [sym__exp] = STATE(117),
    [sym_break] = STATE(117),
    [sym_return] = STATE(117),
    [sym_await] = STATE(117),
    [sym_launch] = STATE(117),
    [sym_yield] = STATE(117),
    [sym_if] = STATE(117),
    [sym__fn] = STATE(117),
    [sym_loop] = STATE(117),
    [sym_for] = STATE(117),
    [sym_list] = STATE(117),
    [sym_map] = STATE(117),
    [sym_object] = STATE(117),
    [sym_assignment] = STATE(117),
    [sym_binary_exp] = STATE(117),
    [sym_unary_exp] = STATE(117),
    [sym_call] = STATE(117),
    [sym_property_exp] = STATE(117),
    [sym_bool] = STATE(117),
    [sym_string] = STATE(117),
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_block] = STATE(176),
    [sym_let] = STATE(176),
    [sym_use] = STATE(176),
    [sym__exp] = STATE(176),
    [sym_break] = STATE(176),
    [sym_return] = STATE(176),
    [sym_await] = STATE(176),
    [sym_launch] = STATE(176),
    [sym_yield] = STATE(176),
    [sym_if] = STATE(176),
    [sym__fn] = STATE(176),
    [sym_loop] = STATE(176),
    [sym_for] = STATE(176),
    [sym_list] = STATE(176),
    [sym_map] = STATE(176),
    [sym_object] = STATE(176),
    [sym_assignment] = STATE(176),
    [sym_binary_exp] = STATE(176),
    [sym_unary_exp] = STATE(176),
    [sym_call] = STATE(176),
    [sym_property_exp] = STATE(176),
    [sym_bool] = STATE(176),
    [sym_string] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(151),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_block] = STATE(176),
    [sym_let] = STATE(176),
    [sym_use] = STATE(176),
    [sym__exp] = STATE(176),
    [sym_break] = STATE(176),
    [sym_return] = STATE(176),
    [sym_await] = STATE(176),
    [sym_launch] = STATE(176),
    [sym_yield] = STATE(176),
    [sym_if] = STATE(176),
    [sym__fn] = STATE(176),
    [sym_loop] = STATE(176),
    [sym_for] = STATE(176),
    [sym_list] = STATE(176),
    [sym_map] = STATE(176),
    [sym_object] = STATE(176),
    [sym_assignment] = STATE(176),
    [sym_binary_exp] = STATE(176),
    [sym_unary_exp] = STATE(176),
    [sym_call] = STATE(176),
    [sym_property_exp] = STATE(176),
    [sym_bool] = STATE(176),
    [sym_string] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(151),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__sequence] = STATE(254),
    [sym_block] = STATE(117),
    [sym_let] = STATE(117),
    [sym_use] = STATE(117),
    [sym__exp] = STATE(117),
    [sym_break] = STATE(117),
    [sym_return] = STATE(117),
    [sym_await] = STATE(117),
    [sym_launch] = STATE(117),
    [sym_yield] = STATE(117),
    [sym_if] = STATE(117),
    [sym__fn] = STATE(117),
    [sym_loop] = STATE(117),
    [sym_for] = STATE(117),
    [sym_list] = STATE(117),
    [sym_map] = STATE(117),
    [sym_object] = STATE(117),
    [sym_assignment] = STATE(117),
    [sym_binary_exp] = STATE(117),
    [sym_unary_exp] = STATE(117),
    [sym_call] = STATE(117),
    [sym_property_exp] = STATE(117),
    [sym_bool] = STATE(117),
    [sym_string] = STATE(117),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(155),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__sequence] = STATE(267),
    [sym_block] = STATE(117),
    [sym_let] = STATE(117),
    [sym_use] = STATE(117),
    [sym__exp] = STATE(117),
    [sym_break] = STATE(117),
    [sym_return] = STATE(117),
    [sym_await] = STATE(117),
    [sym_launch] = STATE(117),
    [sym_yield] = STATE(117),
    [sym_if] = STATE(117),
    [sym__fn] = STATE(117),
    [sym_loop] = STATE(117),
    [sym_for] = STATE(117),
    [sym_list] = STATE(117),
    [sym_map] = STATE(117),
    [sym_object] = STATE(117),
    [sym_assignment] = STATE(117),
    [sym_binary_exp] = STATE(117),
    [sym_unary_exp] = STATE(117),
    [sym_call] = STATE(117),
    [sym_property_exp] = STATE(117),
    [sym_bool] = STATE(117),
    [sym_string] = STATE(117),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(157),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_block] = STATE(182),
    [sym_let] = STATE(182),
    [sym_use] = STATE(182),
    [sym__exp] = STATE(182),
    [sym_break] = STATE(182),
    [sym_return] = STATE(182),
    [sym_await] = STATE(182),
    [sym_launch] = STATE(182),
    [sym_yield] = STATE(182),
    [sym_if] = STATE(182),
    [sym__fn] = STATE(182),
    [sym_loop] = STATE(182),
    [sym_for] = STATE(182),
    [sym_list] = STATE(182),
    [sym_map] = STATE(182),
    [sym_object] = STATE(182),
    [sym_assignment] = STATE(182),
    [sym_binary_exp] = STATE(182),
    [sym_unary_exp] = STATE(182),
    [sym_call] = STATE(182),
    [sym_property_exp] = STATE(182),
    [sym_bool] = STATE(182),
    [sym_string] = STATE(182),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(159),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(159),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_block] = STATE(183),
    [sym_let] = STATE(183),
    [sym_use] = STATE(183),
    [sym__exp] = STATE(183),
    [sym_break] = STATE(183),
    [sym_return] = STATE(183),
    [sym_await] = STATE(183),
    [sym_launch] = STATE(183),
    [sym_yield] = STATE(183),
    [sym_if] = STATE(183),
    [sym__fn] = STATE(183),
    [sym_loop] = STATE(183),
    [sym_for] = STATE(183),
    [sym_list] = STATE(183),
    [sym_map] = STATE(183),
    [sym_object] = STATE(183),
    [sym_assignment] = STATE(183),
    [sym_binary_exp] = STATE(183),
    [sym_unary_exp] = STATE(183),
    [sym_call] = STATE(183),
    [sym_property_exp] = STATE(183),
    [sym_bool] = STATE(183),
    [sym_string] = STATE(183),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(165),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(165),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_block] = STATE(181),
    [sym_let] = STATE(181),
    [sym_use] = STATE(181),
    [sym__exp] = STATE(181),
    [sym_break] = STATE(181),
    [sym_return] = STATE(181),
    [sym_await] = STATE(181),
    [sym_launch] = STATE(181),
    [sym_yield] = STATE(181),
    [sym_if] = STATE(181),
    [sym__fn] = STATE(181),
    [sym_loop] = STATE(181),
    [sym_for] = STATE(181),
    [sym_list] = STATE(181),
    [sym_map] = STATE(181),
    [sym_object] = STATE(181),
    [sym_assignment] = STATE(181),
    [sym_binary_exp] = STATE(181),
    [sym_unary_exp] = STATE(181),
    [sym_call] = STATE(181),
    [sym_property_exp] = STATE(181),
    [sym_bool] = STATE(181),
    [sym_string] = STATE(181),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(173),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(173),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_block] = STATE(179),
    [sym_let] = STATE(179),
    [sym_use] = STATE(179),
    [sym__exp] = STATE(179),
    [sym_break] = STATE(179),
    [sym_return] = STATE(179),
    [sym_await] = STATE(179),
    [sym_launch] = STATE(179),
    [sym_yield] = STATE(179),
    [sym_if] = STATE(179),
    [sym__fn] = STATE(179),
    [sym_loop] = STATE(179),
    [sym_for] = STATE(179),
    [sym_list] = STATE(179),
    [sym_map] = STATE(179),
    [sym_object] = STATE(179),
    [sym_assignment] = STATE(179),
    [sym_binary_exp] = STATE(179),
    [sym_unary_exp] = STATE(179),
    [sym_call] = STATE(179),
    [sym_property_exp] = STATE(179),
    [sym_bool] = STATE(179),
    [sym_string] = STATE(179),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(177),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(177),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_block] = STATE(178),
    [sym_let] = STATE(178),
    [sym_use] = STATE(178),
    [sym__exp] = STATE(178),
    [sym_break] = STATE(178),
    [sym_return] = STATE(178),
    [sym_await] = STATE(178),
    [sym_launch] = STATE(178),
    [sym_yield] = STATE(178),
    [sym_if] = STATE(178),
    [sym__fn] = STATE(178),
    [sym_loop] = STATE(178),
    [sym_for] = STATE(178),
    [sym_list] = STATE(178),
    [sym_map] = STATE(178),
    [sym_object] = STATE(178),
    [sym_assignment] = STATE(178),
    [sym_binary_exp] = STATE(178),
    [sym_unary_exp] = STATE(178),
    [sym_call] = STATE(178),
    [sym_property_exp] = STATE(178),
    [sym_bool] = STATE(178),
    [sym_string] = STATE(178),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(179),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(179),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_block] = STATE(178),
    [sym_let] = STATE(178),
    [sym_use] = STATE(178),
    [sym__exp] = STATE(178),
    [sym_break] = STATE(178),
    [sym_return] = STATE(178),
    [sym_await] = STATE(178),
    [sym_launch] = STATE(178),
    [sym_yield] = STATE(178),
    [sym_if] = STATE(178),
    [sym__fn] = STATE(178),
    [sym_loop] = STATE(178),
    [sym_for] = STATE(178),
    [sym_list] = STATE(178),
    [sym_map] = STATE(178),
    [sym_object] = STATE(178),
    [sym_assignment] = STATE(178),
    [sym_binary_exp] = STATE(178),
    [sym_unary_exp] = STATE(178),
    [sym_call] = STATE(178),
    [sym_property_exp] = STATE(178),
    [sym_bool] = STATE(178),
    [sym_string] = STATE(178),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(179),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(179),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_block] = STATE(193),
    [sym_let] = STATE(193),
    [sym_use] = STATE(193),
    [sym__exp] = STATE(193),
    [sym_break] = STATE(193),
    [sym_return] = STATE(193),
    [sym_await] = STATE(193),
    [sym_launch] = STATE(193),
    [sym_yield] = STATE(193),
    [sym_if] = STATE(193),
    [sym__fn] = STATE(193),
    [sym_loop] = STATE(193),
    [sym_for] = STATE(193),
    [sym_list] = STATE(193),
    [sym_map] = STATE(193),
    [sym_object] = STATE(193),
    [sym_assignment] = STATE(193),
    [sym_binary_exp] = STATE(193),
    [sym_unary_exp] = STATE(193),
    [sym_call] = STATE(193),
    [sym_property_exp] = STATE(193),
    [sym_bool] = STATE(193),
    [sym_string] = STATE(193),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(187),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(187),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_block] = STATE(193),
    [sym_let] = STATE(193),
    [sym_use] = STATE(193),
    [sym__exp] = STATE(193),
    [sym_break] = STATE(193),
    [sym_return] = STATE(193),
    [sym_await] = STATE(193),
    [sym_launch] = STATE(193),
    [sym_yield] = STATE(193),
    [sym_if] = STATE(193),
    [sym__fn] = STATE(193),
    [sym_loop] = STATE(193),
    [sym_for] = STATE(193),
    [sym_list] = STATE(193),
    [sym_map] = STATE(193),
    [sym_object] = STATE(193),
    [sym_assignment] = STATE(193),
    [sym_binary_exp] = STATE(193),
    [sym_unary_exp] = STATE(193),
    [sym_call] = STATE(193),
    [sym_property_exp] = STATE(193),
    [sym_bool] = STATE(193),
    [sym_string] = STATE(193),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(187),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(187),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_block] = STATE(193),
    [sym_let] = STATE(193),
    [sym_use] = STATE(193),
    [sym__exp] = STATE(193),
    [sym_break] = STATE(193),
    [sym_return] = STATE(193),
    [sym_await] = STATE(193),
    [sym_launch] = STATE(193),
    [sym_yield] = STATE(193),
    [sym_if] = STATE(193),
    [sym__fn] = STATE(193),
    [sym_loop] = STATE(193),
    [sym_for] = STATE(193),
    [sym_list] = STATE(193),
    [sym_map] = STATE(193),
    [sym_object] = STATE(193),
    [sym_assignment] = STATE(193),
    [sym_binary_exp] = STATE(193),
    [sym_unary_exp] = STATE(193),
    [sym_call] = STATE(193),
    [sym_property_exp] = STATE(193),
    [sym_bool] = STATE(193),
    [sym_string] = STATE(193),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(191),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(187),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(187),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_block] = STATE(193),
    [sym_let] = STATE(193),
    [sym_use] = STATE(193),
    [sym__exp] = STATE(193),
    [sym_break] = STATE(193),
    [sym_return] = STATE(193),
    [sym_await] = STATE(193),
    [sym_launch] = STATE(193),
    [sym_yield] = STATE(193),
    [sym_if] = STATE(193),
    [sym__fn] = STATE(193),
    [sym_loop] = STATE(193),
    [sym_for] = STATE(193),
    [sym_list] = STATE(193),
    [sym_map] = STATE(193),
    [sym_object] = STATE(193),
    [sym_assignment] = STATE(193),
    [sym_binary_exp] = STATE(193),
    [sym_unary_exp] = STATE(193),
    [sym_call] = STATE(193),
    [sym_property_exp] = STATE(193),
    [sym_bool] = STATE(193),
    [sym_string] = STATE(193),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(193),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(187),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(187),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_block] = STATE(178),
    [sym_let] = STATE(178),
    [sym_use] = STATE(178),
    [sym__exp] = STATE(178),
    [sym_break] = STATE(178),
    [sym_return] = STATE(178),
    [sym_await] = STATE(178),
    [sym_launch] = STATE(178),
    [sym_yield] = STATE(178),
    [sym_if] = STATE(178),
    [sym__fn] = STATE(178),
    [sym_loop] = STATE(178),
    [sym_for] = STATE(178),
    [sym_list] = STATE(178),
    [sym_map] = STATE(178),
    [sym_object] = STATE(178),
    [sym_assignment] = STATE(178),
    [sym_binary_exp] = STATE(178),
    [sym_unary_exp] = STATE(178),
    [sym_call] = STATE(178),
    [sym_property_exp] = STATE(178),
    [sym_bool] = STATE(178),
    [sym_string] = STATE(178),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(179),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(179),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_block] = STATE(178),
    [sym_let] = STATE(178),
    [sym_use] = STATE(178),
    [sym__exp] = STATE(178),
    [sym_break] = STATE(178),
    [sym_return] = STATE(178),
    [sym_await] = STATE(178),
    [sym_launch] = STATE(178),
    [sym_yield] = STATE(178),
    [sym_if] = STATE(178),
    [sym__fn] = STATE(178),
    [sym_loop] = STATE(178),
    [sym_for] = STATE(178),
    [sym_list] = STATE(178),
    [sym_map] = STATE(178),
    [sym_object] = STATE(178),
    [sym_assignment] = STATE(178),
    [sym_binary_exp] = STATE(178),
    [sym_unary_exp] = STATE(178),
    [sym_call] = STATE(178),
    [sym_property_exp] = STATE(178),
    [sym_bool] = STATE(178),
    [sym_string] = STATE(178),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(179),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(197),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(179),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_block] = STATE(159),
    [sym_let] = STATE(159),
    [sym_use] = STATE(159),
    [sym__exp] = STATE(159),
    [sym_break] = STATE(159),
    [sym_return] = STATE(159),
    [sym_await] = STATE(159),
    [sym_launch] = STATE(159),
    [sym_yield] = STATE(159),
    [sym_if] = STATE(159),
    [sym__fn] = STATE(159),
    [sym_loop] = STATE(159),
    [sym_for] = STATE(159),
    [sym_list] = STATE(159),
    [sym_map] = STATE(159),
    [sym_object] = STATE(159),
    [sym_assignment] = STATE(159),
    [sym_binary_exp] = STATE(159),
    [sym_unary_exp] = STATE(159),
    [sym_call] = STATE(159),
    [sym_property_exp] = STATE(159),
    [sym_bool] = STATE(159),
    [sym_string] = STATE(159),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(199),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(199),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_block] = STATE(142),
    [sym_let] = STATE(142),
    [sym_use] = STATE(142),
    [sym__exp] = STATE(142),
    [sym_break] = STATE(142),
    [sym_return] = STATE(142),
    [sym_await] = STATE(142),
    [sym_launch] = STATE(142),
    [sym_yield] = STATE(142),
    [sym_if] = STATE(142),
    [sym__fn] = STATE(142),
    [sym_loop] = STATE(142),
    [sym_for] = STATE(142),
    [sym_list] = STATE(142),
    [sym_map] = STATE(142),
    [sym_object] = STATE(142),
    [sym_assignment] = STATE(142),
    [sym_binary_exp] = STATE(142),
    [sym_unary_exp] = STATE(142),
    [sym_call] = STATE(142),
    [sym_property_exp] = STATE(142),
    [sym_bool] = STATE(142),
    [sym_string] = STATE(142),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(201),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(201),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_block] = STATE(178),
    [sym_let] = STATE(178),
    [sym_use] = STATE(178),
    [sym__exp] = STATE(178),
    [sym_break] = STATE(178),
    [sym_return] = STATE(178),
    [sym_await] = STATE(178),
    [sym_launch] = STATE(178),
    [sym_yield] = STATE(178),
    [sym_if] = STATE(178),
    [sym__fn] = STATE(178),
    [sym_loop] = STATE(178),
    [sym_for] = STATE(178),
    [sym_list] = STATE(178),
    [sym_map] = STATE(178),
    [sym_object] = STATE(178),
    [sym_assignment] = STATE(178),
    [sym_binary_exp] = STATE(178),
    [sym_unary_exp] = STATE(178),
    [sym_call] = STATE(178),
    [sym_property_exp] = STATE(178),
    [sym_bool] = STATE(178),
    [sym_string] = STATE(178),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(179),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(179),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [30] = {
    [sym_block] = STATE(192),
    [sym_let] = STATE(192),
    [sym_use] = STATE(192),
    [sym__exp] = STATE(192),
    [sym_break] = STATE(192),
    [sym_return] = STATE(192),
    [sym_await] = STATE(192),
    [sym_launch] = STATE(192),
    [sym_yield] = STATE(192),
    [sym_if] = STATE(192),
    [sym__fn] = STATE(192),
    [sym_loop] = STATE(192),
    [sym_for] = STATE(192),
    [sym_list] = STATE(192),
    [sym_map] = STATE(192),
    [sym_object] = STATE(192),
    [sym_assignment] = STATE(192),
    [sym_binary_exp] = STATE(192),
    [sym_unary_exp] = STATE(192),
    [sym_call] = STATE(192),
    [sym_property_exp] = STATE(192),
    [sym_bool] = STATE(192),
    [sym_string] = STATE(192),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(203),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(203),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [31] = {
    [sym_block] = STATE(176),
    [sym_let] = STATE(176),
    [sym_use] = STATE(176),
    [sym__exp] = STATE(176),
    [sym_break] = STATE(176),
    [sym_return] = STATE(176),
    [sym_await] = STATE(176),
    [sym_launch] = STATE(176),
    [sym_yield] = STATE(176),
    [sym_if] = STATE(176),
    [sym__fn] = STATE(176),
    [sym_loop] = STATE(176),
    [sym_for] = STATE(176),
    [sym_list] = STATE(176),
    [sym_map] = STATE(176),
    [sym_object] = STATE(176),
    [sym_assignment] = STATE(176),
    [sym_binary_exp] = STATE(176),
    [sym_unary_exp] = STATE(176),
    [sym_call] = STATE(176),
    [sym_property_exp] = STATE(176),
    [sym_bool] = STATE(176),
    [sym_string] = STATE(176),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(151),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [32] = {
    [sym_block] = STATE(186),
    [sym_let] = STATE(186),
    [sym_use] = STATE(186),
    [sym__exp] = STATE(186),
    [sym_break] = STATE(186),
    [sym_return] = STATE(186),
    [sym_await] = STATE(186),
    [sym_launch] = STATE(186),
    [sym_yield] = STATE(186),
    [sym_if] = STATE(186),
    [sym__fn] = STATE(186),
    [sym_loop] = STATE(186),
    [sym_for] = STATE(186),
    [sym_list] = STATE(186),
    [sym_map] = STATE(186),
    [sym_object] = STATE(186),
    [sym_assignment] = STATE(186),
    [sym_binary_exp] = STATE(186),
    [sym_unary_exp] = STATE(186),
    [sym_call] = STATE(186),
    [sym_property_exp] = STATE(186),
    [sym_bool] = STATE(186),
    [sym_string] = STATE(186),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(205),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(205),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [33] = {
    [sym_block] = STATE(187),
    [sym_let] = STATE(187),
    [sym_use] = STATE(187),
    [sym__exp] = STATE(187),
    [sym_break] = STATE(187),
    [sym_return] = STATE(187),
    [sym_await] = STATE(187),
    [sym_launch] = STATE(187),
    [sym_yield] = STATE(187),
    [sym_if] = STATE(187),
    [sym__fn] = STATE(187),
    [sym_loop] = STATE(187),
    [sym_for] = STATE(187),
    [sym_list] = STATE(187),
    [sym_map] = STATE(187),
    [sym_object] = STATE(187),
    [sym_assignment] = STATE(187),
    [sym_binary_exp] = STATE(187),
    [sym_unary_exp] = STATE(187),
    [sym_call] = STATE(187),
    [sym_property_exp] = STATE(187),
    [sym_bool] = STATE(187),
    [sym_string] = STATE(187),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(207),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(207),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [34] = {
    [sym_block] = STATE(162),
    [sym_let] = STATE(162),
    [sym_use] = STATE(162),
    [sym__exp] = STATE(162),
    [sym_break] = STATE(162),
    [sym_return] = STATE(162),
    [sym_await] = STATE(162),
    [sym_launch] = STATE(162),
    [sym_yield] = STATE(162),
    [sym_if] = STATE(162),
    [sym__fn] = STATE(162),
    [sym_loop] = STATE(162),
    [sym_for] = STATE(162),
    [sym_list] = STATE(162),
    [sym_map] = STATE(162),
    [sym_object] = STATE(162),
    [sym_assignment] = STATE(162),
    [sym_binary_exp] = STATE(162),
    [sym_unary_exp] = STATE(162),
    [sym_call] = STATE(162),
    [sym_property_exp] = STATE(162),
    [sym_bool] = STATE(162),
    [sym_string] = STATE(162),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(209),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(209),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [35] = {
    [sym_block] = STATE(88),
    [sym_let] = STATE(88),
    [sym_use] = STATE(88),
    [sym__exp] = STATE(88),
    [sym_break] = STATE(88),
    [sym_return] = STATE(88),
    [sym_await] = STATE(88),
    [sym_launch] = STATE(88),
    [sym_yield] = STATE(88),
    [sym_if] = STATE(88),
    [sym__fn] = STATE(88),
    [sym_loop] = STATE(88),
    [sym_for] = STATE(88),
    [sym_list] = STATE(88),
    [sym_map] = STATE(88),
    [sym_object] = STATE(88),
    [sym_assignment] = STATE(88),
    [sym_binary_exp] = STATE(88),
    [sym_unary_exp] = STATE(88),
    [sym_call] = STATE(88),
    [sym_property_exp] = STATE(88),
    [sym_bool] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(211),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(211),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [36] = {
    [sym_block] = STATE(184),
    [sym_let] = STATE(184),
    [sym_use] = STATE(184),
    [sym__exp] = STATE(184),
    [sym_break] = STATE(184),
    [sym_return] = STATE(184),
    [sym_await] = STATE(184),
    [sym_launch] = STATE(184),
    [sym_yield] = STATE(184),
    [sym_if] = STATE(184),
    [sym__fn] = STATE(184),
    [sym_loop] = STATE(184),
    [sym_for] = STATE(184),
    [sym_list] = STATE(184),
    [sym_map] = STATE(184),
    [sym_object] = STATE(184),
    [sym_assignment] = STATE(184),
    [sym_binary_exp] = STATE(184),
    [sym_unary_exp] = STATE(184),
    [sym_call] = STATE(184),
    [sym_property_exp] = STATE(184),
    [sym_bool] = STATE(184),
    [sym_string] = STATE(184),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(213),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(213),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [37] = {
    [sym_block] = STATE(91),
    [sym_let] = STATE(91),
    [sym_use] = STATE(91),
    [sym__exp] = STATE(91),
    [sym_break] = STATE(91),
    [sym_return] = STATE(91),
    [sym_await] = STATE(91),
    [sym_launch] = STATE(91),
    [sym_yield] = STATE(91),
    [sym_if] = STATE(91),
    [sym__fn] = STATE(91),
    [sym_loop] = STATE(91),
    [sym_for] = STATE(91),
    [sym_list] = STATE(91),
    [sym_map] = STATE(91),
    [sym_object] = STATE(91),
    [sym_assignment] = STATE(91),
    [sym_binary_exp] = STATE(91),
    [sym_unary_exp] = STATE(91),
    [sym_call] = STATE(91),
    [sym_property_exp] = STATE(91),
    [sym_bool] = STATE(91),
    [sym_string] = STATE(91),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(215),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(215),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(215),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [38] = {
    [sym_block] = STATE(92),
    [sym_let] = STATE(92),
    [sym_use] = STATE(92),
    [sym__exp] = STATE(92),
    [sym_break] = STATE(92),
    [sym_return] = STATE(92),
    [sym_await] = STATE(92),
    [sym_launch] = STATE(92),
    [sym_yield] = STATE(92),
    [sym_if] = STATE(92),
    [sym__fn] = STATE(92),
    [sym_loop] = STATE(92),
    [sym_for] = STATE(92),
    [sym_list] = STATE(92),
    [sym_map] = STATE(92),
    [sym_object] = STATE(92),
    [sym_assignment] = STATE(92),
    [sym_binary_exp] = STATE(92),
    [sym_unary_exp] = STATE(92),
    [sym_call] = STATE(92),
    [sym_property_exp] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_string] = STATE(92),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(217),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(217),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [39] = {
    [sym_block] = STATE(93),
    [sym_let] = STATE(93),
    [sym_use] = STATE(93),
    [sym__exp] = STATE(93),
    [sym_break] = STATE(93),
    [sym_return] = STATE(93),
    [sym_await] = STATE(93),
    [sym_launch] = STATE(93),
    [sym_yield] = STATE(93),
    [sym_if] = STATE(93),
    [sym__fn] = STATE(93),
    [sym_loop] = STATE(93),
    [sym_for] = STATE(93),
    [sym_list] = STATE(93),
    [sym_map] = STATE(93),
    [sym_object] = STATE(93),
    [sym_assignment] = STATE(93),
    [sym_binary_exp] = STATE(93),
    [sym_unary_exp] = STATE(93),
    [sym_call] = STATE(93),
    [sym_property_exp] = STATE(93),
    [sym_bool] = STATE(93),
    [sym_string] = STATE(93),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(219),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(219),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [40] = {
    [sym_block] = STATE(94),
    [sym_let] = STATE(94),
    [sym_use] = STATE(94),
    [sym__exp] = STATE(94),
    [sym_break] = STATE(94),
    [sym_return] = STATE(94),
    [sym_await] = STATE(94),
    [sym_launch] = STATE(94),
    [sym_yield] = STATE(94),
    [sym_if] = STATE(94),
    [sym__fn] = STATE(94),
    [sym_loop] = STATE(94),
    [sym_for] = STATE(94),
    [sym_list] = STATE(94),
    [sym_map] = STATE(94),
    [sym_object] = STATE(94),
    [sym_assignment] = STATE(94),
    [sym_binary_exp] = STATE(94),
    [sym_unary_exp] = STATE(94),
    [sym_call] = STATE(94),
    [sym_property_exp] = STATE(94),
    [sym_bool] = STATE(94),
    [sym_string] = STATE(94),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(221),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(221),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [41] = {
    [sym_block] = STATE(95),
    [sym_let] = STATE(95),
    [sym_use] = STATE(95),
    [sym__exp] = STATE(95),
    [sym_break] = STATE(95),
    [sym_return] = STATE(95),
    [sym_await] = STATE(95),
    [sym_launch] = STATE(95),
    [sym_yield] = STATE(95),
    [sym_if] = STATE(95),
    [sym__fn] = STATE(95),
    [sym_loop] = STATE(95),
    [sym_for] = STATE(95),
    [sym_list] = STATE(95),
    [sym_map] = STATE(95),
    [sym_object] = STATE(95),
    [sym_assignment] = STATE(95),
    [sym_binary_exp] = STATE(95),
    [sym_unary_exp] = STATE(95),
    [sym_call] = STATE(95),
    [sym_property_exp] = STATE(95),
    [sym_bool] = STATE(95),
    [sym_string] = STATE(95),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(223),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(223),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [42] = {
    [sym_block] = STATE(177),
    [sym_let] = STATE(177),
    [sym_use] = STATE(177),
    [sym__exp] = STATE(177),
    [sym_break] = STATE(177),
    [sym_return] = STATE(177),
    [sym_await] = STATE(177),
    [sym_launch] = STATE(177),
    [sym_yield] = STATE(177),
    [sym_if] = STATE(177),
    [sym__fn] = STATE(177),
    [sym_loop] = STATE(177),
    [sym_for] = STATE(177),
    [sym_list] = STATE(177),
    [sym_map] = STATE(177),
    [sym_object] = STATE(177),
    [sym_assignment] = STATE(177),
    [sym_binary_exp] = STATE(177),
    [sym_unary_exp] = STATE(177),
    [sym_call] = STATE(177),
    [sym_property_exp] = STATE(177),
    [sym_bool] = STATE(177),
    [sym_string] = STATE(177),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(225),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(225),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(225),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [43] = {
    [sym_block] = STATE(99),
    [sym_let] = STATE(99),
    [sym_use] = STATE(99),
    [sym__exp] = STATE(99),
    [sym_break] = STATE(99),
    [sym_return] = STATE(99),
    [sym_await] = STATE(99),
    [sym_launch] = STATE(99),
    [sym_yield] = STATE(99),
    [sym_if] = STATE(99),
    [sym__fn] = STATE(99),
    [sym_loop] = STATE(99),
    [sym_for] = STATE(99),
    [sym_list] = STATE(99),
    [sym_map] = STATE(99),
    [sym_object] = STATE(99),
    [sym_assignment] = STATE(99),
    [sym_binary_exp] = STATE(99),
    [sym_unary_exp] = STATE(99),
    [sym_call] = STATE(99),
    [sym_property_exp] = STATE(99),
    [sym_bool] = STATE(99),
    [sym_string] = STATE(99),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(227),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(227),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [44] = {
    [sym_block] = STATE(158),
    [sym_let] = STATE(158),
    [sym_use] = STATE(158),
    [sym__exp] = STATE(158),
    [sym_break] = STATE(158),
    [sym_return] = STATE(158),
    [sym_await] = STATE(158),
    [sym_launch] = STATE(158),
    [sym_yield] = STATE(158),
    [sym_if] = STATE(158),
    [sym__fn] = STATE(158),
    [sym_loop] = STATE(158),
    [sym_for] = STATE(158),
    [sym_list] = STATE(158),
    [sym_map] = STATE(158),
    [sym_object] = STATE(158),
    [sym_assignment] = STATE(158),
    [sym_binary_exp] = STATE(158),
    [sym_unary_exp] = STATE(158),
    [sym_call] = STATE(158),
    [sym_property_exp] = STATE(158),
    [sym_bool] = STATE(158),
    [sym_string] = STATE(158),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(229),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(229),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [45] = {
    [sym_block] = STATE(175),
    [sym_let] = STATE(175),
    [sym_use] = STATE(175),
    [sym__exp] = STATE(175),
    [sym_break] = STATE(175),
    [sym_return] = STATE(175),
    [sym_await] = STATE(175),
    [sym_launch] = STATE(175),
    [sym_yield] = STATE(175),
    [sym_if] = STATE(175),
    [sym__fn] = STATE(175),
    [sym_loop] = STATE(175),
    [sym_for] = STATE(175),
    [sym_list] = STATE(175),
    [sym_map] = STATE(175),
    [sym_object] = STATE(175),
    [sym_assignment] = STATE(175),
    [sym_binary_exp] = STATE(175),
    [sym_unary_exp] = STATE(175),
    [sym_call] = STATE(175),
    [sym_property_exp] = STATE(175),
    [sym_bool] = STATE(175),
    [sym_string] = STATE(175),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(231),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(231),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [46] = {
    [sym_block] = STATE(106),
    [sym_let] = STATE(106),
    [sym_use] = STATE(106),
    [sym__exp] = STATE(106),
    [sym_break] = STATE(106),
    [sym_return] = STATE(106),
    [sym_await] = STATE(106),
    [sym_launch] = STATE(106),
    [sym_yield] = STATE(106),
    [sym_if] = STATE(106),
    [sym__fn] = STATE(106),
    [sym_loop] = STATE(106),
    [sym_for] = STATE(106),
    [sym_list] = STATE(106),
    [sym_map] = STATE(106),
    [sym_object] = STATE(106),
    [sym_assignment] = STATE(106),
    [sym_binary_exp] = STATE(106),
    [sym_unary_exp] = STATE(106),
    [sym_call] = STATE(106),
    [sym_property_exp] = STATE(106),
    [sym_bool] = STATE(106),
    [sym_string] = STATE(106),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(233),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(233),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [47] = {
    [sym_block] = STATE(107),
    [sym_let] = STATE(107),
    [sym_use] = STATE(107),
    [sym__exp] = STATE(107),
    [sym_break] = STATE(107),
    [sym_return] = STATE(107),
    [sym_await] = STATE(107),
    [sym_launch] = STATE(107),
    [sym_yield] = STATE(107),
    [sym_if] = STATE(107),
    [sym__fn] = STATE(107),
    [sym_loop] = STATE(107),
    [sym_for] = STATE(107),
    [sym_list] = STATE(107),
    [sym_map] = STATE(107),
    [sym_object] = STATE(107),
    [sym_assignment] = STATE(107),
    [sym_binary_exp] = STATE(107),
    [sym_unary_exp] = STATE(107),
    [sym_call] = STATE(107),
    [sym_property_exp] = STATE(107),
    [sym_bool] = STATE(107),
    [sym_string] = STATE(107),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(235),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(235),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [48] = {
    [sym_block] = STATE(189),
    [sym_let] = STATE(189),
    [sym_use] = STATE(189),
    [sym__exp] = STATE(189),
    [sym_break] = STATE(189),
    [sym_return] = STATE(189),
    [sym_await] = STATE(189),
    [sym_launch] = STATE(189),
    [sym_yield] = STATE(189),
    [sym_if] = STATE(189),
    [sym__fn] = STATE(189),
    [sym_loop] = STATE(189),
    [sym_for] = STATE(189),
    [sym_list] = STATE(189),
    [sym_map] = STATE(189),
    [sym_object] = STATE(189),
    [sym_assignment] = STATE(189),
    [sym_binary_exp] = STATE(189),
    [sym_unary_exp] = STATE(189),
    [sym_call] = STATE(189),
    [sym_property_exp] = STATE(189),
    [sym_bool] = STATE(189),
    [sym_string] = STATE(189),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(237),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(237),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [49] = {
    [sym_block] = STATE(112),
    [sym_let] = STATE(112),
    [sym_use] = STATE(112),
    [sym__exp] = STATE(112),
    [sym_break] = STATE(112),
    [sym_return] = STATE(112),
    [sym_await] = STATE(112),
    [sym_launch] = STATE(112),
    [sym_yield] = STATE(112),
    [sym_if] = STATE(112),
    [sym__fn] = STATE(112),
    [sym_loop] = STATE(112),
    [sym_for] = STATE(112),
    [sym_list] = STATE(112),
    [sym_map] = STATE(112),
    [sym_object] = STATE(112),
    [sym_assignment] = STATE(112),
    [sym_binary_exp] = STATE(112),
    [sym_unary_exp] = STATE(112),
    [sym_call] = STATE(112),
    [sym_property_exp] = STATE(112),
    [sym_bool] = STATE(112),
    [sym_string] = STATE(112),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(239),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(239),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [50] = {
    [sym_block] = STATE(157),
    [sym_let] = STATE(157),
    [sym_use] = STATE(157),
    [sym__exp] = STATE(157),
    [sym_break] = STATE(157),
    [sym_return] = STATE(157),
    [sym_await] = STATE(157),
    [sym_launch] = STATE(157),
    [sym_yield] = STATE(157),
    [sym_if] = STATE(157),
    [sym__fn] = STATE(157),
    [sym_loop] = STATE(157),
    [sym_for] = STATE(157),
    [sym_list] = STATE(157),
    [sym_map] = STATE(157),
    [sym_object] = STATE(157),
    [sym_assignment] = STATE(157),
    [sym_binary_exp] = STATE(157),
    [sym_unary_exp] = STATE(157),
    [sym_call] = STATE(157),
    [sym_property_exp] = STATE(157),
    [sym_bool] = STATE(157),
    [sym_string] = STATE(157),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(241),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(241),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [51] = {
    [sym_block] = STATE(113),
    [sym_let] = STATE(113),
    [sym_use] = STATE(113),
    [sym__exp] = STATE(113),
    [sym_break] = STATE(113),
    [sym_return] = STATE(113),
    [sym_await] = STATE(113),
    [sym_launch] = STATE(113),
    [sym_yield] = STATE(113),
    [sym_if] = STATE(113),
    [sym__fn] = STATE(113),
    [sym_loop] = STATE(113),
    [sym_for] = STATE(113),
    [sym_list] = STATE(113),
    [sym_map] = STATE(113),
    [sym_object] = STATE(113),
    [sym_assignment] = STATE(113),
    [sym_binary_exp] = STATE(113),
    [sym_unary_exp] = STATE(113),
    [sym_call] = STATE(113),
    [sym_property_exp] = STATE(113),
    [sym_bool] = STATE(113),
    [sym_string] = STATE(113),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(243),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(243),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(243),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [52] = {
    [sym_block] = STATE(138),
    [sym_let] = STATE(138),
    [sym_use] = STATE(138),
    [sym__exp] = STATE(138),
    [sym_break] = STATE(138),
    [sym_return] = STATE(138),
    [sym_await] = STATE(138),
    [sym_launch] = STATE(138),
    [sym_yield] = STATE(138),
    [sym_if] = STATE(138),
    [sym__fn] = STATE(138),
    [sym_loop] = STATE(138),
    [sym_for] = STATE(138),
    [sym_list] = STATE(138),
    [sym_map] = STATE(138),
    [sym_object] = STATE(138),
    [sym_assignment] = STATE(138),
    [sym_binary_exp] = STATE(138),
    [sym_unary_exp] = STATE(138),
    [sym_call] = STATE(138),
    [sym_property_exp] = STATE(138),
    [sym_bool] = STATE(138),
    [sym_string] = STATE(138),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(245),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(245),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(245),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [53] = {
    [sym_block] = STATE(155),
    [sym_let] = STATE(155),
    [sym_use] = STATE(155),
    [sym__exp] = STATE(155),
    [sym_break] = STATE(155),
    [sym_return] = STATE(155),
    [sym_await] = STATE(155),
    [sym_launch] = STATE(155),
    [sym_yield] = STATE(155),
    [sym_if] = STATE(155),
    [sym__fn] = STATE(155),
    [sym_loop] = STATE(155),
    [sym_for] = STATE(155),
    [sym_list] = STATE(155),
    [sym_map] = STATE(155),
    [sym_object] = STATE(155),
    [sym_assignment] = STATE(155),
    [sym_binary_exp] = STATE(155),
    [sym_unary_exp] = STATE(155),
    [sym_call] = STATE(155),
    [sym_property_exp] = STATE(155),
    [sym_bool] = STATE(155),
    [sym_string] = STATE(155),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(247),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(247),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [54] = {
    [sym_block] = STATE(193),
    [sym_let] = STATE(193),
    [sym_use] = STATE(193),
    [sym__exp] = STATE(193),
    [sym_break] = STATE(193),
    [sym_return] = STATE(193),
    [sym_await] = STATE(193),
    [sym_launch] = STATE(193),
    [sym_yield] = STATE(193),
    [sym_if] = STATE(193),
    [sym__fn] = STATE(193),
    [sym_loop] = STATE(193),
    [sym_for] = STATE(193),
    [sym_list] = STATE(193),
    [sym_map] = STATE(193),
    [sym_object] = STATE(193),
    [sym_assignment] = STATE(193),
    [sym_binary_exp] = STATE(193),
    [sym_unary_exp] = STATE(193),
    [sym_call] = STATE(193),
    [sym_property_exp] = STATE(193),
    [sym_bool] = STATE(193),
    [sym_string] = STATE(193),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(187),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(187),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [55] = {
    [sym_block] = STATE(190),
    [sym_let] = STATE(190),
    [sym_use] = STATE(190),
    [sym__exp] = STATE(190),
    [sym_break] = STATE(190),
    [sym_return] = STATE(190),
    [sym_await] = STATE(190),
    [sym_launch] = STATE(190),
    [sym_yield] = STATE(190),
    [sym_if] = STATE(190),
    [sym__fn] = STATE(190),
    [sym_loop] = STATE(190),
    [sym_for] = STATE(190),
    [sym_list] = STATE(190),
    [sym_map] = STATE(190),
    [sym_object] = STATE(190),
    [sym_assignment] = STATE(190),
    [sym_binary_exp] = STATE(190),
    [sym_unary_exp] = STATE(190),
    [sym_call] = STATE(190),
    [sym_property_exp] = STATE(190),
    [sym_bool] = STATE(190),
    [sym_string] = STATE(190),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [56] = {
    [sym_block] = STATE(151),
    [sym_let] = STATE(151),
    [sym_use] = STATE(151),
    [sym__exp] = STATE(151),
    [sym_break] = STATE(151),
    [sym_return] = STATE(151),
    [sym_await] = STATE(151),
    [sym_launch] = STATE(151),
    [sym_yield] = STATE(151),
    [sym_if] = STATE(151),
    [sym__fn] = STATE(151),
    [sym_loop] = STATE(151),
    [sym_for] = STATE(151),
    [sym_list] = STATE(151),
    [sym_map] = STATE(151),
    [sym_object] = STATE(151),
    [sym_assignment] = STATE(151),
    [sym_binary_exp] = STATE(151),
    [sym_unary_exp] = STATE(151),
    [sym_call] = STATE(151),
    [sym_property_exp] = STATE(151),
    [sym_bool] = STATE(151),
    [sym_string] = STATE(151),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(251),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(251),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [57] = {
    [sym_block] = STATE(152),
    [sym_let] = STATE(152),
    [sym_use] = STATE(152),
    [sym__exp] = STATE(152),
    [sym_break] = STATE(152),
    [sym_return] = STATE(152),
    [sym_await] = STATE(152),
    [sym_launch] = STATE(152),
    [sym_yield] = STATE(152),
    [sym_if] = STATE(152),
    [sym__fn] = STATE(152),
    [sym_loop] = STATE(152),
    [sym_for] = STATE(152),
    [sym_list] = STATE(152),
    [sym_map] = STATE(152),
    [sym_object] = STATE(152),
    [sym_assignment] = STATE(152),
    [sym_binary_exp] = STATE(152),
    [sym_unary_exp] = STATE(152),
    [sym_call] = STATE(152),
    [sym_property_exp] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_string] = STATE(152),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(253),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [58] = {
    [sym_block] = STATE(132),
    [sym_let] = STATE(132),
    [sym_use] = STATE(132),
    [sym__exp] = STATE(132),
    [sym_break] = STATE(132),
    [sym_return] = STATE(132),
    [sym_await] = STATE(132),
    [sym_launch] = STATE(132),
    [sym_yield] = STATE(132),
    [sym_if] = STATE(132),
    [sym__fn] = STATE(132),
    [sym_loop] = STATE(132),
    [sym_for] = STATE(132),
    [sym_list] = STATE(132),
    [sym_map] = STATE(132),
    [sym_object] = STATE(132),
    [sym_assignment] = STATE(132),
    [sym_binary_exp] = STATE(132),
    [sym_unary_exp] = STATE(132),
    [sym_call] = STATE(132),
    [sym_property_exp] = STATE(132),
    [sym_bool] = STATE(132),
    [sym_string] = STATE(132),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(255),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [59] = {
    [sym_block] = STATE(147),
    [sym_let] = STATE(147),
    [sym_use] = STATE(147),
    [sym__exp] = STATE(147),
    [sym_break] = STATE(147),
    [sym_return] = STATE(147),
    [sym_await] = STATE(147),
    [sym_launch] = STATE(147),
    [sym_yield] = STATE(147),
    [sym_if] = STATE(147),
    [sym__fn] = STATE(147),
    [sym_loop] = STATE(147),
    [sym_for] = STATE(147),
    [sym_list] = STATE(147),
    [sym_map] = STATE(147),
    [sym_object] = STATE(147),
    [sym_assignment] = STATE(147),
    [sym_binary_exp] = STATE(147),
    [sym_unary_exp] = STATE(147),
    [sym_call] = STATE(147),
    [sym_property_exp] = STATE(147),
    [sym_bool] = STATE(147),
    [sym_string] = STATE(147),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(257),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(257),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [60] = {
    [sym_block] = STATE(180),
    [sym_let] = STATE(180),
    [sym_use] = STATE(180),
    [sym__exp] = STATE(180),
    [sym_break] = STATE(180),
    [sym_return] = STATE(180),
    [sym_await] = STATE(180),
    [sym_launch] = STATE(180),
    [sym_yield] = STATE(180),
    [sym_if] = STATE(180),
    [sym__fn] = STATE(180),
    [sym_loop] = STATE(180),
    [sym_for] = STATE(180),
    [sym_list] = STATE(180),
    [sym_map] = STATE(180),
    [sym_object] = STATE(180),
    [sym_assignment] = STATE(180),
    [sym_binary_exp] = STATE(180),
    [sym_unary_exp] = STATE(180),
    [sym_call] = STATE(180),
    [sym_property_exp] = STATE(180),
    [sym_bool] = STATE(180),
    [sym_string] = STATE(180),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(259),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(259),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [61] = {
    [sym_block] = STATE(191),
    [sym_let] = STATE(191),
    [sym_use] = STATE(191),
    [sym__exp] = STATE(191),
    [sym_break] = STATE(191),
    [sym_return] = STATE(191),
    [sym_await] = STATE(191),
    [sym_launch] = STATE(191),
    [sym_yield] = STATE(191),
    [sym_if] = STATE(191),
    [sym__fn] = STATE(191),
    [sym_loop] = STATE(191),
    [sym_for] = STATE(191),
    [sym_list] = STATE(191),
    [sym_map] = STATE(191),
    [sym_object] = STATE(191),
    [sym_assignment] = STATE(191),
    [sym_binary_exp] = STATE(191),
    [sym_unary_exp] = STATE(191),
    [sym_call] = STATE(191),
    [sym_property_exp] = STATE(191),
    [sym_bool] = STATE(191),
    [sym_string] = STATE(191),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(261),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(261),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [62] = {
    [sym_block] = STATE(188),
    [sym_let] = STATE(188),
    [sym_use] = STATE(188),
    [sym__exp] = STATE(188),
    [sym_break] = STATE(188),
    [sym_return] = STATE(188),
    [sym_await] = STATE(188),
    [sym_launch] = STATE(188),
    [sym_yield] = STATE(188),
    [sym_if] = STATE(188),
    [sym__fn] = STATE(188),
    [sym_loop] = STATE(188),
    [sym_for] = STATE(188),
    [sym_list] = STATE(188),
    [sym_map] = STATE(188),
    [sym_object] = STATE(188),
    [sym_assignment] = STATE(188),
    [sym_binary_exp] = STATE(188),
    [sym_unary_exp] = STATE(188),
    [sym_call] = STATE(188),
    [sym_property_exp] = STATE(188),
    [sym_bool] = STATE(188),
    [sym_string] = STATE(188),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_let] = ACTIONS(53),
    [anon_sym_use] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_break] = ACTIONS(61),
    [sym_continue] = ACTIONS(263),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_await] = ACTIONS(67),
    [anon_sym_launch] = ACTIONS(69),
    [anon_sym_yield] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(75),
    [anon_sym_gen] = ACTIONS(75),
    [anon_sym_loop] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_not] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [sym_number] = ACTIONS(263),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [sym_null] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [63] = {
    [sym_block] = STATE(185),
    [sym_let] = STATE(185),
    [sym_use] = STATE(185),
    [sym__exp] = STATE(185),
    [sym_break] = STATE(185),
    [sym_return] = STATE(185),
    [sym_await] = STATE(185),
    [sym_launch] = STATE(185),
    [sym_yield] = STATE(185),
    [sym_if] = STATE(185),
    [sym__fn] = STATE(185),
    [sym_loop] = STATE(185),
    [sym_for] = STATE(185),
    [sym_list] = STATE(185),
    [sym_map] = STATE(185),
    [sym_object] = STATE(185),
    [sym_assignment] = STATE(185),
    [sym_binary_exp] = STATE(185),
    [sym_unary_exp] = STATE(185),
    [sym_call] = STATE(185),
    [sym_property_exp] = STATE(185),
    [sym_bool] = STATE(185),
    [sym_string] = STATE(185),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [sym_continue] = ACTIONS(265),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_launch] = ACTIONS(25),
    [anon_sym_yield] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_gen] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(265),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [sym_null] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(269), 1,
      anon_sym_DOT,
    STATE(64), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(267), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [36] = 4,
    ACTIONS(278), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(276), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(274), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [70] = 5,
    ACTIONS(282), 1,
      anon_sym_DOT,
    STATE(68), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(284), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(280), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [106] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(288), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(286), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [138] = 5,
    ACTIONS(282), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(290), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [174] = 4,
    ACTIONS(296), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(298), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(294), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [208] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(302), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(300), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [240] = 5,
    ACTIONS(306), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(308), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(304), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [276] = 5,
    ACTIONS(312), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(315), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(310), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [312] = 4,
    STATE(64), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(317), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [346] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [377] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(327), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(325), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [408] = 5,
    ACTIONS(329), 1,
      anon_sym_EQ,
    ACTIONS(331), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(276), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(274), 15,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [443] = 5,
    ACTIONS(333), 1,
      anon_sym_DOT,
    STATE(104), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(290), 16,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [478] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(337), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(335), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [509] = 4,
    ACTIONS(339), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(298), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(294), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [542] = 15,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(361), 1,
      anon_sym_PERCENT,
    ACTIONS(363), 1,
      anon_sym_STAR_STAR,
    STATE(12), 1,
      sym__sc,
    STATE(195), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(345), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(351), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(353), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [597] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(367), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(365), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [628] = 15,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_PERCENT,
    ACTIONS(363), 1,
      anon_sym_STAR_STAR,
    ACTIONS(369), 1,
      anon_sym_COLON,
    STATE(12), 1,
      sym__sc,
    STATE(195), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(345), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(351), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(353), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [683] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(302), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(300), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_else,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [714] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(373), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(371), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [745] = 4,
    ACTIONS(331), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(276), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(274), 16,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [778] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(377), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(375), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [809] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(315), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(310), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [840] = 11,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(379), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [887] = 5,
    ACTIONS(399), 1,
      anon_sym_DOT,
    STATE(115), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(308), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(304), 16,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [922] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(403), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [953] = 5,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(407), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(405), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [988] = 6,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(407), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(405), 15,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [1025] = 8,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(407), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(405), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1066] = 9,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(407), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(405), 12,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1109] = 10,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(405), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
  [1154] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(411), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(409), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1185] = 5,
    ACTIONS(333), 1,
      anon_sym_DOT,
    STATE(77), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(284), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(280), 16,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1220] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(415), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(413), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1251] = 11,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(417), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1298] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(421), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1329] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(425), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(423), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1360] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(429), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(427), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1391] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(433), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(431), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1422] = 5,
    ACTIONS(435), 1,
      anon_sym_DOT,
    STATE(104), 1,
      aux_sym_use_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(315), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(310), 16,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1457] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(440), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1488] = 5,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(444), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(442), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1523] = 5,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(444), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(442), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1558] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(448), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(446), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1589] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(452), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(450), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1620] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(456), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(454), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1651] = 11,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(458), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1698] = 11,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(460), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1745] = 11,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(462), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1792] = 11,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(464), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1839] = 4,
    STATE(131), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(317), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [1872] = 11,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(466), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1919] = 14,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_PERCENT,
    ACTIONS(363), 1,
      anon_sym_STAR_STAR,
    STATE(12), 1,
      sym__sc,
    STATE(195), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(341), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(345), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(351), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(353), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1972] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(470), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(468), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2003] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(474), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(472), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2034] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(478), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(476), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2065] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(482), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(480), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2096] = 5,
    ACTIONS(331), 1,
      anon_sym_COLON_EQ,
    ACTIONS(484), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(276), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(274), 15,
      sym__automatic_semicolon,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2131] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(488), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(486), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2162] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(492), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(490), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2193] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(496), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(494), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2224] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(500), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(498), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2255] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(504), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(502), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2286] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(508), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(506), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2317] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(512), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(510), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2348] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(288), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(286), 18,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_else,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2379] = 5,
    ACTIONS(514), 1,
      anon_sym_DOT,
    STATE(131), 1,
      aux_sym_property_exp_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(267), 16,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2414] = 8,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_PERCENT,
    ACTIONS(363), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(407), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(405), 13,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2454] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(448), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(446), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2484] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(482), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(480), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2514] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(470), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(468), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2544] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(425), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(423), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2574] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(496), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(494), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2604] = 11,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_PERCENT,
    ACTIONS(363), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(351), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(353), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(460), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2650] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(440), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2680] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(421), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(419), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2710] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(500), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(498), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2740] = 11,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_PERCENT,
    ACTIONS(363), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(351), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(353), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(417), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [2786] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(415), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(413), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2816] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(429), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(427), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2846] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(504), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(502), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2876] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(474), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(472), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2906] = 6,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(407), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(405), 14,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [2942] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(508), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(506), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [2972] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(411), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(409), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3002] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(512), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(510), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3032] = 10,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_PERCENT,
    ACTIONS(363), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(353), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(405), 7,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
  [3076] = 9,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_PERCENT,
    ACTIONS(363), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(407), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(405), 11,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3118] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(323), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(321), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3148] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(492), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(490), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3178] = 11,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_PERCENT,
    ACTIONS(363), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(351), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(353), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(462), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3224] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(377), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(375), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3254] = 5,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(444), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(442), 15,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3288] = 5,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(444), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(442), 15,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3322] = 5,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(407), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(405), 15,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3356] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(327), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(325), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3386] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(337), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(335), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3416] = 11,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_PERCENT,
    ACTIONS(363), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(351), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(353), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(379), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3462] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(403), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(401), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3492] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(367), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(365), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3522] = 11,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_PERCENT,
    ACTIONS(363), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(351), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(353), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(458), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3568] = 11,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_PERCENT,
    ACTIONS(363), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(351), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(353), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(466), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3614] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(488), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(486), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3644] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(373), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(371), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3674] = 11,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_PERCENT,
    ACTIONS(363), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(351), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(353), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(464), 5,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3720] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(433), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(431), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3750] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(478), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(476), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3780] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(315), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(310), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3810] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(452), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(450), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3840] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(456), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(454), 17,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_or,
      anon_sym_and,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [3870] = 13,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_PERCENT,
    ACTIONS(363), 1,
      anon_sym_STAR_STAR,
    STATE(198), 1,
      aux_sym_object_repeat1,
    STATE(236), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(351), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(517), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(353), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3919] = 11,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_PERCENT,
    ACTIONS(363), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(351), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(353), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(519), 4,
      sym__automatic_semicolon,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [3964] = 13,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_PERCENT,
    ACTIONS(363), 1,
      anon_sym_STAR_STAR,
    STATE(204), 1,
      aux_sym_object_repeat1,
    STATE(241), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(351), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(521), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(353), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4013] = 11,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(523), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4057] = 13,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4105] = 13,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    STATE(213), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4153] = 13,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4201] = 13,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    ACTIONS(537), 1,
      anon_sym_RBRACK,
    STATE(217), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4249] = 13,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(539), 1,
      anon_sym_COMMA,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
    STATE(209), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4297] = 13,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4345] = 11,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      anon_sym_PERCENT,
    ACTIONS(363), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(351), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(547), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
    ACTIONS(353), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4388] = 12,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(549), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4433] = 12,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4478] = 11,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(553), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4521] = 12,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(549), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4566] = 12,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4611] = 11,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4653] = 11,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4695] = 11,
    ACTIONS(381), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    ACTIONS(397), 1,
      anon_sym_STAR_STAR,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(385), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(387), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4737] = 5,
    STATE(31), 1,
      sym__sc,
    STATE(194), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(519), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(561), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4756] = 5,
    STATE(11), 1,
      sym__sc,
    STATE(194), 1,
      aux_sym__sequence_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(564), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4775] = 4,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(523), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4790] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(133), 1,
      sym_line_comment,
    ACTIONS(569), 1,
      anon_sym_DQUOTE,
    STATE(202), 1,
      aux_sym_string_repeat1,
    ACTIONS(571), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4807] = 4,
    STATE(200), 1,
      aux_sym_object_repeat1,
    STATE(226), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(573), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4822] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(133), 1,
      sym_line_comment,
    ACTIONS(575), 1,
      anon_sym_DQUOTE,
    STATE(202), 1,
      aux_sym_string_repeat1,
    ACTIONS(571), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4839] = 4,
    STATE(200), 1,
      aux_sym_object_repeat1,
    STATE(249), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(577), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4854] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(133), 1,
      sym_line_comment,
    ACTIONS(580), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      aux_sym_string_repeat1,
    ACTIONS(582), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4871] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(133), 1,
      sym_line_comment,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    STATE(202), 1,
      aux_sym_string_repeat1,
    ACTIONS(586), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4888] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(133), 1,
      sym_line_comment,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    STATE(197), 1,
      aux_sym_string_repeat1,
    ACTIONS(591), 2,
      sym__unescaped_string_fragment,
      sym__escape_sequence,
  [4905] = 4,
    STATE(200), 1,
      aux_sym_object_repeat1,
    STATE(238), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(593), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4920] = 3,
    STATE(251), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(595), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [4932] = 4,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4946] = 4,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COMMA,
    STATE(215), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4960] = 4,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4974] = 4,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    ACTIONS(610), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4988] = 4,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5002] = 4,
    ACTIONS(616), 1,
      anon_sym_RPAREN,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    ACTIONS(620), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5016] = 3,
    STATE(256), 1,
      sym__sc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(622), 2,
      sym__automatic_semicolon,
      anon_sym_SEMI,
  [5028] = 4,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5042] = 4,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
    STATE(196), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5056] = 4,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_lambda_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5070] = 4,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
    STATE(196), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5084] = 4,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5098] = 4,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
    ACTIONS(638), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5112] = 4,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5126] = 4,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    ACTIONS(647), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym_map_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5140] = 3,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5151] = 3,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5162] = 3,
    ACTIONS(549), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5173] = 3,
    ACTIONS(649), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_lambda,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5184] = 3,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5195] = 3,
    ACTIONS(651), 1,
      anon_sym_RBRACE,
    ACTIONS(653), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5206] = 3,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    ACTIONS(657), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5217] = 3,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
    ACTIONS(657), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5228] = 3,
    ACTIONS(659), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym_lambda,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5239] = 3,
    ACTIONS(549), 1,
      anon_sym_LBRACE,
    STATE(173), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5250] = 3,
    ACTIONS(657), 1,
      sym_identifier,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5261] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(597), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5270] = 3,
    ACTIONS(549), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5281] = 3,
    ACTIONS(549), 1,
      anon_sym_LBRACE,
    STATE(141), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5292] = 3,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5303] = 3,
    ACTIONS(653), 1,
      sym_identifier,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5314] = 3,
    ACTIONS(549), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5325] = 3,
    ACTIONS(653), 1,
      sym_identifier,
    ACTIONS(665), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5336] = 3,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    STATE(126), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5347] = 3,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
    ACTIONS(657), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5358] = 3,
    ACTIONS(653), 1,
      sym_identifier,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5369] = 3,
    ACTIONS(549), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5380] = 3,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5391] = 2,
    ACTIONS(669), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5399] = 2,
    ACTIONS(671), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5407] = 2,
    ACTIONS(657), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5415] = 2,
    ACTIONS(673), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5423] = 2,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5431] = 2,
    ACTIONS(653), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5439] = 2,
    ACTIONS(677), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5447] = 2,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5455] = 2,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5463] = 2,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5471] = 2,
    ACTIONS(683), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5479] = 2,
    ACTIONS(685), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5487] = 2,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5495] = 2,
    ACTIONS(689), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5503] = 2,
    ACTIONS(691), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5511] = 2,
    ACTIONS(693), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5519] = 2,
    ACTIONS(695), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5527] = 2,
    ACTIONS(697), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5535] = 2,
    ACTIONS(537), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5543] = 2,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5551] = 2,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5559] = 2,
    ACTIONS(699), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5567] = 2,
    ACTIONS(701), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5575] = 2,
    ACTIONS(703), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5583] = 2,
    ACTIONS(705), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5591] = 2,
    ACTIONS(707), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5599] = 2,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5607] = 2,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5615] = 2,
    ACTIONS(711), 1,
      anon_sym_of,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5623] = 2,
    ACTIONS(713), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5631] = 2,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5639] = 2,
    ACTIONS(717), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(64)] = 0,
  [SMALL_STATE(65)] = 36,
  [SMALL_STATE(66)] = 70,
  [SMALL_STATE(67)] = 106,
  [SMALL_STATE(68)] = 138,
  [SMALL_STATE(69)] = 174,
  [SMALL_STATE(70)] = 208,
  [SMALL_STATE(71)] = 240,
  [SMALL_STATE(72)] = 276,
  [SMALL_STATE(73)] = 312,
  [SMALL_STATE(74)] = 346,
  [SMALL_STATE(75)] = 377,
  [SMALL_STATE(76)] = 408,
  [SMALL_STATE(77)] = 443,
  [SMALL_STATE(78)] = 478,
  [SMALL_STATE(79)] = 509,
  [SMALL_STATE(80)] = 542,
  [SMALL_STATE(81)] = 597,
  [SMALL_STATE(82)] = 628,
  [SMALL_STATE(83)] = 683,
  [SMALL_STATE(84)] = 714,
  [SMALL_STATE(85)] = 745,
  [SMALL_STATE(86)] = 778,
  [SMALL_STATE(87)] = 809,
  [SMALL_STATE(88)] = 840,
  [SMALL_STATE(89)] = 887,
  [SMALL_STATE(90)] = 922,
  [SMALL_STATE(91)] = 953,
  [SMALL_STATE(92)] = 988,
  [SMALL_STATE(93)] = 1025,
  [SMALL_STATE(94)] = 1066,
  [SMALL_STATE(95)] = 1109,
  [SMALL_STATE(96)] = 1154,
  [SMALL_STATE(97)] = 1185,
  [SMALL_STATE(98)] = 1220,
  [SMALL_STATE(99)] = 1251,
  [SMALL_STATE(100)] = 1298,
  [SMALL_STATE(101)] = 1329,
  [SMALL_STATE(102)] = 1360,
  [SMALL_STATE(103)] = 1391,
  [SMALL_STATE(104)] = 1422,
  [SMALL_STATE(105)] = 1457,
  [SMALL_STATE(106)] = 1488,
  [SMALL_STATE(107)] = 1523,
  [SMALL_STATE(108)] = 1558,
  [SMALL_STATE(109)] = 1589,
  [SMALL_STATE(110)] = 1620,
  [SMALL_STATE(111)] = 1651,
  [SMALL_STATE(112)] = 1698,
  [SMALL_STATE(113)] = 1745,
  [SMALL_STATE(114)] = 1792,
  [SMALL_STATE(115)] = 1839,
  [SMALL_STATE(116)] = 1872,
  [SMALL_STATE(117)] = 1919,
  [SMALL_STATE(118)] = 1972,
  [SMALL_STATE(119)] = 2003,
  [SMALL_STATE(120)] = 2034,
  [SMALL_STATE(121)] = 2065,
  [SMALL_STATE(122)] = 2096,
  [SMALL_STATE(123)] = 2131,
  [SMALL_STATE(124)] = 2162,
  [SMALL_STATE(125)] = 2193,
  [SMALL_STATE(126)] = 2224,
  [SMALL_STATE(127)] = 2255,
  [SMALL_STATE(128)] = 2286,
  [SMALL_STATE(129)] = 2317,
  [SMALL_STATE(130)] = 2348,
  [SMALL_STATE(131)] = 2379,
  [SMALL_STATE(132)] = 2414,
  [SMALL_STATE(133)] = 2454,
  [SMALL_STATE(134)] = 2484,
  [SMALL_STATE(135)] = 2514,
  [SMALL_STATE(136)] = 2544,
  [SMALL_STATE(137)] = 2574,
  [SMALL_STATE(138)] = 2604,
  [SMALL_STATE(139)] = 2650,
  [SMALL_STATE(140)] = 2680,
  [SMALL_STATE(141)] = 2710,
  [SMALL_STATE(142)] = 2740,
  [SMALL_STATE(143)] = 2786,
  [SMALL_STATE(144)] = 2816,
  [SMALL_STATE(145)] = 2846,
  [SMALL_STATE(146)] = 2876,
  [SMALL_STATE(147)] = 2906,
  [SMALL_STATE(148)] = 2942,
  [SMALL_STATE(149)] = 2972,
  [SMALL_STATE(150)] = 3002,
  [SMALL_STATE(151)] = 3032,
  [SMALL_STATE(152)] = 3076,
  [SMALL_STATE(153)] = 3118,
  [SMALL_STATE(154)] = 3148,
  [SMALL_STATE(155)] = 3178,
  [SMALL_STATE(156)] = 3224,
  [SMALL_STATE(157)] = 3254,
  [SMALL_STATE(158)] = 3288,
  [SMALL_STATE(159)] = 3322,
  [SMALL_STATE(160)] = 3356,
  [SMALL_STATE(161)] = 3386,
  [SMALL_STATE(162)] = 3416,
  [SMALL_STATE(163)] = 3462,
  [SMALL_STATE(164)] = 3492,
  [SMALL_STATE(165)] = 3522,
  [SMALL_STATE(166)] = 3568,
  [SMALL_STATE(167)] = 3614,
  [SMALL_STATE(168)] = 3644,
  [SMALL_STATE(169)] = 3674,
  [SMALL_STATE(170)] = 3720,
  [SMALL_STATE(171)] = 3750,
  [SMALL_STATE(172)] = 3780,
  [SMALL_STATE(173)] = 3810,
  [SMALL_STATE(174)] = 3840,
  [SMALL_STATE(175)] = 3870,
  [SMALL_STATE(176)] = 3919,
  [SMALL_STATE(177)] = 3964,
  [SMALL_STATE(178)] = 4013,
  [SMALL_STATE(179)] = 4057,
  [SMALL_STATE(180)] = 4105,
  [SMALL_STATE(181)] = 4153,
  [SMALL_STATE(182)] = 4201,
  [SMALL_STATE(183)] = 4249,
  [SMALL_STATE(184)] = 4297,
  [SMALL_STATE(185)] = 4345,
  [SMALL_STATE(186)] = 4388,
  [SMALL_STATE(187)] = 4433,
  [SMALL_STATE(188)] = 4478,
  [SMALL_STATE(189)] = 4521,
  [SMALL_STATE(190)] = 4566,
  [SMALL_STATE(191)] = 4611,
  [SMALL_STATE(192)] = 4653,
  [SMALL_STATE(193)] = 4695,
  [SMALL_STATE(194)] = 4737,
  [SMALL_STATE(195)] = 4756,
  [SMALL_STATE(196)] = 4775,
  [SMALL_STATE(197)] = 4790,
  [SMALL_STATE(198)] = 4807,
  [SMALL_STATE(199)] = 4822,
  [SMALL_STATE(200)] = 4839,
  [SMALL_STATE(201)] = 4854,
  [SMALL_STATE(202)] = 4871,
  [SMALL_STATE(203)] = 4888,
  [SMALL_STATE(204)] = 4905,
  [SMALL_STATE(205)] = 4920,
  [SMALL_STATE(206)] = 4932,
  [SMALL_STATE(207)] = 4946,
  [SMALL_STATE(208)] = 4960,
  [SMALL_STATE(209)] = 4974,
  [SMALL_STATE(210)] = 4988,
  [SMALL_STATE(211)] = 5002,
  [SMALL_STATE(212)] = 5016,
  [SMALL_STATE(213)] = 5028,
  [SMALL_STATE(214)] = 5042,
  [SMALL_STATE(215)] = 5056,
  [SMALL_STATE(216)] = 5070,
  [SMALL_STATE(217)] = 5084,
  [SMALL_STATE(218)] = 5098,
  [SMALL_STATE(219)] = 5112,
  [SMALL_STATE(220)] = 5126,
  [SMALL_STATE(221)] = 5140,
  [SMALL_STATE(222)] = 5151,
  [SMALL_STATE(223)] = 5162,
  [SMALL_STATE(224)] = 5173,
  [SMALL_STATE(225)] = 5184,
  [SMALL_STATE(226)] = 5195,
  [SMALL_STATE(227)] = 5206,
  [SMALL_STATE(228)] = 5217,
  [SMALL_STATE(229)] = 5228,
  [SMALL_STATE(230)] = 5239,
  [SMALL_STATE(231)] = 5250,
  [SMALL_STATE(232)] = 5261,
  [SMALL_STATE(233)] = 5270,
  [SMALL_STATE(234)] = 5281,
  [SMALL_STATE(235)] = 5292,
  [SMALL_STATE(236)] = 5303,
  [SMALL_STATE(237)] = 5314,
  [SMALL_STATE(238)] = 5325,
  [SMALL_STATE(239)] = 5336,
  [SMALL_STATE(240)] = 5347,
  [SMALL_STATE(241)] = 5358,
  [SMALL_STATE(242)] = 5369,
  [SMALL_STATE(243)] = 5380,
  [SMALL_STATE(244)] = 5391,
  [SMALL_STATE(245)] = 5399,
  [SMALL_STATE(246)] = 5407,
  [SMALL_STATE(247)] = 5415,
  [SMALL_STATE(248)] = 5423,
  [SMALL_STATE(249)] = 5431,
  [SMALL_STATE(250)] = 5439,
  [SMALL_STATE(251)] = 5447,
  [SMALL_STATE(252)] = 5455,
  [SMALL_STATE(253)] = 5463,
  [SMALL_STATE(254)] = 5471,
  [SMALL_STATE(255)] = 5479,
  [SMALL_STATE(256)] = 5487,
  [SMALL_STATE(257)] = 5495,
  [SMALL_STATE(258)] = 5503,
  [SMALL_STATE(259)] = 5511,
  [SMALL_STATE(260)] = 5519,
  [SMALL_STATE(261)] = 5527,
  [SMALL_STATE(262)] = 5535,
  [SMALL_STATE(263)] = 5543,
  [SMALL_STATE(264)] = 5551,
  [SMALL_STATE(265)] = 5559,
  [SMALL_STATE(266)] = 5567,
  [SMALL_STATE(267)] = 5575,
  [SMALL_STATE(268)] = 5583,
  [SMALL_STATE(269)] = 5591,
  [SMALL_STATE(270)] = 5599,
  [SMALL_STATE(271)] = 5607,
  [SMALL_STATE(272)] = 5615,
  [SMALL_STATE(273)] = 5623,
  [SMALL_STATE(274)] = 5631,
  [SMALL_STATE(275)] = 5639,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yield, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(244),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 3, .production_id = 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2), SHIFT_REPEAT(255),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_use_repeat1, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_exp, 4, .production_id = 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 5),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 5),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 3),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 4, .production_id = 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_exp, 3),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_exp, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 3),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_repeat1, 2), SHIFT_REPEAT(268),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 5, .production_id = 4),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 5, .production_id = 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_exp, 2),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_exp, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 4),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 2),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fn, 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fn, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_launch, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_await, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 5),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_exp_repeat1, 2, .production_id = 5),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 2),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 6),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 6),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 6),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 5),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 7),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 7),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 7),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 7),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 6),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 6),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_exp_repeat1, 2), SHIFT_REPEAT(259),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 4),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_repeat1, 2), SHIFT_REPEAT(31),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(29),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(249),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(202),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2), SHIFT_REPEAT(246),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(54),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [673] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__automatic_semicolon = 0,
  ts_external_token_block_comment = 1,
  ts_external_token_raw_string_literal = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__automatic_semicolon] = sym__automatic_semicolon,
  [ts_external_token_block_comment] = sym_block_comment,
  [ts_external_token_raw_string_literal] = sym_raw_string_literal,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__automatic_semicolon] = true,
    [ts_external_token_block_comment] = true,
    [ts_external_token_raw_string_literal] = true,
  },
  [2] = {
    [ts_external_token_block_comment] = true,
  },
  [3] = {
    [ts_external_token__automatic_semicolon] = true,
    [ts_external_token_block_comment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_ursa_external_scanner_create(void);
void tree_sitter_ursa_external_scanner_destroy(void *);
bool tree_sitter_ursa_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_ursa_external_scanner_serialize(void *, char *);
void tree_sitter_ursa_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ursa() {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_ursa_external_scanner_create,
      tree_sitter_ursa_external_scanner_destroy,
      tree_sitter_ursa_external_scanner_scan,
      tree_sitter_ursa_external_scanner_serialize,
      tree_sitter_ursa_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

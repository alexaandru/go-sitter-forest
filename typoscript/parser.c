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
#define STATE_COUNT 134
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 5
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  aux_sym__block_item_token1 = 1,
  anon_sym_EQ = 2,
  anon_sym_LF = 3,
  anon_sym_GT = 4,
  anon_sym_LT = 5,
  aux_sym_reference_line_token1 = 6,
  anon_sym_COLON_EQ = 7,
  anon_sym_AMP_AMP = 8,
  anon_sym_PIPE_PIPE = 9,
  anon_sym_AND = 10,
  anon_sym_OR = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  aux_sym__condition_inner_token1 = 14,
  aux_sym_condition_else_token1 = 15,
  aux_sym_condition_end_token1 = 16,
  anon_sym_LBRACE = 17,
  anon_sym_RBRACE = 18,
  anon_sym_LBRACE_DOLLAR = 19,
  aux_sym_constant_token1 = 20,
  aux_sym_value_token1 = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  sym_identifier = 24,
  sym_cobject = 25,
  sym_modifier_predefined = 26,
  sym_modifier_function = 27,
  anon_sym_COMMA = 28,
  aux_sym_modifier_parameter_token1 = 29,
  sym_comment = 30,
  sym_single_line_comment = 31,
  anon_sym_DQUOTE = 32,
  aux_sym_string_token1 = 33,
  anon_sym_SQUOTE = 34,
  aux_sym_string_token2 = 35,
  anon_sym_INCLUDE_TYPOSCRIPT = 36,
  anon_sym_COLON = 37,
  aux_sym_import_legacy_token1 = 38,
  anon_sym_source_EQ = 39,
  aux_sym_import_legacy_token2 = 40,
  anon_sym_ATimport = 41,
  sym_typoscript = 42,
  sym__block_item = 43,
  sym_assignment_line = 44,
  sym_multiline_line = 45,
  sym_deletion_line = 46,
  sym_copy_line = 47,
  sym_reference_line = 48,
  sym_modification_line = 49,
  sym_configuration_block = 50,
  sym__condition_segment = 51,
  sym_condition_bool = 52,
  sym_condition = 53,
  sym_condition_block = 54,
  sym__condition_line = 55,
  aux_sym__condition_inner = 56,
  sym_condition_else = 57,
  sym_condition_end = 58,
  sym_block = 59,
  sym_constant = 60,
  sym_value = 61,
  sym_multiline_value = 62,
  sym_modifier_parameters = 63,
  sym_modifier_parameter = 64,
  sym__comments = 65,
  sym_string = 66,
  sym__imports = 67,
  sym_import_legacy = 68,
  sym_import = 69,
  aux_sym_typoscript_repeat1 = 70,
  aux_sym_condition_block_repeat1 = 71,
  aux_sym__condition_line_repeat1 = 72,
  aux_sym_value_repeat1 = 73,
  aux_sym_multiline_value_repeat1 = 74,
  aux_sym_multiline_value_repeat2 = 75,
  aux_sym_modifier_parameters_repeat1 = 76,
  aux_sym_modifier_parameter_repeat1 = 77,
  aux_sym_string_repeat1 = 78,
  aux_sym_string_repeat2 = 79,
  anon_alias_sym_bracket_parameter = 80,
  alias_sym_condition_attribute = 81,
  alias_sym_copy_identifier = 82,
  anon_alias_sym_function = 83,
  alias_sym_reference_identifier = 84,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__block_item_token1] = "_block_item_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_LF] = "\n",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [aux_sym_reference_line_token1] = "=<",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AND] = "AND",
  [anon_sym_OR] = "OR",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym__condition_inner_token1] = "_condition_inner_token1",
  [aux_sym_condition_else_token1] = "condition_else_token1",
  [aux_sym_condition_end_token1] = "condition_end_token1",
  [anon_sym_LBRACE] = "block_punctuation",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_DOLLAR] = "{$",
  [aux_sym_constant_token1] = "constant_token1",
  [aux_sym_value_token1] = "value_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [sym_cobject] = "cobject",
  [sym_modifier_predefined] = "modifier_predefined",
  [sym_modifier_function] = "modifier_function",
  [anon_sym_COMMA] = ",",
  [aux_sym_modifier_parameter_token1] = "modifier_parameter_token1",
  [sym_comment] = "comment",
  [sym_single_line_comment] = "single_line_comment",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_INCLUDE_TYPOSCRIPT] = "INCLUDE_TYPOSCRIPT",
  [anon_sym_COLON] = ":",
  [aux_sym_import_legacy_token1] = "import_legacy_token1",
  [anon_sym_source_EQ] = "source=",
  [aux_sym_import_legacy_token2] = "import_legacy_token2",
  [anon_sym_ATimport] = "@import",
  [sym_typoscript] = "typoscript",
  [sym__block_item] = "_block_item",
  [sym_assignment_line] = "assignment_line",
  [sym_multiline_line] = "multiline_line",
  [sym_deletion_line] = "deletion_line",
  [sym_copy_line] = "copy_line",
  [sym_reference_line] = "reference_line",
  [sym_modification_line] = "modification_line",
  [sym_configuration_block] = "configuration_block",
  [sym__condition_segment] = "_condition_segment",
  [sym_condition_bool] = "condition_bool",
  [sym_condition] = "condition",
  [sym_condition_block] = "condition_block",
  [sym__condition_line] = "_condition_line",
  [aux_sym__condition_inner] = "_condition_inner",
  [sym_condition_else] = "condition_else",
  [sym_condition_end] = "condition_end",
  [sym_block] = "block",
  [sym_constant] = "constant",
  [sym_value] = "value",
  [sym_multiline_value] = "multiline_value",
  [sym_modifier_parameters] = "modifier_parameters",
  [sym_modifier_parameter] = "modifier_parameter",
  [sym__comments] = "_comments",
  [sym_string] = "string",
  [sym__imports] = "_imports",
  [sym_import_legacy] = "import_legacy",
  [sym_import] = "import",
  [aux_sym_typoscript_repeat1] = "typoscript_repeat1",
  [aux_sym_condition_block_repeat1] = "condition_block_repeat1",
  [aux_sym__condition_line_repeat1] = "_condition_line_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_multiline_value_repeat1] = "multiline_value_repeat1",
  [aux_sym_multiline_value_repeat2] = "multiline_value_repeat2",
  [aux_sym_modifier_parameters_repeat1] = "modifier_parameters_repeat1",
  [aux_sym_modifier_parameter_repeat1] = "modifier_parameter_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [anon_alias_sym_bracket_parameter] = "bracket_parameter",
  [alias_sym_condition_attribute] = "condition_attribute",
  [alias_sym_copy_identifier] = "copy_identifier",
  [anon_alias_sym_function] = "function",
  [alias_sym_reference_identifier] = "reference_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__block_item_token1] = aux_sym__block_item_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_reference_line_token1] = aux_sym_reference_line_token1,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym__condition_inner_token1] = aux_sym__condition_inner_token1,
  [aux_sym_condition_else_token1] = aux_sym_condition_else_token1,
  [aux_sym_condition_end_token1] = aux_sym_condition_end_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_DOLLAR] = anon_sym_LBRACE_DOLLAR,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identifier] = sym_identifier,
  [sym_cobject] = sym_cobject,
  [sym_modifier_predefined] = sym_modifier_predefined,
  [sym_modifier_function] = sym_modifier_function,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_modifier_parameter_token1] = aux_sym_modifier_parameter_token1,
  [sym_comment] = sym_comment,
  [sym_single_line_comment] = sym_single_line_comment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_INCLUDE_TYPOSCRIPT] = anon_sym_INCLUDE_TYPOSCRIPT,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_import_legacy_token1] = aux_sym_import_legacy_token1,
  [anon_sym_source_EQ] = anon_sym_source_EQ,
  [aux_sym_import_legacy_token2] = aux_sym_import_legacy_token2,
  [anon_sym_ATimport] = anon_sym_ATimport,
  [sym_typoscript] = sym_typoscript,
  [sym__block_item] = sym__block_item,
  [sym_assignment_line] = sym_assignment_line,
  [sym_multiline_line] = sym_multiline_line,
  [sym_deletion_line] = sym_deletion_line,
  [sym_copy_line] = sym_copy_line,
  [sym_reference_line] = sym_reference_line,
  [sym_modification_line] = sym_modification_line,
  [sym_configuration_block] = sym_configuration_block,
  [sym__condition_segment] = sym__condition_segment,
  [sym_condition_bool] = sym_condition_bool,
  [sym_condition] = sym_condition,
  [sym_condition_block] = sym_condition_block,
  [sym__condition_line] = sym__condition_line,
  [aux_sym__condition_inner] = aux_sym__condition_inner,
  [sym_condition_else] = sym_condition_else,
  [sym_condition_end] = sym_condition_end,
  [sym_block] = sym_block,
  [sym_constant] = sym_constant,
  [sym_value] = sym_value,
  [sym_multiline_value] = sym_multiline_value,
  [sym_modifier_parameters] = sym_modifier_parameters,
  [sym_modifier_parameter] = sym_modifier_parameter,
  [sym__comments] = sym__comments,
  [sym_string] = sym_string,
  [sym__imports] = sym__imports,
  [sym_import_legacy] = sym_import_legacy,
  [sym_import] = sym_import,
  [aux_sym_typoscript_repeat1] = aux_sym_typoscript_repeat1,
  [aux_sym_condition_block_repeat1] = aux_sym_condition_block_repeat1,
  [aux_sym__condition_line_repeat1] = aux_sym__condition_line_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
  [aux_sym_multiline_value_repeat1] = aux_sym_multiline_value_repeat1,
  [aux_sym_multiline_value_repeat2] = aux_sym_multiline_value_repeat2,
  [aux_sym_modifier_parameters_repeat1] = aux_sym_modifier_parameters_repeat1,
  [aux_sym_modifier_parameter_repeat1] = aux_sym_modifier_parameter_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [anon_alias_sym_bracket_parameter] = anon_alias_sym_bracket_parameter,
  [alias_sym_condition_attribute] = alias_sym_condition_attribute,
  [alias_sym_copy_identifier] = alias_sym_copy_identifier,
  [anon_alias_sym_function] = anon_alias_sym_function,
  [alias_sym_reference_identifier] = alias_sym_reference_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__block_item_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_reference_line_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
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
  [aux_sym__condition_inner_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_else_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_end_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_token1] = {
    .visible = false,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_cobject] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier_predefined] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier_function] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_modifier_parameter_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_single_line_comment] = {
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_INCLUDE_TYPOSCRIPT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_import_legacy_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_source_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_import_legacy_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [sym_typoscript] = {
    .visible = true,
    .named = true,
  },
  [sym__block_item] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_line] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_line] = {
    .visible = true,
    .named = true,
  },
  [sym_deletion_line] = {
    .visible = true,
    .named = true,
  },
  [sym_copy_line] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_line] = {
    .visible = true,
    .named = true,
  },
  [sym_modification_line] = {
    .visible = true,
    .named = true,
  },
  [sym_configuration_block] = {
    .visible = true,
    .named = true,
  },
  [sym__condition_segment] = {
    .visible = false,
    .named = true,
  },
  [sym_condition_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_block] = {
    .visible = true,
    .named = true,
  },
  [sym__condition_line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__condition_inner] = {
    .visible = false,
    .named = false,
  },
  [sym_condition_else] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_end] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_value] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__comments] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__imports] = {
    .visible = false,
    .named = true,
  },
  [sym_import_legacy] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_typoscript_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__condition_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_value_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modifier_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modifier_parameter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_bracket_parameter] = {
    .visible = true,
    .named = false,
  },
  [alias_sym_condition_attribute] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_copy_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_alias_sym_function] = {
    .visible = true,
    .named = false,
  },
  [alias_sym_reference_identifier] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_bracket_parameter,
  },
  [2] = {
    [1] = anon_sym_LBRACE,
  },
  [3] = {
    [2] = alias_sym_copy_identifier,
  },
  [4] = {
    [2] = alias_sym_reference_identifier,
  },
  [5] = {
    [2] = anon_sym_LBRACE,
  },
  [6] = {
    [0] = anon_alias_sym_function,
  },
  [7] = {
    [7] = alias_sym_condition_attribute,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_condition, 2,
    sym_condition,
    anon_alias_sym_bracket_parameter,
  sym_modifier_parameters, 2,
    sym_modifier_parameters,
    anon_alias_sym_function,
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
  [10] = 9,
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
  [33] = 18,
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
  [46] = 42,
  [47] = 47,
  [48] = 47,
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
  [62] = 60,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 40,
  [67] = 55,
  [68] = 68,
  [69] = 63,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 71,
  [74] = 74,
  [75] = 75,
  [76] = 41,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 61,
  [87] = 84,
  [88] = 40,
  [89] = 89,
  [90] = 40,
  [91] = 91,
  [92] = 58,
  [93] = 93,
  [94] = 91,
  [95] = 95,
  [96] = 96,
  [97] = 40,
  [98] = 56,
  [99] = 99,
  [100] = 12,
  [101] = 101,
  [102] = 13,
  [103] = 103,
  [104] = 104,
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
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 112,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 112,
  [127] = 112,
  [128] = 112,
  [129] = 129,
  [130] = 109,
  [131] = 109,
  [132] = 109,
  [133] = 109,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(191);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(301);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(307);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '>') ADVANCE(196);
      if (lookahead == '@') ADVANCE(144);
      if (lookahead == 'A') ADVANCE(73);
      if (lookahead == 'C') ADVANCE(22);
      if (lookahead == 'E') ADVANCE(30);
      if (lookahead == 'F') ADVANCE(56);
      if (lookahead == 'H') ADVANCE(72);
      if (lookahead == 'I') ADVANCE(69);
      if (lookahead == 'L') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(88);
      if (lookahead == 'P') ADVANCE(17);
      if (lookahead == 'R') ADVANCE(36);
      if (lookahead == 'S') ADVANCE(121);
      if (lookahead == 'T') ADVANCE(37);
      if (lookahead == 'U') ADVANCE(99);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == ']') ADVANCE(206);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead == 's') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(153);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '|') ADVANCE(178);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(306);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == 'A') ADVANCE(73);
      if (lookahead == 'O') ADVANCE(88);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '|') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(223);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == 'C') ADVANCE(225);
      if (lookahead == 'E') ADVANCE(227);
      if (lookahead == 'F') ADVANCE(230);
      if (lookahead == 'H') ADVANCE(232);
      if (lookahead == 'I') ADVANCE(231);
      if (lookahead == 'L') ADVANCE(233);
      if (lookahead == 'P') ADVANCE(224);
      if (lookahead == 'R') ADVANCE(228);
      if (lookahead == 'S') ADVANCE(235);
      if (lookahead == 'T') ADVANCE(229);
      if (lookahead == 'U') ADVANCE(234);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '{') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(200);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(209);
      if (lookahead == 'A') ADVANCE(211);
      if (lookahead == 'O') ADVANCE(212);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == ']') ADVANCE(206);
      if (lookahead == '{') ADVANCE(208);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(301);
      if (lookahead == '{') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0) ADVANCE(302);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '{') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(296);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '<') ADVANCE(198);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(199);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(310);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(311);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(312);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(53);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(53);
      if (lookahead == 'G') ADVANCE(125);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(243);
      if (lookahead == 'N') ADVANCE(112);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(77);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'O') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(103);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(110);
      END_STATE();
    case 25:
      if (lookahead == 'B') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(79);
      if (lookahead == 'S') ADVANCE(115);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(65);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(93);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(59);
      if (lookahead == 'X') ADVANCE(105);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(202);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(97);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(113);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(127);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(71);
      if (lookahead == 'M') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(241);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(242);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(89);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(98);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(126);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(87);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(127);
      END_STATE();
    case 51:
      if (lookahead == 'F') ADVANCE(169);
      if (lookahead == 'S') ADVANCE(175);
      END_STATE();
    case 52:
      if (lookahead == 'G') ADVANCE(241);
      END_STATE();
    case 53:
      if (lookahead == 'G') ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == 'G') ADVANCE(62);
      END_STATE();
    case 55:
      if (lookahead == 'G') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == 'I') ADVANCE(67);
      if (lookahead == 'L') ADVANCE(117);
      END_STATE();
    case 57:
      if (lookahead == 'I') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 'I') ADVANCE(34);
      END_STATE();
    case 59:
      if (lookahead == 'I') ADVANCE(109);
      END_STATE();
    case 60:
      if (lookahead == 'I') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(74);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(104);
      END_STATE();
    case 63:
      if (lookahead == 'L') ADVANCE(241);
      END_STATE();
    case 64:
      if (lookahead == 'L') ADVANCE(146);
      END_STATE();
    case 65:
      if (lookahead == 'L') ADVANCE(118);
      END_STATE();
    case 66:
      if (lookahead == 'L') ADVANCE(24);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(39);
      END_STATE();
    case 68:
      if (lookahead == 'L') ADVANCE(120);
      END_STATE();
    case 69:
      if (lookahead == 'M') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(27);
      END_STATE();
    case 70:
      if (lookahead == 'M') ADVANCE(83);
      END_STATE();
    case 71:
      if (lookahead == 'M') ADVANCE(83);
      if (lookahead == 'X') ADVANCE(106);
      END_STATE();
    case 72:
      if (lookahead == 'M') ADVANCE(40);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(31);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(241);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(116);
      END_STATE();
    case 76:
      if (lookahead == 'N') ADVANCE(106);
      END_STATE();
    case 77:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 78:
      if (lookahead == 'O') ADVANCE(20);
      END_STATE();
    case 79:
      if (lookahead == 'O') ADVANCE(92);
      END_STATE();
    case 80:
      if (lookahead == 'O') ADVANCE(119);
      END_STATE();
    case 81:
      if (lookahead == 'O') ADVANCE(100);
      END_STATE();
    case 82:
      if (lookahead == 'O') ADVANCE(96);
      END_STATE();
    case 83:
      if (lookahead == 'P') ADVANCE(66);
      END_STATE();
    case 84:
      if (lookahead == 'P') ADVANCE(81);
      END_STATE();
    case 85:
      if (lookahead == 'P') ADVANCE(21);
      END_STATE();
    case 86:
      if (lookahead == 'P') ADVANCE(108);
      END_STATE();
    case 87:
      if (lookahead == 'P') ADVANCE(68);
      END_STATE();
    case 88:
      if (lookahead == 'R') ADVANCE(203);
      END_STATE();
    case 89:
      if (lookahead == 'R') ADVANCE(243);
      END_STATE();
    case 90:
      if (lookahead == 'R') ADVANCE(241);
      END_STATE();
    case 91:
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 92:
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 93:
      if (lookahead == 'R') ADVANCE(60);
      END_STATE();
    case 94:
      if (lookahead == 'R') ADVANCE(43);
      END_STATE();
    case 95:
      if (lookahead == 'R') ADVANCE(46);
      END_STATE();
    case 96:
      if (lookahead == 'R') ADVANCE(50);
      END_STATE();
    case 97:
      if (lookahead == 'S') ADVANCE(241);
      END_STATE();
    case 98:
      if (lookahead == 'S') ADVANCE(80);
      END_STATE();
    case 99:
      if (lookahead == 'S') ADVANCE(42);
      END_STATE();
    case 100:
      if (lookahead == 'S') ADVANCE(29);
      END_STATE();
    case 101:
      if (lookahead == 'S') ADVANCE(175);
      END_STATE();
    case 102:
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 103:
      if (lookahead == 'S') ADVANCE(49);
      END_STATE();
    case 104:
      if (lookahead == 'S') ADVANCE(114);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(241);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(122);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(305);
      END_STATE();
    case 109:
      if (lookahead == 'T') ADVANCE(85);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(159);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 114:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 115:
      if (lookahead == 'T') ADVANCE(82);
      END_STATE();
    case 116:
      if (lookahead == 'U') ADVANCE(241);
      END_STATE();
    case 117:
      if (lookahead == 'U') ADVANCE(58);
      END_STATE();
    case 118:
      if (lookahead == 'U') ADVANCE(33);
      END_STATE();
    case 119:
      if (lookahead == 'U') ADVANCE(91);
      END_STATE();
    case 120:
      if (lookahead == 'U') ADVANCE(55);
      END_STATE();
    case 121:
      if (lookahead == 'V') ADVANCE(52);
      END_STATE();
    case 122:
      if (lookahead == 'Y') ADVANCE(84);
      END_STATE();
    case 123:
      if (lookahead == ']') ADVANCE(215);
      END_STATE();
    case 124:
      if (lookahead == ']') ADVANCE(214);
      END_STATE();
    case 125:
      if (lookahead == '_') ADVANCE(94);
      END_STATE();
    case 126:
      if (lookahead == '_') ADVANCE(107);
      END_STATE();
    case 127:
      if (lookahead == '_') ADVANCE(95);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'p') ADVANCE(280);
      if (lookahead == 'r') ADVANCE(256);
      if (lookahead == 's') ADVANCE(275);
      if (lookahead == 'u') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(128)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 143:
      if (lookahead == 'g') ADVANCE(244);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(148);
      if (lookahead == 'v') ADVANCE(140);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 160:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 161:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 162:
      if (lookahead == 'q') ADVANCE(176);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(174);
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 176:
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 177:
      if (lookahead == 'v') ADVANCE(137);
      END_STATE();
    case 178:
      if (lookahead == '|') ADVANCE(201);
      END_STATE();
    case 179:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(179)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 180:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(180)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 181:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 182:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(181);
      END_STATE();
    case 183:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 185:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(189);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 186:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 187:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 188:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 189:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(184);
      END_STATE();
    case 190:
      if (eof) ADVANCE(191);
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '>') ADVANCE(196);
      if (lookahead == '@') ADVANCE(144);
      if (lookahead == '[') ADVANCE(205);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(190)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__block_item_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '<') ADVANCE(198);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_reference_line_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(186);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__condition_inner_token1);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__condition_inner_token1);
      if (lookahead == '$') ADVANCE(219);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__condition_inner_token1);
      if (lookahead == '&') ADVANCE(200);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__condition_inner_token1);
      if (lookahead == '&') ADVANCE(209);
      if (lookahead == 'A') ADVANCE(211);
      if (lookahead == 'O') ADVANCE(212);
      if (lookahead == '[') ADVANCE(204);
      if (lookahead == '{') ADVANCE(208);
      if (lookahead == '|') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(207);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__condition_inner_token1);
      if (lookahead == 'N') ADVANCE(31);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__condition_inner_token1);
      if (lookahead == 'R') ADVANCE(203);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__condition_inner_token1);
      if (lookahead == '|') ADVANCE(201);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_condition_else_token1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_condition_end_token1);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '$') ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LBRACE_DOLLAR);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_value_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '$') ADVANCE(219);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'A') ADVANCE(53);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'O') ADVANCE(19);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'C') ADVANCE(225);
      if (lookahead == 'E') ADVANCE(227);
      if (lookahead == 'F') ADVANCE(230);
      if (lookahead == 'H') ADVANCE(232);
      if (lookahead == 'I') ADVANCE(231);
      if (lookahead == 'L') ADVANCE(233);
      if (lookahead == 'P') ADVANCE(224);
      if (lookahead == 'R') ADVANCE(228);
      if (lookahead == 'S') ADVANCE(235);
      if (lookahead == 'T') ADVANCE(229);
      if (lookahead == 'U') ADVANCE(234);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'D') ADVANCE(59);
      if (lookahead == 'X') ADVANCE(105);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'E') ADVANCE(71);
      if (lookahead == 'M') ADVANCE(40);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'I') ADVANCE(67);
      if (lookahead == 'L') ADVANCE(117);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'M') ADVANCE(18);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'M') ADVANCE(40);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'O') ADVANCE(20);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'S') ADVANCE(42);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'V') ADVANCE(52);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_cobject);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_cobject);
      if (lookahead == 'S') ADVANCE(241);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_cobject);
      if (lookahead == '_') ADVANCE(57);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_modifier_predefined);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_modifier_predefined);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'F') ADVANCE(282);
      if (lookahead == 'S') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'L') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'S') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'T') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'c') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'd') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'd') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'g') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'l') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'm') ADVANCE(272);
      if (lookahead == 'p') ADVANCE(266);
      if (lookahead == 'v') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'n') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'o') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'o') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'o') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'p') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'q') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'r') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'r') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'r') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 's') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 't') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'u') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == 'v') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_modifier_function);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_modifier_parameter_token1);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_modifier_parameter_token1);
      if (lookahead == '$') ADVANCE(219);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_modifier_parameter_token1);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == '{') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(292);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '$') ADVANCE(219);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(298);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '$') ADVANCE(219);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '{') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(302);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_INCLUDE_TYPOSCRIPT);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(199);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_import_legacy_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(308);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_import_legacy_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_source_EQ);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_import_legacy_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(311);
      if (('\n' <= lookahead && lookahead <= '\r')) ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_import_legacy_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_ATimport);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 190},
  [2] = {.lex_state = 190},
  [3] = {.lex_state = 190},
  [4] = {.lex_state = 190},
  [5] = {.lex_state = 190},
  [6] = {.lex_state = 190},
  [7] = {.lex_state = 190},
  [8] = {.lex_state = 190},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 190},
  [13] = {.lex_state = 190},
  [14] = {.lex_state = 190},
  [15] = {.lex_state = 190},
  [16] = {.lex_state = 190},
  [17] = {.lex_state = 190},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 190},
  [20] = {.lex_state = 190},
  [21] = {.lex_state = 190},
  [22] = {.lex_state = 190},
  [23] = {.lex_state = 190},
  [24] = {.lex_state = 190},
  [25] = {.lex_state = 190},
  [26] = {.lex_state = 190},
  [27] = {.lex_state = 190},
  [28] = {.lex_state = 190},
  [29] = {.lex_state = 190},
  [30] = {.lex_state = 190},
  [31] = {.lex_state = 190},
  [32] = {.lex_state = 190},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 190},
  [35] = {.lex_state = 190},
  [36] = {.lex_state = 190},
  [37] = {.lex_state = 190},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 16},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 16},
  [103] = {.lex_state = 128},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 16},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 179},
  [110] = {.lex_state = 180},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 308},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 190},
  [123] = {.lex_state = 190},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 179},
  [131] = {.lex_state = 179},
  [132] = {.lex_state = 179},
  [133] = {.lex_state = 179},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__block_item_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym_reference_line_token1] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_condition_else_token1] = ACTIONS(1),
    [aux_sym_condition_end_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_DOLLAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_cobject] = ACTIONS(1),
    [sym_modifier_predefined] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_single_line_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_INCLUDE_TYPOSCRIPT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_source_EQ] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
  },
  [1] = {
    [sym_typoscript] = STATE(114),
    [sym__block_item] = STATE(3),
    [sym_assignment_line] = STATE(3),
    [sym_multiline_line] = STATE(3),
    [sym_deletion_line] = STATE(3),
    [sym_copy_line] = STATE(3),
    [sym_reference_line] = STATE(3),
    [sym_modification_line] = STATE(3),
    [sym_configuration_block] = STATE(3),
    [sym__condition_segment] = STATE(44),
    [sym_condition] = STATE(38),
    [sym_condition_block] = STATE(3),
    [sym__condition_line] = STATE(6),
    [sym_condition_else] = STATE(74),
    [sym_condition_end] = STATE(3),
    [sym__imports] = STATE(3),
    [sym_import_legacy] = STATE(3),
    [sym_import] = STATE(3),
    [aux_sym_typoscript_repeat1] = STATE(3),
    [aux_sym__condition_line_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__block_item_token1] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_condition_else_token1] = ACTIONS(11),
    [aux_sym_condition_end_token1] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_comment] = ACTIONS(5),
    [sym_single_line_comment] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(30), 1,
      aux_sym_condition_else_token1,
    ACTIONS(33), 1,
      aux_sym_condition_end_token1,
    ACTIONS(36), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_ATimport,
    STATE(6), 1,
      sym__condition_line,
    STATE(38), 1,
      sym_condition,
    STATE(74), 1,
      sym_condition_else,
    STATE(44), 2,
      sym__condition_segment,
      aux_sym__condition_line_repeat1,
    ACTIONS(21), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    STATE(2), 14,
      sym__block_item,
      sym_assignment_line,
      sym_multiline_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym_condition_block,
      sym_condition_end,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_typoscript_repeat1,
  [56] = 13,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_condition_else_token1,
    ACTIONS(13), 1,
      aux_sym_condition_end_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_ATimport,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym__condition_line,
    STATE(38), 1,
      sym_condition,
    STATE(74), 1,
      sym_condition_else,
    STATE(44), 2,
      sym__condition_segment,
      aux_sym__condition_line_repeat1,
    ACTIONS(44), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    STATE(2), 14,
      sym__block_item,
      sym_assignment_line,
      sym_multiline_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym_condition_block,
      sym_condition_end,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_typoscript_repeat1,
  [112] = 7,
    ACTIONS(51), 1,
      anon_sym_LT,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_ATimport,
    ACTIONS(48), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
    STATE(4), 12,
      sym__block_item,
      sym_assignment_line,
      sym_multiline_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_condition_block_repeat1,
  [150] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_ATimport,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
    ACTIONS(64), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    STATE(4), 12,
      sym__block_item,
      sym_assignment_line,
      sym_multiline_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_condition_block_repeat1,
  [187] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_ATimport,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
    ACTIONS(70), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    STATE(5), 12,
      sym__block_item,
      sym_assignment_line,
      sym_multiline_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_condition_block_repeat1,
  [224] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_ATimport,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    STATE(4), 12,
      sym__block_item,
      sym_assignment_line,
      sym_multiline_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_condition_block_repeat1,
  [256] = 6,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_ATimport,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 3,
      aux_sym__block_item_token1,
      sym_comment,
      sym_single_line_comment,
    STATE(7), 12,
      sym__block_item,
      sym_assignment_line,
      sym_multiline_line,
      sym_deletion_line,
      sym_copy_line,
      sym_reference_line,
      sym_modification_line,
      sym_configuration_block,
      sym__imports,
      sym_import_legacy,
      sym_import,
      aux_sym_condition_block_repeat1,
  [288] = 7,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    ACTIONS(86), 1,
      aux_sym__condition_inner_token1,
    ACTIONS(88), 1,
      anon_sym_LBRACE_DOLLAR,
    STATE(43), 1,
      sym_condition,
    STATE(11), 3,
      sym_condition_bool,
      aux_sym__condition_inner,
      sym_constant,
    ACTIONS(80), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
  [315] = 7,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(86), 1,
      aux_sym__condition_inner_token1,
    ACTIONS(88), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym_condition,
    STATE(11), 3,
      sym_condition_bool,
      aux_sym__condition_inner,
      sym_constant,
    ACTIONS(80), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
  [342] = 7,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    ACTIONS(100), 1,
      aux_sym__condition_inner_token1,
    ACTIONS(103), 1,
      anon_sym_LBRACE_DOLLAR,
    STATE(43), 1,
      sym_condition,
    STATE(11), 3,
      sym_condition_bool,
      aux_sym__condition_inner,
      sym_constant,
    ACTIONS(92), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
  [369] = 2,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(106), 11,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [386] = 2,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 11,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_GT,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [403] = 2,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [419] = 2,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [435] = 2,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [451] = 2,
    ACTIONS(128), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [467] = 6,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(130), 1,
      aux_sym__condition_inner_token1,
    STATE(43), 1,
      sym_condition,
    STATE(10), 3,
      sym_condition_bool,
      aux_sym__condition_inner,
      sym_constant,
    ACTIONS(80), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
  [491] = 2,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [507] = 2,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [523] = 2,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(140), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [539] = 2,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    ACTIONS(144), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [555] = 2,
    ACTIONS(150), 1,
      anon_sym_LBRACK,
    ACTIONS(148), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [571] = 2,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [587] = 2,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [603] = 2,
    ACTIONS(162), 1,
      anon_sym_LBRACK,
    ACTIONS(160), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [619] = 2,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(164), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [635] = 2,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [651] = 2,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [667] = 2,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(176), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [683] = 2,
    ACTIONS(182), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [699] = 2,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 10,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [715] = 6,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(188), 1,
      aux_sym__condition_inner_token1,
    STATE(43), 1,
      sym_condition,
    STATE(9), 3,
      sym_condition_bool,
      aux_sym__condition_inner,
      sym_constant,
    ACTIONS(80), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
  [739] = 2,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [754] = 2,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [769] = 2,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(198), 9,
      ts_builtin_sym_end,
      aux_sym__block_item_token1,
      anon_sym_LT,
      aux_sym_condition_else_token1,
      aux_sym_condition_end_token1,
      sym_identifier,
      sym_comment,
      sym_single_line_comment,
      anon_sym_ATimport,
  [784] = 9,
    ACTIONS(202), 1,
      anon_sym_EQ,
    ACTIONS(204), 1,
      anon_sym_GT,
    ACTIONS(206), 1,
      anon_sym_LT,
    ACTIONS(208), 1,
      aux_sym_reference_line_token1,
    ACTIONS(210), 1,
      anon_sym_COLON_EQ,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_block,
    STATE(82), 1,
      sym_multiline_value,
  [812] = 3,
    STATE(75), 1,
      sym_condition_bool,
    ACTIONS(216), 4,
      anon_sym_LF,
      anon_sym_LBRACK,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(218), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
  [828] = 6,
    ACTIONS(220), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      aux_sym_modifier_parameter_token1,
    STATE(59), 1,
      sym_modifier_parameters,
    ACTIONS(226), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(39), 2,
      sym_constant,
      aux_sym_modifier_parameter_repeat1,
  [849] = 1,
    ACTIONS(231), 8,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym__condition_inner_token1,
      anon_sym_LBRACE_DOLLAR,
  [860] = 1,
    ACTIONS(233), 8,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym__condition_inner_token1,
      anon_sym_LBRACE_DOLLAR,
  [871] = 7,
    ACTIONS(235), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    ACTIONS(241), 1,
      aux_sym_modifier_parameter_token1,
    STATE(59), 1,
      sym_modifier_parameters,
    STATE(87), 1,
      sym_modifier_parameter,
    STATE(45), 2,
      sym_constant,
      aux_sym_modifier_parameter_repeat1,
  [894] = 1,
    ACTIONS(243), 8,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym__condition_inner_token1,
      anon_sym_LBRACE_DOLLAR,
  [905] = 6,
    ACTIONS(245), 1,
      anon_sym_LF,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_condition,
    STATE(116), 1,
      sym__comments,
    ACTIONS(249), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(52), 2,
      sym__condition_segment,
      aux_sym__condition_line_repeat1,
  [926] = 6,
    ACTIONS(235), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      aux_sym_modifier_parameter_token1,
    STATE(59), 1,
      sym_modifier_parameters,
    ACTIONS(251), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(39), 2,
      sym_constant,
      aux_sym_modifier_parameter_repeat1,
  [947] = 7,
    ACTIONS(235), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      aux_sym_modifier_parameter_token1,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      sym_modifier_parameters,
    STATE(84), 1,
      sym_modifier_parameter,
    STATE(45), 2,
      sym_constant,
      aux_sym_modifier_parameter_repeat1,
  [970] = 1,
    ACTIONS(257), 8,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym__condition_inner_token1,
      anon_sym_LBRACE_DOLLAR,
  [981] = 1,
    ACTIONS(259), 8,
      anon_sym_LF,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_LBRACK,
      sym_comment,
      sym_single_line_comment,
  [992] = 6,
    ACTIONS(261), 1,
      anon_sym_LF,
    ACTIONS(263), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(265), 1,
      aux_sym_value_token1,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_multiline_value_repeat2,
    STATE(57), 2,
      sym_constant,
      aux_sym_multiline_value_repeat1,
  [1012] = 6,
    ACTIONS(263), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(265), 1,
      aux_sym_value_token1,
    ACTIONS(269), 1,
      anon_sym_LF,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_multiline_value_repeat2,
    STATE(57), 2,
      sym_constant,
      aux_sym_multiline_value_repeat1,
  [1032] = 6,
    ACTIONS(263), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(273), 1,
      anon_sym_LF,
    ACTIONS(275), 1,
      aux_sym_value_token1,
    ACTIONS(277), 1,
      sym_cobject,
    STATE(111), 1,
      sym_value,
    STATE(64), 2,
      sym_constant,
      aux_sym_value_repeat1,
  [1052] = 4,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_condition,
    STATE(52), 2,
      sym__condition_segment,
      aux_sym__condition_line_repeat1,
    ACTIONS(279), 3,
      anon_sym_LF,
      sym_comment,
      sym_single_line_comment,
  [1068] = 6,
    ACTIONS(284), 1,
      anon_sym_LF,
    ACTIONS(287), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(290), 1,
      aux_sym_value_token1,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_multiline_value_repeat2,
    STATE(57), 2,
      sym_constant,
      aux_sym_multiline_value_repeat1,
  [1088] = 6,
    ACTIONS(235), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      aux_sym_modifier_parameter_token1,
    STATE(59), 1,
      sym_modifier_parameters,
    STATE(101), 1,
      sym_modifier_parameter,
    STATE(45), 2,
      sym_constant,
      aux_sym_modifier_parameter_repeat1,
  [1108] = 4,
    ACTIONS(295), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(297), 1,
      anon_sym_SQUOTE,
    ACTIONS(299), 1,
      aux_sym_string_token2,
    STATE(68), 2,
      sym_constant,
      aux_sym_string_repeat2,
  [1122] = 1,
    ACTIONS(301), 5,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_modifier_parameter_token1,
  [1130] = 4,
    ACTIONS(263), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(303), 1,
      anon_sym_LF,
    ACTIONS(305), 1,
      aux_sym_value_token1,
    STATE(72), 2,
      sym_constant,
      aux_sym_multiline_value_repeat1,
  [1144] = 1,
    ACTIONS(307), 5,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_modifier_parameter_token1,
  [1152] = 1,
    ACTIONS(309), 5,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_modifier_parameter_token1,
  [1160] = 4,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(313), 1,
      aux_sym_string_token1,
    STATE(70), 2,
      sym_constant,
      aux_sym_string_repeat1,
  [1174] = 1,
    ACTIONS(315), 5,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_modifier_parameter_token1,
  [1182] = 4,
    ACTIONS(311), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(313), 1,
      aux_sym_string_token1,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    STATE(70), 2,
      sym_constant,
      aux_sym_string_repeat1,
  [1196] = 4,
    ACTIONS(295), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      aux_sym_string_token2,
    STATE(67), 2,
      sym_constant,
      aux_sym_string_repeat2,
  [1210] = 4,
    ACTIONS(263), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(323), 1,
      anon_sym_LF,
    ACTIONS(325), 1,
      aux_sym_value_token1,
    STATE(65), 2,
      sym_constant,
      aux_sym_value_repeat1,
  [1224] = 4,
    ACTIONS(327), 1,
      anon_sym_LF,
    ACTIONS(329), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(332), 1,
      aux_sym_value_token1,
    STATE(65), 2,
      sym_constant,
      aux_sym_value_repeat1,
  [1238] = 1,
    ACTIONS(231), 5,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_modifier_parameter_token1,
  [1246] = 4,
    ACTIONS(295), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(299), 1,
      aux_sym_string_token2,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    STATE(68), 2,
      sym_constant,
      aux_sym_string_repeat2,
  [1260] = 4,
    ACTIONS(335), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(338), 1,
      anon_sym_SQUOTE,
    ACTIONS(340), 1,
      aux_sym_string_token2,
    STATE(68), 2,
      sym_constant,
      aux_sym_string_repeat2,
  [1274] = 4,
    ACTIONS(295), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(343), 1,
      anon_sym_SQUOTE,
    ACTIONS(345), 1,
      aux_sym_string_token2,
    STATE(55), 2,
      sym_constant,
      aux_sym_string_repeat2,
  [1288] = 4,
    ACTIONS(347), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      aux_sym_string_token1,
    STATE(70), 2,
      sym_constant,
      aux_sym_string_repeat1,
  [1302] = 4,
    ACTIONS(311), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(355), 1,
      aux_sym_string_token1,
    STATE(60), 2,
      sym_constant,
      aux_sym_string_repeat1,
  [1316] = 4,
    ACTIONS(357), 1,
      anon_sym_LF,
    ACTIONS(359), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(362), 1,
      aux_sym_value_token1,
    STATE(72), 2,
      sym_constant,
      aux_sym_multiline_value_repeat1,
  [1330] = 4,
    ACTIONS(311), 1,
      anon_sym_LBRACE_DOLLAR,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
    ACTIONS(365), 1,
      aux_sym_string_token1,
    STATE(62), 2,
      sym_constant,
      aux_sym_string_repeat1,
  [1344] = 3,
    ACTIONS(245), 1,
      anon_sym_LF,
    STATE(116), 1,
      sym__comments,
    ACTIONS(249), 2,
      sym_comment,
      sym_single_line_comment,
  [1355] = 1,
    ACTIONS(367), 4,
      anon_sym_LF,
      anon_sym_LBRACK,
      sym_comment,
      sym_single_line_comment,
  [1362] = 1,
    ACTIONS(369), 4,
      anon_sym_LF,
      anon_sym_LBRACK,
      sym_comment,
      sym_single_line_comment,
  [1369] = 1,
    ACTIONS(293), 4,
      anon_sym_LF,
      anon_sym_LBRACE_DOLLAR,
      aux_sym_value_token1,
      anon_sym_RPAREN,
  [1376] = 3,
    ACTIONS(371), 1,
      anon_sym_LF,
    STATE(124), 1,
      sym__comments,
    ACTIONS(373), 2,
      sym_comment,
      sym_single_line_comment,
  [1387] = 3,
    ACTIONS(375), 1,
      anon_sym_LF,
    STATE(115), 1,
      sym__comments,
    ACTIONS(377), 2,
      sym_comment,
      sym_single_line_comment,
  [1398] = 3,
    ACTIONS(379), 1,
      anon_sym_LF,
    STATE(107), 1,
      sym__comments,
    ACTIONS(381), 2,
      sym_comment,
      sym_single_line_comment,
  [1409] = 3,
    ACTIONS(383), 1,
      anon_sym_LF,
    STATE(125), 1,
      sym__comments,
    ACTIONS(385), 2,
      sym_comment,
      sym_single_line_comment,
  [1420] = 3,
    ACTIONS(387), 1,
      anon_sym_LF,
    STATE(118), 1,
      sym__comments,
    ACTIONS(389), 2,
      sym_comment,
      sym_single_line_comment,
  [1431] = 1,
    ACTIONS(391), 3,
      anon_sym_LF,
      sym_comment,
      sym_single_line_comment,
  [1437] = 3,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_modifier_parameters_repeat1,
  [1447] = 1,
    ACTIONS(397), 3,
      anon_sym_LF,
      sym_comment,
      sym_single_line_comment,
  [1453] = 1,
    ACTIONS(399), 3,
      anon_sym_LF,
      sym_comment,
      sym_single_line_comment,
  [1459] = 3,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_modifier_parameters_repeat1,
  [1469] = 1,
    ACTIONS(231), 3,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_SQUOTE,
      aux_sym_string_token2,
  [1475] = 3,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      anon_sym_SQUOTE,
    STATE(105), 1,
      sym_string,
  [1485] = 1,
    ACTIONS(231), 3,
      anon_sym_LBRACE_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
  [1491] = 3,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_modifier_parameters_repeat1,
  [1501] = 1,
    ACTIONS(409), 3,
      anon_sym_LF,
      sym_comment,
      sym_single_line_comment,
  [1507] = 3,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym_string,
  [1517] = 3,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_modifier_parameters_repeat1,
  [1527] = 1,
    ACTIONS(417), 3,
      anon_sym_LF,
      sym_comment,
      sym_single_line_comment,
  [1533] = 3,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    STATE(31), 1,
      sym_string,
  [1543] = 1,
    ACTIONS(231), 3,
      anon_sym_LF,
      anon_sym_LBRACE_DOLLAR,
      aux_sym_value_token1,
  [1549] = 1,
    ACTIONS(419), 3,
      anon_sym_LF,
      sym_comment,
      sym_single_line_comment,
  [1555] = 3,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym_modifier_parameters_repeat1,
  [1565] = 2,
    ACTIONS(106), 1,
      aux_sym_import_legacy_token2,
    ACTIONS(108), 1,
      anon_sym_GT,
  [1572] = 1,
    ACTIONS(421), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1577] = 2,
    ACTIONS(110), 1,
      aux_sym_import_legacy_token2,
    ACTIONS(112), 1,
      anon_sym_GT,
  [1584] = 1,
    ACTIONS(426), 2,
      sym_modifier_predefined,
      sym_modifier_function,
  [1589] = 2,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_modifier_parameters,
  [1596] = 2,
    ACTIONS(430), 1,
      anon_sym_GT,
    ACTIONS(432), 1,
      aux_sym_import_legacy_token2,
  [1603] = 1,
    ACTIONS(434), 1,
      anon_sym_EQ,
  [1607] = 1,
    ACTIONS(436), 1,
      anon_sym_LF,
  [1611] = 1,
    ACTIONS(438), 1,
      anon_sym_GT,
  [1615] = 1,
    ACTIONS(440), 1,
      aux_sym_constant_token1,
  [1619] = 1,
    ACTIONS(442), 1,
      sym_modifier_function,
  [1623] = 1,
    ACTIONS(444), 1,
      anon_sym_LF,
  [1627] = 1,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
  [1631] = 1,
    ACTIONS(448), 1,
      aux_sym_import_legacy_token1,
  [1635] = 1,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
  [1639] = 1,
    ACTIONS(452), 1,
      anon_sym_LF,
  [1643] = 1,
    ACTIONS(454), 1,
      anon_sym_LF,
  [1647] = 1,
    ACTIONS(456), 1,
      anon_sym_LF,
  [1651] = 1,
    ACTIONS(458), 1,
      anon_sym_LF,
  [1655] = 1,
    ACTIONS(460), 1,
      anon_sym_source_EQ,
  [1659] = 1,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
  [1663] = 1,
    ACTIONS(464), 1,
      anon_sym_INCLUDE_TYPOSCRIPT,
  [1667] = 1,
    ACTIONS(466), 1,
      sym_identifier,
  [1671] = 1,
    ACTIONS(468), 1,
      sym_identifier,
  [1675] = 1,
    ACTIONS(470), 1,
      anon_sym_LF,
  [1679] = 1,
    ACTIONS(472), 1,
      anon_sym_LF,
  [1683] = 1,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
  [1687] = 1,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
  [1691] = 1,
    ACTIONS(478), 1,
      anon_sym_RBRACE,
  [1695] = 1,
    ACTIONS(480), 1,
      anon_sym_COLON,
  [1699] = 1,
    ACTIONS(482), 1,
      aux_sym_constant_token1,
  [1703] = 1,
    ACTIONS(484), 1,
      aux_sym_constant_token1,
  [1707] = 1,
    ACTIONS(486), 1,
      aux_sym_constant_token1,
  [1711] = 1,
    ACTIONS(488), 1,
      aux_sym_constant_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 150,
  [SMALL_STATE(6)] = 187,
  [SMALL_STATE(7)] = 224,
  [SMALL_STATE(8)] = 256,
  [SMALL_STATE(9)] = 288,
  [SMALL_STATE(10)] = 315,
  [SMALL_STATE(11)] = 342,
  [SMALL_STATE(12)] = 369,
  [SMALL_STATE(13)] = 386,
  [SMALL_STATE(14)] = 403,
  [SMALL_STATE(15)] = 419,
  [SMALL_STATE(16)] = 435,
  [SMALL_STATE(17)] = 451,
  [SMALL_STATE(18)] = 467,
  [SMALL_STATE(19)] = 491,
  [SMALL_STATE(20)] = 507,
  [SMALL_STATE(21)] = 523,
  [SMALL_STATE(22)] = 539,
  [SMALL_STATE(23)] = 555,
  [SMALL_STATE(24)] = 571,
  [SMALL_STATE(25)] = 587,
  [SMALL_STATE(26)] = 603,
  [SMALL_STATE(27)] = 619,
  [SMALL_STATE(28)] = 635,
  [SMALL_STATE(29)] = 651,
  [SMALL_STATE(30)] = 667,
  [SMALL_STATE(31)] = 683,
  [SMALL_STATE(32)] = 699,
  [SMALL_STATE(33)] = 715,
  [SMALL_STATE(34)] = 739,
  [SMALL_STATE(35)] = 754,
  [SMALL_STATE(36)] = 769,
  [SMALL_STATE(37)] = 784,
  [SMALL_STATE(38)] = 812,
  [SMALL_STATE(39)] = 828,
  [SMALL_STATE(40)] = 849,
  [SMALL_STATE(41)] = 860,
  [SMALL_STATE(42)] = 871,
  [SMALL_STATE(43)] = 894,
  [SMALL_STATE(44)] = 905,
  [SMALL_STATE(45)] = 926,
  [SMALL_STATE(46)] = 947,
  [SMALL_STATE(47)] = 970,
  [SMALL_STATE(48)] = 981,
  [SMALL_STATE(49)] = 992,
  [SMALL_STATE(50)] = 1012,
  [SMALL_STATE(51)] = 1032,
  [SMALL_STATE(52)] = 1052,
  [SMALL_STATE(53)] = 1068,
  [SMALL_STATE(54)] = 1088,
  [SMALL_STATE(55)] = 1108,
  [SMALL_STATE(56)] = 1122,
  [SMALL_STATE(57)] = 1130,
  [SMALL_STATE(58)] = 1144,
  [SMALL_STATE(59)] = 1152,
  [SMALL_STATE(60)] = 1160,
  [SMALL_STATE(61)] = 1174,
  [SMALL_STATE(62)] = 1182,
  [SMALL_STATE(63)] = 1196,
  [SMALL_STATE(64)] = 1210,
  [SMALL_STATE(65)] = 1224,
  [SMALL_STATE(66)] = 1238,
  [SMALL_STATE(67)] = 1246,
  [SMALL_STATE(68)] = 1260,
  [SMALL_STATE(69)] = 1274,
  [SMALL_STATE(70)] = 1288,
  [SMALL_STATE(71)] = 1302,
  [SMALL_STATE(72)] = 1316,
  [SMALL_STATE(73)] = 1330,
  [SMALL_STATE(74)] = 1344,
  [SMALL_STATE(75)] = 1355,
  [SMALL_STATE(76)] = 1362,
  [SMALL_STATE(77)] = 1369,
  [SMALL_STATE(78)] = 1376,
  [SMALL_STATE(79)] = 1387,
  [SMALL_STATE(80)] = 1398,
  [SMALL_STATE(81)] = 1409,
  [SMALL_STATE(82)] = 1420,
  [SMALL_STATE(83)] = 1431,
  [SMALL_STATE(84)] = 1437,
  [SMALL_STATE(85)] = 1447,
  [SMALL_STATE(86)] = 1453,
  [SMALL_STATE(87)] = 1459,
  [SMALL_STATE(88)] = 1469,
  [SMALL_STATE(89)] = 1475,
  [SMALL_STATE(90)] = 1485,
  [SMALL_STATE(91)] = 1491,
  [SMALL_STATE(92)] = 1501,
  [SMALL_STATE(93)] = 1507,
  [SMALL_STATE(94)] = 1517,
  [SMALL_STATE(95)] = 1527,
  [SMALL_STATE(96)] = 1533,
  [SMALL_STATE(97)] = 1543,
  [SMALL_STATE(98)] = 1549,
  [SMALL_STATE(99)] = 1555,
  [SMALL_STATE(100)] = 1565,
  [SMALL_STATE(101)] = 1572,
  [SMALL_STATE(102)] = 1577,
  [SMALL_STATE(103)] = 1584,
  [SMALL_STATE(104)] = 1589,
  [SMALL_STATE(105)] = 1596,
  [SMALL_STATE(106)] = 1603,
  [SMALL_STATE(107)] = 1607,
  [SMALL_STATE(108)] = 1611,
  [SMALL_STATE(109)] = 1615,
  [SMALL_STATE(110)] = 1619,
  [SMALL_STATE(111)] = 1623,
  [SMALL_STATE(112)] = 1627,
  [SMALL_STATE(113)] = 1631,
  [SMALL_STATE(114)] = 1635,
  [SMALL_STATE(115)] = 1639,
  [SMALL_STATE(116)] = 1643,
  [SMALL_STATE(117)] = 1647,
  [SMALL_STATE(118)] = 1651,
  [SMALL_STATE(119)] = 1655,
  [SMALL_STATE(120)] = 1659,
  [SMALL_STATE(121)] = 1663,
  [SMALL_STATE(122)] = 1667,
  [SMALL_STATE(123)] = 1671,
  [SMALL_STATE(124)] = 1675,
  [SMALL_STATE(125)] = 1679,
  [SMALL_STATE(126)] = 1683,
  [SMALL_STATE(127)] = 1687,
  [SMALL_STATE(128)] = 1691,
  [SMALL_STATE(129)] = 1695,
  [SMALL_STATE(130)] = 1699,
  [SMALL_STATE(131)] = 1703,
  [SMALL_STATE(132)] = 1707,
  [SMALL_STATE(133)] = 1711,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typoscript, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(121),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(33),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(95),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(117),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(37),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typoscript_repeat1, 2), SHIFT_REPEAT(96),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typoscript, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_block_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_block_repeat1, 2), SHIFT_REPEAT(4),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_block_repeat1, 2), SHIFT_REPEAT(121),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_block_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_block_repeat1, 2), SHIFT_REPEAT(37),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_block_repeat1, 2), SHIFT_REPEAT(96),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_block, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_block, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_block, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_block, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_inner, 2), SHIFT_REPEAT(41),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_inner, 2), SHIFT_REPEAT(18),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__condition_inner, 2),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_inner, 2), SHIFT_REPEAT(11),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__condition_inner, 2), SHIFT_REPEAT(109),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modification_line, 5),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modification_line, 5),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 5),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 5),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_line, 4, .production_id = 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_line, 4, .production_id = 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_line, 4, .production_id = 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_line, 4, .production_id = 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion_line, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deletion_line, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion_line, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deletion_line, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_line, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_line, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_line, 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_line, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_line, 5, .production_id = 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_line, 5, .production_id = 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_line, 5, .production_id = 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_line, 5, .production_id = 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modification_line, 6),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modification_line, 6),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_line, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_line, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_block, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_configuration_block, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_legacy, 7),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_legacy, 7),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_line, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_line, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, .production_id = 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, .production_id = 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_legacy, 11, .production_id = 7),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_legacy, 11, .production_id = 7),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_line, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_line, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_end, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_end, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_line, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__condition_line, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_segment, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifier_parameter_repeat1, 2), SHIFT_REPEAT(133),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifier_parameter_repeat1, 2), SHIFT_REPEAT(46),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifier_parameter_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifier_parameter_repeat1, 2), SHIFT_REPEAT(39),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_bool, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__condition_inner, 1, .production_id = 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_parameter, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__condition_line_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__condition_line_repeat1, 2), SHIFT_REPEAT(33),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_value_repeat2, 2), SHIFT_REPEAT(53),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_value_repeat2, 2), SHIFT_REPEAT(130),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_value_repeat2, 2), SHIFT_REPEAT(57),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_value_repeat2, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_parameters, 4),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_parameters, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifier_parameter_repeat1, 1, .production_id = 6),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_parameters, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(130),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(65),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(132),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(68),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(131),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(70),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_value_repeat1, 2),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_value_repeat1, 2), SHIFT_REPEAT(130),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_value_repeat1, 2), SHIFT_REPEAT(72),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition_segment, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_bool, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_value, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_value, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_parameters, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_parameters, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_else, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_parameters, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifier_parameters_repeat1, 2),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifier_parameters_repeat1, 2), SHIFT_REPEAT(54),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [450] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_typoscript() {
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

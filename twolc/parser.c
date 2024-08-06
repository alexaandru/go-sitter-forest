#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 140
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 19

enum ts_symbol_identifiers {
  sym_semicolon = 1,
  sym_alphabet_header = 2,
  sym_diacritics_header = 3,
  sym_rule_variables_header = 4,
  sym_sets_header = 5,
  sym_eq = 6,
  sym_definitions_header = 7,
  sym_rules_header = 8,
  anon_sym_EQ_GT = 9,
  anon_sym_LT_EQ = 10,
  anon_sym_LT_EQ_GT = 11,
  anon_sym_SLASH_LT_EQ = 12,
  anon_sym_EQ_EQ_GT = 13,
  anon_sym_LT_EQ_EQ = 14,
  anon_sym_LT_EQ_EQ_GT = 15,
  anon_sym_SLASH_LT_EQ_EQ = 16,
  anon_sym_LT_LBRACK = 17,
  anon_sym_RBRACK_GT = 18,
  sym_rule_name = 19,
  sym_locus = 20,
  sym_except = 21,
  sym_where = 22,
  anon_sym_mixed = 23,
  anon_sym_matched = 24,
  sym_in_keyword = 25,
  sym_lpar = 26,
  sym_rpar = 27,
  sym_loptional = 28,
  sym_roptional = 29,
  sym_prefix_op = 30,
  sym_suffix_op = 31,
  sym_ignore_op = 32,
  sym_bool_op = 33,
  sym_replace_op = 34,
  sym_compose_op = 35,
  sym_word_boundary = 36,
  sym_any = 37,
  sym_symbol = 38,
  sym__imm_sym = 39,
  sym_colon = 40,
  anon_sym_COLON = 41,
  sym_comment = 42,
  sym_source_file = 43,
  sym_alphabet = 44,
  sym_diacritics = 45,
  sym_rule_variables = 46,
  sym_sets = 47,
  sym_set = 48,
  sym_definitions = 49,
  sym_definition = 50,
  sym_rules = 51,
  sym_arrow = 52,
  sym_regex_arrow = 53,
  sym_rule = 54,
  sym_regex_target = 55,
  sym_positive_contexts = 56,
  sym_negative_contexts = 57,
  sym_context = 58,
  sym_variable_keyword = 59,
  sym_variables = 60,
  sym_pattern = 61,
  sym_symbol_pair = 62,
  aux_sym_source_file_repeat1 = 63,
  aux_sym_alphabet_repeat1 = 64,
  aux_sym_diacritics_repeat1 = 65,
  aux_sym_sets_repeat1 = 66,
  aux_sym_set_repeat1 = 67,
  aux_sym_definitions_repeat1 = 68,
  aux_sym_rules_repeat1 = 69,
  aux_sym_positive_contexts_repeat1 = 70,
  aux_sym_variables_repeat1 = 71,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_semicolon] = "semicolon",
  [sym_alphabet_header] = "alphabet_header",
  [sym_diacritics_header] = "diacritics_header",
  [sym_rule_variables_header] = "rule_variables_header",
  [sym_sets_header] = "sets_header",
  [sym_eq] = "eq",
  [sym_definitions_header] = "definitions_header",
  [sym_rules_header] = "rules_header",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_SLASH_LT_EQ] = "/<=",
  [anon_sym_EQ_EQ_GT] = "==>",
  [anon_sym_LT_EQ_EQ] = "<==",
  [anon_sym_LT_EQ_EQ_GT] = "<==>",
  [anon_sym_SLASH_LT_EQ_EQ] = "/<==",
  [anon_sym_LT_LBRACK] = "<[",
  [anon_sym_RBRACK_GT] = "]>",
  [sym_rule_name] = "rule_name",
  [sym_locus] = "locus",
  [sym_except] = "except",
  [sym_where] = "where",
  [anon_sym_mixed] = "mixed",
  [anon_sym_matched] = "matched",
  [sym_in_keyword] = "in_keyword",
  [sym_lpar] = "lpar",
  [sym_rpar] = "rpar",
  [sym_loptional] = "loptional",
  [sym_roptional] = "roptional",
  [sym_prefix_op] = "prefix_op",
  [sym_suffix_op] = "suffix_op",
  [sym_ignore_op] = "ignore_op",
  [sym_bool_op] = "bool_op",
  [sym_replace_op] = "replace_op",
  [sym_compose_op] = "compose_op",
  [sym_word_boundary] = "word_boundary",
  [sym_any] = "any",
  [sym_symbol] = "symbol",
  [sym__imm_sym] = "symbol",
  [sym_colon] = "colon",
  [anon_sym_COLON] = "colon",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_alphabet] = "alphabet",
  [sym_diacritics] = "diacritics",
  [sym_rule_variables] = "rule_variables",
  [sym_sets] = "sets",
  [sym_set] = "set",
  [sym_definitions] = "definitions",
  [sym_definition] = "definition",
  [sym_rules] = "rules",
  [sym_arrow] = "arrow",
  [sym_regex_arrow] = "regex_arrow",
  [sym_rule] = "rule",
  [sym_regex_target] = "regex_target",
  [sym_positive_contexts] = "positive_contexts",
  [sym_negative_contexts] = "negative_contexts",
  [sym_context] = "context",
  [sym_variable_keyword] = "variable_keyword",
  [sym_variables] = "variables",
  [sym_pattern] = "pattern",
  [sym_symbol_pair] = "symbol_pair",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_alphabet_repeat1] = "alphabet_repeat1",
  [aux_sym_diacritics_repeat1] = "diacritics_repeat1",
  [aux_sym_sets_repeat1] = "sets_repeat1",
  [aux_sym_set_repeat1] = "set_repeat1",
  [aux_sym_definitions_repeat1] = "definitions_repeat1",
  [aux_sym_rules_repeat1] = "rules_repeat1",
  [aux_sym_positive_contexts_repeat1] = "positive_contexts_repeat1",
  [aux_sym_variables_repeat1] = "variables_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_semicolon] = sym_semicolon,
  [sym_alphabet_header] = sym_alphabet_header,
  [sym_diacritics_header] = sym_diacritics_header,
  [sym_rule_variables_header] = sym_rule_variables_header,
  [sym_sets_header] = sym_sets_header,
  [sym_eq] = sym_eq,
  [sym_definitions_header] = sym_definitions_header,
  [sym_rules_header] = sym_rules_header,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
  [anon_sym_SLASH_LT_EQ] = anon_sym_SLASH_LT_EQ,
  [anon_sym_EQ_EQ_GT] = anon_sym_EQ_EQ_GT,
  [anon_sym_LT_EQ_EQ] = anon_sym_LT_EQ_EQ,
  [anon_sym_LT_EQ_EQ_GT] = anon_sym_LT_EQ_EQ_GT,
  [anon_sym_SLASH_LT_EQ_EQ] = anon_sym_SLASH_LT_EQ_EQ,
  [anon_sym_LT_LBRACK] = anon_sym_LT_LBRACK,
  [anon_sym_RBRACK_GT] = anon_sym_RBRACK_GT,
  [sym_rule_name] = sym_rule_name,
  [sym_locus] = sym_locus,
  [sym_except] = sym_except,
  [sym_where] = sym_where,
  [anon_sym_mixed] = anon_sym_mixed,
  [anon_sym_matched] = anon_sym_matched,
  [sym_in_keyword] = sym_in_keyword,
  [sym_lpar] = sym_lpar,
  [sym_rpar] = sym_rpar,
  [sym_loptional] = sym_loptional,
  [sym_roptional] = sym_roptional,
  [sym_prefix_op] = sym_prefix_op,
  [sym_suffix_op] = sym_suffix_op,
  [sym_ignore_op] = sym_ignore_op,
  [sym_bool_op] = sym_bool_op,
  [sym_replace_op] = sym_replace_op,
  [sym_compose_op] = sym_compose_op,
  [sym_word_boundary] = sym_word_boundary,
  [sym_any] = sym_any,
  [sym_symbol] = sym_symbol,
  [sym__imm_sym] = sym_symbol,
  [sym_colon] = sym_colon,
  [anon_sym_COLON] = sym_colon,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_alphabet] = sym_alphabet,
  [sym_diacritics] = sym_diacritics,
  [sym_rule_variables] = sym_rule_variables,
  [sym_sets] = sym_sets,
  [sym_set] = sym_set,
  [sym_definitions] = sym_definitions,
  [sym_definition] = sym_definition,
  [sym_rules] = sym_rules,
  [sym_arrow] = sym_arrow,
  [sym_regex_arrow] = sym_regex_arrow,
  [sym_rule] = sym_rule,
  [sym_regex_target] = sym_regex_target,
  [sym_positive_contexts] = sym_positive_contexts,
  [sym_negative_contexts] = sym_negative_contexts,
  [sym_context] = sym_context,
  [sym_variable_keyword] = sym_variable_keyword,
  [sym_variables] = sym_variables,
  [sym_pattern] = sym_pattern,
  [sym_symbol_pair] = sym_symbol_pair,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_alphabet_repeat1] = aux_sym_alphabet_repeat1,
  [aux_sym_diacritics_repeat1] = aux_sym_diacritics_repeat1,
  [aux_sym_sets_repeat1] = aux_sym_sets_repeat1,
  [aux_sym_set_repeat1] = aux_sym_set_repeat1,
  [aux_sym_definitions_repeat1] = aux_sym_definitions_repeat1,
  [aux_sym_rules_repeat1] = aux_sym_rules_repeat1,
  [aux_sym_positive_contexts_repeat1] = aux_sym_positive_contexts_repeat1,
  [aux_sym_variables_repeat1] = aux_sym_variables_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_semicolon] = {
    .visible = true,
    .named = true,
  },
  [sym_alphabet_header] = {
    .visible = true,
    .named = true,
  },
  [sym_diacritics_header] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_variables_header] = {
    .visible = true,
    .named = true,
  },
  [sym_sets_header] = {
    .visible = true,
    .named = true,
  },
  [sym_eq] = {
    .visible = true,
    .named = true,
  },
  [sym_definitions_header] = {
    .visible = true,
    .named = true,
  },
  [sym_rules_header] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_LT_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_rule_name] = {
    .visible = true,
    .named = true,
  },
  [sym_locus] = {
    .visible = true,
    .named = true,
  },
  [sym_except] = {
    .visible = true,
    .named = true,
  },
  [sym_where] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mixed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_matched] = {
    .visible = true,
    .named = false,
  },
  [sym_in_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_lpar] = {
    .visible = true,
    .named = true,
  },
  [sym_rpar] = {
    .visible = true,
    .named = true,
  },
  [sym_loptional] = {
    .visible = true,
    .named = true,
  },
  [sym_roptional] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_op] = {
    .visible = true,
    .named = true,
  },
  [sym_suffix_op] = {
    .visible = true,
    .named = true,
  },
  [sym_ignore_op] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_op] = {
    .visible = true,
    .named = true,
  },
  [sym_replace_op] = {
    .visible = true,
    .named = true,
  },
  [sym_compose_op] = {
    .visible = true,
    .named = true,
  },
  [sym_word_boundary] = {
    .visible = true,
    .named = true,
  },
  [sym_any] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym__imm_sym] = {
    .visible = true,
    .named = true,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_alphabet] = {
    .visible = true,
    .named = true,
  },
  [sym_diacritics] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_variables] = {
    .visible = true,
    .named = true,
  },
  [sym_sets] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_definitions] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_rules] = {
    .visible = true,
    .named = true,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_target] = {
    .visible = true,
    .named = true,
  },
  [sym_positive_contexts] = {
    .visible = true,
    .named = true,
  },
  [sym_negative_contexts] = {
    .visible = true,
    .named = true,
  },
  [sym_context] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_variables] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_pair] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alphabet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diacritics_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sets_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_set_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_definitions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rules_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_positive_contexts_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variables_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arrow = 1,
  field_contexts = 2,
  field_left = 3,
  field_locus = 4,
  field_name = 5,
  field_neg_contexts = 6,
  field_pattern = 7,
  field_right = 8,
  field_set = 9,
  field_target = 10,
  field_type = 11,
  field_variables = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arrow] = "arrow",
  [field_contexts] = "contexts",
  [field_left] = "left",
  [field_locus] = "locus",
  [field_name] = "name",
  [field_neg_contexts] = "neg_contexts",
  [field_pattern] = "pattern",
  [field_right] = "right",
  [field_set] = "set",
  [field_target] = "target",
  [field_type] = "type",
  [field_variables] = "variables",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 4},
  [7] = {.index = 11, .length = 1},
  [8] = {.index = 12, .length = 5},
  [9] = {.index = 17, .length = 5},
  [10] = {.index = 22, .length = 2},
  [11] = {.index = 24, .length = 6},
  [12] = {.index = 30, .length = 2},
  [13] = {.index = 32, .length = 2},
  [14] = {.index = 34, .length = 4},
  [15] = {.index = 38, .length = 3},
  [16] = {.index = 41, .length = 2},
  [17] = {.index = 43, .length = 3},
  [18] = {.index = 46, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
  [1] =
    {field_right, 1},
  [2] =
    {field_left, 0},
    {field_right, 2},
  [4] =
    {field_name, 0},
  [5] =
    {field_name, 0},
    {field_pattern, 2},
  [7] =
    {field_arrow, 2},
    {field_contexts, 3},
    {field_name, 0},
    {field_target, 1},
  [11] =
    {field_locus, 0},
  [12] =
    {field_arrow, 2},
    {field_contexts, 3},
    {field_name, 0},
    {field_neg_contexts, 4},
    {field_target, 1},
  [17] =
    {field_arrow, 2},
    {field_contexts, 3},
    {field_name, 0},
    {field_target, 1},
    {field_variables, 4},
  [22] =
    {field_locus, 0},
    {field_right, 1},
  [24] =
    {field_arrow, 2},
    {field_contexts, 3},
    {field_name, 0},
    {field_neg_contexts, 4},
    {field_target, 1},
    {field_variables, 5},
  [30] =
    {field_left, 0},
    {field_locus, 1},
  [32] =
    {field_name, 1, .inherited = true},
    {field_set, 1, .inherited = true},
  [34] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_set, 0, .inherited = true},
    {field_set, 1, .inherited = true},
  [38] =
    {field_left, 0},
    {field_locus, 1},
    {field_right, 2},
  [41] =
    {field_name, 0},
    {field_set, 2},
  [43] =
    {field_name, 1, .inherited = true},
    {field_set, 1, .inherited = true},
    {field_type, 2},
  [46] =
    {field_name, 0},
    {field_set, 2},
    {field_set, 3},
    {field_set, 4},
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
  [19] = 11,
  [20] = 13,
  [21] = 21,
  [22] = 22,
  [23] = 5,
  [24] = 7,
  [25] = 3,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 26,
  [31] = 27,
  [32] = 32,
  [33] = 22,
  [34] = 28,
  [35] = 6,
  [36] = 2,
  [37] = 37,
  [38] = 4,
  [39] = 10,
  [40] = 9,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 8,
  [47] = 17,
  [48] = 44,
  [49] = 43,
  [50] = 41,
  [51] = 42,
  [52] = 18,
  [53] = 15,
  [54] = 12,
  [55] = 16,
  [56] = 56,
  [57] = 45,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 62,
  [64] = 59,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 67,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 72,
  [75] = 75,
  [76] = 68,
  [77] = 73,
  [78] = 70,
  [79] = 66,
  [80] = 80,
  [81] = 75,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 8,
  [89] = 45,
  [90] = 90,
  [91] = 91,
  [92] = 9,
  [93] = 93,
  [94] = 16,
  [95] = 17,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
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
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
};

static TSCharacterRange sym_symbol_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'#', '#'}, {'%', '%'}, {'\'', '\''}, {',', ','}, {'.', '.'}, {'0', '9'},
  {'>', '>'}, {'@', 'Z'}, {'`', '{'}, {'}', '}'}, {0x7f, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(103);
      ADVANCE_MAP(
        '!', 215,
        '"', 97,
        '(', 142,
        ')', 143,
        '.', 17,
        '/', 151,
        ':', 214,
        ';', 104,
        '<', 23,
        '=', 112,
        '?', 160,
        'A', 70,
        'D', 50,
        'R', 92,
        'S', 51,
        '[', 140,
        ']', 141,
        '^', 148,
        '_', 130,
        'e', 94,
        'i', 73,
        'm', 38,
        'w', 61,
        '*', 145,
        '+', 145,
        '$', 144,
        '\\', 144,
        '~', 144,
        '&', 152,
        '-', 152,
        '|', 152,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(102);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 215,
        '%', 98,
        '(', 142,
        ')', 143,
        '-', 153,
        '.', 161,
        '/', 150,
        ':', 214,
        ';', 104,
        '=', 34,
        '?', 160,
        '[', 140,
        ']', 35,
        '^', 148,
        '_', 130,
        '&', 152,
        '|', 152,
        '*', 145,
        '+', 145,
        '$', 144,
        '\\', 144,
        '~', 144,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0 &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < ':' || '=' < lookahead)) ADVANCE(208);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 215,
        '%', 98,
        '(', 142,
        ')', 143,
        '-', 153,
        '.', 161,
        '/', 150,
        ':', 213,
        ';', 104,
        '=', 34,
        '?', 160,
        '[', 140,
        ']', 35,
        '^', 148,
        '_', 130,
        '&', 152,
        '|', 152,
        '*', 145,
        '+', 145,
        '$', 144,
        '\\', 144,
        '~', 144,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0 &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < ':' || '=' < lookahead)) ADVANCE(208);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 215,
        '%', 98,
        '(', 142,
        '-', 153,
        '.', 161,
        '/', 150,
        ':', 214,
        '=', 34,
        '?', 160,
        '[', 140,
        ']', 141,
        '^', 148,
        '&', 152,
        '|', 152,
        '*', 145,
        '+', 145,
        '$', 144,
        '\\', 144,
        '~', 144,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0 &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '(' || '+' < lookahead) &&
          (lookahead < ':' || '=' < lookahead) &&
          (lookahead < '[' || '_' < lookahead)) ADVANCE(208);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 215,
        '%', 98,
        '(', 142,
        '-', 153,
        '.', 161,
        '/', 150,
        ':', 213,
        '=', 34,
        '?', 160,
        '[', 140,
        ']', 141,
        '^', 148,
        '&', 152,
        '|', 152,
        '*', 145,
        '+', 145,
        '$', 144,
        '\\', 144,
        '~', 144,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0 &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '(' || '+' < lookahead) &&
          (lookahead < ':' || '=' < lookahead) &&
          (lookahead < '[' || '_' < lookahead)) ADVANCE(208);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '!', 215,
        '%', 98,
        '(', 142,
        '.', 162,
        ':', 213,
        ';', 104,
        '=', 111,
        '?', 160,
        '[', 140,
        '_', 130,
        '$', 144,
        '\\', 144,
        '~', 144,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '!', 215,
        '%', 98,
        '(', 142,
        '/', 21,
        ':', 213,
        ';', 104,
        '<', 29,
        '=', 36,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '!', 215,
        '%', 98,
        '/', 21,
        ':', 214,
        ';', 104,
        '<', 28,
        '=', 36,
        'D', 177,
        'R', 205,
        'S', 180,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(215);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '!', 215,
        '%', 98,
        '/', 21,
        ';', 104,
        '<', 28,
        '=', 36,
        'D', 177,
        'R', 205,
        'S', 180,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(215);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == ';') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(215);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead == ';') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(215);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == 'm') ADVANCE(167);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '!', 215,
        '%', 99,
        '(', 142,
        ')', 143,
        '-', 153,
        '.', 209,
        '/', 150,
        ':', 213,
        ';', 104,
        '=', 34,
        '?', 160,
        '[', 140,
        ']', 35,
        '^', 148,
        '_', 130,
        '&', 152,
        '|', 152,
        '*', 145,
        '+', 145,
        '$', 144,
        '\\', 144,
        '~', 144,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0 &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < ':' || '=' < lookahead)) ADVANCE(212);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '!', 215,
        '%', 99,
        '(', 142,
        '-', 153,
        '.', 209,
        '/', 150,
        ':', 213,
        '=', 34,
        '?', 160,
        '[', 140,
        ']', 141,
        '^', 148,
        '&', 152,
        '|', 152,
        '*', 145,
        '+', 145,
        '$', 144,
        '\\', 144,
        '~', 144,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0 &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '(' || '+' < lookahead) &&
          (lookahead < ':' || '=' < lookahead) &&
          (lookahead < '[' || '_' < lookahead)) ADVANCE(212);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(215);
      if (lookahead == '%') ADVANCE(99);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(212);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'o' ||
          lookahead == 'x') ADVANCE(20);
      if (lookahead == 'i' ||
          lookahead == 'l' ||
          lookahead == 'r' ||
          lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(157);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(155);
      END_STATE();
    case 21:
      if (lookahead == '<') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == '<') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(118);
      if (lookahead == '[') ADVANCE(127);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(119);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(119);
      if (lookahead == '[') ADVANCE(127);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(123);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(154);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(128);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(117);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(59);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(65);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(37);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(57);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 77:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 78:
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 93:
      if (lookahead == 'v') ADVANCE(41);
      END_STATE();
    case 94:
      if (lookahead == 'x') ADVANCE(46);
      END_STATE();
    case 95:
      if (lookahead == 'x') ADVANCE(54);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 97:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(16);
      END_STATE();
    case 98:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 99:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 100:
      if (eof) ADVANCE(103);
      ADVANCE_MAP(
        '!', 215,
        '"', 97,
        '%', 98,
        '(', 142,
        '.', 162,
        '/', 22,
        ':', 213,
        ';', 104,
        '<', 31,
        '=', 24,
        '?', 160,
        '[', 140,
        '_', 130,
        'e', 206,
        'w', 183,
        '$', 144,
        '\\', 144,
        '~', 144,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(100);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '(' || '+' < lookahead) &&
          (lookahead < '-' || '/' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '|') ADVANCE(208);
      END_STATE();
    case 101:
      if (eof) ADVANCE(103);
      ADVANCE_MAP(
        '!', 215,
        '"', 97,
        '%', 98,
        '(', 142,
        '.', 162,
        '/', 21,
        ':', 213,
        ';', 104,
        '<', 28,
        '=', 36,
        '?', 160,
        '[', 140,
        '_', 130,
        'w', 183,
        '$', 144,
        '\\', 144,
        '~', 144,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(101);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '(' || '+' < lookahead) &&
          (lookahead < '-' || '/' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '|') ADVANCE(208);
      END_STATE();
    case 102:
      if (eof) ADVANCE(103);
      ADVANCE_MAP(
        '!', 215,
        '"', 97,
        '(', 142,
        ')', 143,
        '.', 17,
        '/', 151,
        ':', 213,
        ';', 104,
        '<', 23,
        '=', 112,
        '?', 160,
        'A', 70,
        'D', 50,
        'R', 92,
        'S', 51,
        '[', 140,
        ']', 141,
        '^', 148,
        '_', 130,
        'e', 94,
        'i', 73,
        'm', 38,
        'w', 61,
        '*', 145,
        '+', 145,
        '$', 144,
        '\\', 144,
        '~', 144,
        '&', 152,
        '-', 152,
        '|', 152,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_alphabet_header);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_diacritics_header);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_diacritics_header);
      if (lookahead == '%') ADVANCE(98);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_rule_variables_header);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_sets_header);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_sets_header);
      if (lookahead == '%') ADVANCE(98);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_eq);
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_definitions_header);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_definitions_header);
      if (lookahead == '%') ADVANCE(98);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_rules_header);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_rules_header);
      if (lookahead == '%') ADVANCE(98);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '>') ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SLASH_LT_EQ);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SLASH_LT_EQ);
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_GT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LT_EQ_EQ);
      if (lookahead == '>') ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LT_EQ_EQ_GT);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_SLASH_LT_EQ_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LT_LBRACK);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_RBRACK_GT);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_rule_name);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_locus);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_except);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_except);
      if (lookahead == '%') ADVANCE(98);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_where);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_where);
      if (lookahead == '%') ADVANCE(98);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_mixed);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_mixed);
      if (lookahead == '%') ADVANCE(98);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_matched);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_matched);
      if (lookahead == '%') ADVANCE(98);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_in_keyword);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_lpar);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_rpar);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_loptional);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_roptional);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_prefix_op);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_suffix_op);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_suffix_op);
      if (lookahead == '%') ADVANCE(98);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_suffix_op);
      if (lookahead == ',') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_suffix_op);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_suffix_op);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_ignore_op);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_ignore_op);
      if (lookahead == '<') ADVANCE(25);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_bool_op);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_bool_op);
      if (lookahead == '>') ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_replace_op);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_compose_op);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_compose_op);
      if (lookahead == '%') ADVANCE(98);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_word_boundary);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_word_boundary);
      if (lookahead == '%') ADVANCE(98);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_word_boundary);
      if (lookahead == '%') ADVANCE(99);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(212);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_any);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_symbol);
      ADVANCE_MAP(
        '#', 164,
        '%', 98,
        'o', 165,
        'x', 165,
        'i', 146,
        'l', 146,
        'r', 146,
        'u', 146,
      );
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(164);
      if (lookahead == '%') ADVANCE(98);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == 's') ADVANCE(116);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '.') ADVANCE(158);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '.') ADVANCE(156);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(169);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'i') ADVANCE(207);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(175);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(196);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(198);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(184);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(136);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(138);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(195);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(194);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(134);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(166);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(163);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(172);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(201);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(173);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(185);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'h') ADVANCE(174);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'h') ADVANCE(181);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(191);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(193);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(170);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(202);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(204);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(178);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(188);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(199);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(192);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(200);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(176);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(189);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 's') ADVANCE(110);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 's') ADVANCE(107);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 's') ADVANCE(114);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 't') ADVANCE(132);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 't') ADVANCE(197);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 't') ADVANCE(186);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 't') ADVANCE(171);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 't') ADVANCE(187);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(190);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'x') ADVANCE(168);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == 'x') ADVANCE(179);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '%') ADVANCE(98);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__imm_sym);
      ADVANCE_MAP(
        '#', 211,
        '%', 99,
        'o', 210,
        'x', 210,
        'i', 212,
        'l', 212,
        'r', 212,
        'u', 212,
      );
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(212);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__imm_sym);
      if (lookahead == '%') ADVANCE(99);
      if (lookahead == '.') ADVANCE(212);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__imm_sym);
      if (lookahead == '%') ADVANCE(99);
      if (lookahead == '.') ADVANCE(159);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__imm_sym);
      if (lookahead == '%') ADVANCE(99);
      if ((!eof && set_contains(sym_symbol_character_set_1, 13, lookahead))) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 100},
  [22] = {.lex_state = 100},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 101},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 101},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 100},
  [42] = {.lex_state = 100},
  [43] = {.lex_state = 100},
  [44] = {.lex_state = 100},
  [45] = {.lex_state = 100},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 101},
  [49] = {.lex_state = 101},
  [50] = {.lex_state = 101},
  [51] = {.lex_state = 101},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 101},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 15},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 15},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 100},
  [103] = {.lex_state = 101},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 100},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [sym_alphabet_header] = ACTIONS(1),
    [sym_diacritics_header] = ACTIONS(1),
    [sym_rule_variables_header] = ACTIONS(1),
    [sym_sets_header] = ACTIONS(1),
    [sym_eq] = ACTIONS(1),
    [sym_definitions_header] = ACTIONS(1),
    [sym_rules_header] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_SLASH_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_GT] = ACTIONS(1),
    [anon_sym_LT_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(1),
    [anon_sym_SLASH_LT_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT_LBRACK] = ACTIONS(1),
    [sym_rule_name] = ACTIONS(1),
    [sym_locus] = ACTIONS(1),
    [sym_except] = ACTIONS(1),
    [sym_where] = ACTIONS(1),
    [anon_sym_mixed] = ACTIONS(1),
    [anon_sym_matched] = ACTIONS(1),
    [sym_in_keyword] = ACTIONS(1),
    [sym_lpar] = ACTIONS(1),
    [sym_rpar] = ACTIONS(1),
    [sym_loptional] = ACTIONS(1),
    [sym_roptional] = ACTIONS(1),
    [sym_prefix_op] = ACTIONS(1),
    [sym_suffix_op] = ACTIONS(1),
    [sym_ignore_op] = ACTIONS(1),
    [sym_bool_op] = ACTIONS(1),
    [sym_compose_op] = ACTIONS(1),
    [sym_word_boundary] = ACTIONS(1),
    [sym_any] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(139),
    [sym_alphabet] = STATE(60),
    [sym_alphabet_header] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    STATE(2), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
    ACTIONS(13), 4,
      sym_bool_op,
      sym_compose_op,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(7), 10,
      sym_semicolon,
      anon_sym_RBRACK_GT,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_replace_op,
      sym_any,
      sym_colon,
  [34] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(2), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
    ACTIONS(13), 5,
      sym_suffix_op,
      sym_bool_op,
      sym_compose_op,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(7), 11,
      sym_semicolon,
      anon_sym_RBRACK_GT,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_any,
      sym_colon,
  [64] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_suffix_op,
    STATE(2), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
    ACTIONS(17), 4,
      sym_bool_op,
      sym_compose_op,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(15), 11,
      sym_semicolon,
      anon_sym_RBRACK_GT,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_any,
      sym_colon,
  [96] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    STATE(2), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
    ACTIONS(17), 2,
      sym_bool_op,
      sym_compose_op,
    ACTIONS(15), 5,
      sym_semicolon,
      anon_sym_RBRACK_GT,
      sym_locus,
      sym_roptional,
      sym_replace_op,
  [144] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(17), 1,
      sym_compose_op,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    ACTIONS(33), 1,
      sym_bool_op,
    STATE(2), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
    ACTIONS(15), 5,
      sym_semicolon,
      anon_sym_RBRACK_GT,
      sym_locus,
      sym_roptional,
      sym_replace_op,
  [194] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(17), 1,
      sym_compose_op,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    ACTIONS(33), 1,
      sym_bool_op,
    ACTIONS(35), 1,
      sym_replace_op,
    STATE(2), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
    ACTIONS(15), 4,
      sym_semicolon,
      anon_sym_RBRACK_GT,
      sym_locus,
      sym_roptional,
  [246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym__imm_sym,
    ACTIONS(39), 5,
      sym_suffix_op,
      sym_bool_op,
      sym_compose_op,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(37), 11,
      sym_semicolon,
      anon_sym_RBRACK_GT,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_any,
      sym_colon,
  [273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym__imm_sym,
    ACTIONS(45), 5,
      sym_suffix_op,
      sym_bool_op,
      sym_compose_op,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(43), 11,
      sym_semicolon,
      anon_sym_RBRACK_GT,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_any,
      sym_colon,
  [300] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_COLON,
    ACTIONS(51), 6,
      sym_suffix_op,
      sym_bool_op,
      sym_compose_op,
      sym_word_boundary,
      sym_symbol,
      sym_colon,
    ACTIONS(49), 10,
      sym_semicolon,
      anon_sym_RBRACK_GT,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_any,
  [327] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    ACTIONS(33), 1,
      sym_bool_op,
    ACTIONS(35), 1,
      sym_replace_op,
    ACTIONS(55), 1,
      sym_semicolon,
    ACTIONS(57), 1,
      sym_compose_op,
    STATE(2), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
    STATE(41), 1,
      aux_sym_set_repeat1,
  [379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 5,
      sym_suffix_op,
      sym_bool_op,
      sym_compose_op,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(49), 11,
      sym_semicolon,
      anon_sym_RBRACK_GT,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_any,
      sym_colon,
  [403] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    ACTIONS(33), 1,
      sym_bool_op,
    ACTIONS(35), 1,
      sym_replace_op,
    ACTIONS(57), 1,
      sym_compose_op,
    ACTIONS(59), 1,
      sym_semicolon,
    STATE(2), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
    STATE(48), 1,
      aux_sym_set_repeat1,
  [455] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    ACTIONS(33), 1,
      sym_bool_op,
    ACTIONS(35), 1,
      sym_replace_op,
    ACTIONS(57), 1,
      sym_compose_op,
    ACTIONS(61), 1,
      sym_semicolon,
    STATE(2), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
    STATE(91), 1,
      aux_sym_set_repeat1,
  [507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 5,
      sym_suffix_op,
      sym_bool_op,
      sym_compose_op,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(7), 11,
      sym_semicolon,
      anon_sym_RBRACK_GT,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_any,
      sym_colon,
  [531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 5,
      sym_suffix_op,
      sym_bool_op,
      sym_compose_op,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(63), 11,
      sym_semicolon,
      anon_sym_RBRACK_GT,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_any,
      sym_colon,
  [555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 5,
      sym_suffix_op,
      sym_bool_op,
      sym_compose_op,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(67), 11,
      sym_semicolon,
      anon_sym_RBRACK_GT,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_any,
      sym_colon,
  [579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 5,
      sym_suffix_op,
      sym_bool_op,
      sym_compose_op,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(15), 11,
      sym_semicolon,
      anon_sym_RBRACK_GT,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_roptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_any,
      sym_colon,
  [603] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    ACTIONS(33), 1,
      sym_bool_op,
    ACTIONS(35), 1,
      sym_replace_op,
    ACTIONS(57), 1,
      sym_compose_op,
    ACTIONS(71), 1,
      sym_semicolon,
    STATE(2), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
    STATE(50), 1,
      aux_sym_set_repeat1,
  [655] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    ACTIONS(33), 1,
      sym_bool_op,
    ACTIONS(35), 1,
      sym_replace_op,
    ACTIONS(57), 1,
      sym_compose_op,
    ACTIONS(73), 1,
      sym_semicolon,
    STATE(2), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
    STATE(44), 1,
      aux_sym_set_repeat1,
  [707] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    ACTIONS(77), 1,
      sym_locus,
    STATE(12), 1,
      sym_symbol_pair,
    STATE(28), 1,
      sym_pattern,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_rule_name,
    ACTIONS(79), 2,
      sym_except,
      sym_where,
    STATE(22), 2,
      sym_context,
      aux_sym_positive_contexts_repeat1,
  [753] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_locus,
    ACTIONS(88), 1,
      sym_lpar,
    ACTIONS(91), 1,
      sym_loptional,
    ACTIONS(94), 1,
      sym_prefix_op,
    ACTIONS(97), 1,
      sym_word_boundary,
    ACTIONS(100), 1,
      sym_any,
    ACTIONS(103), 1,
      sym_symbol,
    ACTIONS(106), 1,
      sym_colon,
    STATE(12), 1,
      sym_symbol_pair,
    STATE(28), 1,
      sym_pattern,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym_rule_name,
    ACTIONS(86), 2,
      sym_except,
      sym_where,
    STATE(22), 2,
      sym_context,
      aux_sym_positive_contexts_repeat1,
  [799] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_lpar,
    ACTIONS(111), 1,
      sym_loptional,
    ACTIONS(113), 1,
      sym_prefix_op,
    ACTIONS(115), 1,
      sym_suffix_op,
    ACTIONS(117), 1,
      sym_ignore_op,
    ACTIONS(119), 1,
      sym_word_boundary,
    ACTIONS(121), 1,
      sym_any,
    ACTIONS(123), 1,
      sym_symbol,
    ACTIONS(125), 1,
      sym_colon,
    STATE(36), 1,
      sym_pattern,
    STATE(54), 1,
      sym_symbol_pair,
    ACTIONS(15), 2,
      sym_rpar,
      sym_replace_op,
    ACTIONS(17), 2,
      sym_bool_op,
      sym_compose_op,
  [844] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_rpar,
    ACTIONS(17), 1,
      sym_compose_op,
    ACTIONS(109), 1,
      sym_lpar,
    ACTIONS(111), 1,
      sym_loptional,
    ACTIONS(113), 1,
      sym_prefix_op,
    ACTIONS(115), 1,
      sym_suffix_op,
    ACTIONS(117), 1,
      sym_ignore_op,
    ACTIONS(119), 1,
      sym_word_boundary,
    ACTIONS(121), 1,
      sym_any,
    ACTIONS(123), 1,
      sym_symbol,
    ACTIONS(125), 1,
      sym_colon,
    ACTIONS(127), 1,
      sym_bool_op,
    ACTIONS(129), 1,
      sym_replace_op,
    STATE(36), 1,
      sym_pattern,
    STATE(54), 1,
      sym_symbol_pair,
  [893] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 1,
      sym_pattern,
    STATE(54), 1,
      sym_symbol_pair,
    ACTIONS(13), 5,
      sym_suffix_op,
      sym_bool_op,
      sym_compose_op,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(7), 8,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_any,
      sym_colon,
  [920] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_lpar,
    ACTIONS(111), 1,
      sym_loptional,
    ACTIONS(113), 1,
      sym_prefix_op,
    ACTIONS(115), 1,
      sym_suffix_op,
    ACTIONS(117), 1,
      sym_ignore_op,
    ACTIONS(119), 1,
      sym_word_boundary,
    ACTIONS(121), 1,
      sym_any,
    ACTIONS(123), 1,
      sym_symbol,
    ACTIONS(125), 1,
      sym_colon,
    ACTIONS(127), 1,
      sym_bool_op,
    ACTIONS(129), 1,
      sym_replace_op,
    ACTIONS(131), 1,
      sym_rpar,
    ACTIONS(133), 1,
      sym_compose_op,
    STATE(36), 1,
      sym_pattern,
    STATE(54), 1,
      sym_symbol_pair,
  [969] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    ACTIONS(33), 1,
      sym_bool_op,
    ACTIONS(35), 1,
      sym_replace_op,
    ACTIONS(57), 1,
      sym_compose_op,
    ACTIONS(131), 1,
      sym_roptional,
    STATE(2), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
  [1018] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    ACTIONS(33), 1,
      sym_bool_op,
    ACTIONS(35), 1,
      sym_replace_op,
    ACTIONS(57), 1,
      sym_compose_op,
    ACTIONS(135), 1,
      sym_locus,
    STATE(2), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
  [1067] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    ACTIONS(139), 1,
      sym_locus,
    ACTIONS(141), 1,
      sym_where,
    STATE(12), 1,
      sym_symbol_pair,
    STATE(34), 1,
      sym_pattern,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      sym_rule_name,
    STATE(33), 2,
      sym_context,
      aux_sym_positive_contexts_repeat1,
  [1112] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_lpar,
    ACTIONS(111), 1,
      sym_loptional,
    ACTIONS(113), 1,
      sym_prefix_op,
    ACTIONS(115), 1,
      sym_suffix_op,
    ACTIONS(117), 1,
      sym_ignore_op,
    ACTIONS(119), 1,
      sym_word_boundary,
    ACTIONS(121), 1,
      sym_any,
    ACTIONS(123), 1,
      sym_symbol,
    ACTIONS(125), 1,
      sym_colon,
    ACTIONS(127), 1,
      sym_bool_op,
    ACTIONS(129), 1,
      sym_replace_op,
    ACTIONS(133), 1,
      sym_compose_op,
    ACTIONS(143), 1,
      sym_rpar,
    STATE(36), 1,
      sym_pattern,
    STATE(54), 1,
      sym_symbol_pair,
  [1161] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    ACTIONS(33), 1,
      sym_bool_op,
    ACTIONS(35), 1,
      sym_replace_op,
    ACTIONS(57), 1,
      sym_compose_op,
    ACTIONS(143), 1,
      sym_roptional,
    STATE(2), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
  [1210] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    ACTIONS(33), 1,
      sym_bool_op,
    ACTIONS(35), 1,
      sym_replace_op,
    ACTIONS(57), 1,
      sym_compose_op,
    ACTIONS(145), 1,
      sym_roptional,
    STATE(2), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
  [1259] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_where,
    ACTIONS(88), 1,
      sym_lpar,
    ACTIONS(91), 1,
      sym_loptional,
    ACTIONS(94), 1,
      sym_prefix_op,
    ACTIONS(97), 1,
      sym_word_boundary,
    ACTIONS(100), 1,
      sym_any,
    ACTIONS(103), 1,
      sym_symbol,
    ACTIONS(106), 1,
      sym_colon,
    ACTIONS(147), 1,
      sym_locus,
    STATE(12), 1,
      sym_symbol_pair,
    STATE(34), 1,
      sym_pattern,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym_rule_name,
    STATE(33), 2,
      sym_context,
      aux_sym_positive_contexts_repeat1,
  [1304] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    ACTIONS(33), 1,
      sym_bool_op,
    ACTIONS(35), 1,
      sym_replace_op,
    ACTIONS(57), 1,
      sym_compose_op,
    ACTIONS(150), 1,
      sym_locus,
    STATE(2), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
  [1353] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_compose_op,
    ACTIONS(109), 1,
      sym_lpar,
    ACTIONS(111), 1,
      sym_loptional,
    ACTIONS(113), 1,
      sym_prefix_op,
    ACTIONS(115), 1,
      sym_suffix_op,
    ACTIONS(117), 1,
      sym_ignore_op,
    ACTIONS(119), 1,
      sym_word_boundary,
    ACTIONS(121), 1,
      sym_any,
    ACTIONS(123), 1,
      sym_symbol,
    ACTIONS(125), 1,
      sym_colon,
    ACTIONS(127), 1,
      sym_bool_op,
    STATE(36), 1,
      sym_pattern,
    STATE(54), 1,
      sym_symbol_pair,
    ACTIONS(15), 2,
      sym_rpar,
      sym_replace_op,
  [1400] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym_suffix_op,
    ACTIONS(117), 1,
      sym_ignore_op,
    STATE(36), 1,
      sym_pattern,
    STATE(54), 1,
      sym_symbol_pair,
    ACTIONS(13), 4,
      sym_bool_op,
      sym_compose_op,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(7), 7,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_prefix_op,
      sym_replace_op,
      sym_any,
      sym_colon,
  [1431] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_suffix_op,
    ACTIONS(11), 1,
      sym_ignore_op,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    ACTIONS(33), 1,
      sym_bool_op,
    ACTIONS(35), 1,
      sym_replace_op,
    ACTIONS(57), 1,
      sym_compose_op,
    ACTIONS(152), 1,
      anon_sym_RBRACK_GT,
    STATE(2), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
  [1480] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym_suffix_op,
    STATE(36), 1,
      sym_pattern,
    STATE(54), 1,
      sym_symbol_pair,
    ACTIONS(17), 4,
      sym_bool_op,
      sym_compose_op,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(15), 8,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_any,
      sym_colon,
  [1509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_COLON,
    ACTIONS(51), 6,
      sym_suffix_op,
      sym_bool_op,
      sym_compose_op,
      sym_word_boundary,
      sym_symbol,
      sym_colon,
    ACTIONS(49), 7,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_any,
  [1533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__imm_sym,
    ACTIONS(45), 5,
      sym_suffix_op,
      sym_bool_op,
      sym_compose_op,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(43), 8,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_any,
      sym_colon,
  [1557] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym_semicolon,
    STATE(45), 1,
      aux_sym_set_repeat1,
    ACTIONS(162), 4,
      sym_except,
      sym_where,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(158), 8,
      ts_builtin_sym_end,
      sym_rule_name,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_any,
      sym_colon,
  [1583] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym_semicolon,
    STATE(45), 1,
      aux_sym_set_repeat1,
    ACTIONS(166), 4,
      sym_except,
      sym_where,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(164), 8,
      ts_builtin_sym_end,
      sym_rule_name,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_any,
      sym_colon,
  [1609] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym_semicolon,
    STATE(45), 1,
      aux_sym_set_repeat1,
    ACTIONS(170), 4,
      sym_except,
      sym_where,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(168), 8,
      ts_builtin_sym_end,
      sym_rule_name,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_any,
      sym_colon,
  [1635] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym_semicolon,
    STATE(45), 1,
      aux_sym_set_repeat1,
    ACTIONS(174), 4,
      sym_except,
      sym_where,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(172), 8,
      ts_builtin_sym_end,
      sym_rule_name,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_any,
      sym_colon,
  [1661] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_semicolon,
    STATE(45), 1,
      aux_sym_set_repeat1,
    ACTIONS(181), 4,
      sym_except,
      sym_where,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(176), 8,
      ts_builtin_sym_end,
      sym_rule_name,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_any,
      sym_colon,
  [1687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym__imm_sym,
    ACTIONS(39), 5,
      sym_suffix_op,
      sym_bool_op,
      sym_compose_op,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(37), 8,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_any,
      sym_colon,
  [1711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 5,
      sym_suffix_op,
      sym_bool_op,
      sym_compose_op,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(67), 8,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_any,
      sym_colon,
  [1732] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_semicolon,
    STATE(57), 1,
      aux_sym_set_repeat1,
    ACTIONS(174), 3,
      sym_where,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(172), 8,
      ts_builtin_sym_end,
      sym_rule_name,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_any,
      sym_colon,
  [1757] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_semicolon,
    STATE(57), 1,
      aux_sym_set_repeat1,
    ACTIONS(170), 3,
      sym_where,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(168), 8,
      ts_builtin_sym_end,
      sym_rule_name,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_any,
      sym_colon,
  [1782] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_semicolon,
    STATE(57), 1,
      aux_sym_set_repeat1,
    ACTIONS(162), 3,
      sym_where,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(158), 8,
      ts_builtin_sym_end,
      sym_rule_name,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_any,
      sym_colon,
  [1807] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_semicolon,
    STATE(57), 1,
      aux_sym_set_repeat1,
    ACTIONS(166), 3,
      sym_where,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(164), 8,
      ts_builtin_sym_end,
      sym_rule_name,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_any,
      sym_colon,
  [1832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 5,
      sym_suffix_op,
      sym_bool_op,
      sym_compose_op,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(15), 8,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_any,
      sym_colon,
  [1853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 5,
      sym_suffix_op,
      sym_bool_op,
      sym_compose_op,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(7), 8,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_any,
      sym_colon,
  [1874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 5,
      sym_suffix_op,
      sym_bool_op,
      sym_compose_op,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(49), 8,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_any,
      sym_colon,
  [1895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 5,
      sym_suffix_op,
      sym_bool_op,
      sym_compose_op,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(63), 8,
      sym_lpar,
      sym_rpar,
      sym_loptional,
      sym_prefix_op,
      sym_ignore_op,
      sym_replace_op,
      sym_any,
      sym_colon,
  [1916] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    ACTIONS(77), 1,
      sym_locus,
    STATE(12), 1,
      sym_symbol_pair,
    STATE(28), 1,
      sym_pattern,
    STATE(99), 1,
      sym_positive_contexts,
    STATE(21), 2,
      sym_context,
      aux_sym_positive_contexts_repeat1,
  [1957] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_semicolon,
    STATE(57), 1,
      aux_sym_set_repeat1,
    ACTIONS(181), 3,
      sym_where,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(176), 8,
      ts_builtin_sym_end,
      sym_rule_name,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_any,
      sym_colon,
  [1982] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    ACTIONS(139), 1,
      sym_locus,
    STATE(12), 1,
      sym_symbol_pair,
    STATE(34), 1,
      sym_pattern,
    STATE(29), 2,
      sym_context,
      aux_sym_positive_contexts_repeat1,
  [2020] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    ACTIONS(190), 1,
      sym_semicolon,
    STATE(12), 1,
      sym_symbol_pair,
    STATE(20), 1,
      sym_pattern,
    STATE(43), 1,
      aux_sym_set_repeat1,
  [2057] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_diacritics_header,
    ACTIONS(194), 1,
      sym_rule_variables_header,
    ACTIONS(196), 1,
      sym_sets_header,
    ACTIONS(198), 1,
      sym_definitions_header,
    ACTIONS(200), 1,
      sym_rules_header,
    STATE(135), 1,
      sym_rules,
    STATE(61), 5,
      sym_diacritics,
      sym_rule_variables,
      sym_sets,
      sym_definitions,
      aux_sym_source_file_repeat1,
  [2086] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_diacritics_header,
    ACTIONS(194), 1,
      sym_rule_variables_header,
    ACTIONS(196), 1,
      sym_sets_header,
    ACTIONS(198), 1,
      sym_definitions_header,
    ACTIONS(200), 1,
      sym_rules_header,
    STATE(137), 1,
      sym_rules,
    STATE(65), 5,
      sym_diacritics,
      sym_rule_variables,
      sym_sets,
      sym_definitions,
      aux_sym_source_file_repeat1,
  [2115] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    ACTIONS(202), 1,
      sym_semicolon,
    STATE(12), 1,
      sym_symbol_pair,
    STATE(19), 1,
      sym_pattern,
    STATE(51), 1,
      aux_sym_set_repeat1,
  [2152] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    ACTIONS(204), 1,
      sym_semicolon,
    STATE(11), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
    STATE(42), 1,
      aux_sym_set_repeat1,
  [2189] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    ACTIONS(206), 1,
      sym_semicolon,
    STATE(12), 1,
      sym_symbol_pair,
    STATE(13), 1,
      sym_pattern,
    STATE(49), 1,
      aux_sym_set_repeat1,
  [2226] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym_diacritics_header,
    ACTIONS(211), 1,
      sym_rule_variables_header,
    ACTIONS(214), 1,
      sym_sets_header,
    ACTIONS(217), 1,
      sym_definitions_header,
    ACTIONS(220), 1,
      sym_rules_header,
    STATE(65), 5,
      sym_diacritics,
      sym_rule_variables,
      sym_sets,
      sym_definitions,
      aux_sym_source_file_repeat1,
  [2252] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    STATE(7), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
  [2283] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_lpar,
    ACTIONS(111), 1,
      sym_loptional,
    ACTIONS(113), 1,
      sym_prefix_op,
    ACTIONS(119), 1,
      sym_word_boundary,
    ACTIONS(121), 1,
      sym_any,
    ACTIONS(123), 1,
      sym_symbol,
    ACTIONS(125), 1,
      sym_colon,
    STATE(23), 1,
      sym_pattern,
    STATE(54), 1,
      sym_symbol_pair,
  [2314] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    STATE(4), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
  [2345] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    STATE(5), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
  [2376] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    STATE(6), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
  [2407] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    STATE(12), 1,
      sym_symbol_pair,
    STATE(32), 1,
      sym_pattern,
  [2438] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    STATE(12), 1,
      sym_symbol_pair,
    STATE(27), 1,
      sym_pattern,
  [2469] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    STATE(3), 1,
      sym_pattern,
    STATE(12), 1,
      sym_symbol_pair,
  [2500] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    STATE(12), 1,
      sym_symbol_pair,
    STATE(31), 1,
      sym_pattern,
  [2531] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_lpar,
    ACTIONS(111), 1,
      sym_loptional,
    ACTIONS(113), 1,
      sym_prefix_op,
    ACTIONS(119), 1,
      sym_word_boundary,
    ACTIONS(121), 1,
      sym_any,
    ACTIONS(123), 1,
      sym_symbol,
    ACTIONS(125), 1,
      sym_colon,
    STATE(26), 1,
      sym_pattern,
    STATE(54), 1,
      sym_symbol_pair,
  [2562] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_lpar,
    ACTIONS(111), 1,
      sym_loptional,
    ACTIONS(113), 1,
      sym_prefix_op,
    ACTIONS(119), 1,
      sym_word_boundary,
    ACTIONS(121), 1,
      sym_any,
    ACTIONS(123), 1,
      sym_symbol,
    ACTIONS(125), 1,
      sym_colon,
    STATE(38), 1,
      sym_pattern,
    STATE(54), 1,
      sym_symbol_pair,
  [2593] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_lpar,
    ACTIONS(111), 1,
      sym_loptional,
    ACTIONS(113), 1,
      sym_prefix_op,
    ACTIONS(119), 1,
      sym_word_boundary,
    ACTIONS(121), 1,
      sym_any,
    ACTIONS(123), 1,
      sym_symbol,
    ACTIONS(125), 1,
      sym_colon,
    STATE(25), 1,
      sym_pattern,
    STATE(54), 1,
      sym_symbol_pair,
  [2624] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_lpar,
    ACTIONS(111), 1,
      sym_loptional,
    ACTIONS(113), 1,
      sym_prefix_op,
    ACTIONS(119), 1,
      sym_word_boundary,
    ACTIONS(121), 1,
      sym_any,
    ACTIONS(123), 1,
      sym_symbol,
    ACTIONS(125), 1,
      sym_colon,
    STATE(35), 1,
      sym_pattern,
    STATE(54), 1,
      sym_symbol_pair,
  [2655] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_lpar,
    ACTIONS(111), 1,
      sym_loptional,
    ACTIONS(113), 1,
      sym_prefix_op,
    ACTIONS(119), 1,
      sym_word_boundary,
    ACTIONS(121), 1,
      sym_any,
    ACTIONS(123), 1,
      sym_symbol,
    ACTIONS(125), 1,
      sym_colon,
    STATE(24), 1,
      sym_pattern,
    STATE(54), 1,
      sym_symbol_pair,
  [2686] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    STATE(12), 1,
      sym_symbol_pair,
    STATE(14), 1,
      sym_pattern,
  [2717] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_lpar,
    ACTIONS(111), 1,
      sym_loptional,
    ACTIONS(113), 1,
      sym_prefix_op,
    ACTIONS(119), 1,
      sym_word_boundary,
    ACTIONS(121), 1,
      sym_any,
    ACTIONS(123), 1,
      sym_symbol,
    ACTIONS(125), 1,
      sym_colon,
    STATE(30), 1,
      sym_pattern,
    STATE(54), 1,
      sym_symbol_pair,
  [2748] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_lpar,
    ACTIONS(21), 1,
      sym_loptional,
    ACTIONS(23), 1,
      sym_prefix_op,
    ACTIONS(25), 1,
      sym_word_boundary,
    ACTIONS(27), 1,
      sym_any,
    ACTIONS(29), 1,
      sym_symbol,
    ACTIONS(31), 1,
      sym_colon,
    STATE(12), 1,
      sym_symbol_pair,
    STATE(37), 1,
      sym_pattern,
  [2779] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_rule_variables_header,
    ACTIONS(226), 1,
      sym_symbol,
    STATE(86), 2,
      sym_set,
      aux_sym_sets_repeat1,
    ACTIONS(222), 4,
      sym_diacritics_header,
      sym_sets_header,
      sym_definitions_header,
      sym_rules_header,
  [2799] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_rule_variables_header,
    ACTIONS(232), 1,
      sym_symbol,
    STATE(84), 2,
      sym_definition,
      aux_sym_definitions_repeat1,
    ACTIONS(228), 4,
      sym_diacritics_header,
      sym_sets_header,
      sym_definitions_header,
      sym_rules_header,
  [2819] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_rule_variables_header,
    ACTIONS(239), 1,
      sym_symbol,
    STATE(84), 2,
      sym_definition,
      aux_sym_definitions_repeat1,
    ACTIONS(235), 4,
      sym_diacritics_header,
      sym_sets_header,
      sym_definitions_header,
      sym_rules_header,
  [2839] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_rule_variables_header,
    ACTIONS(245), 1,
      sym_symbol,
    STATE(86), 2,
      sym_set,
      aux_sym_sets_repeat1,
    ACTIONS(241), 4,
      sym_diacritics_header,
      sym_sets_header,
      sym_definitions_header,
      sym_rules_header,
  [2859] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_semicolon,
    ACTIONS(252), 1,
      sym_rule_variables_header,
    STATE(89), 1,
      aux_sym_set_repeat1,
    ACTIONS(250), 5,
      sym_diacritics_header,
      sym_sets_header,
      sym_definitions_header,
      sym_rules_header,
      sym_symbol,
  [2879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym__imm_sym,
    ACTIONS(39), 2,
      anon_sym_LT_EQ,
      sym_symbol,
    ACTIONS(37), 5,
      sym_semicolon,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
      sym_colon,
  [2897] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_rule_variables_header,
    ACTIONS(256), 1,
      sym_semicolon,
    STATE(89), 1,
      aux_sym_set_repeat1,
    ACTIONS(181), 5,
      sym_diacritics_header,
      sym_sets_header,
      sym_definitions_header,
      sym_rules_header,
      sym_symbol,
  [2917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 2,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(259), 6,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_any,
      sym_colon,
  [2933] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_semicolon,
    ACTIONS(265), 1,
      sym_rule_variables_header,
    STATE(89), 1,
      aux_sym_set_repeat1,
    ACTIONS(263), 5,
      sym_diacritics_header,
      sym_sets_header,
      sym_definitions_header,
      sym_rules_header,
      sym_symbol,
  [2953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym__imm_sym,
    ACTIONS(45), 2,
      anon_sym_LT_EQ,
      sym_symbol,
    ACTIONS(43), 5,
      sym_semicolon,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
      sym_colon,
  [2971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 2,
      sym_word_boundary,
      sym_symbol,
    ACTIONS(269), 6,
      sym_locus,
      sym_lpar,
      sym_loptional,
      sym_prefix_op,
      sym_any,
      sym_colon,
  [2987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LT_EQ,
    ACTIONS(63), 6,
      sym_semicolon,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
      sym_symbol,
      sym_colon,
  [3002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LT_EQ,
    ACTIONS(67), 6,
      sym_semicolon,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
      sym_symbol,
      sym_colon,
  [3017] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LT_EQ,
    ACTIONS(277), 1,
      anon_sym_COLON,
    STATE(56), 1,
      sym_arrow,
    ACTIONS(273), 3,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
  [3035] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_semicolon,
    ACTIONS(281), 1,
      sym_symbol,
    ACTIONS(283), 1,
      sym_colon,
    STATE(87), 1,
      aux_sym_set_repeat1,
    STATE(100), 2,
      sym_symbol_pair,
      aux_sym_alphabet_repeat1,
  [3055] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_semicolon,
    ACTIONS(289), 1,
      sym_symbol,
    STATE(108), 1,
      aux_sym_variables_repeat1,
    STATE(138), 1,
      sym_variable_keyword,
    ACTIONS(287), 2,
      anon_sym_mixed,
      anon_sym_matched,
  [3075] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_except,
    ACTIONS(295), 1,
      sym_where,
    STATE(111), 1,
      sym_negative_contexts,
    STATE(125), 1,
      sym_variables,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      sym_rule_name,
  [3095] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_semicolon,
    ACTIONS(299), 1,
      sym_symbol,
    ACTIONS(302), 1,
      sym_colon,
    STATE(100), 2,
      sym_symbol_pair,
      aux_sym_alphabet_repeat1,
  [3112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 5,
      sym_diacritics_header,
      sym_rule_variables_header,
      sym_sets_header,
      sym_definitions_header,
      sym_rules_header,
  [3123] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LT_EQ_EQ,
    STATE(56), 1,
      sym_regex_arrow,
    ACTIONS(307), 3,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_SLASH_LT_EQ_EQ,
  [3138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LT_EQ,
    STATE(56), 1,
      sym_arrow,
    ACTIONS(273), 3,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_SLASH_LT_EQ,
  [3153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 5,
      sym_diacritics_header,
      sym_rule_variables_header,
      sym_sets_header,
      sym_definitions_header,
      sym_rules_header,
  [3164] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_colon,
    ACTIONS(313), 1,
      anon_sym_LT_LBRACK,
    ACTIONS(315), 1,
      sym_symbol,
    STATE(102), 1,
      sym_regex_target,
    STATE(103), 1,
      sym_symbol_pair,
  [3183] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym_symbol,
    ACTIONS(283), 1,
      sym_colon,
    ACTIONS(317), 1,
      sym_semicolon,
    STATE(100), 2,
      sym_symbol_pair,
      aux_sym_alphabet_repeat1,
  [3200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 5,
      sym_diacritics_header,
      sym_rule_variables_header,
      sym_sets_header,
      sym_definitions_header,
      sym_rules_header,
  [3211] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_semicolon,
    ACTIONS(325), 1,
      sym_symbol,
    STATE(108), 1,
      aux_sym_variables_repeat1,
    ACTIONS(323), 2,
      anon_sym_mixed,
      anon_sym_matched,
  [3228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_COLON,
    ACTIONS(330), 1,
      sym_colon,
    ACTIONS(328), 2,
      sym_semicolon,
      sym_symbol,
  [3242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym_semicolon,
    ACTIONS(334), 3,
      anon_sym_mixed,
      anon_sym_matched,
      sym_symbol,
  [3254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym_where,
    STATE(129), 1,
      sym_variables,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      sym_rule_name,
  [3268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 1,
      sym_rule_name,
    STATE(116), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [3282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym_semicolon,
    ACTIONS(344), 3,
      anon_sym_mixed,
      anon_sym_matched,
      sym_symbol,
  [3294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym_symbol,
    ACTIONS(283), 1,
      sym_colon,
    STATE(106), 2,
      sym_symbol_pair,
      aux_sym_alphabet_repeat1,
  [3308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym_symbol,
    ACTIONS(283), 1,
      sym_colon,
    STATE(97), 2,
      sym_symbol_pair,
      aux_sym_alphabet_repeat1,
  [3322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
    ACTIONS(348), 1,
      sym_rule_name,
    STATE(116), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [3336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LT_EQ_EQ,
    ACTIONS(351), 3,
      anon_sym_EQ_EQ_GT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_SLASH_LT_EQ_EQ,
  [3348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym_semicolon,
    ACTIONS(357), 1,
      sym_symbol,
    STATE(118), 1,
      aux_sym_diacritics_repeat1,
  [3361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym_rule_name,
    STATE(112), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [3372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_symbol,
    STATE(85), 2,
      sym_definition,
      aux_sym_definitions_repeat1,
  [3383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_symbol,
    STATE(83), 2,
      sym_set,
      aux_sym_sets_repeat1,
  [3394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_semicolon,
    ACTIONS(366), 1,
      sym_symbol,
    STATE(118), 1,
      aux_sym_diacritics_repeat1,
  [3407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym_symbol,
    ACTIONS(368), 1,
      sym_semicolon,
    STATE(118), 1,
      aux_sym_diacritics_repeat1,
  [3420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym_symbol,
    STATE(98), 1,
      aux_sym_variables_repeat1,
  [3430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 2,
      ts_builtin_sym_end,
      sym_rule_name,
  [3438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 2,
      ts_builtin_sym_end,
      sym_rule_name,
  [3446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_symbol,
    STATE(123), 1,
      aux_sym_diacritics_repeat1,
  [3456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_symbol,
    STATE(122), 1,
      aux_sym_diacritics_repeat1,
  [3466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 2,
      ts_builtin_sym_end,
      sym_rule_name,
  [3474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym_loptional,
    ACTIONS(384), 1,
      sym_symbol,
  [3484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 2,
      ts_builtin_sym_end,
      sym_rule_name,
  [3492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym_eq,
  [3499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym_in_keyword,
  [3506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_eq,
  [3513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
  [3520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_semicolon,
  [3527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      ts_builtin_sym_end,
  [3534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      sym_semicolon,
  [3541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 194,
  [SMALL_STATE(8)] = 246,
  [SMALL_STATE(9)] = 273,
  [SMALL_STATE(10)] = 300,
  [SMALL_STATE(11)] = 327,
  [SMALL_STATE(12)] = 379,
  [SMALL_STATE(13)] = 403,
  [SMALL_STATE(14)] = 455,
  [SMALL_STATE(15)] = 507,
  [SMALL_STATE(16)] = 531,
  [SMALL_STATE(17)] = 555,
  [SMALL_STATE(18)] = 579,
  [SMALL_STATE(19)] = 603,
  [SMALL_STATE(20)] = 655,
  [SMALL_STATE(21)] = 707,
  [SMALL_STATE(22)] = 753,
  [SMALL_STATE(23)] = 799,
  [SMALL_STATE(24)] = 844,
  [SMALL_STATE(25)] = 893,
  [SMALL_STATE(26)] = 920,
  [SMALL_STATE(27)] = 969,
  [SMALL_STATE(28)] = 1018,
  [SMALL_STATE(29)] = 1067,
  [SMALL_STATE(30)] = 1112,
  [SMALL_STATE(31)] = 1161,
  [SMALL_STATE(32)] = 1210,
  [SMALL_STATE(33)] = 1259,
  [SMALL_STATE(34)] = 1304,
  [SMALL_STATE(35)] = 1353,
  [SMALL_STATE(36)] = 1400,
  [SMALL_STATE(37)] = 1431,
  [SMALL_STATE(38)] = 1480,
  [SMALL_STATE(39)] = 1509,
  [SMALL_STATE(40)] = 1533,
  [SMALL_STATE(41)] = 1557,
  [SMALL_STATE(42)] = 1583,
  [SMALL_STATE(43)] = 1609,
  [SMALL_STATE(44)] = 1635,
  [SMALL_STATE(45)] = 1661,
  [SMALL_STATE(46)] = 1687,
  [SMALL_STATE(47)] = 1711,
  [SMALL_STATE(48)] = 1732,
  [SMALL_STATE(49)] = 1757,
  [SMALL_STATE(50)] = 1782,
  [SMALL_STATE(51)] = 1807,
  [SMALL_STATE(52)] = 1832,
  [SMALL_STATE(53)] = 1853,
  [SMALL_STATE(54)] = 1874,
  [SMALL_STATE(55)] = 1895,
  [SMALL_STATE(56)] = 1916,
  [SMALL_STATE(57)] = 1957,
  [SMALL_STATE(58)] = 1982,
  [SMALL_STATE(59)] = 2020,
  [SMALL_STATE(60)] = 2057,
  [SMALL_STATE(61)] = 2086,
  [SMALL_STATE(62)] = 2115,
  [SMALL_STATE(63)] = 2152,
  [SMALL_STATE(64)] = 2189,
  [SMALL_STATE(65)] = 2226,
  [SMALL_STATE(66)] = 2252,
  [SMALL_STATE(67)] = 2283,
  [SMALL_STATE(68)] = 2314,
  [SMALL_STATE(69)] = 2345,
  [SMALL_STATE(70)] = 2376,
  [SMALL_STATE(71)] = 2407,
  [SMALL_STATE(72)] = 2438,
  [SMALL_STATE(73)] = 2469,
  [SMALL_STATE(74)] = 2500,
  [SMALL_STATE(75)] = 2531,
  [SMALL_STATE(76)] = 2562,
  [SMALL_STATE(77)] = 2593,
  [SMALL_STATE(78)] = 2624,
  [SMALL_STATE(79)] = 2655,
  [SMALL_STATE(80)] = 2686,
  [SMALL_STATE(81)] = 2717,
  [SMALL_STATE(82)] = 2748,
  [SMALL_STATE(83)] = 2779,
  [SMALL_STATE(84)] = 2799,
  [SMALL_STATE(85)] = 2819,
  [SMALL_STATE(86)] = 2839,
  [SMALL_STATE(87)] = 2859,
  [SMALL_STATE(88)] = 2879,
  [SMALL_STATE(89)] = 2897,
  [SMALL_STATE(90)] = 2917,
  [SMALL_STATE(91)] = 2933,
  [SMALL_STATE(92)] = 2953,
  [SMALL_STATE(93)] = 2971,
  [SMALL_STATE(94)] = 2987,
  [SMALL_STATE(95)] = 3002,
  [SMALL_STATE(96)] = 3017,
  [SMALL_STATE(97)] = 3035,
  [SMALL_STATE(98)] = 3055,
  [SMALL_STATE(99)] = 3075,
  [SMALL_STATE(100)] = 3095,
  [SMALL_STATE(101)] = 3112,
  [SMALL_STATE(102)] = 3123,
  [SMALL_STATE(103)] = 3138,
  [SMALL_STATE(104)] = 3153,
  [SMALL_STATE(105)] = 3164,
  [SMALL_STATE(106)] = 3183,
  [SMALL_STATE(107)] = 3200,
  [SMALL_STATE(108)] = 3211,
  [SMALL_STATE(109)] = 3228,
  [SMALL_STATE(110)] = 3242,
  [SMALL_STATE(111)] = 3254,
  [SMALL_STATE(112)] = 3268,
  [SMALL_STATE(113)] = 3282,
  [SMALL_STATE(114)] = 3294,
  [SMALL_STATE(115)] = 3308,
  [SMALL_STATE(116)] = 3322,
  [SMALL_STATE(117)] = 3336,
  [SMALL_STATE(118)] = 3348,
  [SMALL_STATE(119)] = 3361,
  [SMALL_STATE(120)] = 3372,
  [SMALL_STATE(121)] = 3383,
  [SMALL_STATE(122)] = 3394,
  [SMALL_STATE(123)] = 3407,
  [SMALL_STATE(124)] = 3420,
  [SMALL_STATE(125)] = 3430,
  [SMALL_STATE(126)] = 3438,
  [SMALL_STATE(127)] = 3446,
  [SMALL_STATE(128)] = 3456,
  [SMALL_STATE(129)] = 3466,
  [SMALL_STATE(130)] = 3474,
  [SMALL_STATE(131)] = 3484,
  [SMALL_STATE(132)] = 3492,
  [SMALL_STATE(133)] = 3499,
  [SMALL_STATE(134)] = 3506,
  [SMALL_STATE(135)] = 3513,
  [SMALL_STATE(136)] = 3520,
  [SMALL_STATE(137)] = 3527,
  [SMALL_STATE(138)] = 3534,
  [SMALL_STATE(139)] = 3541,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 2, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 3, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_pair, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_pair, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_pair, 2, 0, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_pair, 2, 0, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_pair, 3, 0, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_pair, 3, 0, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_pair, 2, 0, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_pair, 2, 0, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positive_contexts, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_positive_contexts, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_positive_contexts_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_positive_contexts_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_positive_contexts_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_positive_contexts_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_positive_contexts_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_positive_contexts_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_positive_contexts_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_positive_contexts_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_positive_contexts_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_positive_contexts_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_contexts, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_contexts, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_positive_contexts_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 10),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3, 0, 10),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2, 0, 7),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 2, 0, 7),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 12),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3, 0, 12),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 15),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4, 0, 15),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_repeat1, 2, 0, 0),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_set_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sets, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sets, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_definitions_repeat1, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_definitions_repeat1, 2, 0, 0),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_definitions_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definitions, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definitions, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sets_repeat1, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sets_repeat1, 2, 0, 0),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sets_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 4, 0, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 4, 0, 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_arrow, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_arrow, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 4, 0, 5),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4, 0, 5),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, 0, 6),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alphabet_repeat1, 2, 0, 0),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alphabet_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alphabet_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diacritics, 3, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alphabet, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_variables, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2, 0, 14),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 2, 0, 14),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 2, 0, 14), SHIFT_REPEAT(133),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alphabet_repeat1, 1, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alphabet_repeat1, 1, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 3, 0, 16),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 3, 0, 16),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, 0, 8),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 2, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 5, 0, 18),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variables_repeat1, 5, 0, 18),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_target, 3, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_target, 3, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diacritics_repeat1, 2, 0, 0),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diacritics_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, 0, 9),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 4, 0, 17),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 11),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 3, 0, 13),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_keyword, 1, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [402] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_twolc(void) {
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

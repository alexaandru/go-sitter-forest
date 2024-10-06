#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 105
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 1
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 14

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_entity = 2,
  anon_sym_relation = 3,
  aux_sym_relation_association_token1 = 4,
  anon_sym_POUND = 5,
  anon_sym_action = 6,
  anon_sym_permission = 7,
  anon_sym_attribute = 8,
  anon_sym_rule = 9,
  anon_sym_COMMA = 10,
  sym_comment = 11,
  sym_identifier = 12,
  sym_open_brace = 13,
  sym_close_brace = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  sym_and_statement = 17,
  sym_or_statement = 18,
  sym_not_statement = 19,
  sym_in_statement = 20,
  sym_gt = 21,
  sym_gte = 22,
  sym_ne = 23,
  sym_lt = 24,
  sym_lte = 25,
  sym_assignment = 26,
  anon_sym_boolean = 27,
  anon_sym_LBRACK = 28,
  anon_sym_RBRACK = 29,
  anon_sym_string = 30,
  anon_sym_integer = 31,
  anon_sym_double = 32,
  anon_sym_DOT = 33,
  sym_source_file = 34,
  sym__instruction = 35,
  sym_entity_definition = 36,
  sym_relation_definition = 37,
  sym_relation_association = 38,
  sym_relation_member = 39,
  sym_action_definition = 40,
  sym_permission_definition = 41,
  sym_attribute_definition = 42,
  sym_attribute_type = 43,
  sym_rule_definition = 44,
  sym_rule_parameter = 45,
  sym_rule_conditional = 46,
  sym_call_expression = 47,
  sym_open_parenthesis = 48,
  sym_close_parenthesis = 49,
  sym_conditional_statement = 50,
  sym_boolean_type = 51,
  sym_string_type = 52,
  sym_integer_type = 53,
  sym_double_type = 54,
  sym_argument_list = 55,
  sym_selector_expression = 56,
  sym__field_identifier = 57,
  sym__expression = 58,
  aux_sym_source_file_repeat1 = 59,
  aux_sym_entity_definition_repeat1 = 60,
  aux_sym_relation_definition_repeat1 = 61,
  aux_sym_action_definition_repeat1 = 62,
  aux_sym_permission_definition_repeat1 = 63,
  aux_sym_rule_definition_repeat1 = 64,
  aux_sym_rule_conditional_repeat1 = 65,
  aux_sym_argument_list_repeat1 = 66,
  alias_sym_field_identifier = 67,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_entity] = "entity",
  [anon_sym_relation] = "relation",
  [aux_sym_relation_association_token1] = "relation_association_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_action] = "action",
  [anon_sym_permission] = "permission",
  [anon_sym_attribute] = "attribute",
  [anon_sym_rule] = "rule",
  [anon_sym_COMMA] = ",",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [sym_open_brace] = "open_brace",
  [sym_close_brace] = "close_brace",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_and_statement] = "and_statement",
  [sym_or_statement] = "or_statement",
  [sym_not_statement] = "not_statement",
  [sym_in_statement] = "in_statement",
  [sym_gt] = "gt",
  [sym_gte] = "gte",
  [sym_ne] = "ne",
  [sym_lt] = "lt",
  [sym_lte] = "lte",
  [sym_assignment] = "assignment",
  [anon_sym_boolean] = "boolean",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_string] = "string",
  [anon_sym_integer] = "integer",
  [anon_sym_double] = "double",
  [anon_sym_DOT] = ".",
  [sym_source_file] = "source_file",
  [sym__instruction] = "_instruction",
  [sym_entity_definition] = "entity_definition",
  [sym_relation_definition] = "relation_definition",
  [sym_relation_association] = "relation_association",
  [sym_relation_member] = "relation_member",
  [sym_action_definition] = "action_definition",
  [sym_permission_definition] = "permission_definition",
  [sym_attribute_definition] = "attribute_definition",
  [sym_attribute_type] = "attribute_type",
  [sym_rule_definition] = "rule_definition",
  [sym_rule_parameter] = "rule_parameter",
  [sym_rule_conditional] = "rule_conditional",
  [sym_call_expression] = "call_expression",
  [sym_open_parenthesis] = "open_parenthesis",
  [sym_close_parenthesis] = "close_parenthesis",
  [sym_conditional_statement] = "conditional_statement",
  [sym_boolean_type] = "boolean_type",
  [sym_string_type] = "string_type",
  [sym_integer_type] = "integer_type",
  [sym_double_type] = "double_type",
  [sym_argument_list] = "argument_list",
  [sym_selector_expression] = "selector_expression",
  [sym__field_identifier] = "_field_identifier",
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_entity_definition_repeat1] = "entity_definition_repeat1",
  [aux_sym_relation_definition_repeat1] = "relation_definition_repeat1",
  [aux_sym_action_definition_repeat1] = "action_definition_repeat1",
  [aux_sym_permission_definition_repeat1] = "permission_definition_repeat1",
  [aux_sym_rule_definition_repeat1] = "rule_definition_repeat1",
  [aux_sym_rule_conditional_repeat1] = "rule_conditional_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [alias_sym_field_identifier] = "field_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_relation] = anon_sym_relation,
  [aux_sym_relation_association_token1] = aux_sym_relation_association_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_action] = anon_sym_action,
  [anon_sym_permission] = anon_sym_permission,
  [anon_sym_attribute] = anon_sym_attribute,
  [anon_sym_rule] = anon_sym_rule,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_comment] = sym_comment,
  [sym_identifier] = sym_identifier,
  [sym_open_brace] = sym_open_brace,
  [sym_close_brace] = sym_close_brace,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_and_statement] = sym_and_statement,
  [sym_or_statement] = sym_or_statement,
  [sym_not_statement] = sym_not_statement,
  [sym_in_statement] = sym_in_statement,
  [sym_gt] = sym_gt,
  [sym_gte] = sym_gte,
  [sym_ne] = sym_ne,
  [sym_lt] = sym_lt,
  [sym_lte] = sym_lte,
  [sym_assignment] = sym_assignment,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_source_file] = sym_source_file,
  [sym__instruction] = sym__instruction,
  [sym_entity_definition] = sym_entity_definition,
  [sym_relation_definition] = sym_relation_definition,
  [sym_relation_association] = sym_relation_association,
  [sym_relation_member] = sym_relation_member,
  [sym_action_definition] = sym_action_definition,
  [sym_permission_definition] = sym_permission_definition,
  [sym_attribute_definition] = sym_attribute_definition,
  [sym_attribute_type] = sym_attribute_type,
  [sym_rule_definition] = sym_rule_definition,
  [sym_rule_parameter] = sym_rule_parameter,
  [sym_rule_conditional] = sym_rule_conditional,
  [sym_call_expression] = sym_call_expression,
  [sym_open_parenthesis] = sym_open_parenthesis,
  [sym_close_parenthesis] = sym_close_parenthesis,
  [sym_conditional_statement] = sym_conditional_statement,
  [sym_boolean_type] = sym_boolean_type,
  [sym_string_type] = sym_string_type,
  [sym_integer_type] = sym_integer_type,
  [sym_double_type] = sym_double_type,
  [sym_argument_list] = sym_argument_list,
  [sym_selector_expression] = sym_selector_expression,
  [sym__field_identifier] = sym__field_identifier,
  [sym__expression] = sym__expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_entity_definition_repeat1] = aux_sym_entity_definition_repeat1,
  [aux_sym_relation_definition_repeat1] = aux_sym_relation_definition_repeat1,
  [aux_sym_action_definition_repeat1] = aux_sym_action_definition_repeat1,
  [aux_sym_permission_definition_repeat1] = aux_sym_permission_definition_repeat1,
  [aux_sym_rule_definition_repeat1] = aux_sym_rule_definition_repeat1,
  [aux_sym_rule_conditional_repeat1] = aux_sym_rule_conditional_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [alias_sym_field_identifier] = alias_sym_field_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_relation] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_relation_association_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_action] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_permission] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_open_brace] = {
    .visible = true,
    .named = true,
  },
  [sym_close_brace] = {
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
  [sym_and_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_or_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_not_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_in_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_gt] = {
    .visible = true,
    .named = true,
  },
  [sym_gte] = {
    .visible = true,
    .named = true,
  },
  [sym_ne] = {
    .visible = true,
    .named = true,
  },
  [sym_lt] = {
    .visible = true,
    .named = true,
  },
  [sym_lte] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_boolean] = {
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
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_entity_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_association] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_member] = {
    .visible = true,
    .named = true,
  },
  [sym_action_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_permission_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_type] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_open_parenthesis] = {
    .visible = true,
    .named = true,
  },
  [sym_close_parenthesis] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_type] = {
    .visible = true,
    .named = true,
  },
  [sym_string_type] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_double_type] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__field_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entity_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relation_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_action_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_permission_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_conditional_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_field_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_action_name = 1,
  field_arguments = 2,
  field_assignment = 3,
  field_association_name = 4,
  field_check = 5,
  field_field = 6,
  field_function = 7,
  field_hash = 8,
  field_member = 9,
  field_name = 10,
  field_operand = 11,
  field_permission_action = 12,
  field_permission_name = 13,
  field_relation_name = 14,
  field_type = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_action_name] = "action_name",
  [field_arguments] = "arguments",
  [field_assignment] = "assignment",
  [field_association_name] = "association_name",
  [field_check] = "check",
  [field_field] = "field",
  [field_function] = "function",
  [field_hash] = "hash",
  [field_member] = "member",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_permission_action] = "permission_action",
  [field_permission_name] = "permission_name",
  [field_relation_name] = "relation_name",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 3},
  [8] = {.index = 12, .length = 3},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_relation_name, 1},
  [2] =
    {field_action_name, 1},
    {field_assignment, 2},
  [4] =
    {field_assignment, 2},
    {field_permission_name, 1},
  [6] =
    {field_name, 1},
    {field_type, 2},
  [8] =
    {field_association_name, 1},
  [9] =
    {field_action_name, 1},
    {field_assignment, 2},
    {field_check, 3},
  [12] =
    {field_assignment, 2},
    {field_permission_action, 3},
    {field_permission_name, 1},
  [15] =
    {field_association_name, 1},
    {field_member, 2},
  [17] =
    {field_arguments, 1},
    {field_function, 0},
  [19] =
    {field_hash, 0},
    {field_member, 1},
  [21] =
    {field_field, 2},
    {field_operand, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [12] = {
    [0] = alias_sym_field_identifier,
  },
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
  [27] = 14,
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
  [52] = 38,
  [53] = 40,
  [54] = 39,
  [55] = 55,
  [56] = 56,
  [57] = 41,
  [58] = 44,
  [59] = 47,
  [60] = 48,
  [61] = 61,
  [62] = 43,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 49,
  [67] = 67,
  [68] = 15,
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
  [99] = 99,
  [100] = 100,
  [101] = 76,
  [102] = 99,
  [103] = 83,
  [104] = 84,
};

static TSCharacterRange sym_identifier_character_set_1[] = {
  {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6},
  {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377}, {0x37b, 0x37d},
  {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f},
  {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f}, {0x671, 0x6d3},
  {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5},
  {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828},
  {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950},
  {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9},
  {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10},
  {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa72, 0xa74},
  {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0},
  {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39},
  {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95},
  {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xc05, 0xc0c},
  {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc80, 0xc80},
  {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1},
  {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd5f, 0xd61},
  {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30}, {0xe32, 0xe32},
  {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb2},
  {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c},
  {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081},
  {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256},
  {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0},
  {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd},
  {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16ee, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751},
  {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x18a8}, {0x18aa, 0x18aa},
  {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54},
  {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f},
  {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa},
  {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b},
  {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3},
  {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102},
  {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2118, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x2139},
  {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2160, 0x2188}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25},
  {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6},
  {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x3005, 0x3007}, {0x3021, 0x3029}, {0x3031, 0x3035},
  {0x3038, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf},
  {0x31f0, 0x31ff}, {0x3400, 0x4dbf}, {0x4e00, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e},
  {0xa67f, 0xa69d}, {0xa6a0, 0xa6ef}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9},
  {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb},
  {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef},
  {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1},
  {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06},
  {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xd7a3},
  {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28},
  {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfc5d}, {0xfc64, 0xfd3d},
  {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdf9}, {0xfe71, 0xfe71}, {0xfe73, 0xfe73}, {0xfe77, 0xfe77}, {0xfe79, 0xfe79}, {0xfe7b, 0xfe7b},
  {0xfe7d, 0xfe7d}, {0xfe7f, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xff9d}, {0xffa0, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf},
  {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d},
  {0x10080, 0x100fa}, {0x10140, 0x10174}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x1034a}, {0x10350, 0x10375}, {0x10380, 0x1039d},
  {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x103d1, 0x103d5}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563},
  {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc},
  {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808},
  {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5},
  {0x10900, 0x10915}, {0x10920, 0x10939}, {0x10980, 0x109b7}, {0x109be, 0x109bf}, {0x10a00, 0x10a00}, {0x10a10, 0x10a13}, {0x10a15, 0x10a17}, {0x10a19, 0x10a35},
  {0x10a60, 0x10a7c}, {0x10a80, 0x10a9c}, {0x10ac0, 0x10ac7}, {0x10ac9, 0x10ae4}, {0x10b00, 0x10b35}, {0x10b40, 0x10b55}, {0x10b60, 0x10b72}, {0x10b80, 0x10b91},
  {0x10c00, 0x10c48}, {0x10c80, 0x10cb2}, {0x10cc0, 0x10cf2}, {0x10d00, 0x10d23}, {0x10e80, 0x10ea9}, {0x10eb0, 0x10eb1}, {0x10f00, 0x10f1c}, {0x10f27, 0x10f27},
  {0x10f30, 0x10f45}, {0x10f70, 0x10f81}, {0x10fb0, 0x10fc4}, {0x10fe0, 0x10ff6}, {0x11003, 0x11037}, {0x11071, 0x11072}, {0x11075, 0x11075}, {0x11083, 0x110af},
  {0x110d0, 0x110e8}, {0x11103, 0x11126}, {0x11144, 0x11144}, {0x11147, 0x11147}, {0x11150, 0x11172}, {0x11176, 0x11176}, {0x11183, 0x111b2}, {0x111c1, 0x111c4},
  {0x111da, 0x111da}, {0x111dc, 0x111dc}, {0x11200, 0x11211}, {0x11213, 0x1122b}, {0x1123f, 0x11240}, {0x11280, 0x11286}, {0x11288, 0x11288}, {0x1128a, 0x1128d},
  {0x1128f, 0x1129d}, {0x1129f, 0x112a8}, {0x112b0, 0x112de}, {0x11305, 0x1130c}, {0x1130f, 0x11310}, {0x11313, 0x11328}, {0x1132a, 0x11330}, {0x11332, 0x11333},
  {0x11335, 0x11339}, {0x1133d, 0x1133d}, {0x11350, 0x11350}, {0x1135d, 0x11361}, {0x11400, 0x11434}, {0x11447, 0x1144a}, {0x1145f, 0x11461}, {0x11480, 0x114af},
  {0x114c4, 0x114c5}, {0x114c7, 0x114c7}, {0x11580, 0x115ae}, {0x115d8, 0x115db}, {0x11600, 0x1162f}, {0x11644, 0x11644}, {0x11680, 0x116aa}, {0x116b8, 0x116b8},
  {0x11700, 0x1171a}, {0x11740, 0x11746}, {0x11800, 0x1182b}, {0x118a0, 0x118df}, {0x118ff, 0x11906}, {0x11909, 0x11909}, {0x1190c, 0x11913}, {0x11915, 0x11916},
  {0x11918, 0x1192f}, {0x1193f, 0x1193f}, {0x11941, 0x11941}, {0x119a0, 0x119a7}, {0x119aa, 0x119d0}, {0x119e1, 0x119e1}, {0x119e3, 0x119e3}, {0x11a00, 0x11a00},
  {0x11a0b, 0x11a32}, {0x11a3a, 0x11a3a}, {0x11a50, 0x11a50}, {0x11a5c, 0x11a89}, {0x11a9d, 0x11a9d}, {0x11ab0, 0x11af8}, {0x11c00, 0x11c08}, {0x11c0a, 0x11c2e},
  {0x11c40, 0x11c40}, {0x11c72, 0x11c8f}, {0x11d00, 0x11d06}, {0x11d08, 0x11d09}, {0x11d0b, 0x11d30}, {0x11d46, 0x11d46}, {0x11d60, 0x11d65}, {0x11d67, 0x11d68},
  {0x11d6a, 0x11d89}, {0x11d98, 0x11d98}, {0x11ee0, 0x11ef2}, {0x11f02, 0x11f02}, {0x11f04, 0x11f10}, {0x11f12, 0x11f33}, {0x11fb0, 0x11fb0}, {0x12000, 0x12399},
  {0x12400, 0x1246e}, {0x12480, 0x12543}, {0x12f90, 0x12ff0}, {0x13000, 0x1342f}, {0x13441, 0x13446}, {0x14400, 0x14646}, {0x16800, 0x16a38}, {0x16a40, 0x16a5e},
  {0x16a70, 0x16abe}, {0x16ad0, 0x16aed}, {0x16b00, 0x16b2f}, {0x16b40, 0x16b43}, {0x16b63, 0x16b77}, {0x16b7d, 0x16b8f}, {0x16e40, 0x16e7f}, {0x16f00, 0x16f4a},
  {0x16f50, 0x16f50}, {0x16f93, 0x16f9f}, {0x16fe0, 0x16fe1}, {0x16fe3, 0x16fe3}, {0x17000, 0x187f7}, {0x18800, 0x18cd5}, {0x18d00, 0x18d08}, {0x1aff0, 0x1aff3},
  {0x1aff5, 0x1affb}, {0x1affd, 0x1affe}, {0x1b000, 0x1b122}, {0x1b132, 0x1b132}, {0x1b150, 0x1b152}, {0x1b155, 0x1b155}, {0x1b164, 0x1b167}, {0x1b170, 0x1b2fb},
  {0x1bc00, 0x1bc6a}, {0x1bc70, 0x1bc7c}, {0x1bc80, 0x1bc88}, {0x1bc90, 0x1bc99}, {0x1d400, 0x1d454}, {0x1d456, 0x1d49c}, {0x1d49e, 0x1d49f}, {0x1d4a2, 0x1d4a2},
  {0x1d4a5, 0x1d4a6}, {0x1d4a9, 0x1d4ac}, {0x1d4ae, 0x1d4b9}, {0x1d4bb, 0x1d4bb}, {0x1d4bd, 0x1d4c3}, {0x1d4c5, 0x1d505}, {0x1d507, 0x1d50a}, {0x1d50d, 0x1d514},
  {0x1d516, 0x1d51c}, {0x1d51e, 0x1d539}, {0x1d53b, 0x1d53e}, {0x1d540, 0x1d544}, {0x1d546, 0x1d546}, {0x1d54a, 0x1d550}, {0x1d552, 0x1d6a5}, {0x1d6a8, 0x1d6c0},
  {0x1d6c2, 0x1d6da}, {0x1d6dc, 0x1d6fa}, {0x1d6fc, 0x1d714}, {0x1d716, 0x1d734}, {0x1d736, 0x1d74e}, {0x1d750, 0x1d76e}, {0x1d770, 0x1d788}, {0x1d78a, 0x1d7a8},
  {0x1d7aa, 0x1d7c2}, {0x1d7c4, 0x1d7cb}, {0x1df00, 0x1df1e}, {0x1df25, 0x1df2a}, {0x1e030, 0x1e06d}, {0x1e100, 0x1e12c}, {0x1e137, 0x1e13d}, {0x1e14e, 0x1e14e},
  {0x1e290, 0x1e2ad}, {0x1e2c0, 0x1e2eb}, {0x1e4d0, 0x1e4eb}, {0x1e7e0, 0x1e7e6}, {0x1e7e8, 0x1e7eb}, {0x1e7ed, 0x1e7ee}, {0x1e7f0, 0x1e7fe}, {0x1e800, 0x1e8c4},
  {0x1e900, 0x1e943}, {0x1e94b, 0x1e94b}, {0x1ee00, 0x1ee03}, {0x1ee05, 0x1ee1f}, {0x1ee21, 0x1ee22}, {0x1ee24, 0x1ee24}, {0x1ee27, 0x1ee27}, {0x1ee29, 0x1ee32},
  {0x1ee34, 0x1ee37}, {0x1ee39, 0x1ee39}, {0x1ee3b, 0x1ee3b}, {0x1ee42, 0x1ee42}, {0x1ee47, 0x1ee47}, {0x1ee49, 0x1ee49}, {0x1ee4b, 0x1ee4b}, {0x1ee4d, 0x1ee4f},
  {0x1ee51, 0x1ee52}, {0x1ee54, 0x1ee54}, {0x1ee57, 0x1ee57}, {0x1ee59, 0x1ee59}, {0x1ee5b, 0x1ee5b}, {0x1ee5d, 0x1ee5d}, {0x1ee5f, 0x1ee5f}, {0x1ee61, 0x1ee62},
  {0x1ee64, 0x1ee64}, {0x1ee67, 0x1ee6a}, {0x1ee6c, 0x1ee72}, {0x1ee74, 0x1ee77}, {0x1ee79, 0x1ee7c}, {0x1ee7e, 0x1ee7e}, {0x1ee80, 0x1ee89}, {0x1ee8b, 0x1ee9b},
  {0x1eea1, 0x1eea3}, {0x1eea5, 0x1eea9}, {0x1eeab, 0x1eebb}, {0x20000, 0x2a6df}, {0x2a700, 0x2b739}, {0x2b740, 0x2b81d}, {0x2b820, 0x2cea1}, {0x2ceb0, 0x2ebe0},
  {0x2ebf0, 0x2ee5d}, {0x2f800, 0x2fa1d}, {0x30000, 0x3134a}, {0x31350, 0x323af},
};

static TSCharacterRange sym_identifier_character_set_2[] = {
  {'0', '9'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xb7, 0xb7}, {0xba, 0xba},
  {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x300, 0x374},
  {0x376, 0x377}, {0x37b, 0x37d}, {0x37f, 0x37f}, {0x386, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481},
  {0x483, 0x487}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x591, 0x5bd}, {0x5bf, 0x5bf}, {0x5c1, 0x5c2},
  {0x5c4, 0x5c5}, {0x5c7, 0x5c7}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x610, 0x61a}, {0x620, 0x669}, {0x66e, 0x6d3}, {0x6d5, 0x6dc},
  {0x6df, 0x6e8}, {0x6ea, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x74a}, {0x74d, 0x7b1}, {0x7c0, 0x7f5}, {0x7fa, 0x7fa}, {0x7fd, 0x7fd},
  {0x800, 0x82d}, {0x840, 0x85b}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x898, 0x8e1}, {0x8e3, 0x963}, {0x966, 0x96f},
  {0x971, 0x983}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bc, 0x9c4},
  {0x9c7, 0x9c8}, {0x9cb, 0x9ce}, {0x9d7, 0x9d7}, {0x9dc, 0x9dd}, {0x9df, 0x9e3}, {0x9e6, 0x9f1}, {0x9fc, 0x9fc}, {0x9fe, 0x9fe},
  {0xa01, 0xa03}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39},
  {0xa3c, 0xa3c}, {0xa3e, 0xa42}, {0xa47, 0xa48}, {0xa4b, 0xa4d}, {0xa51, 0xa51}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa66, 0xa75},
  {0xa81, 0xa83}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabc, 0xac5},
  {0xac7, 0xac9}, {0xacb, 0xacd}, {0xad0, 0xad0}, {0xae0, 0xae3}, {0xae6, 0xaef}, {0xaf9, 0xaff}, {0xb01, 0xb03}, {0xb05, 0xb0c},
  {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3c, 0xb44}, {0xb47, 0xb48}, {0xb4b, 0xb4d},
  {0xb55, 0xb57}, {0xb5c, 0xb5d}, {0xb5f, 0xb63}, {0xb66, 0xb6f}, {0xb71, 0xb71}, {0xb82, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90},
  {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbbe, 0xbc2},
  {0xbc6, 0xbc8}, {0xbca, 0xbcd}, {0xbd0, 0xbd0}, {0xbd7, 0xbd7}, {0xbe6, 0xbef}, {0xc00, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28},
  {0xc2a, 0xc39}, {0xc3c, 0xc44}, {0xc46, 0xc48}, {0xc4a, 0xc4d}, {0xc55, 0xc56}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc63},
  {0xc66, 0xc6f}, {0xc80, 0xc83}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbc, 0xcc4},
  {0xcc6, 0xcc8}, {0xcca, 0xccd}, {0xcd5, 0xcd6}, {0xcdd, 0xcde}, {0xce0, 0xce3}, {0xce6, 0xcef}, {0xcf1, 0xcf3}, {0xd00, 0xd0c},
  {0xd0e, 0xd10}, {0xd12, 0xd44}, {0xd46, 0xd48}, {0xd4a, 0xd4e}, {0xd54, 0xd57}, {0xd5f, 0xd63}, {0xd66, 0xd6f}, {0xd7a, 0xd7f},
  {0xd81, 0xd83}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xdca, 0xdca}, {0xdcf, 0xdd4},
  {0xdd6, 0xdd6}, {0xdd8, 0xddf}, {0xde6, 0xdef}, {0xdf2, 0xdf3}, {0xe01, 0xe3a}, {0xe40, 0xe4e}, {0xe50, 0xe59}, {0xe81, 0xe82},
  {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xec8, 0xece},
  {0xed0, 0xed9}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf18, 0xf19}, {0xf20, 0xf29}, {0xf35, 0xf35}, {0xf37, 0xf37}, {0xf39, 0xf39},
  {0xf3e, 0xf47}, {0xf49, 0xf6c}, {0xf71, 0xf84}, {0xf86, 0xf97}, {0xf99, 0xfbc}, {0xfc6, 0xfc6}, {0x1000, 0x1049}, {0x1050, 0x109d},
  {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258},
  {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5},
  {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x135d, 0x135f}, {0x1369, 0x1371}, {0x1380, 0x138f}, {0x13a0, 0x13f5},
  {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16ee, 0x16f8}, {0x1700, 0x1715}, {0x171f, 0x1734},
  {0x1740, 0x1753}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1772, 0x1773}, {0x1780, 0x17d3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dd}, {0x17e0, 0x17e9},
  {0x180b, 0x180d}, {0x180f, 0x1819}, {0x1820, 0x1878}, {0x1880, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1920, 0x192b}, {0x1930, 0x193b},
  {0x1946, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x19d0, 0x19da}, {0x1a00, 0x1a1b}, {0x1a20, 0x1a5e}, {0x1a60, 0x1a7c},
  {0x1a7f, 0x1a89}, {0x1a90, 0x1a99}, {0x1aa7, 0x1aa7}, {0x1ab0, 0x1abd}, {0x1abf, 0x1ace}, {0x1b00, 0x1b4c}, {0x1b50, 0x1b59}, {0x1b6b, 0x1b73},
  {0x1b80, 0x1bf3}, {0x1c00, 0x1c37}, {0x1c40, 0x1c49}, {0x1c4d, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1cd0, 0x1cd2},
  {0x1cd4, 0x1cfa}, {0x1d00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b},
  {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3},
  {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x200c, 0x200d}, {0x203f, 0x2040}, {0x2054, 0x2054}, {0x2071, 0x2071},
  {0x207f, 0x207f}, {0x2090, 0x209c}, {0x20d0, 0x20dc}, {0x20e1, 0x20e1}, {0x20e5, 0x20f0}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113},
  {0x2115, 0x2115}, {0x2118, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149},
  {0x214e, 0x214e}, {0x2160, 0x2188}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67},
  {0x2d6f, 0x2d6f}, {0x2d7f, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce},
  {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2de0, 0x2dff}, {0x3005, 0x3007}, {0x3021, 0x302f}, {0x3031, 0x3035}, {0x3038, 0x303c}, {0x3041, 0x3096},
  {0x3099, 0x309a}, {0x309d, 0x309f}, {0x30a1, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x4dbf},
  {0x4e00, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa62b}, {0xa640, 0xa66f}, {0xa674, 0xa67d}, {0xa67f, 0xa6f1}, {0xa717, 0xa71f},
  {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa827}, {0xa82c, 0xa82c}, {0xa840, 0xa873},
  {0xa880, 0xa8c5}, {0xa8d0, 0xa8d9}, {0xa8e0, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa92d}, {0xa930, 0xa953}, {0xa960, 0xa97c}, {0xa980, 0xa9c0},
  {0xa9cf, 0xa9d9}, {0xa9e0, 0xa9fe}, {0xaa00, 0xaa36}, {0xaa40, 0xaa4d}, {0xaa50, 0xaa59}, {0xaa60, 0xaa76}, {0xaa7a, 0xaac2}, {0xaadb, 0xaadd},
  {0xaae0, 0xaaef}, {0xaaf2, 0xaaf6}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a},
  {0xab5c, 0xab69}, {0xab70, 0xabea}, {0xabec, 0xabed}, {0xabf0, 0xabf9}, {0xac00, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d},
  {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41},
  {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfc5d}, {0xfc64, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdf9}, {0xfe00, 0xfe0f},
  {0xfe20, 0xfe2f}, {0xfe33, 0xfe34}, {0xfe4d, 0xfe4f}, {0xfe71, 0xfe71}, {0xfe73, 0xfe73}, {0xfe77, 0xfe77}, {0xfe79, 0xfe79}, {0xfe7b, 0xfe7b},
  {0xfe7d, 0xfe7d}, {0xfe7f, 0xfefc}, {0xff10, 0xff19}, {0xff21, 0xff3a}, {0xff3f, 0xff3f}, {0xff41, 0xff5a}, {0xff65, 0xffbe}, {0xffc2, 0xffc7},
  {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d},
  {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10140, 0x10174}, {0x101fd, 0x101fd}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x102e0, 0x102e0}, {0x10300, 0x1031f},
  {0x1032d, 0x1034a}, {0x10350, 0x1037a}, {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x103d1, 0x103d5}, {0x10400, 0x1049d}, {0x104a0, 0x104a9},
  {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595},
  {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785},
  {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855},
  {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915}, {0x10920, 0x10939}, {0x10980, 0x109b7}, {0x109be, 0x109bf},
  {0x10a00, 0x10a03}, {0x10a05, 0x10a06}, {0x10a0c, 0x10a13}, {0x10a15, 0x10a17}, {0x10a19, 0x10a35}, {0x10a38, 0x10a3a}, {0x10a3f, 0x10a3f}, {0x10a60, 0x10a7c},
  {0x10a80, 0x10a9c}, {0x10ac0, 0x10ac7}, {0x10ac9, 0x10ae6}, {0x10b00, 0x10b35}, {0x10b40, 0x10b55}, {0x10b60, 0x10b72}, {0x10b80, 0x10b91}, {0x10c00, 0x10c48},
  {0x10c80, 0x10cb2}, {0x10cc0, 0x10cf2}, {0x10d00, 0x10d27}, {0x10d30, 0x10d39}, {0x10e80, 0x10ea9}, {0x10eab, 0x10eac}, {0x10eb0, 0x10eb1}, {0x10efd, 0x10f1c},
  {0x10f27, 0x10f27}, {0x10f30, 0x10f50}, {0x10f70, 0x10f85}, {0x10fb0, 0x10fc4}, {0x10fe0, 0x10ff6}, {0x11000, 0x11046}, {0x11066, 0x11075}, {0x1107f, 0x110ba},
  {0x110c2, 0x110c2}, {0x110d0, 0x110e8}, {0x110f0, 0x110f9}, {0x11100, 0x11134}, {0x11136, 0x1113f}, {0x11144, 0x11147}, {0x11150, 0x11173}, {0x11176, 0x11176},
  {0x11180, 0x111c4}, {0x111c9, 0x111cc}, {0x111ce, 0x111da}, {0x111dc, 0x111dc}, {0x11200, 0x11211}, {0x11213, 0x11237}, {0x1123e, 0x11241}, {0x11280, 0x11286},
  {0x11288, 0x11288}, {0x1128a, 0x1128d}, {0x1128f, 0x1129d}, {0x1129f, 0x112a8}, {0x112b0, 0x112ea}, {0x112f0, 0x112f9}, {0x11300, 0x11303}, {0x11305, 0x1130c},
  {0x1130f, 0x11310}, {0x11313, 0x11328}, {0x1132a, 0x11330}, {0x11332, 0x11333}, {0x11335, 0x11339}, {0x1133b, 0x11344}, {0x11347, 0x11348}, {0x1134b, 0x1134d},
  {0x11350, 0x11350}, {0x11357, 0x11357}, {0x1135d, 0x11363}, {0x11366, 0x1136c}, {0x11370, 0x11374}, {0x11400, 0x1144a}, {0x11450, 0x11459}, {0x1145e, 0x11461},
  {0x11480, 0x114c5}, {0x114c7, 0x114c7}, {0x114d0, 0x114d9}, {0x11580, 0x115b5}, {0x115b8, 0x115c0}, {0x115d8, 0x115dd}, {0x11600, 0x11640}, {0x11644, 0x11644},
  {0x11650, 0x11659}, {0x11680, 0x116b8}, {0x116c0, 0x116c9}, {0x11700, 0x1171a}, {0x1171d, 0x1172b}, {0x11730, 0x11739}, {0x11740, 0x11746}, {0x11800, 0x1183a},
  {0x118a0, 0x118e9}, {0x118ff, 0x11906}, {0x11909, 0x11909}, {0x1190c, 0x11913}, {0x11915, 0x11916}, {0x11918, 0x11935}, {0x11937, 0x11938}, {0x1193b, 0x11943},
  {0x11950, 0x11959}, {0x119a0, 0x119a7}, {0x119aa, 0x119d7}, {0x119da, 0x119e1}, {0x119e3, 0x119e4}, {0x11a00, 0x11a3e}, {0x11a47, 0x11a47}, {0x11a50, 0x11a99},
  {0x11a9d, 0x11a9d}, {0x11ab0, 0x11af8}, {0x11c00, 0x11c08}, {0x11c0a, 0x11c36}, {0x11c38, 0x11c40}, {0x11c50, 0x11c59}, {0x11c72, 0x11c8f}, {0x11c92, 0x11ca7},
  {0x11ca9, 0x11cb6}, {0x11d00, 0x11d06}, {0x11d08, 0x11d09}, {0x11d0b, 0x11d36}, {0x11d3a, 0x11d3a}, {0x11d3c, 0x11d3d}, {0x11d3f, 0x11d47}, {0x11d50, 0x11d59},
  {0x11d60, 0x11d65}, {0x11d67, 0x11d68}, {0x11d6a, 0x11d8e}, {0x11d90, 0x11d91}, {0x11d93, 0x11d98}, {0x11da0, 0x11da9}, {0x11ee0, 0x11ef6}, {0x11f00, 0x11f10},
  {0x11f12, 0x11f3a}, {0x11f3e, 0x11f42}, {0x11f50, 0x11f59}, {0x11fb0, 0x11fb0}, {0x12000, 0x12399}, {0x12400, 0x1246e}, {0x12480, 0x12543}, {0x12f90, 0x12ff0},
  {0x13000, 0x1342f}, {0x13440, 0x13455}, {0x14400, 0x14646}, {0x16800, 0x16a38}, {0x16a40, 0x16a5e}, {0x16a60, 0x16a69}, {0x16a70, 0x16abe}, {0x16ac0, 0x16ac9},
  {0x16ad0, 0x16aed}, {0x16af0, 0x16af4}, {0x16b00, 0x16b36}, {0x16b40, 0x16b43}, {0x16b50, 0x16b59}, {0x16b63, 0x16b77}, {0x16b7d, 0x16b8f}, {0x16e40, 0x16e7f},
  {0x16f00, 0x16f4a}, {0x16f4f, 0x16f87}, {0x16f8f, 0x16f9f}, {0x16fe0, 0x16fe1}, {0x16fe3, 0x16fe4}, {0x16ff0, 0x16ff1}, {0x17000, 0x187f7}, {0x18800, 0x18cd5},
  {0x18d00, 0x18d08}, {0x1aff0, 0x1aff3}, {0x1aff5, 0x1affb}, {0x1affd, 0x1affe}, {0x1b000, 0x1b122}, {0x1b132, 0x1b132}, {0x1b150, 0x1b152}, {0x1b155, 0x1b155},
  {0x1b164, 0x1b167}, {0x1b170, 0x1b2fb}, {0x1bc00, 0x1bc6a}, {0x1bc70, 0x1bc7c}, {0x1bc80, 0x1bc88}, {0x1bc90, 0x1bc99}, {0x1bc9d, 0x1bc9e}, {0x1cf00, 0x1cf2d},
  {0x1cf30, 0x1cf46}, {0x1d165, 0x1d169}, {0x1d16d, 0x1d172}, {0x1d17b, 0x1d182}, {0x1d185, 0x1d18b}, {0x1d1aa, 0x1d1ad}, {0x1d242, 0x1d244}, {0x1d400, 0x1d454},
  {0x1d456, 0x1d49c}, {0x1d49e, 0x1d49f}, {0x1d4a2, 0x1d4a2}, {0x1d4a5, 0x1d4a6}, {0x1d4a9, 0x1d4ac}, {0x1d4ae, 0x1d4b9}, {0x1d4bb, 0x1d4bb}, {0x1d4bd, 0x1d4c3},
  {0x1d4c5, 0x1d505}, {0x1d507, 0x1d50a}, {0x1d50d, 0x1d514}, {0x1d516, 0x1d51c}, {0x1d51e, 0x1d539}, {0x1d53b, 0x1d53e}, {0x1d540, 0x1d544}, {0x1d546, 0x1d546},
  {0x1d54a, 0x1d550}, {0x1d552, 0x1d6a5}, {0x1d6a8, 0x1d6c0}, {0x1d6c2, 0x1d6da}, {0x1d6dc, 0x1d6fa}, {0x1d6fc, 0x1d714}, {0x1d716, 0x1d734}, {0x1d736, 0x1d74e},
  {0x1d750, 0x1d76e}, {0x1d770, 0x1d788}, {0x1d78a, 0x1d7a8}, {0x1d7aa, 0x1d7c2}, {0x1d7c4, 0x1d7cb}, {0x1d7ce, 0x1d7ff}, {0x1da00, 0x1da36}, {0x1da3b, 0x1da6c},
  {0x1da75, 0x1da75}, {0x1da84, 0x1da84}, {0x1da9b, 0x1da9f}, {0x1daa1, 0x1daaf}, {0x1df00, 0x1df1e}, {0x1df25, 0x1df2a}, {0x1e000, 0x1e006}, {0x1e008, 0x1e018},
  {0x1e01b, 0x1e021}, {0x1e023, 0x1e024}, {0x1e026, 0x1e02a}, {0x1e030, 0x1e06d}, {0x1e08f, 0x1e08f}, {0x1e100, 0x1e12c}, {0x1e130, 0x1e13d}, {0x1e140, 0x1e149},
  {0x1e14e, 0x1e14e}, {0x1e290, 0x1e2ae}, {0x1e2c0, 0x1e2f9}, {0x1e4d0, 0x1e4f9}, {0x1e7e0, 0x1e7e6}, {0x1e7e8, 0x1e7eb}, {0x1e7ed, 0x1e7ee}, {0x1e7f0, 0x1e7fe},
  {0x1e800, 0x1e8c4}, {0x1e8d0, 0x1e8d6}, {0x1e900, 0x1e94b}, {0x1e950, 0x1e959}, {0x1ee00, 0x1ee03}, {0x1ee05, 0x1ee1f}, {0x1ee21, 0x1ee22}, {0x1ee24, 0x1ee24},
  {0x1ee27, 0x1ee27}, {0x1ee29, 0x1ee32}, {0x1ee34, 0x1ee37}, {0x1ee39, 0x1ee39}, {0x1ee3b, 0x1ee3b}, {0x1ee42, 0x1ee42}, {0x1ee47, 0x1ee47}, {0x1ee49, 0x1ee49},
  {0x1ee4b, 0x1ee4b}, {0x1ee4d, 0x1ee4f}, {0x1ee51, 0x1ee52}, {0x1ee54, 0x1ee54}, {0x1ee57, 0x1ee57}, {0x1ee59, 0x1ee59}, {0x1ee5b, 0x1ee5b}, {0x1ee5d, 0x1ee5d},
  {0x1ee5f, 0x1ee5f}, {0x1ee61, 0x1ee62}, {0x1ee64, 0x1ee64}, {0x1ee67, 0x1ee6a}, {0x1ee6c, 0x1ee72}, {0x1ee74, 0x1ee77}, {0x1ee79, 0x1ee7c}, {0x1ee7e, 0x1ee7e},
  {0x1ee80, 0x1ee89}, {0x1ee8b, 0x1ee9b}, {0x1eea1, 0x1eea3}, {0x1eea5, 0x1eea9}, {0x1eeab, 0x1eebb}, {0x1fbf0, 0x1fbf9}, {0x20000, 0x2a6df}, {0x2a700, 0x2b739},
  {0x2b740, 0x2b81d}, {0x2b820, 0x2cea1}, {0x2ceb0, 0x2ebe0}, {0x2ebf0, 0x2ee5d}, {0x2f800, 0x2fa1d}, {0x30000, 0x3134a}, {0x31350, 0x323af}, {0xe0100, 0xe01ef},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(79);
      ADVANCE_MAP(
        ' ', 2,
        '!', 15,
        '#', 85,
        '(', 137,
        ')', 138,
        ',', 93,
        '.', 155,
        '/', 14,
        '<', 146,
        '>', 143,
        '@', 84,
        '[', 150,
        ']', 151,
        'a', 21,
        'b', 54,
        'd', 53,
        'e', 51,
        'i', 52,
        'p', 28,
        'r', 23,
        's', 71,
        '{', 135,
        '}', 136,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '/') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        ' ', 2,
        '!', 15,
        '#', 85,
        '(', 137,
        ')', 138,
        ',', 93,
        '.', 155,
        '/', 14,
        '<', 146,
        '=', 4,
        '>', 143,
        '@', 84,
        '[', 150,
        ']', 151,
        'a', 20,
        'b', 54,
        'd', 53,
        'e', 51,
        'i', 45,
        'n', 56,
        'o', 62,
        'p', 28,
        'r', 23,
        's', 71,
        '{', 135,
        '}', 136,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        ' ', 2,
        '!', 15,
        '#', 85,
        '(', 137,
        ')', 138,
        ',', 93,
        '.', 155,
        '/', 14,
        '<', 146,
        '>', 143,
        '@', 84,
        '[', 150,
        ']', 151,
        'a', 21,
        'b', 54,
        'd', 53,
        'e', 51,
        'i', 52,
        'p', 28,
        'r', 23,
        's', 71,
        '{', 135,
        '}', 136,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(148);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(139);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        ' ', 10,
        '!', 15,
        '(', 137,
        ')', 138,
        ',', 93,
        '.', 155,
        '/', 14,
        '<', 146,
        '>', 143,
        'a', 102,
        'p', 106,
        'r', 104,
        '{', 135,
        '}', 136,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(9);
      if (set_contains(sym_identifier_character_set_1, 668, lookahead)) ADVANCE(134);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        ' ', 10,
        '!', 15,
        '(', 137,
        ')', 138,
        ',', 93,
        '.', 155,
        '/', 14,
        '<', 146,
        '>', 143,
        'a', 101,
        'i', 115,
        'n', 121,
        'o', 124,
        'p', 106,
        'r', 104,
        '{', 135,
        '}', 136,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(9);
      if (set_contains(sym_identifier_character_set_1, 668, lookahead)) ADVANCE(134);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        ' ', 11,
        '!', 15,
        '/', 14,
        '<', 146,
        '>', 143,
        'a', 114,
        'i', 115,
        'n', 121,
        'o', 124,
        '}', 136,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(12);
      if (set_contains(sym_identifier_character_set_1, 668, lookahead)) ADVANCE(134);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '<') ADVANCE(146);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '}') ADVANCE(136);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(12);
      if (set_contains(sym_identifier_character_set_1, 668, lookahead)) ADVANCE(134);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '[') ADVANCE(150);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (set_contains(sym_identifier_character_set_1, 668, lookahead)) ADVANCE(134);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(94);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(145);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(77);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(152);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 78:
      if (lookahead == 'y') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_relation);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_relation);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_relation_association_token1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_action);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_permission);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_permission);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_attribute);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(142);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(140);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(139);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(141);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(132);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(133);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 't') ADVANCE(130);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 't') ADVANCE(130);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(97);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(112);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(123);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(100);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(126);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(119);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(120);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(122);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(99);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(108);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(103);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(95);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(87);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(83);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(89);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(116);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(117);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(131);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(118);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(113);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(96);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(107);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(127);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(111);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(109);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(105);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(125);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(98);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(110);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(129);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (set_contains(sym_identifier_character_set_2, 776, lookahead)) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_open_brace);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_close_brace);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_and_statement);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_or_statement);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_not_statement);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_in_statement);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_gte);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_ne);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '=') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_lte);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_assignment);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_relation] = ACTIONS(1),
    [aux_sym_relation_association_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_permission] = ACTIONS(1),
    [anon_sym_attribute] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_open_brace] = ACTIONS(1),
    [sym_close_brace] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_and_statement] = ACTIONS(1),
    [sym_or_statement] = ACTIONS(1),
    [sym_not_statement] = ACTIONS(1),
    [sym_in_statement] = ACTIONS(1),
    [sym_gt] = ACTIONS(1),
    [sym_gte] = ACTIONS(1),
    [sym_ne] = ACTIONS(1),
    [sym_lt] = ACTIONS(1),
    [sym_lte] = ACTIONS(1),
    [sym_assignment] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(87),
    [sym__instruction] = STATE(94),
    [sym_entity_definition] = STATE(94),
    [sym_rule_definition] = STATE(94),
    [aux_sym_source_file_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_entity] = ACTIONS(7),
    [anon_sym_rule] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      sym_close_brace,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym__expression,
    ACTIONS(23), 2,
      sym_gt,
      sym_lt,
    STATE(13), 2,
      sym_call_expression,
      sym_selector_expression,
    ACTIONS(11), 4,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
    STATE(4), 4,
      sym_open_parenthesis,
      sym_close_parenthesis,
      sym_conditional_statement,
      aux_sym_action_definition_repeat1,
    ACTIONS(21), 7,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
      sym_gte,
      sym_ne,
      sym_lte,
  [48] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(27), 1,
      sym_close_brace,
    STATE(80), 1,
      sym__expression,
    ACTIONS(23), 2,
      sym_gt,
      sym_lt,
    STATE(13), 2,
      sym_call_expression,
      sym_selector_expression,
    ACTIONS(25), 4,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
    STATE(2), 4,
      sym_open_parenthesis,
      sym_close_parenthesis,
      sym_conditional_statement,
      aux_sym_action_definition_repeat1,
    ACTIONS(21), 7,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
      sym_gte,
      sym_ne,
      sym_lte,
  [96] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(34), 1,
      sym_close_brace,
    ACTIONS(36), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym__expression,
    ACTIONS(45), 2,
      sym_gt,
      sym_lt,
    STATE(13), 2,
      sym_call_expression,
      sym_selector_expression,
    ACTIONS(29), 4,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
    STATE(4), 4,
      sym_open_parenthesis,
      sym_close_parenthesis,
      sym_conditional_statement,
      aux_sym_action_definition_repeat1,
    ACTIONS(42), 7,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
      sym_gte,
      sym_ne,
      sym_lte,
  [144] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_DOT,
    STATE(9), 1,
      sym_argument_list,
    ACTIONS(48), 7,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_identifier,
      sym_gt,
      sym_lt,
    ACTIONS(50), 9,
      sym_close_brace,
      anon_sym_RPAREN,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
      sym_gte,
      sym_ne,
      sym_lte,
  [177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 7,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_identifier,
      sym_gt,
      sym_lt,
    ACTIONS(58), 12,
      anon_sym_COMMA,
      sym_close_brace,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
      sym_gte,
      sym_ne,
      sym_lte,
      anon_sym_DOT,
  [204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 7,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_identifier,
      sym_gt,
      sym_lt,
    ACTIONS(62), 12,
      anon_sym_COMMA,
      sym_close_brace,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
      sym_gte,
      sym_ne,
      sym_lte,
      anon_sym_DOT,
  [231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 7,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_identifier,
      sym_gt,
      sym_lt,
    ACTIONS(66), 12,
      anon_sym_COMMA,
      sym_close_brace,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
      sym_gte,
      sym_ne,
      sym_lte,
      anon_sym_DOT,
  [258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 7,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_identifier,
      sym_gt,
      sym_lt,
    ACTIONS(70), 12,
      anon_sym_COMMA,
      sym_close_brace,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
      sym_gte,
      sym_ne,
      sym_lte,
      anon_sym_DOT,
  [285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 7,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_identifier,
      sym_gt,
      sym_lt,
    ACTIONS(74), 12,
      anon_sym_COMMA,
      sym_close_brace,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
      sym_gte,
      sym_ne,
      sym_lte,
      anon_sym_DOT,
  [312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 7,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_identifier,
      sym_gt,
      sym_lt,
    ACTIONS(78), 12,
      anon_sym_COMMA,
      sym_close_brace,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
      sym_gte,
      sym_ne,
      sym_lte,
      anon_sym_DOT,
  [339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 7,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_identifier,
      sym_gt,
      sym_lt,
    ACTIONS(82), 11,
      sym_open_brace,
      sym_close_brace,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
      sym_gte,
      sym_ne,
      sym_lte,
  [365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DOT,
    ACTIONS(48), 7,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_identifier,
      sym_gt,
      sym_lt,
    ACTIONS(50), 10,
      sym_close_brace,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
      sym_gte,
      sym_ne,
      sym_lte,
  [393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 7,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_identifier,
      sym_gt,
      sym_lt,
    ACTIONS(86), 10,
      sym_close_brace,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
      sym_gte,
      sym_ne,
      sym_lte,
  [418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 7,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_identifier,
      sym_gt,
      sym_lt,
    ACTIONS(90), 10,
      sym_close_brace,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
      sym_gte,
      sym_ne,
      sym_lte,
  [443] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(96), 1,
      sym_close_brace,
    ACTIONS(92), 4,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
    ACTIONS(98), 4,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
    STATE(17), 4,
      sym_call_expression,
      sym_open_parenthesis,
      sym_close_parenthesis,
      aux_sym_permission_definition_repeat1,
  [477] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(102), 1,
      sym_close_brace,
    ACTIONS(100), 4,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
    ACTIONS(104), 4,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
    STATE(18), 4,
      sym_call_expression,
      sym_open_parenthesis,
      sym_close_parenthesis,
      aux_sym_permission_definition_repeat1,
  [511] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(111), 1,
      sym_close_brace,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    ACTIONS(106), 4,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
    ACTIONS(119), 4,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
    STATE(18), 4,
      sym_call_expression,
      sym_open_parenthesis,
      sym_close_parenthesis,
      aux_sym_permission_definition_repeat1,
  [545] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym_identifier,
    ACTIONS(124), 1,
      sym_close_brace,
    ACTIONS(128), 2,
      sym_gt,
      sym_lt,
    STATE(21), 2,
      sym_conditional_statement,
      aux_sym_rule_conditional_repeat1,
    ACTIONS(126), 7,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
      sym_gte,
      sym_ne,
      sym_lte,
  [572] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_argument_list,
    ACTIONS(130), 5,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_identifier,
    ACTIONS(132), 6,
      sym_close_brace,
      anon_sym_RPAREN,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
  [597] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(136), 1,
      sym_close_brace,
    ACTIONS(128), 2,
      sym_gt,
      sym_lt,
    STATE(22), 2,
      sym_conditional_statement,
      aux_sym_rule_conditional_repeat1,
    ACTIONS(126), 7,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
      sym_gte,
      sym_ne,
      sym_lte,
  [624] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(141), 1,
      sym_close_brace,
    ACTIONS(146), 2,
      sym_gt,
      sym_lt,
    STATE(22), 2,
      sym_conditional_statement,
      aux_sym_rule_conditional_repeat1,
    ACTIONS(143), 7,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
      sym_gte,
      sym_ne,
      sym_lte,
  [651] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym_relation_association_token1,
    STATE(26), 2,
      sym_relation_association,
      aux_sym_relation_definition_repeat1,
    ACTIONS(153), 4,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
    ACTIONS(149), 5,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_close_brace,
  [675] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym_relation_association_token1,
    STATE(23), 2,
      sym_relation_association,
      aux_sym_relation_definition_repeat1,
    ACTIONS(157), 4,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
    ACTIONS(155), 5,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_close_brace,
  [699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_POUND,
    STATE(31), 1,
      sym_relation_member,
    ACTIONS(159), 10,
      anon_sym_relation,
      aux_sym_relation_association_token1,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_close_brace,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
  [721] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym_relation_association_token1,
    STATE(26), 2,
      sym_relation_association,
      aux_sym_relation_definition_repeat1,
    ACTIONS(168), 4,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
    ACTIONS(163), 5,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_close_brace,
  [745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 3,
      sym_identifier,
      sym_gt,
      sym_lt,
    ACTIONS(86), 8,
      sym_close_brace,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
      sym_gte,
      sym_ne,
      sym_lte,
  [764] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_relation,
    ACTIONS(174), 1,
      anon_sym_action,
    ACTIONS(177), 1,
      anon_sym_permission,
    ACTIONS(180), 1,
      anon_sym_attribute,
    ACTIONS(183), 1,
      sym_close_brace,
    STATE(28), 5,
      sym_relation_definition,
      sym_action_definition,
      sym_permission_definition,
      sym_attribute_definition,
      aux_sym_entity_definition_repeat1,
  [790] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_relation,
    ACTIONS(187), 1,
      anon_sym_action,
    ACTIONS(189), 1,
      anon_sym_permission,
    ACTIONS(191), 1,
      anon_sym_attribute,
    ACTIONS(193), 1,
      sym_close_brace,
    STATE(28), 5,
      sym_relation_definition,
      sym_action_definition,
      sym_permission_definition,
      sym_attribute_definition,
      aux_sym_entity_definition_repeat1,
  [816] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_relation,
    ACTIONS(187), 1,
      anon_sym_action,
    ACTIONS(189), 1,
      anon_sym_permission,
    ACTIONS(191), 1,
      anon_sym_attribute,
    ACTIONS(195), 1,
      sym_close_brace,
    STATE(29), 5,
      sym_relation_definition,
      sym_action_definition,
      sym_permission_definition,
      sym_attribute_definition,
      aux_sym_entity_definition_repeat1,
  [842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 10,
      anon_sym_relation,
      aux_sym_relation_association_token1,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_close_brace,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
  [858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 10,
      anon_sym_relation,
      aux_sym_relation_association_token1,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_close_brace,
      sym_and_statement,
      sym_or_statement,
      sym_not_statement,
      sym_in_statement,
  [874] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_boolean,
    ACTIONS(203), 1,
      anon_sym_string,
    ACTIONS(205), 1,
      anon_sym_integer,
    ACTIONS(207), 1,
      anon_sym_double,
    STATE(67), 1,
      sym_attribute_type,
    STATE(66), 4,
      sym_boolean_type,
      sym_string_type,
      sym_integer_type,
      sym_double_type,
  [899] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_boolean,
    ACTIONS(211), 1,
      anon_sym_string,
    ACTIONS(213), 1,
      anon_sym_integer,
    ACTIONS(215), 1,
      anon_sym_double,
    STATE(51), 1,
      sym_attribute_type,
    STATE(49), 4,
      sym_boolean_type,
      sym_string_type,
      sym_integer_type,
      sym_double_type,
  [924] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_entity,
    ACTIONS(9), 1,
      anon_sym_rule,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    STATE(94), 3,
      sym__instruction,
      sym_entity_definition,
      sym_rule_definition,
  [945] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 1,
      anon_sym_entity,
    ACTIONS(224), 1,
      anon_sym_rule,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    STATE(94), 3,
      sym__instruction,
      sym_entity_definition,
      sym_rule_definition,
  [966] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      sym_identifier,
    STATE(82), 1,
      sym_close_parenthesis,
    STATE(42), 2,
      sym_rule_parameter,
      aux_sym_rule_definition_repeat1,
  [986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 5,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_close_brace,
  [1000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(235), 5,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_close_brace,
  [1014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 5,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_close_brace,
  [1028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 5,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_close_brace,
  [1042] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      sym_close_parenthesis,
    STATE(50), 2,
      sym_rule_parameter,
      aux_sym_rule_definition_repeat1,
  [1062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 5,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_close_brace,
  [1073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 5,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_close_brace,
  [1084] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_identifier,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym__expression,
    STATE(63), 2,
      sym_call_expression,
      sym_selector_expression,
  [1101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_argument_list,
    ACTIONS(54), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [1116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 5,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_close_brace,
  [1127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 5,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_close_brace,
  [1138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 5,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_close_brace,
  [1149] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(50), 2,
      sym_rule_parameter,
      aux_sym_rule_definition_repeat1,
  [1166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 5,
      anon_sym_relation,
      anon_sym_action,
      anon_sym_permission,
      anon_sym_attribute,
      sym_close_brace,
  [1177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 3,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
  [1189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 3,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
  [1201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_LBRACK,
    ACTIONS(235), 3,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
  [1213] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(283), 1,
      anon_sym_DOT,
    STATE(65), 1,
      aux_sym_argument_list_repeat1,
  [1229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(69), 1,
      sym__expression,
    STATE(63), 2,
      sym_call_expression,
      sym_selector_expression,
  [1243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 3,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
  [1255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
  [1264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 3,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
  [1273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
  [1282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 3,
      ts_builtin_sym_end,
      anon_sym_entity,
      anon_sym_rule,
  [1291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
  [1300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [1309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_argument_list_repeat1,
  [1322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_argument_list_repeat1,
  [1335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 3,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
  [1344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 3,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
  [1353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 3,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_RPAREN,
  [1362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(290), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_identifier,
    STATE(8), 1,
      sym__field_identifier,
  [1383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym_relation_association_token1,
    STATE(24), 1,
      sym_relation_association,
  [1393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_open_parenthesis,
  [1403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(93), 1,
      sym_rule_conditional,
  [1413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(86), 1,
      sym_rule_conditional,
  [1423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_identifier,
  [1430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
  [1437] = 2,
    ACTIONS(306), 1,
      anon_sym_LF,
    ACTIONS(308), 1,
      sym_comment,
  [1444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym_identifier,
  [1451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_open_brace,
  [1458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOT,
  [1465] = 2,
    ACTIONS(308), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LF,
  [1472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym_open_brace,
  [1479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_RBRACK,
  [1486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_RBRACK,
  [1493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_identifier,
  [1500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_close_brace,
  [1507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
  [1514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_identifier,
  [1521] = 2,
    ACTIONS(308), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LF,
  [1528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym_open_brace,
  [1535] = 2,
    ACTIONS(308), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LF,
  [1542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_identifier,
  [1549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_close_brace,
  [1556] = 2,
    ACTIONS(308), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_LF,
  [1563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym_identifier,
  [1570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_identifier,
  [1577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_assignment,
  [1584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym_assignment,
  [1591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
  [1598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym_identifier,
  [1605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
  [1612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_RBRACK,
  [1619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
  [1626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 177,
  [SMALL_STATE(7)] = 204,
  [SMALL_STATE(8)] = 231,
  [SMALL_STATE(9)] = 258,
  [SMALL_STATE(10)] = 285,
  [SMALL_STATE(11)] = 312,
  [SMALL_STATE(12)] = 339,
  [SMALL_STATE(13)] = 365,
  [SMALL_STATE(14)] = 393,
  [SMALL_STATE(15)] = 418,
  [SMALL_STATE(16)] = 443,
  [SMALL_STATE(17)] = 477,
  [SMALL_STATE(18)] = 511,
  [SMALL_STATE(19)] = 545,
  [SMALL_STATE(20)] = 572,
  [SMALL_STATE(21)] = 597,
  [SMALL_STATE(22)] = 624,
  [SMALL_STATE(23)] = 651,
  [SMALL_STATE(24)] = 675,
  [SMALL_STATE(25)] = 699,
  [SMALL_STATE(26)] = 721,
  [SMALL_STATE(27)] = 745,
  [SMALL_STATE(28)] = 764,
  [SMALL_STATE(29)] = 790,
  [SMALL_STATE(30)] = 816,
  [SMALL_STATE(31)] = 842,
  [SMALL_STATE(32)] = 858,
  [SMALL_STATE(33)] = 874,
  [SMALL_STATE(34)] = 899,
  [SMALL_STATE(35)] = 924,
  [SMALL_STATE(36)] = 945,
  [SMALL_STATE(37)] = 966,
  [SMALL_STATE(38)] = 986,
  [SMALL_STATE(39)] = 1000,
  [SMALL_STATE(40)] = 1014,
  [SMALL_STATE(41)] = 1028,
  [SMALL_STATE(42)] = 1042,
  [SMALL_STATE(43)] = 1062,
  [SMALL_STATE(44)] = 1073,
  [SMALL_STATE(45)] = 1084,
  [SMALL_STATE(46)] = 1101,
  [SMALL_STATE(47)] = 1116,
  [SMALL_STATE(48)] = 1127,
  [SMALL_STATE(49)] = 1138,
  [SMALL_STATE(50)] = 1149,
  [SMALL_STATE(51)] = 1166,
  [SMALL_STATE(52)] = 1177,
  [SMALL_STATE(53)] = 1189,
  [SMALL_STATE(54)] = 1201,
  [SMALL_STATE(55)] = 1213,
  [SMALL_STATE(56)] = 1229,
  [SMALL_STATE(57)] = 1243,
  [SMALL_STATE(58)] = 1255,
  [SMALL_STATE(59)] = 1264,
  [SMALL_STATE(60)] = 1273,
  [SMALL_STATE(61)] = 1282,
  [SMALL_STATE(62)] = 1291,
  [SMALL_STATE(63)] = 1300,
  [SMALL_STATE(64)] = 1309,
  [SMALL_STATE(65)] = 1322,
  [SMALL_STATE(66)] = 1335,
  [SMALL_STATE(67)] = 1344,
  [SMALL_STATE(68)] = 1353,
  [SMALL_STATE(69)] = 1362,
  [SMALL_STATE(70)] = 1373,
  [SMALL_STATE(71)] = 1383,
  [SMALL_STATE(72)] = 1393,
  [SMALL_STATE(73)] = 1403,
  [SMALL_STATE(74)] = 1413,
  [SMALL_STATE(75)] = 1423,
  [SMALL_STATE(76)] = 1430,
  [SMALL_STATE(77)] = 1437,
  [SMALL_STATE(78)] = 1444,
  [SMALL_STATE(79)] = 1451,
  [SMALL_STATE(80)] = 1458,
  [SMALL_STATE(81)] = 1465,
  [SMALL_STATE(82)] = 1472,
  [SMALL_STATE(83)] = 1479,
  [SMALL_STATE(84)] = 1486,
  [SMALL_STATE(85)] = 1493,
  [SMALL_STATE(86)] = 1500,
  [SMALL_STATE(87)] = 1507,
  [SMALL_STATE(88)] = 1514,
  [SMALL_STATE(89)] = 1521,
  [SMALL_STATE(90)] = 1528,
  [SMALL_STATE(91)] = 1535,
  [SMALL_STATE(92)] = 1542,
  [SMALL_STATE(93)] = 1549,
  [SMALL_STATE(94)] = 1556,
  [SMALL_STATE(95)] = 1563,
  [SMALL_STATE(96)] = 1570,
  [SMALL_STATE(97)] = 1577,
  [SMALL_STATE(98)] = 1584,
  [SMALL_STATE(99)] = 1591,
  [SMALL_STATE(100)] = 1598,
  [SMALL_STATE(101)] = 1605,
  [SMALL_STATE(102)] = 1612,
  [SMALL_STATE(103)] = 1619,
  [SMALL_STATE(104)] = 1626,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action_definition, 4, 0, 7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_definition, 4, 0, 7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action_definition, 3, 0, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_definition, 3, 0, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_action_definition_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_action_definition_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_action_definition_repeat1, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_action_definition_repeat1, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, 0, 12),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, 0, 12),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, 0, 13),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, 0, 13),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, 0, 10),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, 0, 10),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close_parenthesis, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close_parenthesis, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_statement, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_statement, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_parenthesis, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_parenthesis, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permission_definition, 3, 0, 4),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_definition, 3, 0, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_permission_definition, 4, 0, 8),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_definition, 4, 0, 8),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_permission_definition_repeat1, 2, 0, 0),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_permission_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_permission_definition_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permission_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permission_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_permission_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_conditional, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_permission_definition_repeat1, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_permission_definition_repeat1, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_conditional, 2, 0, 0),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_conditional_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_conditional_repeat1, 2, 0, 0),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_conditional_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_conditional_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_definition, 4, 0, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_definition, 3, 0, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_association, 2, 0, 6),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_definition_repeat1, 2, 0, 0),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_definition_repeat1, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_association, 3, 0, 9),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_member, 2, 0, 11),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_type, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_type, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_type, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_type, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 3, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_type, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_type, 1, 0, 0),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_definition_repeat1, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_definition, 3, 0, 5),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_parameter, 2, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 4, 0, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 5, 0, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [326] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 8, 0, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 7, 0, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
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

TS_PUBLIC const TSLanguage *tree_sitter_perm(void) {
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

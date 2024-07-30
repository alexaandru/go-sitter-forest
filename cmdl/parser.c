#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 177
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 14

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_component = 2,
  anon_sym_synchronized = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_EQ_GT = 6,
  anon_sym_end = 7,
  anon_sym_COMMA = 8,
  anon_sym_signal = 9,
  anon_sym_LT_EQ = 10,
  anon_sym_COLON_COLON = 11,
  anon_sym_DOT = 12,
  anon_sym_not = 13,
  anon_sym_BANG = 14,
  anon_sym_cat = 15,
  anon_sym_PLUS = 16,
  anon_sym_xnor = 17,
  anon_sym_TILDE = 18,
  anon_sym_xor = 19,
  anon_sym_CARET = 20,
  anon_sym_nand = 21,
  anon_sym_BANG_AMP = 22,
  anon_sym_nor = 23,
  anon_sym_BANG_PIPE = 24,
  anon_sym_and = 25,
  anon_sym_AMP = 26,
  anon_sym_or = 27,
  anon_sym_PIPE = 28,
  anon_sym_eq = 29,
  anon_sym_EQ = 30,
  anon_sym_COLON = 31,
  sym_identifier = 32,
  sym_number = 33,
  sym_source_file = 34,
  aux_sym__source_block = 35,
  sym__comments = 36,
  sym__statements = 37,
  sym__statement = 38,
  sym_component = 39,
  sym_component_inputs = 40,
  sym_component_outputs = 41,
  sym_component_body = 42,
  sym__component_input_list = 43,
  sym__component_input = 44,
  sym__component_output_list = 45,
  sym__component_output = 46,
  sym_declaration = 47,
  sym__declaration_left = 48,
  sym__declaration_right = 49,
  sym_declaration_left_list = 50,
  sym_declaration_right_list = 51,
  sym__declarator = 52,
  sym_assignment = 53,
  sym__assignment_left = 54,
  sym__assignment_right = 55,
  sym_assignment_left_list = 56,
  sym_assignment_right_list = 57,
  sym__expression = 58,
  sym__expression_primary = 59,
  sym_expression_component = 60,
  sym__expression_component_reference = 61,
  sym_component_reference = 62,
  sym__expression_component_input = 63,
  sym_expression_component_input_list = 64,
  sym_expression_subscript = 65,
  sym_expression_unary = 66,
  sym_expression_binary = 67,
  sym__definition = 68,
  sym__signal_definition = 69,
  sym_signal_definition = 70,
  sym__constant_definition = 71,
  sym_constant = 72,
  sym__reference = 73,
  sym_reference = 74,
  sym__subscript = 75,
  sym__index = 76,
  sym__range = 77,
  sym_range_closed = 78,
  sym_range_open_left = 79,
  sym_range_open_right = 80,
  aux_sym__comments_repeat1 = 81,
  aux_sym__statements_repeat1 = 82,
  aux_sym__component_input_list_repeat1 = 83,
  aux_sym__component_output_list_repeat1 = 84,
  aux_sym_declaration_left_list_repeat1 = 85,
  aux_sym_declaration_right_list_repeat1 = 86,
  aux_sym_assignment_left_list_repeat1 = 87,
  aux_sym_component_reference_repeat1 = 88,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_component] = "component",
  [anon_sym_synchronized] = "synchronized",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_signal] = "signal",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DOT] = ".",
  [anon_sym_not] = "not",
  [anon_sym_BANG] = "!",
  [anon_sym_cat] = "cat",
  [anon_sym_PLUS] = "+",
  [anon_sym_xnor] = "xnor",
  [anon_sym_TILDE] = "~",
  [anon_sym_xor] = "xor",
  [anon_sym_CARET] = "^",
  [anon_sym_nand] = "nand",
  [anon_sym_BANG_AMP] = "!&",
  [anon_sym_nor] = "nor",
  [anon_sym_BANG_PIPE] = "!|",
  [anon_sym_and] = "and",
  [anon_sym_AMP] = "&",
  [anon_sym_or] = "or",
  [anon_sym_PIPE] = "|",
  [anon_sym_eq] = "eq",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [aux_sym__source_block] = "_source_block",
  [sym__comments] = "_comments",
  [sym__statements] = "_statements",
  [sym__statement] = "_statement",
  [sym_component] = "component",
  [sym_component_inputs] = "component_inputs",
  [sym_component_outputs] = "component_outputs",
  [sym_component_body] = "component_body",
  [sym__component_input_list] = "_component_input_list",
  [sym__component_input] = "_component_input",
  [sym__component_output_list] = "_component_output_list",
  [sym__component_output] = "_component_output",
  [sym_declaration] = "declaration",
  [sym__declaration_left] = "_declaration_left",
  [sym__declaration_right] = "_declaration_right",
  [sym_declaration_left_list] = "declaration_left_list",
  [sym_declaration_right_list] = "declaration_right_list",
  [sym__declarator] = "_declarator",
  [sym_assignment] = "assignment",
  [sym__assignment_left] = "_assignment_left",
  [sym__assignment_right] = "_assignment_right",
  [sym_assignment_left_list] = "assignment_left_list",
  [sym_assignment_right_list] = "assignment_right_list",
  [sym__expression] = "_expression",
  [sym__expression_primary] = "_expression_primary",
  [sym_expression_component] = "expression_component",
  [sym__expression_component_reference] = "_expression_component_reference",
  [sym_component_reference] = "component_reference",
  [sym__expression_component_input] = "_expression_component_input",
  [sym_expression_component_input_list] = "expression_component_input_list",
  [sym_expression_subscript] = "expression_subscript",
  [sym_expression_unary] = "expression_unary",
  [sym_expression_binary] = "expression_binary",
  [sym__definition] = "_definition",
  [sym__signal_definition] = "_signal_definition",
  [sym_signal_definition] = "signal_definition",
  [sym__constant_definition] = "_constant_definition",
  [sym_constant] = "constant",
  [sym__reference] = "_reference",
  [sym_reference] = "reference",
  [sym__subscript] = "_subscript",
  [sym__index] = "_index",
  [sym__range] = "_range",
  [sym_range_closed] = "range_closed",
  [sym_range_open_left] = "range_open_left",
  [sym_range_open_right] = "range_open_right",
  [aux_sym__comments_repeat1] = "_comments_repeat1",
  [aux_sym__statements_repeat1] = "_statements_repeat1",
  [aux_sym__component_input_list_repeat1] = "_component_input_list_repeat1",
  [aux_sym__component_output_list_repeat1] = "_component_output_list_repeat1",
  [aux_sym_declaration_left_list_repeat1] = "declaration_left_list_repeat1",
  [aux_sym_declaration_right_list_repeat1] = "declaration_right_list_repeat1",
  [aux_sym_assignment_left_list_repeat1] = "assignment_left_list_repeat1",
  [aux_sym_component_reference_repeat1] = "component_reference_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_component] = anon_sym_component,
  [anon_sym_synchronized] = anon_sym_synchronized,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_signal] = anon_sym_signal,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_cat] = anon_sym_cat,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_xnor] = anon_sym_xnor,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_nand] = anon_sym_nand,
  [anon_sym_BANG_AMP] = anon_sym_BANG_AMP,
  [anon_sym_nor] = anon_sym_nor,
  [anon_sym_BANG_PIPE] = anon_sym_BANG_PIPE,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_eq] = anon_sym_eq,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [aux_sym__source_block] = aux_sym__source_block,
  [sym__comments] = sym__comments,
  [sym__statements] = sym__statements,
  [sym__statement] = sym__statement,
  [sym_component] = sym_component,
  [sym_component_inputs] = sym_component_inputs,
  [sym_component_outputs] = sym_component_outputs,
  [sym_component_body] = sym_component_body,
  [sym__component_input_list] = sym__component_input_list,
  [sym__component_input] = sym__component_input,
  [sym__component_output_list] = sym__component_output_list,
  [sym__component_output] = sym__component_output,
  [sym_declaration] = sym_declaration,
  [sym__declaration_left] = sym__declaration_left,
  [sym__declaration_right] = sym__declaration_right,
  [sym_declaration_left_list] = sym_declaration_left_list,
  [sym_declaration_right_list] = sym_declaration_right_list,
  [sym__declarator] = sym__declarator,
  [sym_assignment] = sym_assignment,
  [sym__assignment_left] = sym__assignment_left,
  [sym__assignment_right] = sym__assignment_right,
  [sym_assignment_left_list] = sym_assignment_left_list,
  [sym_assignment_right_list] = sym_assignment_right_list,
  [sym__expression] = sym__expression,
  [sym__expression_primary] = sym__expression_primary,
  [sym_expression_component] = sym_expression_component,
  [sym__expression_component_reference] = sym__expression_component_reference,
  [sym_component_reference] = sym_component_reference,
  [sym__expression_component_input] = sym__expression_component_input,
  [sym_expression_component_input_list] = sym_expression_component_input_list,
  [sym_expression_subscript] = sym_expression_subscript,
  [sym_expression_unary] = sym_expression_unary,
  [sym_expression_binary] = sym_expression_binary,
  [sym__definition] = sym__definition,
  [sym__signal_definition] = sym__signal_definition,
  [sym_signal_definition] = sym_signal_definition,
  [sym__constant_definition] = sym__constant_definition,
  [sym_constant] = sym_constant,
  [sym__reference] = sym__reference,
  [sym_reference] = sym_reference,
  [sym__subscript] = sym__subscript,
  [sym__index] = sym__index,
  [sym__range] = sym__range,
  [sym_range_closed] = sym_range_closed,
  [sym_range_open_left] = sym_range_open_left,
  [sym_range_open_right] = sym_range_open_right,
  [aux_sym__comments_repeat1] = aux_sym__comments_repeat1,
  [aux_sym__statements_repeat1] = aux_sym__statements_repeat1,
  [aux_sym__component_input_list_repeat1] = aux_sym__component_input_list_repeat1,
  [aux_sym__component_output_list_repeat1] = aux_sym__component_output_list_repeat1,
  [aux_sym_declaration_left_list_repeat1] = aux_sym_declaration_left_list_repeat1,
  [aux_sym_declaration_right_list_repeat1] = aux_sym_declaration_right_list_repeat1,
  [aux_sym_assignment_left_list_repeat1] = aux_sym_assignment_left_list_repeat1,
  [aux_sym_component_reference_repeat1] = aux_sym_component_reference_repeat1,
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
  [anon_sym_component] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_synchronized] = {
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
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xnor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__source_block] = {
    .visible = false,
    .named = false,
  },
  [sym__comments] = {
    .visible = false,
    .named = true,
  },
  [sym__statements] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_component_inputs] = {
    .visible = true,
    .named = true,
  },
  [sym_component_outputs] = {
    .visible = true,
    .named = true,
  },
  [sym_component_body] = {
    .visible = true,
    .named = true,
  },
  [sym__component_input_list] = {
    .visible = false,
    .named = true,
  },
  [sym__component_input] = {
    .visible = false,
    .named = true,
  },
  [sym__component_output_list] = {
    .visible = false,
    .named = true,
  },
  [sym__component_output] = {
    .visible = false,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration_left] = {
    .visible = false,
    .named = true,
  },
  [sym__declaration_right] = {
    .visible = false,
    .named = true,
  },
  [sym_declaration_left_list] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_right_list] = {
    .visible = true,
    .named = true,
  },
  [sym__declarator] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__assignment_left] = {
    .visible = false,
    .named = true,
  },
  [sym__assignment_right] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_left_list] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_right_list] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_primary] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_component] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_component_reference] = {
    .visible = false,
    .named = true,
  },
  [sym_component_reference] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_component_input] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_component_input_list] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_subscript] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_unary] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_binary] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__signal_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_signal_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__constant_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym__reference] = {
    .visible = false,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym__subscript] = {
    .visible = false,
    .named = true,
  },
  [sym__index] = {
    .visible = false,
    .named = true,
  },
  [sym__range] = {
    .visible = false,
    .named = true,
  },
  [sym_range_closed] = {
    .visible = true,
    .named = true,
  },
  [sym_range_open_left] = {
    .visible = true,
    .named = true,
  },
  [sym_range_open_right] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__comments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__component_input_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__component_output_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_left_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_right_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignment_left_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_reference_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_inputs = 2,
  field_left = 3,
  field_name = 4,
  field_operand = 5,
  field_outputs = 6,
  field_right = 7,
  field_signal = 8,
  field_start = 9,
  field_stop = 10,
  field_subscript = 11,
  field_value = 12,
  field_width = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_inputs] = "inputs",
  [field_left] = "left",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_outputs] = "outputs",
  [field_right] = "right",
  [field_signal] = "signal",
  [field_start] = "start",
  [field_stop] = "stop",
  [field_subscript] = "subscript",
  [field_value] = "value",
  [field_width] = "width",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 3},
  [13] = {.index = 21, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 1},
  [1] =
    {field_signal, 0},
    {field_subscript, 2},
  [3] =
    {field_left, 0},
    {field_right, 2},
  [5] =
    {field_name, 0},
    {field_width, 2},
  [7] =
    {field_left, 1},
    {field_right, 3},
  [9] =
    {field_stop, 1},
  [10] =
    {field_start, 0},
  [11] =
    {field_operand, 1},
  [12] =
    {field_start, 0},
    {field_stop, 2},
  [14] =
    {field_value, 0},
    {field_width, 2},
  [16] =
    {field_inputs, 2},
    {field_name, 0},
  [18] =
    {field_inputs, 3},
    {field_name, 1},
    {field_outputs, 6},
  [21] =
    {field_body, 7},
    {field_inputs, 3},
    {field_name, 1},
    {field_outputs, 6},
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 6,
  [12] = 10,
  [13] = 4,
  [14] = 14,
  [15] = 15,
  [16] = 5,
  [17] = 17,
  [18] = 18,
  [19] = 7,
  [20] = 14,
  [21] = 21,
  [22] = 18,
  [23] = 15,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 21,
  [28] = 24,
  [29] = 26,
  [30] = 17,
  [31] = 25,
  [32] = 2,
  [33] = 33,
  [34] = 6,
  [35] = 35,
  [36] = 4,
  [37] = 5,
  [38] = 35,
  [39] = 7,
  [40] = 17,
  [41] = 41,
  [42] = 42,
  [43] = 14,
  [44] = 21,
  [45] = 45,
  [46] = 45,
  [47] = 24,
  [48] = 18,
  [49] = 26,
  [50] = 15,
  [51] = 25,
  [52] = 52,
  [53] = 52,
  [54] = 52,
  [55] = 55,
  [56] = 56,
  [57] = 55,
  [58] = 56,
  [59] = 59,
  [60] = 59,
  [61] = 59,
  [62] = 62,
  [63] = 63,
  [64] = 62,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 65,
  [69] = 67,
  [70] = 67,
  [71] = 63,
  [72] = 62,
  [73] = 73,
  [74] = 63,
  [75] = 66,
  [76] = 73,
  [77] = 73,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 79,
  [82] = 80,
  [83] = 83,
  [84] = 84,
  [85] = 83,
  [86] = 86,
  [87] = 87,
  [88] = 86,
  [89] = 78,
  [90] = 87,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 4,
  [96] = 94,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 99,
  [103] = 97,
  [104] = 93,
  [105] = 84,
  [106] = 94,
  [107] = 107,
  [108] = 91,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 111,
  [114] = 15,
  [115] = 110,
  [116] = 116,
  [117] = 116,
  [118] = 118,
  [119] = 119,
  [120] = 119,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 122,
  [125] = 118,
  [126] = 126,
  [127] = 123,
  [128] = 126,
  [129] = 129,
  [130] = 129,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 93,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 151,
  [159] = 154,
  [160] = 151,
  [161] = 149,
  [162] = 154,
  [163] = 155,
  [164] = 148,
  [165] = 165,
  [166] = 166,
  [167] = 155,
  [168] = 168,
  [169] = 154,
  [170] = 166,
  [171] = 165,
  [172] = 166,
  [173] = 152,
  [174] = 157,
  [175] = 147,
  [176] = 153,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '^') ADVANCE(56);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 'x') ADVANCE(93);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '~') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '^') ADVANCE(56);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 'x') ADVANCE(93);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '~') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '^') ADVANCE(56);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 'x') ADVANCE(93);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '~') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '^') ADVANCE(56);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(17);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '~') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '^') ADVANCE(56);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(17);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '~') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 's') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(59);
      if (lookahead == '|') ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 'q') ADVANCE(69);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'q') ADVANCE(69);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 27:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 28:
      if (eof) ADVANCE(31);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '^') ADVANCE(56);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 'x') ADVANCE(93);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '~') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 29:
      if (eof) ADVANCE(31);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '^') ADVANCE(56);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 'x') ADVANCE(93);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '~') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 's') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_component);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_signal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '&') ADVANCE(59);
      if (lookahead == '|') ADVANCE(62);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_cat);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_cat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_xnor);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_xnor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_nand);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_nand);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_BANG_AMP);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_nor);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_nor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_BANG_PIPE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_eq);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_eq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(37);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(43);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'y') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 'q') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 't') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 29},
  [5] = {.lex_state = 29},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 30},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 30},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 30},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 30},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 30},
  [79] = {.lex_state = 27},
  [80] = {.lex_state = 27},
  [81] = {.lex_state = 27},
  [82] = {.lex_state = 27},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 30},
  [85] = {.lex_state = 30},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 30},
  [88] = {.lex_state = 30},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 30},
  [92] = {.lex_state = 30},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 30},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 30},
  [97] = {.lex_state = 30},
  [98] = {.lex_state = 27},
  [99] = {.lex_state = 30},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 27},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 30},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 30},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 30},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 30},
  [116] = {.lex_state = 30},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 30},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 30},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 30},
  [123] = {.lex_state = 27},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 27},
  [128] = {.lex_state = 30},
  [129] = {.lex_state = 27},
  [130] = {.lex_state = 27},
  [131] = {.lex_state = 28},
  [132] = {.lex_state = 27},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 28},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 28},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 27},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 27},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 30},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 30},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 27},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_component] = ACTIONS(1),
    [anon_sym_synchronized] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_signal] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_cat] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_xnor] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_nand] = ACTIONS(1),
    [anon_sym_BANG_AMP] = ACTIONS(1),
    [anon_sym_nor] = ACTIONS(1),
    [anon_sym_BANG_PIPE] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_eq] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(168),
    [aux_sym__source_block] = STATE(42),
    [sym__comments] = STATE(42),
    [sym__statements] = STATE(42),
    [sym__statement] = STATE(75),
    [sym_component] = STATE(75),
    [sym_declaration] = STATE(75),
    [sym_assignment] = STATE(75),
    [sym__assignment_left] = STATE(148),
    [sym_assignment_left_list] = STATE(148),
    [sym__reference] = STATE(142),
    [sym_reference] = STATE(142),
    [aux_sym__comments_repeat1] = STATE(116),
    [aux_sym__statements_repeat1] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_component] = ACTIONS(7),
    [anon_sym_synchronized] = ACTIONS(7),
    [anon_sym_signal] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_COLON_COLON,
    STATE(135), 1,
      aux_sym_component_reference_repeat1,
    ACTIONS(13), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(15), 12,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
  [38] = 5,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_COLON_COLON,
    STATE(135), 1,
      aux_sym_component_reference_repeat1,
    ACTIONS(13), 11,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(15), 13,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
  [76] = 3,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(23), 12,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
    ACTIONS(21), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
  [109] = 3,
    ACTIONS(31), 1,
      anon_sym_COLON,
    ACTIONS(29), 12,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
    ACTIONS(27), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
  [142] = 3,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(35), 12,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
    ACTIONS(33), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
  [175] = 2,
    ACTIONS(41), 12,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
    ACTIONS(39), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
  [205] = 7,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(97), 1,
      aux_sym_declaration_right_list_repeat1,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(45), 4,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      sym_identifier,
    ACTIONS(51), 8,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
    ACTIONS(53), 8,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
  [245] = 7,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(57), 1,
      anon_sym_DOT,
    STATE(103), 1,
      aux_sym_declaration_right_list_repeat1,
    ACTIONS(45), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
    ACTIONS(59), 8,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
    ACTIONS(61), 8,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
  [285] = 7,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(63), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_declaration_right_list_repeat1,
    ACTIONS(65), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
    ACTIONS(59), 8,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
    ACTIONS(61), 8,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
  [325] = 3,
    ACTIONS(67), 1,
      sym_number,
    ACTIONS(33), 11,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(35), 13,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
  [357] = 7,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(99), 1,
      aux_sym_declaration_right_list_repeat1,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(65), 4,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      sym_identifier,
    ACTIONS(51), 8,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
    ACTIONS(53), 8,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
  [397] = 3,
    ACTIONS(69), 1,
      anon_sym_COLON,
    ACTIONS(21), 11,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(23), 13,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
  [429] = 2,
    ACTIONS(73), 12,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
    ACTIONS(71), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
  [459] = 2,
    ACTIONS(77), 12,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
    ACTIONS(75), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
  [489] = 3,
    ACTIONS(79), 1,
      anon_sym_COLON,
    ACTIONS(27), 11,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(29), 13,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
  [521] = 2,
    ACTIONS(81), 11,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(83), 13,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
  [550] = 5,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(85), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(87), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
    ACTIONS(59), 8,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
    ACTIONS(61), 8,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
  [585] = 2,
    ACTIONS(39), 11,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(41), 13,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
  [614] = 2,
    ACTIONS(71), 11,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(73), 13,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
  [643] = 2,
    ACTIONS(89), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(91), 12,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
  [672] = 5,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(87), 4,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      sym_identifier,
    ACTIONS(51), 8,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
    ACTIONS(53), 8,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
  [707] = 2,
    ACTIONS(75), 11,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(77), 13,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
  [736] = 2,
    ACTIONS(93), 11,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(95), 13,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
  [765] = 2,
    ACTIONS(97), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(99), 12,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
  [794] = 2,
    ACTIONS(101), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(103), 12,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
  [823] = 2,
    ACTIONS(89), 11,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(91), 13,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
  [852] = 2,
    ACTIONS(93), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(95), 12,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
  [881] = 2,
    ACTIONS(101), 11,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(103), 13,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
  [910] = 2,
    ACTIONS(81), 12,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(83), 12,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
  [939] = 2,
    ACTIONS(97), 11,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_PLUS,
      anon_sym_TILDE,
      anon_sym_CARET,
      anon_sym_BANG_AMP,
      anon_sym_BANG_PIPE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(99), 13,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      anon_sym_cat,
      anon_sym_xnor,
      anon_sym_xor,
      anon_sym_nand,
      anon_sym_nor,
      anon_sym_and,
      anon_sym_or,
      anon_sym_eq,
      sym_identifier,
  [968] = 4,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_COLON_COLON,
    STATE(135), 1,
      aux_sym_component_reference_repeat1,
    ACTIONS(13), 19,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_cat,
      anon_sym_PLUS,
      anon_sym_xnor,
      anon_sym_TILDE,
      anon_sym_xor,
      anon_sym_CARET,
      anon_sym_nand,
      anon_sym_BANG_AMP,
      anon_sym_nor,
      anon_sym_BANG_PIPE,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_eq,
      anon_sym_EQ,
  [999] = 5,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(109), 1,
      anon_sym_DOT,
    STATE(140), 1,
      aux_sym_declaration_right_list_repeat1,
    ACTIONS(111), 16,
      anon_sym_cat,
      anon_sym_PLUS,
      anon_sym_xnor,
      anon_sym_TILDE,
      anon_sym_xor,
      anon_sym_CARET,
      anon_sym_nand,
      anon_sym_BANG_AMP,
      anon_sym_nor,
      anon_sym_BANG_PIPE,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_eq,
      anon_sym_EQ,
  [1030] = 2,
    ACTIONS(113), 1,
      sym_number,
    ACTIONS(33), 19,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_cat,
      anon_sym_PLUS,
      anon_sym_xnor,
      anon_sym_TILDE,
      anon_sym_xor,
      anon_sym_CARET,
      anon_sym_nand,
      anon_sym_BANG_AMP,
      anon_sym_nor,
      anon_sym_BANG_PIPE,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_eq,
      anon_sym_EQ,
  [1055] = 11,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(115), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_end,
    ACTIONS(121), 1,
      anon_sym_signal,
    STATE(117), 1,
      aux_sym__comments_repeat1,
    STATE(174), 1,
      sym_component_body,
    ACTIONS(117), 2,
      anon_sym_component,
      anon_sym_synchronized,
    STATE(142), 2,
      sym__reference,
      sym_reference,
    STATE(164), 2,
      sym__assignment_left,
      sym_assignment_left_list,
    STATE(41), 3,
      aux_sym__source_block,
      sym__comments,
      sym__statements,
    STATE(66), 5,
      sym__statement,
      sym_component,
      sym_declaration,
      sym_assignment,
      aux_sym__statements_repeat1,
  [1098] = 2,
    ACTIONS(123), 1,
      anon_sym_COLON,
    ACTIONS(21), 19,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_cat,
      anon_sym_PLUS,
      anon_sym_xnor,
      anon_sym_TILDE,
      anon_sym_xor,
      anon_sym_CARET,
      anon_sym_nand,
      anon_sym_BANG_AMP,
      anon_sym_nor,
      anon_sym_BANG_PIPE,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_eq,
      anon_sym_EQ,
  [1123] = 2,
    ACTIONS(125), 1,
      anon_sym_COLON,
    ACTIONS(27), 19,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_cat,
      anon_sym_PLUS,
      anon_sym_xnor,
      anon_sym_TILDE,
      anon_sym_xor,
      anon_sym_CARET,
      anon_sym_nand,
      anon_sym_BANG_AMP,
      anon_sym_nor,
      anon_sym_BANG_PIPE,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_eq,
      anon_sym_EQ,
  [1148] = 11,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(115), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_signal,
    ACTIONS(127), 1,
      anon_sym_end,
    STATE(117), 1,
      aux_sym__comments_repeat1,
    STATE(157), 1,
      sym_component_body,
    ACTIONS(117), 2,
      anon_sym_component,
      anon_sym_synchronized,
    STATE(142), 2,
      sym__reference,
      sym_reference,
    STATE(164), 2,
      sym__assignment_left,
      sym_assignment_left_list,
    STATE(41), 3,
      aux_sym__source_block,
      sym__comments,
      sym__statements,
    STATE(66), 5,
      sym__statement,
      sym_component,
      sym_declaration,
      sym_assignment,
      aux_sym__statements_repeat1,
  [1191] = 1,
    ACTIONS(39), 19,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_cat,
      anon_sym_PLUS,
      anon_sym_xnor,
      anon_sym_TILDE,
      anon_sym_xor,
      anon_sym_CARET,
      anon_sym_nand,
      anon_sym_BANG_AMP,
      anon_sym_nor,
      anon_sym_BANG_PIPE,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_eq,
      anon_sym_EQ,
  [1213] = 1,
    ACTIONS(81), 19,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_cat,
      anon_sym_PLUS,
      anon_sym_xnor,
      anon_sym_TILDE,
      anon_sym_xor,
      anon_sym_CARET,
      anon_sym_nand,
      anon_sym_BANG_AMP,
      anon_sym_nor,
      anon_sym_BANG_PIPE,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_eq,
      anon_sym_EQ,
  [1235] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(115), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_signal,
    ACTIONS(129), 1,
      anon_sym_end,
    STATE(117), 1,
      aux_sym__comments_repeat1,
    ACTIONS(117), 2,
      anon_sym_component,
      anon_sym_synchronized,
    STATE(142), 2,
      sym__reference,
      sym_reference,
    STATE(164), 2,
      sym__assignment_left,
      sym_assignment_left_list,
    STATE(46), 3,
      aux_sym__source_block,
      sym__comments,
      sym__statements,
    STATE(66), 5,
      sym__statement,
      sym_component,
      sym_declaration,
      sym_assignment,
      aux_sym__statements_repeat1,
  [1275] = 10,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_signal,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    STATE(116), 1,
      aux_sym__comments_repeat1,
    ACTIONS(7), 2,
      anon_sym_component,
      anon_sym_synchronized,
    STATE(142), 2,
      sym__reference,
      sym_reference,
    STATE(148), 2,
      sym__assignment_left,
      sym_assignment_left_list,
    STATE(45), 3,
      aux_sym__source_block,
      sym__comments,
      sym__statements,
    STATE(75), 5,
      sym__statement,
      sym_component,
      sym_declaration,
      sym_assignment,
      aux_sym__statements_repeat1,
  [1315] = 1,
    ACTIONS(71), 19,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_cat,
      anon_sym_PLUS,
      anon_sym_xnor,
      anon_sym_TILDE,
      anon_sym_xor,
      anon_sym_CARET,
      anon_sym_nand,
      anon_sym_BANG_AMP,
      anon_sym_nor,
      anon_sym_BANG_PIPE,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_eq,
      anon_sym_EQ,
  [1337] = 1,
    ACTIONS(89), 19,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_cat,
      anon_sym_PLUS,
      anon_sym_xnor,
      anon_sym_TILDE,
      anon_sym_xor,
      anon_sym_CARET,
      anon_sym_nand,
      anon_sym_BANG_AMP,
      anon_sym_nor,
      anon_sym_BANG_PIPE,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_eq,
      anon_sym_EQ,
  [1359] = 10,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_signal,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(116), 1,
      aux_sym__comments_repeat1,
    ACTIONS(138), 2,
      anon_sym_component,
      anon_sym_synchronized,
    STATE(142), 2,
      sym__reference,
      sym_reference,
    STATE(148), 2,
      sym__assignment_left,
      sym_assignment_left_list,
    STATE(45), 3,
      aux_sym__source_block,
      sym__comments,
      sym__statements,
    STATE(75), 5,
      sym__statement,
      sym_component,
      sym_declaration,
      sym_assignment,
      aux_sym__statements_repeat1,
  [1399] = 10,
    ACTIONS(144), 1,
      sym_identifier,
    ACTIONS(147), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_end,
    ACTIONS(155), 1,
      anon_sym_signal,
    STATE(117), 1,
      aux_sym__comments_repeat1,
    ACTIONS(150), 2,
      anon_sym_component,
      anon_sym_synchronized,
    STATE(142), 2,
      sym__reference,
      sym_reference,
    STATE(164), 2,
      sym__assignment_left,
      sym_assignment_left_list,
    STATE(46), 3,
      aux_sym__source_block,
      sym__comments,
      sym__statements,
    STATE(66), 5,
      sym__statement,
      sym_component,
      sym_declaration,
      sym_assignment,
      aux_sym__statements_repeat1,
  [1439] = 1,
    ACTIONS(93), 19,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_cat,
      anon_sym_PLUS,
      anon_sym_xnor,
      anon_sym_TILDE,
      anon_sym_xor,
      anon_sym_CARET,
      anon_sym_nand,
      anon_sym_BANG_AMP,
      anon_sym_nor,
      anon_sym_BANG_PIPE,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_eq,
      anon_sym_EQ,
  [1461] = 3,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(85), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(111), 16,
      anon_sym_cat,
      anon_sym_PLUS,
      anon_sym_xnor,
      anon_sym_TILDE,
      anon_sym_xor,
      anon_sym_CARET,
      anon_sym_nand,
      anon_sym_BANG_AMP,
      anon_sym_nor,
      anon_sym_BANG_PIPE,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_eq,
      anon_sym_EQ,
  [1487] = 1,
    ACTIONS(101), 19,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_cat,
      anon_sym_PLUS,
      anon_sym_xnor,
      anon_sym_TILDE,
      anon_sym_xor,
      anon_sym_CARET,
      anon_sym_nand,
      anon_sym_BANG_AMP,
      anon_sym_nor,
      anon_sym_BANG_PIPE,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_eq,
      anon_sym_EQ,
  [1509] = 1,
    ACTIONS(75), 19,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_cat,
      anon_sym_PLUS,
      anon_sym_xnor,
      anon_sym_TILDE,
      anon_sym_xor,
      anon_sym_CARET,
      anon_sym_nand,
      anon_sym_BANG_AMP,
      anon_sym_nor,
      anon_sym_BANG_PIPE,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_eq,
      anon_sym_EQ,
  [1531] = 1,
    ACTIONS(97), 19,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_cat,
      anon_sym_PLUS,
      anon_sym_xnor,
      anon_sym_TILDE,
      anon_sym_xor,
      anon_sym_CARET,
      anon_sym_nand,
      anon_sym_BANG_AMP,
      anon_sym_nor,
      anon_sym_BANG_PIPE,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_eq,
      anon_sym_EQ,
  [1553] = 3,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 16,
      anon_sym_cat,
      anon_sym_PLUS,
      anon_sym_xnor,
      anon_sym_TILDE,
      anon_sym_xor,
      anon_sym_CARET,
      anon_sym_nand,
      anon_sym_BANG_AMP,
      anon_sym_nor,
      anon_sym_BANG_PIPE,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_eq,
      anon_sym_EQ,
  [1578] = 3,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 16,
      anon_sym_cat,
      anon_sym_PLUS,
      anon_sym_xnor,
      anon_sym_TILDE,
      anon_sym_xor,
      anon_sym_CARET,
      anon_sym_nand,
      anon_sym_BANG_AMP,
      anon_sym_nor,
      anon_sym_BANG_PIPE,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_eq,
      anon_sym_EQ,
  [1603] = 3,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 16,
      anon_sym_cat,
      anon_sym_PLUS,
      anon_sym_xnor,
      anon_sym_TILDE,
      anon_sym_xor,
      anon_sym_CARET,
      anon_sym_nand,
      anon_sym_BANG_AMP,
      anon_sym_nor,
      anon_sym_BANG_PIPE,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_eq,
      anon_sym_EQ,
  [1628] = 8,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      anon_sym_not,
    ACTIONS(168), 1,
      anon_sym_BANG,
    ACTIONS(170), 1,
      sym_identifier,
    ACTIONS(172), 1,
      sym_number,
    STATE(120), 2,
      sym__assignment_right,
      sym_assignment_right_list,
    STATE(166), 2,
      sym__expression_component_reference,
      sym_component_reference,
    STATE(8), 8,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_subscript,
      sym_expression_unary,
      sym_expression_binary,
      sym__constant_definition,
      sym_constant,
  [1662] = 8,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      anon_sym_not,
    ACTIONS(168), 1,
      anon_sym_BANG,
    ACTIONS(170), 1,
      sym_identifier,
    ACTIONS(172), 1,
      sym_number,
    STATE(128), 2,
      sym__declaration_right,
      sym_declaration_right_list,
    STATE(166), 2,
      sym__expression_component_reference,
      sym_component_reference,
    STATE(12), 8,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_subscript,
      sym_expression_unary,
      sym_expression_binary,
      sym__constant_definition,
      sym_constant,
  [1696] = 8,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_not,
    ACTIONS(178), 1,
      anon_sym_BANG,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(182), 1,
      sym_number,
    STATE(119), 2,
      sym__assignment_right,
      sym_assignment_right_list,
    STATE(172), 2,
      sym__expression_component_reference,
      sym_component_reference,
    STATE(9), 8,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_subscript,
      sym_expression_unary,
      sym_expression_binary,
      sym__constant_definition,
      sym_constant,
  [1730] = 8,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_not,
    ACTIONS(178), 1,
      anon_sym_BANG,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(182), 1,
      sym_number,
    STATE(126), 2,
      sym__declaration_right,
      sym_declaration_right_list,
    STATE(172), 2,
      sym__expression_component_reference,
      sym_component_reference,
    STATE(10), 8,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_subscript,
      sym_expression_unary,
      sym_expression_binary,
      sym__constant_definition,
      sym_constant,
  [1764] = 8,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_not,
    ACTIONS(188), 1,
      anon_sym_BANG,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(192), 1,
      sym_number,
    STATE(167), 2,
      sym__expression_component_input,
      sym_expression_component_input_list,
    STATE(170), 2,
      sym__expression_component_reference,
      sym_component_reference,
    STATE(33), 8,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_subscript,
      sym_expression_unary,
      sym_expression_binary,
      sym__constant_definition,
      sym_constant,
  [1798] = 8,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_not,
    ACTIONS(188), 1,
      anon_sym_BANG,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(192), 1,
      sym_number,
    STATE(155), 2,
      sym__expression_component_input,
      sym_expression_component_input_list,
    STATE(170), 2,
      sym__expression_component_reference,
      sym_component_reference,
    STATE(33), 8,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_subscript,
      sym_expression_unary,
      sym_expression_binary,
      sym__constant_definition,
      sym_constant,
  [1832] = 8,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_not,
    ACTIONS(188), 1,
      anon_sym_BANG,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(192), 1,
      sym_number,
    STATE(163), 2,
      sym__expression_component_input,
      sym_expression_component_input_list,
    STATE(170), 2,
      sym__expression_component_reference,
      sym_component_reference,
    STATE(33), 8,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_subscript,
      sym_expression_unary,
      sym_expression_binary,
      sym__constant_definition,
      sym_constant,
  [1866] = 7,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      anon_sym_not,
    ACTIONS(168), 1,
      anon_sym_BANG,
    ACTIONS(170), 1,
      sym_identifier,
    ACTIONS(172), 1,
      sym_number,
    STATE(166), 2,
      sym__expression_component_reference,
      sym_component_reference,
    STATE(21), 8,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_subscript,
      sym_expression_unary,
      sym_expression_binary,
      sym__constant_definition,
      sym_constant,
  [1896] = 7,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      anon_sym_not,
    ACTIONS(168), 1,
      anon_sym_BANG,
    ACTIONS(170), 1,
      sym_identifier,
    ACTIONS(172), 1,
      sym_number,
    STATE(166), 2,
      sym__expression_component_reference,
      sym_component_reference,
    STATE(22), 8,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_subscript,
      sym_expression_unary,
      sym_expression_binary,
      sym__constant_definition,
      sym_constant,
  [1926] = 7,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_not,
    ACTIONS(188), 1,
      anon_sym_BANG,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(192), 1,
      sym_number,
    STATE(170), 2,
      sym__expression_component_reference,
      sym_component_reference,
    STATE(44), 8,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_subscript,
      sym_expression_unary,
      sym_expression_binary,
      sym__constant_definition,
      sym_constant,
  [1956] = 7,
    ACTIONS(199), 1,
      anon_sym_signal,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(194), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(196), 2,
      anon_sym_component,
      anon_sym_synchronized,
    STATE(142), 2,
      sym__reference,
      sym_reference,
    STATE(148), 2,
      sym__assignment_left,
      sym_assignment_left_list,
    STATE(65), 5,
      sym__statement,
      sym_component,
      sym_declaration,
      sym_assignment,
      aux_sym__statements_repeat1,
  [1986] = 8,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_signal,
    ACTIONS(205), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_end,
    ACTIONS(117), 2,
      anon_sym_component,
      anon_sym_synchronized,
    STATE(142), 2,
      sym__reference,
      sym_reference,
    STATE(164), 2,
      sym__assignment_left,
      sym_assignment_left_list,
    STATE(68), 5,
      sym__statement,
      sym_component,
      sym_declaration,
      sym_assignment,
      aux_sym__statements_repeat1,
  [2018] = 7,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_not,
    ACTIONS(188), 1,
      anon_sym_BANG,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(192), 1,
      sym_number,
    STATE(170), 2,
      sym__expression_component_reference,
      sym_component_reference,
    STATE(49), 8,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_subscript,
      sym_expression_unary,
      sym_expression_binary,
      sym__constant_definition,
      sym_constant,
  [2048] = 8,
    ACTIONS(194), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_end,
    ACTIONS(214), 1,
      anon_sym_signal,
    ACTIONS(209), 2,
      anon_sym_component,
      anon_sym_synchronized,
    STATE(142), 2,
      sym__reference,
      sym_reference,
    STATE(164), 2,
      sym__assignment_left,
      sym_assignment_left_list,
    STATE(68), 5,
      sym__statement,
      sym_component,
      sym_declaration,
      sym_assignment,
      aux_sym__statements_repeat1,
  [2080] = 7,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      anon_sym_not,
    ACTIONS(168), 1,
      anon_sym_BANG,
    ACTIONS(170), 1,
      sym_identifier,
    ACTIONS(172), 1,
      sym_number,
    STATE(166), 2,
      sym__expression_component_reference,
      sym_component_reference,
    STATE(26), 8,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_subscript,
      sym_expression_unary,
      sym_expression_binary,
      sym__constant_definition,
      sym_constant,
  [2110] = 7,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_not,
    ACTIONS(178), 1,
      anon_sym_BANG,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(182), 1,
      sym_number,
    STATE(172), 2,
      sym__expression_component_reference,
      sym_component_reference,
    STATE(29), 8,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_subscript,
      sym_expression_unary,
      sym_expression_binary,
      sym__constant_definition,
      sym_constant,
  [2140] = 7,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_not,
    ACTIONS(188), 1,
      anon_sym_BANG,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(192), 1,
      sym_number,
    STATE(170), 2,
      sym__expression_component_reference,
      sym_component_reference,
    STATE(48), 8,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_subscript,
      sym_expression_unary,
      sym_expression_binary,
      sym__constant_definition,
      sym_constant,
  [2170] = 7,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_not,
    ACTIONS(178), 1,
      anon_sym_BANG,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(182), 1,
      sym_number,
    STATE(172), 2,
      sym__expression_component_reference,
      sym_component_reference,
    STATE(27), 8,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_subscript,
      sym_expression_unary,
      sym_expression_binary,
      sym__constant_definition,
      sym_constant,
  [2200] = 7,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_not,
    ACTIONS(188), 1,
      anon_sym_BANG,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(192), 1,
      sym_number,
    STATE(170), 2,
      sym__expression_component_reference,
      sym_component_reference,
    STATE(52), 8,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_subscript,
      sym_expression_unary,
      sym_expression_binary,
      sym__constant_definition,
      sym_constant,
  [2230] = 7,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_not,
    ACTIONS(178), 1,
      anon_sym_BANG,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(182), 1,
      sym_number,
    STATE(172), 2,
      sym__expression_component_reference,
      sym_component_reference,
    STATE(18), 8,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_subscript,
      sym_expression_unary,
      sym_expression_binary,
      sym__constant_definition,
      sym_constant,
  [2260] = 7,
    ACTIONS(9), 1,
      anon_sym_signal,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(7), 2,
      anon_sym_component,
      anon_sym_synchronized,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(142), 2,
      sym__reference,
      sym_reference,
    STATE(148), 2,
      sym__assignment_left,
      sym_assignment_left_list,
    STATE(65), 5,
      sym__statement,
      sym_component,
      sym_declaration,
      sym_assignment,
      aux_sym__statements_repeat1,
  [2290] = 7,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_not,
    ACTIONS(188), 1,
      anon_sym_BANG,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(192), 1,
      sym_number,
    STATE(170), 2,
      sym__expression_component_reference,
      sym_component_reference,
    STATE(54), 8,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_subscript,
      sym_expression_unary,
      sym_expression_binary,
      sym__constant_definition,
      sym_constant,
  [2320] = 7,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_not,
    ACTIONS(188), 1,
      anon_sym_BANG,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(192), 1,
      sym_number,
    STATE(170), 2,
      sym__expression_component_reference,
      sym_component_reference,
    STATE(53), 8,
      sym__expression,
      sym__expression_primary,
      sym_expression_component,
      sym_expression_subscript,
      sym_expression_unary,
      sym_expression_binary,
      sym__constant_definition,
      sym_constant,
  [2350] = 3,
    ACTIONS(221), 1,
      anon_sym_COLON,
    ACTIONS(219), 4,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      sym_identifier,
    ACTIONS(217), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
  [2367] = 5,
    ACTIONS(172), 1,
      sym_number,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(150), 1,
      sym__component_input_list,
    STATE(173), 1,
      sym_component_inputs,
    STATE(134), 6,
      sym__component_input,
      sym__definition,
      sym__signal_definition,
      sym_signal_definition,
      sym__constant_definition,
      sym_constant,
  [2388] = 5,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(227), 1,
      sym_number,
    STATE(38), 1,
      sym_component_outputs,
    STATE(121), 1,
      sym__component_output_list,
    STATE(107), 6,
      sym__component_output,
      sym__definition,
      sym__signal_definition,
      sym_signal_definition,
      sym__constant_definition,
      sym_constant,
  [2409] = 5,
    ACTIONS(172), 1,
      sym_number,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(150), 1,
      sym__component_input_list,
    STATE(152), 1,
      sym_component_inputs,
    STATE(134), 6,
      sym__component_input,
      sym__definition,
      sym__signal_definition,
      sym_signal_definition,
      sym__constant_definition,
      sym_constant,
  [2430] = 5,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(227), 1,
      sym_number,
    STATE(35), 1,
      sym_component_outputs,
    STATE(121), 1,
      sym__component_output_list,
    STATE(107), 6,
      sym__component_output,
      sym__definition,
      sym__signal_definition,
      sym_signal_definition,
      sym__constant_definition,
      sym_constant,
  [2451] = 4,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_declaration_left_list_repeat1,
    ACTIONS(229), 2,
      sym_comment,
      anon_sym_LT_EQ,
    ACTIONS(231), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [2469] = 2,
    ACTIONS(238), 4,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      sym_identifier,
    ACTIONS(236), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
  [2483] = 4,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_declaration_left_list_repeat1,
    ACTIONS(229), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LT_EQ,
    ACTIONS(231), 4,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      sym_identifier,
  [2501] = 4,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_declaration_left_list_repeat1,
    ACTIONS(243), 2,
      sym_comment,
      anon_sym_LT_EQ,
    ACTIONS(245), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [2519] = 4,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_declaration_left_list_repeat1,
    ACTIONS(249), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LT_EQ,
    ACTIONS(251), 4,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      sym_identifier,
  [2537] = 4,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_declaration_left_list_repeat1,
    ACTIONS(243), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LT_EQ,
    ACTIONS(245), 4,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      sym_identifier,
  [2555] = 3,
    ACTIONS(255), 1,
      anon_sym_COLON,
    ACTIONS(217), 3,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
    ACTIONS(219), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [2571] = 4,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_declaration_left_list_repeat1,
    ACTIONS(249), 2,
      sym_comment,
      anon_sym_LT_EQ,
    ACTIONS(251), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [2589] = 2,
    ACTIONS(229), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
    ACTIONS(231), 4,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      sym_identifier,
  [2602] = 3,
    ACTIONS(257), 1,
      anon_sym_COLON,
    ACTIONS(259), 1,
      sym_number,
    STATE(144), 6,
      sym__subscript,
      sym__index,
      sym__range,
      sym_range_closed,
      sym_range_open_left,
      sym_range_open_right,
  [2617] = 4,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_declaration_right_list_repeat1,
    ACTIONS(87), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [2634] = 3,
    ACTIONS(264), 1,
      anon_sym_COLON,
    ACTIONS(266), 1,
      sym_number,
    STATE(31), 6,
      sym__subscript,
      sym__index,
      sym__range,
      sym_range_closed,
      sym_range_open_left,
      sym_range_open_right,
  [2649] = 3,
    ACTIONS(268), 1,
      anon_sym_COLON,
    ACTIONS(21), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(23), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [2664] = 3,
    ACTIONS(257), 1,
      anon_sym_COLON,
    ACTIONS(259), 1,
      sym_number,
    STATE(25), 6,
      sym__subscript,
      sym__index,
      sym__range,
      sym_range_closed,
      sym_range_open_left,
      sym_range_open_right,
  [2679] = 4,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_declaration_right_list_repeat1,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(272), 4,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      sym_identifier,
  [2696] = 3,
    ACTIONS(172), 1,
      sym_number,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(143), 6,
      sym__component_input,
      sym__definition,
      sym__signal_definition,
      sym_signal_definition,
      sym__constant_definition,
      sym_constant,
  [2711] = 4,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_declaration_right_list_repeat1,
    ACTIONS(274), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(276), 4,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      sym_identifier,
  [2728] = 4,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym__component_output_list_repeat1,
    ACTIONS(280), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [2745] = 3,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(227), 1,
      sym_number,
    STATE(112), 6,
      sym__component_output,
      sym__definition,
      sym__signal_definition,
      sym_signal_definition,
      sym__constant_definition,
      sym_constant,
  [2760] = 4,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(274), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_declaration_right_list_repeat1,
    ACTIONS(276), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [2777] = 4,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_declaration_right_list_repeat1,
    ACTIONS(272), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [2794] = 4,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_declaration_right_list_repeat1,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(87), 4,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      sym_identifier,
  [2811] = 2,
    ACTIONS(236), 3,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
    ACTIONS(238), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [2824] = 3,
    ACTIONS(287), 1,
      anon_sym_COLON,
    ACTIONS(289), 1,
      sym_number,
    STATE(51), 6,
      sym__subscript,
      sym__index,
      sym__range,
      sym_range_closed,
      sym_range_open_left,
      sym_range_open_right,
  [2839] = 4,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym__component_output_list_repeat1,
    ACTIONS(293), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [2856] = 2,
    ACTIONS(229), 3,
      sym_comment,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
    ACTIONS(231), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [2869] = 4,
    ACTIONS(295), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym__component_output_list_repeat1,
    ACTIONS(297), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [2886] = 3,
    ACTIONS(302), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LT_EQ,
    ACTIONS(304), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [2900] = 4,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    ACTIONS(310), 1,
      sym_comment,
    STATE(111), 1,
      aux_sym__comments_repeat1,
    ACTIONS(313), 4,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      sym_identifier,
  [2916] = 2,
    ACTIONS(295), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(297), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [2928] = 3,
    ACTIONS(315), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym__comments_repeat1,
    ACTIONS(313), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [2942] = 2,
    ACTIONS(75), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(77), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [2954] = 3,
    ACTIONS(318), 1,
      anon_sym_LT_EQ,
    ACTIONS(302), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(304), 4,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      sym_identifier,
  [2968] = 4,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(322), 1,
      sym_comment,
    STATE(111), 1,
      aux_sym__comments_repeat1,
    ACTIONS(324), 4,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      sym_identifier,
  [2984] = 3,
    ACTIONS(326), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym__comments_repeat1,
    ACTIONS(324), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [2998] = 2,
    ACTIONS(328), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(330), 4,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      sym_identifier,
  [3009] = 2,
    ACTIONS(332), 1,
      sym_comment,
    ACTIONS(334), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [3020] = 2,
    ACTIONS(332), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(334), 4,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      sym_identifier,
  [3031] = 2,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(293), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [3042] = 2,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(338), 4,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      sym_identifier,
  [3053] = 3,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(115), 2,
      sym__declaration_left,
      sym_declaration_left_list,
    STATE(87), 3,
      sym__declarator,
      sym__signal_definition,
      sym_signal_definition,
  [3066] = 2,
    ACTIONS(336), 1,
      sym_comment,
    ACTIONS(338), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [3077] = 2,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(330), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [3088] = 2,
    ACTIONS(340), 1,
      sym_comment,
    ACTIONS(342), 5,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_end,
      anon_sym_signal,
      sym_identifier,
  [3099] = 3,
    ACTIONS(225), 1,
      sym_identifier,
    STATE(110), 2,
      sym__declaration_left,
      sym_declaration_left_list,
    STATE(90), 3,
      sym__declarator,
      sym__signal_definition,
      sym_signal_definition,
  [3112] = 2,
    ACTIONS(340), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(342), 4,
      anon_sym_component,
      anon_sym_synchronized,
      anon_sym_signal,
      sym_identifier,
  [3123] = 2,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(91), 3,
      sym__declarator,
      sym__signal_definition,
      sym_signal_definition,
  [3132] = 2,
    ACTIONS(225), 1,
      sym_identifier,
    STATE(108), 3,
      sym__declarator,
      sym__signal_definition,
      sym_signal_definition,
  [3141] = 3,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      anon_sym_COLON_COLON,
    STATE(131), 1,
      aux_sym_component_reference_repeat1,
  [3151] = 2,
    ACTIONS(349), 1,
      sym_identifier,
    STATE(146), 2,
      sym__reference,
      sym_reference,
  [3159] = 3,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    ACTIONS(353), 1,
      anon_sym_LT_EQ,
    STATE(136), 1,
      aux_sym_assignment_left_list_repeat1,
  [3169] = 3,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym__component_input_list_repeat1,
  [3179] = 3,
    ACTIONS(19), 1,
      anon_sym_COLON_COLON,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      aux_sym_component_reference_repeat1,
  [3189] = 3,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_LT_EQ,
    STATE(136), 1,
      aux_sym_assignment_left_list_repeat1,
  [3199] = 3,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      aux_sym__component_input_list_repeat1,
  [3209] = 3,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_declaration_right_list_repeat1,
  [3219] = 3,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym__component_input_list_repeat1,
  [3229] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      aux_sym_declaration_right_list_repeat1,
  [3239] = 2,
    ACTIONS(380), 1,
      anon_sym_DOT,
    ACTIONS(378), 2,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
  [3247] = 3,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_LT_EQ,
    STATE(133), 1,
      aux_sym_assignment_left_list_repeat1,
  [3257] = 1,
    ACTIONS(366), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3262] = 1,
    ACTIONS(384), 2,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
  [3267] = 1,
    ACTIONS(344), 2,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
  [3272] = 1,
    ACTIONS(364), 2,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
  [3277] = 1,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
  [3281] = 1,
    ACTIONS(388), 1,
      anon_sym_LT_EQ,
  [3285] = 1,
    ACTIONS(390), 1,
      sym_number,
  [3289] = 1,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
  [3293] = 1,
    ACTIONS(392), 1,
      sym_number,
  [3297] = 1,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
  [3301] = 1,
    ACTIONS(396), 1,
      sym_identifier,
  [3305] = 1,
    ACTIONS(398), 1,
      sym_number,
  [3309] = 1,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
  [3313] = 1,
    ACTIONS(402), 1,
      sym_identifier,
  [3317] = 1,
    ACTIONS(404), 1,
      anon_sym_end,
  [3321] = 1,
    ACTIONS(406), 1,
      sym_number,
  [3325] = 1,
    ACTIONS(408), 1,
      sym_number,
  [3329] = 1,
    ACTIONS(410), 1,
      sym_number,
  [3333] = 1,
    ACTIONS(412), 1,
      sym_number,
  [3337] = 1,
    ACTIONS(414), 1,
      sym_number,
  [3341] = 1,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
  [3345] = 1,
    ACTIONS(418), 1,
      anon_sym_LT_EQ,
  [3349] = 1,
    ACTIONS(420), 1,
      anon_sym_EQ_GT,
  [3353] = 1,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
  [3357] = 1,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
  [3361] = 1,
    ACTIONS(426), 1,
      ts_builtin_sym_end,
  [3365] = 1,
    ACTIONS(428), 1,
      sym_number,
  [3369] = 1,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
  [3373] = 1,
    ACTIONS(432), 1,
      anon_sym_EQ_GT,
  [3377] = 1,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
  [3381] = 1,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
  [3385] = 1,
    ACTIONS(438), 1,
      anon_sym_end,
  [3389] = 1,
    ACTIONS(440), 1,
      anon_sym_LPAREN,
  [3393] = 1,
    ACTIONS(442), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 109,
  [SMALL_STATE(6)] = 142,
  [SMALL_STATE(7)] = 175,
  [SMALL_STATE(8)] = 205,
  [SMALL_STATE(9)] = 245,
  [SMALL_STATE(10)] = 285,
  [SMALL_STATE(11)] = 325,
  [SMALL_STATE(12)] = 357,
  [SMALL_STATE(13)] = 397,
  [SMALL_STATE(14)] = 429,
  [SMALL_STATE(15)] = 459,
  [SMALL_STATE(16)] = 489,
  [SMALL_STATE(17)] = 521,
  [SMALL_STATE(18)] = 550,
  [SMALL_STATE(19)] = 585,
  [SMALL_STATE(20)] = 614,
  [SMALL_STATE(21)] = 643,
  [SMALL_STATE(22)] = 672,
  [SMALL_STATE(23)] = 707,
  [SMALL_STATE(24)] = 736,
  [SMALL_STATE(25)] = 765,
  [SMALL_STATE(26)] = 794,
  [SMALL_STATE(27)] = 823,
  [SMALL_STATE(28)] = 852,
  [SMALL_STATE(29)] = 881,
  [SMALL_STATE(30)] = 910,
  [SMALL_STATE(31)] = 939,
  [SMALL_STATE(32)] = 968,
  [SMALL_STATE(33)] = 999,
  [SMALL_STATE(34)] = 1030,
  [SMALL_STATE(35)] = 1055,
  [SMALL_STATE(36)] = 1098,
  [SMALL_STATE(37)] = 1123,
  [SMALL_STATE(38)] = 1148,
  [SMALL_STATE(39)] = 1191,
  [SMALL_STATE(40)] = 1213,
  [SMALL_STATE(41)] = 1235,
  [SMALL_STATE(42)] = 1275,
  [SMALL_STATE(43)] = 1315,
  [SMALL_STATE(44)] = 1337,
  [SMALL_STATE(45)] = 1359,
  [SMALL_STATE(46)] = 1399,
  [SMALL_STATE(47)] = 1439,
  [SMALL_STATE(48)] = 1461,
  [SMALL_STATE(49)] = 1487,
  [SMALL_STATE(50)] = 1509,
  [SMALL_STATE(51)] = 1531,
  [SMALL_STATE(52)] = 1553,
  [SMALL_STATE(53)] = 1578,
  [SMALL_STATE(54)] = 1603,
  [SMALL_STATE(55)] = 1628,
  [SMALL_STATE(56)] = 1662,
  [SMALL_STATE(57)] = 1696,
  [SMALL_STATE(58)] = 1730,
  [SMALL_STATE(59)] = 1764,
  [SMALL_STATE(60)] = 1798,
  [SMALL_STATE(61)] = 1832,
  [SMALL_STATE(62)] = 1866,
  [SMALL_STATE(63)] = 1896,
  [SMALL_STATE(64)] = 1926,
  [SMALL_STATE(65)] = 1956,
  [SMALL_STATE(66)] = 1986,
  [SMALL_STATE(67)] = 2018,
  [SMALL_STATE(68)] = 2048,
  [SMALL_STATE(69)] = 2080,
  [SMALL_STATE(70)] = 2110,
  [SMALL_STATE(71)] = 2140,
  [SMALL_STATE(72)] = 2170,
  [SMALL_STATE(73)] = 2200,
  [SMALL_STATE(74)] = 2230,
  [SMALL_STATE(75)] = 2260,
  [SMALL_STATE(76)] = 2290,
  [SMALL_STATE(77)] = 2320,
  [SMALL_STATE(78)] = 2350,
  [SMALL_STATE(79)] = 2367,
  [SMALL_STATE(80)] = 2388,
  [SMALL_STATE(81)] = 2409,
  [SMALL_STATE(82)] = 2430,
  [SMALL_STATE(83)] = 2451,
  [SMALL_STATE(84)] = 2469,
  [SMALL_STATE(85)] = 2483,
  [SMALL_STATE(86)] = 2501,
  [SMALL_STATE(87)] = 2519,
  [SMALL_STATE(88)] = 2537,
  [SMALL_STATE(89)] = 2555,
  [SMALL_STATE(90)] = 2571,
  [SMALL_STATE(91)] = 2589,
  [SMALL_STATE(92)] = 2602,
  [SMALL_STATE(93)] = 2617,
  [SMALL_STATE(94)] = 2634,
  [SMALL_STATE(95)] = 2649,
  [SMALL_STATE(96)] = 2664,
  [SMALL_STATE(97)] = 2679,
  [SMALL_STATE(98)] = 2696,
  [SMALL_STATE(99)] = 2711,
  [SMALL_STATE(100)] = 2728,
  [SMALL_STATE(101)] = 2745,
  [SMALL_STATE(102)] = 2760,
  [SMALL_STATE(103)] = 2777,
  [SMALL_STATE(104)] = 2794,
  [SMALL_STATE(105)] = 2811,
  [SMALL_STATE(106)] = 2824,
  [SMALL_STATE(107)] = 2839,
  [SMALL_STATE(108)] = 2856,
  [SMALL_STATE(109)] = 2869,
  [SMALL_STATE(110)] = 2886,
  [SMALL_STATE(111)] = 2900,
  [SMALL_STATE(112)] = 2916,
  [SMALL_STATE(113)] = 2928,
  [SMALL_STATE(114)] = 2942,
  [SMALL_STATE(115)] = 2954,
  [SMALL_STATE(116)] = 2968,
  [SMALL_STATE(117)] = 2984,
  [SMALL_STATE(118)] = 2998,
  [SMALL_STATE(119)] = 3009,
  [SMALL_STATE(120)] = 3020,
  [SMALL_STATE(121)] = 3031,
  [SMALL_STATE(122)] = 3042,
  [SMALL_STATE(123)] = 3053,
  [SMALL_STATE(124)] = 3066,
  [SMALL_STATE(125)] = 3077,
  [SMALL_STATE(126)] = 3088,
  [SMALL_STATE(127)] = 3099,
  [SMALL_STATE(128)] = 3112,
  [SMALL_STATE(129)] = 3123,
  [SMALL_STATE(130)] = 3132,
  [SMALL_STATE(131)] = 3141,
  [SMALL_STATE(132)] = 3151,
  [SMALL_STATE(133)] = 3159,
  [SMALL_STATE(134)] = 3169,
  [SMALL_STATE(135)] = 3179,
  [SMALL_STATE(136)] = 3189,
  [SMALL_STATE(137)] = 3199,
  [SMALL_STATE(138)] = 3209,
  [SMALL_STATE(139)] = 3219,
  [SMALL_STATE(140)] = 3229,
  [SMALL_STATE(141)] = 3239,
  [SMALL_STATE(142)] = 3247,
  [SMALL_STATE(143)] = 3257,
  [SMALL_STATE(144)] = 3262,
  [SMALL_STATE(145)] = 3267,
  [SMALL_STATE(146)] = 3272,
  [SMALL_STATE(147)] = 3277,
  [SMALL_STATE(148)] = 3281,
  [SMALL_STATE(149)] = 3285,
  [SMALL_STATE(150)] = 3289,
  [SMALL_STATE(151)] = 3293,
  [SMALL_STATE(152)] = 3297,
  [SMALL_STATE(153)] = 3301,
  [SMALL_STATE(154)] = 3305,
  [SMALL_STATE(155)] = 3309,
  [SMALL_STATE(156)] = 3313,
  [SMALL_STATE(157)] = 3317,
  [SMALL_STATE(158)] = 3321,
  [SMALL_STATE(159)] = 3325,
  [SMALL_STATE(160)] = 3329,
  [SMALL_STATE(161)] = 3333,
  [SMALL_STATE(162)] = 3337,
  [SMALL_STATE(163)] = 3341,
  [SMALL_STATE(164)] = 3345,
  [SMALL_STATE(165)] = 3349,
  [SMALL_STATE(166)] = 3353,
  [SMALL_STATE(167)] = 3357,
  [SMALL_STATE(168)] = 3361,
  [SMALL_STATE(169)] = 3365,
  [SMALL_STATE(170)] = 3369,
  [SMALL_STATE(171)] = 3373,
  [SMALL_STATE(172)] = 3377,
  [SMALL_STATE(173)] = 3381,
  [SMALL_STATE(174)] = 3385,
  [SMALL_STATE(175)] = 3389,
  [SMALL_STATE(176)] = 3393,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_primary, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_primary, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_component_reference, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant_definition, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant_definition, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__index, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__index, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_open_right, 2, .production_id = 7),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_open_right, 2, .production_id = 7),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_closed, 3, .production_id = 9),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_closed, 3, .production_id = 9),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_right, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_right, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_right, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration_right, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_open_left, 2, .production_id = 6),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_open_left, 2, .production_id = 6),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 3, .production_id = 10),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 3, .production_id = 10),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_component, 4, .production_id = 11),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_component, 4, .production_id = 11),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_right_list_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_right_list_repeat1, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_unary, 2, .production_id = 8),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_unary, 2, .production_id = 8),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_primary, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_primary, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_subscript, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_subscript, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_binary, 3, .production_id = 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_binary, 3, .production_id = 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_component_input, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_body, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__source_block, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__source_block, 2), SHIFT_REPEAT(116),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__source_block, 2), SHIFT_REPEAT(153),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__source_block, 2), SHIFT_REPEAT(123),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__source_block, 2), SHIFT_REPEAT(141),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__source_block, 2), SHIFT_REPEAT(117),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__source_block, 2), SHIFT_REPEAT(176),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__source_block, 2),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__source_block, 2), SHIFT_REPEAT(127),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(153),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(123),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(141),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 1),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(176),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(127),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__signal_definition, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__signal_definition, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_left_list_repeat1, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_left_list_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_left_list_repeat1, 2), SHIFT_REPEAT(130),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_definition, 3, .production_id = 4),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_definition, 3, .production_id = 4),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_left_list_repeat1, 2), SHIFT_REPEAT(129),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_left_list, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_left_list, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_left, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration_left, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_right_list_repeat1, 2), SHIFT_REPEAT(74),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_right_list, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_right_list, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_right_list, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_right_list, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_output_list, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__component_output_list, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_right_list_repeat1, 2), SHIFT_REPEAT(63),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_outputs, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_outputs, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__component_output_list_repeat1, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__component_output_list_repeat1, 2),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__component_output_list_repeat1, 2), SHIFT_REPEAT(101),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2, .production_id = 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 2, .production_id = 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comments_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comments_repeat1, 2), SHIFT_REPEAT(111),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comments_repeat1, 2),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comments_repeat1, 2), SHIFT_REPEAT(113),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comments, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comments, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 9, .production_id = 13),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 9, .production_id = 13),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 8, .production_id = 12),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 8, .production_id = 12),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 5),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 5),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_reference_repeat1, 2),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_reference_repeat1, 2), SHIFT_REPEAT(156),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_left_list, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_inputs, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_reference, 2),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_left_list_repeat1, 2), SHIFT_REPEAT(132),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_left_list_repeat1, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__component_input_list_repeat1, 2),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__component_input_list_repeat1, 2), SHIFT_REPEAT(98),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_right_list_repeat1, 2), SHIFT_REPEAT(71),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component_input_list, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_component_input_list, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reference, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_left, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 3, .production_id = 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [426] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
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

TS_PUBLIC const TSLanguage *tree_sitter_cmdl() {
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

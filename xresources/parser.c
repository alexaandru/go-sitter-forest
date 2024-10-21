#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 91
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 1
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 20

enum ts_symbol_identifiers {
  aux_sym__line_token1 = 1,
  sym_comment = 2,
  sym_preprocessor_comment = 3,
  anon_sym_COLON = 4,
  aux_sym_resource_token1 = 5,
  anon_sym_DOT = 6,
  anon_sym_STAR = 7,
  sym_component = 8,
  sym_any_component = 9,
  sym_escape_sequence = 10,
  aux_sym_resource_value_token1 = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_string_token1 = 13,
  aux_sym_include_directive_token1 = 14,
  aux_sym_define_directive_token1 = 15,
  anon_sym_LPAREN = 16,
  anon_sym_DOT_DOT_DOT = 17,
  anon_sym_COMMA = 18,
  anon_sym_RPAREN = 19,
  sym_expansion = 20,
  aux_sym_undef_directive_token1 = 21,
  aux_sym_if_directive_token1 = 22,
  aux_sym_ifdef_directive_token1 = 23,
  aux_sym_ifdef_directive_token2 = 24,
  aux_sym__if_directive_body_token1 = 25,
  aux_sym_elif_directive_token1 = 26,
  aux_sym_elifdef_directive_token1 = 27,
  aux_sym_elifdef_directive_token2 = 28,
  aux_sym_else_directive_token1 = 29,
  sym_directive = 30,
  sym_identifier = 31,
  sym_resources = 32,
  sym__line = 33,
  sym__statement = 34,
  sym_resource = 35,
  sym_components = 36,
  sym_binding = 37,
  sym_resource_value = 38,
  sym_string = 39,
  sym_include_directive = 40,
  sym_define_directive = 41,
  sym_define_function_directive = 42,
  sym_parameters = 43,
  sym_undef_directive = 44,
  sym_if_directive = 45,
  sym_ifdef_directive = 46,
  sym__if_directive_body = 47,
  sym_elif_directive = 48,
  sym_elifdef_directive = 49,
  sym_else_directive = 50,
  sym_simple_directive = 51,
  aux_sym_resources_repeat1 = 52,
  aux_sym_resource_repeat1 = 53,
  aux_sym_components_repeat1 = 54,
  aux_sym_components_repeat2 = 55,
  aux_sym_resource_value_repeat1 = 56,
  aux_sym_parameters_repeat1 = 57,
  aux_sym__if_directive_body_repeat1 = 58,
  alias_sym_body = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__line_token1] = "_line_token1",
  [sym_comment] = "comment",
  [sym_preprocessor_comment] = "preprocessor_comment",
  [anon_sym_COLON] = ":",
  [aux_sym_resource_token1] = "resource_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_STAR] = "*",
  [sym_component] = "component",
  [sym_any_component] = "any_component",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_resource_value_token1] = "resource_value_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_content",
  [aux_sym_include_directive_token1] = "#include",
  [aux_sym_define_directive_token1] = "#define",
  [anon_sym_LPAREN] = "(",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_expansion] = "expansion",
  [aux_sym_undef_directive_token1] = "#undef",
  [aux_sym_if_directive_token1] = "#if",
  [aux_sym_ifdef_directive_token1] = "#ifdef",
  [aux_sym_ifdef_directive_token2] = "#ifndef",
  [aux_sym__if_directive_body_token1] = "#endif",
  [aux_sym_elif_directive_token1] = "#elif",
  [aux_sym_elifdef_directive_token1] = "#elifdef",
  [aux_sym_elifdef_directive_token2] = "#elifndef",
  [aux_sym_else_directive_token1] = "#else",
  [sym_directive] = "directive",
  [sym_identifier] = "identifier",
  [sym_resources] = "resources",
  [sym__line] = "_line",
  [sym__statement] = "_statement",
  [sym_resource] = "resource",
  [sym_components] = "components",
  [sym_binding] = "binding",
  [sym_resource_value] = "resource_value",
  [sym_string] = "string",
  [sym_include_directive] = "include_directive",
  [sym_define_directive] = "define_directive",
  [sym_define_function_directive] = "define_function_directive",
  [sym_parameters] = "parameters",
  [sym_undef_directive] = "undef_directive",
  [sym_if_directive] = "if_directive",
  [sym_ifdef_directive] = "ifdef_directive",
  [sym__if_directive_body] = "_if_directive_body",
  [sym_elif_directive] = "elif_directive",
  [sym_elifdef_directive] = "elifdef_directive",
  [sym_else_directive] = "else_directive",
  [sym_simple_directive] = "simple_directive",
  [aux_sym_resources_repeat1] = "resources_repeat1",
  [aux_sym_resource_repeat1] = "resource_repeat1",
  [aux_sym_components_repeat1] = "components_repeat1",
  [aux_sym_components_repeat2] = "components_repeat2",
  [aux_sym_resource_value_repeat1] = "resource_value_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym__if_directive_body_repeat1] = "_if_directive_body_repeat1",
  [alias_sym_body] = "body",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [sym_comment] = sym_comment,
  [sym_preprocessor_comment] = sym_preprocessor_comment,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_resource_token1] = aux_sym_resource_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_component] = sym_component,
  [sym_any_component] = sym_any_component,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_resource_value_token1] = aux_sym_resource_value_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_include_directive_token1] = aux_sym_include_directive_token1,
  [aux_sym_define_directive_token1] = aux_sym_define_directive_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_expansion] = sym_expansion,
  [aux_sym_undef_directive_token1] = aux_sym_undef_directive_token1,
  [aux_sym_if_directive_token1] = aux_sym_if_directive_token1,
  [aux_sym_ifdef_directive_token1] = aux_sym_ifdef_directive_token1,
  [aux_sym_ifdef_directive_token2] = aux_sym_ifdef_directive_token2,
  [aux_sym__if_directive_body_token1] = aux_sym__if_directive_body_token1,
  [aux_sym_elif_directive_token1] = aux_sym_elif_directive_token1,
  [aux_sym_elifdef_directive_token1] = aux_sym_elifdef_directive_token1,
  [aux_sym_elifdef_directive_token2] = aux_sym_elifdef_directive_token2,
  [aux_sym_else_directive_token1] = aux_sym_else_directive_token1,
  [sym_directive] = sym_directive,
  [sym_identifier] = sym_identifier,
  [sym_resources] = sym_resources,
  [sym__line] = sym__line,
  [sym__statement] = sym__statement,
  [sym_resource] = sym_resource,
  [sym_components] = sym_components,
  [sym_binding] = sym_binding,
  [sym_resource_value] = sym_resource_value,
  [sym_string] = sym_string,
  [sym_include_directive] = sym_include_directive,
  [sym_define_directive] = sym_define_directive,
  [sym_define_function_directive] = sym_define_function_directive,
  [sym_parameters] = sym_parameters,
  [sym_undef_directive] = sym_undef_directive,
  [sym_if_directive] = sym_if_directive,
  [sym_ifdef_directive] = sym_ifdef_directive,
  [sym__if_directive_body] = sym__if_directive_body,
  [sym_elif_directive] = sym_elif_directive,
  [sym_elifdef_directive] = sym_elifdef_directive,
  [sym_else_directive] = sym_else_directive,
  [sym_simple_directive] = sym_simple_directive,
  [aux_sym_resources_repeat1] = aux_sym_resources_repeat1,
  [aux_sym_resource_repeat1] = aux_sym_resource_repeat1,
  [aux_sym_components_repeat1] = aux_sym_components_repeat1,
  [aux_sym_components_repeat2] = aux_sym_components_repeat2,
  [aux_sym_resource_value_repeat1] = aux_sym_resource_value_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym__if_directive_body_repeat1] = aux_sym__if_directive_body_repeat1,
  [alias_sym_body] = alias_sym_body,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_preprocessor_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_resource_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_any_component] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_resource_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_include_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_define_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_expansion] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_undef_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_if_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ifdef_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ifdef_directive_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__if_directive_body_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_elif_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_elifdef_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_elifdef_directive_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_else_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_resources] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_resource] = {
    .visible = true,
    .named = true,
  },
  [sym_components] = {
    .visible = true,
    .named = true,
  },
  [sym_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_resource_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_include_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_define_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_define_function_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_undef_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_if_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_ifdef_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__if_directive_body] = {
    .visible = false,
    .named = true,
  },
  [sym_elif_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_elifdef_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_else_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_directive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_resources_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_resource_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_components_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_components_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_resource_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__if_directive_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_body] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_alternative = 1,
  field_condition = 2,
  field_consequence = 3,
  field_file = 4,
  field_name = 5,
  field_parameters = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_file] = "file",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 3},
  [9] = {.index = 14, .length = 3},
  [10] = {.index = 17, .length = 1},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 1},
  [13] = {.index = 21, .length = 1},
  [14] = {.index = 22, .length = 1},
  [15] = {.index = 23, .length = 2},
  [16] = {.index = 25, .length = 2},
  [17] = {.index = 27, .length = 2},
  [18] = {.index = 29, .length = 2},
  [19] = {.index = 31, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_file, 1},
  [2] =
    {field_name, 1},
  [3] =
    {field_name, 0},
    {field_value, 1},
  [5] =
    {field_name, 1},
    {field_value, 2},
  [7] =
    {field_name, 1},
    {field_parameters, 2},
  [9] =
    {field_name, 0},
    {field_value, 2},
  [11] =
    {field_name, 1},
    {field_parameters, 2},
    {field_value, 3},
  [14] =
    {field_alternative, 3, .inherited = true},
    {field_condition, 1},
    {field_consequence, 3, .inherited = true},
  [17] =
    {field_alternative, 0},
  [18] =
    {field_name, 0},
    {field_value, 3},
  [20] =
    {field_condition, 1},
  [21] =
    {field_consequence, 0},
  [22] =
    {field_alternative, 0, .inherited = true},
  [23] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1, .inherited = true},
  [25] =
    {field_alternative, 1},
    {field_consequence, 0},
  [27] =
    {field_alternative, 1, .inherited = true},
    {field_consequence, 0},
  [29] =
    {field_alternative, 0, .inherited = true},
    {field_alternative, 1},
  [31] =
    {field_alternative, 1, .inherited = true},
    {field_alternative, 2},
    {field_consequence, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [13] = {
    [0] = alias_sym_body,
  },
  [16] = {
    [0] = alias_sym_body,
  },
  [17] = {
    [0] = alias_sym_body,
  },
  [19] = {
    [0] = alias_sym_body,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_resources_repeat1, 2,
    aux_sym_resources_repeat1,
    alias_sym_body,
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
  [13] = 9,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 16,
  [19] = 16,
  [20] = 15,
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
  [88] = 82,
  [89] = 82,
  [90] = 90,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      ADVANCE_MAP(
        '\n', 35,
        '!', 38,
        '(', 73,
        ')', 76,
        '*', 57,
        ',', 75,
        '.', 56,
        '/', 83,
        ':', 53,
        '?', 59,
        '\t', 54,
        ' ', 54,
      );
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(85);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 35,
        '!', 39,
        '#', 14,
        '*', 57,
        '.', 56,
        '/', 8,
        '?', 59,
        '\t', 54,
        ' ', 54,
      );
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 35,
        '!', 39,
        '#', 15,
        '*', 57,
        '.', 56,
        '/', 8,
        '?', 59,
        '\t', 54,
        ' ', 54,
      );
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(85);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(85);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 6:
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(49);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(74);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'u') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'u') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'u') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(93);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(91);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(95);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(97);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(60);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(85);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      ADVANCE_MAP(
        '\n', 35,
        '!', 39,
        '"', 64,
        '#', 16,
        ')', 76,
        '*', 57,
        ',', 75,
        '.', 56,
        '/', 8,
        ':', 53,
        '?', 59,
        '\t', 54,
        ' ', 54,
      );
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(38);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(49);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(49);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(70);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_resource_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(70);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_component);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_any_component);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(49);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '\\' ||
          lookahead == 'n') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(31);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(49);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_define_directive_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\r') ADVANCE(41);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\r') ADVANCE(86);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\r') ADVANCE(84);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_expansion);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_undef_directive_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_if_directive_token1);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_ifdef_directive_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_ifdef_directive_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__if_directive_body_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__if_directive_body_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_elif_directive_token1);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_elif_directive_token1);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_elifdef_directive_token1);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_elifdef_directive_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_elifdef_directive_token2);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_elifdef_directive_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_else_directive_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_else_directive_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'c') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'd') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'd') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'd') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'd') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'd') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'f') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'f') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'f') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'f') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'f') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'f') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'f') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'f') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 's') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'i') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'l') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'n') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'n') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'n') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_directive);
      if (lookahead == 'u') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_directive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 33},
  [25] = {.lex_state = 33},
  [26] = {.lex_state = 33},
  [27] = {.lex_state = 33},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 33},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 33},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 33},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 33},
  [38] = {.lex_state = 33},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 33},
  [41] = {.lex_state = 33},
  [42] = {.lex_state = 33},
  [43] = {.lex_state = 33},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 33},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 33},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 33},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 33},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 69},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 33},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_preprocessor_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_component] = ACTIONS(1),
    [sym_any_component] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_expansion] = ACTIONS(1),
  },
  [1] = {
    [sym_resources] = STATE(83),
    [sym__line] = STATE(18),
    [sym__statement] = STATE(82),
    [sym_resource] = STATE(82),
    [sym_components] = STATE(59),
    [sym_binding] = STATE(24),
    [sym_include_directive] = STATE(82),
    [sym_define_directive] = STATE(82),
    [sym_define_function_directive] = STATE(82),
    [sym_undef_directive] = STATE(82),
    [sym_if_directive] = STATE(82),
    [sym_ifdef_directive] = STATE(82),
    [sym_simple_directive] = STATE(82),
    [aux_sym_resources_repeat1] = STATE(11),
    [aux_sym_components_repeat1] = STATE(24),
    [aux_sym_components_repeat2] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_component] = ACTIONS(13),
    [sym_any_component] = ACTIONS(15),
    [aux_sym_include_directive_token1] = ACTIONS(17),
    [aux_sym_define_directive_token1] = ACTIONS(19),
    [aux_sym_undef_directive_token1] = ACTIONS(21),
    [aux_sym_if_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token1] = ACTIONS(25),
    [aux_sym_ifdef_directive_token2] = ACTIONS(25),
    [sym_directive] = ACTIONS(27),
  },
  [2] = {
    [sym__line] = STATE(16),
    [sym__statement] = STATE(88),
    [sym_resource] = STATE(88),
    [sym_components] = STATE(59),
    [sym_binding] = STATE(24),
    [sym_include_directive] = STATE(88),
    [sym_define_directive] = STATE(88),
    [sym_define_function_directive] = STATE(88),
    [sym_undef_directive] = STATE(88),
    [sym_if_directive] = STATE(88),
    [sym_ifdef_directive] = STATE(88),
    [sym__if_directive_body] = STATE(58),
    [sym_elif_directive] = STATE(32),
    [sym_elifdef_directive] = STATE(32),
    [sym_else_directive] = STATE(60),
    [sym_simple_directive] = STATE(88),
    [aux_sym_resources_repeat1] = STATE(4),
    [aux_sym_components_repeat1] = STATE(24),
    [aux_sym_components_repeat2] = STATE(38),
    [aux_sym__if_directive_body_repeat1] = STATE(22),
    [aux_sym__line_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_component] = ACTIONS(13),
    [sym_any_component] = ACTIONS(15),
    [aux_sym_include_directive_token1] = ACTIONS(17),
    [aux_sym_define_directive_token1] = ACTIONS(19),
    [aux_sym_undef_directive_token1] = ACTIONS(21),
    [aux_sym_if_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token1] = ACTIONS(25),
    [aux_sym_ifdef_directive_token2] = ACTIONS(25),
    [aux_sym__if_directive_body_token1] = ACTIONS(33),
    [aux_sym_elif_directive_token1] = ACTIONS(35),
    [aux_sym_elifdef_directive_token1] = ACTIONS(37),
    [aux_sym_elifdef_directive_token2] = ACTIONS(37),
    [aux_sym_else_directive_token1] = ACTIONS(39),
    [sym_directive] = ACTIONS(27),
  },
  [3] = {
    [sym__line] = STATE(16),
    [sym__statement] = STATE(88),
    [sym_resource] = STATE(88),
    [sym_components] = STATE(59),
    [sym_binding] = STATE(24),
    [sym_include_directive] = STATE(88),
    [sym_define_directive] = STATE(88),
    [sym_define_function_directive] = STATE(88),
    [sym_undef_directive] = STATE(88),
    [sym_if_directive] = STATE(88),
    [sym_ifdef_directive] = STATE(88),
    [sym__if_directive_body] = STATE(84),
    [sym_elif_directive] = STATE(32),
    [sym_elifdef_directive] = STATE(32),
    [sym_else_directive] = STATE(60),
    [sym_simple_directive] = STATE(88),
    [aux_sym_resources_repeat1] = STATE(4),
    [aux_sym_components_repeat1] = STATE(24),
    [aux_sym_components_repeat2] = STATE(38),
    [aux_sym__if_directive_body_repeat1] = STATE(22),
    [aux_sym__line_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_component] = ACTIONS(13),
    [sym_any_component] = ACTIONS(15),
    [aux_sym_include_directive_token1] = ACTIONS(17),
    [aux_sym_define_directive_token1] = ACTIONS(19),
    [aux_sym_undef_directive_token1] = ACTIONS(21),
    [aux_sym_if_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token1] = ACTIONS(25),
    [aux_sym_ifdef_directive_token2] = ACTIONS(25),
    [aux_sym__if_directive_body_token1] = ACTIONS(41),
    [aux_sym_elif_directive_token1] = ACTIONS(35),
    [aux_sym_elifdef_directive_token1] = ACTIONS(37),
    [aux_sym_elifdef_directive_token2] = ACTIONS(37),
    [aux_sym_else_directive_token1] = ACTIONS(39),
    [sym_directive] = ACTIONS(27),
  },
  [4] = {
    [sym__line] = STATE(16),
    [sym__statement] = STATE(88),
    [sym_resource] = STATE(88),
    [sym_components] = STATE(59),
    [sym_binding] = STATE(24),
    [sym_include_directive] = STATE(88),
    [sym_define_directive] = STATE(88),
    [sym_define_function_directive] = STATE(88),
    [sym_undef_directive] = STATE(88),
    [sym_if_directive] = STATE(88),
    [sym_ifdef_directive] = STATE(88),
    [sym_elif_directive] = STATE(32),
    [sym_elifdef_directive] = STATE(32),
    [sym_else_directive] = STATE(54),
    [sym_simple_directive] = STATE(88),
    [aux_sym_resources_repeat1] = STATE(9),
    [aux_sym_components_repeat1] = STATE(24),
    [aux_sym_components_repeat2] = STATE(38),
    [aux_sym__if_directive_body_repeat1] = STATE(21),
    [aux_sym__line_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_component] = ACTIONS(13),
    [sym_any_component] = ACTIONS(15),
    [aux_sym_include_directive_token1] = ACTIONS(17),
    [aux_sym_define_directive_token1] = ACTIONS(19),
    [aux_sym_undef_directive_token1] = ACTIONS(21),
    [aux_sym_if_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token1] = ACTIONS(25),
    [aux_sym_ifdef_directive_token2] = ACTIONS(25),
    [aux_sym__if_directive_body_token1] = ACTIONS(43),
    [aux_sym_elif_directive_token1] = ACTIONS(35),
    [aux_sym_elifdef_directive_token1] = ACTIONS(37),
    [aux_sym_elifdef_directive_token2] = ACTIONS(37),
    [aux_sym_else_directive_token1] = ACTIONS(39),
    [sym_directive] = ACTIONS(27),
  },
  [5] = {
    [sym__line] = STATE(16),
    [sym__statement] = STATE(88),
    [sym_resource] = STATE(88),
    [sym_components] = STATE(59),
    [sym_binding] = STATE(24),
    [sym_include_directive] = STATE(88),
    [sym_define_directive] = STATE(88),
    [sym_define_function_directive] = STATE(88),
    [sym_undef_directive] = STATE(88),
    [sym_if_directive] = STATE(88),
    [sym_ifdef_directive] = STATE(88),
    [sym_simple_directive] = STATE(88),
    [aux_sym_resources_repeat1] = STATE(8),
    [aux_sym_components_repeat1] = STATE(24),
    [aux_sym_components_repeat2] = STATE(38),
    [aux_sym__line_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_component] = ACTIONS(13),
    [sym_any_component] = ACTIONS(15),
    [aux_sym_include_directive_token1] = ACTIONS(17),
    [aux_sym_define_directive_token1] = ACTIONS(19),
    [aux_sym_undef_directive_token1] = ACTIONS(21),
    [aux_sym_if_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token1] = ACTIONS(25),
    [aux_sym_ifdef_directive_token2] = ACTIONS(25),
    [aux_sym__if_directive_body_token1] = ACTIONS(45),
    [aux_sym_elif_directive_token1] = ACTIONS(45),
    [aux_sym_elifdef_directive_token1] = ACTIONS(45),
    [aux_sym_elifdef_directive_token2] = ACTIONS(45),
    [aux_sym_else_directive_token1] = ACTIONS(45),
    [sym_directive] = ACTIONS(27),
  },
  [6] = {
    [sym__line] = STATE(16),
    [sym__statement] = STATE(88),
    [sym_resource] = STATE(88),
    [sym_components] = STATE(59),
    [sym_binding] = STATE(24),
    [sym_include_directive] = STATE(88),
    [sym_define_directive] = STATE(88),
    [sym_define_function_directive] = STATE(88),
    [sym_undef_directive] = STATE(88),
    [sym_if_directive] = STATE(88),
    [sym_ifdef_directive] = STATE(88),
    [sym_simple_directive] = STATE(88),
    [aux_sym_resources_repeat1] = STATE(7),
    [aux_sym_components_repeat1] = STATE(24),
    [aux_sym_components_repeat2] = STATE(38),
    [aux_sym__line_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_component] = ACTIONS(13),
    [sym_any_component] = ACTIONS(15),
    [aux_sym_include_directive_token1] = ACTIONS(17),
    [aux_sym_define_directive_token1] = ACTIONS(19),
    [aux_sym_undef_directive_token1] = ACTIONS(21),
    [aux_sym_if_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token1] = ACTIONS(25),
    [aux_sym_ifdef_directive_token2] = ACTIONS(25),
    [aux_sym__if_directive_body_token1] = ACTIONS(47),
    [aux_sym_elif_directive_token1] = ACTIONS(47),
    [aux_sym_elifdef_directive_token1] = ACTIONS(47),
    [aux_sym_elifdef_directive_token2] = ACTIONS(47),
    [aux_sym_else_directive_token1] = ACTIONS(47),
    [sym_directive] = ACTIONS(27),
  },
  [7] = {
    [sym__line] = STATE(16),
    [sym__statement] = STATE(88),
    [sym_resource] = STATE(88),
    [sym_components] = STATE(59),
    [sym_binding] = STATE(24),
    [sym_include_directive] = STATE(88),
    [sym_define_directive] = STATE(88),
    [sym_define_function_directive] = STATE(88),
    [sym_undef_directive] = STATE(88),
    [sym_if_directive] = STATE(88),
    [sym_ifdef_directive] = STATE(88),
    [sym_simple_directive] = STATE(88),
    [aux_sym_resources_repeat1] = STATE(9),
    [aux_sym_components_repeat1] = STATE(24),
    [aux_sym_components_repeat2] = STATE(38),
    [aux_sym__line_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_component] = ACTIONS(13),
    [sym_any_component] = ACTIONS(15),
    [aux_sym_include_directive_token1] = ACTIONS(17),
    [aux_sym_define_directive_token1] = ACTIONS(19),
    [aux_sym_undef_directive_token1] = ACTIONS(21),
    [aux_sym_if_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token1] = ACTIONS(25),
    [aux_sym_ifdef_directive_token2] = ACTIONS(25),
    [aux_sym__if_directive_body_token1] = ACTIONS(49),
    [aux_sym_elif_directive_token1] = ACTIONS(49),
    [aux_sym_elifdef_directive_token1] = ACTIONS(49),
    [aux_sym_elifdef_directive_token2] = ACTIONS(49),
    [aux_sym_else_directive_token1] = ACTIONS(49),
    [sym_directive] = ACTIONS(27),
  },
  [8] = {
    [sym__line] = STATE(16),
    [sym__statement] = STATE(88),
    [sym_resource] = STATE(88),
    [sym_components] = STATE(59),
    [sym_binding] = STATE(24),
    [sym_include_directive] = STATE(88),
    [sym_define_directive] = STATE(88),
    [sym_define_function_directive] = STATE(88),
    [sym_undef_directive] = STATE(88),
    [sym_if_directive] = STATE(88),
    [sym_ifdef_directive] = STATE(88),
    [sym_simple_directive] = STATE(88),
    [aux_sym_resources_repeat1] = STATE(9),
    [aux_sym_components_repeat1] = STATE(24),
    [aux_sym_components_repeat2] = STATE(38),
    [aux_sym__line_token1] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_component] = ACTIONS(13),
    [sym_any_component] = ACTIONS(15),
    [aux_sym_include_directive_token1] = ACTIONS(17),
    [aux_sym_define_directive_token1] = ACTIONS(19),
    [aux_sym_undef_directive_token1] = ACTIONS(21),
    [aux_sym_if_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token1] = ACTIONS(25),
    [aux_sym_ifdef_directive_token2] = ACTIONS(25),
    [aux_sym__if_directive_body_token1] = ACTIONS(51),
    [aux_sym_elif_directive_token1] = ACTIONS(51),
    [aux_sym_elifdef_directive_token1] = ACTIONS(51),
    [aux_sym_elifdef_directive_token2] = ACTIONS(51),
    [aux_sym_else_directive_token1] = ACTIONS(51),
    [sym_directive] = ACTIONS(27),
  },
  [9] = {
    [sym__line] = STATE(16),
    [sym__statement] = STATE(88),
    [sym_resource] = STATE(88),
    [sym_components] = STATE(59),
    [sym_binding] = STATE(24),
    [sym_include_directive] = STATE(88),
    [sym_define_directive] = STATE(88),
    [sym_define_function_directive] = STATE(88),
    [sym_undef_directive] = STATE(88),
    [sym_if_directive] = STATE(88),
    [sym_ifdef_directive] = STATE(88),
    [sym_simple_directive] = STATE(88),
    [aux_sym_resources_repeat1] = STATE(9),
    [aux_sym_components_repeat1] = STATE(24),
    [aux_sym_components_repeat2] = STATE(38),
    [aux_sym__line_token1] = ACTIONS(53),
    [sym_comment] = ACTIONS(56),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(59),
    [sym_component] = ACTIONS(62),
    [sym_any_component] = ACTIONS(65),
    [aux_sym_include_directive_token1] = ACTIONS(68),
    [aux_sym_define_directive_token1] = ACTIONS(71),
    [aux_sym_undef_directive_token1] = ACTIONS(74),
    [aux_sym_if_directive_token1] = ACTIONS(77),
    [aux_sym_ifdef_directive_token1] = ACTIONS(80),
    [aux_sym_ifdef_directive_token2] = ACTIONS(80),
    [aux_sym__if_directive_body_token1] = ACTIONS(83),
    [aux_sym_elif_directive_token1] = ACTIONS(83),
    [aux_sym_elifdef_directive_token1] = ACTIONS(83),
    [aux_sym_elifdef_directive_token2] = ACTIONS(83),
    [aux_sym_else_directive_token1] = ACTIONS(83),
    [sym_directive] = ACTIONS(85),
  },
  [10] = {
    [sym__line] = STATE(19),
    [sym__statement] = STATE(89),
    [sym_resource] = STATE(89),
    [sym_components] = STATE(59),
    [sym_binding] = STATE(24),
    [sym_include_directive] = STATE(89),
    [sym_define_directive] = STATE(89),
    [sym_define_function_directive] = STATE(89),
    [sym_undef_directive] = STATE(89),
    [sym_if_directive] = STATE(89),
    [sym_ifdef_directive] = STATE(89),
    [sym_simple_directive] = STATE(89),
    [aux_sym_resources_repeat1] = STATE(10),
    [aux_sym_components_repeat1] = STATE(24),
    [aux_sym_components_repeat2] = STATE(38),
    [aux_sym__line_token1] = ACTIONS(88),
    [sym_comment] = ACTIONS(91),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(59),
    [sym_component] = ACTIONS(62),
    [sym_any_component] = ACTIONS(65),
    [aux_sym_include_directive_token1] = ACTIONS(68),
    [aux_sym_define_directive_token1] = ACTIONS(71),
    [aux_sym_undef_directive_token1] = ACTIONS(74),
    [aux_sym_if_directive_token1] = ACTIONS(77),
    [aux_sym_ifdef_directive_token1] = ACTIONS(80),
    [aux_sym_ifdef_directive_token2] = ACTIONS(80),
    [aux_sym__if_directive_body_token1] = ACTIONS(83),
    [sym_directive] = ACTIONS(85),
  },
  [11] = {
    [sym__line] = STATE(18),
    [sym__statement] = STATE(82),
    [sym_resource] = STATE(82),
    [sym_components] = STATE(59),
    [sym_binding] = STATE(24),
    [sym_include_directive] = STATE(82),
    [sym_define_directive] = STATE(82),
    [sym_define_function_directive] = STATE(82),
    [sym_undef_directive] = STATE(82),
    [sym_if_directive] = STATE(82),
    [sym_ifdef_directive] = STATE(82),
    [sym_simple_directive] = STATE(82),
    [aux_sym_resources_repeat1] = STATE(13),
    [aux_sym_components_repeat1] = STATE(24),
    [aux_sym_components_repeat2] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(94),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_component] = ACTIONS(13),
    [sym_any_component] = ACTIONS(15),
    [aux_sym_include_directive_token1] = ACTIONS(17),
    [aux_sym_define_directive_token1] = ACTIONS(19),
    [aux_sym_undef_directive_token1] = ACTIONS(21),
    [aux_sym_if_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token1] = ACTIONS(25),
    [aux_sym_ifdef_directive_token2] = ACTIONS(25),
    [sym_directive] = ACTIONS(27),
  },
  [12] = {
    [sym__line] = STATE(19),
    [sym__statement] = STATE(89),
    [sym_resource] = STATE(89),
    [sym_components] = STATE(59),
    [sym_binding] = STATE(24),
    [sym_include_directive] = STATE(89),
    [sym_define_directive] = STATE(89),
    [sym_define_function_directive] = STATE(89),
    [sym_undef_directive] = STATE(89),
    [sym_if_directive] = STATE(89),
    [sym_ifdef_directive] = STATE(89),
    [sym_simple_directive] = STATE(89),
    [aux_sym_resources_repeat1] = STATE(14),
    [aux_sym_components_repeat1] = STATE(24),
    [aux_sym_components_repeat2] = STATE(38),
    [aux_sym__line_token1] = ACTIONS(96),
    [sym_comment] = ACTIONS(98),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_component] = ACTIONS(13),
    [sym_any_component] = ACTIONS(15),
    [aux_sym_include_directive_token1] = ACTIONS(17),
    [aux_sym_define_directive_token1] = ACTIONS(19),
    [aux_sym_undef_directive_token1] = ACTIONS(21),
    [aux_sym_if_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token1] = ACTIONS(25),
    [aux_sym_ifdef_directive_token2] = ACTIONS(25),
    [aux_sym__if_directive_body_token1] = ACTIONS(100),
    [sym_directive] = ACTIONS(27),
  },
  [13] = {
    [sym__line] = STATE(18),
    [sym__statement] = STATE(82),
    [sym_resource] = STATE(82),
    [sym_components] = STATE(59),
    [sym_binding] = STATE(24),
    [sym_include_directive] = STATE(82),
    [sym_define_directive] = STATE(82),
    [sym_define_function_directive] = STATE(82),
    [sym_undef_directive] = STATE(82),
    [sym_if_directive] = STATE(82),
    [sym_ifdef_directive] = STATE(82),
    [sym_simple_directive] = STATE(82),
    [aux_sym_resources_repeat1] = STATE(13),
    [aux_sym_components_repeat1] = STATE(24),
    [aux_sym_components_repeat2] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(102),
    [aux_sym__line_token1] = ACTIONS(104),
    [sym_comment] = ACTIONS(107),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(59),
    [sym_component] = ACTIONS(62),
    [sym_any_component] = ACTIONS(65),
    [aux_sym_include_directive_token1] = ACTIONS(68),
    [aux_sym_define_directive_token1] = ACTIONS(71),
    [aux_sym_undef_directive_token1] = ACTIONS(74),
    [aux_sym_if_directive_token1] = ACTIONS(77),
    [aux_sym_ifdef_directive_token1] = ACTIONS(80),
    [aux_sym_ifdef_directive_token2] = ACTIONS(80),
    [sym_directive] = ACTIONS(85),
  },
  [14] = {
    [sym__line] = STATE(19),
    [sym__statement] = STATE(89),
    [sym_resource] = STATE(89),
    [sym_components] = STATE(59),
    [sym_binding] = STATE(24),
    [sym_include_directive] = STATE(89),
    [sym_define_directive] = STATE(89),
    [sym_define_function_directive] = STATE(89),
    [sym_undef_directive] = STATE(89),
    [sym_if_directive] = STATE(89),
    [sym_ifdef_directive] = STATE(89),
    [sym_simple_directive] = STATE(89),
    [aux_sym_resources_repeat1] = STATE(10),
    [aux_sym_components_repeat1] = STATE(24),
    [aux_sym_components_repeat2] = STATE(38),
    [aux_sym__line_token1] = ACTIONS(96),
    [sym_comment] = ACTIONS(98),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_resource_token1] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_component] = ACTIONS(13),
    [sym_any_component] = ACTIONS(15),
    [aux_sym_include_directive_token1] = ACTIONS(17),
    [aux_sym_define_directive_token1] = ACTIONS(19),
    [aux_sym_undef_directive_token1] = ACTIONS(21),
    [aux_sym_if_directive_token1] = ACTIONS(23),
    [aux_sym_ifdef_directive_token1] = ACTIONS(25),
    [aux_sym_ifdef_directive_token2] = ACTIONS(25),
    [aux_sym__if_directive_body_token1] = ACTIONS(110),
    [sym_directive] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(112), 6,
      aux_sym__line_token1,
      sym_comment,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
      sym_any_component,
    ACTIONS(114), 12,
      aux_sym_include_directive_token1,
      aux_sym_define_directive_token1,
      aux_sym_undef_directive_token1,
      aux_sym_if_directive_token1,
      aux_sym_ifdef_directive_token1,
      aux_sym_ifdef_directive_token2,
      aux_sym__if_directive_body_token1,
      aux_sym_elif_directive_token1,
      aux_sym_elifdef_directive_token1,
      aux_sym_elifdef_directive_token2,
      aux_sym_else_directive_token1,
      sym_directive,
  [27] = 3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(116), 6,
      aux_sym__line_token1,
      sym_comment,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
      sym_any_component,
    ACTIONS(118), 12,
      aux_sym_include_directive_token1,
      aux_sym_define_directive_token1,
      aux_sym_undef_directive_token1,
      aux_sym_if_directive_token1,
      aux_sym_ifdef_directive_token1,
      aux_sym_ifdef_directive_token2,
      aux_sym__if_directive_body_token1,
      aux_sym_elif_directive_token1,
      aux_sym_elifdef_directive_token1,
      aux_sym_elifdef_directive_token2,
      aux_sym_else_directive_token1,
      sym_directive,
  [54] = 3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(112), 7,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
      sym_any_component,
    ACTIONS(114), 7,
      aux_sym_include_directive_token1,
      aux_sym_define_directive_token1,
      aux_sym_undef_directive_token1,
      aux_sym_if_directive_token1,
      aux_sym_ifdef_directive_token1,
      aux_sym_ifdef_directive_token2,
      sym_directive,
  [77] = 3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(116), 7,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
      sym_any_component,
    ACTIONS(118), 7,
      aux_sym_include_directive_token1,
      aux_sym_define_directive_token1,
      aux_sym_undef_directive_token1,
      aux_sym_if_directive_token1,
      aux_sym_ifdef_directive_token1,
      aux_sym_ifdef_directive_token2,
      sym_directive,
  [100] = 3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(116), 6,
      aux_sym__line_token1,
      sym_comment,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
      sym_any_component,
    ACTIONS(118), 8,
      aux_sym_include_directive_token1,
      aux_sym_define_directive_token1,
      aux_sym_undef_directive_token1,
      aux_sym_if_directive_token1,
      aux_sym_ifdef_directive_token1,
      aux_sym_ifdef_directive_token2,
      aux_sym__if_directive_body_token1,
      sym_directive,
  [123] = 3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(112), 6,
      aux_sym__line_token1,
      sym_comment,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
      sym_any_component,
    ACTIONS(114), 8,
      aux_sym_include_directive_token1,
      aux_sym_define_directive_token1,
      aux_sym_undef_directive_token1,
      aux_sym_if_directive_token1,
      aux_sym_ifdef_directive_token1,
      aux_sym_ifdef_directive_token2,
      aux_sym__if_directive_body_token1,
      sym_directive,
  [146] = 8,
    ACTIONS(35), 1,
      aux_sym_elif_directive_token1,
    ACTIONS(120), 1,
      aux_sym__if_directive_body_token1,
    ACTIONS(124), 1,
      aux_sym_else_directive_token1,
    STATE(23), 1,
      aux_sym__if_directive_body_repeat1,
    STATE(79), 1,
      sym_else_directive,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(122), 2,
      aux_sym_elifdef_directive_token1,
      aux_sym_elifdef_directive_token2,
    STATE(32), 2,
      sym_elif_directive,
      sym_elifdef_directive,
  [174] = 8,
    ACTIONS(35), 1,
      aux_sym_elif_directive_token1,
    ACTIONS(124), 1,
      aux_sym_else_directive_token1,
    ACTIONS(126), 1,
      aux_sym__if_directive_body_token1,
    STATE(23), 1,
      aux_sym__if_directive_body_repeat1,
    STATE(69), 1,
      sym_else_directive,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(122), 2,
      aux_sym_elifdef_directive_token1,
      aux_sym_elifdef_directive_token2,
    STATE(32), 2,
      sym_elif_directive,
      sym_elifdef_directive,
  [202] = 6,
    ACTIONS(130), 1,
      aux_sym_elif_directive_token1,
    STATE(23), 1,
      aux_sym__if_directive_body_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(128), 2,
      aux_sym__if_directive_body_token1,
      aux_sym_else_directive_token1,
    ACTIONS(133), 2,
      aux_sym_elifdef_directive_token1,
      aux_sym_elifdef_directive_token2,
    STATE(32), 2,
      sym_elif_directive,
      sym_elifdef_directive,
  [225] = 6,
    ACTIONS(15), 1,
      sym_any_component,
    ACTIONS(136), 1,
      sym_component,
    STATE(45), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(26), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [247] = 4,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    ACTIONS(138), 2,
      sym_component,
      sym_any_component,
    STATE(26), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [264] = 4,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(140), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    ACTIONS(143), 2,
      sym_component,
      sym_any_component,
    STATE(26), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [281] = 4,
    ACTIONS(145), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(25), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [297] = 7,
    ACTIONS(3), 1,
      sym_preprocessor_comment,
    ACTIONS(147), 1,
      aux_sym_resource_token1,
    ACTIONS(149), 1,
      sym_escape_sequence,
    ACTIONS(151), 1,
      aux_sym_resource_value_token1,
    STATE(30), 1,
      aux_sym_resource_repeat1,
    STATE(35), 1,
      aux_sym_resource_value_repeat1,
    STATE(56), 1,
      sym_resource_value,
  [319] = 4,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(25), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [335] = 7,
    ACTIONS(3), 1,
      sym_preprocessor_comment,
    ACTIONS(149), 1,
      sym_escape_sequence,
    ACTIONS(151), 1,
      aux_sym_resource_value_token1,
    ACTIONS(155), 1,
      aux_sym_resource_token1,
    STATE(35), 1,
      aux_sym_resource_value_repeat1,
    STATE(39), 1,
      aux_sym_resource_repeat1,
    STATE(55), 1,
      sym_resource_value,
  [357] = 4,
    ACTIONS(157), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(25), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [373] = 3,
    ACTIONS(161), 1,
      aux_sym_elif_directive_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(159), 4,
      aux_sym__if_directive_body_token1,
      aux_sym_elifdef_directive_token1,
      aux_sym_elifdef_directive_token2,
      aux_sym_else_directive_token1,
  [387] = 3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(11), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(25), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [400] = 5,
    ACTIONS(163), 1,
      aux_sym__line_token1,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_expansion,
    STATE(51), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [417] = 5,
    ACTIONS(169), 1,
      aux_sym__line_token1,
    ACTIONS(171), 1,
      sym_escape_sequence,
    ACTIONS(173), 1,
      aux_sym_resource_value_token1,
    STATE(36), 1,
      aux_sym_resource_value_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [434] = 5,
    ACTIONS(175), 1,
      aux_sym__line_token1,
    ACTIONS(177), 1,
      sym_escape_sequence,
    ACTIONS(180), 1,
      aux_sym_resource_value_token1,
    STATE(36), 1,
      aux_sym_resource_value_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [451] = 2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(183), 4,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
      sym_any_component,
  [462] = 4,
    ACTIONS(15), 1,
      sym_any_component,
    ACTIONS(136), 1,
      sym_component,
    STATE(42), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [476] = 5,
    ACTIONS(3), 1,
      sym_preprocessor_comment,
    ACTIONS(185), 1,
      aux_sym_resource_token1,
    ACTIONS(188), 1,
      sym_escape_sequence,
    ACTIONS(190), 1,
      aux_sym_resource_value_token1,
    STATE(39), 1,
      aux_sym_resource_repeat1,
  [492] = 4,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [506] = 4,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [520] = 3,
    STATE(42), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(198), 2,
      sym_component,
      sym_any_component,
  [532] = 4,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [546] = 3,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(206), 2,
      anon_sym_DOT_DOT_DOT,
      sym_identifier,
  [558] = 4,
    ACTIONS(15), 1,
      sym_any_component,
    ACTIONS(210), 1,
      sym_component,
    STATE(42), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [572] = 3,
    ACTIONS(212), 1,
      aux_sym__line_token1,
    ACTIONS(214), 1,
      sym_expansion,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [583] = 3,
    ACTIONS(216), 1,
      aux_sym__line_token1,
    ACTIONS(218), 1,
      sym_expansion,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [594] = 3,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [605] = 2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(222), 2,
      anon_sym_DOT_DOT_DOT,
      sym_identifier,
  [614] = 3,
    ACTIONS(224), 1,
      aux_sym__line_token1,
    ACTIONS(226), 1,
      sym_expansion,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [625] = 3,
    ACTIONS(228), 1,
      aux_sym__line_token1,
    ACTIONS(230), 1,
      sym_expansion,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [636] = 2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
    ACTIONS(204), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [645] = 3,
    ACTIONS(232), 1,
      aux_sym__line_token1,
    ACTIONS(234), 1,
      sym_expansion,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [656] = 2,
    ACTIONS(236), 1,
      aux_sym__if_directive_body_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [664] = 2,
    ACTIONS(238), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [672] = 2,
    ACTIONS(240), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [680] = 2,
    ACTIONS(242), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [688] = 2,
    ACTIONS(244), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [696] = 2,
    ACTIONS(246), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [704] = 2,
    ACTIONS(248), 1,
      aux_sym__if_directive_body_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [712] = 2,
    ACTIONS(250), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [720] = 2,
    ACTIONS(252), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [728] = 2,
    ACTIONS(254), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [736] = 2,
    ACTIONS(256), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [744] = 2,
    ACTIONS(258), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [752] = 2,
    ACTIONS(260), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [760] = 2,
    ACTIONS(262), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [768] = 2,
    ACTIONS(264), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [776] = 2,
    ACTIONS(266), 1,
      aux_sym__if_directive_body_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [784] = 2,
    ACTIONS(268), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [792] = 2,
    ACTIONS(270), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [800] = 2,
    ACTIONS(274), 1,
      aux_sym_string_token1,
    ACTIONS(272), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [808] = 2,
    ACTIONS(276), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [816] = 2,
    ACTIONS(278), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [824] = 2,
    ACTIONS(280), 1,
      sym_expansion,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [832] = 2,
    ACTIONS(282), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [840] = 2,
    ACTIONS(284), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [848] = 2,
    ACTIONS(286), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [856] = 2,
    ACTIONS(288), 1,
      aux_sym__if_directive_body_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [864] = 2,
    ACTIONS(290), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [872] = 2,
    ACTIONS(292), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [880] = 2,
    ACTIONS(294), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [888] = 2,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [896] = 2,
    ACTIONS(298), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [904] = 2,
    ACTIONS(300), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [912] = 2,
    ACTIONS(302), 1,
      sym_expansion,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [920] = 2,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [928] = 2,
    ACTIONS(306), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [936] = 2,
    ACTIONS(308), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
  [944] = 2,
    ACTIONS(310), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_resource_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 27,
  [SMALL_STATE(17)] = 54,
  [SMALL_STATE(18)] = 77,
  [SMALL_STATE(19)] = 100,
  [SMALL_STATE(20)] = 123,
  [SMALL_STATE(21)] = 146,
  [SMALL_STATE(22)] = 174,
  [SMALL_STATE(23)] = 202,
  [SMALL_STATE(24)] = 225,
  [SMALL_STATE(25)] = 247,
  [SMALL_STATE(26)] = 264,
  [SMALL_STATE(27)] = 281,
  [SMALL_STATE(28)] = 297,
  [SMALL_STATE(29)] = 319,
  [SMALL_STATE(30)] = 335,
  [SMALL_STATE(31)] = 357,
  [SMALL_STATE(32)] = 373,
  [SMALL_STATE(33)] = 387,
  [SMALL_STATE(34)] = 400,
  [SMALL_STATE(35)] = 417,
  [SMALL_STATE(36)] = 434,
  [SMALL_STATE(37)] = 451,
  [SMALL_STATE(38)] = 462,
  [SMALL_STATE(39)] = 476,
  [SMALL_STATE(40)] = 492,
  [SMALL_STATE(41)] = 506,
  [SMALL_STATE(42)] = 520,
  [SMALL_STATE(43)] = 532,
  [SMALL_STATE(44)] = 546,
  [SMALL_STATE(45)] = 558,
  [SMALL_STATE(46)] = 572,
  [SMALL_STATE(47)] = 583,
  [SMALL_STATE(48)] = 594,
  [SMALL_STATE(49)] = 605,
  [SMALL_STATE(50)] = 614,
  [SMALL_STATE(51)] = 625,
  [SMALL_STATE(52)] = 636,
  [SMALL_STATE(53)] = 645,
  [SMALL_STATE(54)] = 656,
  [SMALL_STATE(55)] = 664,
  [SMALL_STATE(56)] = 672,
  [SMALL_STATE(57)] = 680,
  [SMALL_STATE(58)] = 688,
  [SMALL_STATE(59)] = 696,
  [SMALL_STATE(60)] = 704,
  [SMALL_STATE(61)] = 712,
  [SMALL_STATE(62)] = 720,
  [SMALL_STATE(63)] = 728,
  [SMALL_STATE(64)] = 736,
  [SMALL_STATE(65)] = 744,
  [SMALL_STATE(66)] = 752,
  [SMALL_STATE(67)] = 760,
  [SMALL_STATE(68)] = 768,
  [SMALL_STATE(69)] = 776,
  [SMALL_STATE(70)] = 784,
  [SMALL_STATE(71)] = 792,
  [SMALL_STATE(72)] = 800,
  [SMALL_STATE(73)] = 808,
  [SMALL_STATE(74)] = 816,
  [SMALL_STATE(75)] = 824,
  [SMALL_STATE(76)] = 832,
  [SMALL_STATE(77)] = 840,
  [SMALL_STATE(78)] = 848,
  [SMALL_STATE(79)] = 856,
  [SMALL_STATE(80)] = 864,
  [SMALL_STATE(81)] = 872,
  [SMALL_STATE(82)] = 880,
  [SMALL_STATE(83)] = 888,
  [SMALL_STATE(84)] = 896,
  [SMALL_STATE(85)] = 904,
  [SMALL_STATE(86)] = 912,
  [SMALL_STATE(87)] = 920,
  [SMALL_STATE(88)] = 928,
  [SMALL_STATE(89)] = 936,
  [SMALL_STATE(90)] = 944,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resources, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elifdef_directive, 2, 0, 12),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_directive, 2, 0, 12),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_directive, 3, 0, 12),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elifdef_directive, 3, 0, 12),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resources, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_directive, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_directive, 3, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_resources_repeat1, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__if_directive_body_repeat1, 2, 0, 15),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__if_directive_body_repeat1, 2, 0, 15), SHIFT_REPEAT(86),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__if_directive_body_repeat1, 2, 0, 15), SHIFT_REPEAT(70),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_components_repeat2, 2, 0, 0),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_components_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_components_repeat1, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__if_directive_body_repeat1, 1, 0, 10),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_directive_body_repeat1, 1, 0, 10),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 2, 0, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_value, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 1, 0, 0),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_components_repeat2, 2, 0, 0), SHIFT_REPEAT(33),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_directive, 1, 0, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_function_directive, 3, 0, 6),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, 0, 11),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, 0, 7),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 4, 0, 9),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2, 0, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_undef_directive, 2, 0, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_directive_body, 2, 0, 10),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_directive_body, 2, 0, 13),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 3, 0, 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_directive_body, 2, 0, 14),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_directive, 2, 0, 4),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_directive_body, 3, 0, 16),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_directive_body, 3, 0, 17),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_directive_body, 3, 0, 18),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_directive_body, 4, 0, 19),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [296] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 4, 0, 9),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_function_directive, 4, 0, 8),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
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

TS_PUBLIC const TSLanguage *tree_sitter_xresources(void) {
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

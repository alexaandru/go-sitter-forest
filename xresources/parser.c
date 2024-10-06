#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 1
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 11

enum ts_symbol_identifiers {
  aux_sym__line_token1 = 1,
  sym_comment = 2,
  sym_preprocessor_comment = 3,
  aux_sym_include_directive_token1 = 4,
  aux_sym_define_directive_token1 = 5,
  aux_sym_define_directive_token2 = 6,
  aux_sym_expansion_token1 = 7,
  aux_sym_expansion_token2 = 8,
  aux_sym_expansion_token3 = 9,
  aux_sym_ifdef_directive_token1 = 10,
  aux_sym_ifdef_directive_token2 = 11,
  aux_sym_ifdef_directive_token3 = 12,
  aux_sym_else_directive_token1 = 13,
  sym_identifier = 14,
  anon_sym_COLON = 15,
  anon_sym_DOT = 16,
  anon_sym_STAR = 17,
  sym_component = 18,
  sym_any_component = 19,
  sym_escape_sequence = 20,
  aux_sym_resource_value_token1 = 21,
  anon_sym_DQUOTE = 22,
  aux_sym_string_token1 = 23,
  sym_resources = 24,
  sym__line = 25,
  sym__statement = 26,
  sym_include_directive = 27,
  sym_define_directive = 28,
  sym_expansion = 29,
  sym_ifdef_directive = 30,
  sym_else_directive = 31,
  sym_resource = 32,
  sym_components = 33,
  sym_binding = 34,
  sym_resource_value = 35,
  sym_string = 36,
  aux_sym_resources_repeat1 = 37,
  aux_sym_define_directive_repeat1 = 38,
  aux_sym_expansion_repeat1 = 39,
  aux_sym_components_repeat1 = 40,
  aux_sym_components_repeat2 = 41,
  aux_sym_resource_value_repeat1 = 42,
  alias_sym_body = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__line_token1] = "_line_token1",
  [sym_comment] = "comment",
  [sym_preprocessor_comment] = "preprocessor_comment",
  [aux_sym_include_directive_token1] = "#include",
  [aux_sym_define_directive_token1] = "#define",
  [aux_sym_define_directive_token2] = "define_directive_token2",
  [aux_sym_expansion_token1] = "expansion_token1",
  [aux_sym_expansion_token2] = "expansion_token2",
  [aux_sym_expansion_token3] = "expansion_token3",
  [aux_sym_ifdef_directive_token1] = "#ifdef",
  [aux_sym_ifdef_directive_token2] = "#ifndef",
  [aux_sym_ifdef_directive_token3] = "#endif",
  [aux_sym_else_directive_token1] = "#else",
  [sym_identifier] = "identifier",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [anon_sym_STAR] = "*",
  [sym_component] = "component",
  [sym_any_component] = "any_component",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_resource_value_token1] = "resource_value_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_content",
  [sym_resources] = "resources",
  [sym__line] = "_line",
  [sym__statement] = "_statement",
  [sym_include_directive] = "include_directive",
  [sym_define_directive] = "define_directive",
  [sym_expansion] = "expansion",
  [sym_ifdef_directive] = "ifdef_directive",
  [sym_else_directive] = "else_directive",
  [sym_resource] = "resource",
  [sym_components] = "components",
  [sym_binding] = "binding",
  [sym_resource_value] = "resource_value",
  [sym_string] = "string",
  [aux_sym_resources_repeat1] = "resources_repeat1",
  [aux_sym_define_directive_repeat1] = "define_directive_repeat1",
  [aux_sym_expansion_repeat1] = "expansion_repeat1",
  [aux_sym_components_repeat1] = "components_repeat1",
  [aux_sym_components_repeat2] = "components_repeat2",
  [aux_sym_resource_value_repeat1] = "resource_value_repeat1",
  [alias_sym_body] = "body",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [sym_comment] = sym_comment,
  [sym_preprocessor_comment] = sym_preprocessor_comment,
  [aux_sym_include_directive_token1] = aux_sym_include_directive_token1,
  [aux_sym_define_directive_token1] = aux_sym_define_directive_token1,
  [aux_sym_define_directive_token2] = aux_sym_define_directive_token2,
  [aux_sym_expansion_token1] = aux_sym_expansion_token1,
  [aux_sym_expansion_token2] = aux_sym_expansion_token2,
  [aux_sym_expansion_token3] = aux_sym_expansion_token3,
  [aux_sym_ifdef_directive_token1] = aux_sym_ifdef_directive_token1,
  [aux_sym_ifdef_directive_token2] = aux_sym_ifdef_directive_token2,
  [aux_sym_ifdef_directive_token3] = aux_sym_ifdef_directive_token3,
  [aux_sym_else_directive_token1] = aux_sym_else_directive_token1,
  [sym_identifier] = sym_identifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_component] = sym_component,
  [sym_any_component] = sym_any_component,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_resource_value_token1] = aux_sym_resource_value_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_resources] = sym_resources,
  [sym__line] = sym__line,
  [sym__statement] = sym__statement,
  [sym_include_directive] = sym_include_directive,
  [sym_define_directive] = sym_define_directive,
  [sym_expansion] = sym_expansion,
  [sym_ifdef_directive] = sym_ifdef_directive,
  [sym_else_directive] = sym_else_directive,
  [sym_resource] = sym_resource,
  [sym_components] = sym_components,
  [sym_binding] = sym_binding,
  [sym_resource_value] = sym_resource_value,
  [sym_string] = sym_string,
  [aux_sym_resources_repeat1] = aux_sym_resources_repeat1,
  [aux_sym_define_directive_repeat1] = aux_sym_define_directive_repeat1,
  [aux_sym_expansion_repeat1] = aux_sym_expansion_repeat1,
  [aux_sym_components_repeat1] = aux_sym_components_repeat1,
  [aux_sym_components_repeat2] = aux_sym_components_repeat2,
  [aux_sym_resource_value_repeat1] = aux_sym_resource_value_repeat1,
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
  [aux_sym_include_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_define_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_define_directive_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expansion_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expansion_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expansion_token3] = {
    .visible = false,
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
  [aux_sym_ifdef_directive_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_else_directive_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
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
  [sym_include_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_define_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_ifdef_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_else_directive] = {
    .visible = true,
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
  [aux_sym_resources_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_define_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expansion_repeat1] = {
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
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_file] = "file",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_file, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 1},
    {field_value, 2},
  [4] =
    {field_name, 0},
    {field_value, 2},
  [6] =
    {field_name, 1},
    {field_value, 3},
  [8] =
    {field_condition, 1},
  [9] =
    {field_name, 0},
    {field_value, 3},
  [11] =
    {field_alternative, 3},
    {field_condition, 1},
  [13] =
    {field_condition, 1},
    {field_consequence, 3},
  [15] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [9] = {
    [3] = alias_sym_body,
  },
  [10] = {
    [3] = alias_sym_body,
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
  [31] = 28,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(37);
      ADVANCE_MAP(
        0, 52,
        '\n', 38,
        '!', 39,
        '"', 77,
        '#', 56,
        '*', 70,
        '.', 69,
        '/', 54,
        ':', 68,
        '?', 72,
        '\\', 53,
        '\t', 50,
        ' ', 50,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(58);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(52);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '\r') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(63);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(73);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(33);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      ADVANCE_MAP(
        '\n', 38,
        '!', 39,
        '"', 77,
        '#', 10,
        '*', 70,
        '.', 69,
        '/', 5,
        ':', 68,
        '?', 72,
        '\t', 50,
        ' ', 50,
      );
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__line_token1);
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
      if (lookahead == '\r') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\r') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(44);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(44);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_preprocessor_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(83);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_include_directive_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_define_directive_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_define_directive_token2);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_define_directive_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(83);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '\\' ||
          lookahead == 'n') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(34);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '-') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_expansion_token2);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_expansion_token2);
      if (lookahead == '\n') ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_expansion_token2);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_expansion_token3);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_ifdef_directive_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_ifdef_directive_token2);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_ifdef_directive_token3);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_else_directive_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_component);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_any_component);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_resource_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == '\\' ||
          lookahead == 'n') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(34);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\r') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(44);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(83);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(7);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(7);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(83);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 36},
  [3] = {.lex_state = 36},
  [4] = {.lex_state = 36},
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 36},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 36},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 36},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 36},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 36},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 36},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 82},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 36},
  [51] = {.lex_state = 36},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 36},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_include_directive_token1] = ACTIONS(1),
    [aux_sym_define_directive_token1] = ACTIONS(1),
    [aux_sym_define_directive_token2] = ACTIONS(3),
    [aux_sym_expansion_token1] = ACTIONS(1),
    [aux_sym_expansion_token2] = ACTIONS(1),
    [aux_sym_expansion_token3] = ACTIONS(1),
    [aux_sym_ifdef_directive_token1] = ACTIONS(1),
    [aux_sym_ifdef_directive_token2] = ACTIONS(1),
    [aux_sym_ifdef_directive_token3] = ACTIONS(1),
    [aux_sym_else_directive_token1] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_component] = ACTIONS(1),
    [sym_any_component] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [aux_sym_resource_value_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_resources] = STATE(43),
    [sym__line] = STATE(9),
    [sym__statement] = STATE(47),
    [sym_include_directive] = STATE(47),
    [sym_define_directive] = STATE(47),
    [sym_ifdef_directive] = STATE(47),
    [sym_resource] = STATE(47),
    [sym_components] = STATE(51),
    [sym_binding] = STATE(10),
    [aux_sym_resources_repeat1] = STATE(5),
    [aux_sym_components_repeat1] = STATE(10),
    [aux_sym_components_repeat2] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_include_directive_token1] = ACTIONS(11),
    [aux_sym_define_directive_token1] = ACTIONS(13),
    [aux_sym_define_directive_token2] = ACTIONS(3),
    [aux_sym_ifdef_directive_token1] = ACTIONS(15),
    [aux_sym_ifdef_directive_token2] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [sym_component] = ACTIONS(19),
    [sym_any_component] = ACTIONS(21),
  },
  [2] = {
    [sym__line] = STATE(9),
    [sym__statement] = STATE(47),
    [sym_include_directive] = STATE(47),
    [sym_define_directive] = STATE(47),
    [sym_ifdef_directive] = STATE(47),
    [sym_resource] = STATE(47),
    [sym_components] = STATE(51),
    [sym_binding] = STATE(10),
    [aux_sym_resources_repeat1] = STATE(2),
    [aux_sym_components_repeat1] = STATE(10),
    [aux_sym_components_repeat2] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym__line_token1] = ACTIONS(25),
    [sym_comment] = ACTIONS(28),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_include_directive_token1] = ACTIONS(31),
    [aux_sym_define_directive_token1] = ACTIONS(34),
    [aux_sym_define_directive_token2] = ACTIONS(3),
    [aux_sym_ifdef_directive_token1] = ACTIONS(37),
    [aux_sym_ifdef_directive_token2] = ACTIONS(37),
    [aux_sym_ifdef_directive_token3] = ACTIONS(23),
    [aux_sym_else_directive_token1] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_STAR] = ACTIONS(40),
    [sym_component] = ACTIONS(43),
    [sym_any_component] = ACTIONS(46),
  },
  [3] = {
    [sym__line] = STATE(9),
    [sym__statement] = STATE(47),
    [sym_include_directive] = STATE(47),
    [sym_define_directive] = STATE(47),
    [sym_ifdef_directive] = STATE(47),
    [sym_else_directive] = STATE(50),
    [sym_resource] = STATE(47),
    [sym_components] = STATE(51),
    [sym_binding] = STATE(10),
    [aux_sym_resources_repeat1] = STATE(2),
    [aux_sym_components_repeat1] = STATE(10),
    [aux_sym_components_repeat2] = STATE(27),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_include_directive_token1] = ACTIONS(11),
    [aux_sym_define_directive_token1] = ACTIONS(13),
    [aux_sym_define_directive_token2] = ACTIONS(3),
    [aux_sym_ifdef_directive_token1] = ACTIONS(15),
    [aux_sym_ifdef_directive_token2] = ACTIONS(15),
    [aux_sym_ifdef_directive_token3] = ACTIONS(49),
    [aux_sym_else_directive_token1] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [sym_component] = ACTIONS(19),
    [sym_any_component] = ACTIONS(21),
  },
  [4] = {
    [sym__line] = STATE(9),
    [sym__statement] = STATE(47),
    [sym_include_directive] = STATE(47),
    [sym_define_directive] = STATE(47),
    [sym_ifdef_directive] = STATE(47),
    [sym_else_directive] = STATE(42),
    [sym_resource] = STATE(47),
    [sym_components] = STATE(51),
    [sym_binding] = STATE(10),
    [aux_sym_resources_repeat1] = STATE(3),
    [aux_sym_components_repeat1] = STATE(10),
    [aux_sym_components_repeat2] = STATE(27),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_include_directive_token1] = ACTIONS(11),
    [aux_sym_define_directive_token1] = ACTIONS(13),
    [aux_sym_define_directive_token2] = ACTIONS(3),
    [aux_sym_ifdef_directive_token1] = ACTIONS(15),
    [aux_sym_ifdef_directive_token2] = ACTIONS(15),
    [aux_sym_ifdef_directive_token3] = ACTIONS(53),
    [aux_sym_else_directive_token1] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [sym_component] = ACTIONS(19),
    [sym_any_component] = ACTIONS(21),
  },
  [5] = {
    [sym__line] = STATE(9),
    [sym__statement] = STATE(47),
    [sym_include_directive] = STATE(47),
    [sym_define_directive] = STATE(47),
    [sym_ifdef_directive] = STATE(47),
    [sym_resource] = STATE(47),
    [sym_components] = STATE(51),
    [sym_binding] = STATE(10),
    [aux_sym_resources_repeat1] = STATE(2),
    [aux_sym_components_repeat1] = STATE(10),
    [aux_sym_components_repeat2] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(55),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_include_directive_token1] = ACTIONS(11),
    [aux_sym_define_directive_token1] = ACTIONS(13),
    [aux_sym_define_directive_token2] = ACTIONS(3),
    [aux_sym_ifdef_directive_token1] = ACTIONS(15),
    [aux_sym_ifdef_directive_token2] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [sym_component] = ACTIONS(19),
    [sym_any_component] = ACTIONS(21),
  },
  [6] = {
    [sym__line] = STATE(9),
    [sym__statement] = STATE(47),
    [sym_include_directive] = STATE(47),
    [sym_define_directive] = STATE(47),
    [sym_ifdef_directive] = STATE(47),
    [sym_resource] = STATE(47),
    [sym_components] = STATE(51),
    [sym_binding] = STATE(10),
    [aux_sym_resources_repeat1] = STATE(7),
    [aux_sym_components_repeat1] = STATE(10),
    [aux_sym_components_repeat2] = STATE(27),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_include_directive_token1] = ACTIONS(11),
    [aux_sym_define_directive_token1] = ACTIONS(13),
    [aux_sym_define_directive_token2] = ACTIONS(3),
    [aux_sym_ifdef_directive_token1] = ACTIONS(15),
    [aux_sym_ifdef_directive_token2] = ACTIONS(15),
    [aux_sym_ifdef_directive_token3] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [sym_component] = ACTIONS(19),
    [sym_any_component] = ACTIONS(21),
  },
  [7] = {
    [sym__line] = STATE(9),
    [sym__statement] = STATE(47),
    [sym_include_directive] = STATE(47),
    [sym_define_directive] = STATE(47),
    [sym_ifdef_directive] = STATE(47),
    [sym_resource] = STATE(47),
    [sym_components] = STATE(51),
    [sym_binding] = STATE(10),
    [aux_sym_resources_repeat1] = STATE(2),
    [aux_sym_components_repeat1] = STATE(10),
    [aux_sym_components_repeat2] = STATE(27),
    [aux_sym__line_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_preprocessor_comment] = ACTIONS(3),
    [aux_sym_include_directive_token1] = ACTIONS(11),
    [aux_sym_define_directive_token1] = ACTIONS(13),
    [aux_sym_define_directive_token2] = ACTIONS(3),
    [aux_sym_ifdef_directive_token1] = ACTIONS(15),
    [aux_sym_ifdef_directive_token2] = ACTIONS(15),
    [aux_sym_ifdef_directive_token3] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [sym_component] = ACTIONS(19),
    [sym_any_component] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
    ACTIONS(61), 13,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      aux_sym_include_directive_token1,
      aux_sym_define_directive_token1,
      aux_sym_ifdef_directive_token1,
      aux_sym_ifdef_directive_token2,
      aux_sym_ifdef_directive_token3,
      aux_sym_else_directive_token1,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
      sym_any_component,
  [20] = 2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
    ACTIONS(63), 13,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      aux_sym_include_directive_token1,
      aux_sym_define_directive_token1,
      aux_sym_ifdef_directive_token1,
      aux_sym_ifdef_directive_token2,
      aux_sym_ifdef_directive_token3,
      aux_sym_else_directive_token1,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
      sym_any_component,
  [40] = 6,
    ACTIONS(21), 1,
      sym_any_component,
    ACTIONS(65), 1,
      sym_component,
    STATE(29), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
    ACTIONS(17), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(11), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [62] = 4,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
    ACTIONS(67), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    ACTIONS(70), 2,
      sym_component,
      sym_any_component,
    STATE(11), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [79] = 4,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
    ACTIONS(17), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    ACTIONS(72), 2,
      sym_component,
      sym_any_component,
    STATE(11), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [96] = 4,
    ACTIONS(74), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
    ACTIONS(17), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(12), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [112] = 7,
    ACTIONS(3), 1,
      sym_preprocessor_comment,
    ACTIONS(76), 1,
      aux_sym_define_directive_token2,
    ACTIONS(78), 1,
      sym_escape_sequence,
    ACTIONS(80), 1,
      aux_sym_resource_value_token1,
    STATE(16), 1,
      aux_sym_define_directive_repeat1,
    STATE(23), 1,
      aux_sym_resource_value_repeat1,
    STATE(33), 1,
      sym_resource_value,
  [134] = 4,
    ACTIONS(82), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
    ACTIONS(17), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(12), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [150] = 7,
    ACTIONS(3), 1,
      sym_preprocessor_comment,
    ACTIONS(78), 1,
      sym_escape_sequence,
    ACTIONS(80), 1,
      aux_sym_resource_value_token1,
    ACTIONS(84), 1,
      aux_sym_define_directive_token2,
    STATE(23), 1,
      aux_sym_resource_value_repeat1,
    STATE(28), 1,
      aux_sym_define_directive_repeat1,
    STATE(44), 1,
      sym_resource_value,
  [172] = 4,
    ACTIONS(86), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
    ACTIONS(17), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(12), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [188] = 3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
    ACTIONS(17), 2,
      anon_sym_DOT,
      anon_sym_STAR,
    STATE(12), 2,
      sym_binding,
      aux_sym_components_repeat1,
  [201] = 2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
    ACTIONS(88), 4,
      anon_sym_DOT,
      anon_sym_STAR,
      sym_component,
      sym_any_component,
  [212] = 6,
    ACTIONS(3), 1,
      sym_preprocessor_comment,
    ACTIONS(90), 1,
      aux_sym__line_token1,
    ACTIONS(92), 1,
      aux_sym_define_directive_token2,
    ACTIONS(94), 1,
      aux_sym_expansion_token1,
    STATE(24), 1,
      aux_sym_define_directive_repeat1,
    STATE(37), 1,
      sym_expansion,
  [231] = 5,
    ACTIONS(96), 1,
      aux_sym__line_token1,
    ACTIONS(98), 1,
      aux_sym_expansion_token2,
    ACTIONS(100), 1,
      aux_sym_expansion_token3,
    STATE(22), 1,
      aux_sym_expansion_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [248] = 5,
    ACTIONS(102), 1,
      aux_sym__line_token1,
    ACTIONS(104), 1,
      aux_sym_expansion_token2,
    ACTIONS(106), 1,
      aux_sym_expansion_token3,
    STATE(26), 1,
      aux_sym_expansion_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [265] = 5,
    ACTIONS(108), 1,
      aux_sym__line_token1,
    ACTIONS(110), 1,
      sym_escape_sequence,
    ACTIONS(112), 1,
      aux_sym_resource_value_token1,
    STATE(25), 1,
      aux_sym_resource_value_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [282] = 6,
    ACTIONS(3), 1,
      sym_preprocessor_comment,
    ACTIONS(94), 1,
      aux_sym_expansion_token1,
    ACTIONS(114), 1,
      aux_sym__line_token1,
    ACTIONS(116), 1,
      aux_sym_define_directive_token2,
    STATE(31), 1,
      aux_sym_define_directive_repeat1,
    STATE(38), 1,
      sym_expansion,
  [301] = 5,
    ACTIONS(118), 1,
      aux_sym__line_token1,
    ACTIONS(120), 1,
      sym_escape_sequence,
    ACTIONS(123), 1,
      aux_sym_resource_value_token1,
    STATE(25), 1,
      aux_sym_resource_value_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [318] = 5,
    ACTIONS(126), 1,
      aux_sym__line_token1,
    ACTIONS(128), 1,
      aux_sym_expansion_token2,
    ACTIONS(131), 1,
      aux_sym_expansion_token3,
    STATE(26), 1,
      aux_sym_expansion_repeat1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [335] = 4,
    ACTIONS(21), 1,
      sym_any_component,
    ACTIONS(65), 1,
      sym_component,
    STATE(30), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [349] = 5,
    ACTIONS(3), 1,
      sym_preprocessor_comment,
    ACTIONS(134), 1,
      aux_sym_define_directive_token2,
    ACTIONS(137), 1,
      sym_escape_sequence,
    ACTIONS(139), 1,
      aux_sym_resource_value_token1,
    STATE(28), 1,
      aux_sym_define_directive_repeat1,
  [365] = 4,
    ACTIONS(21), 1,
      sym_any_component,
    ACTIONS(141), 1,
      sym_component,
    STATE(30), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [379] = 3,
    STATE(30), 1,
      aux_sym_components_repeat2,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
    ACTIONS(143), 2,
      sym_component,
      sym_any_component,
  [391] = 5,
    ACTIONS(3), 1,
      sym_preprocessor_comment,
    ACTIONS(137), 1,
      aux_sym__line_token1,
    ACTIONS(139), 1,
      aux_sym_expansion_token1,
    ACTIONS(146), 1,
      aux_sym_define_directive_token2,
    STATE(31), 1,
      aux_sym_define_directive_repeat1,
  [407] = 3,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [418] = 2,
    ACTIONS(151), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [426] = 2,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [434] = 2,
    ACTIONS(155), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [442] = 2,
    ACTIONS(157), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [450] = 2,
    ACTIONS(159), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [458] = 2,
    ACTIONS(161), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [466] = 2,
    ACTIONS(163), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [474] = 2,
    ACTIONS(165), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [482] = 2,
    ACTIONS(167), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [490] = 2,
    ACTIONS(169), 1,
      aux_sym_ifdef_directive_token3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [498] = 2,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [506] = 2,
    ACTIONS(173), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [514] = 2,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [522] = 2,
    ACTIONS(179), 1,
      aux_sym_string_token1,
    ACTIONS(177), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [530] = 2,
    ACTIONS(181), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [538] = 2,
    ACTIONS(183), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [546] = 2,
    ACTIONS(185), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [554] = 2,
    ACTIONS(187), 1,
      aux_sym_ifdef_directive_token3,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [562] = 2,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [570] = 2,
    ACTIONS(191), 1,
      aux_sym__line_token1,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
  [578] = 2,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_preprocessor_comment,
      aux_sym_define_directive_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 20,
  [SMALL_STATE(10)] = 40,
  [SMALL_STATE(11)] = 62,
  [SMALL_STATE(12)] = 79,
  [SMALL_STATE(13)] = 96,
  [SMALL_STATE(14)] = 112,
  [SMALL_STATE(15)] = 134,
  [SMALL_STATE(16)] = 150,
  [SMALL_STATE(17)] = 172,
  [SMALL_STATE(18)] = 188,
  [SMALL_STATE(19)] = 201,
  [SMALL_STATE(20)] = 212,
  [SMALL_STATE(21)] = 231,
  [SMALL_STATE(22)] = 248,
  [SMALL_STATE(23)] = 265,
  [SMALL_STATE(24)] = 282,
  [SMALL_STATE(25)] = 301,
  [SMALL_STATE(26)] = 318,
  [SMALL_STATE(27)] = 335,
  [SMALL_STATE(28)] = 349,
  [SMALL_STATE(29)] = 365,
  [SMALL_STATE(30)] = 379,
  [SMALL_STATE(31)] = 391,
  [SMALL_STATE(32)] = 407,
  [SMALL_STATE(33)] = 418,
  [SMALL_STATE(34)] = 426,
  [SMALL_STATE(35)] = 434,
  [SMALL_STATE(36)] = 442,
  [SMALL_STATE(37)] = 450,
  [SMALL_STATE(38)] = 458,
  [SMALL_STATE(39)] = 466,
  [SMALL_STATE(40)] = 474,
  [SMALL_STATE(41)] = 482,
  [SMALL_STATE(42)] = 490,
  [SMALL_STATE(43)] = 498,
  [SMALL_STATE(44)] = 506,
  [SMALL_STATE(45)] = 514,
  [SMALL_STATE(46)] = 522,
  [SMALL_STATE(47)] = 530,
  [SMALL_STATE(48)] = 538,
  [SMALL_STATE(49)] = 546,
  [SMALL_STATE(50)] = 554,
  [SMALL_STATE(51)] = 562,
  [SMALL_STATE(52)] = 570,
  [SMALL_STATE(53)] = 578,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resources, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resources, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_directive, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_directive, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resources_repeat1, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_components_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_components_repeat1, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_components_repeat2, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 2, 0, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_value, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 3, 0, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_resource_value_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expansion_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expansion_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_define_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_define_directive_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_define_directive_repeat1, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_components_repeat2, 2, 0, 0), SHIFT_REPEAT(18),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_define_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3, 0, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 3, 0, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_directive, 4, 0, 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2, 0, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 4, 0, 6),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [171] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4, 0, 7),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 5, 0, 8),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 5, 0, 9),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifdef_directive, 6, 0, 10),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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

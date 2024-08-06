#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 19

enum ts_symbol_identifiers {
  anon_sym_module = 1,
  anon_sym_port = 2,
  anon_sym_exposing = 3,
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  anon_sym_type = 7,
  anon_sym_EQ = 8,
  anon_sym_PIPE = 9,
  anon_sym_alias = 10,
  anon_sym_LBRACE = 11,
  anon_sym_COLON = 12,
  anon_sym_RBRACE = 13,
  anon_sym_number = 14,
  anon_sym_Float = 15,
  anon_sym_Int = 16,
  anon_sym_Char = 17,
  anon_sym_String = 18,
  anon_sym_Bool = 19,
  anon_sym_DASH_GT = 20,
  sym_spread = 21,
  sym_module_name = 22,
  sym_identifier = 23,
  sym_Identifier = 24,
  sym_number = 25,
  sym_source_file = 26,
  sym__definition = 27,
  sym_module = 28,
  sym_exposing = 29,
  sym__exposed = 30,
  sym_type_with_constructors = 31,
  sym_type_definition = 32,
  sym__basic_type_definition = 33,
  sym__alias_type_definition = 34,
  sym__complex_type = 35,
  sym__type = 36,
  sym_record_type = 37,
  sym_custom_type = 38,
  sym_primative = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_exposing_repeat1 = 41,
  aux_sym_type_with_constructors_repeat1 = 42,
  aux_sym__basic_type_definition_repeat1 = 43,
  aux_sym__basic_type_definition_repeat2 = 44,
  aux_sym_record_type_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_port] = "port",
  [anon_sym_exposing] = "exposing",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [anon_sym_alias] = "alias",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
  [anon_sym_number] = "number",
  [anon_sym_Float] = "Float",
  [anon_sym_Int] = "Int",
  [anon_sym_Char] = "Char",
  [anon_sym_String] = "String",
  [anon_sym_Bool] = "Bool",
  [anon_sym_DASH_GT] = "->",
  [sym_spread] = "spread",
  [sym_module_name] = "module_name",
  [sym_identifier] = "identifier",
  [sym_Identifier] = "Identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_module] = "module",
  [sym_exposing] = "exposing",
  [sym__exposed] = "_exposed",
  [sym_type_with_constructors] = "type_with_constructors",
  [sym_type_definition] = "type_definition",
  [sym__basic_type_definition] = "_basic_type_definition",
  [sym__alias_type_definition] = "_alias_type_definition",
  [sym__complex_type] = "_complex_type",
  [sym__type] = "_type",
  [sym_record_type] = "record_type",
  [sym_custom_type] = "custom_type",
  [sym_primative] = "primative",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_exposing_repeat1] = "exposing_repeat1",
  [aux_sym_type_with_constructors_repeat1] = "type_with_constructors_repeat1",
  [aux_sym__basic_type_definition_repeat1] = "_basic_type_definition_repeat1",
  [aux_sym__basic_type_definition_repeat2] = "_basic_type_definition_repeat2",
  [aux_sym_record_type_repeat1] = "record_type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_port] = anon_sym_port,
  [anon_sym_exposing] = anon_sym_exposing,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_Float] = anon_sym_Float,
  [anon_sym_Int] = anon_sym_Int,
  [anon_sym_Char] = anon_sym_Char,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_Bool] = anon_sym_Bool,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_spread] = sym_spread,
  [sym_module_name] = sym_module_name,
  [sym_identifier] = sym_identifier,
  [sym_Identifier] = sym_Identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_module] = sym_module,
  [sym_exposing] = sym_exposing,
  [sym__exposed] = sym__exposed,
  [sym_type_with_constructors] = sym_type_with_constructors,
  [sym_type_definition] = sym_type_definition,
  [sym__basic_type_definition] = sym__basic_type_definition,
  [sym__alias_type_definition] = sym__alias_type_definition,
  [sym__complex_type] = sym__complex_type,
  [sym__type] = sym__type,
  [sym_record_type] = sym_record_type,
  [sym_custom_type] = sym_custom_type,
  [sym_primative] = sym_primative,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_exposing_repeat1] = aux_sym_exposing_repeat1,
  [aux_sym_type_with_constructors_repeat1] = aux_sym_type_with_constructors_repeat1,
  [aux_sym__basic_type_definition_repeat1] = aux_sym__basic_type_definition_repeat1,
  [aux_sym__basic_type_definition_repeat2] = aux_sym__basic_type_definition_repeat2,
  [aux_sym_record_type_repeat1] = aux_sym_record_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_port] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exposing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
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
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_spread] = {
    .visible = true,
    .named = true,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_Identifier] = {
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
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_exposing] = {
    .visible = true,
    .named = true,
  },
  [sym__exposed] = {
    .visible = false,
    .named = true,
  },
  [sym_type_with_constructors] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__basic_type_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__alias_type_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__complex_type] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_record_type] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_type] = {
    .visible = true,
    .named = true,
  },
  [sym_primative] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exposing_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_with_constructors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__basic_type_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__basic_type_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_args = 1,
  field_constructor = 2,
  field_exposing = 3,
  field_field = 4,
  field_module_name = 5,
  field_name = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_constructor] = "constructor",
  [field_exposing] = "exposing",
  [field_field] = "field",
  [field_module_name] = "module_name",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 2},
  [3] = {.index = 5, .length = 1},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 3},
  [8] = {.index = 15, .length = 3},
  [9] = {.index = 18, .length = 3},
  [10] = {.index = 21, .length = 4},
  [11] = {.index = 25, .length = 4},
  [12] = {.index = 29, .length = 1},
  [13] = {.index = 30, .length = 2},
  [14] = {.index = 32, .length = 2},
  [15] = {.index = 34, .length = 3},
  [16] = {.index = 37, .length = 2},
  [17] = {.index = 39, .length = 2},
  [18] = {.index = 41, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_args, 1, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [3] =
    {field_exposing, 2},
    {field_module_name, 1},
  [5] =
    {field_name, 0},
  [6] =
    {field_name, 0},
    {field_value, 2},
  [8] =
    {field_name, 1},
    {field_value, 3},
  [10] =
    {field_args, 1},
    {field_name, 0},
  [12] =
    {field_name, 0},
    {field_value, 2},
    {field_value, 3},
  [15] =
    {field_args, 1},
    {field_name, 0},
    {field_value, 3},
  [18] =
    {field_args, 2},
    {field_name, 1},
    {field_value, 4},
  [21] =
    {field_args, 1},
    {field_name, 0},
    {field_value, 3},
    {field_value, 4},
  [25] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [29] =
    {field_constructor, 0},
  [30] =
    {field_constructor, 2},
    {field_name, 0},
  [32] =
    {field_constructor, 0, .inherited = true},
    {field_constructor, 1, .inherited = true},
  [34] =
    {field_constructor, 2, .inherited = true},
    {field_constructor, 3},
    {field_name, 0},
  [37] =
    {field_field, 0},
    {field_value, 2},
  [39] =
    {field_field, 1},
    {field_value, 3},
  [41] =
    {field_field, 1, .inherited = true},
    {field_field, 2},
    {field_value, 1, .inherited = true},
    {field_value, 4},
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
  [17] = 13,
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
  [30] = 16,
  [31] = 31,
  [32] = 14,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(53);
      ADVANCE_MAP(
        '(', 58,
        ')', 60,
        ',', 59,
        '-', 3,
        '.', 2,
        ':', 67,
        '=', 63,
        'B', 33,
        'C', 16,
        'F', 23,
        'I', 26,
        'S', 42,
        'a', 20,
        'e', 48,
        'm', 28,
        'n', 46,
        'p', 30,
        't', 49,
        '{', 66,
        '|', 64,
        '}', 68,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '}') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(82);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(81);
      END_STATE();
    case 4:
      if (lookahead == 'B') ADVANCE(101);
      if (lookahead == 'C') ADVANCE(92);
      if (lookahead == 'F') ADVANCE(95);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == '{') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(115);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 15:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(7);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(5);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 48:
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 49:
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 50:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 51:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '|') ADVANCE(64);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_port);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_exposing);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_Float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_Int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_Char);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_Char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_Bool);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_Bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_spread);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_Identifier);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_Identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 52},
  [14] = {.lex_state = 52},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 52},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 50},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_port] = ACTIONS(1),
    [anon_sym_exposing] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_Float] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [anon_sym_Char] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_Bool] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_spread] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(75),
    [sym__definition] = STATE(10),
    [sym_module] = STATE(10),
    [sym_type_definition] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_type] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(61), 5,
      sym__complex_type,
      sym__type,
      sym_record_type,
      sym_custom_type,
      sym_primative,
    ACTIONS(11), 6,
      anon_sym_number,
      anon_sym_Float,
      anon_sym_Int,
      anon_sym_Char,
      anon_sym_String,
      anon_sym_Bool,
  [22] = 4,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(41), 5,
      sym__complex_type,
      sym__type,
      sym_record_type,
      sym_custom_type,
      sym_primative,
    ACTIONS(11), 6,
      anon_sym_number,
      anon_sym_Float,
      anon_sym_Int,
      anon_sym_Char,
      anon_sym_String,
      anon_sym_Bool,
  [44] = 4,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(36), 5,
      sym__complex_type,
      sym__type,
      sym_record_type,
      sym_custom_type,
      sym_primative,
    ACTIONS(11), 6,
      anon_sym_number,
      anon_sym_Float,
      anon_sym_Int,
      anon_sym_Char,
      anon_sym_String,
      anon_sym_Bool,
  [66] = 4,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(72), 5,
      sym__complex_type,
      sym__type,
      sym_record_type,
      sym_custom_type,
      sym_primative,
    ACTIONS(11), 6,
      anon_sym_number,
      anon_sym_Float,
      anon_sym_Int,
      anon_sym_Char,
      anon_sym_String,
      anon_sym_Bool,
  [88] = 4,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(62), 5,
      sym__complex_type,
      sym__type,
      sym_record_type,
      sym_custom_type,
      sym_primative,
    ACTIONS(11), 6,
      anon_sym_number,
      anon_sym_Float,
      anon_sym_Int,
      anon_sym_Char,
      anon_sym_String,
      anon_sym_Bool,
  [110] = 3,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(29), 3,
      sym__type,
      sym_custom_type,
      sym_primative,
    ACTIONS(11), 6,
      anon_sym_number,
      anon_sym_Float,
      anon_sym_Int,
      anon_sym_Char,
      anon_sym_String,
      anon_sym_Bool,
  [127] = 3,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(26), 3,
      sym__type,
      sym_custom_type,
      sym_primative,
    ACTIONS(11), 6,
      anon_sym_number,
      anon_sym_Float,
      anon_sym_Int,
      anon_sym_Char,
      anon_sym_String,
      anon_sym_Bool,
  [144] = 3,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(22), 3,
      sym__type,
      sym_custom_type,
      sym_primative,
    ACTIONS(11), 6,
      anon_sym_number,
      anon_sym_Float,
      anon_sym_Int,
      anon_sym_Char,
      anon_sym_String,
      anon_sym_Bool,
  [161] = 4,
    ACTIONS(5), 1,
      anon_sym_module,
    ACTIONS(7), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(11), 4,
      sym__definition,
      sym_module,
      sym_type_definition,
      aux_sym_source_file_repeat1,
  [177] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_module,
    ACTIONS(24), 1,
      anon_sym_type,
    STATE(11), 4,
      sym__definition,
      sym_module,
      sym_type_definition,
      aux_sym_source_file_repeat1,
  [193] = 5,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 1,
      sym_spread,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_exposing_repeat1,
    STATE(54), 2,
      sym__exposed,
      sym_type_with_constructors,
  [210] = 4,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(13), 1,
      aux_sym__basic_type_definition_repeat1,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(35), 2,
      anon_sym_module,
      anon_sym_type,
  [225] = 4,
    ACTIONS(44), 1,
      sym_identifier,
    STATE(13), 1,
      aux_sym__basic_type_definition_repeat1,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(42), 2,
      anon_sym_module,
      anon_sym_type,
  [240] = 1,
    ACTIONS(46), 6,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_COMMA,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_RBRACE,
  [249] = 4,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(14), 1,
      aux_sym__basic_type_definition_repeat1,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(50), 2,
      anon_sym_module,
      anon_sym_type,
  [264] = 3,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(17), 1,
      aux_sym__basic_type_definition_repeat1,
    ACTIONS(33), 3,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [276] = 1,
    ACTIONS(57), 5,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_COMMA,
      anon_sym_type,
      anon_sym_RBRACE,
  [284] = 3,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    STATE(20), 1,
      aux_sym__basic_type_definition_repeat2,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [296] = 3,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    STATE(20), 1,
      aux_sym__basic_type_definition_repeat2,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [308] = 1,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_COMMA,
      anon_sym_type,
      anon_sym_RBRACE,
  [316] = 3,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    STATE(27), 1,
      aux_sym__basic_type_definition_repeat2,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [328] = 4,
    ACTIONS(72), 1,
      sym_spread,
    ACTIONS(75), 1,
      sym_identifier,
    STATE(23), 1,
      aux_sym_exposing_repeat1,
    STATE(74), 2,
      sym__exposed,
      sym_type_with_constructors,
  [342] = 1,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_COMMA,
      anon_sym_type,
      anon_sym_RBRACE,
  [350] = 4,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(80), 1,
      sym_spread,
    STATE(23), 1,
      aux_sym_exposing_repeat1,
    STATE(53), 2,
      sym__exposed,
      sym_type_with_constructors,
  [364] = 3,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    STATE(19), 1,
      aux_sym__basic_type_definition_repeat2,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [376] = 3,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    STATE(20), 1,
      aux_sym__basic_type_definition_repeat2,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [388] = 4,
    ACTIONS(86), 1,
      anon_sym_alias,
    ACTIONS(88), 1,
      sym_Identifier,
    STATE(34), 1,
      sym__alias_type_definition,
    STATE(40), 1,
      sym__basic_type_definition,
  [401] = 1,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
      anon_sym_PIPE,
  [408] = 3,
    ACTIONS(90), 1,
      sym_identifier,
    STATE(32), 1,
      aux_sym__basic_type_definition_repeat1,
    ACTIONS(48), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [419] = 3,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_type_with_constructors_repeat1,
    ACTIONS(94), 2,
      sym_spread,
      sym_identifier,
  [430] = 3,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(17), 1,
      aux_sym__basic_type_definition_repeat1,
    ACTIONS(40), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [441] = 1,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [447] = 1,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [453] = 3,
    ACTIONS(102), 1,
      anon_sym_EQ,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(43), 1,
      aux_sym__basic_type_definition_repeat1,
  [463] = 1,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [469] = 3,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 1,
      sym_identifier,
    STATE(51), 1,
      aux_sym_record_type_repeat1,
  [479] = 1,
    ACTIONS(112), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [485] = 2,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [493] = 1,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [499] = 1,
    ACTIONS(118), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [505] = 3,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_EQ,
    STATE(17), 1,
      aux_sym__basic_type_definition_repeat1,
  [515] = 3,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(122), 1,
      anon_sym_EQ,
    STATE(17), 1,
      aux_sym__basic_type_definition_repeat1,
  [525] = 3,
    ACTIONS(124), 1,
      anon_sym_EQ,
    ACTIONS(126), 1,
      sym_identifier,
    STATE(42), 1,
      aux_sym__basic_type_definition_repeat1,
  [535] = 3,
    ACTIONS(128), 1,
      sym_spread,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(48), 1,
      aux_sym_type_with_constructors_repeat1,
  [545] = 1,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [551] = 1,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_type,
  [557] = 2,
    STATE(48), 1,
      aux_sym_type_with_constructors_repeat1,
    ACTIONS(136), 2,
      sym_spread,
      sym_identifier,
  [565] = 1,
    ACTIONS(139), 2,
      sym_spread,
      sym_identifier,
  [570] = 2,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
  [577] = 2,
    ACTIONS(145), 1,
      sym_identifier,
    STATE(55), 1,
      aux_sym_record_type_repeat1,
  [584] = 2,
    ACTIONS(147), 1,
      anon_sym_exposing,
    STATE(47), 1,
      sym_exposing,
  [591] = 2,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
  [598] = 2,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
  [605] = 2,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(55), 1,
      aux_sym_record_type_repeat1,
  [612] = 1,
    ACTIONS(158), 2,
      sym_spread,
      sym_identifier,
  [617] = 1,
    ACTIONS(160), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [622] = 2,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
  [629] = 2,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
  [636] = 1,
    ACTIONS(166), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [641] = 2,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
  [648] = 2,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
  [655] = 1,
    ACTIONS(174), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [660] = 1,
    ACTIONS(174), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [665] = 1,
    ACTIONS(176), 1,
      anon_sym_COLON,
  [669] = 1,
    ACTIONS(141), 1,
      anon_sym_COMMA,
  [673] = 1,
    ACTIONS(178), 1,
      sym_identifier,
  [677] = 1,
    ACTIONS(180), 1,
      sym_module_name,
  [681] = 1,
    ACTIONS(182), 1,
      anon_sym_COLON,
  [685] = 1,
    ACTIONS(184), 1,
      anon_sym_COLON,
  [689] = 1,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
  [693] = 1,
    ACTIONS(168), 1,
      anon_sym_COMMA,
  [697] = 1,
    ACTIONS(188), 1,
      sym_Identifier,
  [701] = 1,
    ACTIONS(149), 1,
      anon_sym_COMMA,
  [705] = 1,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 127,
  [SMALL_STATE(9)] = 144,
  [SMALL_STATE(10)] = 161,
  [SMALL_STATE(11)] = 177,
  [SMALL_STATE(12)] = 193,
  [SMALL_STATE(13)] = 210,
  [SMALL_STATE(14)] = 225,
  [SMALL_STATE(15)] = 240,
  [SMALL_STATE(16)] = 249,
  [SMALL_STATE(17)] = 264,
  [SMALL_STATE(18)] = 276,
  [SMALL_STATE(19)] = 284,
  [SMALL_STATE(20)] = 296,
  [SMALL_STATE(21)] = 308,
  [SMALL_STATE(22)] = 316,
  [SMALL_STATE(23)] = 328,
  [SMALL_STATE(24)] = 342,
  [SMALL_STATE(25)] = 350,
  [SMALL_STATE(26)] = 364,
  [SMALL_STATE(27)] = 376,
  [SMALL_STATE(28)] = 388,
  [SMALL_STATE(29)] = 401,
  [SMALL_STATE(30)] = 408,
  [SMALL_STATE(31)] = 419,
  [SMALL_STATE(32)] = 430,
  [SMALL_STATE(33)] = 441,
  [SMALL_STATE(34)] = 447,
  [SMALL_STATE(35)] = 453,
  [SMALL_STATE(36)] = 463,
  [SMALL_STATE(37)] = 469,
  [SMALL_STATE(38)] = 479,
  [SMALL_STATE(39)] = 485,
  [SMALL_STATE(40)] = 493,
  [SMALL_STATE(41)] = 499,
  [SMALL_STATE(42)] = 505,
  [SMALL_STATE(43)] = 515,
  [SMALL_STATE(44)] = 525,
  [SMALL_STATE(45)] = 535,
  [SMALL_STATE(46)] = 545,
  [SMALL_STATE(47)] = 551,
  [SMALL_STATE(48)] = 557,
  [SMALL_STATE(49)] = 565,
  [SMALL_STATE(50)] = 570,
  [SMALL_STATE(51)] = 577,
  [SMALL_STATE(52)] = 584,
  [SMALL_STATE(53)] = 591,
  [SMALL_STATE(54)] = 598,
  [SMALL_STATE(55)] = 605,
  [SMALL_STATE(56)] = 612,
  [SMALL_STATE(57)] = 617,
  [SMALL_STATE(58)] = 622,
  [SMALL_STATE(59)] = 629,
  [SMALL_STATE(60)] = 636,
  [SMALL_STATE(61)] = 641,
  [SMALL_STATE(62)] = 648,
  [SMALL_STATE(63)] = 655,
  [SMALL_STATE(64)] = 660,
  [SMALL_STATE(65)] = 665,
  [SMALL_STATE(66)] = 669,
  [SMALL_STATE(67)] = 673,
  [SMALL_STATE(68)] = 677,
  [SMALL_STATE(69)] = 681,
  [SMALL_STATE(70)] = 685,
  [SMALL_STATE(71)] = 689,
  [SMALL_STATE(72)] = 693,
  [SMALL_STATE(73)] = 697,
  [SMALL_STATE(74)] = 701,
  [SMALL_STATE(75)] = 705,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__basic_type_definition_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__basic_type_definition_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__basic_type_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 2, 0, 6),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_type, 2, 0, 6),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primative, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, 0, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_type, 1, 0, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__basic_type_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 6, 0, 18),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__basic_type_definition, 5, 0, 10),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__basic_type_definition_repeat2, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__basic_type_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(7),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__basic_type_definition, 3, 0, 4),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exposing_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exposing_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 5, 0, 17),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__basic_type_definition, 4, 0, 8),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__basic_type_definition, 4, 0, 7),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 2, 0, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_type_definition, 4, 0, 5),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing, 4, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exposed, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_type_definition, 5, 0, 9),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing, 5, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, 0, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_with_constructors_repeat1, 2, 0, 14), SHIFT_REPEAT(66),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exposing_repeat1, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_type_repeat1, 2, 0, 11), SHIFT_REPEAT(65),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_with_constructors_repeat1, 2, 0, 12),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_with_constructors, 4, 0, 13),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_with_constructors, 3, 0, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_with_constructors, 5, 0, 15),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_type_repeat1, 4, 0, 16),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [190] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_gren(void) {
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

#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 148
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  anon_sym_BANG = 1,
  anon_sym_BANGinclude = 2,
  anon_sym_LT = 3,
  sym_include_close = 4,
  anon_sym_BANGtheme = 5,
  anon_sym_from = 6,
  sym_url = 7,
  sym_filepath = 8,
  anon_sym_as = 9,
  sym_block_open = 10,
  sym_block_close = 11,
  sym_attribute_sep = 12,
  sym_attribute_list_open = 13,
  sym_attribute_list_close = 14,
  sym_identifier = 15,
  sym_non_breakable_identifier = 16,
  sym_string = 17,
  aux_sym_comment_token1 = 18,
  aux_sym_comment_token2 = 19,
  sym_delimiter = 20,
  sym_keyword = 21,
  anon_sym_skinparam = 22,
  sym_number = 23,
  anon_sym_POUND = 24,
  sym_style_sep = 25,
  anon_sym_DASH = 26,
  aux_sym_arrow_token1 = 27,
  anon_sym_LBRACK = 28,
  anon_sym_hidden = 29,
  anon_sym_RBRACK = 30,
  sym_document = 31,
  sym__statement = 32,
  sym_preprocessor = 33,
  sym_include = 34,
  sym_include_open = 35,
  sym_theme = 36,
  sym_component = 37,
  sym_block = 38,
  sym_attribute_list = 39,
  sym_attribute = 40,
  sym_comment = 41,
  sym_skinparameter = 42,
  sym_style = 43,
  sym_arrow = 44,
  sym_annotation = 45,
  aux_sym_document_repeat1 = 46,
  aux_sym_attribute_list_repeat1 = 47,
  aux_sym_style_repeat1 = 48,
  aux_sym_arrow_repeat1 = 49,
  aux_sym_arrow_repeat2 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BANG] = "!",
  [anon_sym_BANGinclude] = "!include",
  [anon_sym_LT] = "<",
  [sym_include_close] = "include_close",
  [anon_sym_BANGtheme] = "!theme",
  [anon_sym_from] = "from",
  [sym_url] = "url",
  [sym_filepath] = "filepath",
  [anon_sym_as] = "as",
  [sym_block_open] = "block_open",
  [sym_block_close] = "block_close",
  [sym_attribute_sep] = "attribute_sep",
  [sym_attribute_list_open] = "attribute_list_open",
  [sym_attribute_list_close] = "attribute_list_close",
  [sym_identifier] = "identifier",
  [sym_non_breakable_identifier] = "non_breakable_identifier",
  [sym_string] = "string",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [sym_delimiter] = "delimiter",
  [sym_keyword] = "keyword",
  [anon_sym_skinparam] = "skinparam",
  [sym_number] = "number",
  [anon_sym_POUND] = "#",
  [sym_style_sep] = "style_sep",
  [anon_sym_DASH] = "-",
  [aux_sym_arrow_token1] = "arrow_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_hidden] = "hidden",
  [anon_sym_RBRACK] = "]",
  [sym_document] = "document",
  [sym__statement] = "_statement",
  [sym_preprocessor] = "preprocessor",
  [sym_include] = "include",
  [sym_include_open] = "include_open",
  [sym_theme] = "theme",
  [sym_component] = "component",
  [sym_block] = "block",
  [sym_attribute_list] = "attribute_list",
  [sym_attribute] = "attribute",
  [sym_comment] = "comment",
  [sym_skinparameter] = "skinparameter",
  [sym_style] = "style",
  [sym_arrow] = "arrow",
  [sym_annotation] = "annotation",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_attribute_list_repeat1] = "attribute_list_repeat1",
  [aux_sym_style_repeat1] = "style_repeat1",
  [aux_sym_arrow_repeat1] = "arrow_repeat1",
  [aux_sym_arrow_repeat2] = "arrow_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_BANGinclude] = anon_sym_BANGinclude,
  [anon_sym_LT] = anon_sym_LT,
  [sym_include_close] = sym_include_close,
  [anon_sym_BANGtheme] = anon_sym_BANGtheme,
  [anon_sym_from] = anon_sym_from,
  [sym_url] = sym_url,
  [sym_filepath] = sym_filepath,
  [anon_sym_as] = anon_sym_as,
  [sym_block_open] = sym_block_open,
  [sym_block_close] = sym_block_close,
  [sym_attribute_sep] = sym_attribute_sep,
  [sym_attribute_list_open] = sym_attribute_list_open,
  [sym_attribute_list_close] = sym_attribute_list_close,
  [sym_identifier] = sym_identifier,
  [sym_non_breakable_identifier] = sym_non_breakable_identifier,
  [sym_string] = sym_string,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [sym_delimiter] = sym_delimiter,
  [sym_keyword] = sym_keyword,
  [anon_sym_skinparam] = anon_sym_skinparam,
  [sym_number] = sym_number,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_style_sep] = sym_style_sep,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_arrow_token1] = aux_sym_arrow_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_hidden] = anon_sym_hidden,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_document] = sym_document,
  [sym__statement] = sym__statement,
  [sym_preprocessor] = sym_preprocessor,
  [sym_include] = sym_include,
  [sym_include_open] = sym_include_open,
  [sym_theme] = sym_theme,
  [sym_component] = sym_component,
  [sym_block] = sym_block,
  [sym_attribute_list] = sym_attribute_list,
  [sym_attribute] = sym_attribute,
  [sym_comment] = sym_comment,
  [sym_skinparameter] = sym_skinparameter,
  [sym_style] = sym_style,
  [sym_arrow] = sym_arrow,
  [sym_annotation] = sym_annotation,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_attribute_list_repeat1] = aux_sym_attribute_list_repeat1,
  [aux_sym_style_repeat1] = aux_sym_style_repeat1,
  [aux_sym_arrow_repeat1] = aux_sym_arrow_repeat1,
  [aux_sym_arrow_repeat2] = aux_sym_arrow_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [sym_include_close] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANGtheme] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_filepath] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [sym_block_open] = {
    .visible = true,
    .named = true,
  },
  [sym_block_close] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_list_open] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_list_close] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_non_breakable_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_skinparam] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_style_sep] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_arrow_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hidden] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_preprocessor] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_include_open] = {
    .visible = true,
    .named = true,
  },
  [sym_theme] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_list] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_skinparameter] = {
    .visible = true,
    .named = true,
  },
  [sym_style] = {
    .visible = true,
    .named = true,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_style_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arrow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arrow_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alias = 1,
  field_component = 2,
  field_filepath = 3,
  field_lhs = 4,
  field_library = 5,
  field_method = 6,
  field_name = 7,
  field_object = 8,
  field_rhs = 9,
  field_style_param = 10,
  field_tag = 11,
  field_url = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_component] = "component",
  [field_filepath] = "filepath",
  [field_lhs] = "lhs",
  [field_library] = "library",
  [field_method] = "method",
  [field_name] = "name",
  [field_object] = "object",
  [field_rhs] = "rhs",
  [field_style_param] = "style_param",
  [field_tag] = "tag",
  [field_url] = "url",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 3},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 3},
  [11] = {.index = 18, .length = 1},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 2},
  [15] = {.index = 25, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_url, 1},
  [1] =
    {field_filepath, 1},
  [2] =
    {field_method, 0},
    {field_tag, 1},
  [4] =
    {field_object, 0},
  [5] =
    {field_lhs, 0},
    {field_rhs, 2},
  [7] =
    {field_component, 0},
  [8] =
    {field_library, 1},
    {field_library, 2},
    {field_library, 3},
  [11] =
    {field_name, 1},
    {field_url, 3},
  [13] =
    {field_lhs, 0},
    {field_rhs, 3},
  [15] =
    {field_alias, 3},
    {field_method, 0},
    {field_tag, 1},
  [18] =
    {field_style_param, 1},
  [19] =
    {field_lhs, 0},
    {field_rhs, 4},
  [21] =
    {field_style_param, 1},
    {field_style_param, 2, .inherited = true},
  [23] =
    {field_lhs, 0},
    {field_rhs, 5},
  [25] =
    {field_style_param, 0, .inherited = true},
    {field_style_param, 1, .inherited = true},
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
  [5] = 2,
  [6] = 6,
  [7] = 3,
  [8] = 8,
  [9] = 4,
  [10] = 10,
  [11] = 8,
  [12] = 12,
  [13] = 6,
  [14] = 12,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 21,
  [24] = 22,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 28,
  [33] = 27,
  [34] = 34,
  [35] = 31,
  [36] = 25,
  [37] = 30,
  [38] = 26,
  [39] = 39,
  [40] = 29,
  [41] = 34,
  [42] = 39,
  [43] = 43,
  [44] = 43,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 46,
  [52] = 52,
  [53] = 48,
  [54] = 49,
  [55] = 47,
  [56] = 45,
  [57] = 52,
  [58] = 50,
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
  [69] = 60,
  [70] = 70,
  [71] = 71,
  [72] = 68,
  [73] = 59,
  [74] = 74,
  [75] = 65,
  [76] = 64,
  [77] = 61,
  [78] = 78,
  [79] = 71,
  [80] = 70,
  [81] = 62,
  [82] = 63,
  [83] = 66,
  [84] = 67,
  [85] = 78,
  [86] = 86,
  [87] = 86,
  [88] = 74,
  [89] = 89,
  [90] = 89,
  [91] = 91,
  [92] = 91,
  [93] = 93,
  [94] = 93,
  [95] = 95,
  [96] = 96,
  [97] = 96,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 101,
  [103] = 103,
  [104] = 104,
  [105] = 104,
  [106] = 106,
  [107] = 106,
  [108] = 99,
  [109] = 109,
  [110] = 110,
  [111] = 103,
  [112] = 112,
  [113] = 100,
  [114] = 114,
  [115] = 109,
  [116] = 112,
  [117] = 117,
  [118] = 118,
  [119] = 19,
  [120] = 120,
  [121] = 120,
  [122] = 122,
  [123] = 118,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 126,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 125,
  [139] = 139,
  [140] = 132,
  [141] = 137,
  [142] = 129,
  [143] = 135,
  [144] = 136,
  [145] = 131,
  [146] = 127,
  [147] = 130,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == '[') ADVANCE(112);
      if (lookahead == ']') ADVANCE(114);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'h') ADVANCE(40);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == '[') ADVANCE(112);
      if (lookahead == ']') ADVANCE(114);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'h') ADVANCE(40);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == '[') ADVANCE(112);
      if (lookahead == ']') ADVANCE(114);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'h') ADVANCE(40);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 's') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 's') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '}') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '}') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '{') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '{') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '{') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '{') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '{') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '{') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '>') ADVANCE(111);
      if (lookahead == '[') ADVANCE(112);
      if (lookahead == ']') ADVANCE(114);
      if (lookahead == '{') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(102);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == 'h') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == 'k') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 58:
      if (lookahead == '-' ||
          lookahead == '>') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 59:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 60:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(72);
      END_STATE();
    case 61:
      if (eof) ADVANCE(65);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 's') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 62:
      if (eof) ADVANCE(65);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '{') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62)
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 63:
      if (eof) ADVANCE(65);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '{') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63)
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '{') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BANGinclude);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_include_close);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BANGtheme);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == 'p') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(72);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_block_open);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_block_close);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_attribute_sep);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_attribute_list_open);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_attribute_list_close);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_non_breakable_identifier);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(22);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_delimiter);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_skinparam);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_skinparam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_style_sep);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_arrow_token1);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 61},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 61},
  [11] = {.lex_state = 61},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 61},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 62},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 63},
  [19] = {.lex_state = 62},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 64},
  [24] = {.lex_state = 64},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 64},
  [33] = {.lex_state = 64},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 64},
  [36] = {.lex_state = 64},
  [37] = {.lex_state = 64},
  [38] = {.lex_state = 64},
  [39] = {.lex_state = 64},
  [40] = {.lex_state = 64},
  [41] = {.lex_state = 64},
  [42] = {.lex_state = 16},
  [43] = {.lex_state = 64},
  [44] = {.lex_state = 16},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 64},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 64},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 16},
  [51] = {.lex_state = 16},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 64},
  [55] = {.lex_state = 64},
  [56] = {.lex_state = 64},
  [57] = {.lex_state = 64},
  [58] = {.lex_state = 64},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 61},
  [62] = {.lex_state = 61},
  [63] = {.lex_state = 61},
  [64] = {.lex_state = 61},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 61},
  [67] = {.lex_state = 61},
  [68] = {.lex_state = 61},
  [69] = {.lex_state = 61},
  [70] = {.lex_state = 61},
  [71] = {.lex_state = 61},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 61},
  [74] = {.lex_state = 61},
  [75] = {.lex_state = 61},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 61},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 61},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 19},
  [90] = {.lex_state = 19},
  [91] = {.lex_state = 19},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 19},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 28},
  [97] = {.lex_state = 28},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 58},
  [100] = {.lex_state = 58},
  [101] = {.lex_state = 58},
  [102] = {.lex_state = 58},
  [103] = {.lex_state = 58},
  [104] = {.lex_state = 19},
  [105] = {.lex_state = 19},
  [106] = {.lex_state = 19},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 58},
  [109] = {.lex_state = 58},
  [110] = {.lex_state = 58},
  [111] = {.lex_state = 58},
  [112] = {.lex_state = 19},
  [113] = {.lex_state = 58},
  [114] = {.lex_state = 19},
  [115] = {.lex_state = 58},
  [116] = {.lex_state = 19},
  [117] = {.lex_state = 19},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 19},
  [120] = {.lex_state = 19},
  [121] = {.lex_state = 19},
  [122] = {.lex_state = 58},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 19},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 61},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 19},
  [130] = {.lex_state = 19},
  [131] = {.lex_state = 19},
  [132] = {.lex_state = 59},
  [133] = {.lex_state = 59},
  [134] = {.lex_state = 19},
  [135] = {.lex_state = 59},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 59},
  [138] = {.lex_state = 19},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 59},
  [141] = {.lex_state = 59},
  [142] = {.lex_state = 19},
  [143] = {.lex_state = 59},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 19},
  [146] = {.lex_state = 61},
  [147] = {.lex_state = 19},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_BANGinclude] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_include_close] = ACTIONS(1),
    [anon_sym_BANGtheme] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [sym_url] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [sym_block_open] = ACTIONS(1),
    [sym_block_close] = ACTIONS(1),
    [sym_attribute_sep] = ACTIONS(1),
    [sym_attribute_list_open] = ACTIONS(1),
    [sym_attribute_list_close] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_comment_token2] = ACTIONS(1),
    [sym_delimiter] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [anon_sym_skinparam] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_style_sep] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_arrow_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_hidden] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(124),
    [sym__statement] = STATE(10),
    [sym_preprocessor] = STATE(10),
    [sym_include] = STATE(10),
    [sym_theme] = STATE(10),
    [sym_component] = STATE(48),
    [sym_block] = STATE(10),
    [sym_comment] = STATE(10),
    [sym_skinparameter] = STATE(10),
    [sym_arrow] = STATE(10),
    [aux_sym_document_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_BANGinclude] = ACTIONS(7),
    [anon_sym_BANGtheme] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [aux_sym_comment_token1] = ACTIONS(13),
    [aux_sym_comment_token2] = ACTIONS(13),
    [sym_delimiter] = ACTIONS(15),
    [sym_keyword] = ACTIONS(15),
    [anon_sym_skinparam] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(19), 1,
      anon_sym_BANG,
    ACTIONS(21), 1,
      anon_sym_BANGinclude,
    ACTIONS(23), 1,
      anon_sym_BANGtheme,
    ACTIONS(25), 1,
      sym_block_close,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_delimiter,
    ACTIONS(33), 1,
      sym_keyword,
    ACTIONS(35), 1,
      anon_sym_skinparam,
    STATE(53), 1,
      sym_component,
    ACTIONS(29), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(7), 9,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
      aux_sym_document_repeat1,
  [43] = 11,
    ACTIONS(19), 1,
      anon_sym_BANG,
    ACTIONS(21), 1,
      anon_sym_BANGinclude,
    ACTIONS(23), 1,
      anon_sym_BANGtheme,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_skinparam,
    ACTIONS(37), 1,
      sym_block_close,
    ACTIONS(39), 1,
      sym_delimiter,
    ACTIONS(41), 1,
      sym_keyword,
    STATE(53), 1,
      sym_component,
    ACTIONS(29), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(12), 9,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
      aux_sym_document_repeat1,
  [86] = 11,
    ACTIONS(19), 1,
      anon_sym_BANG,
    ACTIONS(21), 1,
      anon_sym_BANGinclude,
    ACTIONS(23), 1,
      anon_sym_BANGtheme,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_skinparam,
    ACTIONS(39), 1,
      sym_delimiter,
    ACTIONS(41), 1,
      sym_keyword,
    ACTIONS(43), 1,
      sym_block_close,
    STATE(53), 1,
      sym_component,
    ACTIONS(29), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(12), 9,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
      aux_sym_document_repeat1,
  [129] = 11,
    ACTIONS(19), 1,
      anon_sym_BANG,
    ACTIONS(21), 1,
      anon_sym_BANGinclude,
    ACTIONS(23), 1,
      anon_sym_BANGtheme,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_skinparam,
    ACTIONS(45), 1,
      sym_block_close,
    ACTIONS(47), 1,
      sym_delimiter,
    ACTIONS(49), 1,
      sym_keyword,
    STATE(53), 1,
      sym_component,
    ACTIONS(29), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(3), 9,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
      aux_sym_document_repeat1,
  [172] = 11,
    ACTIONS(19), 1,
      anon_sym_BANG,
    ACTIONS(21), 1,
      anon_sym_BANGinclude,
    ACTIONS(23), 1,
      anon_sym_BANGtheme,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_skinparam,
    ACTIONS(51), 1,
      sym_block_close,
    ACTIONS(53), 1,
      sym_delimiter,
    ACTIONS(55), 1,
      sym_keyword,
    STATE(53), 1,
      sym_component,
    ACTIONS(29), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(4), 9,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
      aux_sym_document_repeat1,
  [215] = 11,
    ACTIONS(19), 1,
      anon_sym_BANG,
    ACTIONS(21), 1,
      anon_sym_BANGinclude,
    ACTIONS(23), 1,
      anon_sym_BANGtheme,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_skinparam,
    ACTIONS(39), 1,
      sym_delimiter,
    ACTIONS(41), 1,
      sym_keyword,
    ACTIONS(57), 1,
      sym_block_close,
    STATE(53), 1,
      sym_component,
    ACTIONS(29), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(12), 9,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
      aux_sym_document_repeat1,
  [258] = 5,
    ACTIONS(63), 1,
      sym_string,
    STATE(53), 1,
      sym_component,
    ACTIONS(59), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(61), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
    STATE(88), 8,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
  [289] = 11,
    ACTIONS(19), 1,
      anon_sym_BANG,
    ACTIONS(21), 1,
      anon_sym_BANGinclude,
    ACTIONS(23), 1,
      anon_sym_BANGtheme,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_skinparam,
    ACTIONS(39), 1,
      sym_delimiter,
    ACTIONS(41), 1,
      sym_keyword,
    ACTIONS(65), 1,
      sym_block_close,
    STATE(53), 1,
      sym_component,
    ACTIONS(29), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(12), 9,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
      aux_sym_document_repeat1,
  [332] = 10,
    ACTIONS(5), 1,
      anon_sym_BANG,
    ACTIONS(7), 1,
      anon_sym_BANGinclude,
    ACTIONS(9), 1,
      anon_sym_BANGtheme,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_skinparam,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_component,
    ACTIONS(13), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(69), 2,
      sym_delimiter,
      sym_keyword,
    STATE(14), 9,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
      aux_sym_document_repeat1,
  [373] = 5,
    ACTIONS(71), 1,
      sym_string,
    STATE(48), 1,
      sym_component,
    ACTIONS(59), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_delimiter,
      sym_keyword,
    STATE(74), 8,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
  [404] = 11,
    ACTIONS(73), 1,
      anon_sym_BANG,
    ACTIONS(76), 1,
      anon_sym_BANGinclude,
    ACTIONS(79), 1,
      anon_sym_BANGtheme,
    ACTIONS(82), 1,
      sym_block_close,
    ACTIONS(84), 1,
      sym_identifier,
    ACTIONS(90), 1,
      sym_delimiter,
    ACTIONS(93), 1,
      sym_keyword,
    ACTIONS(96), 1,
      anon_sym_skinparam,
    STATE(53), 1,
      sym_component,
    ACTIONS(87), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(12), 9,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
      aux_sym_document_repeat1,
  [447] = 11,
    ACTIONS(19), 1,
      anon_sym_BANG,
    ACTIONS(21), 1,
      anon_sym_BANGinclude,
    ACTIONS(23), 1,
      anon_sym_BANGtheme,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_skinparam,
    ACTIONS(99), 1,
      sym_block_close,
    ACTIONS(101), 1,
      sym_delimiter,
    ACTIONS(103), 1,
      sym_keyword,
    STATE(53), 1,
      sym_component,
    ACTIONS(29), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(9), 9,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
      aux_sym_document_repeat1,
  [490] = 10,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_BANG,
    ACTIONS(108), 1,
      anon_sym_BANGinclude,
    ACTIONS(111), 1,
      anon_sym_BANGtheme,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(123), 1,
      anon_sym_skinparam,
    STATE(48), 1,
      sym_component,
    ACTIONS(117), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(120), 2,
      sym_delimiter,
      sym_keyword,
    STATE(14), 9,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
      aux_sym_document_repeat1,
  [531] = 8,
    ACTIONS(130), 1,
      anon_sym_as,
    ACTIONS(132), 1,
      sym_attribute_list_open,
    ACTIONS(134), 1,
      sym_string,
    ACTIONS(136), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_attribute_list,
    STATE(52), 1,
      sym_style,
    ACTIONS(126), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(128), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [565] = 8,
    ACTIONS(138), 1,
      anon_sym_as,
    ACTIONS(140), 1,
      sym_attribute_list_open,
    ACTIONS(142), 1,
      sym_string,
    ACTIONS(144), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_attribute_list,
    STATE(57), 1,
      sym_style,
    ACTIONS(126), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(128), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [599] = 7,
    ACTIONS(132), 1,
      sym_attribute_list_open,
    ACTIONS(136), 1,
      anon_sym_POUND,
    ACTIONS(150), 1,
      sym_string,
    STATE(22), 1,
      sym_attribute_list,
    STATE(50), 1,
      sym_style,
    ACTIONS(146), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(148), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [630] = 7,
    ACTIONS(140), 1,
      sym_attribute_list_open,
    ACTIONS(144), 1,
      anon_sym_POUND,
    ACTIONS(152), 1,
      sym_string,
    STATE(24), 1,
      sym_attribute_list,
    STATE(58), 1,
      sym_style,
    ACTIONS(146), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(148), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [661] = 2,
    ACTIONS(156), 5,
      anon_sym_BANG,
      anon_sym_as,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(154), 10,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_attribute_list_open,
      sym_string,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
      anon_sym_POUND,
  [681] = 2,
    ACTIONS(156), 5,
      anon_sym_BANG,
      anon_sym_as,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(154), 10,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_attribute_list_open,
      sym_string,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
      anon_sym_POUND,
  [701] = 5,
    ACTIONS(136), 1,
      anon_sym_POUND,
    ACTIONS(162), 1,
      sym_string,
    STATE(51), 1,
      sym_style,
    ACTIONS(158), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(160), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [726] = 5,
    ACTIONS(136), 1,
      anon_sym_POUND,
    ACTIONS(168), 1,
      sym_string,
    STATE(49), 1,
      sym_style,
    ACTIONS(164), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(166), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [751] = 5,
    ACTIONS(144), 1,
      anon_sym_POUND,
    ACTIONS(170), 1,
      sym_string,
    STATE(46), 1,
      sym_style,
    ACTIONS(158), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(160), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [776] = 5,
    ACTIONS(144), 1,
      anon_sym_POUND,
    ACTIONS(172), 1,
      sym_string,
    STATE(54), 1,
      sym_style,
    ACTIONS(164), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(166), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [801] = 4,
    ACTIONS(136), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym_style,
    ACTIONS(174), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(176), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [823] = 4,
    ACTIONS(182), 1,
      sym_style_sep,
    STATE(29), 1,
      aux_sym_style_repeat1,
    ACTIONS(178), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(180), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [845] = 4,
    ACTIONS(136), 1,
      anon_sym_POUND,
    STATE(51), 1,
      sym_style,
    ACTIONS(158), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(160), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [867] = 4,
    ACTIONS(188), 1,
      sym_style_sep,
    STATE(28), 1,
      aux_sym_style_repeat1,
    ACTIONS(184), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(186), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [889] = 4,
    ACTIONS(182), 1,
      sym_style_sep,
    STATE(28), 1,
      aux_sym_style_repeat1,
    ACTIONS(191), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(193), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [911] = 2,
    ACTIONS(195), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(197), 9,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_string,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
      anon_sym_POUND,
  [929] = 2,
    ACTIONS(199), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(201), 9,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_string,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
      anon_sym_POUND,
  [947] = 4,
    ACTIONS(203), 1,
      sym_style_sep,
    STATE(32), 1,
      aux_sym_style_repeat1,
    ACTIONS(184), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(186), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [969] = 4,
    ACTIONS(144), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym_style,
    ACTIONS(158), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(160), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [991] = 4,
    ACTIONS(136), 1,
      anon_sym_POUND,
    STATE(49), 1,
      sym_style,
    ACTIONS(164), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(166), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1013] = 2,
    ACTIONS(199), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(201), 9,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_string,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
      anon_sym_POUND,
  [1031] = 4,
    ACTIONS(144), 1,
      anon_sym_POUND,
    STATE(55), 1,
      sym_style,
    ACTIONS(174), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(176), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1053] = 2,
    ACTIONS(195), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(197), 9,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_string,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
      anon_sym_POUND,
  [1071] = 4,
    ACTIONS(206), 1,
      sym_style_sep,
    STATE(40), 1,
      aux_sym_style_repeat1,
    ACTIONS(178), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(180), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1093] = 4,
    ACTIONS(144), 1,
      anon_sym_POUND,
    STATE(56), 1,
      sym_style,
    ACTIONS(210), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(208), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1115] = 4,
    ACTIONS(206), 1,
      sym_style_sep,
    STATE(32), 1,
      aux_sym_style_repeat1,
    ACTIONS(191), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(193), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1137] = 4,
    ACTIONS(144), 1,
      anon_sym_POUND,
    STATE(54), 1,
      sym_style,
    ACTIONS(164), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(166), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1159] = 4,
    ACTIONS(136), 1,
      anon_sym_POUND,
    STATE(45), 1,
      sym_style,
    ACTIONS(210), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(208), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1181] = 2,
    ACTIONS(214), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(212), 8,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
      sym_style_sep,
  [1198] = 2,
    ACTIONS(214), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(212), 8,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
      sym_style_sep,
  [1215] = 2,
    ACTIONS(216), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(218), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1231] = 2,
    ACTIONS(210), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(208), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1247] = 2,
    ACTIONS(220), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(222), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1263] = 3,
    ACTIONS(228), 1,
      sym_block_open,
    ACTIONS(226), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(224), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1281] = 2,
    ACTIONS(174), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(176), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1297] = 2,
    ACTIONS(164), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(166), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1313] = 2,
    ACTIONS(210), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(208), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1329] = 2,
    ACTIONS(158), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(160), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1345] = 3,
    ACTIONS(230), 1,
      sym_block_open,
    ACTIONS(226), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(224), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1363] = 2,
    ACTIONS(174), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(176), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1379] = 2,
    ACTIONS(220), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(222), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1395] = 2,
    ACTIONS(216), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(218), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1411] = 2,
    ACTIONS(158), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(160), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1427] = 2,
    ACTIONS(164), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(166), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1443] = 2,
    ACTIONS(232), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(234), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1458] = 2,
    ACTIONS(236), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(238), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1473] = 2,
    ACTIONS(242), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(240), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_delimiter,
      sym_keyword,
  [1488] = 2,
    ACTIONS(246), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(244), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_delimiter,
      sym_keyword,
  [1503] = 2,
    ACTIONS(250), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(248), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_delimiter,
      sym_keyword,
  [1518] = 2,
    ACTIONS(254), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(252), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_delimiter,
      sym_keyword,
  [1533] = 2,
    ACTIONS(256), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(258), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1548] = 2,
    ACTIONS(262), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(260), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_delimiter,
      sym_keyword,
  [1563] = 2,
    ACTIONS(266), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(264), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_delimiter,
      sym_keyword,
  [1578] = 2,
    ACTIONS(270), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(268), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_delimiter,
      sym_keyword,
  [1593] = 2,
    ACTIONS(236), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(238), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_delimiter,
      sym_keyword,
  [1608] = 2,
    ACTIONS(274), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(272), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_delimiter,
      sym_keyword,
  [1623] = 2,
    ACTIONS(278), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(276), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_delimiter,
      sym_keyword,
  [1638] = 2,
    ACTIONS(270), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(268), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1653] = 2,
    ACTIONS(232), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(234), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_delimiter,
      sym_keyword,
  [1668] = 2,
    ACTIONS(282), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(280), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_delimiter,
      sym_keyword,
  [1683] = 2,
    ACTIONS(256), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(258), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_delimiter,
      sym_keyword,
  [1698] = 2,
    ACTIONS(254), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(252), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1713] = 2,
    ACTIONS(242), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(240), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1728] = 2,
    ACTIONS(286), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(284), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_delimiter,
      sym_keyword,
  [1743] = 2,
    ACTIONS(278), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(276), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1758] = 2,
    ACTIONS(274), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(272), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1773] = 2,
    ACTIONS(246), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(244), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1788] = 2,
    ACTIONS(250), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(248), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1803] = 2,
    ACTIONS(262), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(260), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1818] = 2,
    ACTIONS(266), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(264), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1833] = 2,
    ACTIONS(286), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(284), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1848] = 2,
    ACTIONS(290), 3,
      anon_sym_BANG,
      sym_identifier,
      anon_sym_skinparam,
    ACTIONS(288), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_delimiter,
      sym_keyword,
  [1863] = 2,
    ACTIONS(290), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(288), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1878] = 2,
    ACTIONS(282), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(280), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_keyword,
  [1893] = 7,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(294), 1,
      anon_sym_DASH,
    ACTIONS(296), 1,
      aux_sym_arrow_token1,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    STATE(95), 1,
      aux_sym_arrow_repeat1,
    STATE(103), 1,
      sym_annotation,
    STATE(115), 1,
      aux_sym_arrow_repeat2,
  [1915] = 7,
    ACTIONS(294), 1,
      anon_sym_DASH,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    ACTIONS(300), 1,
      sym_identifier,
    ACTIONS(302), 1,
      aux_sym_arrow_token1,
    STATE(95), 1,
      aux_sym_arrow_repeat1,
    STATE(109), 1,
      aux_sym_arrow_repeat2,
    STATE(111), 1,
      sym_annotation,
  [1937] = 6,
    ACTIONS(304), 1,
      anon_sym_LT,
    ACTIONS(306), 1,
      sym_block_open,
    ACTIONS(310), 1,
      anon_sym_DASH,
    STATE(15), 1,
      sym_attribute,
    STATE(90), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(308), 2,
      sym_identifier,
      sym_string,
  [1957] = 6,
    ACTIONS(312), 1,
      anon_sym_LT,
    ACTIONS(314), 1,
      sym_block_open,
    ACTIONS(318), 1,
      anon_sym_DASH,
    STATE(16), 1,
      sym_attribute,
    STATE(89), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(316), 2,
      sym_identifier,
      sym_string,
  [1977] = 7,
    ACTIONS(294), 1,
      anon_sym_DASH,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      sym_identifier,
    ACTIONS(322), 1,
      aux_sym_arrow_token1,
    STATE(95), 1,
      aux_sym_arrow_repeat1,
    STATE(101), 1,
      sym_annotation,
    STATE(113), 1,
      aux_sym_arrow_repeat2,
  [1999] = 7,
    ACTIONS(294), 1,
      anon_sym_DASH,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      sym_identifier,
    ACTIONS(326), 1,
      aux_sym_arrow_token1,
    STATE(95), 1,
      aux_sym_arrow_repeat1,
    STATE(100), 1,
      aux_sym_arrow_repeat2,
    STATE(102), 1,
      sym_annotation,
  [2021] = 4,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      aux_sym_arrow_token1,
    STATE(95), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(328), 2,
      sym_identifier,
      anon_sym_LBRACK,
  [2035] = 4,
    ACTIONS(335), 1,
      anon_sym_LT,
    ACTIONS(337), 1,
      sym_url,
    ACTIONS(339), 1,
      sym_filepath,
    STATE(143), 1,
      sym_include_open,
  [2048] = 4,
    ACTIONS(335), 1,
      anon_sym_LT,
    ACTIONS(341), 1,
      sym_url,
    ACTIONS(343), 1,
      sym_filepath,
    STATE(135), 1,
      sym_include_open,
  [2061] = 2,
    STATE(117), 1,
      sym_attribute,
    ACTIONS(345), 2,
      sym_identifier,
      sym_string,
  [2069] = 3,
    ACTIONS(347), 1,
      sym_identifier,
    ACTIONS(349), 1,
      aux_sym_arrow_token1,
    STATE(110), 1,
      aux_sym_arrow_repeat2,
  [2079] = 3,
    ACTIONS(349), 1,
      aux_sym_arrow_token1,
    ACTIONS(351), 1,
      sym_identifier,
    STATE(110), 1,
      aux_sym_arrow_repeat2,
  [2089] = 3,
    ACTIONS(353), 1,
      sym_identifier,
    ACTIONS(355), 1,
      aux_sym_arrow_token1,
    STATE(108), 1,
      aux_sym_arrow_repeat2,
  [2099] = 3,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(357), 1,
      aux_sym_arrow_token1,
    STATE(99), 1,
      aux_sym_arrow_repeat2,
  [2109] = 3,
    ACTIONS(320), 1,
      sym_identifier,
    ACTIONS(359), 1,
      aux_sym_arrow_token1,
    STATE(113), 1,
      aux_sym_arrow_repeat2,
  [2119] = 3,
    ACTIONS(361), 1,
      sym_attribute_sep,
    ACTIONS(363), 1,
      sym_attribute_list_close,
    STATE(114), 1,
      aux_sym_attribute_list_repeat1,
  [2129] = 3,
    ACTIONS(361), 1,
      sym_attribute_sep,
    ACTIONS(365), 1,
      sym_attribute_list_close,
    STATE(114), 1,
      aux_sym_attribute_list_repeat1,
  [2139] = 2,
    STATE(112), 1,
      sym_attribute,
    ACTIONS(345), 2,
      sym_identifier,
      sym_string,
  [2147] = 2,
    STATE(116), 1,
      sym_attribute,
    ACTIONS(345), 2,
      sym_identifier,
      sym_string,
  [2155] = 3,
    ACTIONS(349), 1,
      aux_sym_arrow_token1,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(110), 1,
      aux_sym_arrow_repeat2,
  [2165] = 3,
    ACTIONS(324), 1,
      sym_identifier,
    ACTIONS(349), 1,
      aux_sym_arrow_token1,
    STATE(110), 1,
      aux_sym_arrow_repeat2,
  [2175] = 3,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(371), 1,
      aux_sym_arrow_token1,
    STATE(110), 1,
      aux_sym_arrow_repeat2,
  [2185] = 3,
    ACTIONS(324), 1,
      sym_identifier,
    ACTIONS(374), 1,
      aux_sym_arrow_token1,
    STATE(100), 1,
      aux_sym_arrow_repeat2,
  [2195] = 3,
    ACTIONS(361), 1,
      sym_attribute_sep,
    ACTIONS(376), 1,
      sym_attribute_list_close,
    STATE(104), 1,
      aux_sym_attribute_list_repeat1,
  [2205] = 3,
    ACTIONS(349), 1,
      aux_sym_arrow_token1,
    ACTIONS(353), 1,
      sym_identifier,
    STATE(110), 1,
      aux_sym_arrow_repeat2,
  [2215] = 3,
    ACTIONS(378), 1,
      sym_attribute_sep,
    ACTIONS(381), 1,
      sym_attribute_list_close,
    STATE(114), 1,
      aux_sym_attribute_list_repeat1,
  [2225] = 3,
    ACTIONS(320), 1,
      sym_identifier,
    ACTIONS(349), 1,
      aux_sym_arrow_token1,
    STATE(110), 1,
      aux_sym_arrow_repeat2,
  [2235] = 3,
    ACTIONS(361), 1,
      sym_attribute_sep,
    ACTIONS(383), 1,
      sym_attribute_list_close,
    STATE(105), 1,
      aux_sym_attribute_list_repeat1,
  [2245] = 1,
    ACTIONS(381), 2,
      sym_attribute_sep,
      sym_attribute_list_close,
  [2250] = 2,
    ACTIONS(385), 1,
      anon_sym_DASH,
    STATE(93), 1,
      aux_sym_arrow_repeat1,
  [2257] = 1,
    ACTIONS(154), 2,
      sym_attribute_sep,
      sym_attribute_list_close,
  [2262] = 1,
    ACTIONS(387), 2,
      sym_identifier,
      sym_number,
  [2267] = 1,
    ACTIONS(389), 2,
      sym_identifier,
      sym_number,
  [2272] = 1,
    ACTIONS(391), 2,
      sym_identifier,
      aux_sym_arrow_token1,
  [2277] = 2,
    ACTIONS(393), 1,
      anon_sym_DASH,
    STATE(94), 1,
      aux_sym_arrow_repeat1,
  [2284] = 1,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
  [2288] = 1,
    ACTIONS(397), 1,
      sym_identifier,
  [2292] = 1,
    ACTIONS(399), 1,
      sym_url,
  [2296] = 1,
    ACTIONS(401), 1,
      sym_include_close,
  [2300] = 1,
    ACTIONS(403), 1,
      sym_url,
  [2304] = 1,
    ACTIONS(405), 1,
      sym_identifier,
  [2308] = 1,
    ACTIONS(407), 1,
      sym_identifier,
  [2312] = 1,
    ACTIONS(409), 1,
      sym_identifier,
  [2316] = 1,
    ACTIONS(411), 1,
      sym_non_breakable_identifier,
  [2320] = 1,
    ACTIONS(413), 1,
      sym_non_breakable_identifier,
  [2324] = 1,
    ACTIONS(415), 1,
      anon_sym_RBRACK,
  [2328] = 1,
    ACTIONS(417), 1,
      sym_non_breakable_identifier,
  [2332] = 1,
    ACTIONS(419), 1,
      anon_sym_from,
  [2336] = 1,
    ACTIONS(421), 1,
      sym_non_breakable_identifier,
  [2340] = 1,
    ACTIONS(423), 1,
      sym_identifier,
  [2344] = 1,
    ACTIONS(425), 1,
      anon_sym_hidden,
  [2348] = 1,
    ACTIONS(427), 1,
      sym_non_breakable_identifier,
  [2352] = 1,
    ACTIONS(429), 1,
      sym_non_breakable_identifier,
  [2356] = 1,
    ACTIONS(431), 1,
      sym_identifier,
  [2360] = 1,
    ACTIONS(433), 1,
      sym_non_breakable_identifier,
  [2364] = 1,
    ACTIONS(435), 1,
      anon_sym_from,
  [2368] = 1,
    ACTIONS(437), 1,
      sym_identifier,
  [2372] = 1,
    ACTIONS(439), 1,
      sym_include_close,
  [2376] = 1,
    ACTIONS(441), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 129,
  [SMALL_STATE(6)] = 172,
  [SMALL_STATE(7)] = 215,
  [SMALL_STATE(8)] = 258,
  [SMALL_STATE(9)] = 289,
  [SMALL_STATE(10)] = 332,
  [SMALL_STATE(11)] = 373,
  [SMALL_STATE(12)] = 404,
  [SMALL_STATE(13)] = 447,
  [SMALL_STATE(14)] = 490,
  [SMALL_STATE(15)] = 531,
  [SMALL_STATE(16)] = 565,
  [SMALL_STATE(17)] = 599,
  [SMALL_STATE(18)] = 630,
  [SMALL_STATE(19)] = 661,
  [SMALL_STATE(20)] = 681,
  [SMALL_STATE(21)] = 701,
  [SMALL_STATE(22)] = 726,
  [SMALL_STATE(23)] = 751,
  [SMALL_STATE(24)] = 776,
  [SMALL_STATE(25)] = 801,
  [SMALL_STATE(26)] = 823,
  [SMALL_STATE(27)] = 845,
  [SMALL_STATE(28)] = 867,
  [SMALL_STATE(29)] = 889,
  [SMALL_STATE(30)] = 911,
  [SMALL_STATE(31)] = 929,
  [SMALL_STATE(32)] = 947,
  [SMALL_STATE(33)] = 969,
  [SMALL_STATE(34)] = 991,
  [SMALL_STATE(35)] = 1013,
  [SMALL_STATE(36)] = 1031,
  [SMALL_STATE(37)] = 1053,
  [SMALL_STATE(38)] = 1071,
  [SMALL_STATE(39)] = 1093,
  [SMALL_STATE(40)] = 1115,
  [SMALL_STATE(41)] = 1137,
  [SMALL_STATE(42)] = 1159,
  [SMALL_STATE(43)] = 1181,
  [SMALL_STATE(44)] = 1198,
  [SMALL_STATE(45)] = 1215,
  [SMALL_STATE(46)] = 1231,
  [SMALL_STATE(47)] = 1247,
  [SMALL_STATE(48)] = 1263,
  [SMALL_STATE(49)] = 1281,
  [SMALL_STATE(50)] = 1297,
  [SMALL_STATE(51)] = 1313,
  [SMALL_STATE(52)] = 1329,
  [SMALL_STATE(53)] = 1345,
  [SMALL_STATE(54)] = 1363,
  [SMALL_STATE(55)] = 1379,
  [SMALL_STATE(56)] = 1395,
  [SMALL_STATE(57)] = 1411,
  [SMALL_STATE(58)] = 1427,
  [SMALL_STATE(59)] = 1443,
  [SMALL_STATE(60)] = 1458,
  [SMALL_STATE(61)] = 1473,
  [SMALL_STATE(62)] = 1488,
  [SMALL_STATE(63)] = 1503,
  [SMALL_STATE(64)] = 1518,
  [SMALL_STATE(65)] = 1533,
  [SMALL_STATE(66)] = 1548,
  [SMALL_STATE(67)] = 1563,
  [SMALL_STATE(68)] = 1578,
  [SMALL_STATE(69)] = 1593,
  [SMALL_STATE(70)] = 1608,
  [SMALL_STATE(71)] = 1623,
  [SMALL_STATE(72)] = 1638,
  [SMALL_STATE(73)] = 1653,
  [SMALL_STATE(74)] = 1668,
  [SMALL_STATE(75)] = 1683,
  [SMALL_STATE(76)] = 1698,
  [SMALL_STATE(77)] = 1713,
  [SMALL_STATE(78)] = 1728,
  [SMALL_STATE(79)] = 1743,
  [SMALL_STATE(80)] = 1758,
  [SMALL_STATE(81)] = 1773,
  [SMALL_STATE(82)] = 1788,
  [SMALL_STATE(83)] = 1803,
  [SMALL_STATE(84)] = 1818,
  [SMALL_STATE(85)] = 1833,
  [SMALL_STATE(86)] = 1848,
  [SMALL_STATE(87)] = 1863,
  [SMALL_STATE(88)] = 1878,
  [SMALL_STATE(89)] = 1893,
  [SMALL_STATE(90)] = 1915,
  [SMALL_STATE(91)] = 1937,
  [SMALL_STATE(92)] = 1957,
  [SMALL_STATE(93)] = 1977,
  [SMALL_STATE(94)] = 1999,
  [SMALL_STATE(95)] = 2021,
  [SMALL_STATE(96)] = 2035,
  [SMALL_STATE(97)] = 2048,
  [SMALL_STATE(98)] = 2061,
  [SMALL_STATE(99)] = 2069,
  [SMALL_STATE(100)] = 2079,
  [SMALL_STATE(101)] = 2089,
  [SMALL_STATE(102)] = 2099,
  [SMALL_STATE(103)] = 2109,
  [SMALL_STATE(104)] = 2119,
  [SMALL_STATE(105)] = 2129,
  [SMALL_STATE(106)] = 2139,
  [SMALL_STATE(107)] = 2147,
  [SMALL_STATE(108)] = 2155,
  [SMALL_STATE(109)] = 2165,
  [SMALL_STATE(110)] = 2175,
  [SMALL_STATE(111)] = 2185,
  [SMALL_STATE(112)] = 2195,
  [SMALL_STATE(113)] = 2205,
  [SMALL_STATE(114)] = 2215,
  [SMALL_STATE(115)] = 2225,
  [SMALL_STATE(116)] = 2235,
  [SMALL_STATE(117)] = 2245,
  [SMALL_STATE(118)] = 2250,
  [SMALL_STATE(119)] = 2257,
  [SMALL_STATE(120)] = 2262,
  [SMALL_STATE(121)] = 2267,
  [SMALL_STATE(122)] = 2272,
  [SMALL_STATE(123)] = 2277,
  [SMALL_STATE(124)] = 2284,
  [SMALL_STATE(125)] = 2288,
  [SMALL_STATE(126)] = 2292,
  [SMALL_STATE(127)] = 2296,
  [SMALL_STATE(128)] = 2300,
  [SMALL_STATE(129)] = 2304,
  [SMALL_STATE(130)] = 2308,
  [SMALL_STATE(131)] = 2312,
  [SMALL_STATE(132)] = 2316,
  [SMALL_STATE(133)] = 2320,
  [SMALL_STATE(134)] = 2324,
  [SMALL_STATE(135)] = 2328,
  [SMALL_STATE(136)] = 2332,
  [SMALL_STATE(137)] = 2336,
  [SMALL_STATE(138)] = 2340,
  [SMALL_STATE(139)] = 2344,
  [SMALL_STATE(140)] = 2348,
  [SMALL_STATE(141)] = 2352,
  [SMALL_STATE(142)] = 2356,
  [SMALL_STATE(143)] = 2360,
  [SMALL_STATE(144)] = 2364,
  [SMALL_STATE(145)] = 2368,
  [SMALL_STATE(146)] = 2372,
  [SMALL_STATE(147)] = 2376,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preprocessor, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(125),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(96),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(147),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(91),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(81),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(142),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(138),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(97),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(130),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(92),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(62),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(14),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(129),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2, .production_id = 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2, .production_id = 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4, .production_id = 10),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4, .production_id = 10),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3, .production_id = 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3, .production_id = 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 5, .production_id = 10),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 5, .production_id = 10),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 6, .production_id = 10),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 6, .production_id = 10),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style, 2, .production_id = 11),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style, 2, .production_id = 11),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_style_repeat1, 2, .production_id = 15),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_style_repeat1, 2, .production_id = 15),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_style_repeat1, 2, .production_id = 15), SHIFT_REPEAT(141),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style, 3, .production_id = 13),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style, 3, .production_id = 13),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 4),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_style_repeat1, 2, .production_id = 15), SHIFT_REPEAT(137),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4, .production_id = 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4, .production_id = 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_style_repeat1, 2, .production_id = 11),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_style_repeat1, 2, .production_id = 11),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 5, .production_id = 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 5, .production_id = 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 7, .production_id = 10),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 7, .production_id = 10),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 4, .production_id = 7),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 4, .production_id = 7),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 5, .production_id = 12),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 5, .production_id = 12),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 4, .production_id = 9),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 4, .production_id = 9),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparameter, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparameter, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 4),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 6, .production_id = 14),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 6, .production_id = 14),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, .production_id = 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, .production_id = 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2, .production_id = 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 6),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 6),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 6),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 6),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme, 4, .production_id = 8),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme, 4, .production_id = 8),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preprocessor, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3, .production_id = 5),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 3, .production_id = 5),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 4),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(95),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_repeat2, 2),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_repeat2, 2), SHIFT_REPEAT(110),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2), SHIFT_REPEAT(98),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [395] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_open, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
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

TS_PUBLIC const TSLanguage *tree_sitter_plantuml() {
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

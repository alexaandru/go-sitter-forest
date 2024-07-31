#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 148
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
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
  aux_sym_comment_token3 = 20,
  sym_delimiter = 21,
  sym_keyword = 22,
  anon_sym_skinparam = 23,
  sym_number = 24,
  anon_sym_POUND = 25,
  sym_style_sep = 26,
  anon_sym_DASH = 27,
  aux_sym_arrow_token1 = 28,
  anon_sym_LBRACK = 29,
  anon_sym_hidden = 30,
  anon_sym_RBRACK = 31,
  sym_document = 32,
  sym__statement = 33,
  sym_preprocessor = 34,
  sym_include = 35,
  sym_include_open = 36,
  sym_theme = 37,
  sym_component = 38,
  sym_block = 39,
  sym_attribute_list = 40,
  sym_attribute = 41,
  sym_comment = 42,
  sym_skinparameter = 43,
  sym_style = 44,
  sym_arrow = 45,
  sym_annotation = 46,
  aux_sym_document_repeat1 = 47,
  aux_sym_attribute_list_repeat1 = 48,
  aux_sym_style_repeat1 = 49,
  aux_sym_arrow_repeat1 = 50,
  aux_sym_arrow_repeat2 = 51,
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
  [aux_sym_comment_token3] = "comment_token3",
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
  [aux_sym_comment_token3] = aux_sym_comment_token3,
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
  [aux_sym_comment_token3] = {
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
      if (eof) ADVANCE(75);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == '[') ADVANCE(125);
      if (lookahead == ']') ADVANCE(127);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'h') ADVANCE(50);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '}') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == '[') ADVANCE(125);
      if (lookahead == ']') ADVANCE(127);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'h') ADVANCE(50);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '}') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == '[') ADVANCE(125);
      if (lookahead == ']') ADVANCE(127);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'h') ADVANCE(50);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 's') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(6);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '}') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(8);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '}') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(11);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '{') ADVANCE(94);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(14);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(16);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '{') ADVANCE(94);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(19);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '}') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(21);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '}') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '{') ADVANCE(94);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(24);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '>') ADVANCE(124);
      if (lookahead == '[') ADVANCE(125);
      if (lookahead == ']') ADVANCE(127);
      if (lookahead == '{') ADVANCE(94);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(110);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(4);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(112);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(70);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'h') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '>') ADVANCE(91);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 52:
      if (lookahead == 'k') ADVANCE(51);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 68:
      if (lookahead == '-' ||
          lookahead == '>') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 69:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(69)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(82);
      END_STATE();
    case 71:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 's') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(71)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 72:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '{') ADVANCE(94);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(72)
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 73:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '{') ADVANCE(94);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73)
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 74:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '{') ADVANCE(94);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(74)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BANGinclude);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_include_close);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BANGtheme);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == 'p') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(82);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_block_open);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_block_close);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_attribute_sep);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_attribute_list_open);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_attribute_list_close);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_non_breakable_identifier);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_delimiter);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_skinparam);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_skinparam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_style_sep);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_arrow_token1);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 71},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 71},
  [11] = {.lex_state = 71},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 71},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 72},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 73},
  [19] = {.lex_state = 72},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 74},
  [24] = {.lex_state = 74},
  [25] = {.lex_state = 23},
  [26] = {.lex_state = 23},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 74},
  [33] = {.lex_state = 74},
  [34] = {.lex_state = 23},
  [35] = {.lex_state = 74},
  [36] = {.lex_state = 74},
  [37] = {.lex_state = 74},
  [38] = {.lex_state = 74},
  [39] = {.lex_state = 74},
  [40] = {.lex_state = 74},
  [41] = {.lex_state = 74},
  [42] = {.lex_state = 23},
  [43] = {.lex_state = 74},
  [44] = {.lex_state = 23},
  [45] = {.lex_state = 23},
  [46] = {.lex_state = 74},
  [47] = {.lex_state = 23},
  [48] = {.lex_state = 74},
  [49] = {.lex_state = 23},
  [50] = {.lex_state = 23},
  [51] = {.lex_state = 23},
  [52] = {.lex_state = 23},
  [53] = {.lex_state = 23},
  [54] = {.lex_state = 74},
  [55] = {.lex_state = 74},
  [56] = {.lex_state = 74},
  [57] = {.lex_state = 74},
  [58] = {.lex_state = 74},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 71},
  [62] = {.lex_state = 71},
  [63] = {.lex_state = 71},
  [64] = {.lex_state = 71},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 71},
  [67] = {.lex_state = 71},
  [68] = {.lex_state = 71},
  [69] = {.lex_state = 71},
  [70] = {.lex_state = 71},
  [71] = {.lex_state = 71},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 71},
  [74] = {.lex_state = 71},
  [75] = {.lex_state = 71},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 71},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 71},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 26},
  [90] = {.lex_state = 26},
  [91] = {.lex_state = 26},
  [92] = {.lex_state = 26},
  [93] = {.lex_state = 26},
  [94] = {.lex_state = 26},
  [95] = {.lex_state = 26},
  [96] = {.lex_state = 38},
  [97] = {.lex_state = 38},
  [98] = {.lex_state = 26},
  [99] = {.lex_state = 68},
  [100] = {.lex_state = 68},
  [101] = {.lex_state = 68},
  [102] = {.lex_state = 68},
  [103] = {.lex_state = 68},
  [104] = {.lex_state = 26},
  [105] = {.lex_state = 26},
  [106] = {.lex_state = 26},
  [107] = {.lex_state = 26},
  [108] = {.lex_state = 68},
  [109] = {.lex_state = 68},
  [110] = {.lex_state = 68},
  [111] = {.lex_state = 68},
  [112] = {.lex_state = 26},
  [113] = {.lex_state = 68},
  [114] = {.lex_state = 26},
  [115] = {.lex_state = 68},
  [116] = {.lex_state = 26},
  [117] = {.lex_state = 26},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 26},
  [120] = {.lex_state = 26},
  [121] = {.lex_state = 26},
  [122] = {.lex_state = 68},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 26},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 71},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 26},
  [130] = {.lex_state = 26},
  [131] = {.lex_state = 26},
  [132] = {.lex_state = 69},
  [133] = {.lex_state = 69},
  [134] = {.lex_state = 26},
  [135] = {.lex_state = 69},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 69},
  [138] = {.lex_state = 26},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 69},
  [141] = {.lex_state = 69},
  [142] = {.lex_state = 26},
  [143] = {.lex_state = 69},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 26},
  [146] = {.lex_state = 71},
  [147] = {.lex_state = 26},
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
    [aux_sym_comment_token3] = ACTIONS(1),
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
    [aux_sym_comment_token2] = ACTIONS(15),
    [aux_sym_comment_token3] = ACTIONS(15),
    [sym_delimiter] = ACTIONS(17),
    [sym_keyword] = ACTIONS(17),
    [anon_sym_skinparam] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_BANGinclude,
    ACTIONS(25), 1,
      anon_sym_BANGtheme,
    ACTIONS(27), 1,
      sym_block_close,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      sym_delimiter,
    ACTIONS(37), 1,
      sym_keyword,
    ACTIONS(39), 1,
      anon_sym_skinparam,
    STATE(53), 1,
      sym_component,
    ACTIONS(33), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
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
  [46] = 12,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_BANGinclude,
    ACTIONS(25), 1,
      anon_sym_BANGtheme,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      anon_sym_skinparam,
    ACTIONS(41), 1,
      sym_block_close,
    ACTIONS(43), 1,
      sym_delimiter,
    ACTIONS(45), 1,
      sym_keyword,
    STATE(53), 1,
      sym_component,
    ACTIONS(33), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
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
  [92] = 12,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_BANGinclude,
    ACTIONS(25), 1,
      anon_sym_BANGtheme,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      anon_sym_skinparam,
    ACTIONS(43), 1,
      sym_delimiter,
    ACTIONS(45), 1,
      sym_keyword,
    ACTIONS(47), 1,
      sym_block_close,
    STATE(53), 1,
      sym_component,
    ACTIONS(33), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
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
  [138] = 12,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_BANGinclude,
    ACTIONS(25), 1,
      anon_sym_BANGtheme,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      anon_sym_skinparam,
    ACTIONS(49), 1,
      sym_block_close,
    ACTIONS(51), 1,
      sym_delimiter,
    ACTIONS(53), 1,
      sym_keyword,
    STATE(53), 1,
      sym_component,
    ACTIONS(33), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
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
  [184] = 12,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_BANGinclude,
    ACTIONS(25), 1,
      anon_sym_BANGtheme,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      anon_sym_skinparam,
    ACTIONS(55), 1,
      sym_block_close,
    ACTIONS(57), 1,
      sym_delimiter,
    ACTIONS(59), 1,
      sym_keyword,
    STATE(53), 1,
      sym_component,
    ACTIONS(33), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
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
  [230] = 12,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_BANGinclude,
    ACTIONS(25), 1,
      anon_sym_BANGtheme,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      anon_sym_skinparam,
    ACTIONS(43), 1,
      sym_delimiter,
    ACTIONS(45), 1,
      sym_keyword,
    ACTIONS(61), 1,
      sym_block_close,
    STATE(53), 1,
      sym_component,
    ACTIONS(33), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
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
  [276] = 5,
    ACTIONS(67), 1,
      sym_string,
    STATE(53), 1,
      sym_component,
    ACTIONS(65), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(63), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    STATE(88), 8,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
  [308] = 12,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_BANGinclude,
    ACTIONS(25), 1,
      anon_sym_BANGtheme,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      anon_sym_skinparam,
    ACTIONS(43), 1,
      sym_delimiter,
    ACTIONS(45), 1,
      sym_keyword,
    ACTIONS(69), 1,
      sym_block_close,
    STATE(53), 1,
      sym_component,
    ACTIONS(33), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
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
  [354] = 11,
    ACTIONS(5), 1,
      anon_sym_BANG,
    ACTIONS(7), 1,
      anon_sym_BANGinclude,
    ACTIONS(9), 1,
      anon_sym_BANGtheme,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      anon_sym_skinparam,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_component,
    ACTIONS(15), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(73), 2,
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
  [398] = 5,
    ACTIONS(75), 1,
      sym_string,
    STATE(48), 1,
      sym_component,
    ACTIONS(63), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
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
  [430] = 12,
    ACTIONS(77), 1,
      anon_sym_BANG,
    ACTIONS(80), 1,
      anon_sym_BANGinclude,
    ACTIONS(83), 1,
      anon_sym_BANGtheme,
    ACTIONS(86), 1,
      sym_block_close,
    ACTIONS(88), 1,
      sym_identifier,
    ACTIONS(91), 1,
      aux_sym_comment_token1,
    ACTIONS(97), 1,
      sym_delimiter,
    ACTIONS(100), 1,
      sym_keyword,
    ACTIONS(103), 1,
      anon_sym_skinparam,
    STATE(53), 1,
      sym_component,
    ACTIONS(94), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
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
  [476] = 12,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_BANGinclude,
    ACTIONS(25), 1,
      anon_sym_BANGtheme,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      anon_sym_skinparam,
    ACTIONS(106), 1,
      sym_block_close,
    ACTIONS(108), 1,
      sym_delimiter,
    ACTIONS(110), 1,
      sym_keyword,
    STATE(53), 1,
      sym_component,
    ACTIONS(33), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
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
  [522] = 11,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_BANG,
    ACTIONS(115), 1,
      anon_sym_BANGinclude,
    ACTIONS(118), 1,
      anon_sym_BANGtheme,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(124), 1,
      aux_sym_comment_token1,
    ACTIONS(133), 1,
      anon_sym_skinparam,
    STATE(48), 1,
      sym_component,
    ACTIONS(127), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(130), 2,
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
  [566] = 8,
    ACTIONS(140), 1,
      anon_sym_as,
    ACTIONS(142), 1,
      sym_attribute_list_open,
    ACTIONS(144), 1,
      sym_string,
    ACTIONS(146), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_attribute_list,
    STATE(52), 1,
      sym_style,
    ACTIONS(136), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(138), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [601] = 8,
    ACTIONS(148), 1,
      anon_sym_as,
    ACTIONS(150), 1,
      sym_attribute_list_open,
    ACTIONS(152), 1,
      sym_string,
    ACTIONS(154), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_attribute_list,
    STATE(57), 1,
      sym_style,
    ACTIONS(136), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [636] = 7,
    ACTIONS(142), 1,
      sym_attribute_list_open,
    ACTIONS(146), 1,
      anon_sym_POUND,
    ACTIONS(160), 1,
      sym_string,
    STATE(22), 1,
      sym_attribute_list,
    STATE(50), 1,
      sym_style,
    ACTIONS(156), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(158), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [668] = 7,
    ACTIONS(150), 1,
      sym_attribute_list_open,
    ACTIONS(154), 1,
      anon_sym_POUND,
    ACTIONS(162), 1,
      sym_string,
    STATE(24), 1,
      sym_attribute_list,
    STATE(58), 1,
      sym_style,
    ACTIONS(156), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(158), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [700] = 2,
    ACTIONS(166), 7,
      anon_sym_BANG,
      anon_sym_as,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(164), 9,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_attribute_list_open,
      sym_string,
      aux_sym_comment_token1,
      sym_keyword,
      anon_sym_POUND,
  [721] = 2,
    ACTIONS(166), 7,
      anon_sym_BANG,
      anon_sym_as,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(164), 9,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_attribute_list_open,
      sym_string,
      aux_sym_comment_token1,
      sym_keyword,
      anon_sym_POUND,
  [742] = 5,
    ACTIONS(146), 1,
      anon_sym_POUND,
    ACTIONS(172), 1,
      sym_string,
    STATE(51), 1,
      sym_style,
    ACTIONS(168), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(170), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [768] = 5,
    ACTIONS(146), 1,
      anon_sym_POUND,
    ACTIONS(178), 1,
      sym_string,
    STATE(49), 1,
      sym_style,
    ACTIONS(174), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(176), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [794] = 5,
    ACTIONS(154), 1,
      anon_sym_POUND,
    ACTIONS(180), 1,
      sym_string,
    STATE(46), 1,
      sym_style,
    ACTIONS(168), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(170), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [820] = 5,
    ACTIONS(154), 1,
      anon_sym_POUND,
    ACTIONS(182), 1,
      sym_string,
    STATE(54), 1,
      sym_style,
    ACTIONS(174), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [846] = 4,
    ACTIONS(146), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym_style,
    ACTIONS(184), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(186), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [869] = 4,
    ACTIONS(192), 1,
      sym_style_sep,
    STATE(29), 1,
      aux_sym_style_repeat1,
    ACTIONS(188), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(190), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [892] = 4,
    ACTIONS(146), 1,
      anon_sym_POUND,
    STATE(51), 1,
      sym_style,
    ACTIONS(168), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(170), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [915] = 4,
    ACTIONS(198), 1,
      sym_style_sep,
    STATE(28), 1,
      aux_sym_style_repeat1,
    ACTIONS(194), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(196), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [938] = 4,
    ACTIONS(192), 1,
      sym_style_sep,
    STATE(28), 1,
      aux_sym_style_repeat1,
    ACTIONS(201), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(203), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [961] = 2,
    ACTIONS(205), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(207), 8,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_string,
      aux_sym_comment_token1,
      sym_keyword,
      anon_sym_POUND,
  [980] = 2,
    ACTIONS(209), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(211), 8,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_string,
      aux_sym_comment_token1,
      sym_keyword,
      anon_sym_POUND,
  [999] = 4,
    ACTIONS(213), 1,
      sym_style_sep,
    STATE(32), 1,
      aux_sym_style_repeat1,
    ACTIONS(194), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(196), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [1022] = 4,
    ACTIONS(154), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym_style,
    ACTIONS(168), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(170), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [1045] = 4,
    ACTIONS(146), 1,
      anon_sym_POUND,
    STATE(49), 1,
      sym_style,
    ACTIONS(174), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(176), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [1068] = 2,
    ACTIONS(209), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(211), 8,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_string,
      aux_sym_comment_token1,
      sym_keyword,
      anon_sym_POUND,
  [1087] = 4,
    ACTIONS(154), 1,
      anon_sym_POUND,
    STATE(55), 1,
      sym_style,
    ACTIONS(184), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [1110] = 2,
    ACTIONS(205), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(207), 8,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_string,
      aux_sym_comment_token1,
      sym_keyword,
      anon_sym_POUND,
  [1129] = 4,
    ACTIONS(216), 1,
      sym_style_sep,
    STATE(40), 1,
      aux_sym_style_repeat1,
    ACTIONS(188), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(190), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [1152] = 4,
    ACTIONS(154), 1,
      anon_sym_POUND,
    STATE(56), 1,
      sym_style,
    ACTIONS(218), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(220), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1175] = 4,
    ACTIONS(216), 1,
      sym_style_sep,
    STATE(32), 1,
      aux_sym_style_repeat1,
    ACTIONS(201), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(203), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [1198] = 4,
    ACTIONS(154), 1,
      anon_sym_POUND,
    STATE(54), 1,
      sym_style,
    ACTIONS(174), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [1221] = 4,
    ACTIONS(146), 1,
      anon_sym_POUND,
    STATE(45), 1,
      sym_style,
    ACTIONS(218), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(220), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1244] = 2,
    ACTIONS(224), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(222), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
      sym_style_sep,
  [1262] = 2,
    ACTIONS(224), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(222), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
      sym_style_sep,
  [1280] = 2,
    ACTIONS(226), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(228), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [1297] = 2,
    ACTIONS(218), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(220), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1314] = 2,
    ACTIONS(230), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(232), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [1331] = 3,
    ACTIONS(238), 1,
      sym_block_open,
    ACTIONS(234), 5,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(236), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1350] = 2,
    ACTIONS(184), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(186), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [1367] = 2,
    ACTIONS(174), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(176), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [1384] = 2,
    ACTIONS(218), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(220), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1401] = 2,
    ACTIONS(168), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(170), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [1418] = 3,
    ACTIONS(240), 1,
      sym_block_open,
    ACTIONS(234), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(236), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1437] = 2,
    ACTIONS(184), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [1454] = 2,
    ACTIONS(230), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(232), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [1471] = 2,
    ACTIONS(226), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(228), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [1488] = 2,
    ACTIONS(168), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(170), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [1505] = 2,
    ACTIONS(174), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [1522] = 2,
    ACTIONS(244), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(242), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1538] = 2,
    ACTIONS(248), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(246), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1554] = 2,
    ACTIONS(252), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(250), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1570] = 2,
    ACTIONS(256), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(254), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1586] = 2,
    ACTIONS(260), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(258), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1602] = 2,
    ACTIONS(264), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(262), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1618] = 2,
    ACTIONS(268), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(266), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1634] = 2,
    ACTIONS(272), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(270), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1650] = 2,
    ACTIONS(276), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(274), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1666] = 2,
    ACTIONS(280), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(278), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1682] = 2,
    ACTIONS(246), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(248), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1698] = 2,
    ACTIONS(284), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(282), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1714] = 2,
    ACTIONS(288), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(286), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1730] = 2,
    ACTIONS(278), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(280), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1746] = 2,
    ACTIONS(242), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(244), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1762] = 2,
    ACTIONS(292), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(290), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1778] = 2,
    ACTIONS(266), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(268), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1794] = 2,
    ACTIONS(262), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(264), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1810] = 2,
    ACTIONS(250), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(252), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1826] = 2,
    ACTIONS(296), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(294), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1842] = 2,
    ACTIONS(286), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(288), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1858] = 2,
    ACTIONS(282), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(284), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1874] = 2,
    ACTIONS(254), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(256), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1890] = 2,
    ACTIONS(258), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(260), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1906] = 2,
    ACTIONS(270), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(272), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1922] = 2,
    ACTIONS(274), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(276), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1938] = 2,
    ACTIONS(294), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(296), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1954] = 2,
    ACTIONS(300), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(298), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1970] = 2,
    ACTIONS(298), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(300), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1986] = 2,
    ACTIONS(290), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(292), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [2002] = 7,
    ACTIONS(302), 1,
      sym_identifier,
    ACTIONS(304), 1,
      anon_sym_DASH,
    ACTIONS(306), 1,
      aux_sym_arrow_token1,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    STATE(95), 1,
      aux_sym_arrow_repeat1,
    STATE(103), 1,
      sym_annotation,
    STATE(115), 1,
      aux_sym_arrow_repeat2,
  [2024] = 7,
    ACTIONS(304), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      sym_identifier,
    ACTIONS(312), 1,
      aux_sym_arrow_token1,
    STATE(95), 1,
      aux_sym_arrow_repeat1,
    STATE(109), 1,
      aux_sym_arrow_repeat2,
    STATE(111), 1,
      sym_annotation,
  [2046] = 6,
    ACTIONS(314), 1,
      anon_sym_LT,
    ACTIONS(316), 1,
      sym_block_open,
    ACTIONS(320), 1,
      anon_sym_DASH,
    STATE(15), 1,
      sym_attribute,
    STATE(90), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(318), 2,
      sym_identifier,
      sym_string,
  [2066] = 6,
    ACTIONS(322), 1,
      anon_sym_LT,
    ACTIONS(324), 1,
      sym_block_open,
    ACTIONS(328), 1,
      anon_sym_DASH,
    STATE(16), 1,
      sym_attribute,
    STATE(89), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(326), 2,
      sym_identifier,
      sym_string,
  [2086] = 7,
    ACTIONS(304), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(332), 1,
      aux_sym_arrow_token1,
    STATE(95), 1,
      aux_sym_arrow_repeat1,
    STATE(101), 1,
      sym_annotation,
    STATE(113), 1,
      aux_sym_arrow_repeat2,
  [2108] = 7,
    ACTIONS(304), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(336), 1,
      aux_sym_arrow_token1,
    STATE(95), 1,
      aux_sym_arrow_repeat1,
    STATE(100), 1,
      aux_sym_arrow_repeat2,
    STATE(102), 1,
      sym_annotation,
  [2130] = 4,
    ACTIONS(340), 1,
      anon_sym_DASH,
    ACTIONS(343), 1,
      aux_sym_arrow_token1,
    STATE(95), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(338), 2,
      sym_identifier,
      anon_sym_LBRACK,
  [2144] = 4,
    ACTIONS(345), 1,
      anon_sym_LT,
    ACTIONS(347), 1,
      sym_url,
    ACTIONS(349), 1,
      sym_filepath,
    STATE(143), 1,
      sym_include_open,
  [2157] = 4,
    ACTIONS(345), 1,
      anon_sym_LT,
    ACTIONS(351), 1,
      sym_url,
    ACTIONS(353), 1,
      sym_filepath,
    STATE(135), 1,
      sym_include_open,
  [2170] = 2,
    STATE(117), 1,
      sym_attribute,
    ACTIONS(355), 2,
      sym_identifier,
      sym_string,
  [2178] = 3,
    ACTIONS(357), 1,
      sym_identifier,
    ACTIONS(359), 1,
      aux_sym_arrow_token1,
    STATE(110), 1,
      aux_sym_arrow_repeat2,
  [2188] = 3,
    ACTIONS(359), 1,
      aux_sym_arrow_token1,
    ACTIONS(361), 1,
      sym_identifier,
    STATE(110), 1,
      aux_sym_arrow_repeat2,
  [2198] = 3,
    ACTIONS(363), 1,
      sym_identifier,
    ACTIONS(365), 1,
      aux_sym_arrow_token1,
    STATE(108), 1,
      aux_sym_arrow_repeat2,
  [2208] = 3,
    ACTIONS(361), 1,
      sym_identifier,
    ACTIONS(367), 1,
      aux_sym_arrow_token1,
    STATE(99), 1,
      aux_sym_arrow_repeat2,
  [2218] = 3,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(369), 1,
      aux_sym_arrow_token1,
    STATE(113), 1,
      aux_sym_arrow_repeat2,
  [2228] = 3,
    ACTIONS(371), 1,
      sym_attribute_sep,
    ACTIONS(373), 1,
      sym_attribute_list_close,
    STATE(114), 1,
      aux_sym_attribute_list_repeat1,
  [2238] = 3,
    ACTIONS(371), 1,
      sym_attribute_sep,
    ACTIONS(375), 1,
      sym_attribute_list_close,
    STATE(114), 1,
      aux_sym_attribute_list_repeat1,
  [2248] = 2,
    STATE(112), 1,
      sym_attribute,
    ACTIONS(355), 2,
      sym_identifier,
      sym_string,
  [2256] = 2,
    STATE(116), 1,
      sym_attribute,
    ACTIONS(355), 2,
      sym_identifier,
      sym_string,
  [2264] = 3,
    ACTIONS(359), 1,
      aux_sym_arrow_token1,
    ACTIONS(377), 1,
      sym_identifier,
    STATE(110), 1,
      aux_sym_arrow_repeat2,
  [2274] = 3,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(359), 1,
      aux_sym_arrow_token1,
    STATE(110), 1,
      aux_sym_arrow_repeat2,
  [2284] = 3,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(381), 1,
      aux_sym_arrow_token1,
    STATE(110), 1,
      aux_sym_arrow_repeat2,
  [2294] = 3,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(384), 1,
      aux_sym_arrow_token1,
    STATE(100), 1,
      aux_sym_arrow_repeat2,
  [2304] = 3,
    ACTIONS(371), 1,
      sym_attribute_sep,
    ACTIONS(386), 1,
      sym_attribute_list_close,
    STATE(104), 1,
      aux_sym_attribute_list_repeat1,
  [2314] = 3,
    ACTIONS(359), 1,
      aux_sym_arrow_token1,
    ACTIONS(363), 1,
      sym_identifier,
    STATE(110), 1,
      aux_sym_arrow_repeat2,
  [2324] = 3,
    ACTIONS(388), 1,
      sym_attribute_sep,
    ACTIONS(391), 1,
      sym_attribute_list_close,
    STATE(114), 1,
      aux_sym_attribute_list_repeat1,
  [2334] = 3,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(359), 1,
      aux_sym_arrow_token1,
    STATE(110), 1,
      aux_sym_arrow_repeat2,
  [2344] = 3,
    ACTIONS(371), 1,
      sym_attribute_sep,
    ACTIONS(393), 1,
      sym_attribute_list_close,
    STATE(105), 1,
      aux_sym_attribute_list_repeat1,
  [2354] = 1,
    ACTIONS(391), 2,
      sym_attribute_sep,
      sym_attribute_list_close,
  [2359] = 2,
    ACTIONS(395), 1,
      anon_sym_DASH,
    STATE(93), 1,
      aux_sym_arrow_repeat1,
  [2366] = 1,
    ACTIONS(164), 2,
      sym_attribute_sep,
      sym_attribute_list_close,
  [2371] = 1,
    ACTIONS(397), 2,
      sym_identifier,
      sym_number,
  [2376] = 1,
    ACTIONS(399), 2,
      sym_identifier,
      sym_number,
  [2381] = 1,
    ACTIONS(401), 2,
      sym_identifier,
      aux_sym_arrow_token1,
  [2386] = 2,
    ACTIONS(403), 1,
      anon_sym_DASH,
    STATE(94), 1,
      aux_sym_arrow_repeat1,
  [2393] = 1,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
  [2397] = 1,
    ACTIONS(407), 1,
      sym_identifier,
  [2401] = 1,
    ACTIONS(409), 1,
      sym_url,
  [2405] = 1,
    ACTIONS(411), 1,
      sym_include_close,
  [2409] = 1,
    ACTIONS(413), 1,
      sym_url,
  [2413] = 1,
    ACTIONS(415), 1,
      sym_identifier,
  [2417] = 1,
    ACTIONS(417), 1,
      sym_identifier,
  [2421] = 1,
    ACTIONS(419), 1,
      sym_identifier,
  [2425] = 1,
    ACTIONS(421), 1,
      sym_non_breakable_identifier,
  [2429] = 1,
    ACTIONS(423), 1,
      sym_non_breakable_identifier,
  [2433] = 1,
    ACTIONS(425), 1,
      anon_sym_RBRACK,
  [2437] = 1,
    ACTIONS(427), 1,
      sym_non_breakable_identifier,
  [2441] = 1,
    ACTIONS(429), 1,
      anon_sym_from,
  [2445] = 1,
    ACTIONS(431), 1,
      sym_non_breakable_identifier,
  [2449] = 1,
    ACTIONS(433), 1,
      sym_identifier,
  [2453] = 1,
    ACTIONS(435), 1,
      anon_sym_hidden,
  [2457] = 1,
    ACTIONS(437), 1,
      sym_non_breakable_identifier,
  [2461] = 1,
    ACTIONS(439), 1,
      sym_non_breakable_identifier,
  [2465] = 1,
    ACTIONS(441), 1,
      sym_identifier,
  [2469] = 1,
    ACTIONS(443), 1,
      sym_non_breakable_identifier,
  [2473] = 1,
    ACTIONS(445), 1,
      anon_sym_from,
  [2477] = 1,
    ACTIONS(447), 1,
      sym_identifier,
  [2481] = 1,
    ACTIONS(449), 1,
      sym_include_close,
  [2485] = 1,
    ACTIONS(451), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 230,
  [SMALL_STATE(8)] = 276,
  [SMALL_STATE(9)] = 308,
  [SMALL_STATE(10)] = 354,
  [SMALL_STATE(11)] = 398,
  [SMALL_STATE(12)] = 430,
  [SMALL_STATE(13)] = 476,
  [SMALL_STATE(14)] = 522,
  [SMALL_STATE(15)] = 566,
  [SMALL_STATE(16)] = 601,
  [SMALL_STATE(17)] = 636,
  [SMALL_STATE(18)] = 668,
  [SMALL_STATE(19)] = 700,
  [SMALL_STATE(20)] = 721,
  [SMALL_STATE(21)] = 742,
  [SMALL_STATE(22)] = 768,
  [SMALL_STATE(23)] = 794,
  [SMALL_STATE(24)] = 820,
  [SMALL_STATE(25)] = 846,
  [SMALL_STATE(26)] = 869,
  [SMALL_STATE(27)] = 892,
  [SMALL_STATE(28)] = 915,
  [SMALL_STATE(29)] = 938,
  [SMALL_STATE(30)] = 961,
  [SMALL_STATE(31)] = 980,
  [SMALL_STATE(32)] = 999,
  [SMALL_STATE(33)] = 1022,
  [SMALL_STATE(34)] = 1045,
  [SMALL_STATE(35)] = 1068,
  [SMALL_STATE(36)] = 1087,
  [SMALL_STATE(37)] = 1110,
  [SMALL_STATE(38)] = 1129,
  [SMALL_STATE(39)] = 1152,
  [SMALL_STATE(40)] = 1175,
  [SMALL_STATE(41)] = 1198,
  [SMALL_STATE(42)] = 1221,
  [SMALL_STATE(43)] = 1244,
  [SMALL_STATE(44)] = 1262,
  [SMALL_STATE(45)] = 1280,
  [SMALL_STATE(46)] = 1297,
  [SMALL_STATE(47)] = 1314,
  [SMALL_STATE(48)] = 1331,
  [SMALL_STATE(49)] = 1350,
  [SMALL_STATE(50)] = 1367,
  [SMALL_STATE(51)] = 1384,
  [SMALL_STATE(52)] = 1401,
  [SMALL_STATE(53)] = 1418,
  [SMALL_STATE(54)] = 1437,
  [SMALL_STATE(55)] = 1454,
  [SMALL_STATE(56)] = 1471,
  [SMALL_STATE(57)] = 1488,
  [SMALL_STATE(58)] = 1505,
  [SMALL_STATE(59)] = 1522,
  [SMALL_STATE(60)] = 1538,
  [SMALL_STATE(61)] = 1554,
  [SMALL_STATE(62)] = 1570,
  [SMALL_STATE(63)] = 1586,
  [SMALL_STATE(64)] = 1602,
  [SMALL_STATE(65)] = 1618,
  [SMALL_STATE(66)] = 1634,
  [SMALL_STATE(67)] = 1650,
  [SMALL_STATE(68)] = 1666,
  [SMALL_STATE(69)] = 1682,
  [SMALL_STATE(70)] = 1698,
  [SMALL_STATE(71)] = 1714,
  [SMALL_STATE(72)] = 1730,
  [SMALL_STATE(73)] = 1746,
  [SMALL_STATE(74)] = 1762,
  [SMALL_STATE(75)] = 1778,
  [SMALL_STATE(76)] = 1794,
  [SMALL_STATE(77)] = 1810,
  [SMALL_STATE(78)] = 1826,
  [SMALL_STATE(79)] = 1842,
  [SMALL_STATE(80)] = 1858,
  [SMALL_STATE(81)] = 1874,
  [SMALL_STATE(82)] = 1890,
  [SMALL_STATE(83)] = 1906,
  [SMALL_STATE(84)] = 1922,
  [SMALL_STATE(85)] = 1938,
  [SMALL_STATE(86)] = 1954,
  [SMALL_STATE(87)] = 1970,
  [SMALL_STATE(88)] = 1986,
  [SMALL_STATE(89)] = 2002,
  [SMALL_STATE(90)] = 2024,
  [SMALL_STATE(91)] = 2046,
  [SMALL_STATE(92)] = 2066,
  [SMALL_STATE(93)] = 2086,
  [SMALL_STATE(94)] = 2108,
  [SMALL_STATE(95)] = 2130,
  [SMALL_STATE(96)] = 2144,
  [SMALL_STATE(97)] = 2157,
  [SMALL_STATE(98)] = 2170,
  [SMALL_STATE(99)] = 2178,
  [SMALL_STATE(100)] = 2188,
  [SMALL_STATE(101)] = 2198,
  [SMALL_STATE(102)] = 2208,
  [SMALL_STATE(103)] = 2218,
  [SMALL_STATE(104)] = 2228,
  [SMALL_STATE(105)] = 2238,
  [SMALL_STATE(106)] = 2248,
  [SMALL_STATE(107)] = 2256,
  [SMALL_STATE(108)] = 2264,
  [SMALL_STATE(109)] = 2274,
  [SMALL_STATE(110)] = 2284,
  [SMALL_STATE(111)] = 2294,
  [SMALL_STATE(112)] = 2304,
  [SMALL_STATE(113)] = 2314,
  [SMALL_STATE(114)] = 2324,
  [SMALL_STATE(115)] = 2334,
  [SMALL_STATE(116)] = 2344,
  [SMALL_STATE(117)] = 2354,
  [SMALL_STATE(118)] = 2359,
  [SMALL_STATE(119)] = 2366,
  [SMALL_STATE(120)] = 2371,
  [SMALL_STATE(121)] = 2376,
  [SMALL_STATE(122)] = 2381,
  [SMALL_STATE(123)] = 2386,
  [SMALL_STATE(124)] = 2393,
  [SMALL_STATE(125)] = 2397,
  [SMALL_STATE(126)] = 2401,
  [SMALL_STATE(127)] = 2405,
  [SMALL_STATE(128)] = 2409,
  [SMALL_STATE(129)] = 2413,
  [SMALL_STATE(130)] = 2417,
  [SMALL_STATE(131)] = 2421,
  [SMALL_STATE(132)] = 2425,
  [SMALL_STATE(133)] = 2429,
  [SMALL_STATE(134)] = 2433,
  [SMALL_STATE(135)] = 2437,
  [SMALL_STATE(136)] = 2441,
  [SMALL_STATE(137)] = 2445,
  [SMALL_STATE(138)] = 2449,
  [SMALL_STATE(139)] = 2453,
  [SMALL_STATE(140)] = 2457,
  [SMALL_STATE(141)] = 2461,
  [SMALL_STATE(142)] = 2465,
  [SMALL_STATE(143)] = 2469,
  [SMALL_STATE(144)] = 2473,
  [SMALL_STATE(145)] = 2477,
  [SMALL_STATE(146)] = 2481,
  [SMALL_STATE(147)] = 2485,
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
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preprocessor, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(125),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(96),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(147),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(91),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(81),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(81),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(142),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(138),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(97),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(130),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(92),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(62),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(62),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(14),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(129),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2, .production_id = 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2, .production_id = 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4, .production_id = 10),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4, .production_id = 10),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3, .production_id = 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3, .production_id = 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 5, .production_id = 10),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 5, .production_id = 10),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 6, .production_id = 10),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 6, .production_id = 10),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style, 2, .production_id = 11),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style, 2, .production_id = 11),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_style_repeat1, 2, .production_id = 15),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_style_repeat1, 2, .production_id = 15),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_style_repeat1, 2, .production_id = 15), SHIFT_REPEAT(141),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style, 3, .production_id = 13),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style, 3, .production_id = 13),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 4),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_style_repeat1, 2, .production_id = 15), SHIFT_REPEAT(137),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4, .production_id = 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4, .production_id = 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_style_repeat1, 2, .production_id = 11),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_style_repeat1, 2, .production_id = 11),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 5, .production_id = 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 5, .production_id = 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 7, .production_id = 10),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 7, .production_id = 10),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 4, .production_id = 7),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 4, .production_id = 7),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 5, .production_id = 12),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 5, .production_id = 12),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 4, .production_id = 9),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 4, .production_id = 9),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparameter, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparameter, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 4),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 6, .production_id = 14),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 6, .production_id = 14),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, .production_id = 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2, .production_id = 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, .production_id = 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2, .production_id = 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 6),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 6),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 6),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 6),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme, 4, .production_id = 8),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme, 4, .production_id = 8),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preprocessor, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3, .production_id = 5),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 3, .production_id = 5),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 4),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_repeat1, 2), SHIFT_REPEAT(95),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_repeat2, 2),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_repeat2, 2), SHIFT_REPEAT(110),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2), SHIFT_REPEAT(98),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [405] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_open, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
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

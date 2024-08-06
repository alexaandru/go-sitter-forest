#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 153
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 18

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
  aux_sym_attribute_token1 = 15,
  sym_identifier = 16,
  sym_non_breakable_identifier = 17,
  sym_string = 18,
  aux_sym_comment_token1 = 19,
  aux_sym_comment_token2 = 20,
  aux_sym_comment_token3 = 21,
  sym_delimiter = 22,
  sym_keyword = 23,
  anon_sym_skinparam = 24,
  sym_number = 25,
  anon_sym_POUND = 26,
  sym_style_sep = 27,
  anon_sym_STAR = 28,
  anon_sym_o = 29,
  anon_sym_DOT = 30,
  anon_sym_DASH = 31,
  anon_sym_TILDE = 32,
  anon_sym_EQ = 33,
  aux_sym_arrow_token1 = 34,
  sym_annotation = 35,
  sym_document = 36,
  sym__statement = 37,
  sym_preprocessor = 38,
  sym_include = 39,
  sym_include_open = 40,
  sym_theme = 41,
  sym_component = 42,
  sym_block = 43,
  sym_attribute_list = 44,
  sym_attribute = 45,
  sym_comment = 46,
  sym_skinparameter = 47,
  sym_style = 48,
  sym_arrow = 49,
  aux_sym_document_repeat1 = 50,
  aux_sym_attribute_list_repeat1 = 51,
  aux_sym_style_repeat1 = 52,
  aux_sym_arrow_repeat1 = 53,
  aux_sym_arrow_repeat2 = 54,
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
  [aux_sym_attribute_token1] = "attribute_token1",
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
  [anon_sym_STAR] = "*",
  [anon_sym_o] = "o",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH] = "-",
  [anon_sym_TILDE] = "~",
  [anon_sym_EQ] = "=",
  [aux_sym_arrow_token1] = "arrow_token1",
  [sym_annotation] = "annotation",
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
  [aux_sym_attribute_token1] = aux_sym_attribute_token1,
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
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_arrow_token1] = aux_sym_arrow_token1,
  [sym_annotation] = sym_annotation,
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
  [aux_sym_attribute_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_arrow_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
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
  field_annotation = 2,
  field_component = 3,
  field_filepath = 4,
  field_lhs = 5,
  field_library = 6,
  field_method = 7,
  field_name = 8,
  field_object = 9,
  field_rhs = 10,
  field_style_param = 11,
  field_tag = 12,
  field_url = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_annotation] = "annotation",
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
  [12] = {.index = 19, .length = 3},
  [13] = {.index = 22, .length = 3},
  [14] = {.index = 25, .length = 2},
  [15] = {.index = 27, .length = 3},
  [16] = {.index = 30, .length = 3},
  [17] = {.index = 33, .length = 2},
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
    {field_annotation, 2},
    {field_lhs, 0},
    {field_rhs, 3},
  [22] =
    {field_annotation, 3},
    {field_lhs, 0},
    {field_rhs, 4},
  [25] =
    {field_style_param, 1},
    {field_style_param, 2, .inherited = true},
  [27] =
    {field_annotation, 2},
    {field_lhs, 0},
    {field_rhs, 4},
  [30] =
    {field_annotation, 3},
    {field_lhs, 0},
    {field_rhs, 5},
  [33] =
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
  [5] = 5,
  [6] = 2,
  [7] = 7,
  [8] = 4,
  [9] = 5,
  [10] = 10,
  [11] = 11,
  [12] = 7,
  [13] = 11,
  [14] = 3,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 19,
  [22] = 20,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 28,
  [33] = 33,
  [34] = 29,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 35,
  [39] = 31,
  [40] = 27,
  [41] = 37,
  [42] = 30,
  [43] = 36,
  [44] = 33,
  [45] = 45,
  [46] = 46,
  [47] = 46,
  [48] = 45,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 49,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 51,
  [58] = 52,
  [59] = 56,
  [60] = 50,
  [61] = 55,
  [62] = 54,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 68,
  [70] = 67,
  [71] = 71,
  [72] = 65,
  [73] = 73,
  [74] = 74,
  [75] = 63,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 71,
  [81] = 81,
  [82] = 82,
  [83] = 78,
  [84] = 82,
  [85] = 64,
  [86] = 86,
  [87] = 87,
  [88] = 76,
  [89] = 87,
  [90] = 74,
  [91] = 66,
  [92] = 73,
  [93] = 86,
  [94] = 79,
  [95] = 77,
  [96] = 81,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 99,
  [101] = 97,
  [102] = 102,
  [103] = 103,
  [104] = 102,
  [105] = 105,
  [106] = 106,
  [107] = 103,
  [108] = 105,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 110,
  [115] = 115,
  [116] = 112,
  [117] = 111,
  [118] = 115,
  [119] = 119,
  [120] = 119,
  [121] = 113,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 20,
  [127] = 125,
  [128] = 125,
  [129] = 19,
  [130] = 123,
  [131] = 131,
  [132] = 132,
  [133] = 131,
  [134] = 132,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 137,
  [141] = 136,
  [142] = 139,
  [143] = 143,
  [144] = 144,
  [145] = 138,
  [146] = 146,
  [147] = 144,
  [148] = 148,
  [149] = 149,
  [150] = 148,
  [151] = 149,
  [152] = 135,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(87);
      ADVANCE_MAP(
        '\n', 2,
        '!', 88,
        '"', 28,
        '#', 145,
        '$', 81,
        '(', 109,
        ')', 110,
        '*', 147,
        ',', 108,
        '-', 151,
        '.', 150,
        '/', 29,
        ':', 146,
        '<', 90,
        '=', 154,
        '>', 91,
        '@', 141,
        'a', 74,
        'f', 72,
        'h', 77,
        'o', 148,
        's', 60,
        '{', 106,
        '}', 107,
        '~', 153,
        '[', 140,
        ']', 140,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 2,
        '!', 88,
        '"', 28,
        '#', 145,
        '$', 81,
        '\'', 135,
        '(', 109,
        ')', 110,
        '*', 147,
        ',', 108,
        '-', 151,
        '.', 150,
        '/', 29,
        ':', 146,
        '<', 90,
        '=', 154,
        '>', 91,
        '@', 141,
        'a', 74,
        'f', 72,
        'h', 77,
        'o', 148,
        's', 60,
        '{', 106,
        '}', 107,
        '~', 153,
        '[', 140,
        ']', 140,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 2,
        '!', 88,
        '"', 28,
        '#', 145,
        '$', 81,
        '\'', 135,
        '(', 109,
        ')', 110,
        '*', 147,
        ',', 108,
        '-', 151,
        '.', 150,
        '/', 30,
        ':', 146,
        '<', 90,
        '=', 154,
        '>', 91,
        '@', 141,
        'a', 74,
        'f', 72,
        'h', 77,
        'o', 148,
        's', 60,
        '{', 106,
        '}', 107,
        '~', 153,
        '\t', 2,
        ' ', 2,
        '[', 140,
        ']', 140,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 7,
        '!', 88,
        '"', 28,
        '\'', 135,
        '-', 151,
        '/', 29,
        '=', 154,
        '>', 91,
        '@', 141,
        's', 123,
        '~', 153,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\n', 7,
        '!', 88,
        '"', 28,
        '\'', 135,
        '-', 151,
        '/', 30,
        '=', 154,
        '>', 91,
        '@', 141,
        's', 123,
        '~', 153,
        '\t', 7,
        ' ', 7,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(6);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\n', 9,
        '!', 88,
        '"', 28,
        '\'', 135,
        '/', 29,
        '@', 141,
        's', 123,
        '}', 107,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '\n', 9,
        '!', 88,
        '"', 28,
        '\'', 135,
        '/', 30,
        '@', 141,
        's', 123,
        '}', 107,
        '\t', 9,
        ' ', 9,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(8);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '!') ADVANCE(88);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '@') ADVANCE(141);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == '}') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '\n', 12,
        '!', 88,
        '"', 28,
        '#', 145,
        '\'', 135,
        '(', 109,
        '/', 29,
        '@', 141,
        'a', 129,
        's', 123,
        '{', 106,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '\n', 12,
        '!', 88,
        '"', 28,
        '#', 145,
        '\'', 135,
        '(', 109,
        '/', 30,
        '@', 141,
        'a', 129,
        's', 123,
        '{', 106,
        '\t', 12,
        ' ', 12,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(11);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '\n', 14,
        '!', 88,
        '"', 28,
        '#', 145,
        '\'', 135,
        '(', 109,
        '/', 29,
        '@', 141,
        'a', 129,
        's', 123,
        '{', 106,
        '}', 107,
        ')', 140,
        '.', 140,
        '[', 140,
        ']', 140,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 14,
        '!', 88,
        '"', 28,
        '#', 145,
        '\'', 135,
        '(', 109,
        '/', 30,
        '@', 141,
        'a', 129,
        's', 123,
        '{', 106,
        '}', 107,
        '\t', 14,
        ' ', 14,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(13);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '\n', 14,
        '!', 88,
        '"', 28,
        '#', 145,
        '(', 109,
        '/', 29,
        '@', 141,
        'a', 129,
        's', 123,
        '{', 106,
        '}', 107,
        ')', 140,
        '.', 140,
        '[', 140,
        ']', 140,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '\n', 17,
        '!', 88,
        '"', 28,
        '#', 145,
        '\'', 135,
        '(', 109,
        '/', 29,
        '@', 141,
        's', 123,
        '{', 106,
        '}', 107,
        ')', 140,
        '.', 140,
        '[', 140,
        ']', 140,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '\n', 17,
        '!', 88,
        '"', 28,
        '#', 145,
        '\'', 135,
        '(', 109,
        '/', 30,
        '@', 141,
        's', 123,
        '{', 106,
        '}', 107,
        '\t', 17,
        ' ', 17,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(16);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '\n', 17,
        '!', 88,
        '"', 28,
        '#', 145,
        '(', 109,
        '/', 29,
        '@', 141,
        's', 123,
        '{', 106,
        '}', 107,
        ')', 140,
        '.', 140,
        '[', 140,
        ']', 140,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '\n', 20,
        '!', 88,
        '"', 28,
        '#', 145,
        '\'', 135,
        '(', 109,
        '/', 29,
        '@', 141,
        's', 123,
        '{', 106,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '\n', 20,
        '!', 88,
        '"', 28,
        '#', 145,
        '\'', 135,
        '(', 109,
        '/', 30,
        '@', 141,
        's', 123,
        '{', 106,
        '\t', 20,
        ' ', 20,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(19);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '\n', 22,
        '!', 88,
        '"', 28,
        '#', 145,
        '\'', 135,
        '/', 29,
        ':', 146,
        '@', 141,
        's', 123,
        '{', 106,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\n', 22,
        '!', 88,
        '"', 28,
        '#', 145,
        '\'', 135,
        '/', 30,
        ':', 146,
        '@', 141,
        's', 123,
        '{', 106,
        '\t', 22,
        ' ', 22,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(21);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '\n', 24,
        '!', 88,
        '"', 28,
        '#', 145,
        '\'', 135,
        '/', 29,
        ':', 146,
        '@', 141,
        's', 123,
        '{', 106,
        '}', 107,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '\n', 24,
        '!', 88,
        '"', 28,
        '#', 145,
        '\'', 135,
        '/', 30,
        ':', 146,
        '@', 141,
        's', 123,
        '{', 106,
        '}', 107,
        '\t', 24,
        ' ', 24,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(23);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '\n', 24,
        '!', 88,
        '"', 28,
        '#', 145,
        '/', 29,
        ':', 146,
        '@', 141,
        's', 123,
        '{', 106,
        '}', 107,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '"', 28,
        '$', 81,
        ')', 110,
        '*', 147,
        ',', 108,
        '-', 151,
        '.', 150,
        '<', 90,
        '=', 154,
        'o', 149,
        '{', 106,
        '~', 153,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '$') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == '>') ADVANCE(155);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(134);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(4);
      END_STATE();
    case 31:
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(136);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(82);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == 'h') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '>') ADVANCE(103);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == ']') ADVANCE(161);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(59);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 60:
      if (lookahead == 'k') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 79:
      if (lookahead == 'w') ADVANCE(66);
      END_STATE();
    case 80:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(80);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 82:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(94);
      END_STATE();
    case 83:
      if (eof) ADVANCE(87);
      ADVANCE_MAP(
        '\n', 7,
        '!', 88,
        '"', 28,
        '-', 151,
        '/', 29,
        '=', 154,
        '>', 91,
        '@', 141,
        's', 123,
        '~', 153,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(83);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 84:
      if (eof) ADVANCE(87);
      ADVANCE_MAP(
        '\n', 12,
        '!', 88,
        '"', 28,
        '#', 145,
        '(', 109,
        '/', 29,
        '@', 141,
        'a', 129,
        's', 123,
        '{', 106,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(84);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 85:
      if (eof) ADVANCE(87);
      ADVANCE_MAP(
        '\n', 20,
        '!', 88,
        '"', 28,
        '#', 145,
        '(', 109,
        '/', 29,
        '@', 141,
        's', 123,
        '{', 106,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(85);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 86:
      if (eof) ADVANCE(87);
      ADVANCE_MAP(
        '\n', 22,
        '!', 88,
        '"', 28,
        '#', 145,
        '/', 29,
        ':', 146,
        '@', 141,
        's', 123,
        '{', 106,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(86);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_BANGinclude);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_include_close);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_BANGtheme);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(103);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(103);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(103);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(103);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(103);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(94);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_block_open);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_block_close);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_attribute_sep);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_attribute_list_open);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_attribute_list_close);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '[', 56,
        'd', 114,
        'e', 119,
        'l', 112,
        'r', 113,
        'u', 115,
        '-', 161,
        '>', 161,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '[', 56,
        'd', 114,
        'i', 120,
        'l', 112,
        'r', 113,
        'u', 115,
        '-', 161,
        '>', 161,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '[', 56,
        'd', 114,
        'l', 112,
        'o', 131,
        'r', 113,
        'u', 115,
        '-', 161,
        '>', 161,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '[', 56,
        'd', 114,
        'l', 112,
        'p', 116,
        'r', 113,
        'u', 115,
        '-', 161,
        '>', 161,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'l') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '>') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_non_breakable_identifier);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_delimiter);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_skinparam);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_skinparam);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_style_sep);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_o);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(159);
      if (lookahead == 'l') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '>') ADVANCE(161);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_arrow_token1);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'l') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '[', 56,
        'd', 159,
        'e', 53,
        'l', 157,
        'r', 158,
        'u', 160,
        '-', 161,
        '>', 161,
      );
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '[', 56,
        'd', 159,
        'i', 54,
        'l', 157,
        'r', 158,
        'u', 160,
        '-', 161,
        '>', 161,
      );
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '[', 56,
        'd', 159,
        'l', 157,
        'o', 79,
        'r', 158,
        'u', 160,
        '-', 161,
        '>', 161,
      );
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '[', 56,
        'd', 159,
        'l', 157,
        'p', 161,
        'r', 158,
        'u', 160,
        '-', 161,
        '>', 161,
      );
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(159);
      if (lookahead == 'l') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '>') ADVANCE(161);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 83},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 83},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 83},
  [11] = {.lex_state = 83},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 84},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 85},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 84},
  [22] = {.lex_state = 84},
  [23] = {.lex_state = 86},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 86},
  [26] = {.lex_state = 25},
  [27] = {.lex_state = 25},
  [28] = {.lex_state = 86},
  [29] = {.lex_state = 86},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 25},
  [32] = {.lex_state = 25},
  [33] = {.lex_state = 25},
  [34] = {.lex_state = 25},
  [35] = {.lex_state = 86},
  [36] = {.lex_state = 86},
  [37] = {.lex_state = 25},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 86},
  [40] = {.lex_state = 86},
  [41] = {.lex_state = 86},
  [42] = {.lex_state = 86},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 86},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 25},
  [47] = {.lex_state = 86},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 86},
  [50] = {.lex_state = 25},
  [51] = {.lex_state = 25},
  [52] = {.lex_state = 25},
  [53] = {.lex_state = 25},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 25},
  [56] = {.lex_state = 25},
  [57] = {.lex_state = 86},
  [58] = {.lex_state = 86},
  [59] = {.lex_state = 86},
  [60] = {.lex_state = 86},
  [61] = {.lex_state = 86},
  [62] = {.lex_state = 86},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 83},
  [65] = {.lex_state = 83},
  [66] = {.lex_state = 83},
  [67] = {.lex_state = 83},
  [68] = {.lex_state = 83},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 83},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 83},
  [74] = {.lex_state = 83},
  [75] = {.lex_state = 83},
  [76] = {.lex_state = 83},
  [77] = {.lex_state = 83},
  [78] = {.lex_state = 83},
  [79] = {.lex_state = 83},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 83},
  [82] = {.lex_state = 83},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 83},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 83},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 156},
  [98] = {.lex_state = 156},
  [99] = {.lex_state = 156},
  [100] = {.lex_state = 156},
  [101] = {.lex_state = 156},
  [102] = {.lex_state = 27},
  [103] = {.lex_state = 83},
  [104] = {.lex_state = 27},
  [105] = {.lex_state = 39},
  [106] = {.lex_state = 27},
  [107] = {.lex_state = 83},
  [108] = {.lex_state = 39},
  [109] = {.lex_state = 26},
  [110] = {.lex_state = 27},
  [111] = {.lex_state = 26},
  [112] = {.lex_state = 27},
  [113] = {.lex_state = 26},
  [114] = {.lex_state = 27},
  [115] = {.lex_state = 27},
  [116] = {.lex_state = 27},
  [117] = {.lex_state = 26},
  [118] = {.lex_state = 27},
  [119] = {.lex_state = 27},
  [120] = {.lex_state = 27},
  [121] = {.lex_state = 26},
  [122] = {.lex_state = 27},
  [123] = {.lex_state = 27},
  [124] = {.lex_state = 26},
  [125] = {.lex_state = 27},
  [126] = {.lex_state = 26},
  [127] = {.lex_state = 27},
  [128] = {.lex_state = 27},
  [129] = {.lex_state = 26},
  [130] = {.lex_state = 27},
  [131] = {.lex_state = 83},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 83},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 27},
  [136] = {.lex_state = 27},
  [137] = {.lex_state = 27},
  [138] = {.lex_state = 80},
  [139] = {.lex_state = 80},
  [140] = {.lex_state = 27},
  [141] = {.lex_state = 27},
  [142] = {.lex_state = 80},
  [143] = {.lex_state = 80},
  [144] = {.lex_state = 27},
  [145] = {.lex_state = 80},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 27},
  [148] = {.lex_state = 80},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 80},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 27},
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
    [aux_sym_attribute_token1] = ACTIONS(1),
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
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_arrow_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(146),
    [sym__statement] = STATE(10),
    [sym_preprocessor] = STATE(10),
    [sym_include] = STATE(10),
    [sym_theme] = STATE(10),
    [sym_component] = STATE(59),
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
    STATE(56), 1,
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
    STATE(56), 1,
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
    ACTIONS(47), 1,
      sym_block_close,
    ACTIONS(49), 1,
      sym_delimiter,
    ACTIONS(51), 1,
      sym_keyword,
    STATE(56), 1,
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
    ACTIONS(43), 1,
      sym_delimiter,
    ACTIONS(45), 1,
      sym_keyword,
    ACTIONS(53), 1,
      sym_block_close,
    STATE(56), 1,
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
    STATE(56), 1,
      sym_component,
    ACTIONS(33), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
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
  [230] = 11,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_BANG,
    ACTIONS(66), 1,
      anon_sym_BANGinclude,
    ACTIONS(69), 1,
      anon_sym_BANGtheme,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(75), 1,
      aux_sym_comment_token1,
    ACTIONS(84), 1,
      anon_sym_skinparam,
    STATE(59), 1,
      sym_component,
    ACTIONS(78), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(81), 2,
      sym_delimiter,
      sym_keyword,
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
  [274] = 12,
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
    ACTIONS(87), 1,
      sym_block_close,
    ACTIONS(89), 1,
      sym_delimiter,
    ACTIONS(91), 1,
      sym_keyword,
    STATE(56), 1,
      sym_component,
    ACTIONS(33), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    STATE(5), 9,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
      aux_sym_document_repeat1,
  [320] = 12,
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
    ACTIONS(93), 1,
      sym_block_close,
    STATE(56), 1,
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
  [366] = 11,
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
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      sym_component,
    ACTIONS(15), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(97), 2,
      sym_delimiter,
      sym_keyword,
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
  [410] = 5,
    ACTIONS(103), 1,
      sym_string,
    STATE(59), 1,
      sym_component,
    ACTIONS(101), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
    STATE(76), 8,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
  [442] = 12,
    ACTIONS(61), 1,
      sym_block_close,
    ACTIONS(105), 1,
      anon_sym_BANG,
    ACTIONS(108), 1,
      anon_sym_BANGinclude,
    ACTIONS(111), 1,
      anon_sym_BANGtheme,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(117), 1,
      aux_sym_comment_token1,
    ACTIONS(123), 1,
      sym_delimiter,
    ACTIONS(126), 1,
      sym_keyword,
    ACTIONS(129), 1,
      anon_sym_skinparam,
    STATE(56), 1,
      sym_component,
    ACTIONS(120), 2,
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
  [488] = 5,
    ACTIONS(132), 1,
      sym_string,
    STATE(56), 1,
      sym_component,
    ACTIONS(99), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(101), 6,
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
  [520] = 12,
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
    ACTIONS(134), 1,
      sym_block_close,
    STATE(56), 1,
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
  [566] = 8,
    ACTIONS(140), 1,
      anon_sym_as,
    ACTIONS(142), 1,
      sym_attribute_list_open,
    ACTIONS(144), 1,
      sym_string,
    ACTIONS(146), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_attribute_list,
    STATE(49), 1,
      sym_style,
    ACTIONS(136), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(138), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [601] = 8,
    ACTIONS(148), 1,
      anon_sym_as,
    ACTIONS(150), 1,
      sym_attribute_list_open,
    ACTIONS(152), 1,
      sym_string,
    ACTIONS(154), 1,
      anon_sym_POUND,
    STATE(26), 1,
      sym_attribute_list,
    STATE(53), 1,
      sym_style,
    ACTIONS(136), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(138), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [636] = 7,
    ACTIONS(150), 1,
      sym_attribute_list_open,
    ACTIONS(154), 1,
      anon_sym_POUND,
    ACTIONS(160), 1,
      sym_string,
    STATE(24), 1,
      sym_attribute_list,
    STATE(51), 1,
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
    ACTIONS(142), 1,
      sym_attribute_list_open,
    ACTIONS(146), 1,
      anon_sym_POUND,
    ACTIONS(162), 1,
      sym_string,
    STATE(23), 1,
      sym_attribute_list,
    STATE(57), 1,
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
    ACTIONS(164), 7,
      anon_sym_BANG,
      anon_sym_as,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(166), 9,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_attribute_list_open,
      sym_string,
      aux_sym_comment_token1,
      sym_keyword,
      anon_sym_POUND,
  [721] = 2,
    ACTIONS(168), 7,
      anon_sym_BANG,
      anon_sym_as,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(170), 9,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_attribute_list_open,
      sym_string,
      aux_sym_comment_token1,
      sym_keyword,
      anon_sym_POUND,
  [742] = 2,
    ACTIONS(164), 7,
      anon_sym_BANG,
      anon_sym_as,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(166), 9,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_attribute_list_open,
      sym_string,
      aux_sym_comment_token1,
      sym_keyword,
      anon_sym_POUND,
  [763] = 2,
    ACTIONS(168), 7,
      anon_sym_BANG,
      anon_sym_as,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(170), 9,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_attribute_list_open,
      sym_string,
      aux_sym_comment_token1,
      sym_keyword,
      anon_sym_POUND,
  [784] = 5,
    ACTIONS(146), 1,
      anon_sym_POUND,
    ACTIONS(176), 1,
      sym_string,
    STATE(61), 1,
      sym_style,
    ACTIONS(172), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(174), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [810] = 5,
    ACTIONS(154), 1,
      anon_sym_POUND,
    ACTIONS(178), 1,
      sym_string,
    STATE(55), 1,
      sym_style,
    ACTIONS(172), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(174), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [836] = 5,
    ACTIONS(146), 1,
      anon_sym_POUND,
    ACTIONS(184), 1,
      sym_string,
    STATE(58), 1,
      sym_style,
    ACTIONS(180), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(182), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [862] = 5,
    ACTIONS(154), 1,
      anon_sym_POUND,
    ACTIONS(186), 1,
      sym_string,
    STATE(52), 1,
      sym_style,
    ACTIONS(180), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(182), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [888] = 2,
    ACTIONS(188), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(190), 8,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_string,
      aux_sym_comment_token1,
      sym_keyword,
      anon_sym_POUND,
  [907] = 4,
    ACTIONS(146), 1,
      anon_sym_POUND,
    STATE(61), 1,
      sym_style,
    ACTIONS(172), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(174), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [930] = 4,
    ACTIONS(196), 1,
      sym_style_sep,
    STATE(36), 1,
      aux_sym_style_repeat1,
    ACTIONS(192), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(194), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [953] = 4,
    ACTIONS(202), 1,
      sym_style_sep,
    STATE(34), 1,
      aux_sym_style_repeat1,
    ACTIONS(198), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(200), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [976] = 4,
    ACTIONS(154), 1,
      anon_sym_POUND,
    STATE(54), 1,
      sym_style,
    ACTIONS(204), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(206), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [999] = 4,
    ACTIONS(154), 1,
      anon_sym_POUND,
    STATE(55), 1,
      sym_style,
    ACTIONS(172), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(174), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1022] = 2,
    ACTIONS(208), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(210), 8,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_string,
      aux_sym_comment_token1,
      sym_keyword,
      anon_sym_POUND,
  [1041] = 4,
    ACTIONS(202), 1,
      sym_style_sep,
    STATE(43), 1,
      aux_sym_style_repeat1,
    ACTIONS(192), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(194), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1064] = 4,
    ACTIONS(146), 1,
      anon_sym_POUND,
    STATE(58), 1,
      sym_style,
    ACTIONS(180), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(182), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1087] = 4,
    ACTIONS(216), 1,
      sym_style_sep,
    STATE(36), 1,
      aux_sym_style_repeat1,
    ACTIONS(212), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(214), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1110] = 4,
    ACTIONS(154), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_style,
    ACTIONS(219), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(221), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [1133] = 4,
    ACTIONS(154), 1,
      anon_sym_POUND,
    STATE(52), 1,
      sym_style,
    ACTIONS(180), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(182), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1156] = 4,
    ACTIONS(146), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym_style,
    ACTIONS(204), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(206), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [1179] = 2,
    ACTIONS(188), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(190), 8,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_string,
      aux_sym_comment_token1,
      sym_keyword,
      anon_sym_POUND,
  [1198] = 4,
    ACTIONS(146), 1,
      anon_sym_POUND,
    STATE(60), 1,
      sym_style,
    ACTIONS(219), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(221), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [1221] = 4,
    ACTIONS(196), 1,
      sym_style_sep,
    STATE(29), 1,
      aux_sym_style_repeat1,
    ACTIONS(198), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(200), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [1244] = 4,
    ACTIONS(223), 1,
      sym_style_sep,
    STATE(43), 1,
      aux_sym_style_repeat1,
    ACTIONS(212), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(214), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1267] = 2,
    ACTIONS(208), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(210), 8,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_string,
      aux_sym_comment_token1,
      sym_keyword,
      anon_sym_POUND,
  [1286] = 9,
    ACTIONS(228), 1,
      sym_block_open,
    ACTIONS(230), 1,
      aux_sym_attribute_token1,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_string,
    ACTIONS(236), 1,
      anon_sym_o,
    STATE(16), 1,
      sym_attribute,
    STATE(100), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(226), 3,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOT,
    ACTIONS(238), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_EQ,
  [1318] = 2,
    ACTIONS(240), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(242), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
      sym_style_sep,
  [1336] = 2,
    ACTIONS(240), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(242), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
      sym_style_sep,
  [1354] = 9,
    ACTIONS(246), 1,
      sym_block_open,
    ACTIONS(248), 1,
      aux_sym_attribute_token1,
    ACTIONS(250), 1,
      sym_identifier,
    ACTIONS(252), 1,
      sym_string,
    ACTIONS(254), 1,
      anon_sym_o,
    STATE(15), 1,
      sym_attribute,
    STATE(99), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(244), 3,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOT,
    ACTIONS(256), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_EQ,
  [1386] = 2,
    ACTIONS(180), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(182), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1403] = 2,
    ACTIONS(258), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(260), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [1420] = 2,
    ACTIONS(172), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(174), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1437] = 2,
    ACTIONS(204), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(206), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [1454] = 2,
    ACTIONS(180), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(182), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1471] = 2,
    ACTIONS(262), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(264), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [1488] = 2,
    ACTIONS(219), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(221), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [1505] = 3,
    ACTIONS(270), 1,
      sym_block_open,
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
  [1524] = 2,
    ACTIONS(172), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(174), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1541] = 2,
    ACTIONS(204), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(206), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [1558] = 3,
    ACTIONS(272), 1,
      sym_block_open,
    ACTIONS(268), 5,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(266), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1577] = 2,
    ACTIONS(258), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(260), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [1594] = 2,
    ACTIONS(219), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(221), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [1611] = 2,
    ACTIONS(262), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(264), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [1628] = 2,
    ACTIONS(276), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(274), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1644] = 2,
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
  [1660] = 2,
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
  [1676] = 2,
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
  [1692] = 2,
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
  [1708] = 2,
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
  [1724] = 2,
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
  [1740] = 2,
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
  [1756] = 2,
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
  [1772] = 2,
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
  [1788] = 2,
    ACTIONS(304), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(302), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1804] = 2,
    ACTIONS(308), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(306), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1820] = 2,
    ACTIONS(274), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(276), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1836] = 2,
    ACTIONS(312), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(310), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1852] = 2,
    ACTIONS(316), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(314), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1868] = 2,
    ACTIONS(320), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(318), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1884] = 2,
    ACTIONS(324), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(322), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1900] = 2,
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
  [1916] = 2,
    ACTIONS(328), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(326), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1932] = 2,
    ACTIONS(332), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(330), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1948] = 2,
    ACTIONS(318), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(320), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1964] = 2,
    ACTIONS(330), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(332), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1980] = 2,
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
  [1996] = 2,
    ACTIONS(336), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(334), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [2012] = 2,
    ACTIONS(340), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(338), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [2028] = 2,
    ACTIONS(310), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(312), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [2044] = 2,
    ACTIONS(338), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(340), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [2060] = 2,
    ACTIONS(306), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(308), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [2076] = 2,
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
  [2092] = 2,
    ACTIONS(302), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(304), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [2108] = 2,
    ACTIONS(334), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(336), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [2124] = 2,
    ACTIONS(322), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(324), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [2140] = 2,
    ACTIONS(314), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(316), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [2156] = 2,
    ACTIONS(326), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(328), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [2172] = 4,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(346), 1,
      sym_annotation,
    STATE(98), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(344), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_EQ,
  [2187] = 3,
    STATE(98), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(348), 2,
      sym_identifier,
      sym_annotation,
    ACTIONS(350), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_EQ,
  [2200] = 4,
    ACTIONS(353), 1,
      sym_identifier,
    ACTIONS(355), 1,
      sym_annotation,
    STATE(98), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(344), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_EQ,
  [2215] = 4,
    ACTIONS(357), 1,
      sym_identifier,
    ACTIONS(359), 1,
      sym_annotation,
    STATE(98), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(344), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_EQ,
  [2230] = 4,
    ACTIONS(361), 1,
      sym_identifier,
    ACTIONS(363), 1,
      sym_annotation,
    STATE(98), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(344), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_EQ,
  [2245] = 3,
    ACTIONS(365), 1,
      aux_sym_attribute_token1,
    STATE(117), 1,
      sym_attribute,
    ACTIONS(367), 2,
      sym_identifier,
      sym_string,
  [2256] = 2,
    STATE(101), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(369), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_EQ,
  [2265] = 3,
    ACTIONS(365), 1,
      aux_sym_attribute_token1,
    STATE(111), 1,
      sym_attribute,
    ACTIONS(367), 2,
      sym_identifier,
      sym_string,
  [2276] = 4,
    ACTIONS(371), 1,
      anon_sym_LT,
    ACTIONS(373), 1,
      sym_url,
    ACTIONS(375), 1,
      sym_filepath,
    STATE(148), 1,
      sym_include_open,
  [2289] = 3,
    ACTIONS(365), 1,
      aux_sym_attribute_token1,
    STATE(124), 1,
      sym_attribute,
    ACTIONS(367), 2,
      sym_identifier,
      sym_string,
  [2300] = 2,
    STATE(97), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(377), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_EQ,
  [2309] = 4,
    ACTIONS(371), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      sym_url,
    ACTIONS(381), 1,
      sym_filepath,
    STATE(150), 1,
      sym_include_open,
  [2322] = 3,
    ACTIONS(383), 1,
      sym_attribute_sep,
    ACTIONS(386), 1,
      sym_attribute_list_close,
    STATE(109), 1,
      aux_sym_attribute_list_repeat1,
  [2332] = 3,
    ACTIONS(388), 1,
      sym_identifier,
    ACTIONS(390), 1,
      aux_sym_arrow_token1,
    STATE(115), 1,
      aux_sym_arrow_repeat2,
  [2342] = 3,
    ACTIONS(392), 1,
      sym_attribute_sep,
    ACTIONS(394), 1,
      sym_attribute_list_close,
    STATE(121), 1,
      aux_sym_attribute_list_repeat1,
  [2352] = 3,
    ACTIONS(396), 1,
      sym_identifier,
    ACTIONS(398), 1,
      aux_sym_arrow_token1,
    STATE(122), 1,
      aux_sym_arrow_repeat2,
  [2362] = 3,
    ACTIONS(392), 1,
      sym_attribute_sep,
    ACTIONS(400), 1,
      sym_attribute_list_close,
    STATE(109), 1,
      aux_sym_attribute_list_repeat1,
  [2372] = 3,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      aux_sym_arrow_token1,
    STATE(118), 1,
      aux_sym_arrow_repeat2,
  [2382] = 3,
    ACTIONS(398), 1,
      aux_sym_arrow_token1,
    ACTIONS(406), 1,
      sym_identifier,
    STATE(122), 1,
      aux_sym_arrow_repeat2,
  [2392] = 3,
    ACTIONS(398), 1,
      aux_sym_arrow_token1,
    ACTIONS(408), 1,
      sym_identifier,
    STATE(122), 1,
      aux_sym_arrow_repeat2,
  [2402] = 3,
    ACTIONS(392), 1,
      sym_attribute_sep,
    ACTIONS(410), 1,
      sym_attribute_list_close,
    STATE(113), 1,
      aux_sym_attribute_list_repeat1,
  [2412] = 3,
    ACTIONS(398), 1,
      aux_sym_arrow_token1,
    ACTIONS(412), 1,
      sym_identifier,
    STATE(122), 1,
      aux_sym_arrow_repeat2,
  [2422] = 3,
    ACTIONS(414), 1,
      sym_identifier,
    ACTIONS(416), 1,
      aux_sym_arrow_token1,
    STATE(116), 1,
      aux_sym_arrow_repeat2,
  [2432] = 3,
    ACTIONS(418), 1,
      sym_identifier,
    ACTIONS(420), 1,
      aux_sym_arrow_token1,
    STATE(112), 1,
      aux_sym_arrow_repeat2,
  [2442] = 3,
    ACTIONS(392), 1,
      sym_attribute_sep,
    ACTIONS(422), 1,
      sym_attribute_list_close,
    STATE(109), 1,
      aux_sym_attribute_list_repeat1,
  [2452] = 3,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(426), 1,
      aux_sym_arrow_token1,
    STATE(122), 1,
      aux_sym_arrow_repeat2,
  [2462] = 1,
    ACTIONS(429), 2,
      sym_identifier,
      sym_number,
  [2467] = 1,
    ACTIONS(386), 2,
      sym_attribute_sep,
      sym_attribute_list_close,
  [2472] = 1,
    ACTIONS(431), 2,
      sym_identifier,
      sym_string,
  [2477] = 1,
    ACTIONS(170), 2,
      sym_attribute_sep,
      sym_attribute_list_close,
  [2482] = 1,
    ACTIONS(433), 2,
      sym_identifier,
      sym_string,
  [2487] = 1,
    ACTIONS(435), 2,
      sym_identifier,
      sym_string,
  [2492] = 1,
    ACTIONS(166), 2,
      sym_attribute_sep,
      sym_attribute_list_close,
  [2497] = 1,
    ACTIONS(437), 2,
      sym_identifier,
      sym_number,
  [2502] = 1,
    ACTIONS(439), 1,
      sym_include_close,
  [2506] = 1,
    ACTIONS(441), 1,
      sym_url,
  [2510] = 1,
    ACTIONS(443), 1,
      sym_include_close,
  [2514] = 1,
    ACTIONS(445), 1,
      sym_url,
  [2518] = 1,
    ACTIONS(447), 1,
      sym_identifier,
  [2522] = 1,
    ACTIONS(449), 1,
      sym_identifier,
  [2526] = 1,
    ACTIONS(451), 1,
      sym_identifier,
  [2530] = 1,
    ACTIONS(453), 1,
      sym_non_breakable_identifier,
  [2534] = 1,
    ACTIONS(455), 1,
      sym_non_breakable_identifier,
  [2538] = 1,
    ACTIONS(457), 1,
      sym_identifier,
  [2542] = 1,
    ACTIONS(459), 1,
      sym_identifier,
  [2546] = 1,
    ACTIONS(461), 1,
      sym_non_breakable_identifier,
  [2550] = 1,
    ACTIONS(463), 1,
      sym_non_breakable_identifier,
  [2554] = 1,
    ACTIONS(465), 1,
      sym_identifier,
  [2558] = 1,
    ACTIONS(467), 1,
      sym_non_breakable_identifier,
  [2562] = 1,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
  [2566] = 1,
    ACTIONS(471), 1,
      sym_identifier,
  [2570] = 1,
    ACTIONS(473), 1,
      sym_non_breakable_identifier,
  [2574] = 1,
    ACTIONS(475), 1,
      anon_sym_from,
  [2578] = 1,
    ACTIONS(477), 1,
      sym_non_breakable_identifier,
  [2582] = 1,
    ACTIONS(479), 1,
      anon_sym_from,
  [2586] = 1,
    ACTIONS(481), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 230,
  [SMALL_STATE(8)] = 274,
  [SMALL_STATE(9)] = 320,
  [SMALL_STATE(10)] = 366,
  [SMALL_STATE(11)] = 410,
  [SMALL_STATE(12)] = 442,
  [SMALL_STATE(13)] = 488,
  [SMALL_STATE(14)] = 520,
  [SMALL_STATE(15)] = 566,
  [SMALL_STATE(16)] = 601,
  [SMALL_STATE(17)] = 636,
  [SMALL_STATE(18)] = 668,
  [SMALL_STATE(19)] = 700,
  [SMALL_STATE(20)] = 721,
  [SMALL_STATE(21)] = 742,
  [SMALL_STATE(22)] = 763,
  [SMALL_STATE(23)] = 784,
  [SMALL_STATE(24)] = 810,
  [SMALL_STATE(25)] = 836,
  [SMALL_STATE(26)] = 862,
  [SMALL_STATE(27)] = 888,
  [SMALL_STATE(28)] = 907,
  [SMALL_STATE(29)] = 930,
  [SMALL_STATE(30)] = 953,
  [SMALL_STATE(31)] = 976,
  [SMALL_STATE(32)] = 999,
  [SMALL_STATE(33)] = 1022,
  [SMALL_STATE(34)] = 1041,
  [SMALL_STATE(35)] = 1064,
  [SMALL_STATE(36)] = 1087,
  [SMALL_STATE(37)] = 1110,
  [SMALL_STATE(38)] = 1133,
  [SMALL_STATE(39)] = 1156,
  [SMALL_STATE(40)] = 1179,
  [SMALL_STATE(41)] = 1198,
  [SMALL_STATE(42)] = 1221,
  [SMALL_STATE(43)] = 1244,
  [SMALL_STATE(44)] = 1267,
  [SMALL_STATE(45)] = 1286,
  [SMALL_STATE(46)] = 1318,
  [SMALL_STATE(47)] = 1336,
  [SMALL_STATE(48)] = 1354,
  [SMALL_STATE(49)] = 1386,
  [SMALL_STATE(50)] = 1403,
  [SMALL_STATE(51)] = 1420,
  [SMALL_STATE(52)] = 1437,
  [SMALL_STATE(53)] = 1454,
  [SMALL_STATE(54)] = 1471,
  [SMALL_STATE(55)] = 1488,
  [SMALL_STATE(56)] = 1505,
  [SMALL_STATE(57)] = 1524,
  [SMALL_STATE(58)] = 1541,
  [SMALL_STATE(59)] = 1558,
  [SMALL_STATE(60)] = 1577,
  [SMALL_STATE(61)] = 1594,
  [SMALL_STATE(62)] = 1611,
  [SMALL_STATE(63)] = 1628,
  [SMALL_STATE(64)] = 1644,
  [SMALL_STATE(65)] = 1660,
  [SMALL_STATE(66)] = 1676,
  [SMALL_STATE(67)] = 1692,
  [SMALL_STATE(68)] = 1708,
  [SMALL_STATE(69)] = 1724,
  [SMALL_STATE(70)] = 1740,
  [SMALL_STATE(71)] = 1756,
  [SMALL_STATE(72)] = 1772,
  [SMALL_STATE(73)] = 1788,
  [SMALL_STATE(74)] = 1804,
  [SMALL_STATE(75)] = 1820,
  [SMALL_STATE(76)] = 1836,
  [SMALL_STATE(77)] = 1852,
  [SMALL_STATE(78)] = 1868,
  [SMALL_STATE(79)] = 1884,
  [SMALL_STATE(80)] = 1900,
  [SMALL_STATE(81)] = 1916,
  [SMALL_STATE(82)] = 1932,
  [SMALL_STATE(83)] = 1948,
  [SMALL_STATE(84)] = 1964,
  [SMALL_STATE(85)] = 1980,
  [SMALL_STATE(86)] = 1996,
  [SMALL_STATE(87)] = 2012,
  [SMALL_STATE(88)] = 2028,
  [SMALL_STATE(89)] = 2044,
  [SMALL_STATE(90)] = 2060,
  [SMALL_STATE(91)] = 2076,
  [SMALL_STATE(92)] = 2092,
  [SMALL_STATE(93)] = 2108,
  [SMALL_STATE(94)] = 2124,
  [SMALL_STATE(95)] = 2140,
  [SMALL_STATE(96)] = 2156,
  [SMALL_STATE(97)] = 2172,
  [SMALL_STATE(98)] = 2187,
  [SMALL_STATE(99)] = 2200,
  [SMALL_STATE(100)] = 2215,
  [SMALL_STATE(101)] = 2230,
  [SMALL_STATE(102)] = 2245,
  [SMALL_STATE(103)] = 2256,
  [SMALL_STATE(104)] = 2265,
  [SMALL_STATE(105)] = 2276,
  [SMALL_STATE(106)] = 2289,
  [SMALL_STATE(107)] = 2300,
  [SMALL_STATE(108)] = 2309,
  [SMALL_STATE(109)] = 2322,
  [SMALL_STATE(110)] = 2332,
  [SMALL_STATE(111)] = 2342,
  [SMALL_STATE(112)] = 2352,
  [SMALL_STATE(113)] = 2362,
  [SMALL_STATE(114)] = 2372,
  [SMALL_STATE(115)] = 2382,
  [SMALL_STATE(116)] = 2392,
  [SMALL_STATE(117)] = 2402,
  [SMALL_STATE(118)] = 2412,
  [SMALL_STATE(119)] = 2422,
  [SMALL_STATE(120)] = 2432,
  [SMALL_STATE(121)] = 2442,
  [SMALL_STATE(122)] = 2452,
  [SMALL_STATE(123)] = 2462,
  [SMALL_STATE(124)] = 2467,
  [SMALL_STATE(125)] = 2472,
  [SMALL_STATE(126)] = 2477,
  [SMALL_STATE(127)] = 2482,
  [SMALL_STATE(128)] = 2487,
  [SMALL_STATE(129)] = 2492,
  [SMALL_STATE(130)] = 2497,
  [SMALL_STATE(131)] = 2502,
  [SMALL_STATE(132)] = 2506,
  [SMALL_STATE(133)] = 2510,
  [SMALL_STATE(134)] = 2514,
  [SMALL_STATE(135)] = 2518,
  [SMALL_STATE(136)] = 2522,
  [SMALL_STATE(137)] = 2526,
  [SMALL_STATE(138)] = 2530,
  [SMALL_STATE(139)] = 2534,
  [SMALL_STATE(140)] = 2538,
  [SMALL_STATE(141)] = 2542,
  [SMALL_STATE(142)] = 2546,
  [SMALL_STATE(143)] = 2550,
  [SMALL_STATE(144)] = 2554,
  [SMALL_STATE(145)] = 2558,
  [SMALL_STATE(146)] = 2562,
  [SMALL_STATE(147)] = 2566,
  [SMALL_STATE(148)] = 2570,
  [SMALL_STATE(149)] = 2574,
  [SMALL_STATE(150)] = 2578,
  [SMALL_STATE(151)] = 2582,
  [SMALL_STATE(152)] = 2586,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preprocessor, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2, 0, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2, 0, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4, 0, 10),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4, 0, 10),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 5, 0, 10),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 5, 0, 10),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3, 0, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3, 0, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 4, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 4, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style, 3, 0, 14),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style, 3, 0, 14),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style, 2, 0, 11),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style, 2, 0, 11),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4, 0, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4, 0, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 3, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 3, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_style_repeat1, 2, 0, 17),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_style_repeat1, 2, 0, 17),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_style_repeat1, 2, 0, 17), SHIFT_REPEAT(142),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 6, 0, 10),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 6, 0, 10),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_style_repeat1, 2, 0, 17), SHIFT_REPEAT(139),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_style_repeat1, 2, 0, 11),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_style_repeat1, 2, 0, 11),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 7, 0, 10),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 7, 0, 10),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 5, 0, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 5, 0, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 6, 0, 16),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 6, 0, 16),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 4),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 4, 0, 12),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 4, 0, 12),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 4, 0, 7),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 4, 0, 7),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 6),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 6),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 5, 0, 13),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 5, 0, 13),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 5, 0, 15),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 5, 0, 15),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme, 4, 0, 8),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme, 4, 0, 8),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 3, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preprocessor, 3, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparameter, 3, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparameter, 3, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2, 0, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3, 0, 5),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 3, 0, 5),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 6),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 6),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2, 0, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 4, 0, 9),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 4, 0, 9),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 4),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 4),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2, 0, 0),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_repeat2, 2, 0, 0),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_repeat2, 2, 0, 0), SHIFT_REPEAT(122),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_open, 1, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [469] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
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

TS_PUBLIC const TSLanguage *tree_sitter_plantuml(void) {
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

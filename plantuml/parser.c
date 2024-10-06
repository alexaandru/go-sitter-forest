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
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 2,
  [10] = 8,
  [11] = 4,
  [12] = 5,
  [13] = 7,
  [14] = 6,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 19,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 24,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 30,
  [34] = 34,
  [35] = 32,
  [36] = 34,
  [37] = 27,
  [38] = 38,
  [39] = 39,
  [40] = 28,
  [41] = 29,
  [42] = 38,
  [43] = 39,
  [44] = 31,
  [45] = 45,
  [46] = 46,
  [47] = 45,
  [48] = 46,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 51,
  [54] = 54,
  [55] = 55,
  [56] = 52,
  [57] = 57,
  [58] = 57,
  [59] = 50,
  [60] = 54,
  [61] = 55,
  [62] = 49,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 68,
  [70] = 67,
  [71] = 63,
  [72] = 72,
  [73] = 66,
  [74] = 74,
  [75] = 75,
  [76] = 74,
  [77] = 75,
  [78] = 78,
  [79] = 79,
  [80] = 72,
  [81] = 81,
  [82] = 82,
  [83] = 78,
  [84] = 79,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 81,
  [90] = 82,
  [91] = 64,
  [92] = 65,
  [93] = 86,
  [94] = 87,
  [95] = 88,
  [96] = 85,
  [97] = 97,
  [98] = 98,
  [99] = 97,
  [100] = 100,
  [101] = 98,
  [102] = 102,
  [103] = 103,
  [104] = 103,
  [105] = 105,
  [106] = 106,
  [107] = 105,
  [108] = 102,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 111,
  [116] = 114,
  [117] = 113,
  [118] = 110,
  [119] = 119,
  [120] = 109,
  [121] = 119,
  [122] = 122,
  [123] = 123,
  [124] = 20,
  [125] = 123,
  [126] = 19,
  [127] = 127,
  [128] = 127,
  [129] = 129,
  [130] = 123,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 133,
  [140] = 140,
  [141] = 132,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 144,
  [146] = 136,
  [147] = 134,
  [148] = 140,
  [149] = 138,
  [150] = 137,
  [151] = 131,
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
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(140);
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
        '\t', 17,
        ' ', 17,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(16);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '\n', 19,
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
          lookahead == ' ') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '\n', 19,
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
        '\t', 19,
        ' ', 19,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(18);
      if (lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '\n', 19,
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
          lookahead == ' ') SKIP(20);
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
        '\n', 17,
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
  [3] = {.lex_state = 83},
  [4] = {.lex_state = 83},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 83},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 84},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 85},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 84},
  [20] = {.lex_state = 84},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 86},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 25},
  [26] = {.lex_state = 86},
  [27] = {.lex_state = 25},
  [28] = {.lex_state = 86},
  [29] = {.lex_state = 86},
  [30] = {.lex_state = 86},
  [31] = {.lex_state = 86},
  [32] = {.lex_state = 86},
  [33] = {.lex_state = 25},
  [34] = {.lex_state = 86},
  [35] = {.lex_state = 25},
  [36] = {.lex_state = 25},
  [37] = {.lex_state = 86},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 25},
  [42] = {.lex_state = 86},
  [43] = {.lex_state = 86},
  [44] = {.lex_state = 25},
  [45] = {.lex_state = 86},
  [46] = {.lex_state = 26},
  [47] = {.lex_state = 25},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 86},
  [50] = {.lex_state = 86},
  [51] = {.lex_state = 25},
  [52] = {.lex_state = 25},
  [53] = {.lex_state = 86},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 25},
  [56] = {.lex_state = 86},
  [57] = {.lex_state = 25},
  [58] = {.lex_state = 86},
  [59] = {.lex_state = 25},
  [60] = {.lex_state = 86},
  [61] = {.lex_state = 86},
  [62] = {.lex_state = 25},
  [63] = {.lex_state = 83},
  [64] = {.lex_state = 83},
  [65] = {.lex_state = 83},
  [66] = {.lex_state = 83},
  [67] = {.lex_state = 83},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 83},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 83},
  [75] = {.lex_state = 83},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 83},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 83},
  [84] = {.lex_state = 83},
  [85] = {.lex_state = 83},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 83},
  [90] = {.lex_state = 83},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 83},
  [94] = {.lex_state = 83},
  [95] = {.lex_state = 83},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 156},
  [98] = {.lex_state = 156},
  [99] = {.lex_state = 156},
  [100] = {.lex_state = 156},
  [101] = {.lex_state = 156},
  [102] = {.lex_state = 27},
  [103] = {.lex_state = 39},
  [104] = {.lex_state = 39},
  [105] = {.lex_state = 83},
  [106] = {.lex_state = 27},
  [107] = {.lex_state = 83},
  [108] = {.lex_state = 27},
  [109] = {.lex_state = 26},
  [110] = {.lex_state = 26},
  [111] = {.lex_state = 27},
  [112] = {.lex_state = 26},
  [113] = {.lex_state = 27},
  [114] = {.lex_state = 27},
  [115] = {.lex_state = 27},
  [116] = {.lex_state = 27},
  [117] = {.lex_state = 27},
  [118] = {.lex_state = 26},
  [119] = {.lex_state = 27},
  [120] = {.lex_state = 26},
  [121] = {.lex_state = 27},
  [122] = {.lex_state = 27},
  [123] = {.lex_state = 27},
  [124] = {.lex_state = 26},
  [125] = {.lex_state = 27},
  [126] = {.lex_state = 26},
  [127] = {.lex_state = 27},
  [128] = {.lex_state = 27},
  [129] = {.lex_state = 26},
  [130] = {.lex_state = 27},
  [131] = {.lex_state = 80},
  [132] = {.lex_state = 83},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 27},
  [135] = {.lex_state = 27},
  [136] = {.lex_state = 27},
  [137] = {.lex_state = 80},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 27},
  [141] = {.lex_state = 83},
  [142] = {.lex_state = 80},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 80},
  [145] = {.lex_state = 80},
  [146] = {.lex_state = 27},
  [147] = {.lex_state = 27},
  [148] = {.lex_state = 27},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 80},
  [151] = {.lex_state = 80},
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
    [sym_document] = STATE(143),
    [sym__statement] = STATE(3),
    [sym_preprocessor] = STATE(3),
    [sym_include] = STATE(3),
    [sym_theme] = STATE(3),
    [sym_component] = STATE(56),
    [sym_block] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_skinparameter] = STATE(3),
    [sym_arrow] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
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
    STATE(52), 1,
      sym_component,
    ACTIONS(33), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    STATE(13), 9,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
      aux_sym_document_repeat1,
  [46] = 11,
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
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym_component,
    ACTIONS(15), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(43), 2,
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
  [90] = 5,
    ACTIONS(49), 1,
      sym_string,
    STATE(56), 1,
      sym_component,
    ACTIONS(47), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
    STATE(80), 8,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
  [122] = 12,
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
    ACTIONS(51), 1,
      sym_block_close,
    ACTIONS(53), 1,
      sym_delimiter,
    ACTIONS(55), 1,
      sym_keyword,
    STATE(52), 1,
      sym_component,
    ACTIONS(33), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    STATE(6), 9,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
      aux_sym_document_repeat1,
  [168] = 12,
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
    ACTIONS(35), 1,
      sym_delimiter,
    ACTIONS(37), 1,
      sym_keyword,
    ACTIONS(39), 1,
      anon_sym_skinparam,
    ACTIONS(57), 1,
      sym_block_close,
    STATE(52), 1,
      sym_component,
    ACTIONS(33), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    STATE(13), 9,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
      aux_sym_document_repeat1,
  [214] = 11,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_BANG,
    ACTIONS(64), 1,
      anon_sym_BANGinclude,
    ACTIONS(67), 1,
      anon_sym_BANGtheme,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(73), 1,
      aux_sym_comment_token1,
    ACTIONS(82), 1,
      anon_sym_skinparam,
    STATE(56), 1,
      sym_component,
    ACTIONS(76), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(79), 2,
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
  [258] = 12,
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
    ACTIONS(85), 1,
      sym_block_close,
    ACTIONS(87), 1,
      sym_delimiter,
    ACTIONS(89), 1,
      sym_keyword,
    STATE(52), 1,
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
  [304] = 12,
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
    ACTIONS(35), 1,
      sym_delimiter,
    ACTIONS(37), 1,
      sym_keyword,
    ACTIONS(39), 1,
      anon_sym_skinparam,
    ACTIONS(91), 1,
      sym_block_close,
    STATE(52), 1,
      sym_component,
    ACTIONS(33), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    STATE(13), 9,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
      aux_sym_document_repeat1,
  [350] = 12,
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
    ACTIONS(93), 1,
      sym_block_close,
    ACTIONS(95), 1,
      sym_delimiter,
    ACTIONS(97), 1,
      sym_keyword,
    STATE(52), 1,
      sym_component,
    ACTIONS(33), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    STATE(2), 9,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
      aux_sym_document_repeat1,
  [396] = 5,
    ACTIONS(99), 1,
      sym_string,
    STATE(52), 1,
      sym_component,
    ACTIONS(45), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(47), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    STATE(72), 8,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
  [428] = 12,
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
    ACTIONS(101), 1,
      sym_block_close,
    ACTIONS(103), 1,
      sym_delimiter,
    ACTIONS(105), 1,
      sym_keyword,
    STATE(52), 1,
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
  [474] = 12,
    ACTIONS(59), 1,
      sym_block_close,
    ACTIONS(107), 1,
      anon_sym_BANG,
    ACTIONS(110), 1,
      anon_sym_BANGinclude,
    ACTIONS(113), 1,
      anon_sym_BANGtheme,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(119), 1,
      aux_sym_comment_token1,
    ACTIONS(125), 1,
      sym_delimiter,
    ACTIONS(128), 1,
      sym_keyword,
    ACTIONS(131), 1,
      anon_sym_skinparam,
    STATE(52), 1,
      sym_component,
    ACTIONS(122), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    STATE(13), 9,
      sym__statement,
      sym_preprocessor,
      sym_include,
      sym_theme,
      sym_block,
      sym_comment,
      sym_skinparameter,
      sym_arrow,
      aux_sym_document_repeat1,
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
    ACTIONS(35), 1,
      sym_delimiter,
    ACTIONS(37), 1,
      sym_keyword,
    ACTIONS(39), 1,
      anon_sym_skinparam,
    ACTIONS(134), 1,
      sym_block_close,
    STATE(52), 1,
      sym_component,
    ACTIONS(33), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    STATE(13), 9,
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
    STATE(23), 1,
      sym_attribute_list,
    STATE(58), 1,
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
    STATE(25), 1,
      sym_attribute_list,
    STATE(57), 1,
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
    ACTIONS(142), 1,
      sym_attribute_list_open,
    ACTIONS(146), 1,
      anon_sym_POUND,
    ACTIONS(160), 1,
      sym_string,
    STATE(26), 1,
      sym_attribute_list,
    STATE(53), 1,
      sym_style,
    ACTIONS(156), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(158), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [668] = 7,
    ACTIONS(150), 1,
      sym_attribute_list_open,
    ACTIONS(154), 1,
      anon_sym_POUND,
    ACTIONS(162), 1,
      sym_string,
    STATE(24), 1,
      sym_attribute_list,
    STATE(51), 1,
      sym_style,
    ACTIONS(156), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(158), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
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
    ACTIONS(170), 7,
      anon_sym_BANG,
      anon_sym_as,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(168), 9,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_attribute_list_open,
      sym_string,
      aux_sym_comment_token1,
      sym_keyword,
      anon_sym_POUND,
  [742] = 2,
    ACTIONS(170), 7,
      anon_sym_BANG,
      anon_sym_as,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(168), 9,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_attribute_list_open,
      sym_string,
      aux_sym_comment_token1,
      sym_keyword,
      anon_sym_POUND,
  [763] = 2,
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
  [784] = 5,
    ACTIONS(146), 1,
      anon_sym_POUND,
    ACTIONS(176), 1,
      sym_string,
    STATE(50), 1,
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
    ACTIONS(182), 1,
      sym_string,
    STATE(55), 1,
      sym_style,
    ACTIONS(178), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(180), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [836] = 5,
    ACTIONS(154), 1,
      anon_sym_POUND,
    ACTIONS(184), 1,
      sym_string,
    STATE(59), 1,
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
  [862] = 5,
    ACTIONS(146), 1,
      anon_sym_POUND,
    ACTIONS(186), 1,
      sym_string,
    STATE(61), 1,
      sym_style,
    ACTIONS(178), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(180), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
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
  [907] = 2,
    ACTIONS(194), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(192), 8,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_string,
      aux_sym_comment_token1,
      sym_keyword,
      anon_sym_POUND,
  [926] = 4,
    ACTIONS(200), 1,
      sym_style_sep,
    STATE(29), 1,
      aux_sym_style_repeat1,
    ACTIONS(196), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(198), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [949] = 4,
    ACTIONS(146), 1,
      anon_sym_POUND,
    STATE(50), 1,
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
  [972] = 4,
    ACTIONS(207), 1,
      sym_style_sep,
    STATE(42), 1,
      aux_sym_style_repeat1,
    ACTIONS(203), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(205), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [995] = 4,
    ACTIONS(146), 1,
      anon_sym_POUND,
    STATE(60), 1,
      sym_style,
    ACTIONS(209), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(211), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1018] = 4,
    ACTIONS(154), 1,
      anon_sym_POUND,
    STATE(59), 1,
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
  [1041] = 4,
    ACTIONS(146), 1,
      anon_sym_POUND,
    STATE(61), 1,
      sym_style,
    ACTIONS(178), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(180), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [1064] = 4,
    ACTIONS(154), 1,
      anon_sym_POUND,
    STATE(54), 1,
      sym_style,
    ACTIONS(209), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(211), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1087] = 4,
    ACTIONS(154), 1,
      anon_sym_POUND,
    STATE(55), 1,
      sym_style,
    ACTIONS(178), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(180), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [1110] = 2,
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
  [1129] = 4,
    ACTIONS(217), 1,
      sym_style_sep,
    STATE(41), 1,
      aux_sym_style_repeat1,
    ACTIONS(213), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(215), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [1152] = 4,
    ACTIONS(154), 1,
      anon_sym_POUND,
    STATE(62), 1,
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
  [1175] = 2,
    ACTIONS(194), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(192), 8,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      sym_string,
      aux_sym_comment_token1,
      sym_keyword,
      anon_sym_POUND,
  [1194] = 4,
    ACTIONS(223), 1,
      sym_style_sep,
    STATE(41), 1,
      aux_sym_style_repeat1,
    ACTIONS(196), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(198), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1217] = 4,
    ACTIONS(207), 1,
      sym_style_sep,
    STATE(29), 1,
      aux_sym_style_repeat1,
    ACTIONS(213), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(215), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [1240] = 4,
    ACTIONS(146), 1,
      anon_sym_POUND,
    STATE(49), 1,
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
  [1263] = 4,
    ACTIONS(217), 1,
      sym_style_sep,
    STATE(38), 1,
      aux_sym_style_repeat1,
    ACTIONS(203), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(205), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1286] = 2,
    ACTIONS(228), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(226), 7,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
      sym_style_sep,
  [1304] = 9,
    ACTIONS(232), 1,
      sym_block_open,
    ACTIONS(234), 1,
      aux_sym_attribute_token1,
    ACTIONS(236), 1,
      sym_identifier,
    ACTIONS(238), 1,
      sym_string,
    ACTIONS(240), 1,
      anon_sym_o,
    STATE(16), 1,
      sym_attribute,
    STATE(98), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(230), 3,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_DOT,
    ACTIONS(242), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_EQ,
  [1336] = 2,
    ACTIONS(228), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(226), 7,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
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
    STATE(101), 1,
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
    ACTIONS(258), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(260), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1403] = 2,
    ACTIONS(209), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(211), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1420] = 2,
    ACTIONS(178), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(180), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [1437] = 3,
    ACTIONS(266), 1,
      sym_block_open,
    ACTIONS(264), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(262), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1456] = 2,
    ACTIONS(178), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(180), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      aux_sym_comment_token1,
      sym_keyword,
  [1473] = 2,
    ACTIONS(268), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(270), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
  [1490] = 2,
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
  [1507] = 3,
    ACTIONS(272), 1,
      sym_block_open,
    ACTIONS(264), 5,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(262), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1526] = 2,
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
  [1543] = 2,
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
  [1560] = 2,
    ACTIONS(209), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(211), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1577] = 2,
    ACTIONS(268), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
    ACTIONS(270), 6,
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
    ACTIONS(258), 6,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_open,
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
  [1628] = 2,
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
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(294), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1724] = 2,
    ACTIONS(294), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(296), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
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
  [1772] = 2,
    ACTIONS(300), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(298), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1788] = 2,
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
  [1804] = 2,
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
  [1820] = 2,
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
  [1836] = 2,
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
  [1852] = 2,
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
  [1868] = 2,
    ACTIONS(312), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(310), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1884] = 2,
    ACTIONS(316), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(314), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1900] = 2,
    ACTIONS(298), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(300), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1916] = 2,
    ACTIONS(320), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(318), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1932] = 2,
    ACTIONS(324), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(322), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [1948] = 2,
    ACTIONS(310), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(312), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1964] = 2,
    ACTIONS(314), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(316), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [1980] = 2,
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
  [1996] = 2,
    ACTIONS(332), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(330), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [2012] = 2,
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
  [2028] = 2,
    ACTIONS(340), 5,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      sym_block_close,
      aux_sym_comment_token1,
      sym_keyword,
    ACTIONS(338), 6,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      sym_delimiter,
      anon_sym_skinparam,
  [2044] = 2,
    ACTIONS(318), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(320), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [2060] = 2,
    ACTIONS(322), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(324), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [2076] = 2,
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
  [2092] = 2,
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
  [2108] = 2,
    ACTIONS(330), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(332), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
  [2124] = 2,
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
  [2140] = 2,
    ACTIONS(338), 5,
      anon_sym_BANG,
      sym_identifier,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
      anon_sym_skinparam,
    ACTIONS(340), 6,
      ts_builtin_sym_end,
      anon_sym_BANGinclude,
      anon_sym_BANGtheme,
      aux_sym_comment_token1,
      sym_delimiter,
      sym_keyword,
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
    STATE(100), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(344), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_EQ,
  [2187] = 4,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(350), 1,
      sym_annotation,
    STATE(100), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(344), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_EQ,
  [2202] = 4,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(354), 1,
      sym_annotation,
    STATE(100), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(344), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_EQ,
  [2217] = 3,
    STATE(100), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(356), 2,
      sym_identifier,
      sym_annotation,
    ACTIONS(358), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_EQ,
  [2230] = 4,
    ACTIONS(361), 1,
      sym_identifier,
    ACTIONS(363), 1,
      sym_annotation,
    STATE(100), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(344), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_EQ,
  [2245] = 3,
    ACTIONS(365), 1,
      aux_sym_attribute_token1,
    STATE(110), 1,
      sym_attribute,
    ACTIONS(367), 2,
      sym_identifier,
      sym_string,
  [2256] = 4,
    ACTIONS(369), 1,
      anon_sym_LT,
    ACTIONS(371), 1,
      sym_url,
    ACTIONS(373), 1,
      sym_filepath,
    STATE(131), 1,
      sym_include_open,
  [2269] = 4,
    ACTIONS(369), 1,
      anon_sym_LT,
    ACTIONS(375), 1,
      sym_url,
    ACTIONS(377), 1,
      sym_filepath,
    STATE(151), 1,
      sym_include_open,
  [2282] = 2,
    STATE(97), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(379), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_EQ,
  [2291] = 3,
    ACTIONS(365), 1,
      aux_sym_attribute_token1,
    STATE(129), 1,
      sym_attribute,
    ACTIONS(367), 2,
      sym_identifier,
      sym_string,
  [2302] = 2,
    STATE(99), 1,
      aux_sym_arrow_repeat1,
    ACTIONS(381), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_EQ,
  [2311] = 3,
    ACTIONS(365), 1,
      aux_sym_attribute_token1,
    STATE(118), 1,
      sym_attribute,
    ACTIONS(367), 2,
      sym_identifier,
      sym_string,
  [2322] = 3,
    ACTIONS(383), 1,
      sym_attribute_sep,
    ACTIONS(385), 1,
      sym_attribute_list_close,
    STATE(112), 1,
      aux_sym_attribute_list_repeat1,
  [2332] = 3,
    ACTIONS(383), 1,
      sym_attribute_sep,
    ACTIONS(387), 1,
      sym_attribute_list_close,
    STATE(120), 1,
      aux_sym_attribute_list_repeat1,
  [2342] = 3,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(391), 1,
      aux_sym_arrow_token1,
    STATE(121), 1,
      aux_sym_arrow_repeat2,
  [2352] = 3,
    ACTIONS(393), 1,
      sym_attribute_sep,
    ACTIONS(396), 1,
      sym_attribute_list_close,
    STATE(112), 1,
      aux_sym_attribute_list_repeat1,
  [2362] = 3,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(400), 1,
      aux_sym_arrow_token1,
    STATE(122), 1,
      aux_sym_arrow_repeat2,
  [2372] = 3,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      aux_sym_arrow_token1,
    STATE(117), 1,
      aux_sym_arrow_repeat2,
  [2382] = 3,
    ACTIONS(406), 1,
      sym_identifier,
    ACTIONS(408), 1,
      aux_sym_arrow_token1,
    STATE(119), 1,
      aux_sym_arrow_repeat2,
  [2392] = 3,
    ACTIONS(410), 1,
      sym_identifier,
    ACTIONS(412), 1,
      aux_sym_arrow_token1,
    STATE(113), 1,
      aux_sym_arrow_repeat2,
  [2402] = 3,
    ACTIONS(400), 1,
      aux_sym_arrow_token1,
    ACTIONS(414), 1,
      sym_identifier,
    STATE(122), 1,
      aux_sym_arrow_repeat2,
  [2412] = 3,
    ACTIONS(383), 1,
      sym_attribute_sep,
    ACTIONS(416), 1,
      sym_attribute_list_close,
    STATE(109), 1,
      aux_sym_attribute_list_repeat1,
  [2422] = 3,
    ACTIONS(400), 1,
      aux_sym_arrow_token1,
    ACTIONS(418), 1,
      sym_identifier,
    STATE(122), 1,
      aux_sym_arrow_repeat2,
  [2432] = 3,
    ACTIONS(383), 1,
      sym_attribute_sep,
    ACTIONS(420), 1,
      sym_attribute_list_close,
    STATE(112), 1,
      aux_sym_attribute_list_repeat1,
  [2442] = 3,
    ACTIONS(400), 1,
      aux_sym_arrow_token1,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(122), 1,
      aux_sym_arrow_repeat2,
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
      sym_string,
  [2467] = 1,
    ACTIONS(168), 2,
      sym_attribute_sep,
      sym_attribute_list_close,
  [2472] = 1,
    ACTIONS(431), 2,
      sym_identifier,
      sym_string,
  [2477] = 1,
    ACTIONS(164), 2,
      sym_attribute_sep,
      sym_attribute_list_close,
  [2482] = 1,
    ACTIONS(433), 2,
      sym_identifier,
      sym_number,
  [2487] = 1,
    ACTIONS(435), 2,
      sym_identifier,
      sym_number,
  [2492] = 1,
    ACTIONS(396), 2,
      sym_attribute_sep,
      sym_attribute_list_close,
  [2497] = 1,
    ACTIONS(437), 2,
      sym_identifier,
      sym_string,
  [2502] = 1,
    ACTIONS(439), 1,
      sym_non_breakable_identifier,
  [2506] = 1,
    ACTIONS(441), 1,
      sym_include_close,
  [2510] = 1,
    ACTIONS(443), 1,
      sym_url,
  [2514] = 1,
    ACTIONS(445), 1,
      sym_identifier,
  [2518] = 1,
    ACTIONS(447), 1,
      sym_identifier,
  [2522] = 1,
    ACTIONS(449), 1,
      sym_identifier,
  [2526] = 1,
    ACTIONS(451), 1,
      sym_non_breakable_identifier,
  [2530] = 1,
    ACTIONS(453), 1,
      anon_sym_from,
  [2534] = 1,
    ACTIONS(455), 1,
      sym_url,
  [2538] = 1,
    ACTIONS(457), 1,
      sym_identifier,
  [2542] = 1,
    ACTIONS(459), 1,
      sym_include_close,
  [2546] = 1,
    ACTIONS(461), 1,
      sym_non_breakable_identifier,
  [2550] = 1,
    ACTIONS(463), 1,
      ts_builtin_sym_end,
  [2554] = 1,
    ACTIONS(465), 1,
      sym_non_breakable_identifier,
  [2558] = 1,
    ACTIONS(467), 1,
      sym_non_breakable_identifier,
  [2562] = 1,
    ACTIONS(469), 1,
      sym_identifier,
  [2566] = 1,
    ACTIONS(471), 1,
      sym_identifier,
  [2570] = 1,
    ACTIONS(473), 1,
      sym_identifier,
  [2574] = 1,
    ACTIONS(475), 1,
      anon_sym_from,
  [2578] = 1,
    ACTIONS(477), 1,
      sym_non_breakable_identifier,
  [2582] = 1,
    ACTIONS(479), 1,
      sym_non_breakable_identifier,
  [2586] = 1,
    ACTIONS(481), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 122,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 214,
  [SMALL_STATE(8)] = 258,
  [SMALL_STATE(9)] = 304,
  [SMALL_STATE(10)] = 350,
  [SMALL_STATE(11)] = 396,
  [SMALL_STATE(12)] = 428,
  [SMALL_STATE(13)] = 474,
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
  [SMALL_STATE(29)] = 926,
  [SMALL_STATE(30)] = 949,
  [SMALL_STATE(31)] = 972,
  [SMALL_STATE(32)] = 995,
  [SMALL_STATE(33)] = 1018,
  [SMALL_STATE(34)] = 1041,
  [SMALL_STATE(35)] = 1064,
  [SMALL_STATE(36)] = 1087,
  [SMALL_STATE(37)] = 1110,
  [SMALL_STATE(38)] = 1129,
  [SMALL_STATE(39)] = 1152,
  [SMALL_STATE(40)] = 1175,
  [SMALL_STATE(41)] = 1194,
  [SMALL_STATE(42)] = 1217,
  [SMALL_STATE(43)] = 1240,
  [SMALL_STATE(44)] = 1263,
  [SMALL_STATE(45)] = 1286,
  [SMALL_STATE(46)] = 1304,
  [SMALL_STATE(47)] = 1336,
  [SMALL_STATE(48)] = 1354,
  [SMALL_STATE(49)] = 1386,
  [SMALL_STATE(50)] = 1403,
  [SMALL_STATE(51)] = 1420,
  [SMALL_STATE(52)] = 1437,
  [SMALL_STATE(53)] = 1456,
  [SMALL_STATE(54)] = 1473,
  [SMALL_STATE(55)] = 1490,
  [SMALL_STATE(56)] = 1507,
  [SMALL_STATE(57)] = 1526,
  [SMALL_STATE(58)] = 1543,
  [SMALL_STATE(59)] = 1560,
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
  [SMALL_STATE(99)] = 2202,
  [SMALL_STATE(100)] = 2217,
  [SMALL_STATE(101)] = 2230,
  [SMALL_STATE(102)] = 2245,
  [SMALL_STATE(103)] = 2256,
  [SMALL_STATE(104)] = 2269,
  [SMALL_STATE(105)] = 2282,
  [SMALL_STATE(106)] = 2291,
  [SMALL_STATE(107)] = 2302,
  [SMALL_STATE(108)] = 2311,
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
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preprocessor, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2, 0, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2, 0, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4, 0, 10),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4, 0, 10),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3, 0, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3, 0, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 5, 0, 10),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 5, 0, 10),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_list, 4, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_list, 4, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_style_repeat1, 2, 0, 17),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_style_repeat1, 2, 0, 17),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_style_repeat1, 2, 0, 17), SHIFT_REPEAT(144),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style, 2, 0, 11),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style, 2, 0, 11),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4, 0, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4, 0, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style, 3, 0, 14),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style, 3, 0, 14),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 6, 0, 10),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 6, 0, 10),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_style_repeat1, 2, 0, 17), SHIFT_REPEAT(145),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_style_repeat1, 2, 0, 11),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_style_repeat1, 2, 0, 11),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 7, 0, 10),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 7, 0, 10),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 5, 0, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 5, 0, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2, 0, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 5, 0, 15),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 5, 0, 15),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 6, 0, 16),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 6, 0, 16),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 4),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 4),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2, 0, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preprocessor, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3, 0, 5),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 3, 0, 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skinparameter, 3, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skinparameter, 3, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 6),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 6),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 4, 0, 7),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 4, 0, 7),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 4, 0, 9),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 4, 0, 9),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 4),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theme, 4, 0, 8),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_theme, 4, 0, 8),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 4, 0, 12),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 4, 0, 12),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 6),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 6),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 5, 0, 13),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 5, 0, 13),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2, 0, 0),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrow_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_list_repeat1, 2, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrow_repeat2, 2, 0, 0),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrow_repeat2, 2, 0, 0), SHIFT_REPEAT(122),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_open, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
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

#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 114
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 1
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  anon_sym_ATbrief = 1,
  anon_sym_BSLASHbrief = 2,
  aux_sym_brief_header_token1 = 3,
  anon_sym_COMMA = 4,
  aux_sym_tag_token1 = 5,
  aux_sym_tag_token2 = 6,
  sym_tag_name_with_argument = 7,
  sym_tag_name_with_multiple_arguments = 8,
  sym_tag_name_with_types = 9,
  sym_tag_name_with_self_types = 10,
  sym_tag_name_with_type = 11,
  sym_tag_name = 12,
  aux_sym_identifier_token1 = 13,
  anon_sym_COLON_COLON = 14,
  anon_sym_TILDE = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_LBRACK = 18,
  anon_sym_in = 19,
  anon_sym_out = 20,
  anon_sym_inout = 21,
  anon_sym_RBRACK = 22,
  anon_sym_BSLASHa = 23,
  anon_sym_BSLASHc = 24,
  anon_sym_LTa = 25,
  aux_sym_link_token1 = 26,
  anon_sym_GT = 27,
  aux_sym_link_token2 = 28,
  anon_sym_LT_SLASHa_GT = 29,
  sym_function_link = 30,
  anon_sym_ATcode = 31,
  anon_sym_LBRACE = 32,
  anon_sym_DOT = 33,
  anon_sym_RBRACE = 34,
  anon_sym_ATendcode = 35,
  sym__text = 36,
  sym__begin = 37,
  anon_sym_SLASH = 38,
  anon_sym_STAR_SLASH = 39,
  sym__text_line = 40,
  sym_brief_description = 41,
  sym_code_block_start = 42,
  sym_code_block_language = 43,
  sym_code_block_content = 44,
  sym_code_block_end = 45,
  sym_document = 46,
  sym_brief_header = 47,
  sym_description = 48,
  sym_tag = 49,
  sym__expression = 50,
  sym_identifier = 51,
  sym_qualified_identifier = 52,
  sym_function = 53,
  sym_storageclass = 54,
  sym_emphasis = 55,
  sym_code_word = 56,
  sym_link = 57,
  sym_code_block = 58,
  sym__end = 59,
  aux_sym_document_repeat1 = 60,
  aux_sym_description_repeat1 = 61,
  aux_sym_tag_repeat1 = 62,
  aux_sym_tag_repeat2 = 63,
  aux_sym_qualified_identifier_repeat1 = 64,
  alias_sym_code = 65,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATbrief] = "tag_name",
  [anon_sym_BSLASHbrief] = "tag_name",
  [aux_sym_brief_header_token1] = "brief_description",
  [anon_sym_COMMA] = ",",
  [aux_sym_tag_token1] = "_text",
  [aux_sym_tag_token2] = "type",
  [sym_tag_name_with_argument] = "tag_name",
  [sym_tag_name_with_multiple_arguments] = "tag_name",
  [sym_tag_name_with_types] = "tag_name",
  [sym_tag_name_with_self_types] = "tag_name",
  [sym_tag_name_with_type] = "tag_name",
  [sym_tag_name] = "tag_name",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_TILDE] = "~",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_inout] = "inout",
  [anon_sym_RBRACK] = "]",
  [anon_sym_BSLASHa] = "\\a",
  [anon_sym_BSLASHc] = "\\c",
  [anon_sym_LTa] = "<a",
  [aux_sym_link_token1] = "link_token1",
  [anon_sym_GT] = ">",
  [aux_sym_link_token2] = "text",
  [anon_sym_LT_SLASHa_GT] = "</a>",
  [sym_function_link] = "function_link",
  [anon_sym_ATcode] = "@code",
  [anon_sym_LBRACE] = "{",
  [anon_sym_DOT] = ".",
  [anon_sym_RBRACE] = "}",
  [anon_sym_ATendcode] = "@endcode",
  [sym__text] = "_text",
  [sym__begin] = "_begin",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_SLASH] = "*/",
  [sym__text_line] = "_text_line",
  [sym_brief_description] = "brief_description",
  [sym_code_block_start] = "code_block_start",
  [sym_code_block_language] = "code_block_language",
  [sym_code_block_content] = "code_block_content",
  [sym_code_block_end] = "code_block_end",
  [sym_document] = "document",
  [sym_brief_header] = "brief_header",
  [sym_description] = "description",
  [sym_tag] = "tag",
  [sym__expression] = "_expression",
  [sym_identifier] = "identifier",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_function] = "function",
  [sym_storageclass] = "storageclass",
  [sym_emphasis] = "emphasis",
  [sym_code_word] = "code_word",
  [sym_link] = "link",
  [sym_code_block] = "code_block",
  [sym__end] = "_end",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym_tag_repeat2] = "tag_repeat2",
  [aux_sym_qualified_identifier_repeat1] = "qualified_identifier_repeat1",
  [alias_sym_code] = "code",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATbrief] = sym_tag_name,
  [anon_sym_BSLASHbrief] = sym_tag_name,
  [aux_sym_brief_header_token1] = sym_brief_description,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_tag_token1] = aux_sym_tag_token1,
  [aux_sym_tag_token2] = aux_sym_tag_token2,
  [sym_tag_name_with_argument] = sym_tag_name,
  [sym_tag_name_with_multiple_arguments] = sym_tag_name,
  [sym_tag_name_with_types] = sym_tag_name,
  [sym_tag_name_with_self_types] = sym_tag_name,
  [sym_tag_name_with_type] = sym_tag_name,
  [sym_tag_name] = sym_tag_name,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_inout] = anon_sym_inout,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_BSLASHa] = anon_sym_BSLASHa,
  [anon_sym_BSLASHc] = anon_sym_BSLASHc,
  [anon_sym_LTa] = anon_sym_LTa,
  [aux_sym_link_token1] = aux_sym_link_token1,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_link_token2] = aux_sym_link_token2,
  [anon_sym_LT_SLASHa_GT] = anon_sym_LT_SLASHa_GT,
  [sym_function_link] = sym_function_link,
  [anon_sym_ATcode] = anon_sym_ATcode,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_ATendcode] = anon_sym_ATendcode,
  [sym__text] = sym__text,
  [sym__begin] = sym__begin,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym__text_line] = sym__text_line,
  [sym_brief_description] = sym_brief_description,
  [sym_code_block_start] = sym_code_block_start,
  [sym_code_block_language] = sym_code_block_language,
  [sym_code_block_content] = sym_code_block_content,
  [sym_code_block_end] = sym_code_block_end,
  [sym_document] = sym_document,
  [sym_brief_header] = sym_brief_header,
  [sym_description] = sym_description,
  [sym_tag] = sym_tag,
  [sym__expression] = sym__expression,
  [sym_identifier] = sym_identifier,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_function] = sym_function,
  [sym_storageclass] = sym_storageclass,
  [sym_emphasis] = sym_emphasis,
  [sym_code_word] = sym_code_word,
  [sym_link] = sym_link,
  [sym_code_block] = sym_code_block,
  [sym__end] = sym__end,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
  [aux_sym_tag_repeat2] = aux_sym_tag_repeat2,
  [aux_sym_qualified_identifier_repeat1] = aux_sym_qualified_identifier_repeat1,
  [alias_sym_code] = alias_sym_code,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATbrief] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASHbrief] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_brief_header_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_tag_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name_with_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name_with_multiple_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name_with_types] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name_with_self_types] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name_with_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTa] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_link_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_link_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_SLASHa_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_function_link] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATcode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATendcode] = {
    .visible = true,
    .named = false,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym__begin] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym__text_line] = {
    .visible = false,
    .named = true,
  },
  [sym_brief_description] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block_start] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block_language] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block_content] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block_end] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_brief_header] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_storageclass] = {
    .visible = true,
    .named = true,
  },
  [sym_emphasis] = {
    .visible = true,
    .named = true,
  },
  [sym_code_word] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qualified_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_code] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_function = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function] = "function",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [5] = {.index = 1, .length = 2},
  [6] = {.index = 3, .length = 2},
  [7] = {.index = 5, .length = 2},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 3},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function, 1},
  [1] =
    {field_function, 1},
    {field_function, 2},
  [3] =
    {field_function, 1},
    {field_function, 2, .inherited = true},
  [5] =
    {field_function, 1},
    {field_function, 3},
  [7] =
    {field_function, 1},
    {field_function, 3, .inherited = true},
  [9] =
    {field_function, 1},
    {field_function, 2, .inherited = true},
    {field_function, 3},
  [12] =
    {field_function, 0, .inherited = true},
    {field_function, 1, .inherited = true},
  [14] =
    {field_function, 1},
    {field_function, 3, .inherited = true},
    {field_function, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [1] = aux_sym_tag_token2,
  },
  [3] = {
    [1] = aux_sym_link_token2,
  },
  [4] = {
    [1] = alias_sym_code,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_identifier, 2,
    sym_identifier,
    aux_sym_tag_token2,
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
  [17] = 15,
  [18] = 18,
  [19] = 19,
  [20] = 16,
  [21] = 18,
  [22] = 19,
  [23] = 23,
  [24] = 19,
  [25] = 25,
  [26] = 26,
  [27] = 19,
  [28] = 25,
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
  [40] = 19,
  [41] = 41,
  [42] = 31,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 30,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 19,
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
  [63] = 19,
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
  [75] = 73,
  [76] = 76,
  [77] = 77,
  [78] = 48,
  [79] = 79,
  [80] = 80,
  [81] = 80,
  [82] = 79,
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
  [101] = 101,
  [102] = 102,
  [103] = 19,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 87,
  [108] = 108,
  [109] = 109,
  [110] = 102,
  [111] = 111,
  [112] = 101,
  [113] = 109,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(118);
      if (lookahead == '\n') SKIP(117)
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == ':') ADVANCE(276);
      if (lookahead == '<') ADVANCE(282);
      if (lookahead == '>') ADVANCE(233);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == ']') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == '{') ADVANCE(247);
      if (lookahead == '}') ADVANCE(249);
      if (lookahead == '~') ADVANCE(214);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(116)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '<') ADVANCE(282);
      if (lookahead == '>') ADVANCE(233);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == ']') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == '~') ADVANCE(214);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(311);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '<') ADVANCE(282);
      if (lookahead == '>') ADVANCE(233);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == ']') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == '~') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(311);
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == '*') SKIP(3)
      if (lookahead == '/') ADVANCE(290);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '>') ADVANCE(233);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == ']') ADVANCE(224);
      if (lookahead == '~') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == '/') ADVANCE(290);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '>') ADVANCE(233);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == ']') ADVANCE(224);
      if (lookahead == '{') ADVANCE(247);
      if (lookahead == '}') ADVANCE(249);
      if (lookahead == '~') ADVANCE(213);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == '/') ADVANCE(290);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '>') ADVANCE(233);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == ']') ADVANCE(224);
      if (lookahead == '~') ADVANCE(213);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(293);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '~') ADVANCE(263);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(300);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(293);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '~') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(300);
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(276);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '~') ADVANCE(278);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(311);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '~') ADVANCE(278);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(311);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '~') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(311);
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(276);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '~') ADVANCE(278);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(311);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '~') ADVANCE(278);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(311);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '~') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(311);
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(276);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '~') ADVANCE(278);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(311);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '~') ADVANCE(278);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(311);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '~') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(311);
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '~') ADVANCE(310);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(311);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '~') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(311);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(311);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(19)
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(311);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '*') SKIP(21)
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(22)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(109);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '~') ADVANCE(214);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(311);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '~') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(311);
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '~') ADVANCE(310);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(311);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '~') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(26)
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(311);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(276);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '~') ADVANCE(278);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(311);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '~') ADVANCE(278);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(311);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '~') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(311);
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '~') ADVANCE(278);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(311);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(53);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '~') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(311);
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 32:
      if (lookahead == ')') ADVANCE(238);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == ')') ADVANCE(243);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(295);
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(237);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(227);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'v') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'b') ADVANCE(192);
      if (lookahead == 'c') ADVANCE(228);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == 'v') ADVANCE(150);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(143);
      if (lookahead == '~') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'c') ADVANCE(228);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == 'v') ADVANCE(150);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(143);
      if (lookahead == '~') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'v') ADVANCE(48);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(187);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == 'v') ADVANCE(150);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(143);
      if (lookahead == '~') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == 'v') ADVANCE(150);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(143);
      if (lookahead == '~') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(175);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == 'v') ADVANCE(150);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(143);
      if (lookahead == '~') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(139);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(119);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(121);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'x') ADVANCE(56);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 109:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 111:
      if (lookahead == 'v') ADVANCE(71);
      END_STATE();
    case 112:
      if (lookahead == 'x') ADVANCE(56);
      END_STATE();
    case 113:
      if (lookahead == 'y') ADVANCE(139);
      END_STATE();
    case 114:
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 115:
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 116:
      if (eof) ADVANCE(118);
      if (lookahead == '\n') SKIP(117)
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '<') ADVANCE(282);
      if (lookahead == '>') ADVANCE(233);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == ']') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == '~') ADVANCE(214);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(311);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(116)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 117:
      if (eof) ADVANCE(118);
      if (lookahead == '\n') SKIP(117)
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '<') ADVANCE(282);
      if (lookahead == '>') ADVANCE(233);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == ']') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == '~') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(117)
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(311);
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(116)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_ATbrief);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_ATbrief);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_BSLASHbrief);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_BSLASHbrief);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_brief_header_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_brief_header_token1);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '!') ADVANCE(296);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == '*') ADVANCE(252);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(297);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_brief_header_token1);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == '*') ADVANCE(252);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(297);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_brief_header_token1);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_brief_header_token1);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '\n') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_tag_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_tag_name_with_argument);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_tag_name_with_multiple_arguments);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_tag_name_with_multiple_arguments);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_tag_name_with_types);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_tag_name_with_types);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_tag_name_with_self_types);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_tag_name_with_self_types);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_tag_name_with_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_tag_name);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'v') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_tag_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '(') ADVANCE(297);
      if (lookahead == ':') ADVANCE(306);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ':') ADVANCE(270);
      if (lookahead == 'n') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ':') ADVANCE(270);
      if (lookahead == 't') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ':') ADVANCE(270);
      if (lookahead == 't') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ':') ADVANCE(270);
      if (lookahead == 'u') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ':') ADVANCE(270);
      if (lookahead == 'u') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ':') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(297);
      if (lookahead == ':') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '~') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ':') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ':') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_inout);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ':') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_BSLASHc);
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_BSLASHc);
      if (lookahead == 'l') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_LTa);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '*') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(230);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(232);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == '\n') ADVANCE(230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_link_token2);
      if (lookahead == '\n') ADVANCE(234);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(234);
      if ((11 <= lookahead && lookahead <= '\r')) ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(236);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_link_token2);
      if (lookahead == '\n') ADVANCE(234);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_link_token2);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LT_SLASHa_GT);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_function_link);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_function_link);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '!') ADVANCE(298);
      if (lookahead == '*') ADVANCE(265);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(260);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_function_link);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '!') ADVANCE(298);
      if (lookahead == '*') ADVANCE(265);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(260);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_function_link);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '*') ADVANCE(265);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(298);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_function_link);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(299);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_function_link);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(35);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_function_link);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_ATcode);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_ATcode);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_ATendcode);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '!') ADVANCE(296);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == '*') ADVANCE(252);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(297);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == '*') ADVANCE(252);
      if (lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(297);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '!') ADVANCE(298);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == '*') ADVANCE(265);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == ':') ADVANCE(255);
      if (lookahead == '<') ADVANCE(275);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '!') ADVANCE(298);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == ':') ADVANCE(255);
      if (lookahead == '.' ||
          lookahead == '<') ADVANCE(275);
      if (lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '!') ADVANCE(298);
      if (lookahead == '*') ADVANCE(265);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == ':') ADVANCE(257);
      if (lookahead == '<') ADVANCE(275);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(299);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '!') ADVANCE(298);
      if (lookahead == '*') ADVANCE(265);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == '<') ADVANCE(275);
      if (lookahead == '~') ADVANCE(259);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '!') ADVANCE(298);
      if (lookahead == '*') ADVANCE(265);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == '<') ADVANCE(275);
      if (lookahead == '~') ADVANCE(258);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '!') ADVANCE(298);
      if (lookahead == '*') ADVANCE(265);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == '<') ADVANCE(275);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '!') ADVANCE(298);
      if (lookahead == '*') ADVANCE(265);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == '<') ADVANCE(275);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '!') ADVANCE(298);
      if (lookahead == '*') ADVANCE(265);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == '<') ADVANCE(275);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(299);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '!') ADVANCE(298);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '<') ADVANCE(275);
      if (lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(299);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '!') ADVANCE(298);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == ':') ADVANCE(256);
      if (lookahead == '.' ||
          lookahead == '<') ADVANCE(275);
      if (lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(299);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '!') ADVANCE(298);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '.' ||
          lookahead == '<') ADVANCE(275);
      if (lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '!') ADVANCE(298);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '.' ||
          lookahead == '<') ADVANCE(275);
      if (lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(299);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '*') ADVANCE(265);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '<') ADVANCE(304);
      if (lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(299);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '!') ADVANCE(301);
      if (lookahead == ')') ADVANCE(240);
      if (lookahead == '*') ADVANCE(267);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '/') ADVANCE(266);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(302);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == '*') ADVANCE(267);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '<') ADVANCE(296);
      if (lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(302);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(304);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == '*') ADVANCE(286);
      if (lookahead == '/') ADVANCE(275);
      if (lookahead == ':') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(275);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(304);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == '/') ADVANCE(279);
      if (lookahead == ':') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(275);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(304);
      if (lookahead == '*') ADVANCE(286);
      if (lookahead == '/') ADVANCE(275);
      if (lookahead == ':') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(275);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(304);
      if (lookahead == '*') ADVANCE(286);
      if (lookahead == '/') ADVANCE(275);
      if (lookahead == '~') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(275);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(304);
      if (lookahead == '*') ADVANCE(286);
      if (lookahead == '/') ADVANCE(275);
      if (lookahead == '~') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(275);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(304);
      if (lookahead == '*') ADVANCE(286);
      if (lookahead == '/') ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(275);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(304);
      if (lookahead == '*') ADVANCE(286);
      if (lookahead == '/') ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(304);
      if (lookahead == '*') ADVANCE(286);
      if (lookahead == '/') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(304);
      if (lookahead == '/') ADVANCE(279);
      if (lookahead == ':') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(275);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(304);
      if (lookahead == '/') ADVANCE(279);
      if (lookahead == ':') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(275);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(304);
      if (lookahead == '/') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(275);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(304);
      if (lookahead == '/') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(275);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '*') ADVANCE(287);
      if (lookahead == '/') ADVANCE(281);
      if (lookahead == '>') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '*') ADVANCE(287);
      if (lookahead == '/') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(281);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '/') ADVANCE(285);
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(281);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '/') ADVANCE(285);
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(281);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '/') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(281);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(304);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '*') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(34);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__begin);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '!') ADVANCE(291);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == '/') ADVANCE(289);
      if (lookahead == '<') ADVANCE(288);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '!') ADVANCE(291);
      if (lookahead == '*' ||
          lookahead == '/') ADVANCE(290);
      if (lookahead == '<') ADVANCE(288);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__begin);
      if (lookahead == '<') ADVANCE(288);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '!') ADVANCE(298);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != '<') ADVANCE(260);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '!') ADVANCE(291);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == '/') ADVANCE(289);
      if (lookahead == '<') ADVANCE(288);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == '*') ADVANCE(252);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(297);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '*') ADVANCE(265);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '<') ADVANCE(304);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(299);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '<') ADVANCE(311);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.' ||
          lookahead == '<') ADVANCE(311);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == '*') ADVANCE(267);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '<') ADVANCE(296);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(302);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '<') ADVANCE(297);
      if (lookahead != 0) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '(') ADVANCE(297);
      if (lookahead == ':') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '*') ADVANCE(286);
      if (lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == ':') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == ':') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '~') ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '~') ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__text_line);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__text_line);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 6, .external_lex_state = 2},
  [3] = {.lex_state = 23, .external_lex_state = 2},
  [4] = {.lex_state = 28, .external_lex_state = 2},
  [5] = {.lex_state = 9, .external_lex_state = 2},
  [6] = {.lex_state = 9, .external_lex_state = 2},
  [7] = {.lex_state = 9, .external_lex_state = 2},
  [8] = {.lex_state = 30, .external_lex_state = 2},
  [9] = {.lex_state = 9, .external_lex_state = 2},
  [10] = {.lex_state = 28, .external_lex_state = 2},
  [11] = {.lex_state = 28, .external_lex_state = 2},
  [12] = {.lex_state = 28, .external_lex_state = 2},
  [13] = {.lex_state = 28, .external_lex_state = 2},
  [14] = {.lex_state = 28, .external_lex_state = 2},
  [15] = {.lex_state = 11, .external_lex_state = 2},
  [16] = {.lex_state = 8, .external_lex_state = 2},
  [17] = {.lex_state = 14, .external_lex_state = 2},
  [18] = {.lex_state = 8, .external_lex_state = 2},
  [19] = {.lex_state = 11, .external_lex_state = 2},
  [20] = {.lex_state = 27, .external_lex_state = 2},
  [21] = {.lex_state = 27, .external_lex_state = 2},
  [22] = {.lex_state = 14, .external_lex_state = 2},
  [23] = {.lex_state = 9, .external_lex_state = 2},
  [24] = {.lex_state = 8, .external_lex_state = 2},
  [25] = {.lex_state = 8, .external_lex_state = 2},
  [26] = {.lex_state = 17, .external_lex_state = 2},
  [27] = {.lex_state = 27, .external_lex_state = 2},
  [28] = {.lex_state = 27, .external_lex_state = 2},
  [29] = {.lex_state = 9, .external_lex_state = 2},
  [30] = {.lex_state = 9, .external_lex_state = 2},
  [31] = {.lex_state = 9, .external_lex_state = 2},
  [32] = {.lex_state = 28, .external_lex_state = 2},
  [33] = {.lex_state = 19, .external_lex_state = 2},
  [34] = {.lex_state = 25, .external_lex_state = 2},
  [35] = {.lex_state = 25, .external_lex_state = 2},
  [36] = {.lex_state = 28, .external_lex_state = 2},
  [37] = {.lex_state = 28, .external_lex_state = 2},
  [38] = {.lex_state = 19, .external_lex_state = 2},
  [39] = {.lex_state = 28, .external_lex_state = 2},
  [40] = {.lex_state = 28, .external_lex_state = 2},
  [41] = {.lex_state = 19, .external_lex_state = 2},
  [42] = {.lex_state = 28, .external_lex_state = 2},
  [43] = {.lex_state = 19, .external_lex_state = 2},
  [44] = {.lex_state = 25, .external_lex_state = 2},
  [45] = {.lex_state = 28, .external_lex_state = 2},
  [46] = {.lex_state = 28, .external_lex_state = 2},
  [47] = {.lex_state = 19, .external_lex_state = 2},
  [48] = {.lex_state = 28, .external_lex_state = 2},
  [49] = {.lex_state = 19, .external_lex_state = 2},
  [50] = {.lex_state = 17, .external_lex_state = 2},
  [51] = {.lex_state = 25, .external_lex_state = 2},
  [52] = {.lex_state = 17, .external_lex_state = 2},
  [53] = {.lex_state = 25, .external_lex_state = 2},
  [54] = {.lex_state = 19, .external_lex_state = 2},
  [55] = {.lex_state = 19, .external_lex_state = 2},
  [56] = {.lex_state = 19, .external_lex_state = 2},
  [57] = {.lex_state = 19, .external_lex_state = 2},
  [58] = {.lex_state = 19, .external_lex_state = 2},
  [59] = {.lex_state = 19, .external_lex_state = 2},
  [60] = {.lex_state = 19, .external_lex_state = 2},
  [61] = {.lex_state = 19, .external_lex_state = 2},
  [62] = {.lex_state = 19, .external_lex_state = 2},
  [63] = {.lex_state = 19, .external_lex_state = 2},
  [64] = {.lex_state = 19, .external_lex_state = 2},
  [65] = {.lex_state = 19, .external_lex_state = 2},
  [66] = {.lex_state = 19, .external_lex_state = 2},
  [67] = {.lex_state = 19, .external_lex_state = 2},
  [68] = {.lex_state = 19, .external_lex_state = 2},
  [69] = {.lex_state = 19, .external_lex_state = 2},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 22},
  [74] = {.lex_state = 23},
  [75] = {.lex_state = 22},
  [76] = {.lex_state = 23},
  [77] = {.lex_state = 4, .external_lex_state = 3},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 0, .external_lex_state = 3},
  [90] = {.lex_state = 0, .external_lex_state = 3},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 231},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0, .external_lex_state = 4},
  [100] = {.lex_state = 131},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0, .external_lex_state = 5},
  [106] = {.lex_state = 0, .external_lex_state = 6},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 0, .external_lex_state = 6},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 235},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATbrief] = ACTIONS(1),
    [anon_sym_BSLASHbrief] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_tag_name_with_argument] = ACTIONS(1),
    [sym_tag_name_with_multiple_arguments] = ACTIONS(1),
    [sym_tag_name_with_types] = ACTIONS(1),
    [sym_tag_name_with_self_types] = ACTIONS(1),
    [sym_tag_name_with_type] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_inout] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BSLASHa] = ACTIONS(1),
    [anon_sym_BSLASHc] = ACTIONS(1),
    [anon_sym_LTa] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHa_GT] = ACTIONS(1),
    [sym_function_link] = ACTIONS(1),
    [anon_sym_ATcode] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_ATendcode] = ACTIONS(1),
    [sym__text] = ACTIONS(1),
    [sym__begin] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [sym__text_line] = ACTIONS(1),
    [sym_brief_description] = ACTIONS(1),
    [sym_code_block_start] = ACTIONS(1),
    [sym_code_block_language] = ACTIONS(1),
    [sym_code_block_content] = ACTIONS(1),
    [sym_code_block_end] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(85),
    [sym__begin] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(7), 1,
      aux_sym_brief_header_token1,
    ACTIONS(9), 1,
      sym_tag_name_with_argument,
    ACTIONS(11), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(13), 1,
      sym_tag_name_with_types,
    ACTIONS(15), 1,
      sym_tag_name_with_self_types,
    ACTIONS(17), 1,
      sym_tag_name_with_type,
    ACTIONS(19), 1,
      sym_tag_name,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_BSLASHc,
    ACTIONS(27), 1,
      anon_sym_LTa,
    ACTIONS(31), 1,
      anon_sym_ATcode,
    ACTIONS(35), 1,
      sym__text_line,
    ACTIONS(37), 1,
      sym_code_block_start,
    STATE(4), 1,
      sym_brief_header,
    STATE(11), 1,
      sym_storageclass,
    STATE(43), 1,
      sym_description,
    STATE(93), 1,
      sym__end,
    ACTIONS(5), 2,
      anon_sym_ATbrief,
      anon_sym_BSLASHbrief,
    ACTIONS(29), 2,
      sym_function_link,
      sym__text,
    ACTIONS(33), 2,
      anon_sym_SLASH,
      anon_sym_STAR_SLASH,
    STATE(38), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
    STATE(13), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
  [78] = 13,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_BSLASHc,
    ACTIONS(27), 1,
      anon_sym_LTa,
    ACTIONS(29), 1,
      sym__text,
    ACTIONS(41), 1,
      aux_sym_identifier_token1,
    ACTIONS(43), 1,
      anon_sym_TILDE,
    ACTIONS(47), 1,
      sym_function_link,
    STATE(17), 1,
      sym_identifier,
    STATE(61), 1,
      sym_description,
    ACTIONS(45), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(12), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
    STATE(13), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(39), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [133] = 22,
    ACTIONS(9), 1,
      sym_tag_name_with_argument,
    ACTIONS(11), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(13), 1,
      sym_tag_name_with_types,
    ACTIONS(15), 1,
      sym_tag_name_with_self_types,
    ACTIONS(17), 1,
      sym_tag_name_with_type,
    ACTIONS(19), 1,
      sym_tag_name,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_BSLASHc,
    ACTIONS(27), 1,
      anon_sym_LTa,
    ACTIONS(29), 1,
      sym__text,
    ACTIONS(31), 1,
      anon_sym_ATcode,
    ACTIONS(37), 1,
      sym_code_block_start,
    ACTIONS(47), 1,
      sym_function_link,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(51), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(53), 1,
      sym__text_line,
    STATE(11), 1,
      sym_storageclass,
    STATE(41), 1,
      sym_description,
    STATE(96), 1,
      sym__end,
    STATE(33), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
    STATE(13), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
  [205] = 11,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_BSLASHc,
    ACTIONS(27), 1,
      anon_sym_LTa,
    ACTIONS(29), 1,
      sym__text,
    ACTIONS(47), 1,
      sym_function_link,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_tag_repeat1,
    STATE(68), 1,
      sym_description,
    ACTIONS(59), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(13), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(57), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [252] = 11,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_BSLASHc,
    ACTIONS(27), 1,
      anon_sym_LTa,
    ACTIONS(29), 1,
      sym__text,
    ACTIONS(47), 1,
      sym_function_link,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym_tag_repeat1,
    STATE(68), 1,
      sym_description,
    ACTIONS(59), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(13), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(57), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [299] = 11,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_BSLASHc,
    ACTIONS(27), 1,
      anon_sym_LTa,
    ACTIONS(29), 1,
      sym__text,
    ACTIONS(47), 1,
      sym_function_link,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_tag_repeat1,
    STATE(56), 1,
      sym_description,
    ACTIONS(63), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(13), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(61), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [346] = 11,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_BSLASHc,
    ACTIONS(27), 1,
      anon_sym_LTa,
    ACTIONS(29), 1,
      sym__text,
    ACTIONS(47), 1,
      sym_function_link,
    ACTIONS(65), 1,
      aux_sym_identifier_token1,
    STATE(10), 1,
      sym_identifier,
    STATE(61), 1,
      sym_description,
    ACTIONS(45), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(13), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(39), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [393] = 11,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_BSLASHc,
    ACTIONS(27), 1,
      anon_sym_LTa,
    ACTIONS(29), 1,
      sym__text,
    ACTIONS(47), 1,
      sym_function_link,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      aux_sym_tag_repeat1,
    STATE(65), 1,
      sym_description,
    ACTIONS(69), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(13), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(67), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [440] = 9,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_BSLASHc,
    ACTIONS(27), 1,
      anon_sym_LTa,
    ACTIONS(29), 1,
      sym__text,
    ACTIONS(47), 1,
      sym_function_link,
    STATE(59), 1,
      sym_description,
    ACTIONS(73), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(13), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(71), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [481] = 9,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_BSLASHc,
    ACTIONS(27), 1,
      anon_sym_LTa,
    ACTIONS(29), 1,
      sym__text,
    ACTIONS(47), 1,
      sym_function_link,
    STATE(61), 1,
      sym_description,
    ACTIONS(45), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(13), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(39), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [522] = 9,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_BSLASHc,
    ACTIONS(27), 1,
      anon_sym_LTa,
    ACTIONS(29), 1,
      sym__text,
    ACTIONS(47), 1,
      sym_function_link,
    STATE(65), 1,
      sym_description,
    ACTIONS(69), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(13), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(67), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [563] = 8,
    ACTIONS(23), 1,
      anon_sym_BSLASHa,
    ACTIONS(25), 1,
      anon_sym_BSLASHc,
    ACTIONS(27), 1,
      anon_sym_LTa,
    ACTIONS(79), 1,
      sym_function_link,
    ACTIONS(81), 1,
      sym__text,
    ACTIONS(77), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(14), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(75), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [601] = 8,
    ACTIONS(87), 1,
      anon_sym_BSLASHa,
    ACTIONS(90), 1,
      anon_sym_BSLASHc,
    ACTIONS(93), 1,
      anon_sym_LTa,
    ACTIONS(96), 1,
      sym_function_link,
    ACTIONS(99), 1,
      sym__text,
    ACTIONS(85), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    STATE(14), 4,
      sym_emphasis,
      sym_code_word,
      sym_link,
      aux_sym_description_repeat1,
    ACTIONS(83), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [639] = 5,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(102), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(104), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [671] = 4,
    ACTIONS(114), 1,
      anon_sym_COLON_COLON,
    STATE(16), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(110), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(112), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [700] = 5,
    ACTIONS(117), 1,
      anon_sym_COLON_COLON,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(102), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(104), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [731] = 4,
    ACTIONS(106), 1,
      anon_sym_COLON_COLON,
    STATE(16), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(121), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(123), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [760] = 2,
    ACTIONS(125), 7,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(127), 13,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [785] = 4,
    ACTIONS(129), 1,
      anon_sym_COLON_COLON,
    STATE(20), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(110), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(112), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [813] = 4,
    ACTIONS(117), 1,
      anon_sym_COLON_COLON,
    STATE(20), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(121), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(123), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [841] = 2,
    ACTIONS(125), 6,
      sym_code_block_start,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(127), 13,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [865] = 4,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_tag_repeat1,
    ACTIONS(137), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(135), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [893] = 2,
    ACTIONS(125), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(127), 13,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [917] = 2,
    ACTIONS(110), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(112), 13,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [941] = 8,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      aux_sym_tag_token1,
    ACTIONS(145), 1,
      aux_sym_identifier_token1,
    ACTIONS(149), 1,
      sym_function_link,
    STATE(44), 1,
      aux_sym_tag_repeat2,
    STATE(54), 1,
      sym_identifier,
    ACTIONS(147), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(143), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [976] = 2,
    ACTIONS(125), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(127), 13,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [999] = 2,
    ACTIONS(110), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(112), 13,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_COLON_COLON,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1022] = 2,
    ACTIONS(137), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(135), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1045] = 2,
    ACTIONS(151), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(153), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1068] = 2,
    ACTIONS(155), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(157), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1091] = 2,
    ACTIONS(161), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(159), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1113] = 15,
    ACTIONS(9), 1,
      sym_tag_name_with_argument,
    ACTIONS(11), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(13), 1,
      sym_tag_name_with_types,
    ACTIONS(15), 1,
      sym_tag_name_with_self_types,
    ACTIONS(17), 1,
      sym_tag_name_with_type,
    ACTIONS(19), 1,
      sym_tag_name,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_ATcode,
    ACTIONS(37), 1,
      sym_code_block_start,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(165), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(167), 1,
      sym__text_line,
    STATE(11), 1,
      sym_storageclass,
    STATE(104), 1,
      sym__end,
    STATE(49), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
  [1161] = 7,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      aux_sym_identifier_token1,
    ACTIONS(173), 1,
      sym_function_link,
    STATE(51), 1,
      aux_sym_tag_repeat2,
    STATE(67), 1,
      sym_identifier,
    ACTIONS(171), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(169), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1193] = 7,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      aux_sym_identifier_token1,
    ACTIONS(179), 1,
      sym_function_link,
    STATE(34), 1,
      aux_sym_tag_repeat2,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(177), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(175), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1225] = 2,
    ACTIONS(183), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(181), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1247] = 2,
    ACTIONS(187), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(185), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1269] = 15,
    ACTIONS(9), 1,
      sym_tag_name_with_argument,
    ACTIONS(11), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(13), 1,
      sym_tag_name_with_types,
    ACTIONS(15), 1,
      sym_tag_name_with_self_types,
    ACTIONS(17), 1,
      sym_tag_name_with_type,
    ACTIONS(19), 1,
      sym_tag_name,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_ATcode,
    ACTIONS(37), 1,
      sym_code_block_start,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(51), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(167), 1,
      sym__text_line,
    STATE(11), 1,
      sym_storageclass,
    STATE(96), 1,
      sym__end,
    STATE(49), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
  [1317] = 2,
    ACTIONS(191), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(189), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1339] = 2,
    ACTIONS(125), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(127), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1361] = 15,
    ACTIONS(9), 1,
      sym_tag_name_with_argument,
    ACTIONS(11), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(13), 1,
      sym_tag_name_with_types,
    ACTIONS(15), 1,
      sym_tag_name_with_self_types,
    ACTIONS(17), 1,
      sym_tag_name_with_type,
    ACTIONS(19), 1,
      sym_tag_name,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_ATcode,
    ACTIONS(37), 1,
      sym_code_block_start,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(165), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(193), 1,
      sym__text_line,
    STATE(11), 1,
      sym_storageclass,
    STATE(104), 1,
      sym__end,
    STATE(47), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
  [1409] = 2,
    ACTIONS(155), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(157), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1431] = 15,
    ACTIONS(9), 1,
      sym_tag_name_with_argument,
    ACTIONS(11), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(13), 1,
      sym_tag_name_with_types,
    ACTIONS(15), 1,
      sym_tag_name_with_self_types,
    ACTIONS(17), 1,
      sym_tag_name_with_type,
    ACTIONS(19), 1,
      sym_tag_name,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_ATcode,
    ACTIONS(37), 1,
      sym_code_block_start,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(51), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(53), 1,
      sym__text_line,
    STATE(11), 1,
      sym_storageclass,
    STATE(96), 1,
      sym__end,
    STATE(33), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
  [1479] = 7,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      aux_sym_identifier_token1,
    ACTIONS(199), 1,
      sym_function_link,
    STATE(51), 1,
      aux_sym_tag_repeat2,
    STATE(57), 1,
      sym_identifier,
    ACTIONS(197), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(195), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1511] = 2,
    ACTIONS(203), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(201), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1533] = 2,
    ACTIONS(151), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(153), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1555] = 15,
    ACTIONS(9), 1,
      sym_tag_name_with_argument,
    ACTIONS(11), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(13), 1,
      sym_tag_name_with_types,
    ACTIONS(15), 1,
      sym_tag_name_with_self_types,
    ACTIONS(17), 1,
      sym_tag_name_with_type,
    ACTIONS(19), 1,
      sym_tag_name,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_ATcode,
    ACTIONS(37), 1,
      sym_code_block_start,
    ACTIONS(167), 1,
      sym__text_line,
    ACTIONS(205), 1,
      anon_sym_SLASH,
    ACTIONS(207), 1,
      anon_sym_STAR_SLASH,
    STATE(11), 1,
      sym_storageclass,
    STATE(98), 1,
      sym__end,
    STATE(49), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
  [1603] = 2,
    ACTIONS(211), 5,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_LTa,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(209), 12,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_BSLASHa,
      anon_sym_BSLASHc,
      anon_sym_ATcode,
      sym__text,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1625] = 14,
    ACTIONS(213), 1,
      sym_tag_name_with_argument,
    ACTIONS(216), 1,
      sym_tag_name_with_multiple_arguments,
    ACTIONS(219), 1,
      sym_tag_name_with_types,
    ACTIONS(222), 1,
      sym_tag_name_with_self_types,
    ACTIONS(225), 1,
      sym_tag_name_with_type,
    ACTIONS(228), 1,
      sym_tag_name,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      anon_sym_ATcode,
    ACTIONS(237), 1,
      anon_sym_SLASH,
    ACTIONS(239), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(241), 1,
      sym__text_line,
    ACTIONS(244), 1,
      sym_code_block_start,
    STATE(11), 1,
      sym_storageclass,
    STATE(49), 3,
      sym_tag,
      sym_code_block,
      aux_sym_document_repeat1,
  [1670] = 2,
    ACTIONS(125), 6,
      sym_code_block_start,
      anon_sym_COMMA,
      aux_sym_tag_token1,
      anon_sym_LBRACK,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(127), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      aux_sym_identifier_token1,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1691] = 4,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_tag_repeat2,
    ACTIONS(252), 4,
      sym_code_block_start,
      anon_sym_LBRACK,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(250), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      aux_sym_identifier_token1,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1716] = 3,
    ACTIONS(256), 1,
      aux_sym_tag_token1,
    ACTIONS(254), 5,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(258), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      aux_sym_identifier_token1,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1739] = 2,
    ACTIONS(260), 5,
      sym_code_block_start,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      sym_function_link,
      anon_sym_SLASH,
    ACTIONS(262), 10,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      aux_sym_identifier_token1,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1759] = 2,
    ACTIONS(266), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(264), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1776] = 2,
    ACTIONS(270), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(268), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1793] = 2,
    ACTIONS(274), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(272), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1810] = 2,
    ACTIONS(278), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(276), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1827] = 2,
    ACTIONS(278), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(276), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1844] = 2,
    ACTIONS(282), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(280), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1861] = 2,
    ACTIONS(73), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(71), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1878] = 2,
    ACTIONS(69), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(67), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1895] = 2,
    ACTIONS(286), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(284), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1912] = 2,
    ACTIONS(125), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(127), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1929] = 2,
    ACTIONS(290), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(288), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1946] = 2,
    ACTIONS(59), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(57), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1963] = 2,
    ACTIONS(294), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(292), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1980] = 2,
    ACTIONS(290), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(288), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [1997] = 2,
    ACTIONS(63), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(61), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [2014] = 2,
    ACTIONS(298), 3,
      sym_code_block_start,
      anon_sym_LBRACK,
      anon_sym_SLASH,
    ACTIONS(296), 9,
      sym_tag_name_with_argument,
      sym_tag_name_with_multiple_arguments,
      sym_tag_name_with_types,
      sym_tag_name_with_self_types,
      sym_tag_name_with_type,
      sym_tag_name,
      anon_sym_ATcode,
      anon_sym_STAR_SLASH,
      sym__text_line,
  [2031] = 6,
    ACTIONS(300), 1,
      aux_sym_identifier_token1,
    ACTIONS(302), 1,
      anon_sym_TILDE,
    ACTIONS(304), 1,
      anon_sym_LBRACK,
    STATE(15), 1,
      sym_identifier,
    STATE(72), 1,
      sym_storageclass,
    STATE(9), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
  [2052] = 4,
    ACTIONS(300), 1,
      aux_sym_identifier_token1,
    ACTIONS(302), 1,
      anon_sym_TILDE,
    STATE(15), 1,
      sym_identifier,
    STATE(29), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
  [2067] = 4,
    ACTIONS(300), 1,
      aux_sym_identifier_token1,
    ACTIONS(302), 1,
      anon_sym_TILDE,
    STATE(15), 1,
      sym_identifier,
    STATE(6), 3,
      sym__expression,
      sym_qualified_identifier,
      sym_function,
  [2082] = 2,
    ACTIONS(306), 1,
      anon_sym_in,
    ACTIONS(308), 2,
      anon_sym_out,
      anon_sym_inout,
  [2090] = 3,
    ACTIONS(310), 1,
      aux_sym_identifier_token1,
    ACTIONS(312), 1,
      sym_function_link,
    STATE(26), 1,
      sym_identifier,
  [2100] = 2,
    ACTIONS(314), 1,
      anon_sym_in,
    ACTIONS(316), 2,
      anon_sym_out,
      anon_sym_inout,
  [2108] = 3,
    ACTIONS(310), 1,
      aux_sym_identifier_token1,
    ACTIONS(318), 1,
      sym_function_link,
    STATE(52), 1,
      sym_identifier,
  [2118] = 2,
    ACTIONS(320), 1,
      anon_sym_LBRACE,
    ACTIONS(322), 1,
      sym_code_block_content,
  [2125] = 1,
    ACTIONS(211), 2,
      aux_sym_identifier_token1,
      anon_sym_TILDE,
  [2130] = 2,
    ACTIONS(324), 1,
      aux_sym_identifier_token1,
    STATE(101), 1,
      sym_identifier,
  [2137] = 2,
    ACTIONS(326), 1,
      aux_sym_identifier_token1,
    STATE(25), 1,
      sym_identifier,
  [2144] = 2,
    ACTIONS(328), 1,
      aux_sym_identifier_token1,
    STATE(28), 1,
      sym_identifier,
  [2151] = 2,
    ACTIONS(324), 1,
      aux_sym_identifier_token1,
    STATE(112), 1,
      sym_identifier,
  [2158] = 1,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
  [2162] = 1,
    ACTIONS(332), 1,
      aux_sym_identifier_token1,
  [2166] = 1,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
  [2170] = 1,
    ACTIONS(336), 1,
      anon_sym_LT_SLASHa_GT,
  [2174] = 1,
    ACTIONS(338), 1,
      anon_sym_RBRACK,
  [2178] = 1,
    ACTIONS(340), 1,
      anon_sym_GT,
  [2182] = 1,
    ACTIONS(342), 1,
      sym_code_block_content,
  [2186] = 1,
    ACTIONS(344), 1,
      sym_code_block_content,
  [2190] = 1,
    ACTIONS(346), 1,
      anon_sym_ATendcode,
  [2194] = 1,
    ACTIONS(348), 1,
      anon_sym_ATendcode,
  [2198] = 1,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
  [2202] = 1,
    ACTIONS(352), 1,
      anon_sym_DOT,
  [2206] = 1,
    ACTIONS(354), 1,
      aux_sym_link_token1,
  [2210] = 1,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
  [2214] = 1,
    ACTIONS(358), 1,
      aux_sym_identifier_token1,
  [2218] = 1,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
  [2222] = 1,
    ACTIONS(362), 1,
      sym_code_block_end,
  [2226] = 1,
    ACTIONS(364), 1,
      aux_sym_tag_token2,
  [2230] = 1,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
  [2234] = 1,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
  [2238] = 1,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
  [2242] = 1,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
  [2246] = 1,
    ACTIONS(372), 1,
      sym_brief_description,
  [2250] = 1,
    ACTIONS(374), 1,
      sym_code_block_language,
  [2254] = 1,
    ACTIONS(376), 1,
      anon_sym_RBRACK,
  [2258] = 1,
    ACTIONS(378), 1,
      sym_code_block_language,
  [2262] = 1,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
  [2266] = 1,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
  [2270] = 1,
    ACTIONS(384), 1,
      aux_sym_link_token2,
  [2274] = 1,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
  [2278] = 1,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 78,
  [SMALL_STATE(4)] = 133,
  [SMALL_STATE(5)] = 205,
  [SMALL_STATE(6)] = 252,
  [SMALL_STATE(7)] = 299,
  [SMALL_STATE(8)] = 346,
  [SMALL_STATE(9)] = 393,
  [SMALL_STATE(10)] = 440,
  [SMALL_STATE(11)] = 481,
  [SMALL_STATE(12)] = 522,
  [SMALL_STATE(13)] = 563,
  [SMALL_STATE(14)] = 601,
  [SMALL_STATE(15)] = 639,
  [SMALL_STATE(16)] = 671,
  [SMALL_STATE(17)] = 700,
  [SMALL_STATE(18)] = 731,
  [SMALL_STATE(19)] = 760,
  [SMALL_STATE(20)] = 785,
  [SMALL_STATE(21)] = 813,
  [SMALL_STATE(22)] = 841,
  [SMALL_STATE(23)] = 865,
  [SMALL_STATE(24)] = 893,
  [SMALL_STATE(25)] = 917,
  [SMALL_STATE(26)] = 941,
  [SMALL_STATE(27)] = 976,
  [SMALL_STATE(28)] = 999,
  [SMALL_STATE(29)] = 1022,
  [SMALL_STATE(30)] = 1045,
  [SMALL_STATE(31)] = 1068,
  [SMALL_STATE(32)] = 1091,
  [SMALL_STATE(33)] = 1113,
  [SMALL_STATE(34)] = 1161,
  [SMALL_STATE(35)] = 1193,
  [SMALL_STATE(36)] = 1225,
  [SMALL_STATE(37)] = 1247,
  [SMALL_STATE(38)] = 1269,
  [SMALL_STATE(39)] = 1317,
  [SMALL_STATE(40)] = 1339,
  [SMALL_STATE(41)] = 1361,
  [SMALL_STATE(42)] = 1409,
  [SMALL_STATE(43)] = 1431,
  [SMALL_STATE(44)] = 1479,
  [SMALL_STATE(45)] = 1511,
  [SMALL_STATE(46)] = 1533,
  [SMALL_STATE(47)] = 1555,
  [SMALL_STATE(48)] = 1603,
  [SMALL_STATE(49)] = 1625,
  [SMALL_STATE(50)] = 1670,
  [SMALL_STATE(51)] = 1691,
  [SMALL_STATE(52)] = 1716,
  [SMALL_STATE(53)] = 1739,
  [SMALL_STATE(54)] = 1759,
  [SMALL_STATE(55)] = 1776,
  [SMALL_STATE(56)] = 1793,
  [SMALL_STATE(57)] = 1810,
  [SMALL_STATE(58)] = 1827,
  [SMALL_STATE(59)] = 1844,
  [SMALL_STATE(60)] = 1861,
  [SMALL_STATE(61)] = 1878,
  [SMALL_STATE(62)] = 1895,
  [SMALL_STATE(63)] = 1912,
  [SMALL_STATE(64)] = 1929,
  [SMALL_STATE(65)] = 1946,
  [SMALL_STATE(66)] = 1963,
  [SMALL_STATE(67)] = 1980,
  [SMALL_STATE(68)] = 1997,
  [SMALL_STATE(69)] = 2014,
  [SMALL_STATE(70)] = 2031,
  [SMALL_STATE(71)] = 2052,
  [SMALL_STATE(72)] = 2067,
  [SMALL_STATE(73)] = 2082,
  [SMALL_STATE(74)] = 2090,
  [SMALL_STATE(75)] = 2100,
  [SMALL_STATE(76)] = 2108,
  [SMALL_STATE(77)] = 2118,
  [SMALL_STATE(78)] = 2125,
  [SMALL_STATE(79)] = 2130,
  [SMALL_STATE(80)] = 2137,
  [SMALL_STATE(81)] = 2144,
  [SMALL_STATE(82)] = 2151,
  [SMALL_STATE(83)] = 2158,
  [SMALL_STATE(84)] = 2162,
  [SMALL_STATE(85)] = 2166,
  [SMALL_STATE(86)] = 2170,
  [SMALL_STATE(87)] = 2174,
  [SMALL_STATE(88)] = 2178,
  [SMALL_STATE(89)] = 2182,
  [SMALL_STATE(90)] = 2186,
  [SMALL_STATE(91)] = 2190,
  [SMALL_STATE(92)] = 2194,
  [SMALL_STATE(93)] = 2198,
  [SMALL_STATE(94)] = 2202,
  [SMALL_STATE(95)] = 2206,
  [SMALL_STATE(96)] = 2210,
  [SMALL_STATE(97)] = 2214,
  [SMALL_STATE(98)] = 2218,
  [SMALL_STATE(99)] = 2222,
  [SMALL_STATE(100)] = 2226,
  [SMALL_STATE(101)] = 2230,
  [SMALL_STATE(102)] = 2234,
  [SMALL_STATE(103)] = 2238,
  [SMALL_STATE(104)] = 2242,
  [SMALL_STATE(105)] = 2246,
  [SMALL_STATE(106)] = 2250,
  [SMALL_STATE(107)] = 2254,
  [SMALL_STATE(108)] = 2258,
  [SMALL_STATE(109)] = 2262,
  [SMALL_STATE(110)] = 2266,
  [SMALL_STATE(111)] = 2270,
  [SMALL_STATE(112)] = 2274,
  [SMALL_STATE(113)] = 2278,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2, .production_id = 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2, .production_id = 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(84),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(97),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(95),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(14),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(14),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2), SHIFT_REPEAT(80),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2), SHIFT_REPEAT(81),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(71),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_word, 2, .production_id = 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_word, 2, .production_id = 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, .production_id = 8),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, .production_id = 8),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emphasis, 2, .production_id = 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emphasis, 2, .production_id = 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 5),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 5),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brief_header, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brief_header, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 6),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 6),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brief_header, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brief_header, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_storageclass, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storageclass, 3),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(70),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(74),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(100),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(73),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(77),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(49),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(106),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat2, 2, .production_id = 10), SHIFT_REPEAT(76),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat2, 2, .production_id = 10),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat2, 2, .production_id = 10),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat2, 2, .production_id = 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat2, 2, .production_id = 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat2, 3, .production_id = 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat2, 3, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 5),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 5),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, .production_id = 7),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, .production_id = 7),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, .production_id = 9),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, .production_id = 9),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5, .production_id = 11),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5, .production_id = 11),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 4),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 7),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 7),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [334] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_brief_description = 0,
  ts_external_token_code_block_start = 1,
  ts_external_token_code_block_language = 2,
  ts_external_token_code_block_content = 3,
  ts_external_token_code_block_end = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_brief_description] = sym_brief_description,
  [ts_external_token_code_block_start] = sym_code_block_start,
  [ts_external_token_code_block_language] = sym_code_block_language,
  [ts_external_token_code_block_content] = sym_code_block_content,
  [ts_external_token_code_block_end] = sym_code_block_end,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_brief_description] = true,
    [ts_external_token_code_block_start] = true,
    [ts_external_token_code_block_language] = true,
    [ts_external_token_code_block_content] = true,
    [ts_external_token_code_block_end] = true,
  },
  [2] = {
    [ts_external_token_code_block_start] = true,
  },
  [3] = {
    [ts_external_token_code_block_content] = true,
  },
  [4] = {
    [ts_external_token_code_block_end] = true,
  },
  [5] = {
    [ts_external_token_brief_description] = true,
  },
  [6] = {
    [ts_external_token_code_block_language] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_doxygen_external_scanner_create(void);
void tree_sitter_doxygen_external_scanner_destroy(void *);
bool tree_sitter_doxygen_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_doxygen_external_scanner_serialize(void *, char *);
void tree_sitter_doxygen_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_doxygen() {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_doxygen_external_scanner_create,
      tree_sitter_doxygen_external_scanner_destroy,
      tree_sitter_doxygen_external_scanner_scan,
      tree_sitter_doxygen_external_scanner_serialize,
      tree_sitter_doxygen_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

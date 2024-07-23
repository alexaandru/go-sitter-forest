#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 156
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  sym__word = 1,
  anon_sym_IMPORTABLE = 2,
  anon_sym_EXTERNPROTO = 3,
  anon_sym_PROTO = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_PERCENT_LT = 9,
  anon_sym_GT_PERCENT = 10,
  anon_sym_PERCENT_LT_EQ = 11,
  sym_comment = 12,
  anon_sym_hidden = 13,
  sym_null = 14,
  anon_sym_TRUE = 15,
  anon_sym_FALSE = 16,
  sym_number = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_string_token1 = 19,
  anon_sym_USE = 20,
  anon_sym_DEF = 21,
  anon_sym_COMMA = 22,
  anon_sym_field = 23,
  anon_sym_unconnectedField = 24,
  anon_sym_vrmlField = 25,
  anon_sym_hiddenField = 26,
  anon_sym_w3dField = 27,
  anon_sym_deprecatedField = 28,
  anon_sym_exposedField = 29,
  anon_sym_MFBool = 30,
  anon_sym_MFColor = 31,
  anon_sym_MFFloat = 32,
  anon_sym_MFInt32 = 33,
  anon_sym_MFNode = 34,
  anon_sym_MFRotation = 35,
  anon_sym_MFString = 36,
  anon_sym_MFVec2f = 37,
  anon_sym_MFVec3f = 38,
  anon_sym_SFBool = 39,
  anon_sym_SFColor = 40,
  anon_sym_SFFloat = 41,
  anon_sym_SFInt32 = 42,
  anon_sym_SFNode = 43,
  anon_sym_SFRotation = 44,
  anon_sym_SFString = 45,
  anon_sym_SFVec2f = 46,
  anon_sym_SFVec3f = 47,
  anon_sym_IS = 48,
  sym__text_fragment = 49,
  sym_error_sentinel = 50,
  sym_source_file = 51,
  sym_extern = 52,
  sym_proto = 53,
  sym_javascript_block = 54,
  sym_javascript_expression = 55,
  sym_identifier = 56,
  sym_property = 57,
  sym_boolean = 58,
  sym_string = 59,
  sym_node = 60,
  aux_sym__MFBool = 61,
  aux_sym__MFNumber = 62,
  aux_sym__MFString = 63,
  aux_sym__MFNode = 64,
  sym_vector = 65,
  sym_vecf = 66,
  sym__fieldDecl = 67,
  sym__fieldType = 68,
  sym__fieldValue = 69,
  sym_field = 70,
  sym__value = 71,
  aux_sym_source_file_repeat1 = 72,
  aux_sym_source_file_repeat2 = 73,
  aux_sym_extern_repeat1 = 74,
  aux_sym_proto_repeat1 = 75,
  aux_sym_node_repeat1 = 76,
  aux_sym_vecf_repeat1 = 77,
  aux_sym__fieldType_repeat1 = 78,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "_word",
  [anon_sym_IMPORTABLE] = "IMPORTABLE",
  [anon_sym_EXTERNPROTO] = "EXTERNPROTO",
  [anon_sym_PROTO] = "PROTO",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PERCENT_LT] = "%<",
  [anon_sym_GT_PERCENT] = ">%",
  [anon_sym_PERCENT_LT_EQ] = "%<=",
  [sym_comment] = "comment",
  [anon_sym_hidden] = "hidden",
  [sym_null] = "null",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_FALSE] = "FALSE",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_USE] = "USE",
  [anon_sym_DEF] = "DEF",
  [anon_sym_COMMA] = ",",
  [anon_sym_field] = "field",
  [anon_sym_unconnectedField] = "unconnectedField",
  [anon_sym_vrmlField] = "vrmlField",
  [anon_sym_hiddenField] = "hiddenField",
  [anon_sym_w3dField] = "w3dField",
  [anon_sym_deprecatedField] = "deprecatedField",
  [anon_sym_exposedField] = "exposedField",
  [anon_sym_MFBool] = "identifier",
  [anon_sym_MFColor] = "identifier",
  [anon_sym_MFFloat] = "identifier",
  [anon_sym_MFInt32] = "identifier",
  [anon_sym_MFNode] = "identifier",
  [anon_sym_MFRotation] = "identifier",
  [anon_sym_MFString] = "identifier",
  [anon_sym_MFVec2f] = "identifier",
  [anon_sym_MFVec3f] = "identifier",
  [anon_sym_SFBool] = "identifier",
  [anon_sym_SFColor] = "identifier",
  [anon_sym_SFFloat] = "identifier",
  [anon_sym_SFInt32] = "identifier",
  [anon_sym_SFNode] = "identifier",
  [anon_sym_SFRotation] = "identifier",
  [anon_sym_SFString] = "identifier",
  [anon_sym_SFVec2f] = "identifier",
  [anon_sym_SFVec3f] = "identifier",
  [anon_sym_IS] = "IS",
  [sym__text_fragment] = "code",
  [sym_error_sentinel] = "error_sentinel",
  [sym_source_file] = "source_file",
  [sym_extern] = "extern",
  [sym_proto] = "proto",
  [sym_javascript_block] = "javascript_block",
  [sym_javascript_expression] = "javascript_expression",
  [sym_identifier] = "identifier",
  [sym_property] = "property",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [sym_node] = "node",
  [aux_sym__MFBool] = "_MFBool",
  [aux_sym__MFNumber] = "_MFNumber",
  [aux_sym__MFString] = "_MFString",
  [aux_sym__MFNode] = "_MFNode",
  [sym_vector] = "vector",
  [sym_vecf] = "vector",
  [sym__fieldDecl] = "identifier",
  [sym__fieldType] = "type",
  [sym__fieldValue] = "_fieldValue",
  [sym_field] = "field",
  [sym__value] = "_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_extern_repeat1] = "extern_repeat1",
  [aux_sym_proto_repeat1] = "proto_repeat1",
  [aux_sym_node_repeat1] = "node_repeat1",
  [aux_sym_vecf_repeat1] = "vecf_repeat1",
  [aux_sym__fieldType_repeat1] = "_fieldType_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__word] = sym__word,
  [anon_sym_IMPORTABLE] = anon_sym_IMPORTABLE,
  [anon_sym_EXTERNPROTO] = anon_sym_EXTERNPROTO,
  [anon_sym_PROTO] = anon_sym_PROTO,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PERCENT_LT] = anon_sym_PERCENT_LT,
  [anon_sym_GT_PERCENT] = anon_sym_GT_PERCENT,
  [anon_sym_PERCENT_LT_EQ] = anon_sym_PERCENT_LT_EQ,
  [sym_comment] = sym_comment,
  [anon_sym_hidden] = anon_sym_hidden,
  [sym_null] = sym_null,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_USE] = anon_sym_USE,
  [anon_sym_DEF] = anon_sym_DEF,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_field] = anon_sym_field,
  [anon_sym_unconnectedField] = anon_sym_unconnectedField,
  [anon_sym_vrmlField] = anon_sym_vrmlField,
  [anon_sym_hiddenField] = anon_sym_hiddenField,
  [anon_sym_w3dField] = anon_sym_w3dField,
  [anon_sym_deprecatedField] = anon_sym_deprecatedField,
  [anon_sym_exposedField] = anon_sym_exposedField,
  [anon_sym_MFBool] = sym_identifier,
  [anon_sym_MFColor] = sym_identifier,
  [anon_sym_MFFloat] = sym_identifier,
  [anon_sym_MFInt32] = sym_identifier,
  [anon_sym_MFNode] = sym_identifier,
  [anon_sym_MFRotation] = sym_identifier,
  [anon_sym_MFString] = sym_identifier,
  [anon_sym_MFVec2f] = sym_identifier,
  [anon_sym_MFVec3f] = sym_identifier,
  [anon_sym_SFBool] = sym_identifier,
  [anon_sym_SFColor] = sym_identifier,
  [anon_sym_SFFloat] = sym_identifier,
  [anon_sym_SFInt32] = sym_identifier,
  [anon_sym_SFNode] = sym_identifier,
  [anon_sym_SFRotation] = sym_identifier,
  [anon_sym_SFString] = sym_identifier,
  [anon_sym_SFVec2f] = sym_identifier,
  [anon_sym_SFVec3f] = sym_identifier,
  [anon_sym_IS] = anon_sym_IS,
  [sym__text_fragment] = sym__text_fragment,
  [sym_error_sentinel] = sym_error_sentinel,
  [sym_source_file] = sym_source_file,
  [sym_extern] = sym_extern,
  [sym_proto] = sym_proto,
  [sym_javascript_block] = sym_javascript_block,
  [sym_javascript_expression] = sym_javascript_expression,
  [sym_identifier] = sym_identifier,
  [sym_property] = sym_property,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [sym_node] = sym_node,
  [aux_sym__MFBool] = aux_sym__MFBool,
  [aux_sym__MFNumber] = aux_sym__MFNumber,
  [aux_sym__MFString] = aux_sym__MFString,
  [aux_sym__MFNode] = aux_sym__MFNode,
  [sym_vector] = sym_vector,
  [sym_vecf] = sym_vector,
  [sym__fieldDecl] = sym_identifier,
  [sym__fieldType] = sym__fieldType,
  [sym__fieldValue] = sym__fieldValue,
  [sym_field] = sym_field,
  [sym__value] = sym__value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_extern_repeat1] = aux_sym_extern_repeat1,
  [aux_sym_proto_repeat1] = aux_sym_proto_repeat1,
  [aux_sym_node_repeat1] = aux_sym_node_repeat1,
  [aux_sym_vecf_repeat1] = aux_sym_vecf_repeat1,
  [aux_sym__fieldType_repeat1] = aux_sym__fieldType_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_IMPORTABLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXTERNPROTO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROTO] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_hidden] = {
    .visible = true,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_USE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unconnectedField] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vrmlField] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hiddenField] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_w3dField] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deprecatedField] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exposedField] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MFBool] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MFColor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MFFloat] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MFInt32] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MFNode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MFRotation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MFString] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MFVec2f] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MFVec3f] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SFBool] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SFColor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SFFloat] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SFInt32] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SFNode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SFRotation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SFString] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SFVec2f] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SFVec3f] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_IS] = {
    .visible = true,
    .named = false,
  },
  [sym__text_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_error_sentinel] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_extern] = {
    .visible = true,
    .named = true,
  },
  [sym_proto] = {
    .visible = true,
    .named = true,
  },
  [sym_javascript_block] = {
    .visible = true,
    .named = true,
  },
  [sym_javascript_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__MFBool] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__MFNumber] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__MFString] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__MFNode] = {
    .visible = false,
    .named = false,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_vecf] = {
    .visible = true,
    .named = true,
  },
  [sym__fieldDecl] = {
    .visible = true,
    .named = true,
  },
  [sym__fieldType] = {
    .visible = true,
    .named = true,
  },
  [sym__fieldValue] = {
    .visible = false,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_extern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proto_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_vecf_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__fieldType_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_proto = 2,
  field_string_content = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_proto] = "proto",
  [field_string_content] = "string_content",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_string_content, 1},
  [1] =
    {field_proto, 1},
  [2] =
    {field_name, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_identifier,
  },
  [3] = {
    [1] = sym_identifier,
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
  [6] = 5,
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
  [18] = 14,
  [19] = 19,
  [20] = 15,
  [21] = 19,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 23,
  [29] = 29,
  [30] = 26,
  [31] = 31,
  [32] = 27,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 36,
  [37] = 16,
  [38] = 38,
  [39] = 24,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 14,
  [46] = 46,
  [47] = 42,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 40,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 17,
  [61] = 59,
  [62] = 62,
  [63] = 63,
  [64] = 31,
  [65] = 12,
  [66] = 22,
  [67] = 67,
  [68] = 68,
  [69] = 24,
  [70] = 29,
  [71] = 67,
  [72] = 72,
  [73] = 25,
  [74] = 74,
  [75] = 58,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 80,
  [83] = 76,
  [84] = 78,
  [85] = 76,
  [86] = 86,
  [87] = 87,
  [88] = 81,
  [89] = 87,
  [90] = 81,
  [91] = 87,
  [92] = 80,
  [93] = 77,
  [94] = 58,
  [95] = 23,
  [96] = 15,
  [97] = 26,
  [98] = 27,
  [99] = 33,
  [100] = 19,
  [101] = 101,
  [102] = 31,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 107,
  [109] = 106,
  [110] = 110,
  [111] = 110,
  [112] = 12,
  [113] = 107,
  [114] = 114,
  [115] = 110,
  [116] = 116,
  [117] = 106,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 123,
  [132] = 124,
  [133] = 133,
  [134] = 134,
  [135] = 123,
  [136] = 124,
  [137] = 137,
  [138] = 138,
  [139] = 125,
  [140] = 140,
  [141] = 141,
  [142] = 134,
  [143] = 133,
  [144] = 129,
  [145] = 138,
  [146] = 140,
  [147] = 134,
  [148] = 133,
  [149] = 129,
  [150] = 138,
  [151] = 140,
  [152] = 125,
  [153] = 153,
  [154] = 154,
  [155] = 155,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '>') ADVANCE(1);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(11);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == '<') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_PERCENT_LT);
      if (lookahead == '=') ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_GT_PERCENT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PERCENT_LT_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i' ||
          lookahead == 'j') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i' ||
          lookahead == 'j') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i' ||
          lookahead == 'j') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == ',') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(24);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'D') ADVANCE(1);
      if (lookahead == 'E') ADVANCE(2);
      if (lookahead == 'F') ADVANCE(3);
      if (lookahead == 'I') ADVANCE(4);
      if (lookahead == 'M') ADVANCE(5);
      if (lookahead == 'N') ADVANCE(6);
      if (lookahead == 'P') ADVANCE(7);
      if (lookahead == 'S') ADVANCE(8);
      if (lookahead == 'T') ADVANCE(9);
      if (lookahead == 'U') ADVANCE(10);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'h') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'E') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == 'X') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'M') ADVANCE(21);
      if (lookahead == 'S') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'F') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'U') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'F') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'R') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'S') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'x') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == '3') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'F') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'P') ADVANCE(39);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_IS);
      END_STATE();
    case 23:
      if (lookahead == 'B') ADVANCE(40);
      if (lookahead == 'C') ADVANCE(41);
      if (lookahead == 'F') ADVANCE(42);
      if (lookahead == 'I') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == 'R') ADVANCE(45);
      if (lookahead == 'S') ADVANCE(46);
      if (lookahead == 'V') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == 'L') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'O') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == 'B') ADVANCE(50);
      if (lookahead == 'C') ADVANCE(51);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'I') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(54);
      if (lookahead == 'R') ADVANCE(55);
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == 'V') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 'U') ADVANCE(58);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DEF);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(67);
      END_STATE();
    case 38:
      if (lookahead == 'S') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'O') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 48:
      if (lookahead == 'L') ADVANCE(78);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(79);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(88);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_USE);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 66:
      if (lookahead == 'F') ADVANCE(95);
      END_STATE();
    case 67:
      if (lookahead == 'R') ADVANCE(96);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(97);
      END_STATE();
    case 69:
      if (lookahead == 'R') ADVANCE(98);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 79:
      if (lookahead == 'O') ADVANCE(107);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 94:
      if (lookahead == 'F') ADVANCE(121);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(123);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 98:
      if (lookahead == 'T') ADVANCE(124);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 102:
      if (lookahead == '3') ADVANCE(128);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 106:
      if (lookahead == '2') ADVANCE(132);
      if (lookahead == '3') ADVANCE(133);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PROTO);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 111:
      if (lookahead == '3') ADVANCE(137);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 115:
      if (lookahead == '2') ADVANCE(141);
      if (lookahead == '3') ADVANCE(142);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 123:
      if (lookahead == 'P') ADVANCE(149);
      END_STATE();
    case 124:
      if (lookahead == 'A') ADVANCE(150);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_MFBool);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 128:
      if (lookahead == '2') ADVANCE(153);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_MFNode);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 132:
      if (lookahead == 'f') ADVANCE(156);
      END_STATE();
    case 133:
      if (lookahead == 'f') ADVANCE(157);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_SFBool);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 137:
      if (lookahead == '2') ADVANCE(160);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SFNode);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 141:
      if (lookahead == 'f') ADVANCE(163);
      END_STATE();
    case 142:
      if (lookahead == 'f') ADVANCE(164);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (lookahead == 'F') ADVANCE(167);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 149:
      if (lookahead == 'R') ADVANCE(171);
      END_STATE();
    case 150:
      if (lookahead == 'B') ADVANCE(172);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_MFColor);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_MFFloat);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_MFInt32);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 155:
      if (lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_MFVec2f);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_MFVec3f);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_SFColor);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_SFFloat);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_SFInt32);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 162:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_SFVec2f);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_SFVec3f);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 166:
      if (lookahead == 'F') ADVANCE(178);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 171:
      if (lookahead == 'O') ADVANCE(183);
      END_STATE();
    case 172:
      if (lookahead == 'L') ADVANCE(184);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_MFString);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_SFString);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_w3dField);
      END_STATE();
    case 183:
      if (lookahead == 'T') ADVANCE(192);
      END_STATE();
    case 184:
      if (lookahead == 'E') ADVANCE(193);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_vrmlField);
      END_STATE();
    case 192:
      if (lookahead == 'O') ADVANCE(200);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_IMPORTABLE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_MFRotation);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_SFRotation);
      END_STATE();
    case 196:
      if (lookahead == 'F') ADVANCE(201);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_EXTERNPROTO);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_hiddenField);
      END_STATE();
    case 204:
      if (lookahead == 'F') ADVANCE(207);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_exposedField);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_deprecatedField);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_unconnectedField);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
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
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 23},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 23},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 23},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [anon_sym_IMPORTABLE] = ACTIONS(1),
    [anon_sym_EXTERNPROTO] = ACTIONS(1),
    [anon_sym_PROTO] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PERCENT_LT] = ACTIONS(1),
    [anon_sym_GT_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_LT_EQ] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_hidden] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_USE] = ACTIONS(1),
    [anon_sym_DEF] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(3),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_unconnectedField] = ACTIONS(1),
    [anon_sym_vrmlField] = ACTIONS(1),
    [anon_sym_hiddenField] = ACTIONS(1),
    [anon_sym_w3dField] = ACTIONS(1),
    [anon_sym_deprecatedField] = ACTIONS(1),
    [anon_sym_exposedField] = ACTIONS(1),
    [anon_sym_MFBool] = ACTIONS(1),
    [anon_sym_MFColor] = ACTIONS(1),
    [anon_sym_MFFloat] = ACTIONS(1),
    [anon_sym_MFInt32] = ACTIONS(1),
    [anon_sym_MFNode] = ACTIONS(1),
    [anon_sym_MFRotation] = ACTIONS(1),
    [anon_sym_MFString] = ACTIONS(1),
    [anon_sym_MFVec2f] = ACTIONS(1),
    [anon_sym_MFVec3f] = ACTIONS(1),
    [anon_sym_SFBool] = ACTIONS(1),
    [anon_sym_SFColor] = ACTIONS(1),
    [anon_sym_SFFloat] = ACTIONS(1),
    [anon_sym_SFInt32] = ACTIONS(1),
    [anon_sym_SFNode] = ACTIONS(1),
    [anon_sym_SFRotation] = ACTIONS(1),
    [anon_sym_SFString] = ACTIONS(1),
    [anon_sym_SFVec2f] = ACTIONS(1),
    [anon_sym_SFVec3f] = ACTIONS(1),
    [anon_sym_IS] = ACTIONS(1),
    [sym__text_fragment] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(128),
    [sym_extern] = STATE(13),
    [sym_proto] = STATE(127),
    [sym_javascript_block] = STATE(50),
    [sym_javascript_expression] = STATE(77),
    [sym_identifier] = STATE(129),
    [sym_node] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(13),
    [aux_sym_source_file_repeat2] = STATE(50),
    [aux_sym_extern_repeat1] = STATE(101),
    [sym__word] = ACTIONS(5),
    [anon_sym_IMPORTABLE] = ACTIONS(7),
    [anon_sym_EXTERNPROTO] = ACTIONS(7),
    [anon_sym_PROTO] = ACTIONS(9),
    [anon_sym_PERCENT_LT] = ACTIONS(11),
    [anon_sym_PERCENT_LT_EQ] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_USE] = ACTIONS(15),
    [anon_sym_DEF] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(25), 1,
      sym_null,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_USE,
    ACTIONS(35), 1,
      anon_sym_DEF,
    ACTIONS(37), 1,
      anon_sym_IS,
    STATE(17), 1,
      sym_javascript_expression,
    STATE(144), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(27), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(3), 7,
      sym_boolean,
      sym_string,
      sym_node,
      sym_vector,
      sym_vecf,
      sym__value,
      aux_sym__fieldType_repeat1,
  [54] = 15,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_USE,
    ACTIONS(35), 1,
      anon_sym_DEF,
    ACTIONS(37), 1,
      anon_sym_IS,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      sym_null,
    STATE(17), 1,
      sym_javascript_expression,
    STATE(144), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(27), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(4), 7,
      sym_boolean,
      sym_string,
      sym_node,
      sym_vector,
      sym_vecf,
      sym__value,
      aux_sym__fieldType_repeat1,
  [108] = 15,
    ACTIONS(43), 1,
      sym__word,
    ACTIONS(46), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(54), 1,
      sym_null,
    ACTIONS(60), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      anon_sym_USE,
    ACTIONS(69), 1,
      anon_sym_DEF,
    ACTIONS(72), 1,
      anon_sym_IS,
    STATE(17), 1,
      sym_javascript_expression,
    STATE(144), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(57), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(4), 7,
      sym_boolean,
      sym_string,
      sym_node,
      sym_vector,
      sym_vecf,
      sym__value,
      aux_sym__fieldType_repeat1,
  [162] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    ACTIONS(77), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(79), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(83), 1,
      sym_number,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_USE,
    ACTIONS(89), 1,
      anon_sym_DEF,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      sym_javascript_expression,
    STATE(57), 1,
      sym_javascript_block,
    STATE(84), 1,
      aux_sym__MFNumber,
    STATE(149), 1,
      sym_identifier,
    ACTIONS(81), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(42), 2,
      sym_node,
      aux_sym__MFNode,
    STATE(61), 2,
      sym_boolean,
      aux_sym__MFBool,
    STATE(71), 2,
      sym_string,
      aux_sym__MFString,
  [221] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(77), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(79), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_USE,
    ACTIONS(89), 1,
      anon_sym_DEF,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    ACTIONS(95), 1,
      sym_number,
    STATE(49), 1,
      sym_javascript_expression,
    STATE(57), 1,
      sym_javascript_block,
    STATE(78), 1,
      aux_sym__MFNumber,
    STATE(149), 1,
      sym_identifier,
    ACTIONS(81), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(47), 2,
      sym_node,
      aux_sym__MFNode,
    STATE(59), 2,
      sym_boolean,
      aux_sym__MFBool,
    STATE(67), 2,
      sym_string,
      aux_sym__MFString,
  [280] = 14,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_USE,
    ACTIONS(35), 1,
      anon_sym_DEF,
    ACTIONS(37), 1,
      anon_sym_IS,
    ACTIONS(97), 1,
      sym_null,
    ACTIONS(99), 1,
      sym_number,
    STATE(60), 1,
      sym_javascript_expression,
    STATE(144), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(27), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(103), 6,
      sym_boolean,
      sym_string,
      sym_node,
      sym_vector,
      sym_vecf,
      sym__value,
  [330] = 14,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_USE,
    ACTIONS(35), 1,
      anon_sym_DEF,
    ACTIONS(37), 1,
      anon_sym_IS,
    ACTIONS(99), 1,
      sym_number,
    ACTIONS(101), 1,
      sym_null,
    STATE(60), 1,
      sym_javascript_expression,
    STATE(144), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(27), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(118), 6,
      sym_boolean,
      sym_string,
      sym_node,
      sym_vector,
      sym_vecf,
      sym__value,
  [380] = 3,
    STATE(105), 1,
      sym__fieldType,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(103), 18,
      anon_sym_MFBool,
      anon_sym_MFColor,
      anon_sym_MFFloat,
      anon_sym_MFInt32,
      anon_sym_MFNode,
      anon_sym_MFRotation,
      anon_sym_MFString,
      anon_sym_MFVec2f,
      anon_sym_MFVec3f,
      anon_sym_SFBool,
      anon_sym_SFColor,
      anon_sym_SFFloat,
      anon_sym_SFInt32,
      anon_sym_SFNode,
      anon_sym_SFRotation,
      anon_sym_SFString,
      anon_sym_SFVec2f,
      anon_sym_SFVec3f,
  [408] = 13,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(15), 1,
      anon_sym_USE,
    ACTIONS(17), 1,
      anon_sym_DEF,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      sym_null,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_javascript_expression,
    STATE(129), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(109), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(68), 6,
      sym_boolean,
      sym_string,
      sym_node,
      sym_vector,
      sym_vecf,
      sym__fieldValue,
  [455] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(115), 18,
      anon_sym_MFBool,
      anon_sym_MFColor,
      anon_sym_MFFloat,
      anon_sym_MFInt32,
      anon_sym_MFNode,
      anon_sym_MFRotation,
      anon_sym_MFString,
      anon_sym_MFVec2f,
      anon_sym_MFVec3f,
      anon_sym_SFBool,
      anon_sym_SFColor,
      anon_sym_SFFloat,
      anon_sym_SFInt32,
      anon_sym_SFNode,
      anon_sym_SFRotation,
      anon_sym_SFString,
      anon_sym_SFVec2f,
      anon_sym_SFVec3f,
  [480] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(119), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(117), 12,
      anon_sym_IMPORTABLE,
      anon_sym_EXTERNPROTO,
      anon_sym_PROTO,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [506] = 14,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(9), 1,
      anon_sym_PROTO,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(15), 1,
      anon_sym_USE,
    ACTIONS(17), 1,
      anon_sym_DEF,
    STATE(77), 1,
      sym_javascript_expression,
    STATE(101), 1,
      aux_sym_extern_repeat1,
    STATE(129), 1,
      sym_identifier,
    STATE(137), 1,
      sym_proto,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(7), 2,
      anon_sym_IMPORTABLE,
      anon_sym_EXTERNPROTO,
    STATE(46), 2,
      sym_extern,
      aux_sym_source_file_repeat1,
    STATE(56), 3,
      sym_javascript_block,
      sym_node,
      aux_sym_source_file_repeat2,
  [554] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
    ACTIONS(123), 11,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [580] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(127), 11,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [605] = 6,
    ACTIONS(133), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(136), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(16), 2,
      sym_javascript_expression,
      aux_sym_vecf_repeat1,
    ACTIONS(131), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
    ACTIONS(129), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [636] = 7,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(24), 2,
      sym_javascript_expression,
      aux_sym_vecf_repeat1,
    ACTIONS(141), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
    ACTIONS(139), 7,
      sym__word,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [668] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(121), 6,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(123), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [692] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(147), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(145), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [715] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(125), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(127), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [738] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(145), 11,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [761] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(151), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(149), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [784] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(155), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(153), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [807] = 4,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(16), 2,
      sym_javascript_expression,
      aux_sym_vecf_repeat1,
    ACTIONS(159), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(157), 7,
      sym__word,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [832] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(163), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(161), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [855] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(165), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(167), 11,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [878] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(169), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(171), 11,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [901] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(153), 11,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [924] = 6,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(143), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(24), 2,
      sym_javascript_expression,
      aux_sym_vecf_repeat1,
    ACTIONS(141), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
    ACTIONS(139), 7,
      sym__word,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [953] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(165), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(167), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [976] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(175), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(173), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [999] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(169), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(171), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [1022] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(179), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(177), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [1045] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(179), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(177), 11,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1068] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(183), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(181), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [1091] = 6,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(39), 2,
      sym_javascript_expression,
      aux_sym_vecf_repeat1,
    ACTIONS(185), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1119] = 5,
    ACTIONS(189), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(192), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(37), 2,
      sym_javascript_expression,
      aux_sym_vecf_repeat1,
    ACTIONS(131), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1144] = 5,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(187), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(39), 2,
      sym_javascript_expression,
      aux_sym_vecf_repeat1,
    ACTIONS(185), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1169] = 5,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(195), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(37), 2,
      sym_javascript_expression,
      aux_sym_vecf_repeat1,
    ACTIONS(159), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1194] = 10,
    ACTIONS(197), 1,
      sym__word,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(205), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(208), 1,
      anon_sym_USE,
    ACTIONS(211), 1,
      anon_sym_DEF,
    STATE(93), 1,
      sym_javascript_expression,
    STATE(144), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(40), 3,
      sym_javascript_block,
      sym_node,
      aux_sym_source_file_repeat2,
  [1228] = 10,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(33), 1,
      anon_sym_USE,
    ACTIONS(35), 1,
      anon_sym_DEF,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    ACTIONS(216), 1,
      anon_sym_PERCENT_LT,
    STATE(93), 1,
      sym_javascript_expression,
    STATE(144), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(40), 3,
      sym_javascript_block,
      sym_node,
      aux_sym_source_file_repeat2,
  [1262] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(77), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(79), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(87), 1,
      anon_sym_USE,
    ACTIONS(89), 1,
      anon_sym_DEF,
    ACTIONS(218), 1,
      anon_sym_RBRACK,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      sym_javascript_expression,
    STATE(149), 1,
      sym_identifier,
    STATE(53), 3,
      sym_javascript_block,
      sym_node,
      aux_sym__MFNode,
  [1298] = 5,
    ACTIONS(222), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym__fieldDecl,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(54), 2,
      sym_field,
      aux_sym_proto_repeat1,
    ACTIONS(224), 7,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1322] = 10,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(33), 1,
      anon_sym_USE,
    ACTIONS(35), 1,
      anon_sym_DEF,
    ACTIONS(216), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      sym_javascript_expression,
    STATE(144), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(40), 3,
      sym_javascript_block,
      sym_node,
      aux_sym_source_file_repeat2,
  [1356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 6,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
    ACTIONS(123), 6,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
  [1376] = 6,
    ACTIONS(233), 1,
      anon_sym_PERCENT_LT_EQ,
    STATE(101), 1,
      aux_sym_extern_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(230), 2,
      anon_sym_IMPORTABLE,
      anon_sym_EXTERNPROTO,
    STATE(46), 2,
      sym_extern,
      aux_sym_source_file_repeat1,
    ACTIONS(228), 5,
      anon_sym_PROTO,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [1402] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(77), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(79), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(87), 1,
      anon_sym_USE,
    ACTIONS(89), 1,
      anon_sym_DEF,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym_javascript_expression,
    STATE(149), 1,
      sym_identifier,
    STATE(53), 3,
      sym_javascript_block,
      sym_node,
      aux_sym__MFNode,
  [1438] = 5,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym__fieldDecl,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(43), 2,
      sym_field,
      aux_sym_proto_repeat1,
    ACTIONS(224), 7,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1462] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(253), 1,
      sym_number,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(239), 3,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
    ACTIONS(241), 3,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
      anon_sym_COMMA,
  [1492] = 10,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(15), 1,
      anon_sym_USE,
    ACTIONS(17), 1,
      anon_sym_DEF,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym_javascript_expression,
    STATE(129), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(55), 3,
      sym_javascript_block,
      sym_node,
      aux_sym_source_file_repeat2,
  [1526] = 10,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(33), 1,
      anon_sym_USE,
    ACTIONS(35), 1,
      anon_sym_DEF,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    ACTIONS(216), 1,
      anon_sym_PERCENT_LT,
    STATE(93), 1,
      sym_javascript_expression,
    STATE(144), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(44), 3,
      sym_javascript_block,
      sym_node,
      aux_sym_source_file_repeat2,
  [1560] = 10,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(33), 1,
      anon_sym_USE,
    ACTIONS(35), 1,
      anon_sym_DEF,
    ACTIONS(216), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      sym_javascript_expression,
    STATE(144), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(41), 3,
      sym_javascript_block,
      sym_node,
      aux_sym_source_file_repeat2,
  [1594] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym__word,
    ACTIONS(264), 1,
      anon_sym_RBRACK,
    ACTIONS(266), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(269), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(272), 1,
      anon_sym_USE,
    ACTIONS(275), 1,
      anon_sym_DEF,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      sym_javascript_expression,
    STATE(149), 1,
      sym_identifier,
    STATE(53), 3,
      sym_javascript_block,
      sym_node,
      aux_sym__MFNode,
  [1630] = 5,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym__fieldDecl,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(54), 2,
      sym_field,
      aux_sym_proto_repeat1,
    ACTIONS(283), 7,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1654] = 10,
    ACTIONS(197), 1,
      sym__word,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(289), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(292), 1,
      anon_sym_USE,
    ACTIONS(295), 1,
      anon_sym_DEF,
    STATE(77), 1,
      sym_javascript_expression,
    STATE(129), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(55), 3,
      sym_javascript_block,
      sym_node,
      aux_sym_source_file_repeat2,
  [1688] = 10,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(15), 1,
      anon_sym_USE,
    ACTIONS(17), 1,
      anon_sym_DEF,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym_javascript_expression,
    STATE(129), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(55), 3,
      sym_javascript_block,
      sym_node,
      aux_sym_source_file_repeat2,
  [1722] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(253), 1,
      sym_number,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(239), 3,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
    ACTIONS(241), 3,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
      anon_sym_COMMA,
  [1749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
    ACTIONS(300), 6,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
  [1768] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(79), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(304), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(62), 4,
      sym_javascript_block,
      sym_javascript_expression,
      sym_boolean,
      aux_sym__MFBool,
  [1794] = 7,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    ACTIONS(308), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(69), 2,
      sym_javascript_expression,
      aux_sym_vecf_repeat1,
    ACTIONS(139), 3,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
  [1820] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(79), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(218), 1,
      anon_sym_RBRACK,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(304), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(62), 4,
      sym_javascript_block,
      sym_javascript_expression,
      sym_boolean,
      aux_sym__MFBool,
  [1846] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    ACTIONS(312), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(315), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(318), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(62), 4,
      sym_javascript_block,
      sym_javascript_expression,
      sym_boolean,
      aux_sym__MFBool,
  [1872] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_RBRACK,
    ACTIONS(326), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(329), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    STATE(63), 4,
      sym_javascript_block,
      sym_javascript_expression,
      sym_string,
      aux_sym__MFString,
  [1897] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(175), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1912] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(119), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1927] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(151), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1942] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(79), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    STATE(63), 4,
      sym_javascript_block,
      sym_javascript_expression,
      sym_string,
      aux_sym__MFString,
  [1967] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(340), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1982] = 6,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    ACTIONS(342), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(16), 2,
      sym_javascript_expression,
      aux_sym_vecf_repeat1,
    ACTIONS(157), 3,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
  [2005] = 6,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    ACTIONS(308), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(69), 2,
      sym_javascript_expression,
      aux_sym_vecf_repeat1,
    ACTIONS(139), 3,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
  [2028] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(79), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_RBRACK,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    STATE(63), 4,
      sym_javascript_block,
      sym_javascript_expression,
      sym_string,
      aux_sym__MFString,
  [2053] = 3,
    ACTIONS(346), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(344), 7,
      anon_sym_IMPORTABLE,
      anon_sym_EXTERNPROTO,
      anon_sym_PROTO,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [2070] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(163), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [2085] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_RBRACK,
    ACTIONS(350), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(353), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(356), 2,
      sym_number,
      anon_sym_COMMA,
    STATE(74), 3,
      sym_javascript_block,
      sym_javascript_expression,
      aux_sym__MFNumber,
  [2107] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(302), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(300), 5,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      anon_sym_USE,
      anon_sym_DEF,
  [2123] = 6,
    ACTIONS(359), 1,
      sym__word,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    ACTIONS(363), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(365), 1,
      anon_sym_hidden,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(91), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2145] = 4,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(367), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(369), 4,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [2163] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(79), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    ACTIONS(371), 2,
      sym_number,
      anon_sym_COMMA,
    STATE(74), 3,
      sym_javascript_block,
      sym_javascript_expression,
      aux_sym__MFNumber,
  [2185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 3,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
      anon_sym_COMMA,
    ACTIONS(239), 4,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [2203] = 6,
    ACTIONS(359), 1,
      sym__word,
    ACTIONS(363), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(365), 1,
      anon_sym_hidden,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(86), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2225] = 6,
    ACTIONS(359), 1,
      sym__word,
    ACTIONS(363), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(365), 1,
      anon_sym_hidden,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(82), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2247] = 6,
    ACTIONS(359), 1,
      sym__word,
    ACTIONS(363), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(365), 1,
      anon_sym_hidden,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(86), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2269] = 6,
    ACTIONS(359), 1,
      sym__word,
    ACTIONS(363), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(365), 1,
      anon_sym_hidden,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(89), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2291] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(79), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(218), 1,
      anon_sym_RBRACK,
    ACTIONS(371), 2,
      sym_number,
      anon_sym_COMMA,
    STATE(74), 3,
      sym_javascript_block,
      sym_javascript_expression,
      aux_sym__MFNumber,
  [2313] = 6,
    ACTIONS(359), 1,
      sym__word,
    ACTIONS(363), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(365), 1,
      anon_sym_hidden,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(87), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2335] = 6,
    ACTIONS(385), 1,
      sym__word,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    ACTIONS(390), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(393), 1,
      anon_sym_hidden,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(86), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2357] = 6,
    ACTIONS(359), 1,
      sym__word,
    ACTIONS(363), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(365), 1,
      anon_sym_hidden,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(86), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2379] = 6,
    ACTIONS(359), 1,
      sym__word,
    ACTIONS(363), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(365), 1,
      anon_sym_hidden,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(92), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2401] = 6,
    ACTIONS(359), 1,
      sym__word,
    ACTIONS(363), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(365), 1,
      anon_sym_hidden,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(86), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2423] = 6,
    ACTIONS(359), 1,
      sym__word,
    ACTIONS(363), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(365), 1,
      anon_sym_hidden,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(80), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2445] = 6,
    ACTIONS(359), 1,
      sym__word,
    ACTIONS(363), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(365), 1,
      anon_sym_hidden,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(86), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2467] = 6,
    ACTIONS(359), 1,
      sym__word,
    ACTIONS(363), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(365), 1,
      anon_sym_hidden,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(86), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2489] = 4,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(367), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(369), 4,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [2507] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(302), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(300), 4,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [2522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 3,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
      anon_sym_COMMA,
    ACTIONS(153), 4,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [2537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 3,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
      anon_sym_COMMA,
    ACTIONS(127), 4,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [2552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
      anon_sym_COMMA,
    ACTIONS(167), 4,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [2567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
      anon_sym_COMMA,
    ACTIONS(171), 4,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [2582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 3,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
      anon_sym_COMMA,
    ACTIONS(177), 4,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [2597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 3,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
      anon_sym_COMMA,
    ACTIONS(145), 4,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [2612] = 5,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      sym_string,
    STATE(104), 1,
      aux_sym_extern_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(408), 2,
      anon_sym_IMPORTABLE,
      anon_sym_EXTERNPROTO,
  [2630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(175), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_COMMA,
  [2644] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(410), 2,
      sym__word,
      anon_sym_hidden,
    ACTIONS(412), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT,
  [2657] = 4,
    ACTIONS(417), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      aux_sym_extern_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(414), 2,
      anon_sym_IMPORTABLE,
      anon_sym_EXTERNPROTO,
  [2672] = 5,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(419), 1,
      sym__word,
    STATE(10), 1,
      sym_identifier,
    STATE(20), 1,
      sym_javascript_expression,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2689] = 5,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(421), 1,
      sym__word,
    STATE(15), 1,
      sym_javascript_expression,
    STATE(140), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2706] = 5,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(421), 1,
      sym__word,
    STATE(15), 1,
      sym_javascript_expression,
    STATE(21), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2723] = 5,
    ACTIONS(79), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(423), 1,
      sym__word,
    STATE(96), 1,
      sym_javascript_expression,
    STATE(100), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2740] = 5,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(421), 1,
      sym__word,
    STATE(15), 1,
      sym_javascript_expression,
    STATE(146), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2757] = 5,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(419), 1,
      sym__word,
    STATE(20), 1,
      sym_javascript_expression,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2774] = 5,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(419), 1,
      sym__word,
    STATE(20), 1,
      sym_javascript_expression,
    STATE(106), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(119), 4,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [2804] = 5,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(419), 1,
      sym__word,
    STATE(19), 1,
      sym_identifier,
    STATE(20), 1,
      sym_javascript_expression,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2821] = 5,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(419), 1,
      sym__word,
    STATE(20), 1,
      sym_javascript_expression,
    STATE(35), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2838] = 5,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(419), 1,
      sym__word,
    STATE(20), 1,
      sym_javascript_expression,
    STATE(117), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2855] = 5,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(421), 1,
      sym__word,
    STATE(15), 1,
      sym_javascript_expression,
    STATE(130), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2872] = 5,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(421), 1,
      sym__word,
    STATE(15), 1,
      sym_javascript_expression,
    STATE(151), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2889] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(425), 2,
      sym__word,
      anon_sym_hidden,
    ACTIONS(427), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT,
  [2902] = 3,
    ACTIONS(431), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(429), 2,
      anon_sym_PERCENT_LT_EQ,
      sym__word,
  [2914] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(433), 2,
      anon_sym_PERCENT_LT_EQ,
      sym__word,
  [2923] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(435), 2,
      anon_sym_PERCENT_LT_EQ,
      sym__word,
  [2932] = 2,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2940] = 2,
    ACTIONS(439), 1,
      anon_sym_GT_PERCENT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2948] = 2,
    ACTIONS(441), 1,
      anon_sym_GT_PERCENT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2956] = 2,
    ACTIONS(443), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2964] = 2,
    ACTIONS(445), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2972] = 2,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2980] = 2,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2988] = 2,
    ACTIONS(449), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2996] = 2,
    ACTIONS(451), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3004] = 2,
    ACTIONS(453), 1,
      anon_sym_GT_PERCENT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3012] = 2,
    ACTIONS(455), 1,
      anon_sym_GT_PERCENT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3020] = 2,
    ACTIONS(457), 1,
      sym__text_fragment,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3028] = 2,
    ACTIONS(459), 1,
      sym__text_fragment,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3036] = 2,
    ACTIONS(461), 1,
      anon_sym_GT_PERCENT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3044] = 2,
    ACTIONS(463), 1,
      anon_sym_GT_PERCENT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3052] = 2,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3060] = 2,
    ACTIONS(467), 1,
      aux_sym_string_token1,
    ACTIONS(465), 2,
      sym_comment,
      anon_sym_COMMA,
  [3068] = 2,
    ACTIONS(469), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3076] = 2,
    ACTIONS(471), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3084] = 2,
    ACTIONS(473), 1,
      sym__word,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3092] = 2,
    ACTIONS(475), 1,
      sym__text_fragment,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3100] = 2,
    ACTIONS(477), 1,
      sym__text_fragment,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3108] = 2,
    ACTIONS(479), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3116] = 2,
    ACTIONS(481), 1,
      aux_sym_string_token1,
    ACTIONS(465), 2,
      sym_comment,
      anon_sym_COMMA,
  [3124] = 2,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3132] = 2,
    ACTIONS(485), 1,
      sym__text_fragment,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3140] = 2,
    ACTIONS(487), 1,
      sym__text_fragment,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3148] = 2,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3156] = 2,
    ACTIONS(491), 1,
      aux_sym_string_token1,
    ACTIONS(465), 2,
      sym_comment,
      anon_sym_COMMA,
  [3164] = 2,
    ACTIONS(493), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3172] = 2,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3180] = 2,
    ACTIONS(497), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3188] = 2,
    ACTIONS(499), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3196] = 2,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 162,
  [SMALL_STATE(6)] = 221,
  [SMALL_STATE(7)] = 280,
  [SMALL_STATE(8)] = 330,
  [SMALL_STATE(9)] = 380,
  [SMALL_STATE(10)] = 408,
  [SMALL_STATE(11)] = 455,
  [SMALL_STATE(12)] = 480,
  [SMALL_STATE(13)] = 506,
  [SMALL_STATE(14)] = 554,
  [SMALL_STATE(15)] = 580,
  [SMALL_STATE(16)] = 605,
  [SMALL_STATE(17)] = 636,
  [SMALL_STATE(18)] = 668,
  [SMALL_STATE(19)] = 692,
  [SMALL_STATE(20)] = 715,
  [SMALL_STATE(21)] = 738,
  [SMALL_STATE(22)] = 761,
  [SMALL_STATE(23)] = 784,
  [SMALL_STATE(24)] = 807,
  [SMALL_STATE(25)] = 832,
  [SMALL_STATE(26)] = 855,
  [SMALL_STATE(27)] = 878,
  [SMALL_STATE(28)] = 901,
  [SMALL_STATE(29)] = 924,
  [SMALL_STATE(30)] = 953,
  [SMALL_STATE(31)] = 976,
  [SMALL_STATE(32)] = 999,
  [SMALL_STATE(33)] = 1022,
  [SMALL_STATE(34)] = 1045,
  [SMALL_STATE(35)] = 1068,
  [SMALL_STATE(36)] = 1091,
  [SMALL_STATE(37)] = 1119,
  [SMALL_STATE(38)] = 1144,
  [SMALL_STATE(39)] = 1169,
  [SMALL_STATE(40)] = 1194,
  [SMALL_STATE(41)] = 1228,
  [SMALL_STATE(42)] = 1262,
  [SMALL_STATE(43)] = 1298,
  [SMALL_STATE(44)] = 1322,
  [SMALL_STATE(45)] = 1356,
  [SMALL_STATE(46)] = 1376,
  [SMALL_STATE(47)] = 1402,
  [SMALL_STATE(48)] = 1438,
  [SMALL_STATE(49)] = 1462,
  [SMALL_STATE(50)] = 1492,
  [SMALL_STATE(51)] = 1526,
  [SMALL_STATE(52)] = 1560,
  [SMALL_STATE(53)] = 1594,
  [SMALL_STATE(54)] = 1630,
  [SMALL_STATE(55)] = 1654,
  [SMALL_STATE(56)] = 1688,
  [SMALL_STATE(57)] = 1722,
  [SMALL_STATE(58)] = 1749,
  [SMALL_STATE(59)] = 1768,
  [SMALL_STATE(60)] = 1794,
  [SMALL_STATE(61)] = 1820,
  [SMALL_STATE(62)] = 1846,
  [SMALL_STATE(63)] = 1872,
  [SMALL_STATE(64)] = 1897,
  [SMALL_STATE(65)] = 1912,
  [SMALL_STATE(66)] = 1927,
  [SMALL_STATE(67)] = 1942,
  [SMALL_STATE(68)] = 1967,
  [SMALL_STATE(69)] = 1982,
  [SMALL_STATE(70)] = 2005,
  [SMALL_STATE(71)] = 2028,
  [SMALL_STATE(72)] = 2053,
  [SMALL_STATE(73)] = 2070,
  [SMALL_STATE(74)] = 2085,
  [SMALL_STATE(75)] = 2107,
  [SMALL_STATE(76)] = 2123,
  [SMALL_STATE(77)] = 2145,
  [SMALL_STATE(78)] = 2163,
  [SMALL_STATE(79)] = 2185,
  [SMALL_STATE(80)] = 2203,
  [SMALL_STATE(81)] = 2225,
  [SMALL_STATE(82)] = 2247,
  [SMALL_STATE(83)] = 2269,
  [SMALL_STATE(84)] = 2291,
  [SMALL_STATE(85)] = 2313,
  [SMALL_STATE(86)] = 2335,
  [SMALL_STATE(87)] = 2357,
  [SMALL_STATE(88)] = 2379,
  [SMALL_STATE(89)] = 2401,
  [SMALL_STATE(90)] = 2423,
  [SMALL_STATE(91)] = 2445,
  [SMALL_STATE(92)] = 2467,
  [SMALL_STATE(93)] = 2489,
  [SMALL_STATE(94)] = 2507,
  [SMALL_STATE(95)] = 2522,
  [SMALL_STATE(96)] = 2537,
  [SMALL_STATE(97)] = 2552,
  [SMALL_STATE(98)] = 2567,
  [SMALL_STATE(99)] = 2582,
  [SMALL_STATE(100)] = 2597,
  [SMALL_STATE(101)] = 2612,
  [SMALL_STATE(102)] = 2630,
  [SMALL_STATE(103)] = 2644,
  [SMALL_STATE(104)] = 2657,
  [SMALL_STATE(105)] = 2672,
  [SMALL_STATE(106)] = 2689,
  [SMALL_STATE(107)] = 2706,
  [SMALL_STATE(108)] = 2723,
  [SMALL_STATE(109)] = 2740,
  [SMALL_STATE(110)] = 2757,
  [SMALL_STATE(111)] = 2774,
  [SMALL_STATE(112)] = 2791,
  [SMALL_STATE(113)] = 2804,
  [SMALL_STATE(114)] = 2821,
  [SMALL_STATE(115)] = 2838,
  [SMALL_STATE(116)] = 2855,
  [SMALL_STATE(117)] = 2872,
  [SMALL_STATE(118)] = 2889,
  [SMALL_STATE(119)] = 2902,
  [SMALL_STATE(120)] = 2914,
  [SMALL_STATE(121)] = 2923,
  [SMALL_STATE(122)] = 2932,
  [SMALL_STATE(123)] = 2940,
  [SMALL_STATE(124)] = 2948,
  [SMALL_STATE(125)] = 2956,
  [SMALL_STATE(126)] = 2964,
  [SMALL_STATE(127)] = 2972,
  [SMALL_STATE(128)] = 2980,
  [SMALL_STATE(129)] = 2988,
  [SMALL_STATE(130)] = 2996,
  [SMALL_STATE(131)] = 3004,
  [SMALL_STATE(132)] = 3012,
  [SMALL_STATE(133)] = 3020,
  [SMALL_STATE(134)] = 3028,
  [SMALL_STATE(135)] = 3036,
  [SMALL_STATE(136)] = 3044,
  [SMALL_STATE(137)] = 3052,
  [SMALL_STATE(138)] = 3060,
  [SMALL_STATE(139)] = 3068,
  [SMALL_STATE(140)] = 3076,
  [SMALL_STATE(141)] = 3084,
  [SMALL_STATE(142)] = 3092,
  [SMALL_STATE(143)] = 3100,
  [SMALL_STATE(144)] = 3108,
  [SMALL_STATE(145)] = 3116,
  [SMALL_STATE(146)] = 3124,
  [SMALL_STATE(147)] = 3132,
  [SMALL_STATE(148)] = 3140,
  [SMALL_STATE(149)] = 3148,
  [SMALL_STATE(150)] = 3156,
  [SMALL_STATE(151)] = 3164,
  [SMALL_STATE(152)] = 3172,
  [SMALL_STATE(153)] = 3180,
  [SMALL_STATE(154)] = 3188,
  [SMALL_STATE(155)] = 3196,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2), SHIFT_REPEAT(15),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldType_repeat1, 2), SHIFT_REPEAT(6),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fieldType_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldType_repeat1, 2), SHIFT_REPEAT(143),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2), SHIFT_REPEAT(4),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2), SHIFT_REPEAT(31),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldType_repeat1, 2), SHIFT_REPEAT(29),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldType_repeat1, 2), SHIFT_REPEAT(138),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2), SHIFT_REPEAT(113),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2), SHIFT_REPEAT(110),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2), SHIFT_REPEAT(114),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldDecl, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_javascript_expression, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_javascript_expression, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vecf_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vecf_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vecf_repeat1, 2), SHIFT_REPEAT(143),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vecf_repeat1, 2), SHIFT_REPEAT(16),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vecf, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vecf, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldValue, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vecf_repeat1, 2), SHIFT_REPEAT(133),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vecf_repeat1, 2), SHIFT_REPEAT(37),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(15),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(142),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(143),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(113),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(110),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__MFNode, 1),
  [241] = {.entry = {.count = 4, .reusable = true}}, REDUCE(aux_sym__MFBool, 1), REDUCE(aux_sym__MFNumber, 1), REDUCE(aux_sym__MFString, 1), REDUCE(aux_sym__MFNode, 1),
  [246] = {.entry = {.count = 4, .reusable = false}}, REDUCE(aux_sym__MFBool, 1), REDUCE(aux_sym__MFNumber, 1), REDUCE(aux_sym__MFString, 1), REDUCE(aux_sym__MFNode, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__MFBool, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFNumber, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFString, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFNode, 2), SHIFT_REPEAT(15),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFNode, 2),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFNode, 2), SHIFT_REPEAT(147),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFNode, 2), SHIFT_REPEAT(148),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFNode, 2), SHIFT_REPEAT(108),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFNode, 2), SHIFT_REPEAT(115),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFNode, 2), SHIFT_REPEAT(53),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proto_repeat1, 2),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proto_repeat1, 2), SHIFT_REPEAT(11),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(134),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(133),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(107),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(111),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_javascript_block, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_javascript_block, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFBool, 2),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFBool, 2), SHIFT_REPEAT(147),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFBool, 2), SHIFT_REPEAT(148),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFBool, 2), SHIFT_REPEAT(102),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFBool, 2), SHIFT_REPEAT(62),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFString, 2),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFString, 2), SHIFT_REPEAT(147),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFString, 2), SHIFT_REPEAT(148),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFString, 2), SHIFT_REPEAT(145),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFString, 2), SHIFT_REPEAT(63),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, .production_id = 5),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFNumber, 2),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFNumber, 2), SHIFT_REPEAT(147),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFNumber, 2), SHIFT_REPEAT(148),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFNumber, 2), SHIFT_REPEAT(74),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFNode, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(7),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(142),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(141),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2, .production_id = 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, .production_id = 1),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extern_repeat1, 2), SHIFT_REPEAT(104),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extern_repeat1, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, .production_id = 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldType, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldType, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldType, 4),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [447] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proto, 6, .production_id = 4),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proto, 8, .production_id = 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proto, 7, .production_id = 4),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__text_fragment = 0,
  ts_external_token_error_sentinel = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__text_fragment] = sym__text_fragment,
  [ts_external_token_error_sentinel] = sym_error_sentinel,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__text_fragment] = true,
    [ts_external_token_error_sentinel] = true,
  },
  [2] = {
    [ts_external_token__text_fragment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_wbproto_external_scanner_create(void);
void tree_sitter_wbproto_external_scanner_destroy(void *);
bool tree_sitter_wbproto_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_wbproto_external_scanner_serialize(void *, char *);
void tree_sitter_wbproto_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_wbproto() {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__word,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_wbproto_external_scanner_create,
      tree_sitter_wbproto_external_scanner_destroy,
      tree_sitter_wbproto_external_scanner_scan,
      tree_sitter_wbproto_external_scanner_serialize,
      tree_sitter_wbproto_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

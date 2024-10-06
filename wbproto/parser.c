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
  [17] = 12,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 19,
  [28] = 24,
  [29] = 20,
  [30] = 21,
  [31] = 31,
  [32] = 25,
  [33] = 15,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 16,
  [39] = 31,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 43,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 12,
  [56] = 45,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 59,
  [62] = 18,
  [63] = 35,
  [64] = 34,
  [65] = 14,
  [66] = 66,
  [67] = 26,
  [68] = 31,
  [69] = 69,
  [70] = 70,
  [71] = 66,
  [72] = 22,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 57,
  [80] = 80,
  [81] = 81,
  [82] = 80,
  [83] = 74,
  [84] = 84,
  [85] = 85,
  [86] = 81,
  [87] = 77,
  [88] = 84,
  [89] = 85,
  [90] = 77,
  [91] = 84,
  [92] = 74,
  [93] = 85,
  [94] = 57,
  [95] = 19,
  [96] = 15,
  [97] = 24,
  [98] = 25,
  [99] = 20,
  [100] = 21,
  [101] = 34,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 14,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 109,
  [113] = 111,
  [114] = 109,
  [115] = 115,
  [116] = 111,
  [117] = 104,
  [118] = 104,
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
  [130] = 124,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 135,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 133,
  [142] = 137,
  [143] = 123,
  [144] = 128,
  [145] = 129,
  [146] = 133,
  [147] = 137,
  [148] = 123,
  [149] = 128,
  [150] = 129,
  [151] = 134,
  [152] = 152,
  [153] = 134,
  [154] = 135,
  [155] = 124,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        '"', 22,
        '#', 17,
        '%', 3,
        ',', 25,
        '.', 5,
        '>', 1,
        '[', 8,
        ']', 9,
        '{', 10,
        '}', 11,
        '+', 2,
        '-', 2,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
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
          lookahead != '"' &&
          lookahead != '#') ADVANCE(24);
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
      ADVANCE_MAP(
        'D', 1,
        'E', 2,
        'F', 3,
        'I', 4,
        'M', 5,
        'N', 6,
        'P', 7,
        'S', 8,
        'T', 9,
        'U', 10,
        'd', 11,
        'e', 12,
        'f', 13,
        'h', 14,
        'u', 15,
        'v', 16,
        'w', 17,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
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
      ADVANCE_MAP(
        'B', 40,
        'C', 41,
        'F', 42,
        'I', 43,
        'N', 44,
        'R', 45,
        'S', 46,
        'V', 47,
      );
      END_STATE();
    case 24:
      if (lookahead == 'L') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'O') ADVANCE(49);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        'B', 50,
        'C', 51,
        'F', 52,
        'I', 53,
        'N', 54,
        'R', 55,
        'S', 56,
        'V', 57,
      );
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
  [128] = {.lex_state = 23},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 23},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 23},
  [150] = {.lex_state = 0},
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
    [sym_source_file] = STATE(126),
    [sym_extern] = STATE(13),
    [sym_proto] = STATE(131),
    [sym_javascript_block] = STATE(51),
    [sym_javascript_expression] = STATE(82),
    [sym_identifier] = STATE(123),
    [sym_node] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(13),
    [aux_sym_source_file_repeat2] = STATE(51),
    [aux_sym_extern_repeat1] = STATE(102),
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
    ACTIONS(19), 1,
      sym__word,
    ACTIONS(22), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(30), 1,
      sym_null,
    ACTIONS(36), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      anon_sym_USE,
    ACTIONS(45), 1,
      anon_sym_DEF,
    ACTIONS(48), 1,
      anon_sym_IS,
    STATE(18), 1,
      sym_javascript_expression,
    STATE(143), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(33), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(2), 7,
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
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(57), 1,
      sym_null,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_USE,
    ACTIONS(67), 1,
      anon_sym_DEF,
    ACTIONS(69), 1,
      anon_sym_IS,
    STATE(18), 1,
      sym_javascript_expression,
    STATE(143), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(59), 2,
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
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_USE,
    ACTIONS(67), 1,
      anon_sym_DEF,
    ACTIONS(69), 1,
      anon_sym_IS,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 1,
      sym_null,
    STATE(18), 1,
      sym_javascript_expression,
    STATE(143), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(59), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(2), 7,
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
    STATE(44), 1,
      sym_javascript_expression,
    STATE(58), 1,
      sym_javascript_block,
    STATE(81), 1,
      aux_sym__MFNumber,
    STATE(148), 1,
      sym_identifier,
    ACTIONS(81), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(45), 2,
      sym_node,
      aux_sym__MFNode,
    STATE(59), 2,
      sym_boolean,
      aux_sym__MFBool,
    STATE(66), 2,
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
    STATE(44), 1,
      sym_javascript_expression,
    STATE(58), 1,
      sym_javascript_block,
    STATE(86), 1,
      aux_sym__MFNumber,
    STATE(148), 1,
      sym_identifier,
    ACTIONS(81), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(56), 2,
      sym_node,
      aux_sym__MFNode,
    STATE(61), 2,
      sym_boolean,
      aux_sym__MFBool,
    STATE(71), 2,
      sym_string,
      aux_sym__MFString,
  [280] = 14,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_USE,
    ACTIONS(67), 1,
      anon_sym_DEF,
    ACTIONS(69), 1,
      anon_sym_IS,
    ACTIONS(97), 1,
      sym_null,
    ACTIONS(99), 1,
      sym_number,
    STATE(62), 1,
      sym_javascript_expression,
    STATE(143), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(59), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(108), 6,
      sym_boolean,
      sym_string,
      sym_node,
      sym_vector,
      sym_vecf,
      sym__value,
  [330] = 14,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_USE,
    ACTIONS(67), 1,
      anon_sym_DEF,
    ACTIONS(69), 1,
      anon_sym_IS,
    ACTIONS(99), 1,
      sym_number,
    ACTIONS(101), 1,
      sym_null,
    STATE(62), 1,
      sym_javascript_expression,
    STATE(143), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(59), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(103), 6,
      sym_boolean,
      sym_string,
      sym_node,
      sym_vector,
      sym_vecf,
      sym__value,
  [380] = 3,
    STATE(107), 1,
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
  [408] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(105), 18,
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
  [433] = 13,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(15), 1,
      anon_sym_USE,
    ACTIONS(17), 1,
      anon_sym_DEF,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(109), 1,
      sym_null,
    ACTIONS(113), 1,
      sym_number,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_javascript_expression,
    STATE(123), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(111), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(70), 6,
      sym_boolean,
      sym_string,
      sym_node,
      sym_vector,
      sym_vecf,
      sym__fieldValue,
  [480] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
    ACTIONS(119), 11,
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
    STATE(82), 1,
      sym_javascript_expression,
    STATE(102), 1,
      aux_sym_extern_repeat1,
    STATE(123), 1,
      sym_identifier,
    STATE(152), 1,
      sym_proto,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(7), 2,
      anon_sym_IMPORTABLE,
      anon_sym_EXTERNPROTO,
    STATE(52), 2,
      sym_extern,
      aux_sym_source_file_repeat1,
    STATE(42), 3,
      sym_javascript_block,
      sym_node,
      aux_sym_source_file_repeat2,
  [554] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(123), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(121), 12,
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
  [636] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(117), 6,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(119), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [660] = 7,
    ACTIONS(55), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(31), 2,
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
  [692] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(145), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(147), 11,
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
  [715] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(149), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(151), 11,
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
  [738] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(153), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(155), 11,
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
    ACTIONS(159), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(157), 9,
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
  [807] = 3,
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
  [830] = 3,
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
  [853] = 3,
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
  [876] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(145), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(147), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [899] = 3,
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
  [922] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(149), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(151), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [945] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(153), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(155), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [968] = 4,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(16), 2,
      sym_javascript_expression,
      aux_sym_vecf_repeat1,
    ACTIONS(179), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(177), 7,
      sym__word,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [993] = 3,
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
  [1016] = 3,
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
  [1039] = 3,
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
  [1062] = 6,
    ACTIONS(55), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(143), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(31), 2,
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
  [1144] = 5,
    ACTIONS(189), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(192), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(38), 2,
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
  [1169] = 5,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(195), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(38), 2,
      sym_javascript_expression,
      aux_sym_vecf_repeat1,
    ACTIONS(179), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1194] = 5,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym__fieldDecl,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(47), 2,
      sym_field,
      aux_sym_proto_repeat1,
    ACTIONS(199), 7,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1218] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym__word,
    ACTIONS(204), 1,
      anon_sym_RBRACK,
    ACTIONS(206), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(209), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(212), 1,
      anon_sym_USE,
    ACTIONS(215), 1,
      anon_sym_DEF,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      sym_javascript_expression,
    STATE(148), 1,
      sym_identifier,
    STATE(41), 3,
      sym_javascript_block,
      sym_node,
      aux_sym__MFNode,
  [1254] = 10,
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
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      sym_javascript_expression,
    STATE(123), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(43), 3,
      sym_javascript_block,
      sym_node,
      aux_sym_source_file_repeat2,
  [1288] = 10,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 1,
      sym__word,
    ACTIONS(228), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(231), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(234), 1,
      anon_sym_USE,
    ACTIONS(237), 1,
      anon_sym_DEF,
    STATE(82), 1,
      sym_javascript_expression,
    STATE(123), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(43), 3,
      sym_javascript_block,
      sym_node,
      aux_sym_source_file_repeat2,
  [1322] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(247), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(254), 1,
      sym_number,
    ACTIONS(256), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(240), 3,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
    ACTIONS(242), 3,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
      anon_sym_COMMA,
  [1352] = 11,
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
    ACTIONS(258), 1,
      anon_sym_RBRACK,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      sym_javascript_expression,
    STATE(148), 1,
      sym_identifier,
    STATE(41), 3,
      sym_javascript_block,
      sym_node,
      aux_sym__MFNode,
  [1388] = 10,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(55), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(65), 1,
      anon_sym_USE,
    ACTIONS(67), 1,
      anon_sym_DEF,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    ACTIONS(264), 1,
      anon_sym_PERCENT_LT,
    STATE(80), 1,
      sym_javascript_expression,
    STATE(143), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(48), 3,
      sym_javascript_block,
      sym_node,
      aux_sym_source_file_repeat2,
  [1422] = 5,
    ACTIONS(266), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym__fieldDecl,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(49), 2,
      sym_field,
      aux_sym_proto_repeat1,
    ACTIONS(199), 7,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1446] = 10,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      sym__word,
    ACTIONS(268), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(271), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(274), 1,
      anon_sym_USE,
    ACTIONS(277), 1,
      anon_sym_DEF,
    STATE(80), 1,
      sym_javascript_expression,
    STATE(143), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(48), 3,
      sym_javascript_block,
      sym_node,
      aux_sym_source_file_repeat2,
  [1480] = 5,
    ACTIONS(280), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym__fieldDecl,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(49), 2,
      sym_field,
      aux_sym_proto_repeat1,
    ACTIONS(282), 7,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1504] = 10,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(55), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(65), 1,
      anon_sym_USE,
    ACTIONS(67), 1,
      anon_sym_DEF,
    ACTIONS(264), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      sym_javascript_expression,
    STATE(143), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(48), 3,
      sym_javascript_block,
      sym_node,
      aux_sym_source_file_repeat2,
  [1538] = 10,
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
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      sym_javascript_expression,
    STATE(123), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(43), 3,
      sym_javascript_block,
      sym_node,
      aux_sym_source_file_repeat2,
  [1572] = 6,
    ACTIONS(294), 1,
      anon_sym_PERCENT_LT_EQ,
    STATE(102), 1,
      aux_sym_extern_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(291), 2,
      anon_sym_IMPORTABLE,
      anon_sym_EXTERNPROTO,
    STATE(52), 2,
      sym_extern,
      aux_sym_source_file_repeat1,
    ACTIONS(289), 5,
      anon_sym_PROTO,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [1598] = 10,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(55), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(65), 1,
      anon_sym_USE,
    ACTIONS(67), 1,
      anon_sym_DEF,
    ACTIONS(264), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      sym_javascript_expression,
    STATE(143), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(46), 3,
      sym_javascript_block,
      sym_node,
      aux_sym_source_file_repeat2,
  [1632] = 10,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(55), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(65), 1,
      anon_sym_USE,
    ACTIONS(67), 1,
      anon_sym_DEF,
    ACTIONS(264), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      sym_javascript_expression,
    STATE(143), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(50), 3,
      sym_javascript_block,
      sym_node,
      aux_sym_source_file_repeat2,
  [1666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 6,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
    ACTIONS(119), 6,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
  [1686] = 11,
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
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym_javascript_expression,
    STATE(148), 1,
      sym_identifier,
    STATE(41), 3,
      sym_javascript_block,
      sym_node,
      aux_sym__MFNode,
  [1722] = 3,
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
  [1741] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(254), 1,
      sym_number,
    ACTIONS(256), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(240), 3,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
    ACTIONS(242), 3,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
      anon_sym_COMMA,
  [1768] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(79), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(258), 1,
      anon_sym_RBRACK,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(304), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(60), 4,
      sym_javascript_block,
      sym_javascript_expression,
      sym_boolean,
      aux_sym__MFBool,
  [1794] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    ACTIONS(310), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(313), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(316), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(60), 4,
      sym_javascript_block,
      sym_javascript_expression,
      sym_boolean,
      aux_sym__MFBool,
  [1820] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(79), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(304), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(60), 4,
      sym_javascript_block,
      sym_javascript_expression,
      sym_boolean,
      aux_sym__MFBool,
  [1846] = 7,
    ACTIONS(55), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    ACTIONS(322), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(68), 2,
      sym_javascript_expression,
      aux_sym_vecf_repeat1,
    ACTIONS(139), 3,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
  [1872] = 6,
    ACTIONS(55), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    ACTIONS(322), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(68), 2,
      sym_javascript_expression,
      aux_sym_vecf_repeat1,
    ACTIONS(139), 3,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
  [1895] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(183), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1910] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(123), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1925] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(79), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(258), 1,
      anon_sym_RBRACK,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    STATE(69), 4,
      sym_javascript_block,
      sym_javascript_expression,
      sym_string,
      aux_sym__MFString,
  [1950] = 2,
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
  [1965] = 6,
    ACTIONS(55), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(326), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(16), 2,
      sym_javascript_expression,
      aux_sym_vecf_repeat1,
    ACTIONS(177), 3,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
  [1988] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    ACTIONS(330), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(333), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    STATE(69), 4,
      sym_javascript_block,
      sym_javascript_expression,
      sym_string,
      aux_sym__MFString,
  [2013] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(342), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [2028] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(79), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    STATE(69), 4,
      sym_javascript_block,
      sym_javascript_expression,
      sym_string,
      aux_sym__MFString,
  [2053] = 2,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(159), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [2068] = 3,
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
  [2085] = 6,
    ACTIONS(348), 1,
      sym__word,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    ACTIONS(352), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(354), 1,
      anon_sym_hidden,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(78), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2107] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_RBRACK,
    ACTIONS(358), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(361), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(364), 2,
      sym_number,
      anon_sym_COMMA,
    STATE(75), 3,
      sym_javascript_block,
      sym_javascript_expression,
      aux_sym__MFNumber,
  [2129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(367), 3,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
      anon_sym_COMMA,
    ACTIONS(240), 4,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [2147] = 6,
    ACTIONS(348), 1,
      sym__word,
    ACTIONS(352), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(354), 1,
      anon_sym_hidden,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(91), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2169] = 6,
    ACTIONS(371), 1,
      sym__word,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    ACTIONS(376), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(379), 1,
      anon_sym_hidden,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(78), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2191] = 3,
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
  [2207] = 4,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(384), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(382), 4,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [2225] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(79), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(258), 1,
      anon_sym_RBRACK,
    ACTIONS(386), 2,
      sym_number,
      anon_sym_COMMA,
    STATE(75), 3,
      sym_javascript_block,
      sym_javascript_expression,
      aux_sym__MFNumber,
  [2247] = 4,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(384), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(382), 4,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [2265] = 6,
    ACTIONS(348), 1,
      sym__word,
    ACTIONS(352), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(354), 1,
      anon_sym_hidden,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(78), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2287] = 6,
    ACTIONS(348), 1,
      sym__word,
    ACTIONS(352), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(354), 1,
      anon_sym_hidden,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(78), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2309] = 6,
    ACTIONS(348), 1,
      sym__word,
    ACTIONS(352), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(354), 1,
      anon_sym_hidden,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(83), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2331] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(79), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
    ACTIONS(386), 2,
      sym_number,
      anon_sym_COMMA,
    STATE(75), 3,
      sym_javascript_block,
      sym_javascript_expression,
      aux_sym__MFNumber,
  [2353] = 6,
    ACTIONS(348), 1,
      sym__word,
    ACTIONS(352), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(354), 1,
      anon_sym_hidden,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(88), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2375] = 6,
    ACTIONS(348), 1,
      sym__word,
    ACTIONS(352), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(354), 1,
      anon_sym_hidden,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(78), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2397] = 6,
    ACTIONS(348), 1,
      sym__word,
    ACTIONS(352), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(354), 1,
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
  [2419] = 6,
    ACTIONS(348), 1,
      sym__word,
    ACTIONS(352), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(354), 1,
      anon_sym_hidden,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(84), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2441] = 6,
    ACTIONS(348), 1,
      sym__word,
    ACTIONS(352), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(354), 1,
      anon_sym_hidden,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(78), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2463] = 6,
    ACTIONS(348), 1,
      sym__word,
    ACTIONS(352), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(354), 1,
      anon_sym_hidden,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(78), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
  [2485] = 6,
    ACTIONS(348), 1,
      sym__word,
    ACTIONS(352), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(354), 1,
      anon_sym_hidden,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    STATE(74), 3,
      sym_javascript_block,
      sym_property,
      aux_sym_node_repeat1,
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
    ACTIONS(145), 3,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
      anon_sym_COMMA,
    ACTIONS(147), 4,
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
    ACTIONS(149), 3,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
      anon_sym_COMMA,
    ACTIONS(151), 4,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [2597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
      anon_sym_COMMA,
    ACTIONS(155), 4,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [2612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(183), 5,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_COMMA,
  [2626] = 5,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_string,
    STATE(110), 1,
      aux_sym_extern_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(408), 2,
      anon_sym_IMPORTABLE,
      anon_sym_EXTERNPROTO,
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
  [2657] = 5,
    ACTIONS(55), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(414), 1,
      sym__word,
    STATE(33), 1,
      sym_javascript_expression,
    STATE(111), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2674] = 5,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(416), 1,
      sym__word,
    STATE(15), 1,
      sym_javascript_expression,
    STATE(140), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(123), 4,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
  [2704] = 5,
    ACTIONS(55), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(414), 1,
      sym__word,
    STATE(11), 1,
      sym_identifier,
    STATE(33), 1,
      sym_javascript_expression,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2721] = 3,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(418), 2,
      sym__word,
      anon_sym_hidden,
    ACTIONS(420), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT,
  [2734] = 5,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(416), 1,
      sym__word,
    STATE(15), 1,
      sym_javascript_expression,
    STATE(19), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2751] = 4,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      aux_sym_extern_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
    ACTIONS(422), 2,
      anon_sym_IMPORTABLE,
      anon_sym_EXTERNPROTO,
  [2766] = 5,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(416), 1,
      sym__word,
    STATE(15), 1,
      sym_javascript_expression,
    STATE(129), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2783] = 5,
    ACTIONS(79), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(427), 1,
      sym__word,
    STATE(95), 1,
      sym_identifier,
    STATE(96), 1,
      sym_javascript_expression,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2800] = 5,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(416), 1,
      sym__word,
    STATE(15), 1,
      sym_javascript_expression,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2817] = 5,
    ACTIONS(55), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(414), 1,
      sym__word,
    STATE(27), 1,
      sym_identifier,
    STATE(33), 1,
      sym_javascript_expression,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2834] = 5,
    ACTIONS(55), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(414), 1,
      sym__word,
    STATE(23), 1,
      sym_identifier,
    STATE(33), 1,
      sym_javascript_expression,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2851] = 5,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(416), 1,
      sym__word,
    STATE(15), 1,
      sym_javascript_expression,
    STATE(150), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2868] = 5,
    ACTIONS(55), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(414), 1,
      sym__word,
    STATE(33), 1,
      sym_javascript_expression,
    STATE(116), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2885] = 5,
    ACTIONS(55), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(414), 1,
      sym__word,
    STATE(33), 1,
      sym_javascript_expression,
    STATE(113), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
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
      sym__word,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2940] = 2,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2948] = 2,
    ACTIONS(441), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2956] = 2,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2964] = 2,
    ACTIONS(445), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2972] = 2,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2980] = 2,
    ACTIONS(451), 1,
      aux_sym_string_token1,
    ACTIONS(449), 2,
      sym_comment,
      anon_sym_COMMA,
  [2988] = 2,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [2996] = 2,
    ACTIONS(455), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3004] = 2,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3012] = 2,
    ACTIONS(457), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3020] = 2,
    ACTIONS(459), 1,
      sym__text_fragment,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3028] = 2,
    ACTIONS(461), 1,
      anon_sym_GT_PERCENT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3036] = 2,
    ACTIONS(463), 1,
      anon_sym_GT_PERCENT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3044] = 2,
    ACTIONS(465), 1,
      anon_sym_GT_PERCENT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3052] = 2,
    ACTIONS(467), 1,
      sym__text_fragment,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3060] = 2,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3068] = 2,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3076] = 2,
    ACTIONS(473), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3084] = 2,
    ACTIONS(475), 1,
      sym__text_fragment,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3092] = 2,
    ACTIONS(477), 1,
      sym__text_fragment,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3100] = 2,
    ACTIONS(479), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3108] = 2,
    ACTIONS(481), 1,
      aux_sym_string_token1,
    ACTIONS(449), 2,
      sym_comment,
      anon_sym_COMMA,
  [3116] = 2,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3124] = 2,
    ACTIONS(485), 1,
      sym__text_fragment,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3132] = 2,
    ACTIONS(487), 1,
      sym__text_fragment,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3140] = 2,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3148] = 2,
    ACTIONS(491), 1,
      aux_sym_string_token1,
    ACTIONS(449), 2,
      sym_comment,
      anon_sym_COMMA,
  [3156] = 2,
    ACTIONS(493), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3164] = 2,
    ACTIONS(495), 1,
      anon_sym_GT_PERCENT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3172] = 2,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3180] = 2,
    ACTIONS(497), 1,
      anon_sym_GT_PERCENT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3188] = 2,
    ACTIONS(499), 1,
      anon_sym_GT_PERCENT,
    ACTIONS(3), 2,
      sym_comment,
      anon_sym_COMMA,
  [3196] = 2,
    ACTIONS(501), 1,
      anon_sym_DQUOTE,
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
  [SMALL_STATE(11)] = 433,
  [SMALL_STATE(12)] = 480,
  [SMALL_STATE(13)] = 506,
  [SMALL_STATE(14)] = 554,
  [SMALL_STATE(15)] = 580,
  [SMALL_STATE(16)] = 605,
  [SMALL_STATE(17)] = 636,
  [SMALL_STATE(18)] = 660,
  [SMALL_STATE(19)] = 692,
  [SMALL_STATE(20)] = 715,
  [SMALL_STATE(21)] = 738,
  [SMALL_STATE(22)] = 761,
  [SMALL_STATE(23)] = 784,
  [SMALL_STATE(24)] = 807,
  [SMALL_STATE(25)] = 830,
  [SMALL_STATE(26)] = 853,
  [SMALL_STATE(27)] = 876,
  [SMALL_STATE(28)] = 899,
  [SMALL_STATE(29)] = 922,
  [SMALL_STATE(30)] = 945,
  [SMALL_STATE(31)] = 968,
  [SMALL_STATE(32)] = 993,
  [SMALL_STATE(33)] = 1016,
  [SMALL_STATE(34)] = 1039,
  [SMALL_STATE(35)] = 1062,
  [SMALL_STATE(36)] = 1091,
  [SMALL_STATE(37)] = 1119,
  [SMALL_STATE(38)] = 1144,
  [SMALL_STATE(39)] = 1169,
  [SMALL_STATE(40)] = 1194,
  [SMALL_STATE(41)] = 1218,
  [SMALL_STATE(42)] = 1254,
  [SMALL_STATE(43)] = 1288,
  [SMALL_STATE(44)] = 1322,
  [SMALL_STATE(45)] = 1352,
  [SMALL_STATE(46)] = 1388,
  [SMALL_STATE(47)] = 1422,
  [SMALL_STATE(48)] = 1446,
  [SMALL_STATE(49)] = 1480,
  [SMALL_STATE(50)] = 1504,
  [SMALL_STATE(51)] = 1538,
  [SMALL_STATE(52)] = 1572,
  [SMALL_STATE(53)] = 1598,
  [SMALL_STATE(54)] = 1632,
  [SMALL_STATE(55)] = 1666,
  [SMALL_STATE(56)] = 1686,
  [SMALL_STATE(57)] = 1722,
  [SMALL_STATE(58)] = 1741,
  [SMALL_STATE(59)] = 1768,
  [SMALL_STATE(60)] = 1794,
  [SMALL_STATE(61)] = 1820,
  [SMALL_STATE(62)] = 1846,
  [SMALL_STATE(63)] = 1872,
  [SMALL_STATE(64)] = 1895,
  [SMALL_STATE(65)] = 1910,
  [SMALL_STATE(66)] = 1925,
  [SMALL_STATE(67)] = 1950,
  [SMALL_STATE(68)] = 1965,
  [SMALL_STATE(69)] = 1988,
  [SMALL_STATE(70)] = 2013,
  [SMALL_STATE(71)] = 2028,
  [SMALL_STATE(72)] = 2053,
  [SMALL_STATE(73)] = 2068,
  [SMALL_STATE(74)] = 2085,
  [SMALL_STATE(75)] = 2107,
  [SMALL_STATE(76)] = 2129,
  [SMALL_STATE(77)] = 2147,
  [SMALL_STATE(78)] = 2169,
  [SMALL_STATE(79)] = 2191,
  [SMALL_STATE(80)] = 2207,
  [SMALL_STATE(81)] = 2225,
  [SMALL_STATE(82)] = 2247,
  [SMALL_STATE(83)] = 2265,
  [SMALL_STATE(84)] = 2287,
  [SMALL_STATE(85)] = 2309,
  [SMALL_STATE(86)] = 2331,
  [SMALL_STATE(87)] = 2353,
  [SMALL_STATE(88)] = 2375,
  [SMALL_STATE(89)] = 2397,
  [SMALL_STATE(90)] = 2419,
  [SMALL_STATE(91)] = 2441,
  [SMALL_STATE(92)] = 2463,
  [SMALL_STATE(93)] = 2485,
  [SMALL_STATE(94)] = 2507,
  [SMALL_STATE(95)] = 2522,
  [SMALL_STATE(96)] = 2537,
  [SMALL_STATE(97)] = 2552,
  [SMALL_STATE(98)] = 2567,
  [SMALL_STATE(99)] = 2582,
  [SMALL_STATE(100)] = 2597,
  [SMALL_STATE(101)] = 2612,
  [SMALL_STATE(102)] = 2626,
  [SMALL_STATE(103)] = 2644,
  [SMALL_STATE(104)] = 2657,
  [SMALL_STATE(105)] = 2674,
  [SMALL_STATE(106)] = 2691,
  [SMALL_STATE(107)] = 2704,
  [SMALL_STATE(108)] = 2721,
  [SMALL_STATE(109)] = 2734,
  [SMALL_STATE(110)] = 2751,
  [SMALL_STATE(111)] = 2766,
  [SMALL_STATE(112)] = 2783,
  [SMALL_STATE(113)] = 2800,
  [SMALL_STATE(114)] = 2817,
  [SMALL_STATE(115)] = 2834,
  [SMALL_STATE(116)] = 2851,
  [SMALL_STATE(117)] = 2868,
  [SMALL_STATE(118)] = 2885,
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
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldDecl, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_javascript_expression, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_javascript_expression, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vecf_repeat1, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vecf_repeat1, 2, 0, 0),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vecf_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vecf_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vecf, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vecf, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldValue, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vecf_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vecf_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFNode, 2, 0, 0), SHIFT_REPEAT(15),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFNode, 2, 0, 0),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFNode, 2, 0, 0), SHIFT_REPEAT(146),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFNode, 2, 0, 0), SHIFT_REPEAT(147),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFNode, 2, 0, 0), SHIFT_REPEAT(112),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFNode, 2, 0, 0), SHIFT_REPEAT(117),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFNode, 2, 0, 0), SHIFT_REPEAT(41),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(15),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(133),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(137),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(109),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(104),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__MFNode, 1, 0, 0),
  [242] = {.entry = {.count = 4, .reusable = true}}, REDUCE(aux_sym__MFBool, 1, 0, 0), REDUCE(aux_sym__MFNumber, 1, 0, 0), REDUCE(aux_sym__MFString, 1, 0, 0), REDUCE(aux_sym__MFNode, 1, 0, 0),
  [247] = {.entry = {.count = 4, .reusable = false}}, REDUCE(aux_sym__MFBool, 1, 0, 0), REDUCE(aux_sym__MFNumber, 1, 0, 0), REDUCE(aux_sym__MFString, 1, 0, 0), REDUCE(aux_sym__MFNode, 1, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__MFBool, 1, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFNumber, 1, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFString, 1, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(141),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(142),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(114),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(118),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proto_repeat1, 2, 0, 0),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proto_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_javascript_block, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_javascript_block, 3, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFBool, 2, 0, 0),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFBool, 2, 0, 0), SHIFT_REPEAT(146),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFBool, 2, 0, 0), SHIFT_REPEAT(147),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFBool, 2, 0, 0), SHIFT_REPEAT(101),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFBool, 2, 0, 0), SHIFT_REPEAT(60),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFString, 2, 0, 0),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFString, 2, 0, 0), SHIFT_REPEAT(146),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFString, 2, 0, 0), SHIFT_REPEAT(147),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFString, 2, 0, 0), SHIFT_REPEAT(144),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFString, 2, 0, 0), SHIFT_REPEAT(69),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 5),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern, 2, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 2, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFNumber, 2, 0, 0),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFNumber, 2, 0, 0), SHIFT_REPEAT(146),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFNumber, 2, 0, 0), SHIFT_REPEAT(147),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFNumber, 2, 0, 0), SHIFT_REPEAT(75),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFNode, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2, 0, 0),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 1, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, 0, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, 0, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2, 0, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, 0, 1),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extern_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extern_repeat1, 2, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldType, 1, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldType, 4, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldType, 3, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [445] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proto, 6, 0, 4),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proto, 8, 0, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proto, 7, 0, 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
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

TS_PUBLIC const TSLanguage *tree_sitter_wbproto(void) {
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

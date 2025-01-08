#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 107
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_definition = 1,
  sym_string = 2,
  aux_sym_float_token1 = 3,
  aux_sym_float_token2 = 4,
  aux_sym_float_token3 = 5,
  sym_ratio = 6,
  sym_base10 = 7,
  sym_base16 = 8,
  sym_base08 = 9,
  sym_base02 = 10,
  anon_sym_CHAR_COLON = 11,
  anon_sym_BSLASH = 12,
  anon_sym_POSTPONE_COLON = 13,
  sym_word = 14,
  aux_sym_char_token1 = 15,
  aux_sym_char_token2 = 16,
  aux_sym_unicode_token1 = 17,
  aux_sym_unicode_token2 = 18,
  aux_sym_unicode_token3 = 19,
  aux_sym_unicode_token4 = 20,
  anon_sym_RBRACE = 21,
  aux_sym_unicode_name_token1 = 22,
  sym_octcode = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_LBRACE = 26,
  anon_sym_B_LBRACE = 27,
  anon_sym_C_LBRACE = 28,
  anon_sym_HS_LBRACE = 29,
  anon_sym_H_LBRACE = 30,
  anon_sym_IH_LBRACE = 31,
  anon_sym_P_DQUOTE = 32,
  aux_sym_pathname_token1 = 33,
  anon_sym_SBUF_DQUOTE = 34,
  anon_sym_V_LBRACE = 35,
  anon_sym_T_LBRACE = 36,
  sym_symbol = 37,
  sym_f = 38,
  anon_sym_LPAREN = 39,
  anon_sym_DASH_DASH = 40,
  anon_sym_RPAREN = 41,
  sym_source_file = 42,
  sym__declaration = 43,
  sym__top_level_form = 44,
  sym_number = 45,
  sym_float = 46,
  sym_integer = 47,
  sym_unary_postfix = 48,
  sym_unary_op = 49,
  sym_char = 50,
  sym_unicode = 51,
  sym_unicode_name = 52,
  sym_quote = 53,
  sym_collection = 54,
  sym_array = 55,
  sym_byte_array = 56,
  sym_complex = 57,
  sym_hashset = 58,
  sym_hashtable = 59,
  sym_id_hashtable = 60,
  sym_pathname = 61,
  sym_string_buffer = 62,
  sym_vector = 63,
  sym_tuple = 64,
  sym_property_pair = 65,
  sym_effect = 66,
  sym_inputs = 67,
  sym_outputs = 68,
  sym__effect_item = 69,
  aux_sym_source_file_repeat1 = 70,
  aux_sym_quote_repeat1 = 71,
  aux_sym_byte_array_repeat1 = 72,
  aux_sym_hashtable_repeat1 = 73,
  aux_sym_tuple_repeat1 = 74,
  aux_sym_inputs_repeat1 = 75,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_definition] = "definition",
  [sym_string] = "string",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [aux_sym_float_token3] = "float_token3",
  [sym_ratio] = "ratio",
  [sym_base10] = "base10",
  [sym_base16] = "base16",
  [sym_base08] = "base08",
  [sym_base02] = "base02",
  [anon_sym_CHAR_COLON] = "CHAR:",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_POSTPONE_COLON] = "POSTPONE:",
  [sym_word] = "word",
  [aux_sym_char_token1] = "char_token1",
  [aux_sym_char_token2] = "char_token2",
  [aux_sym_unicode_token1] = "unicode_token1",
  [aux_sym_unicode_token2] = "unicode_token2",
  [aux_sym_unicode_token3] = "unicode_token3",
  [aux_sym_unicode_token4] = "unicode_token4",
  [anon_sym_RBRACE] = "}",
  [aux_sym_unicode_name_token1] = "unicode_name_token1",
  [sym_octcode] = "octcode",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_B_LBRACE] = "B{",
  [anon_sym_C_LBRACE] = "C{",
  [anon_sym_HS_LBRACE] = "HS{",
  [anon_sym_H_LBRACE] = "H{",
  [anon_sym_IH_LBRACE] = "IH{",
  [anon_sym_P_DQUOTE] = "P\"",
  [aux_sym_pathname_token1] = "pathname_token1",
  [anon_sym_SBUF_DQUOTE] = "SBUF\"",
  [anon_sym_V_LBRACE] = "V{",
  [anon_sym_T_LBRACE] = "T{",
  [sym_symbol] = "symbol",
  [sym_f] = "f",
  [anon_sym_LPAREN] = "(",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym__top_level_form] = "_top_level_form",
  [sym_number] = "number",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [sym_unary_postfix] = "unary_postfix",
  [sym_unary_op] = "unary_op",
  [sym_char] = "char",
  [sym_unicode] = "unicode",
  [sym_unicode_name] = "unicode_name",
  [sym_quote] = "quote",
  [sym_collection] = "collection",
  [sym_array] = "array",
  [sym_byte_array] = "byte_array",
  [sym_complex] = "complex",
  [sym_hashset] = "hashset",
  [sym_hashtable] = "hashtable",
  [sym_id_hashtable] = "id_hashtable",
  [sym_pathname] = "pathname",
  [sym_string_buffer] = "string_buffer",
  [sym_vector] = "vector",
  [sym_tuple] = "tuple",
  [sym_property_pair] = "property_pair",
  [sym_effect] = "effect",
  [sym_inputs] = "inputs",
  [sym_outputs] = "outputs",
  [sym__effect_item] = "_effect_item",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_quote_repeat1] = "quote_repeat1",
  [aux_sym_byte_array_repeat1] = "byte_array_repeat1",
  [aux_sym_hashtable_repeat1] = "hashtable_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_inputs_repeat1] = "inputs_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_definition] = sym_definition,
  [sym_string] = sym_string,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [aux_sym_float_token3] = aux_sym_float_token3,
  [sym_ratio] = sym_ratio,
  [sym_base10] = sym_base10,
  [sym_base16] = sym_base16,
  [sym_base08] = sym_base08,
  [sym_base02] = sym_base02,
  [anon_sym_CHAR_COLON] = anon_sym_CHAR_COLON,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_POSTPONE_COLON] = anon_sym_POSTPONE_COLON,
  [sym_word] = sym_word,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [aux_sym_char_token2] = aux_sym_char_token2,
  [aux_sym_unicode_token1] = aux_sym_unicode_token1,
  [aux_sym_unicode_token2] = aux_sym_unicode_token2,
  [aux_sym_unicode_token3] = aux_sym_unicode_token3,
  [aux_sym_unicode_token4] = aux_sym_unicode_token4,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_unicode_name_token1] = aux_sym_unicode_name_token1,
  [sym_octcode] = sym_octcode,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_B_LBRACE] = anon_sym_B_LBRACE,
  [anon_sym_C_LBRACE] = anon_sym_C_LBRACE,
  [anon_sym_HS_LBRACE] = anon_sym_HS_LBRACE,
  [anon_sym_H_LBRACE] = anon_sym_H_LBRACE,
  [anon_sym_IH_LBRACE] = anon_sym_IH_LBRACE,
  [anon_sym_P_DQUOTE] = anon_sym_P_DQUOTE,
  [aux_sym_pathname_token1] = aux_sym_pathname_token1,
  [anon_sym_SBUF_DQUOTE] = anon_sym_SBUF_DQUOTE,
  [anon_sym_V_LBRACE] = anon_sym_V_LBRACE,
  [anon_sym_T_LBRACE] = anon_sym_T_LBRACE,
  [sym_symbol] = sym_symbol,
  [sym_f] = sym_f,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym__top_level_form] = sym__top_level_form,
  [sym_number] = sym_number,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [sym_unary_postfix] = sym_unary_postfix,
  [sym_unary_op] = sym_unary_op,
  [sym_char] = sym_char,
  [sym_unicode] = sym_unicode,
  [sym_unicode_name] = sym_unicode_name,
  [sym_quote] = sym_quote,
  [sym_collection] = sym_collection,
  [sym_array] = sym_array,
  [sym_byte_array] = sym_byte_array,
  [sym_complex] = sym_complex,
  [sym_hashset] = sym_hashset,
  [sym_hashtable] = sym_hashtable,
  [sym_id_hashtable] = sym_id_hashtable,
  [sym_pathname] = sym_pathname,
  [sym_string_buffer] = sym_string_buffer,
  [sym_vector] = sym_vector,
  [sym_tuple] = sym_tuple,
  [sym_property_pair] = sym_property_pair,
  [sym_effect] = sym_effect,
  [sym_inputs] = sym_inputs,
  [sym_outputs] = sym_outputs,
  [sym__effect_item] = sym__effect_item,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_quote_repeat1] = aux_sym_quote_repeat1,
  [aux_sym_byte_array_repeat1] = aux_sym_byte_array_repeat1,
  [aux_sym_hashtable_repeat1] = aux_sym_hashtable_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
  [aux_sym_inputs_repeat1] = aux_sym_inputs_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_ratio] = {
    .visible = true,
    .named = true,
  },
  [sym_base10] = {
    .visible = true,
    .named = true,
  },
  [sym_base16] = {
    .visible = true,
    .named = true,
  },
  [sym_base08] = {
    .visible = true,
    .named = true,
  },
  [sym_base02] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CHAR_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POSTPONE_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unicode_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unicode_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unicode_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unicode_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unicode_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_octcode] = {
    .visible = true,
    .named = true,
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
  [anon_sym_B_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_C_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HS_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IH_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_P_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_pathname_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SBUF_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_V_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_T_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_f] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__top_level_form] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_postfix] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_unicode] = {
    .visible = true,
    .named = true,
  },
  [sym_unicode_name] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_collection] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_array] = {
    .visible = true,
    .named = true,
  },
  [sym_complex] = {
    .visible = true,
    .named = true,
  },
  [sym_hashset] = {
    .visible = true,
    .named = true,
  },
  [sym_hashtable] = {
    .visible = true,
    .named = true,
  },
  [sym_id_hashtable] = {
    .visible = true,
    .named = true,
  },
  [sym_pathname] = {
    .visible = true,
    .named = true,
  },
  [sym_string_buffer] = {
    .visible = true,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_property_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_effect] = {
    .visible = true,
    .named = true,
  },
  [sym_inputs] = {
    .visible = true,
    .named = true,
  },
  [sym_outputs] = {
    .visible = true,
    .named = true,
  },
  [sym__effect_item] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quote_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_byte_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hashtable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inputs_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_input = 1,
  field_output = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_input] = "input",
  [field_output] = "output",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_output, 2},
  [1] =
    {field_input, 1},
  [2] =
    {field_input, 1},
    {field_output, 3},
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
  [58] = 55,
  [59] = 52,
  [60] = 52,
  [61] = 55,
  [62] = 56,
  [63] = 56,
  [64] = 64,
  [65] = 65,
  [66] = 65,
  [67] = 67,
  [68] = 68,
  [69] = 28,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 46,
  [78] = 38,
  [79] = 45,
  [80] = 17,
  [81] = 38,
  [82] = 45,
  [83] = 46,
  [84] = 17,
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
  [98] = 91,
  [99] = 96,
  [100] = 96,
  [101] = 101,
  [102] = 91,
  [103] = 103,
  [104] = 93,
  [105] = 105,
  [106] = 93,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(93);
      ADVANCE_MAP(
        '(', 168,
        ')', 172,
        'P', 134,
        '[', 148,
        '\\', 129,
        ']', 149,
        'd', 135,
        'f', 167,
        '{', 150,
        '}', 142,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == 'O') ADVANCE(39);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(159);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == ')') ADVANCE(173);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(166);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(168);
      if (lookahead == '-') ADVANCE(164);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(166);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '0') ADVANCE(102);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(102);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(108);
      if (lookahead == '}') ADVANCE(142);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(108);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(130);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(128);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'B') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(94);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'F') ADVANCE(4);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(17);
      if (lookahead == '{') ADVANCE(152);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(61);
      END_STATE();
    case 27:
      if (lookahead == 'I') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 'L') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'M') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'M') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(20);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'N') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'O') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'O') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'P') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'P') ADVANCE(28);
      END_STATE();
    case 38:
      if (lookahead == 'R') ADVANCE(16);
      END_STATE();
    case 39:
      if (lookahead == 'S') ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == '{') ADVANCE(154);
      END_STATE();
    case 41:
      if (lookahead == 'T') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'T') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 44:
      if (lookahead == 'U') ADVANCE(24);
      END_STATE();
    case 45:
      if (lookahead == '\\') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(27);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 57:
      if (lookahead == '{') ADVANCE(151);
      END_STATE();
    case 58:
      if (lookahead == '{') ADVANCE(161);
      END_STATE();
    case 59:
      if (lookahead == '{') ADVANCE(160);
      END_STATE();
    case 60:
      if (lookahead == '{') ADVANCE(153);
      END_STATE();
    case 61:
      if (lookahead == '{') ADVANCE(155);
      END_STATE();
    case 62:
      if (lookahead == '{') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 63:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 64:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(126);
      END_STATE();
    case 65:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(123);
      END_STATE();
    case 66:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(66);
      END_STATE();
    case 68:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(144);
      END_STATE();
    case 69:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(69);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 70:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(') ADVANCE(166);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(121);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(118);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(72);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(73);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 92:
      if (eof) ADVANCE(93);
      ADVANCE_MAP(
        '"', 1,
        '(', 168,
        ')', 172,
        '+', 12,
        '-', 10,
        '0', 102,
        'B', 57,
        'C', 25,
        'H', 40,
        'I', 26,
        'P', 2,
        'S', 18,
        'T', 58,
        'V', 59,
        '[', 148,
        '\\', 129,
        ']', 149,
        'd', 48,
        'f', 167,
        '{', 150,
        '}', 142,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(92);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_definition);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_float_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_ratio);
      if (lookahead == '.') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 100,
        '/', 75,
        '+', 76,
        '-', 76,
        ',', 80,
        '_', 80,
        'B', 64,
        'b', 64,
        'E', 63,
        'e', 63,
        'O', 71,
        'o', 71,
        'X', 81,
        'x', 81,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 100,
        '/', 75,
        '+', 76,
        '-', 76,
        ',', 80,
        '_', 80,
        'E', 63,
        'e', 63,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 100,
        '/', 75,
        '+', 76,
        '-', 76,
        ',', 80,
        '_', 80,
        'E', 63,
        'e', 63,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        '.', 100,
        '/', 75,
        '+', 76,
        '-', 76,
        ',', 80,
        '_', 80,
        'E', 63,
        'e', 63,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_base10);
      ADVANCE_MAP(
        ',', 80,
        '_', 80,
        'B', 64,
        'b', 64,
        'O', 71,
        'o', 71,
        'X', 81,
        'x', 81,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_base10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(88);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_base16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_base08);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(67);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(67);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(127);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(67);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(67);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_base02);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_CHAR_COLON);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_POSTPONE_COLON);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '0') ADVANCE(137);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(62);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(86);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(147);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 'v')) ADVANCE(136);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'O') ADVANCE(39);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_char_token2);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_unicode_token1);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_unicode_token2);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_unicode_token3);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_unicode_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_unicode_name_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_unicode_name_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_octcode);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_octcode);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_octcode);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_B_LBRACE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_C_LBRACE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_HS_LBRACE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_H_LBRACE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_IH_LBRACE);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_P_DQUOTE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_pathname_token1);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_pathname_token1);
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_SBUF_DQUOTE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_V_LBRACE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_T_LBRACE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == ')') ADVANCE(173);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0) ADVANCE(166);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == '-') ADVANCE(164);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0) ADVANCE(166);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"' ||
          lookahead == '(') ADVANCE(166);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0) ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_f);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 92},
  [2] = {.lex_state = 92},
  [3] = {.lex_state = 92},
  [4] = {.lex_state = 92},
  [5] = {.lex_state = 92},
  [6] = {.lex_state = 92},
  [7] = {.lex_state = 92},
  [8] = {.lex_state = 92},
  [9] = {.lex_state = 92},
  [10] = {.lex_state = 92},
  [11] = {.lex_state = 92},
  [12] = {.lex_state = 92},
  [13] = {.lex_state = 92},
  [14] = {.lex_state = 92},
  [15] = {.lex_state = 92},
  [16] = {.lex_state = 92},
  [17] = {.lex_state = 92},
  [18] = {.lex_state = 92},
  [19] = {.lex_state = 92},
  [20] = {.lex_state = 92},
  [21] = {.lex_state = 92},
  [22] = {.lex_state = 92},
  [23] = {.lex_state = 92},
  [24] = {.lex_state = 92},
  [25] = {.lex_state = 92},
  [26] = {.lex_state = 92},
  [27] = {.lex_state = 92},
  [28] = {.lex_state = 92},
  [29] = {.lex_state = 92},
  [30] = {.lex_state = 92},
  [31] = {.lex_state = 92},
  [32] = {.lex_state = 92},
  [33] = {.lex_state = 92},
  [34] = {.lex_state = 92},
  [35] = {.lex_state = 92},
  [36] = {.lex_state = 92},
  [37] = {.lex_state = 92},
  [38] = {.lex_state = 92},
  [39] = {.lex_state = 92},
  [40] = {.lex_state = 92},
  [41] = {.lex_state = 92},
  [42] = {.lex_state = 92},
  [43] = {.lex_state = 92},
  [44] = {.lex_state = 92},
  [45] = {.lex_state = 92},
  [46] = {.lex_state = 92},
  [47] = {.lex_state = 92},
  [48] = {.lex_state = 92},
  [49] = {.lex_state = 92},
  [50] = {.lex_state = 92},
  [51] = {.lex_state = 45},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 92},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 92},
  [71] = {.lex_state = 92},
  [72] = {.lex_state = 92},
  [73] = {.lex_state = 92},
  [74] = {.lex_state = 92},
  [75] = {.lex_state = 92},
  [76] = {.lex_state = 92},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 92},
  [86] = {.lex_state = 68},
  [87] = {.lex_state = 69},
  [88] = {.lex_state = 70},
  [89] = {.lex_state = 92},
  [90] = {.lex_state = 70},
  [91] = {.lex_state = 92},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 92},
  [94] = {.lex_state = 69},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 92},
  [97] = {.lex_state = 92},
  [98] = {.lex_state = 92},
  [99] = {.lex_state = 92},
  [100] = {.lex_state = 92},
  [101] = {.lex_state = 92},
  [102] = {.lex_state = 92},
  [103] = {.lex_state = 92},
  [104] = {.lex_state = 92},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 92},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_definition] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_POSTPONE_COLON] = ACTIONS(1),
    [aux_sym_char_token1] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym_f] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(105),
    [sym__declaration] = STATE(3),
    [sym__top_level_form] = STATE(3),
    [sym_number] = STATE(3),
    [sym_float] = STATE(26),
    [sym_integer] = STATE(26),
    [sym_unary_postfix] = STATE(3),
    [sym_unary_op] = STATE(94),
    [sym_quote] = STATE(3),
    [sym_collection] = STATE(3),
    [sym_array] = STATE(27),
    [sym_byte_array] = STATE(27),
    [sym_complex] = STATE(27),
    [sym_hashset] = STATE(27),
    [sym_hashtable] = STATE(27),
    [sym_id_hashtable] = STATE(27),
    [sym_pathname] = STATE(27),
    [sym_string_buffer] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_tuple] = STATE(3),
    [sym_effect] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_definition] = ACTIONS(5),
    [sym_string] = ACTIONS(5),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_CHAR_COLON] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POSTPONE_COLON] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [2] = {
    [sym__declaration] = STATE(2),
    [sym__top_level_form] = STATE(2),
    [sym_number] = STATE(2),
    [sym_float] = STATE(26),
    [sym_integer] = STATE(26),
    [sym_unary_postfix] = STATE(2),
    [sym_unary_op] = STATE(94),
    [sym_quote] = STATE(2),
    [sym_collection] = STATE(2),
    [sym_array] = STATE(27),
    [sym_byte_array] = STATE(27),
    [sym_complex] = STATE(27),
    [sym_hashset] = STATE(27),
    [sym_hashtable] = STATE(27),
    [sym_id_hashtable] = STATE(27),
    [sym_pathname] = STATE(27),
    [sym_string_buffer] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_tuple] = STATE(2),
    [sym_effect] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_definition] = ACTIONS(47),
    [sym_string] = ACTIONS(47),
    [aux_sym_float_token1] = ACTIONS(50),
    [aux_sym_float_token2] = ACTIONS(50),
    [aux_sym_float_token3] = ACTIONS(53),
    [sym_ratio] = ACTIONS(56),
    [sym_base10] = ACTIONS(59),
    [sym_base16] = ACTIONS(62),
    [sym_base08] = ACTIONS(62),
    [sym_base02] = ACTIONS(62),
    [anon_sym_CHAR_COLON] = ACTIONS(65),
    [anon_sym_BSLASH] = ACTIONS(68),
    [anon_sym_POSTPONE_COLON] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_B_LBRACE] = ACTIONS(77),
    [anon_sym_C_LBRACE] = ACTIONS(80),
    [anon_sym_HS_LBRACE] = ACTIONS(83),
    [anon_sym_H_LBRACE] = ACTIONS(86),
    [anon_sym_IH_LBRACE] = ACTIONS(89),
    [anon_sym_P_DQUOTE] = ACTIONS(92),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(95),
    [anon_sym_V_LBRACE] = ACTIONS(98),
    [anon_sym_T_LBRACE] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(104),
  },
  [3] = {
    [sym__declaration] = STATE(2),
    [sym__top_level_form] = STATE(2),
    [sym_number] = STATE(2),
    [sym_float] = STATE(26),
    [sym_integer] = STATE(26),
    [sym_unary_postfix] = STATE(2),
    [sym_unary_op] = STATE(94),
    [sym_quote] = STATE(2),
    [sym_collection] = STATE(2),
    [sym_array] = STATE(27),
    [sym_byte_array] = STATE(27),
    [sym_complex] = STATE(27),
    [sym_hashset] = STATE(27),
    [sym_hashtable] = STATE(27),
    [sym_id_hashtable] = STATE(27),
    [sym_pathname] = STATE(27),
    [sym_string_buffer] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_tuple] = STATE(2),
    [sym_effect] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_definition] = ACTIONS(109),
    [sym_string] = ACTIONS(109),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_CHAR_COLON] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POSTPONE_COLON] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [4] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(26),
    [sym_integer] = STATE(26),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(94),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(27),
    [sym_byte_array] = STATE(27),
    [sym_complex] = STATE(27),
    [sym_hashset] = STATE(27),
    [sym_hashtable] = STATE(27),
    [sym_id_hashtable] = STATE(27),
    [sym_pathname] = STATE(27),
    [sym_string_buffer] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_tuple] = STATE(4),
    [sym_effect] = STATE(4),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(111),
    [aux_sym_float_token1] = ACTIONS(114),
    [aux_sym_float_token2] = ACTIONS(114),
    [aux_sym_float_token3] = ACTIONS(117),
    [sym_ratio] = ACTIONS(120),
    [sym_base10] = ACTIONS(123),
    [sym_base16] = ACTIONS(126),
    [sym_base08] = ACTIONS(126),
    [sym_base02] = ACTIONS(126),
    [anon_sym_CHAR_COLON] = ACTIONS(129),
    [anon_sym_BSLASH] = ACTIONS(132),
    [anon_sym_POSTPONE_COLON] = ACTIONS(132),
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_B_LBRACE] = ACTIONS(143),
    [anon_sym_C_LBRACE] = ACTIONS(146),
    [anon_sym_HS_LBRACE] = ACTIONS(149),
    [anon_sym_H_LBRACE] = ACTIONS(152),
    [anon_sym_IH_LBRACE] = ACTIONS(155),
    [anon_sym_P_DQUOTE] = ACTIONS(158),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(161),
    [anon_sym_V_LBRACE] = ACTIONS(164),
    [anon_sym_T_LBRACE] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(170),
  },
  [5] = {
    [sym__top_level_form] = STATE(9),
    [sym_number] = STATE(9),
    [sym_float] = STATE(26),
    [sym_integer] = STATE(26),
    [sym_unary_postfix] = STATE(9),
    [sym_unary_op] = STATE(94),
    [sym_quote] = STATE(9),
    [sym_collection] = STATE(9),
    [sym_array] = STATE(27),
    [sym_byte_array] = STATE(27),
    [sym_complex] = STATE(27),
    [sym_hashset] = STATE(27),
    [sym_hashtable] = STATE(27),
    [sym_id_hashtable] = STATE(27),
    [sym_pathname] = STATE(27),
    [sym_string_buffer] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_tuple] = STATE(9),
    [sym_effect] = STATE(9),
    [aux_sym_quote_repeat1] = STATE(9),
    [sym_string] = ACTIONS(173),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_CHAR_COLON] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POSTPONE_COLON] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [6] = {
    [sym__top_level_form] = STATE(8),
    [sym_number] = STATE(8),
    [sym_float] = STATE(26),
    [sym_integer] = STATE(26),
    [sym_unary_postfix] = STATE(8),
    [sym_unary_op] = STATE(94),
    [sym_quote] = STATE(8),
    [sym_collection] = STATE(8),
    [sym_array] = STATE(27),
    [sym_byte_array] = STATE(27),
    [sym_complex] = STATE(27),
    [sym_hashset] = STATE(27),
    [sym_hashtable] = STATE(27),
    [sym_id_hashtable] = STATE(27),
    [sym_pathname] = STATE(27),
    [sym_string_buffer] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_tuple] = STATE(8),
    [sym_effect] = STATE(8),
    [aux_sym_quote_repeat1] = STATE(8),
    [sym_string] = ACTIONS(177),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_CHAR_COLON] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POSTPONE_COLON] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [7] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(26),
    [sym_integer] = STATE(26),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(94),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(27),
    [sym_byte_array] = STATE(27),
    [sym_complex] = STATE(27),
    [sym_hashset] = STATE(27),
    [sym_hashtable] = STATE(27),
    [sym_id_hashtable] = STATE(27),
    [sym_pathname] = STATE(27),
    [sym_string_buffer] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_tuple] = STATE(4),
    [sym_effect] = STATE(4),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(181),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_CHAR_COLON] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POSTPONE_COLON] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [8] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(26),
    [sym_integer] = STATE(26),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(94),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(27),
    [sym_byte_array] = STATE(27),
    [sym_complex] = STATE(27),
    [sym_hashset] = STATE(27),
    [sym_hashtable] = STATE(27),
    [sym_id_hashtable] = STATE(27),
    [sym_pathname] = STATE(27),
    [sym_string_buffer] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_tuple] = STATE(4),
    [sym_effect] = STATE(4),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(181),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_CHAR_COLON] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POSTPONE_COLON] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [9] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(26),
    [sym_integer] = STATE(26),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(94),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(27),
    [sym_byte_array] = STATE(27),
    [sym_complex] = STATE(27),
    [sym_hashset] = STATE(27),
    [sym_hashtable] = STATE(27),
    [sym_id_hashtable] = STATE(27),
    [sym_pathname] = STATE(27),
    [sym_string_buffer] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_tuple] = STATE(4),
    [sym_effect] = STATE(4),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(181),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_CHAR_COLON] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POSTPONE_COLON] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [10] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(26),
    [sym_integer] = STATE(26),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(94),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(27),
    [sym_byte_array] = STATE(27),
    [sym_complex] = STATE(27),
    [sym_hashset] = STATE(27),
    [sym_hashtable] = STATE(27),
    [sym_id_hashtable] = STATE(27),
    [sym_pathname] = STATE(27),
    [sym_string_buffer] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_tuple] = STATE(4),
    [sym_effect] = STATE(4),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(181),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_CHAR_COLON] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POSTPONE_COLON] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [11] = {
    [sym__top_level_form] = STATE(7),
    [sym_number] = STATE(7),
    [sym_float] = STATE(26),
    [sym_integer] = STATE(26),
    [sym_unary_postfix] = STATE(7),
    [sym_unary_op] = STATE(94),
    [sym_quote] = STATE(7),
    [sym_collection] = STATE(7),
    [sym_array] = STATE(27),
    [sym_byte_array] = STATE(27),
    [sym_complex] = STATE(27),
    [sym_hashset] = STATE(27),
    [sym_hashtable] = STATE(27),
    [sym_id_hashtable] = STATE(27),
    [sym_pathname] = STATE(27),
    [sym_string_buffer] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_tuple] = STATE(7),
    [sym_effect] = STATE(7),
    [aux_sym_quote_repeat1] = STATE(7),
    [sym_string] = ACTIONS(191),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_CHAR_COLON] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POSTPONE_COLON] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [12] = {
    [sym__top_level_form] = STATE(10),
    [sym_number] = STATE(10),
    [sym_float] = STATE(26),
    [sym_integer] = STATE(26),
    [sym_unary_postfix] = STATE(10),
    [sym_unary_op] = STATE(94),
    [sym_quote] = STATE(10),
    [sym_collection] = STATE(10),
    [sym_array] = STATE(27),
    [sym_byte_array] = STATE(27),
    [sym_complex] = STATE(27),
    [sym_hashset] = STATE(27),
    [sym_hashtable] = STATE(27),
    [sym_id_hashtable] = STATE(27),
    [sym_pathname] = STATE(27),
    [sym_string_buffer] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_tuple] = STATE(10),
    [sym_effect] = STATE(10),
    [aux_sym_quote_repeat1] = STATE(10),
    [sym_string] = ACTIONS(195),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_CHAR_COLON] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POSTPONE_COLON] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [13] = {
    [sym__top_level_form] = STATE(4),
    [sym_number] = STATE(4),
    [sym_float] = STATE(26),
    [sym_integer] = STATE(26),
    [sym_unary_postfix] = STATE(4),
    [sym_unary_op] = STATE(94),
    [sym_quote] = STATE(4),
    [sym_collection] = STATE(4),
    [sym_array] = STATE(27),
    [sym_byte_array] = STATE(27),
    [sym_complex] = STATE(27),
    [sym_hashset] = STATE(27),
    [sym_hashtable] = STATE(27),
    [sym_id_hashtable] = STATE(27),
    [sym_pathname] = STATE(27),
    [sym_string_buffer] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_tuple] = STATE(4),
    [sym_effect] = STATE(4),
    [aux_sym_quote_repeat1] = STATE(4),
    [sym_string] = ACTIONS(181),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_CHAR_COLON] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POSTPONE_COLON] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [14] = {
    [sym__top_level_form] = STATE(13),
    [sym_number] = STATE(13),
    [sym_float] = STATE(26),
    [sym_integer] = STATE(26),
    [sym_unary_postfix] = STATE(13),
    [sym_unary_op] = STATE(94),
    [sym_quote] = STATE(13),
    [sym_collection] = STATE(13),
    [sym_array] = STATE(27),
    [sym_byte_array] = STATE(27),
    [sym_complex] = STATE(27),
    [sym_hashset] = STATE(27),
    [sym_hashtable] = STATE(27),
    [sym_id_hashtable] = STATE(27),
    [sym_pathname] = STATE(27),
    [sym_string_buffer] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_tuple] = STATE(13),
    [sym_effect] = STATE(13),
    [aux_sym_quote_repeat1] = STATE(13),
    [sym_string] = ACTIONS(201),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_CHAR_COLON] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POSTPONE_COLON] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [15] = {
    [sym__top_level_form] = STATE(89),
    [sym_number] = STATE(89),
    [sym_float] = STATE(26),
    [sym_integer] = STATE(26),
    [sym_unary_postfix] = STATE(89),
    [sym_unary_op] = STATE(94),
    [sym_quote] = STATE(89),
    [sym_collection] = STATE(89),
    [sym_array] = STATE(27),
    [sym_byte_array] = STATE(27),
    [sym_complex] = STATE(27),
    [sym_hashset] = STATE(27),
    [sym_hashtable] = STATE(27),
    [sym_id_hashtable] = STATE(27),
    [sym_pathname] = STATE(27),
    [sym_string_buffer] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_tuple] = STATE(89),
    [sym_effect] = STATE(89),
    [sym_string] = ACTIONS(205),
    [aux_sym_float_token1] = ACTIONS(7),
    [aux_sym_float_token2] = ACTIONS(7),
    [aux_sym_float_token3] = ACTIONS(9),
    [sym_ratio] = ACTIONS(11),
    [sym_base10] = ACTIONS(13),
    [sym_base16] = ACTIONS(15),
    [sym_base08] = ACTIONS(15),
    [sym_base02] = ACTIONS(15),
    [anon_sym_CHAR_COLON] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_POSTPONE_COLON] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_B_LBRACE] = ACTIONS(25),
    [anon_sym_C_LBRACE] = ACTIONS(27),
    [anon_sym_HS_LBRACE] = ACTIONS(29),
    [anon_sym_H_LBRACE] = ACTIONS(31),
    [anon_sym_IH_LBRACE] = ACTIONS(33),
    [anon_sym_P_DQUOTE] = ACTIONS(35),
    [anon_sym_SBUF_DQUOTE] = ACTIONS(37),
    [anon_sym_V_LBRACE] = ACTIONS(39),
    [anon_sym_T_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(209), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(207), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [33] = 2,
    ACTIONS(213), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(211), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [66] = 2,
    ACTIONS(217), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(215), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [99] = 2,
    ACTIONS(221), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(219), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [132] = 2,
    ACTIONS(225), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(223), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [165] = 2,
    ACTIONS(229), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(227), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [198] = 2,
    ACTIONS(233), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(231), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [231] = 2,
    ACTIONS(237), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(235), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [264] = 2,
    ACTIONS(241), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(239), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [297] = 2,
    ACTIONS(245), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(243), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [330] = 2,
    ACTIONS(249), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(247), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [363] = 2,
    ACTIONS(253), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(251), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [396] = 2,
    ACTIONS(257), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(255), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [429] = 2,
    ACTIONS(261), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(259), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [462] = 2,
    ACTIONS(265), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(263), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [495] = 2,
    ACTIONS(269), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(267), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [528] = 2,
    ACTIONS(273), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(271), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [561] = 2,
    ACTIONS(277), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(275), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [594] = 2,
    ACTIONS(281), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(279), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [627] = 2,
    ACTIONS(285), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(283), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [660] = 2,
    ACTIONS(289), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(287), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [693] = 2,
    ACTIONS(293), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(291), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [726] = 2,
    ACTIONS(297), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(295), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [759] = 2,
    ACTIONS(301), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(299), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [792] = 2,
    ACTIONS(305), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(303), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [825] = 2,
    ACTIONS(309), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(307), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [858] = 2,
    ACTIONS(313), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(311), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [891] = 2,
    ACTIONS(317), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(315), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [924] = 2,
    ACTIONS(321), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(319), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [957] = 2,
    ACTIONS(325), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(323), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [990] = 2,
    ACTIONS(329), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(327), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [1023] = 2,
    ACTIONS(333), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(331), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [1056] = 2,
    ACTIONS(337), 3,
      aux_sym_float_token3,
      sym_ratio,
      sym_base10,
    ACTIONS(335), 25,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_CHAR_COLON,
      anon_sym_BSLASH,
      anon_sym_POSTPONE_COLON,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_B_LBRACE,
      anon_sym_C_LBRACE,
      anon_sym_HS_LBRACE,
      anon_sym_H_LBRACE,
      anon_sym_IH_LBRACE,
      anon_sym_P_DQUOTE,
      anon_sym_SBUF_DQUOTE,
      anon_sym_V_LBRACE,
      anon_sym_T_LBRACE,
      anon_sym_LPAREN,
  [1089] = 7,
    ACTIONS(9), 1,
      aux_sym_float_token3,
    ACTIONS(11), 1,
      sym_ratio,
    ACTIONS(13), 1,
      sym_base10,
    STATE(50), 1,
      sym_number,
    ACTIONS(7), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    STATE(26), 2,
      sym_float,
      sym_integer,
    ACTIONS(15), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [1115] = 7,
    ACTIONS(9), 1,
      aux_sym_float_token3,
    ACTIONS(11), 1,
      sym_ratio,
    ACTIONS(13), 1,
      sym_base10,
    STATE(103), 1,
      sym_number,
    ACTIONS(7), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    STATE(26), 2,
      sym_float,
      sym_integer,
    ACTIONS(15), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [1141] = 5,
    ACTIONS(343), 1,
      aux_sym_unicode_token3,
    STATE(42), 1,
      sym_char,
    ACTIONS(341), 2,
      aux_sym_unicode_token1,
      aux_sym_unicode_token2,
    STATE(33), 2,
      sym_unicode,
      sym_unicode_name,
    ACTIONS(339), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      sym_octcode,
  [1161] = 5,
    ACTIONS(345), 1,
      sym_symbol,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_outputs,
    STATE(67), 3,
      sym_effect,
      sym__effect_item,
      aux_sym_inputs_repeat1,
  [1179] = 4,
    ACTIONS(351), 1,
      sym_base10,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(57), 2,
      sym_integer,
      aux_sym_byte_array_repeat1,
    ACTIONS(353), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [1195] = 4,
    ACTIONS(357), 1,
      sym_base10,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    STATE(54), 2,
      sym_integer,
      aux_sym_byte_array_repeat1,
    ACTIONS(360), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [1211] = 5,
    ACTIONS(345), 1,
      sym_symbol,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      sym_outputs,
    STATE(67), 3,
      sym_effect,
      sym__effect_item,
      aux_sym_inputs_repeat1,
  [1229] = 5,
    ACTIONS(367), 1,
      sym_symbol,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      anon_sym_DASH_DASH,
    STATE(93), 1,
      sym_inputs,
    STATE(64), 3,
      sym_effect,
      sym__effect_item,
      aux_sym_inputs_repeat1,
  [1247] = 4,
    ACTIONS(351), 1,
      sym_base10,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(54), 2,
      sym_integer,
      aux_sym_byte_array_repeat1,
    ACTIONS(353), 3,
      sym_base16,
      sym_base08,
      sym_base02,
  [1263] = 5,
    ACTIONS(345), 1,
      sym_symbol,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      sym_outputs,
    STATE(67), 3,
      sym_effect,
      sym__effect_item,
      aux_sym_inputs_repeat1,
  [1281] = 5,
    ACTIONS(345), 1,
      sym_symbol,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_outputs,
    STATE(67), 3,
      sym_effect,
      sym__effect_item,
      aux_sym_inputs_repeat1,
  [1299] = 5,
    ACTIONS(345), 1,
      sym_symbol,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_outputs,
    STATE(67), 3,
      sym_effect,
      sym__effect_item,
      aux_sym_inputs_repeat1,
  [1317] = 5,
    ACTIONS(345), 1,
      sym_symbol,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym_outputs,
    STATE(67), 3,
      sym_effect,
      sym__effect_item,
      aux_sym_inputs_repeat1,
  [1335] = 5,
    ACTIONS(367), 1,
      sym_symbol,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      anon_sym_DASH_DASH,
    STATE(104), 1,
      sym_inputs,
    STATE(64), 3,
      sym_effect,
      sym__effect_item,
      aux_sym_inputs_repeat1,
  [1353] = 5,
    ACTIONS(367), 1,
      sym_symbol,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      anon_sym_DASH_DASH,
    STATE(106), 1,
      sym_inputs,
    STATE(64), 3,
      sym_effect,
      sym__effect_item,
      aux_sym_inputs_repeat1,
  [1371] = 4,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      sym_symbol,
    ACTIONS(389), 1,
      anon_sym_DASH_DASH,
    STATE(65), 3,
      sym_effect,
      sym__effect_item,
      aux_sym_inputs_repeat1,
  [1386] = 4,
    ACTIONS(391), 1,
      sym_symbol,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_DASH_DASH,
    STATE(65), 3,
      sym_effect,
      sym__effect_item,
      aux_sym_inputs_repeat1,
  [1401] = 4,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 1,
      sym_symbol,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    STATE(66), 3,
      sym_effect,
      sym__effect_item,
      aux_sym_inputs_repeat1,
  [1416] = 4,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_symbol,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(66), 3,
      sym_effect,
      sym__effect_item,
      aux_sym_inputs_repeat1,
  [1431] = 4,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
    ACTIONS(411), 1,
      anon_sym_LBRACE,
    ACTIONS(413), 1,
      sym_f,
    STATE(75), 2,
      sym_property_pair,
      aux_sym_tuple_repeat1,
  [1445] = 2,
    ACTIONS(257), 1,
      sym_base10,
    ACTIONS(255), 4,
      sym_base16,
      sym_base08,
      sym_base02,
      anon_sym_RBRACE,
  [1455] = 3,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
    ACTIONS(417), 1,
      anon_sym_LBRACE,
    STATE(70), 2,
      sym_array,
      aux_sym_hashtable_repeat1,
  [1466] = 3,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    STATE(70), 2,
      sym_array,
      aux_sym_hashtable_repeat1,
  [1477] = 3,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
    STATE(76), 2,
      sym_array,
      aux_sym_hashtable_repeat1,
  [1488] = 3,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
    ACTIONS(426), 1,
      anon_sym_LBRACE,
    STATE(73), 2,
      sym_property_pair,
      aux_sym_tuple_repeat1,
  [1499] = 3,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    STATE(71), 2,
      sym_array,
      aux_sym_hashtable_repeat1,
  [1510] = 3,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    ACTIONS(411), 1,
      anon_sym_LBRACE,
    STATE(73), 2,
      sym_property_pair,
      aux_sym_tuple_repeat1,
  [1521] = 3,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
    STATE(70), 2,
      sym_array,
      aux_sym_hashtable_repeat1,
  [1532] = 1,
    ACTIONS(329), 3,
      sym_symbol,
      anon_sym_LPAREN,
      anon_sym_DASH_DASH,
  [1538] = 1,
    ACTIONS(297), 3,
      sym_symbol,
      anon_sym_LPAREN,
      anon_sym_DASH_DASH,
  [1544] = 1,
    ACTIONS(325), 3,
      sym_symbol,
      anon_sym_LPAREN,
      anon_sym_DASH_DASH,
  [1550] = 1,
    ACTIONS(213), 3,
      sym_symbol,
      anon_sym_LPAREN,
      anon_sym_DASH_DASH,
  [1556] = 1,
    ACTIONS(297), 3,
      sym_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1562] = 1,
    ACTIONS(325), 3,
      sym_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1568] = 1,
    ACTIONS(329), 3,
      sym_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1574] = 1,
    ACTIONS(213), 3,
      sym_symbol,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1580] = 1,
    ACTIONS(433), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACE,
  [1585] = 2,
    ACTIONS(435), 1,
      aux_sym_unicode_token4,
    ACTIONS(437), 1,
      aux_sym_unicode_name_token1,
  [1592] = 1,
    ACTIONS(439), 1,
      sym_word,
  [1596] = 1,
    ACTIONS(441), 1,
      sym_symbol,
  [1600] = 1,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
  [1604] = 1,
    ACTIONS(445), 1,
      sym_symbol,
  [1608] = 1,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
  [1612] = 1,
    ACTIONS(449), 1,
      aux_sym_pathname_token1,
  [1616] = 1,
    ACTIONS(451), 1,
      anon_sym_DASH_DASH,
  [1620] = 1,
    ACTIONS(453), 1,
      sym_word,
  [1624] = 1,
    ACTIONS(455), 1,
      aux_sym_pathname_token1,
  [1628] = 1,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
  [1632] = 1,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
  [1636] = 1,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
  [1640] = 1,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
  [1644] = 1,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
  [1648] = 1,
    ACTIONS(467), 1,
      anon_sym_RBRACE,
  [1652] = 1,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
  [1656] = 1,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
  [1660] = 1,
    ACTIONS(473), 1,
      anon_sym_DASH_DASH,
  [1664] = 1,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
  [1668] = 1,
    ACTIONS(477), 1,
      anon_sym_DASH_DASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 33,
  [SMALL_STATE(18)] = 66,
  [SMALL_STATE(19)] = 99,
  [SMALL_STATE(20)] = 132,
  [SMALL_STATE(21)] = 165,
  [SMALL_STATE(22)] = 198,
  [SMALL_STATE(23)] = 231,
  [SMALL_STATE(24)] = 264,
  [SMALL_STATE(25)] = 297,
  [SMALL_STATE(26)] = 330,
  [SMALL_STATE(27)] = 363,
  [SMALL_STATE(28)] = 396,
  [SMALL_STATE(29)] = 429,
  [SMALL_STATE(30)] = 462,
  [SMALL_STATE(31)] = 495,
  [SMALL_STATE(32)] = 528,
  [SMALL_STATE(33)] = 561,
  [SMALL_STATE(34)] = 594,
  [SMALL_STATE(35)] = 627,
  [SMALL_STATE(36)] = 660,
  [SMALL_STATE(37)] = 693,
  [SMALL_STATE(38)] = 726,
  [SMALL_STATE(39)] = 759,
  [SMALL_STATE(40)] = 792,
  [SMALL_STATE(41)] = 825,
  [SMALL_STATE(42)] = 858,
  [SMALL_STATE(43)] = 891,
  [SMALL_STATE(44)] = 924,
  [SMALL_STATE(45)] = 957,
  [SMALL_STATE(46)] = 990,
  [SMALL_STATE(47)] = 1023,
  [SMALL_STATE(48)] = 1056,
  [SMALL_STATE(49)] = 1089,
  [SMALL_STATE(50)] = 1115,
  [SMALL_STATE(51)] = 1141,
  [SMALL_STATE(52)] = 1161,
  [SMALL_STATE(53)] = 1179,
  [SMALL_STATE(54)] = 1195,
  [SMALL_STATE(55)] = 1211,
  [SMALL_STATE(56)] = 1229,
  [SMALL_STATE(57)] = 1247,
  [SMALL_STATE(58)] = 1263,
  [SMALL_STATE(59)] = 1281,
  [SMALL_STATE(60)] = 1299,
  [SMALL_STATE(61)] = 1317,
  [SMALL_STATE(62)] = 1335,
  [SMALL_STATE(63)] = 1353,
  [SMALL_STATE(64)] = 1371,
  [SMALL_STATE(65)] = 1386,
  [SMALL_STATE(66)] = 1401,
  [SMALL_STATE(67)] = 1416,
  [SMALL_STATE(68)] = 1431,
  [SMALL_STATE(69)] = 1445,
  [SMALL_STATE(70)] = 1455,
  [SMALL_STATE(71)] = 1466,
  [SMALL_STATE(72)] = 1477,
  [SMALL_STATE(73)] = 1488,
  [SMALL_STATE(74)] = 1499,
  [SMALL_STATE(75)] = 1510,
  [SMALL_STATE(76)] = 1521,
  [SMALL_STATE(77)] = 1532,
  [SMALL_STATE(78)] = 1538,
  [SMALL_STATE(79)] = 1544,
  [SMALL_STATE(80)] = 1550,
  [SMALL_STATE(81)] = 1556,
  [SMALL_STATE(82)] = 1562,
  [SMALL_STATE(83)] = 1568,
  [SMALL_STATE(84)] = 1574,
  [SMALL_STATE(85)] = 1580,
  [SMALL_STATE(86)] = 1585,
  [SMALL_STATE(87)] = 1592,
  [SMALL_STATE(88)] = 1596,
  [SMALL_STATE(89)] = 1600,
  [SMALL_STATE(90)] = 1604,
  [SMALL_STATE(91)] = 1608,
  [SMALL_STATE(92)] = 1612,
  [SMALL_STATE(93)] = 1616,
  [SMALL_STATE(94)] = 1620,
  [SMALL_STATE(95)] = 1624,
  [SMALL_STATE(96)] = 1628,
  [SMALL_STATE(97)] = 1632,
  [SMALL_STATE(98)] = 1636,
  [SMALL_STATE(99)] = 1640,
  [SMALL_STATE(100)] = 1644,
  [SMALL_STATE(101)] = 1648,
  [SMALL_STATE(102)] = 1652,
  [SMALL_STATE(103)] = 1656,
  [SMALL_STATE(104)] = 1660,
  [SMALL_STATE(105)] = 1664,
  [SMALL_STATE(106)] = 1668,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect, 5, 0, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect, 5, 0, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashset, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashset, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashtable, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashtable, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_hashtable, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_hashtable, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathname, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pathname, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_buffer, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_buffer, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_array, 3, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_array, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashtable, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashtable, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_hashtable, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_hashtable, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unicode_name, 3, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unicode_name, 3, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex, 4, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex, 4, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_postfix, 2, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_postfix, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect, 4, 0, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect, 4, 0, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effect, 4, 0, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect, 4, 0, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 5, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 5, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashset, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashset, 3, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_byte_array_repeat1, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inputs, 1, 0, 0),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inputs_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inputs_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inputs_repeat1, 2, 0, 0),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inputs_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inputs_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_outputs, 1, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hashtable_repeat1, 2, 0, 0),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hashtable_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2, 0, 0),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_pair, 4, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 1, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [475] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
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

TS_PUBLIC const TSLanguage *tree_sitter_factor(void) {
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

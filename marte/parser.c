#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_app = 1,
  sym_definition = 2,
  aux_sym_attribute_token1 = 3,
  anon_sym_InputSignals = 4,
  anon_sym_OutputSignals = 5,
  anon_sym_Class = 6,
  anon_sym_Type = 7,
  anon_sym_DataSource = 8,
  anon_sym_NumberOfElements = 9,
  anon_sym_NumberOfDimensions = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_string_literal_token1 = 12,
  sym_escape_sequence = 13,
  aux_sym_number_token1 = 14,
  aux_sym_number_token2 = 15,
  sym_comment = 16,
  sym_assign = 17,
  sym_obrace = 18,
  sym_cbrace = 19,
  sym_opar = 20,
  sym_cpar = 21,
  sym_vbar = 22,
  sym_comma = 23,
  anon_sym_uint8 = 24,
  anon_sym_uint16 = 25,
  anon_sym_uint32 = 26,
  anon_sym_uint64 = 27,
  anon_sym_int8 = 28,
  anon_sym_int16 = 29,
  anon_sym_int32 = 30,
  anon_sym_int64 = 31,
  anon_sym_float32 = 32,
  anon_sym_float64 = 33,
  anon_sym_char8 = 34,
  sym_cdb = 35,
  sym_expression = 36,
  sym_exp_var = 37,
  sym_exp_cast = 38,
  sym_exp_cast_scalar = 39,
  sym_exp_block = 40,
  sym_variable = 41,
  sym_scalar = 42,
  sym_vector = 43,
  sym_matrix = 44,
  sym_block = 45,
  sym_identifier = 46,
  sym_string = 47,
  sym_attribute = 48,
  sym_property = 49,
  sym_marte_common = 50,
  sym_string_literal = 51,
  sym_number = 52,
  sym_builtintype = 53,
  aux_sym_cdb_repeat1 = 54,
  aux_sym_vector_repeat1 = 55,
  aux_sym_matrix_repeat1 = 56,
  aux_sym_string_literal_repeat1 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_app] = "app",
  [sym_definition] = "definition",
  [aux_sym_attribute_token1] = "attribute_token1",
  [anon_sym_InputSignals] = "InputSignals",
  [anon_sym_OutputSignals] = "OutputSignals",
  [anon_sym_Class] = "Class",
  [anon_sym_Type] = "Type",
  [anon_sym_DataSource] = "DataSource",
  [anon_sym_NumberOfElements] = "NumberOfElements",
  [anon_sym_NumberOfDimensions] = "NumberOfDimensions",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [sym_comment] = "comment",
  [sym_assign] = "assign",
  [sym_obrace] = "obrace",
  [sym_cbrace] = "cbrace",
  [sym_opar] = "opar",
  [sym_cpar] = "cpar",
  [sym_vbar] = "vbar",
  [sym_comma] = "comma",
  [anon_sym_uint8] = "uint8",
  [anon_sym_uint16] = "uint16",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint64] = "uint64",
  [anon_sym_int8] = "int8",
  [anon_sym_int16] = "int16",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_float32] = "float32",
  [anon_sym_float64] = "float64",
  [anon_sym_char8] = "char8",
  [sym_cdb] = "cdb",
  [sym_expression] = "expression",
  [sym_exp_var] = "exp_var",
  [sym_exp_cast] = "exp_cast",
  [sym_exp_cast_scalar] = "exp_cast_scalar",
  [sym_exp_block] = "exp_block",
  [sym_variable] = "variable",
  [sym_scalar] = "scalar",
  [sym_vector] = "vector",
  [sym_matrix] = "matrix",
  [sym_block] = "block",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_attribute] = "attribute",
  [sym_property] = "property",
  [sym_marte_common] = "marte_common",
  [sym_string_literal] = "string_literal",
  [sym_number] = "number",
  [sym_builtintype] = "builtintype",
  [aux_sym_cdb_repeat1] = "cdb_repeat1",
  [aux_sym_vector_repeat1] = "vector_repeat1",
  [aux_sym_matrix_repeat1] = "matrix_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_app] = sym_app,
  [sym_definition] = sym_definition,
  [aux_sym_attribute_token1] = aux_sym_attribute_token1,
  [anon_sym_InputSignals] = anon_sym_InputSignals,
  [anon_sym_OutputSignals] = anon_sym_OutputSignals,
  [anon_sym_Class] = anon_sym_Class,
  [anon_sym_Type] = anon_sym_Type,
  [anon_sym_DataSource] = anon_sym_DataSource,
  [anon_sym_NumberOfElements] = anon_sym_NumberOfElements,
  [anon_sym_NumberOfDimensions] = anon_sym_NumberOfDimensions,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [sym_comment] = sym_comment,
  [sym_assign] = sym_assign,
  [sym_obrace] = sym_obrace,
  [sym_cbrace] = sym_cbrace,
  [sym_opar] = sym_opar,
  [sym_cpar] = sym_cpar,
  [sym_vbar] = sym_vbar,
  [sym_comma] = sym_comma,
  [anon_sym_uint8] = anon_sym_uint8,
  [anon_sym_uint16] = anon_sym_uint16,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_int8] = anon_sym_int8,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_float32] = anon_sym_float32,
  [anon_sym_float64] = anon_sym_float64,
  [anon_sym_char8] = anon_sym_char8,
  [sym_cdb] = sym_cdb,
  [sym_expression] = sym_expression,
  [sym_exp_var] = sym_exp_var,
  [sym_exp_cast] = sym_exp_cast,
  [sym_exp_cast_scalar] = sym_exp_cast_scalar,
  [sym_exp_block] = sym_exp_block,
  [sym_variable] = sym_variable,
  [sym_scalar] = sym_scalar,
  [sym_vector] = sym_vector,
  [sym_matrix] = sym_matrix,
  [sym_block] = sym_block,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_attribute] = sym_attribute,
  [sym_property] = sym_property,
  [sym_marte_common] = sym_marte_common,
  [sym_string_literal] = sym_string_literal,
  [sym_number] = sym_number,
  [sym_builtintype] = sym_builtintype,
  [aux_sym_cdb_repeat1] = aux_sym_cdb_repeat1,
  [aux_sym_vector_repeat1] = aux_sym_vector_repeat1,
  [aux_sym_matrix_repeat1] = aux_sym_matrix_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_app] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_attribute_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_InputSignals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OutputSignals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DataSource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NumberOfElements] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NumberOfDimensions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_obrace] = {
    .visible = true,
    .named = true,
  },
  [sym_cbrace] = {
    .visible = true,
    .named = true,
  },
  [sym_opar] = {
    .visible = true,
    .named = true,
  },
  [sym_cpar] = {
    .visible = true,
    .named = true,
  },
  [sym_vbar] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_uint8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char8] = {
    .visible = true,
    .named = false,
  },
  [sym_cdb] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_exp_var] = {
    .visible = true,
    .named = true,
  },
  [sym_exp_cast] = {
    .visible = true,
    .named = true,
  },
  [sym_exp_cast_scalar] = {
    .visible = true,
    .named = true,
  },
  [sym_exp_block] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar] = {
    .visible = true,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_matrix] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_marte_common] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_builtintype] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_cdb_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_vector_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_matrix_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [24] = 14,
  [25] = 25,
  [26] = 17,
  [27] = 22,
  [28] = 18,
  [29] = 21,
  [30] = 19,
  [31] = 20,
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
  [45] = 42,
  [46] = 43,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      ADVANCE_MAP(
        '"', 121,
        '$', 20,
        '(', 140,
        ')', 141,
        '+', 21,
        ',', 143,
        '/', 4,
        '0', 130,
        '=', 137,
        'C', 68,
        'D', 43,
        'I', 75,
        'N', 107,
        'O', 108,
        'T', 112,
        '\\', 7,
        'c', 61,
        'f', 67,
        'i', 76,
        'u', 65,
        '{', 138,
        '|', 142,
        '}', 139,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 121,
        '(', 140,
        ',', 143,
        '/', 4,
        '0', 130,
        '=', 137,
        'c', 61,
        'f', 67,
        'i', 76,
        'u', 65,
        '{', 138,
        '}', 139,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\\') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(136);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'U') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 8:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 20:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 21:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      ADVANCE_MAP(
        '$', 20,
        ')', 141,
        '+', 21,
        ',', 143,
        '/', 4,
        'C', 68,
        'D', 43,
        'I', 75,
        'N', 107,
        'O', 108,
        'T', 112,
        '{', 138,
        '|', 142,
        '}', 139,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_app);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_definition);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '1') ADVANCE(35);
      if (lookahead == '3') ADVANCE(28);
      if (lookahead == '6') ADVANCE(32);
      if (lookahead == '8') ADVANCE(148);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '1') ADVANCE(36);
      if (lookahead == '3') ADVANCE(29);
      if (lookahead == '6') ADVANCE(33);
      if (lookahead == '8') ADVANCE(144);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '2') ADVANCE(150);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '2') ADVANCE(146);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '2') ADVANCE(152);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '3') ADVANCE(30);
      if (lookahead == '6') ADVANCE(34);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '4') ADVANCE(151);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '4') ADVANCE(147);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '4') ADVANCE(153);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '6') ADVANCE(149);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '6') ADVANCE(145);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '8') ADVANCE(154);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'D') ADVANCE(63);
      if (lookahead == 'E') ADVANCE(71);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'O') ADVANCE(58);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'S') ADVANCE(62);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'S') ADVANCE(66);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'b') ADVANCE(54);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'g') ADVANCE(78);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'h') ADVANCE(45);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'p') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'u') ADVANCE(106);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'u') ADVANCE(102);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'u') ADVANCE(105);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'y') ADVANCE(86);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_InputSignals);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_OutputSignals);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_Class);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_Type);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DataSource);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_NumberOfElements);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_NumberOfDimensions);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_assign);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_obrace);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_cbrace);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_opar);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_cpar);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_vbar);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_int8);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_int16);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_int32);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_int64);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_float32);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_float64);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_char8);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 22},
  [27] = {.lex_state = 22},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_app] = ACTIONS(1),
    [sym_definition] = ACTIONS(1),
    [aux_sym_attribute_token1] = ACTIONS(1),
    [anon_sym_InputSignals] = ACTIONS(1),
    [anon_sym_OutputSignals] = ACTIONS(1),
    [anon_sym_Class] = ACTIONS(1),
    [anon_sym_Type] = ACTIONS(1),
    [anon_sym_DataSource] = ACTIONS(1),
    [anon_sym_NumberOfElements] = ACTIONS(1),
    [anon_sym_NumberOfDimensions] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_assign] = ACTIONS(1),
    [sym_obrace] = ACTIONS(1),
    [sym_cbrace] = ACTIONS(1),
    [sym_opar] = ACTIONS(1),
    [sym_cpar] = ACTIONS(1),
    [sym_vbar] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [anon_sym_uint8] = ACTIONS(1),
    [anon_sym_uint16] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_int8] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_float32] = ACTIONS(1),
    [anon_sym_float64] = ACTIONS(1),
    [anon_sym_char8] = ACTIONS(1),
  },
  [1] = {
    [sym_cdb] = STATE(55),
    [sym_expression] = STATE(12),
    [sym_exp_var] = STATE(34),
    [sym_exp_cast] = STATE(34),
    [sym_exp_cast_scalar] = STATE(34),
    [sym_exp_block] = STATE(34),
    [sym_identifier] = STATE(50),
    [sym_property] = STATE(52),
    [sym_marte_common] = STATE(51),
    [aux_sym_cdb_repeat1] = STATE(12),
    [sym_app] = ACTIONS(5),
    [sym_definition] = ACTIONS(5),
    [aux_sym_attribute_token1] = ACTIONS(7),
    [anon_sym_InputSignals] = ACTIONS(9),
    [anon_sym_OutputSignals] = ACTIONS(9),
    [anon_sym_Class] = ACTIONS(9),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_DataSource] = ACTIONS(9),
    [anon_sym_NumberOfElements] = ACTIONS(9),
    [anon_sym_NumberOfDimensions] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_expression] = STATE(11),
    [sym_exp_var] = STATE(34),
    [sym_exp_cast] = STATE(34),
    [sym_exp_cast_scalar] = STATE(34),
    [sym_exp_block] = STATE(34),
    [sym_scalar] = STATE(15),
    [sym_vector] = STATE(47),
    [sym_identifier] = STATE(50),
    [sym_string] = STATE(20),
    [sym_attribute] = STATE(21),
    [sym_property] = STATE(52),
    [sym_marte_common] = STATE(51),
    [sym_string_literal] = STATE(21),
    [sym_number] = STATE(20),
    [sym_builtintype] = STATE(21),
    [aux_sym_cdb_repeat1] = STATE(11),
    [aux_sym_vector_repeat1] = STATE(6),
    [aux_sym_matrix_repeat1] = STATE(40),
    [sym_app] = ACTIONS(5),
    [sym_definition] = ACTIONS(5),
    [aux_sym_attribute_token1] = ACTIONS(11),
    [anon_sym_InputSignals] = ACTIONS(9),
    [anon_sym_OutputSignals] = ACTIONS(9),
    [anon_sym_Class] = ACTIONS(9),
    [anon_sym_Type] = ACTIONS(9),
    [anon_sym_DataSource] = ACTIONS(9),
    [anon_sym_NumberOfElements] = ACTIONS(9),
    [anon_sym_NumberOfDimensions] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym_number_token1] = ACTIONS(15),
    [aux_sym_number_token2] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_obrace] = ACTIONS(19),
    [anon_sym_uint8] = ACTIONS(21),
    [anon_sym_uint16] = ACTIONS(21),
    [anon_sym_uint32] = ACTIONS(21),
    [anon_sym_uint64] = ACTIONS(21),
    [anon_sym_int8] = ACTIONS(21),
    [anon_sym_int16] = ACTIONS(21),
    [anon_sym_int32] = ACTIONS(21),
    [anon_sym_int64] = ACTIONS(21),
    [anon_sym_float32] = ACTIONS(21),
    [anon_sym_float64] = ACTIONS(21),
    [anon_sym_char8] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_attribute_token1,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_number_token1,
    ACTIONS(29), 1,
      aux_sym_number_token2,
    ACTIONS(31), 1,
      sym_obrace,
    ACTIONS(33), 1,
      sym_opar,
    STATE(32), 1,
      sym_variable,
    STATE(38), 1,
      sym_block,
    STATE(31), 2,
      sym_string,
      sym_number,
    STATE(29), 3,
      sym_attribute,
      sym_string_literal,
      sym_builtintype,
    STATE(35), 3,
      sym_scalar,
      sym_vector,
      sym_matrix,
    ACTIONS(35), 11,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [55] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_attribute_token1,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_number_token1,
    ACTIONS(29), 1,
      aux_sym_number_token2,
    ACTIONS(37), 1,
      sym_obrace,
    STATE(37), 1,
      sym_variable,
    STATE(31), 2,
      sym_string,
      sym_number,
    STATE(29), 3,
      sym_attribute,
      sym_string_literal,
      sym_builtintype,
    STATE(35), 3,
      sym_scalar,
      sym_vector,
      sym_matrix,
    ACTIONS(35), 11,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [104] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_number_token1,
    ACTIONS(17), 1,
      aux_sym_number_token2,
    ACTIONS(19), 1,
      sym_obrace,
    ACTIONS(39), 1,
      aux_sym_attribute_token1,
    STATE(6), 1,
      aux_sym_vector_repeat1,
    STATE(15), 1,
      sym_scalar,
    STATE(40), 1,
      aux_sym_matrix_repeat1,
    STATE(47), 1,
      sym_vector,
    STATE(20), 2,
      sym_string,
      sym_number,
    STATE(21), 3,
      sym_attribute,
      sym_string_literal,
      sym_builtintype,
    ACTIONS(21), 11,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [157] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_number_token1,
    ACTIONS(17), 1,
      aux_sym_number_token2,
    ACTIONS(39), 1,
      aux_sym_attribute_token1,
    ACTIONS(41), 1,
      sym_cbrace,
    STATE(7), 1,
      aux_sym_vector_repeat1,
    STATE(15), 1,
      sym_scalar,
    STATE(20), 2,
      sym_string,
      sym_number,
    STATE(21), 3,
      sym_attribute,
      sym_string_literal,
      sym_builtintype,
    ACTIONS(21), 11,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [204] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      aux_sym_attribute_token1,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      aux_sym_number_token1,
    ACTIONS(52), 1,
      aux_sym_number_token2,
    ACTIONS(55), 1,
      sym_cbrace,
    STATE(7), 1,
      aux_sym_vector_repeat1,
    STATE(15), 1,
      sym_scalar,
    STATE(20), 2,
      sym_string,
      sym_number,
    STATE(21), 3,
      sym_attribute,
      sym_string_literal,
      sym_builtintype,
    ACTIONS(57), 11,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [251] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_number_token1,
    ACTIONS(17), 1,
      aux_sym_number_token2,
    ACTIONS(39), 1,
      aux_sym_attribute_token1,
    STATE(6), 1,
      aux_sym_vector_repeat1,
    STATE(15), 1,
      sym_scalar,
    STATE(20), 2,
      sym_string,
      sym_number,
    STATE(21), 3,
      sym_attribute,
      sym_string_literal,
      sym_builtintype,
    ACTIONS(21), 11,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [295] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_attribute_token1,
    STATE(50), 1,
      sym_identifier,
    STATE(51), 1,
      sym_marte_common,
    STATE(52), 1,
      sym_property,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      sym_cbrace,
    ACTIONS(62), 2,
      sym_app,
      sym_definition,
    STATE(9), 2,
      sym_expression,
      aux_sym_cdb_repeat1,
    STATE(34), 4,
      sym_exp_var,
      sym_exp_cast,
      sym_exp_cast_scalar,
      sym_exp_block,
    ACTIONS(68), 7,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
      anon_sym_Class,
      anon_sym_Type,
      anon_sym_DataSource,
      anon_sym_NumberOfElements,
      anon_sym_NumberOfDimensions,
  [338] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_attribute_token1,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_number_token1,
    ACTIONS(29), 1,
      aux_sym_number_token2,
    STATE(53), 1,
      sym_scalar,
    STATE(31), 2,
      sym_string,
      sym_number,
    STATE(29), 3,
      sym_attribute,
      sym_string_literal,
      sym_builtintype,
    ACTIONS(35), 11,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [379] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_attribute_token1,
    ACTIONS(71), 1,
      sym_cbrace,
    STATE(50), 1,
      sym_identifier,
    STATE(51), 1,
      sym_marte_common,
    STATE(52), 1,
      sym_property,
    ACTIONS(5), 2,
      sym_app,
      sym_definition,
    STATE(9), 2,
      sym_expression,
      aux_sym_cdb_repeat1,
    STATE(34), 4,
      sym_exp_var,
      sym_exp_cast,
      sym_exp_cast_scalar,
      sym_exp_block,
    ACTIONS(9), 7,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
      anon_sym_Class,
      anon_sym_Type,
      anon_sym_DataSource,
      anon_sym_NumberOfElements,
      anon_sym_NumberOfDimensions,
  [421] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_attribute_token1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_identifier,
    STATE(51), 1,
      sym_marte_common,
    STATE(52), 1,
      sym_property,
    ACTIONS(5), 2,
      sym_app,
      sym_definition,
    STATE(9), 2,
      sym_expression,
      aux_sym_cdb_repeat1,
    STATE(34), 4,
      sym_exp_var,
      sym_exp_cast,
      sym_exp_cast_scalar,
      sym_exp_block,
    ACTIONS(9), 7,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
      anon_sym_Class,
      anon_sym_Type,
      anon_sym_DataSource,
      anon_sym_NumberOfElements,
      anon_sym_NumberOfDimensions,
  [463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_assign,
    ACTIONS(77), 4,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_comma,
    ACTIONS(75), 13,
      aux_sym_attribute_token1,
      aux_sym_number_token1,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 4,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_comma,
    ACTIONS(81), 13,
      aux_sym_attribute_token1,
      aux_sym_number_token1,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_comma,
    ACTIONS(87), 3,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
    ACTIONS(85), 13,
      aux_sym_attribute_token1,
      aux_sym_number_token1,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [543] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_attribute_token1,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_string,
    STATE(29), 3,
      sym_attribute,
      sym_string_literal,
      sym_builtintype,
    ACTIONS(35), 11,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 4,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_comma,
    ACTIONS(91), 13,
      aux_sym_attribute_token1,
      aux_sym_number_token1,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 4,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_comma,
    ACTIONS(75), 13,
      aux_sym_attribute_token1,
      aux_sym_number_token1,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 4,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_comma,
    ACTIONS(95), 13,
      aux_sym_attribute_token1,
      aux_sym_number_token1,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 4,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_comma,
    ACTIONS(99), 13,
      aux_sym_attribute_token1,
      aux_sym_number_token1,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 4,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_comma,
    ACTIONS(103), 13,
      aux_sym_attribute_token1,
      aux_sym_number_token1,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 4,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_comma,
    ACTIONS(107), 13,
      aux_sym_attribute_token1,
      aux_sym_number_token1,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 3,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
    ACTIONS(111), 13,
      aux_sym_attribute_token1,
      aux_sym_number_token1,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 6,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
      sym_cpar,
      sym_vbar,
    ACTIONS(81), 8,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
      anon_sym_Class,
      anon_sym_Type,
      anon_sym_DataSource,
      anon_sym_NumberOfElements,
      anon_sym_NumberOfDimensions,
  [770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_obrace,
      sym_cbrace,
      sym_comma,
    ACTIONS(115), 8,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
      anon_sym_Class,
      anon_sym_Type,
      anon_sym_DataSource,
      anon_sym_NumberOfElements,
      anon_sym_NumberOfDimensions,
  [792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
      sym_cpar,
      sym_vbar,
    ACTIONS(91), 8,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
      anon_sym_Class,
      anon_sym_Type,
      anon_sym_DataSource,
      anon_sym_NumberOfElements,
      anon_sym_NumberOfDimensions,
  [814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
      sym_cpar,
      sym_vbar,
    ACTIONS(107), 8,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
      anon_sym_Class,
      anon_sym_Type,
      anon_sym_DataSource,
      anon_sym_NumberOfElements,
      anon_sym_NumberOfDimensions,
  [836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
      sym_cpar,
      sym_vbar,
    ACTIONS(75), 8,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
      anon_sym_Class,
      anon_sym_Type,
      anon_sym_DataSource,
      anon_sym_NumberOfElements,
      anon_sym_NumberOfDimensions,
  [858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
      sym_cpar,
      sym_vbar,
    ACTIONS(103), 8,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
      anon_sym_Class,
      anon_sym_Type,
      anon_sym_DataSource,
      anon_sym_NumberOfElements,
      anon_sym_NumberOfDimensions,
  [880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
      sym_cpar,
    ACTIONS(95), 8,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
      anon_sym_Class,
      anon_sym_Type,
      anon_sym_DataSource,
      anon_sym_NumberOfElements,
      anon_sym_NumberOfDimensions,
  [901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
      sym_cpar,
    ACTIONS(99), 8,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
      anon_sym_Class,
      anon_sym_Type,
      anon_sym_DataSource,
      anon_sym_NumberOfElements,
      anon_sym_NumberOfDimensions,
  [922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
    ACTIONS(119), 8,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
      anon_sym_Class,
      anon_sym_Type,
      anon_sym_DataSource,
      anon_sym_NumberOfElements,
      anon_sym_NumberOfDimensions,
  [942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
    ACTIONS(123), 8,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
      anon_sym_Class,
      anon_sym_Type,
      anon_sym_DataSource,
      anon_sym_NumberOfElements,
      anon_sym_NumberOfDimensions,
  [962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
    ACTIONS(127), 8,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
      anon_sym_Class,
      anon_sym_Type,
      anon_sym_DataSource,
      anon_sym_NumberOfElements,
      anon_sym_NumberOfDimensions,
  [982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
    ACTIONS(131), 8,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
      anon_sym_Class,
      anon_sym_Type,
      anon_sym_DataSource,
      anon_sym_NumberOfElements,
      anon_sym_NumberOfDimensions,
  [1002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 4,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
    ACTIONS(135), 8,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
      anon_sym_Class,
      anon_sym_Type,
      anon_sym_DataSource,
      anon_sym_NumberOfElements,
      anon_sym_NumberOfDimensions,
  [1022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 4,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
    ACTIONS(139), 8,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
      anon_sym_Class,
      anon_sym_Type,
      anon_sym_DataSource,
      anon_sym_NumberOfElements,
      anon_sym_NumberOfDimensions,
  [1042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 4,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
    ACTIONS(143), 8,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
      anon_sym_Class,
      anon_sym_Type,
      anon_sym_DataSource,
      anon_sym_NumberOfElements,
      anon_sym_NumberOfDimensions,
  [1062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
    ACTIONS(147), 8,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
      anon_sym_Class,
      anon_sym_Type,
      anon_sym_DataSource,
      anon_sym_NumberOfElements,
      anon_sym_NumberOfDimensions,
  [1082] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_obrace,
    ACTIONS(149), 1,
      sym_cbrace,
    STATE(44), 1,
      aux_sym_matrix_repeat1,
    STATE(47), 1,
      sym_vector,
  [1098] = 5,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      aux_sym_string_literal_token1,
    ACTIONS(156), 1,
      sym_escape_sequence,
    ACTIONS(159), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_string_literal_repeat1,
  [1114] = 5,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      aux_sym_string_literal_token1,
    ACTIONS(165), 1,
      sym_escape_sequence,
    STATE(43), 1,
      aux_sym_string_literal_repeat1,
  [1130] = 5,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(171), 1,
      sym_escape_sequence,
    STATE(41), 1,
      aux_sym_string_literal_repeat1,
  [1146] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_obrace,
    ACTIONS(176), 1,
      sym_cbrace,
    STATE(44), 1,
      aux_sym_matrix_repeat1,
    STATE(47), 1,
      sym_vector,
  [1162] = 5,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      aux_sym_string_literal_token1,
    ACTIONS(182), 1,
      sym_escape_sequence,
    STATE(46), 1,
      aux_sym_string_literal_repeat1,
  [1178] = 5,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(171), 1,
      sym_escape_sequence,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      aux_sym_string_literal_repeat1,
  [1194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_comma,
    ACTIONS(186), 2,
      sym_obrace,
      sym_cbrace,
  [1205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 2,
      sym_obrace,
      sym_cbrace,
  [1213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_cpar,
    ACTIONS(192), 1,
      sym_vbar,
  [1223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_assign,
  [1230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_assign,
  [1237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_assign,
  [1244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_cpar,
  [1251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym_assign,
  [1258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 55,
  [SMALL_STATE(5)] = 104,
  [SMALL_STATE(6)] = 157,
  [SMALL_STATE(7)] = 204,
  [SMALL_STATE(8)] = 251,
  [SMALL_STATE(9)] = 295,
  [SMALL_STATE(10)] = 338,
  [SMALL_STATE(11)] = 379,
  [SMALL_STATE(12)] = 421,
  [SMALL_STATE(13)] = 463,
  [SMALL_STATE(14)] = 491,
  [SMALL_STATE(15)] = 516,
  [SMALL_STATE(16)] = 543,
  [SMALL_STATE(17)] = 574,
  [SMALL_STATE(18)] = 599,
  [SMALL_STATE(19)] = 624,
  [SMALL_STATE(20)] = 649,
  [SMALL_STATE(21)] = 674,
  [SMALL_STATE(22)] = 699,
  [SMALL_STATE(23)] = 724,
  [SMALL_STATE(24)] = 748,
  [SMALL_STATE(25)] = 770,
  [SMALL_STATE(26)] = 792,
  [SMALL_STATE(27)] = 814,
  [SMALL_STATE(28)] = 836,
  [SMALL_STATE(29)] = 858,
  [SMALL_STATE(30)] = 880,
  [SMALL_STATE(31)] = 901,
  [SMALL_STATE(32)] = 922,
  [SMALL_STATE(33)] = 942,
  [SMALL_STATE(34)] = 962,
  [SMALL_STATE(35)] = 982,
  [SMALL_STATE(36)] = 1002,
  [SMALL_STATE(37)] = 1022,
  [SMALL_STATE(38)] = 1042,
  [SMALL_STATE(39)] = 1062,
  [SMALL_STATE(40)] = 1082,
  [SMALL_STATE(41)] = 1098,
  [SMALL_STATE(42)] = 1114,
  [SMALL_STATE(43)] = 1130,
  [SMALL_STATE(44)] = 1146,
  [SMALL_STATE(45)] = 1162,
  [SMALL_STATE(46)] = 1178,
  [SMALL_STATE(47)] = 1194,
  [SMALL_STATE(48)] = 1205,
  [SMALL_STATE(49)] = 1213,
  [SMALL_STATE(50)] = 1223,
  [SMALL_STATE(51)] = 1230,
  [SMALL_STATE(52)] = 1237,
  [SMALL_STATE(53)] = 1244,
  [SMALL_STATE(54)] = 1251,
  [SMALL_STATE(55)] = 1258,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cdb_repeat1, 2, 0, 0),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cdb_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cdb_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cdb_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cdb, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtintype, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtintype, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp_var, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp_var, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matrix, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp_cast, 6, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp_cast, 6, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp_block, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp_block, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp_cast_scalar, 7, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp_cast_scalar, 7, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matrix_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matrix_repeat1, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matrix_repeat1, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marte_common, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_marte(void) {
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

#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 78
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_LF = 2,
  sym_comment = 3,
  aux_sym_directive_token1 = 4,
  sym_meta = 5,
  sym__attrsep = 6,
  anon_sym_SPACE = 7,
  anon_sym_TAB = 8,
  sym_attribute = 9,
  sym_macro = 10,
  sym_label = 11,
  aux_sym_instruction_token1 = 12,
  sym_opcode = 13,
  anon_sym_COMMA = 14,
  sym_macro_variable = 15,
  anon_sym_PLUS = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  sym__char = 19,
  sym__string = 20,
  sym__octal = 21,
  sym__decimal = 22,
  sym__hexadecimal = 23,
  aux_sym__float_token1 = 24,
  aux_sym__float_token2 = 25,
  aux_sym__float_token3 = 26,
  aux_sym__float_token4 = 27,
  sym__register = 28,
  sym__identifier = 29,
  sym_program = 30,
  sym__statement = 31,
  sym_directive = 32,
  sym_attributes = 33,
  sym__attribute = 34,
  sym__label = 35,
  sym_instruction = 36,
  sym_operands = 37,
  sym__operand = 38,
  sym__number = 39,
  sym_address = 40,
  sym__float = 41,
  sym_char = 42,
  sym_string = 43,
  sym_octal = 44,
  sym_decimal = 45,
  sym_hexadecimal = 46,
  sym_float = 47,
  sym_register = 48,
  aux_sym_program_repeat1 = 49,
  aux_sym_attributes_repeat1 = 50,
  aux_sym__label_repeat1 = 51,
  aux_sym_operands_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [aux_sym_directive_token1] = "directive_token1",
  [sym_meta] = "meta",
  [sym__attrsep] = "_attrsep",
  [anon_sym_SPACE] = " ",
  [anon_sym_TAB] = "\t",
  [sym_attribute] = "attribute",
  [sym_macro] = "macro",
  [sym_label] = "label",
  [aux_sym_instruction_token1] = "instruction_token1",
  [sym_opcode] = "opcode",
  [anon_sym_COMMA] = ",",
  [sym_macro_variable] = "macro_variable",
  [anon_sym_PLUS] = "+",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym__char] = "_char",
  [sym__string] = "_string",
  [sym__octal] = "_octal",
  [sym__decimal] = "_decimal",
  [sym__hexadecimal] = "_hexadecimal",
  [aux_sym__float_token1] = "_float_token1",
  [aux_sym__float_token2] = "_float_token2",
  [aux_sym__float_token3] = "_float_token3",
  [aux_sym__float_token4] = "_float_token4",
  [sym__register] = "_register",
  [sym__identifier] = "_identifier",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym_directive] = "directive",
  [sym_attributes] = "attributes",
  [sym__attribute] = "_attribute",
  [sym__label] = "_label",
  [sym_instruction] = "instruction",
  [sym_operands] = "operands",
  [sym__operand] = "_operand",
  [sym__number] = "_number",
  [sym_address] = "address",
  [sym__float] = "_float",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym_octal] = "octal",
  [sym_decimal] = "decimal",
  [sym_hexadecimal] = "hexadecimal",
  [sym_float] = "float",
  [sym_register] = "register",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym__label_repeat1] = "_label_repeat1",
  [aux_sym_operands_repeat1] = "operands_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [aux_sym_directive_token1] = aux_sym_directive_token1,
  [sym_meta] = sym_meta,
  [sym__attrsep] = sym__attrsep,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_TAB] = anon_sym_TAB,
  [sym_attribute] = sym_attribute,
  [sym_macro] = sym_macro,
  [sym_label] = sym_label,
  [aux_sym_instruction_token1] = aux_sym_instruction_token1,
  [sym_opcode] = sym_opcode,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_macro_variable] = sym_macro_variable,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__char] = sym__char,
  [sym__string] = sym__string,
  [sym__octal] = sym__octal,
  [sym__decimal] = sym__decimal,
  [sym__hexadecimal] = sym__hexadecimal,
  [aux_sym__float_token1] = aux_sym__float_token1,
  [aux_sym__float_token2] = aux_sym__float_token2,
  [aux_sym__float_token3] = aux_sym__float_token3,
  [aux_sym__float_token4] = aux_sym__float_token4,
  [sym__register] = sym__register,
  [sym__identifier] = sym__identifier,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym_directive] = sym_directive,
  [sym_attributes] = sym_attributes,
  [sym__attribute] = sym__attribute,
  [sym__label] = sym__label,
  [sym_instruction] = sym_instruction,
  [sym_operands] = sym_operands,
  [sym__operand] = sym__operand,
  [sym__number] = sym__number,
  [sym_address] = sym_address,
  [sym__float] = sym__float,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [sym_octal] = sym_octal,
  [sym_decimal] = sym_decimal,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_float] = sym_float,
  [sym_register] = sym_register,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym__label_repeat1] = aux_sym__label_repeat1,
  [aux_sym_operands_repeat1] = aux_sym_operands_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym__attrsep] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_macro_variable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
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
  [sym__char] = {
    .visible = false,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym__octal] = {
    .visible = false,
    .named = true,
  },
  [sym__decimal] = {
    .visible = false,
    .named = true,
  },
  [sym__hexadecimal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__float_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__float_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__float_token4] = {
    .visible = false,
    .named = false,
  },
  [sym__register] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__label] = {
    .visible = false,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_operands] = {
    .visible = true,
    .named = true,
  },
  [sym__operand] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym__float] = {
    .visible = false,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_octal] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__label_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operands_repeat1] = {
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
  [7] = 5,
  [8] = 6,
  [9] = 9,
  [10] = 9,
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
  [32] = 29,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 31,
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
  [49] = 42,
  [50] = 37,
  [51] = 51,
  [52] = 34,
  [53] = 25,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 56,
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
  [76] = 76,
  [77] = 77,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '\n', 35,
        '"', 43,
        '#', 36,
        '$', 53,
        '\'', 44,
        '(', 69,
        ')', 70,
        '+', 68,
        ',', 66,
        '-', 47,
        '.', 48,
        '0', 73,
        ';', 33,
        'E', 86,
        'e', 61,
        '\t', 1,
        ' ', 1,
        '%', 54,
        '\\', 54,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(87);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 35,
        '"', 43,
        '#', 36,
        '$', 53,
        '\'', 44,
        '(', 69,
        ')', 70,
        '+', 68,
        ',', 66,
        '-', 47,
        '.', 48,
        '0', 73,
        ';', 33,
        'E', 86,
        'e', 61,
        '\t', 1,
        ' ', 1,
        '%', 54,
        '\\', 54,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(87);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 35,
        '"', 43,
        '#', 36,
        '\'', 44,
        '-', 47,
        '.', 49,
        '0', 73,
        ';', 33,
        '\t', 2,
        ' ', 2,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\'' || ')' < lookahead) &&
          (lookahead < ',' || '.' < lookahead)) ADVANCE(55);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 35,
        '#', 37,
        '$', 19,
        '\'', 21,
        '(', 69,
        ',', 66,
        '-', 12,
        '.', 14,
        '0', 75,
        ';', 33,
        '\t', 3,
        ' ', 3,
        '%', 20,
        '\\', 20,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 35,
        '#', 37,
        '$', 19,
        '(', 69,
        ')', 70,
        '.', 18,
        ';', 33,
        '\t', 4,
        ' ', 4,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(71);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '0') ADVANCE(75);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 18:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 20:
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(7);
      END_STATE();
    case 22:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '\t', 42,
        '\n', 35,
        ' ', 41,
        '"', 43,
        '#', 36,
        '\'', 44,
        '-', 47,
        '.', 49,
        '0', 73,
        ';', 33,
        '(', 40,
        ')', 40,
        ',', 40,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 23:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '\t', 42,
        '\n', 35,
        ' ', 41,
        '#', 37,
        '(', 69,
        '+', 68,
        ',', 66,
        '.', 18,
        ';', 33,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(8);
      END_STATE();
    case 24:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '\t', 42,
        '\n', 35,
        ' ', 41,
        '#', 37,
        ',', 66,
        ';', 33,
        'E', 11,
        'e', 11,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(6);
      END_STATE();
    case 25:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '\t', 42,
        '\n', 35,
        ' ', 41,
        '#', 37,
        ';', 33,
        'E', 11,
        'e', 11,
        '(', 40,
        ')', 40,
        ',', 40,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(6);
      END_STATE();
    case 26:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '\n', 35,
        '"', 43,
        '#', 36,
        '\'', 44,
        '-', 47,
        '.', 49,
        '0', 73,
        ';', 33,
        '\t', 2,
        ' ', 2,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\'' || ')' < lookahead) &&
          (lookahead < ',' || '.' < lookahead)) ADVANCE(55);
      END_STATE();
    case 27:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '\n', 35,
        '#', 37,
        '$', 19,
        '\'', 21,
        '(', 69,
        ',', 66,
        '-', 12,
        '.', 14,
        '0', 75,
        ';', 33,
        '\t', 3,
        ' ', 3,
        '%', 20,
        '\\', 20,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 28:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '\n', 35,
        '#', 37,
        '$', 19,
        '(', 69,
        ')', 70,
        '.', 18,
        ';', 33,
        '\t', 4,
        ' ', 4,
      );
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(8);
      END_STATE();
    case 29:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(59);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(6);
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(6);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          (lookahead < ',' || '.' < lookahead)) ADVANCE(55);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '#') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(37);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_meta);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__attrsep);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(42);
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(42);
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_attribute);
      if (lookahead == '"') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(5);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_attribute);
      if (lookahead == '\'') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(7);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_attribute);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',') ADVANCE(55);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_attribute);
      if (lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-') ADVANCE(55);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_attribute);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '0') ADVANCE(73);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(55);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_attribute);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_attribute);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_attribute);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_attribute);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_attribute);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_attribute);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_macro);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(9);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(8);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(87);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(87);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == ':') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == ':') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__char);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__string);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__octal);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(52);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__octal);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__octal);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(17);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__octal);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__float_token3);
      if (lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__float_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 27},
  [4] = {.lex_state = 27},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 31},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 23},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 25},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 24},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 23},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 23},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 23},
  [47] = {.lex_state = 23},
  [48] = {.lex_state = 23},
  [49] = {.lex_state = 23},
  [50] = {.lex_state = 23},
  [51] = {.lex_state = 22},
  [52] = {.lex_state = 22},
  [53] = {.lex_state = 22},
  [54] = {.lex_state = 22},
  [55] = {.lex_state = 29},
  [56] = {.lex_state = 30},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 30},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 31},
  [65] = {.lex_state = 31},
  [66] = {.lex_state = 31},
  [67] = {.lex_state = 31},
  [68] = {.lex_state = 28},
  [69] = {.lex_state = 28},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 28},
  [72] = {.lex_state = 28},
  [73] = {.lex_state = 28},
  [74] = {.lex_state = 31},
  [75] = {.lex_state = 31},
  [76] = {.lex_state = 28},
  [77] = {.lex_state = 28},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_meta] = ACTIONS(1),
    [sym__attrsep] = ACTIONS(1),
    [sym_attribute] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [sym_opcode] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_macro_variable] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__char] = ACTIONS(1),
    [sym__string] = ACTIONS(1),
    [sym__octal] = ACTIONS(1),
    [sym__decimal] = ACTIONS(1),
    [sym__hexadecimal] = ACTIONS(1),
    [aux_sym__float_token1] = ACTIONS(1),
    [aux_sym__float_token2] = ACTIONS(1),
    [aux_sym__float_token3] = ACTIONS(1),
    [aux_sym__float_token4] = ACTIONS(1),
    [sym__register] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(70),
    [sym__statement] = STATE(15),
    [sym_directive] = STATE(57),
    [sym__label] = STATE(15),
    [sym_instruction] = STATE(57),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym_meta] = ACTIONS(11),
    [sym_macro] = ACTIONS(13),
    [sym_label] = ACTIONS(15),
    [sym_opcode] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(23), 1,
      sym_macro_variable,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym__char,
    ACTIONS(29), 1,
      sym__octal,
    ACTIONS(31), 1,
      sym__decimal,
    ACTIONS(33), 1,
      sym__hexadecimal,
    ACTIONS(37), 1,
      aux_sym__float_token4,
    ACTIONS(39), 1,
      sym__register,
    ACTIONS(41), 1,
      sym__identifier,
    STATE(49), 1,
      sym__float,
    STATE(61), 1,
      sym_operands,
    ACTIONS(35), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
    STATE(30), 9,
      sym__operand,
      sym__number,
      sym_address,
      sym_char,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
      sym_register,
  [57] = 15,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym__char,
    ACTIONS(29), 1,
      sym__octal,
    ACTIONS(31), 1,
      sym__decimal,
    ACTIONS(33), 1,
      sym__hexadecimal,
    ACTIONS(37), 1,
      aux_sym__float_token4,
    ACTIONS(39), 1,
      sym__register,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(45), 1,
      anon_sym_LF,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      sym_macro_variable,
    STATE(49), 1,
      sym__float,
    ACTIONS(35), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
    STATE(44), 9,
      sym__operand,
      sym__number,
      sym_address,
      sym_char,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
      sym_register,
  [114] = 15,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym__char,
    ACTIONS(29), 1,
      sym__octal,
    ACTIONS(31), 1,
      sym__decimal,
    ACTIONS(33), 1,
      sym__hexadecimal,
    ACTIONS(37), 1,
      aux_sym__float_token4,
    ACTIONS(39), 1,
      sym__register,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      sym_macro_variable,
    ACTIONS(53), 1,
      anon_sym_LF,
    STATE(49), 1,
      sym__float,
    ACTIONS(35), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
    STATE(44), 9,
      sym__operand,
      sym__number,
      sym_address,
      sym_char,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
      sym_register,
  [171] = 12,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym_attribute,
    ACTIONS(61), 1,
      sym__char,
    ACTIONS(63), 1,
      sym__string,
    ACTIONS(65), 1,
      sym__octal,
    ACTIONS(67), 1,
      sym__decimal,
    ACTIONS(69), 1,
      sym__hexadecimal,
    ACTIONS(73), 1,
      aux_sym__float_token4,
    STATE(42), 1,
      sym__float,
    ACTIONS(71), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    ACTIONS(57), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym__attrsep,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(41), 8,
      sym__attribute,
      sym__number,
      sym_char,
      sym_string,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
  [221] = 13,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym_attribute,
    ACTIONS(61), 1,
      sym__char,
    ACTIONS(63), 1,
      sym__string,
    ACTIONS(65), 1,
      sym__octal,
    ACTIONS(67), 1,
      sym__decimal,
    ACTIONS(69), 1,
      sym__hexadecimal,
    ACTIONS(73), 1,
      aux_sym__float_token4,
    ACTIONS(75), 1,
      sym__attrsep,
    STATE(42), 1,
      sym__float,
    ACTIONS(71), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    ACTIONS(57), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(41), 8,
      sym__attribute,
      sym__number,
      sym_char,
      sym_string,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
  [273] = 11,
    ACTIONS(59), 1,
      sym_attribute,
    ACTIONS(61), 1,
      sym__char,
    ACTIONS(63), 1,
      sym__string,
    ACTIONS(65), 1,
      sym__octal,
    ACTIONS(67), 1,
      sym__decimal,
    ACTIONS(69), 1,
      sym__hexadecimal,
    ACTIONS(73), 1,
      aux_sym__float_token4,
    STATE(42), 1,
      sym__float,
    ACTIONS(71), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    ACTIONS(57), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym__attrsep,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(41), 8,
      sym__attribute,
      sym__number,
      sym_char,
      sym_string,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
  [320] = 12,
    ACTIONS(59), 1,
      sym_attribute,
    ACTIONS(61), 1,
      sym__char,
    ACTIONS(63), 1,
      sym__string,
    ACTIONS(65), 1,
      sym__octal,
    ACTIONS(67), 1,
      sym__decimal,
    ACTIONS(69), 1,
      sym__hexadecimal,
    ACTIONS(73), 1,
      aux_sym__float_token4,
    ACTIONS(75), 1,
      sym__attrsep,
    STATE(42), 1,
      sym__float,
    ACTIONS(71), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    ACTIONS(57), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(41), 8,
      sym__attribute,
      sym__number,
      sym_char,
      sym_string,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
  [369] = 13,
    ACTIONS(65), 1,
      sym__octal,
    ACTIONS(67), 1,
      sym__decimal,
    ACTIONS(80), 1,
      anon_sym_LF,
    ACTIONS(82), 1,
      sym_attribute,
    ACTIONS(84), 1,
      sym__char,
    ACTIONS(86), 1,
      sym__string,
    ACTIONS(88), 1,
      sym__hexadecimal,
    ACTIONS(90), 1,
      aux_sym__float_token4,
    STATE(42), 1,
      sym__float,
    STATE(59), 1,
      sym_attributes,
    ACTIONS(71), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
    STATE(31), 8,
      sym__attribute,
      sym__number,
      sym_char,
      sym_string,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
  [419] = 13,
    ACTIONS(65), 1,
      sym__octal,
    ACTIONS(67), 1,
      sym__decimal,
    ACTIONS(80), 1,
      anon_sym_LF,
    ACTIONS(84), 1,
      sym__char,
    ACTIONS(86), 1,
      sym__string,
    ACTIONS(88), 1,
      sym__hexadecimal,
    ACTIONS(90), 1,
      aux_sym__float_token4,
    ACTIONS(92), 1,
      sym_attribute,
    STATE(42), 1,
      sym__float,
    STATE(59), 1,
      sym_attributes,
    ACTIONS(71), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    ACTIONS(78), 2,
      anon_sym_SEMI,
      sym_comment,
    STATE(36), 8,
      sym__attribute,
      sym__number,
      sym_char,
      sym_string,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
  [468] = 13,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym__char,
    ACTIONS(29), 1,
      sym__octal,
    ACTIONS(31), 1,
      sym__decimal,
    ACTIONS(33), 1,
      sym__hexadecimal,
    ACTIONS(37), 1,
      aux_sym__float_token4,
    ACTIONS(39), 1,
      sym__register,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      sym_macro_variable,
    STATE(49), 1,
      sym__float,
    ACTIONS(35), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    STATE(44), 9,
      sym__operand,
      sym__number,
      sym_address,
      sym_char,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
      sym_register,
  [517] = 12,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym__char,
    ACTIONS(29), 1,
      sym__octal,
    ACTIONS(31), 1,
      sym__decimal,
    ACTIONS(33), 1,
      sym__hexadecimal,
    ACTIONS(37), 1,
      aux_sym__float_token4,
    ACTIONS(39), 1,
      sym__register,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(94), 1,
      sym_macro_variable,
    STATE(49), 1,
      sym__float,
    ACTIONS(35), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    STATE(47), 9,
      sym__operand,
      sym__number,
      sym_address,
      sym_char,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
      sym_register,
  [563] = 12,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym__char,
    ACTIONS(29), 1,
      sym__octal,
    ACTIONS(31), 1,
      sym__decimal,
    ACTIONS(33), 1,
      sym__hexadecimal,
    ACTIONS(37), 1,
      aux_sym__float_token4,
    ACTIONS(39), 1,
      sym__register,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(49), 1,
      sym_macro_variable,
    STATE(49), 1,
      sym__float,
    ACTIONS(35), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    STATE(44), 9,
      sym__operand,
      sym__number,
      sym_address,
      sym_char,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
      sym_register,
  [609] = 10,
    ACTIONS(65), 1,
      sym__octal,
    ACTIONS(67), 1,
      sym__decimal,
    ACTIONS(84), 1,
      sym__char,
    ACTIONS(86), 1,
      sym__string,
    ACTIONS(88), 1,
      sym__hexadecimal,
    ACTIONS(90), 1,
      aux_sym__float_token4,
    ACTIONS(96), 1,
      sym_attribute,
    STATE(42), 1,
      sym__float,
    ACTIONS(71), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    STATE(45), 8,
      sym__attribute,
      sym__number,
      sym_char,
      sym_string,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
  [648] = 10,
    ACTIONS(11), 1,
      sym_meta,
    ACTIONS(15), 1,
      sym_label,
    ACTIONS(17), 1,
      sym_opcode,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(102), 1,
      anon_sym_LF,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_macro,
    STATE(60), 2,
      sym_directive,
      sym_instruction,
    STATE(16), 3,
      sym__statement,
      sym__label,
      aux_sym_program_repeat1,
  [682] = 10,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(113), 1,
      anon_sym_LF,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(119), 1,
      sym_meta,
    ACTIONS(122), 1,
      sym_macro,
    ACTIONS(125), 1,
      sym_label,
    ACTIONS(128), 1,
      sym_opcode,
    STATE(63), 2,
      sym_directive,
      sym_instruction,
    STATE(16), 3,
      sym__statement,
      sym__label,
      aux_sym_program_repeat1,
  [716] = 4,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      aux_sym__label_repeat1,
    ACTIONS(135), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(133), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym_meta,
      sym_macro,
      sym_label,
      sym_opcode,
  [736] = 4,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym__label_repeat1,
    ACTIONS(142), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(140), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym_meta,
      sym_macro,
      sym_label,
      sym_opcode,
  [756] = 4,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      aux_sym__label_repeat1,
    ACTIONS(148), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(146), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym_meta,
      sym_macro,
      sym_label,
      sym_opcode,
  [776] = 4,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 1,
      anon_sym_PLUS,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [794] = 2,
    ACTIONS(160), 2,
      anon_sym_LF,
      sym_opcode,
    ACTIONS(158), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      sym_meta,
      sym_macro,
      sym_label,
  [807] = 3,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [822] = 5,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_operands_repeat1,
    ACTIONS(166), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(45), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [841] = 3,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [856] = 5,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 1,
      sym__attrsep,
    STATE(25), 1,
      aux_sym_attributes_repeat1,
    ACTIONS(181), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(176), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [875] = 3,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [890] = 3,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [905] = 5,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_operands_repeat1,
    ACTIONS(196), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(194), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [924] = 3,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 1,
      aux_sym__float_token3,
    ACTIONS(204), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym__attrsep,
      anon_sym_SPACE,
      anon_sym_TAB,
  [939] = 5,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_operands_repeat1,
    ACTIONS(212), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(210), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [958] = 5,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      sym__attrsep,
    STATE(34), 1,
      aux_sym_attributes_repeat1,
    ACTIONS(220), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(216), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [977] = 3,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 1,
      aux_sym__float_token3,
    ACTIONS(204), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [992] = 2,
    ACTIONS(226), 2,
      anon_sym_LF,
      sym_opcode,
    ACTIONS(224), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      sym_meta,
      sym_macro,
      sym_label,
  [1005] = 5,
    ACTIONS(218), 1,
      sym__attrsep,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      aux_sym_attributes_repeat1,
    ACTIONS(220), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(230), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [1024] = 2,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(234), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [1036] = 4,
    ACTIONS(236), 1,
      sym__attrsep,
    STATE(52), 1,
      aux_sym_attributes_repeat1,
    ACTIONS(238), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(216), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [1052] = 2,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym__attrsep,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1064] = 2,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym__attrsep,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1076] = 2,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym__attrsep,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1088] = 2,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym__attrsep,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1100] = 2,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym__attrsep,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1112] = 2,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym__attrsep,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1124] = 2,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [1136] = 2,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [1148] = 2,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym__attrsep,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1160] = 2,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [1172] = 2,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [1184] = 2,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    ACTIONS(266), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [1196] = 2,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [1208] = 2,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [1220] = 2,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym__attrsep,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1232] = 4,
    ACTIONS(236), 1,
      sym__attrsep,
    STATE(53), 1,
      aux_sym_attributes_repeat1,
    ACTIONS(238), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(230), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [1248] = 4,
    ACTIONS(268), 1,
      sym__attrsep,
    STATE(53), 1,
      aux_sym_attributes_repeat1,
    ACTIONS(271), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(176), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [1264] = 2,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym__attrsep,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1276] = 3,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 1,
      aux_sym_instruction_token1,
    ACTIONS(280), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [1288] = 3,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 1,
      aux_sym_directive_token1,
    ACTIONS(286), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [1300] = 4,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    ACTIONS(292), 1,
      anon_sym_LF,
    ACTIONS(294), 1,
      sym_comment,
  [1313] = 2,
    ACTIONS(296), 2,
      sym__char,
      sym__hexadecimal,
    ACTIONS(298), 2,
      sym__octal,
      sym__decimal,
  [1322] = 2,
    ACTIONS(302), 1,
      anon_sym_LF,
    ACTIONS(300), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
  [1331] = 4,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    ACTIONS(292), 1,
      anon_sym_LF,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(306), 1,
      sym_comment,
  [1344] = 2,
    ACTIONS(310), 1,
      anon_sym_LF,
    ACTIONS(308), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
  [1353] = 2,
    ACTIONS(312), 1,
      aux_sym_directive_token1,
    ACTIONS(286), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [1362] = 3,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    ACTIONS(292), 1,
      anon_sym_LF,
    ACTIONS(314), 1,
      sym_comment,
  [1372] = 2,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 1,
      anon_sym_LF,
  [1379] = 2,
    ACTIONS(290), 1,
      anon_sym_LF,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
  [1386] = 2,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 1,
      anon_sym_LF,
  [1393] = 2,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(290), 1,
      anon_sym_LF,
  [1400] = 1,
    ACTIONS(320), 1,
      sym__register,
  [1404] = 1,
    ACTIONS(322), 1,
      sym__register,
  [1408] = 1,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
  [1412] = 1,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
  [1416] = 1,
    ACTIONS(328), 1,
      sym__register,
  [1420] = 1,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
  [1424] = 1,
    ACTIONS(290), 1,
      anon_sym_LF,
  [1428] = 1,
    ACTIONS(318), 1,
      anon_sym_LF,
  [1432] = 1,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
  [1436] = 1,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 114,
  [SMALL_STATE(5)] = 171,
  [SMALL_STATE(6)] = 221,
  [SMALL_STATE(7)] = 273,
  [SMALL_STATE(8)] = 320,
  [SMALL_STATE(9)] = 369,
  [SMALL_STATE(10)] = 419,
  [SMALL_STATE(11)] = 468,
  [SMALL_STATE(12)] = 517,
  [SMALL_STATE(13)] = 563,
  [SMALL_STATE(14)] = 609,
  [SMALL_STATE(15)] = 648,
  [SMALL_STATE(16)] = 682,
  [SMALL_STATE(17)] = 716,
  [SMALL_STATE(18)] = 736,
  [SMALL_STATE(19)] = 756,
  [SMALL_STATE(20)] = 776,
  [SMALL_STATE(21)] = 794,
  [SMALL_STATE(22)] = 807,
  [SMALL_STATE(23)] = 822,
  [SMALL_STATE(24)] = 841,
  [SMALL_STATE(25)] = 856,
  [SMALL_STATE(26)] = 875,
  [SMALL_STATE(27)] = 890,
  [SMALL_STATE(28)] = 905,
  [SMALL_STATE(29)] = 924,
  [SMALL_STATE(30)] = 939,
  [SMALL_STATE(31)] = 958,
  [SMALL_STATE(32)] = 977,
  [SMALL_STATE(33)] = 992,
  [SMALL_STATE(34)] = 1005,
  [SMALL_STATE(35)] = 1024,
  [SMALL_STATE(36)] = 1036,
  [SMALL_STATE(37)] = 1052,
  [SMALL_STATE(38)] = 1064,
  [SMALL_STATE(39)] = 1076,
  [SMALL_STATE(40)] = 1088,
  [SMALL_STATE(41)] = 1100,
  [SMALL_STATE(42)] = 1112,
  [SMALL_STATE(43)] = 1124,
  [SMALL_STATE(44)] = 1136,
  [SMALL_STATE(45)] = 1148,
  [SMALL_STATE(46)] = 1160,
  [SMALL_STATE(47)] = 1172,
  [SMALL_STATE(48)] = 1184,
  [SMALL_STATE(49)] = 1196,
  [SMALL_STATE(50)] = 1208,
  [SMALL_STATE(51)] = 1220,
  [SMALL_STATE(52)] = 1232,
  [SMALL_STATE(53)] = 1248,
  [SMALL_STATE(54)] = 1264,
  [SMALL_STATE(55)] = 1276,
  [SMALL_STATE(56)] = 1288,
  [SMALL_STATE(57)] = 1300,
  [SMALL_STATE(58)] = 1313,
  [SMALL_STATE(59)] = 1322,
  [SMALL_STATE(60)] = 1331,
  [SMALL_STATE(61)] = 1344,
  [SMALL_STATE(62)] = 1353,
  [SMALL_STATE(63)] = 1362,
  [SMALL_STATE(64)] = 1372,
  [SMALL_STATE(65)] = 1379,
  [SMALL_STATE(66)] = 1386,
  [SMALL_STATE(67)] = 1393,
  [SMALL_STATE(68)] = 1400,
  [SMALL_STATE(69)] = 1404,
  [SMALL_STATE(70)] = 1408,
  [SMALL_STATE(71)] = 1412,
  [SMALL_STATE(72)] = 1416,
  [SMALL_STATE(73)] = 1420,
  [SMALL_STATE(74)] = 1424,
  [SMALL_STATE(75)] = 1428,
  [SMALL_STATE(76)] = 1432,
  [SMALL_STATE(77)] = 1436,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attributes_repeat1, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attributes_repeat1, 1, 0, 0), SHIFT_REPEAT(14),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__label_repeat1, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__label_repeat1, 2, 0, 0),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__label_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 6, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 6, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 2, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 3, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attributes_repeat1, 3, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1, 0, 0),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [324] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
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

TS_PUBLIC const TSLanguage *tree_sitter_mips(void) {
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

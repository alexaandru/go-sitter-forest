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
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '\n', 29,
        '"', 37,
        '#', 30,
        '$', 47,
        '\'', 38,
        '(', 63,
        ')', 64,
        '+', 62,
        ',', 60,
        '-', 41,
        '.', 42,
        '0', 67,
        ';', 28,
        'E', 80,
        'e', 55,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '%' ||
          lookahead == '\\') ADVANCE(48);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          (lookahead < ',' || '.' < lookahead)) ADVANCE(49);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(65);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == ':') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '0') ADVANCE(69);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 14:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 16:
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(3);
      END_STATE();
    case 18:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '\t', 36,
        '\n', 29,
        ' ', 35,
        '"', 37,
        '#', 30,
        '\'', 38,
        '-', 41,
        '.', 43,
        '0', 67,
        ';', 28,
        '(', 34,
        ')', 34,
        ',', 34,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(49);
      END_STATE();
    case 19:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '\t', 36,
        '\n', 29,
        ' ', 35,
        '#', 31,
        '(', 63,
        '+', 62,
        ',', 60,
        '.', 14,
        ';', 28,
      );
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(4);
      END_STATE();
    case 20:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '\t', 36,
        '\n', 29,
        ' ', 35,
        '#', 31,
        ',', 60,
        ';', 28,
        'E', 7,
        'e', 7,
      );
      END_STATE();
    case 21:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '\t', 36,
        '\n', 29,
        ' ', 35,
        '#', 31,
        ';', 28,
        'E', 7,
        'e', 7,
        '(', 34,
        ')', 34,
        ',', 34,
      );
      END_STATE();
    case 22:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '\n', 29,
        '"', 37,
        '#', 30,
        '\'', 38,
        '-', 41,
        '.', 43,
        '0', 67,
        ';', 28,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          (lookahead < ',' || '.' < lookahead)) ADVANCE(49);
      END_STATE();
    case 23:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '\n', 29,
        '#', 31,
        '$', 15,
        '\'', 17,
        '(', 63,
        ',', 60,
        '-', 8,
        '.', 10,
        '0', 69,
        ';', 28,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23);
      if (lookahead == '%' ||
          lookahead == '\\') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 24:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == ';') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(4);
      END_STATE();
    case 25:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == ';') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == ';') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_meta);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__attrsep);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_attribute);
      if (lookahead == '"') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(2);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_attribute);
      if (lookahead == '\'') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(3);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_attribute);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',') ADVANCE(49);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_attribute);
      if (lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-') ADVANCE(49);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_attribute);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '0') ADVANCE(67);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(49);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_attribute);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_attribute);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_attribute);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_attribute);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_attribute);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_attribute);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_macro);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(5);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == ':') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(4);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == ':') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == ':') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == ':') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == ':') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__char);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__string);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__octal);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(46);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__octal);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__octal);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(13);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__octal);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__float_token3);
      if (lookahead == ':') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__float_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == ':') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 19},
  [24] = {.lex_state = 19},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 24},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 19},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 19},
  [45] = {.lex_state = 18},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 19},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 25},
  [56] = {.lex_state = 26},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 26},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 24},
  [69] = {.lex_state = 24},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 24},
  [72] = {.lex_state = 24},
  [73] = {.lex_state = 24},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 24},
  [77] = {.lex_state = 24},
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
    [anon_sym_LF] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_meta] = ACTIONS(9),
    [sym_macro] = ACTIONS(11),
    [sym_label] = ACTIONS(13),
    [sym_opcode] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(19), 1,
      sym_macro_variable,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__char,
    ACTIONS(25), 1,
      sym__octal,
    ACTIONS(27), 1,
      sym__decimal,
    ACTIONS(29), 1,
      sym__hexadecimal,
    ACTIONS(33), 1,
      aux_sym__float_token4,
    ACTIONS(35), 1,
      sym__register,
    ACTIONS(37), 1,
      sym__identifier,
    STATE(49), 1,
      sym__float,
    STATE(61), 1,
      sym_operands,
    ACTIONS(31), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    ACTIONS(17), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
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
  [55] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__char,
    ACTIONS(25), 1,
      sym__octal,
    ACTIONS(27), 1,
      sym__decimal,
    ACTIONS(29), 1,
      sym__hexadecimal,
    ACTIONS(33), 1,
      aux_sym__float_token4,
    ACTIONS(35), 1,
      sym__register,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    ACTIONS(43), 1,
      sym_macro_variable,
    STATE(49), 1,
      sym__float,
    ACTIONS(31), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
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
  [110] = 14,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__char,
    ACTIONS(25), 1,
      sym__octal,
    ACTIONS(27), 1,
      sym__decimal,
    ACTIONS(29), 1,
      sym__hexadecimal,
    ACTIONS(33), 1,
      aux_sym__float_token4,
    ACTIONS(35), 1,
      sym__register,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    ACTIONS(43), 1,
      sym_macro_variable,
    STATE(49), 1,
      sym__float,
    ACTIONS(31), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    ACTIONS(45), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
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
  [165] = 12,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_attribute,
    ACTIONS(53), 1,
      sym__char,
    ACTIONS(55), 1,
      sym__string,
    ACTIONS(57), 1,
      sym__octal,
    ACTIONS(59), 1,
      sym__decimal,
    ACTIONS(61), 1,
      sym__hexadecimal,
    ACTIONS(65), 1,
      aux_sym__float_token4,
    STATE(42), 1,
      sym__float,
    ACTIONS(63), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    ACTIONS(49), 6,
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
  [215] = 13,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_attribute,
    ACTIONS(53), 1,
      sym__char,
    ACTIONS(55), 1,
      sym__string,
    ACTIONS(57), 1,
      sym__octal,
    ACTIONS(59), 1,
      sym__decimal,
    ACTIONS(61), 1,
      sym__hexadecimal,
    ACTIONS(65), 1,
      aux_sym__float_token4,
    ACTIONS(67), 1,
      sym__attrsep,
    STATE(42), 1,
      sym__float,
    ACTIONS(63), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    ACTIONS(49), 5,
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
  [267] = 11,
    ACTIONS(51), 1,
      sym_attribute,
    ACTIONS(53), 1,
      sym__char,
    ACTIONS(55), 1,
      sym__string,
    ACTIONS(57), 1,
      sym__octal,
    ACTIONS(59), 1,
      sym__decimal,
    ACTIONS(61), 1,
      sym__hexadecimal,
    ACTIONS(65), 1,
      aux_sym__float_token4,
    STATE(42), 1,
      sym__float,
    ACTIONS(63), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    ACTIONS(49), 6,
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
  [314] = 12,
    ACTIONS(51), 1,
      sym_attribute,
    ACTIONS(53), 1,
      sym__char,
    ACTIONS(55), 1,
      sym__string,
    ACTIONS(57), 1,
      sym__octal,
    ACTIONS(59), 1,
      sym__decimal,
    ACTIONS(61), 1,
      sym__hexadecimal,
    ACTIONS(65), 1,
      aux_sym__float_token4,
    ACTIONS(67), 1,
      sym__attrsep,
    STATE(42), 1,
      sym__float,
    ACTIONS(63), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    ACTIONS(49), 5,
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
  [363] = 12,
    ACTIONS(57), 1,
      sym__octal,
    ACTIONS(59), 1,
      sym__decimal,
    ACTIONS(72), 1,
      sym_attribute,
    ACTIONS(74), 1,
      sym__char,
    ACTIONS(76), 1,
      sym__string,
    ACTIONS(78), 1,
      sym__hexadecimal,
    ACTIONS(80), 1,
      aux_sym__float_token4,
    STATE(42), 1,
      sym__float,
    STATE(59), 1,
      sym_attributes,
    ACTIONS(63), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
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
  [411] = 12,
    ACTIONS(57), 1,
      sym__octal,
    ACTIONS(59), 1,
      sym__decimal,
    ACTIONS(74), 1,
      sym__char,
    ACTIONS(76), 1,
      sym__string,
    ACTIONS(78), 1,
      sym__hexadecimal,
    ACTIONS(80), 1,
      aux_sym__float_token4,
    ACTIONS(82), 1,
      sym_attribute,
    STATE(42), 1,
      sym__float,
    STATE(59), 1,
      sym_attributes,
    ACTIONS(63), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    ACTIONS(70), 3,
      anon_sym_SEMI,
      anon_sym_LF,
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
  [458] = 13,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__char,
    ACTIONS(25), 1,
      sym__octal,
    ACTIONS(27), 1,
      sym__decimal,
    ACTIONS(29), 1,
      sym__hexadecimal,
    ACTIONS(33), 1,
      aux_sym__float_token4,
    ACTIONS(35), 1,
      sym__register,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    ACTIONS(43), 1,
      sym_macro_variable,
    STATE(49), 1,
      sym__float,
    ACTIONS(31), 2,
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
  [507] = 12,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__char,
    ACTIONS(25), 1,
      sym__octal,
    ACTIONS(27), 1,
      sym__decimal,
    ACTIONS(29), 1,
      sym__hexadecimal,
    ACTIONS(33), 1,
      aux_sym__float_token4,
    ACTIONS(35), 1,
      sym__register,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(84), 1,
      sym_macro_variable,
    STATE(49), 1,
      sym__float,
    ACTIONS(31), 2,
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
  [553] = 12,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__char,
    ACTIONS(25), 1,
      sym__octal,
    ACTIONS(27), 1,
      sym__decimal,
    ACTIONS(29), 1,
      sym__hexadecimal,
    ACTIONS(33), 1,
      aux_sym__float_token4,
    ACTIONS(35), 1,
      sym__register,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(43), 1,
      sym_macro_variable,
    STATE(49), 1,
      sym__float,
    ACTIONS(31), 2,
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
  [599] = 10,
    ACTIONS(57), 1,
      sym__octal,
    ACTIONS(59), 1,
      sym__decimal,
    ACTIONS(74), 1,
      sym__char,
    ACTIONS(76), 1,
      sym__string,
    ACTIONS(78), 1,
      sym__hexadecimal,
    ACTIONS(80), 1,
      aux_sym__float_token4,
    ACTIONS(86), 1,
      sym_attribute,
    STATE(42), 1,
      sym__float,
    ACTIONS(63), 2,
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
  [638] = 9,
    ACTIONS(9), 1,
      sym_meta,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(15), 1,
      sym_opcode,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_macro,
    ACTIONS(90), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(60), 2,
      sym_directive,
      sym_instruction,
    STATE(16), 3,
      sym__statement,
      sym__label,
      aux_sym_program_repeat1,
  [670] = 9,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_meta,
    ACTIONS(107), 1,
      sym_macro,
    ACTIONS(110), 1,
      sym_label,
    ACTIONS(113), 1,
      sym_opcode,
    ACTIONS(98), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(63), 2,
      sym_directive,
      sym_instruction,
    STATE(16), 3,
      sym__statement,
      sym__label,
      aux_sym_program_repeat1,
  [702] = 4,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      aux_sym__label_repeat1,
    ACTIONS(120), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(118), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym_meta,
      sym_macro,
      sym_label,
      sym_opcode,
  [722] = 4,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym__label_repeat1,
    ACTIONS(127), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(125), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym_meta,
      sym_macro,
      sym_label,
      sym_opcode,
  [742] = 4,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      aux_sym__label_repeat1,
    ACTIONS(133), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(131), 7,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym_meta,
      sym_macro,
      sym_label,
      sym_opcode,
  [762] = 4,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [780] = 2,
    ACTIONS(145), 1,
      sym_opcode,
    ACTIONS(143), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym_meta,
      sym_macro,
      sym_label,
  [793] = 3,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [808] = 5,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_operands_repeat1,
    ACTIONS(153), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(151), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [827] = 3,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [842] = 5,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 1,
      sym__attrsep,
    STATE(25), 1,
      aux_sym_attributes_repeat1,
    ACTIONS(168), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(163), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [861] = 3,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(173), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [876] = 3,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [891] = 5,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_operands_repeat1,
    ACTIONS(183), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(181), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [910] = 3,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 1,
      aux_sym__float_token3,
    ACTIONS(191), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym__attrsep,
      anon_sym_SPACE,
      anon_sym_TAB,
  [925] = 5,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_operands_repeat1,
    ACTIONS(199), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(197), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [944] = 5,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      sym__attrsep,
    STATE(34), 1,
      aux_sym_attributes_repeat1,
    ACTIONS(207), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(203), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [963] = 3,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      aux_sym__float_token3,
    ACTIONS(191), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [978] = 2,
    ACTIONS(213), 1,
      sym_opcode,
    ACTIONS(211), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym_meta,
      sym_macro,
      sym_label,
  [991] = 5,
    ACTIONS(205), 1,
      sym__attrsep,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      aux_sym_attributes_repeat1,
    ACTIONS(207), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(217), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [1010] = 2,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [1022] = 4,
    ACTIONS(223), 1,
      sym__attrsep,
    STATE(52), 1,
      aux_sym_attributes_repeat1,
    ACTIONS(225), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(203), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [1038] = 2,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym__attrsep,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1050] = 2,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym__attrsep,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1062] = 2,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(173), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym__attrsep,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1074] = 2,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym__attrsep,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1086] = 2,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym__attrsep,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1098] = 2,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(233), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym__attrsep,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1110] = 2,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [1122] = 2,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [1134] = 2,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym__attrsep,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1146] = 2,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(245), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [1158] = 2,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    ACTIONS(249), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [1170] = 2,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [1182] = 2,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(233), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [1194] = 2,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [1206] = 2,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym__attrsep,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1218] = 4,
    ACTIONS(223), 1,
      sym__attrsep,
    STATE(53), 1,
      aux_sym_attributes_repeat1,
    ACTIONS(225), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(217), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [1234] = 4,
    ACTIONS(255), 1,
      sym__attrsep,
    STATE(53), 1,
      aux_sym_attributes_repeat1,
    ACTIONS(258), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(163), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [1250] = 2,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    ACTIONS(263), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
      sym__attrsep,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1262] = 3,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 1,
      aux_sym_instruction_token1,
    ACTIONS(267), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [1274] = 3,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    ACTIONS(275), 1,
      aux_sym_directive_token1,
    ACTIONS(273), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [1286] = 3,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(279), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1297] = 2,
    ACTIONS(281), 2,
      sym__char,
      sym__hexadecimal,
    ACTIONS(283), 2,
      sym__octal,
      sym__decimal,
  [1306] = 1,
    ACTIONS(285), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [1313] = 3,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    ACTIONS(289), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1324] = 1,
    ACTIONS(291), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [1331] = 2,
    ACTIONS(293), 1,
      aux_sym_directive_token1,
    ACTIONS(273), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_comment,
  [1340] = 2,
    ACTIONS(295), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1348] = 2,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
    ACTIONS(299), 1,
      anon_sym_LF,
  [1355] = 2,
    ACTIONS(277), 1,
      anon_sym_LF,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
  [1362] = 2,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    ACTIONS(299), 1,
      anon_sym_LF,
  [1369] = 2,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 1,
      anon_sym_LF,
  [1376] = 1,
    ACTIONS(301), 1,
      sym__register,
  [1380] = 1,
    ACTIONS(303), 1,
      sym__register,
  [1384] = 1,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
  [1388] = 1,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
  [1392] = 1,
    ACTIONS(309), 1,
      sym__register,
  [1396] = 1,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
  [1400] = 1,
    ACTIONS(277), 1,
      anon_sym_LF,
  [1404] = 1,
    ACTIONS(299), 1,
      anon_sym_LF,
  [1408] = 1,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
  [1412] = 1,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 165,
  [SMALL_STATE(6)] = 215,
  [SMALL_STATE(7)] = 267,
  [SMALL_STATE(8)] = 314,
  [SMALL_STATE(9)] = 363,
  [SMALL_STATE(10)] = 411,
  [SMALL_STATE(11)] = 458,
  [SMALL_STATE(12)] = 507,
  [SMALL_STATE(13)] = 553,
  [SMALL_STATE(14)] = 599,
  [SMALL_STATE(15)] = 638,
  [SMALL_STATE(16)] = 670,
  [SMALL_STATE(17)] = 702,
  [SMALL_STATE(18)] = 722,
  [SMALL_STATE(19)] = 742,
  [SMALL_STATE(20)] = 762,
  [SMALL_STATE(21)] = 780,
  [SMALL_STATE(22)] = 793,
  [SMALL_STATE(23)] = 808,
  [SMALL_STATE(24)] = 827,
  [SMALL_STATE(25)] = 842,
  [SMALL_STATE(26)] = 861,
  [SMALL_STATE(27)] = 876,
  [SMALL_STATE(28)] = 891,
  [SMALL_STATE(29)] = 910,
  [SMALL_STATE(30)] = 925,
  [SMALL_STATE(31)] = 944,
  [SMALL_STATE(32)] = 963,
  [SMALL_STATE(33)] = 978,
  [SMALL_STATE(34)] = 991,
  [SMALL_STATE(35)] = 1010,
  [SMALL_STATE(36)] = 1022,
  [SMALL_STATE(37)] = 1038,
  [SMALL_STATE(38)] = 1050,
  [SMALL_STATE(39)] = 1062,
  [SMALL_STATE(40)] = 1074,
  [SMALL_STATE(41)] = 1086,
  [SMALL_STATE(42)] = 1098,
  [SMALL_STATE(43)] = 1110,
  [SMALL_STATE(44)] = 1122,
  [SMALL_STATE(45)] = 1134,
  [SMALL_STATE(46)] = 1146,
  [SMALL_STATE(47)] = 1158,
  [SMALL_STATE(48)] = 1170,
  [SMALL_STATE(49)] = 1182,
  [SMALL_STATE(50)] = 1194,
  [SMALL_STATE(51)] = 1206,
  [SMALL_STATE(52)] = 1218,
  [SMALL_STATE(53)] = 1234,
  [SMALL_STATE(54)] = 1250,
  [SMALL_STATE(55)] = 1262,
  [SMALL_STATE(56)] = 1274,
  [SMALL_STATE(57)] = 1286,
  [SMALL_STATE(58)] = 1297,
  [SMALL_STATE(59)] = 1306,
  [SMALL_STATE(60)] = 1313,
  [SMALL_STATE(61)] = 1324,
  [SMALL_STATE(62)] = 1331,
  [SMALL_STATE(63)] = 1340,
  [SMALL_STATE(64)] = 1348,
  [SMALL_STATE(65)] = 1355,
  [SMALL_STATE(66)] = 1362,
  [SMALL_STATE(67)] = 1369,
  [SMALL_STATE(68)] = 1376,
  [SMALL_STATE(69)] = 1380,
  [SMALL_STATE(70)] = 1384,
  [SMALL_STATE(71)] = 1388,
  [SMALL_STATE(72)] = 1392,
  [SMALL_STATE(73)] = 1396,
  [SMALL_STATE(74)] = 1400,
  [SMALL_STATE(75)] = 1404,
  [SMALL_STATE(76)] = 1408,
  [SMALL_STATE(77)] = 1412,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attributes_repeat1, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attributes_repeat1, 1, 0, 0), SHIFT_REPEAT(14),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__label_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__label_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__label_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 1, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 6, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 6, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attributes_repeat1, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1, 0, 0),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [305] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
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

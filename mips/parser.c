#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_SEMI = 2,
  aux_sym_directive_token1 = 3,
  sym_meta = 4,
  aux_sym_attributes_token1 = 5,
  sym_macro = 6,
  sym_label = 7,
  sym_opcode = 8,
  anon_sym_COMMA = 9,
  aux_sym_operands_token1 = 10,
  sym_macro_variable = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  sym__char = 14,
  sym__string = 15,
  sym__octal = 16,
  sym__decimal = 17,
  sym__hexadecimal = 18,
  aux_sym__float_token1 = 19,
  aux_sym__float_token2 = 20,
  aux_sym__float_token3 = 21,
  aux_sym__float_token4 = 22,
  sym__register = 23,
  sym__identifier = 24,
  sym_line_comment = 25,
  sym_block_comment = 26,
  sym_source_file = 27,
  sym__statement = 28,
  sym_directive = 29,
  sym_attributes = 30,
  sym_instruction = 31,
  sym_operands = 32,
  sym__operand = 33,
  sym__number = 34,
  sym_address = 35,
  sym__float = 36,
  sym_char = 37,
  sym_string = 38,
  sym_octal = 39,
  sym_decimal = 40,
  sym_hexadecimal = 41,
  sym_float = 42,
  sym_register = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_operands_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [aux_sym_directive_token1] = "directive_token1",
  [sym_meta] = "meta",
  [aux_sym_attributes_token1] = "attributes_token1",
  [sym_macro] = "macro",
  [sym_label] = "label",
  [sym_opcode] = "opcode",
  [anon_sym_COMMA] = ",",
  [aux_sym_operands_token1] = "operands_token1",
  [sym_macro_variable] = "macro_variable",
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
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_directive] = "directive",
  [sym_attributes] = "attributes",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_operands_repeat1] = "operands_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_directive_token1] = aux_sym_directive_token1,
  [sym_meta] = sym_meta,
  [aux_sym_attributes_token1] = aux_sym_attributes_token1,
  [sym_macro] = sym_macro,
  [sym_label] = sym_label,
  [sym_opcode] = sym_opcode,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_operands_token1] = aux_sym_operands_token1,
  [sym_macro_variable] = sym_macro_variable,
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
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_directive] = sym_directive,
  [sym_attributes] = sym_attributes,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_operands_repeat1] = aux_sym_operands_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_attributes_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operands_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_macro_variable] = {
    .visible = true,
    .named = true,
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
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
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
  [aux_sym_source_file_repeat1] = {
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
  [23] = 7,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 18,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 21,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '\n', 29,
        '"', 2,
        '#', 70,
        '$', 21,
        '\'', 23,
        '(', 53,
        ')', 54,
        ',', 50,
        '-', 13,
        '.', 16,
        '/', 7,
        '0', 57,
        ';', 30,
        'E', 67,
        'e', 45,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '%' ||
          lookahead == '\\') ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 2,
        '#', 70,
        '\'', 34,
        '-', 39,
        '.', 40,
        '/', 36,
        '0', 57,
        '\t', 33,
        ' ', 33,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '#', 70,
        '$', 21,
        '\'', 23,
        '(', 53,
        '-', 13,
        '.', 15,
        '/', 7,
        '0', 57,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '%' ||
          lookahead == '\\') ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(55);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '0') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 22:
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(4);
      END_STATE();
    case 24:
      if (eof) ADVANCE(28);
      if (lookahead == '\t') SKIP(24);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 25:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(5);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(26);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_meta);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '-' || '9' < lookahead)) ADVANCE(41);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '0') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_macro);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(5);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == ':') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == ':') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_operands_token1);
      if (lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__char);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__string);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__octal);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(19);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__octal);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__float_token3);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__float_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 24},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 27},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_meta] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [sym_opcode] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_macro_variable] = ACTIONS(1),
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
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(41),
    [sym__statement] = STATE(22),
    [sym_directive] = STATE(22),
    [sym_instruction] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_meta] = ACTIONS(7),
    [sym_macro] = ACTIONS(9),
    [sym_label] = ACTIONS(11),
    [sym_opcode] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_operands] = STATE(29),
    [sym__operand] = STATE(13),
    [sym__number] = STATE(13),
    [sym_address] = STATE(13),
    [sym__float] = STATE(18),
    [sym_char] = STATE(13),
    [sym_octal] = STATE(13),
    [sym_decimal] = STATE(13),
    [sym_hexadecimal] = STATE(13),
    [sym_float] = STATE(13),
    [sym_register] = STATE(13),
    [sym_macro_variable] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym__char] = ACTIONS(19),
    [sym__octal] = ACTIONS(21),
    [sym__decimal] = ACTIONS(23),
    [sym__hexadecimal] = ACTIONS(25),
    [aux_sym__float_token1] = ACTIONS(27),
    [aux_sym__float_token2] = ACTIONS(27),
    [aux_sym__float_token4] = ACTIONS(29),
    [sym__register] = ACTIONS(31),
    [sym__identifier] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym__char,
    ACTIONS(21), 1,
      sym__octal,
    ACTIONS(23), 1,
      sym__decimal,
    ACTIONS(25), 1,
      sym__hexadecimal,
    ACTIONS(29), 1,
      aux_sym__float_token4,
    ACTIONS(31), 1,
      sym__register,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(35), 1,
      sym_macro_variable,
    STATE(18), 1,
      sym__float,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    STATE(16), 9,
      sym__operand,
      sym__number,
      sym_address,
      sym_char,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
      sym_register,
  [50] = 12,
    ACTIONS(37), 1,
      aux_sym_attributes_token1,
    ACTIONS(39), 1,
      sym__char,
    ACTIONS(41), 1,
      sym__string,
    ACTIONS(43), 1,
      sym__octal,
    ACTIONS(45), 1,
      sym__decimal,
    ACTIONS(47), 1,
      sym__hexadecimal,
    ACTIONS(51), 1,
      aux_sym__float_token4,
    STATE(31), 1,
      sym__float,
    STATE(32), 1,
      sym_attributes,
    ACTIONS(49), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    ACTIONS(53), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(33), 7,
      sym__number,
      sym_char,
      sym_string,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
  [95] = 7,
    ACTIONS(7), 1,
      sym_meta,
    ACTIONS(11), 1,
      sym_label,
    ACTIONS(13), 1,
      sym_opcode,
    ACTIONS(57), 1,
      sym_macro,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(34), 3,
      sym__statement,
      sym_directive,
      sym_instruction,
  [122] = 7,
    ACTIONS(7), 1,
      sym_meta,
    ACTIONS(11), 1,
      sym_label,
    ACTIONS(13), 1,
      sym_opcode,
    ACTIONS(61), 1,
      sym_macro,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(30), 3,
      sym__statement,
      sym_directive,
      sym_instruction,
  [149] = 4,
    ACTIONS(67), 1,
      aux_sym__float_token3,
    ACTIONS(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      aux_sym_operands_token1,
    ACTIONS(65), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [166] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      aux_sym_operands_token1,
    ACTIONS(71), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [183] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      aux_sym_operands_token1,
    ACTIONS(77), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [200] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      aux_sym_operands_token1,
    ACTIONS(81), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [217] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      aux_sym_operands_token1,
    ACTIONS(85), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [234] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      aux_sym_operands_token1,
    ACTIONS(89), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [251] = 6,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      aux_sym_operands_token1,
    STATE(14), 1,
      aux_sym_operands_repeat1,
    ACTIONS(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(93), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [272] = 6,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      aux_sym_operands_token1,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      aux_sym_operands_repeat1,
    ACTIONS(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(101), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [293] = 6,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      aux_sym_operands_token1,
    STATE(15), 1,
      aux_sym_operands_repeat1,
    ACTIONS(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(105), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [314] = 3,
    ACTIONS(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      aux_sym_operands_token1,
    ACTIONS(105), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [328] = 3,
    ACTIONS(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      aux_sym_operands_token1,
    ACTIONS(115), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [342] = 3,
    ACTIONS(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      aux_sym_operands_token1,
    ACTIONS(119), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [356] = 3,
    ACTIONS(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      aux_sym_operands_token1,
    ACTIONS(123), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [370] = 3,
    ACTIONS(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      aux_sym_operands_token1,
    ACTIONS(127), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [384] = 3,
    ACTIONS(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      aux_sym_operands_token1,
    ACTIONS(131), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [398] = 4,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(135), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [413] = 3,
    ACTIONS(137), 1,
      aux_sym__float_token3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
  [426] = 4,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      aux_sym_directive_token1,
    ACTIONS(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [441] = 4,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(135), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [456] = 4,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      aux_sym_directive_token1,
    ACTIONS(53), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [471] = 4,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(155), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [486] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
  [496] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(158), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
  [506] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(160), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
  [516] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
  [526] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(162), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
  [536] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(164), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
  [546] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(153), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
  [556] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
  [566] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(129), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
  [576] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
  [586] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(166), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
  [596] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
  [606] = 2,
    ACTIONS(168), 1,
      sym__register,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [614] = 2,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [622] = 2,
    ACTIONS(172), 1,
      sym__register,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [630] = 2,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [638] = 2,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 122,
  [SMALL_STATE(7)] = 149,
  [SMALL_STATE(8)] = 166,
  [SMALL_STATE(9)] = 183,
  [SMALL_STATE(10)] = 200,
  [SMALL_STATE(11)] = 217,
  [SMALL_STATE(12)] = 234,
  [SMALL_STATE(13)] = 251,
  [SMALL_STATE(14)] = 272,
  [SMALL_STATE(15)] = 293,
  [SMALL_STATE(16)] = 314,
  [SMALL_STATE(17)] = 328,
  [SMALL_STATE(18)] = 342,
  [SMALL_STATE(19)] = 356,
  [SMALL_STATE(20)] = 370,
  [SMALL_STATE(21)] = 384,
  [SMALL_STATE(22)] = 398,
  [SMALL_STATE(23)] = 413,
  [SMALL_STATE(24)] = 426,
  [SMALL_STATE(25)] = 441,
  [SMALL_STATE(26)] = 456,
  [SMALL_STATE(27)] = 471,
  [SMALL_STATE(28)] = 486,
  [SMALL_STATE(29)] = 496,
  [SMALL_STATE(30)] = 506,
  [SMALL_STATE(31)] = 516,
  [SMALL_STATE(32)] = 526,
  [SMALL_STATE(33)] = 536,
  [SMALL_STATE(34)] = 546,
  [SMALL_STATE(35)] = 556,
  [SMALL_STATE(36)] = 566,
  [SMALL_STATE(37)] = 576,
  [SMALL_STATE(38)] = 586,
  [SMALL_STATE(39)] = 596,
  [SMALL_STATE(40)] = 606,
  [SMALL_STATE(41)] = 614,
  [SMALL_STATE(42)] = 622,
  [SMALL_STATE(43)] = 630,
  [SMALL_STATE(44)] = 638,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [170] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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

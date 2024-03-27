#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_COMMA = 2,
  anon_sym_COLON = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_byte = 6,
  anon_sym_word = 7,
  anon_sym_dword = 8,
  anon_sym_qword = 9,
  anon_sym_ptr = 10,
  anon_sym_LBRACK = 11,
  anon_sym_PLUS = 12,
  anon_sym_DASH = 13,
  anon_sym_RBRACK = 14,
  anon_sym_STAR = 15,
  anon_sym_rel = 16,
  anon_sym_POUND = 17,
  aux_sym_int_token1 = 18,
  aux_sym_int_token2 = 19,
  sym_float = 20,
  sym_string = 21,
  sym_word = 22,
  sym__reg = 23,
  sym_address = 24,
  sym_meta_ident = 25,
  sym__ident = 26,
  aux_sym_line_comment_token1 = 27,
  aux_sym_line_comment_token2 = 28,
  sym_block_comment = 29,
  sym_program = 30,
  sym__item = 31,
  sym_meta = 32,
  sym_label = 33,
  sym_instruction = 34,
  sym__expr = 35,
  sym_ptr = 36,
  sym_int = 37,
  sym_reg = 38,
  sym_ident = 39,
  sym_line_comment = 40,
  aux_sym_program_repeat1 = 41,
  aux_sym_program_repeat2 = 42,
  aux_sym_meta_repeat1 = 43,
  aux_sym_meta_repeat2 = 44,
  aux_sym_meta_repeat3 = 45,
  aux_sym_instruction_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_byte] = "byte",
  [anon_sym_word] = "word",
  [anon_sym_dword] = "dword",
  [anon_sym_qword] = "qword",
  [anon_sym_ptr] = "ptr",
  [anon_sym_LBRACK] = "[",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_RBRACK] = "]",
  [anon_sym_STAR] = "*",
  [anon_sym_rel] = "rel",
  [anon_sym_POUND] = "#",
  [aux_sym_int_token1] = "int_token1",
  [aux_sym_int_token2] = "int_token2",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_word] = "word",
  [sym__reg] = "_reg",
  [sym_address] = "address",
  [sym_meta_ident] = "meta_ident",
  [sym__ident] = "_ident",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [aux_sym_line_comment_token2] = "line_comment_token2",
  [sym_block_comment] = "block_comment",
  [sym_program] = "program",
  [sym__item] = "_item",
  [sym_meta] = "meta",
  [sym_label] = "label",
  [sym_instruction] = "instruction",
  [sym__expr] = "_expr",
  [sym_ptr] = "ptr",
  [sym_int] = "int",
  [sym_reg] = "reg",
  [sym_ident] = "ident",
  [sym_line_comment] = "line_comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_program_repeat2] = "program_repeat2",
  [aux_sym_meta_repeat1] = "meta_repeat1",
  [aux_sym_meta_repeat2] = "meta_repeat2",
  [aux_sym_meta_repeat3] = "meta_repeat3",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_word] = anon_sym_word,
  [anon_sym_dword] = anon_sym_dword,
  [anon_sym_qword] = anon_sym_qword,
  [anon_sym_ptr] = anon_sym_ptr,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_rel] = anon_sym_rel,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_int_token1] = aux_sym_int_token1,
  [aux_sym_int_token2] = aux_sym_int_token2,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_word] = sym_word,
  [sym__reg] = sym__reg,
  [sym_address] = sym_address,
  [sym_meta_ident] = sym_meta_ident,
  [sym__ident] = sym__ident,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [aux_sym_line_comment_token2] = aux_sym_line_comment_token2,
  [sym_block_comment] = sym_block_comment,
  [sym_program] = sym_program,
  [sym__item] = sym__item,
  [sym_meta] = sym_meta,
  [sym_label] = sym_label,
  [sym_instruction] = sym_instruction,
  [sym__expr] = sym__expr,
  [sym_ptr] = sym_ptr,
  [sym_int] = sym_int,
  [sym_reg] = sym_reg,
  [sym_ident] = sym_ident,
  [sym_line_comment] = sym_line_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
  [aux_sym_meta_repeat1] = aux_sym_meta_repeat1,
  [aux_sym_meta_repeat2] = aux_sym_meta_repeat2,
  [aux_sym_meta_repeat3] = aux_sym_meta_repeat3,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_word] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_qword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym__reg] = {
    .visible = false,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_ident] = {
    .visible = true,
    .named = true,
  },
  [sym__ident] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_ptr] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_reg] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_program_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_kind = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_kind] = "kind",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_kind, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = sym_ident,
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
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == ';') ADVANCE(102);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(81);
      if (lookahead == 'q') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 'w') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '0') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '0') ADVANCE(59);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(18);
      if (lookahead == '0') ADVANCE(46);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(102);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == ';') ADVANCE(102);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 14:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '$') ADVANCE(18);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(46);
      if (lookahead == ';') ADVANCE(102);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(102);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 22:
      if (eof) ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 23:
      if (eof) ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == ';') ADVANCE(102);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'q') ADVANCE(84);
      if (lookahead == 'w') ADVANCE(74);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == ';') ADVANCE(102);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '.') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '.') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '.') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '.') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (lookahead == '.') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_rel);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_rel);
      if (lookahead == '.') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == 'x') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(88);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(88);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'x') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(88);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'x') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == 'x') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(65);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == 'l') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == 't') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == 't') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == 'y') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__reg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_meta_ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_meta_ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '*') ADVANCE(98);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 22},
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
  [54] = {.lex_state = 23},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 23},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 100},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 23},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {(TSStateId)(-1)},
  [76] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_word] = ACTIONS(1),
    [anon_sym_dword] = ACTIONS(1),
    [anon_sym_qword] = ACTIONS(1),
    [anon_sym_ptr] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_rel] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_string] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym__reg] = ACTIONS(1),
    [sym_address] = ACTIONS(1),
    [sym_meta_ident] = ACTIONS(1),
    [sym__ident] = ACTIONS(1),
    [aux_sym_line_comment_token2] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_program] = STATE(69),
    [sym__item] = STATE(22),
    [sym_meta] = STATE(59),
    [sym_label] = STATE(59),
    [sym_instruction] = STATE(59),
    [sym_line_comment] = STATE(1),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_word] = ACTIONS(11),
    [sym_meta_ident] = ACTIONS(13),
    [aux_sym_line_comment_token2] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(7),
  },
  [2] = {
    [sym__expr] = STATE(25),
    [sym_ptr] = STATE(40),
    [sym_int] = STATE(26),
    [sym_reg] = STATE(15),
    [sym_ident] = STATE(40),
    [sym_line_comment] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(21),
    [anon_sym_word] = ACTIONS(21),
    [anon_sym_dword] = ACTIONS(21),
    [anon_sym_qword] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(27),
    [aux_sym_int_token2] = ACTIONS(29),
    [sym_float] = ACTIONS(31),
    [sym_string] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
    [sym__reg] = ACTIONS(35),
    [sym_address] = ACTIONS(35),
    [sym_meta_ident] = ACTIONS(37),
    [sym__ident] = ACTIONS(37),
    [aux_sym_line_comment_token2] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(7),
  },
  [3] = {
    [sym__expr] = STATE(49),
    [sym_ptr] = STATE(40),
    [sym_int] = STATE(26),
    [sym_reg] = STATE(15),
    [sym_ident] = STATE(40),
    [sym_line_comment] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(21),
    [anon_sym_word] = ACTIONS(21),
    [anon_sym_dword] = ACTIONS(21),
    [anon_sym_qword] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(27),
    [aux_sym_int_token2] = ACTIONS(29),
    [sym_float] = ACTIONS(31),
    [sym_string] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
    [sym__reg] = ACTIONS(35),
    [sym_address] = ACTIONS(35),
    [sym_meta_ident] = ACTIONS(37),
    [sym__ident] = ACTIONS(37),
    [aux_sym_line_comment_token2] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(7),
  },
  [4] = {
    [sym__expr] = STATE(49),
    [sym_ptr] = STATE(40),
    [sym_int] = STATE(26),
    [sym_reg] = STATE(15),
    [sym_ident] = STATE(40),
    [sym_line_comment] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(21),
    [anon_sym_word] = ACTIONS(21),
    [anon_sym_dword] = ACTIONS(21),
    [anon_sym_qword] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(27),
    [aux_sym_int_token2] = ACTIONS(29),
    [sym_float] = ACTIONS(31),
    [sym_string] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
    [sym__reg] = ACTIONS(35),
    [sym_address] = ACTIONS(35),
    [sym_meta_ident] = ACTIONS(37),
    [sym__ident] = ACTIONS(37),
    [aux_sym_line_comment_token2] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(7),
  },
  [5] = {
    [sym__expr] = STATE(49),
    [sym_ptr] = STATE(40),
    [sym_int] = STATE(26),
    [sym_reg] = STATE(15),
    [sym_ident] = STATE(40),
    [sym_line_comment] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(21),
    [anon_sym_word] = ACTIONS(21),
    [anon_sym_dword] = ACTIONS(21),
    [anon_sym_qword] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(27),
    [aux_sym_int_token2] = ACTIONS(29),
    [sym_float] = ACTIONS(31),
    [sym_string] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
    [sym__reg] = ACTIONS(35),
    [sym_address] = ACTIONS(35),
    [sym_meta_ident] = ACTIONS(37),
    [sym__ident] = ACTIONS(37),
    [aux_sym_line_comment_token2] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      aux_sym_int_token2,
    ACTIONS(45), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      sym_float,
    ACTIONS(49), 1,
      sym_string,
    STATE(6), 1,
      sym_line_comment,
    STATE(15), 1,
      sym_reg,
    STATE(30), 1,
      sym_int,
    STATE(57), 1,
      sym_ident,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(35), 3,
      sym_word,
      sym__reg,
      sym_address,
  [47] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      aux_sym_int_token2,
    STATE(7), 1,
      sym_line_comment,
    STATE(15), 1,
      sym_reg,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
    STATE(73), 2,
      sym_int,
      sym_ident,
    ACTIONS(35), 3,
      sym_word,
      sym__reg,
      sym_address,
  [79] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      aux_sym_int_token2,
    STATE(8), 1,
      sym_line_comment,
    STATE(15), 1,
      sym_reg,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
    STATE(68), 2,
      sym_int,
      sym_ident,
    ACTIONS(35), 3,
      sym_word,
      sym__reg,
      sym_address,
  [111] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      sym_word,
    ACTIONS(13), 1,
      sym_meta_ident,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_LF,
    STATE(9), 1,
      sym_line_comment,
    STATE(16), 1,
      aux_sym_program_repeat1,
    STATE(55), 1,
      sym__item,
    STATE(59), 3,
      sym_meta,
      sym_label,
      sym_instruction,
  [147] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      sym_word,
    ACTIONS(13), 1,
      sym_meta_ident,
    ACTIONS(53), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_line_comment,
    STATE(16), 1,
      aux_sym_program_repeat1,
    STATE(55), 1,
      sym__item,
    STATE(59), 3,
      sym_meta,
      sym_label,
      sym_instruction,
  [183] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      sym_word,
    ACTIONS(13), 1,
      sym_meta_ident,
    ACTIONS(53), 1,
      anon_sym_LF,
    STATE(11), 1,
      sym_line_comment,
    STATE(16), 1,
      aux_sym_program_repeat1,
    STATE(55), 1,
      sym__item,
    STATE(59), 3,
      sym_meta,
      sym_label,
      sym_instruction,
  [216] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(57), 1,
      sym_address,
    STATE(12), 1,
      sym_line_comment,
    STATE(15), 1,
      sym_reg,
    STATE(61), 1,
      sym_ident,
    ACTIONS(35), 2,
      sym_word,
      sym__reg,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
  [246] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(57), 1,
      sym_address,
    STATE(13), 1,
      sym_line_comment,
    STATE(15), 1,
      sym_reg,
    STATE(67), 1,
      sym_ident,
    ACTIONS(35), 2,
      sym_word,
      sym__reg,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
  [276] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(59), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [298] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(15), 1,
      sym_line_comment,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [318] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_LF,
    STATE(16), 2,
      sym_line_comment,
      aux_sym_program_repeat1,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      sym_word,
      sym_meta_ident,
  [340] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(17), 1,
      sym_line_comment,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
  [360] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(18), 1,
      sym_line_comment,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
  [380] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      sym_line_comment,
    STATE(27), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [403] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(20), 2,
      sym_line_comment,
      aux_sym_meta_repeat3,
  [424] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      sym__reg,
    STATE(21), 1,
      sym_line_comment,
    STATE(43), 1,
      sym_reg,
    ACTIONS(57), 2,
      sym_word,
      sym_address,
  [447] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(53), 1,
      anon_sym_LF,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_program_repeat1,
    STATE(22), 1,
      sym_line_comment,
    STATE(33), 1,
      aux_sym_program_repeat2,
  [472] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(23), 2,
      sym_line_comment,
      aux_sym_meta_repeat1,
  [493] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(24), 2,
      sym_line_comment,
      aux_sym_meta_repeat2,
  [514] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_instruction_repeat1,
    STATE(25), 1,
      sym_line_comment,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [537] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_line_comment,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [558] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(27), 2,
      sym_line_comment,
      aux_sym_instruction_repeat1,
  [579] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      sym_line_comment,
    STATE(39), 1,
      aux_sym_meta_repeat2,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [602] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      sym_line_comment,
    STATE(37), 1,
      aux_sym_meta_repeat3,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [625] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      sym_line_comment,
    STATE(36), 1,
      aux_sym_meta_repeat1,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [648] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      sym__reg,
    STATE(31), 1,
      sym_line_comment,
    STATE(46), 1,
      sym_reg,
    ACTIONS(57), 2,
      sym_word,
      sym_address,
  [671] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(32), 1,
      sym_line_comment,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_word,
      sym_meta_ident,
  [690] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(53), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_program_repeat1,
    STATE(33), 1,
      sym_line_comment,
    STATE(34), 1,
      aux_sym_program_repeat2,
  [715] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      anon_sym_LF,
    STATE(11), 1,
      aux_sym_program_repeat1,
    STATE(34), 2,
      sym_line_comment,
      aux_sym_program_repeat2,
  [738] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      sym__reg,
    STATE(35), 1,
      sym_line_comment,
    STATE(60), 1,
      sym_reg,
    ACTIONS(57), 2,
      sym_word,
      sym_address,
  [761] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_meta_repeat1,
    STATE(36), 1,
      sym_line_comment,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [784] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_meta_repeat3,
    STATE(37), 1,
      sym_line_comment,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [807] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      sym__reg,
    STATE(38), 1,
      sym_line_comment,
    STATE(64), 1,
      sym_reg,
    ACTIONS(57), 2,
      sym_word,
      sym_address,
  [830] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_meta_repeat2,
    STATE(39), 1,
      sym_line_comment,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [853] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(40), 1,
      sym_line_comment,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [871] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(41), 1,
      sym_line_comment,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [889] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(42), 1,
      sym_line_comment,
    ACTIONS(123), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [907] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym_line_comment,
    ACTIONS(125), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [927] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(44), 1,
      sym_line_comment,
    ACTIONS(129), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [945] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_line_comment,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [965] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym_line_comment,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [985] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(47), 1,
      sym_line_comment,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1003] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(48), 1,
      sym_line_comment,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1021] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(49), 1,
      sym_line_comment,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1039] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_line_comment,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1059] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(51), 1,
      sym_line_comment,
    ACTIONS(74), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1077] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(52), 1,
      sym_line_comment,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1095] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(53), 1,
      sym_line_comment,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1112] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      aux_sym_int_token2,
    STATE(48), 1,
      sym_int,
    STATE(54), 1,
      sym_line_comment,
  [1131] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(55), 1,
      sym_line_comment,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1148] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(56), 1,
      sym_line_comment,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1165] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(57), 1,
      sym_line_comment,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1182] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      aux_sym_int_token2,
    STATE(58), 1,
      sym_line_comment,
    STATE(68), 1,
      sym_int,
  [1201] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(59), 1,
      sym_line_comment,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1218] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_line_comment,
  [1234] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      sym_line_comment,
  [1250] = 5,
    ACTIONS(155), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      aux_sym_line_comment_token1,
    ACTIONS(159), 1,
      aux_sym_line_comment_token2,
    ACTIONS(161), 1,
      sym_block_comment,
    STATE(62), 1,
      sym_line_comment,
  [1266] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(163), 1,
      anon_sym_ptr,
    STATE(63), 1,
      sym_line_comment,
  [1282] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      sym_line_comment,
  [1298] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(167), 1,
      aux_sym_int_token1,
    STATE(65), 1,
      sym_line_comment,
  [1314] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(169), 1,
      anon_sym_rel,
    STATE(66), 1,
      sym_line_comment,
  [1330] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      sym_line_comment,
  [1346] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      sym_line_comment,
  [1362] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    STATE(69), 1,
      sym_line_comment,
  [1378] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(175), 1,
      sym_float,
    STATE(70), 1,
      sym_line_comment,
  [1394] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      sym_line_comment,
  [1410] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    STATE(72), 1,
      sym_line_comment,
  [1426] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_line_comment,
  [1442] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(183), 1,
      sym_string,
    STATE(74), 1,
      sym_line_comment,
  [1458] = 1,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
  [1462] = 1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 47,
  [SMALL_STATE(8)] = 79,
  [SMALL_STATE(9)] = 111,
  [SMALL_STATE(10)] = 147,
  [SMALL_STATE(11)] = 183,
  [SMALL_STATE(12)] = 216,
  [SMALL_STATE(13)] = 246,
  [SMALL_STATE(14)] = 276,
  [SMALL_STATE(15)] = 298,
  [SMALL_STATE(16)] = 318,
  [SMALL_STATE(17)] = 340,
  [SMALL_STATE(18)] = 360,
  [SMALL_STATE(19)] = 380,
  [SMALL_STATE(20)] = 403,
  [SMALL_STATE(21)] = 424,
  [SMALL_STATE(22)] = 447,
  [SMALL_STATE(23)] = 472,
  [SMALL_STATE(24)] = 493,
  [SMALL_STATE(25)] = 514,
  [SMALL_STATE(26)] = 537,
  [SMALL_STATE(27)] = 558,
  [SMALL_STATE(28)] = 579,
  [SMALL_STATE(29)] = 602,
  [SMALL_STATE(30)] = 625,
  [SMALL_STATE(31)] = 648,
  [SMALL_STATE(32)] = 671,
  [SMALL_STATE(33)] = 690,
  [SMALL_STATE(34)] = 715,
  [SMALL_STATE(35)] = 738,
  [SMALL_STATE(36)] = 761,
  [SMALL_STATE(37)] = 784,
  [SMALL_STATE(38)] = 807,
  [SMALL_STATE(39)] = 830,
  [SMALL_STATE(40)] = 853,
  [SMALL_STATE(41)] = 871,
  [SMALL_STATE(42)] = 889,
  [SMALL_STATE(43)] = 907,
  [SMALL_STATE(44)] = 927,
  [SMALL_STATE(45)] = 945,
  [SMALL_STATE(46)] = 965,
  [SMALL_STATE(47)] = 985,
  [SMALL_STATE(48)] = 1003,
  [SMALL_STATE(49)] = 1021,
  [SMALL_STATE(50)] = 1039,
  [SMALL_STATE(51)] = 1059,
  [SMALL_STATE(52)] = 1077,
  [SMALL_STATE(53)] = 1095,
  [SMALL_STATE(54)] = 1112,
  [SMALL_STATE(55)] = 1131,
  [SMALL_STATE(56)] = 1148,
  [SMALL_STATE(57)] = 1165,
  [SMALL_STATE(58)] = 1182,
  [SMALL_STATE(59)] = 1201,
  [SMALL_STATE(60)] = 1218,
  [SMALL_STATE(61)] = 1234,
  [SMALL_STATE(62)] = 1250,
  [SMALL_STATE(63)] = 1266,
  [SMALL_STATE(64)] = 1282,
  [SMALL_STATE(65)] = 1298,
  [SMALL_STATE(66)] = 1314,
  [SMALL_STATE(67)] = 1330,
  [SMALL_STATE(68)] = 1346,
  [SMALL_STATE(69)] = 1362,
  [SMALL_STATE(70)] = 1378,
  [SMALL_STATE(71)] = 1394,
  [SMALL_STATE(72)] = 1410,
  [SMALL_STATE(73)] = 1426,
  [SMALL_STATE(74)] = 1442,
  [SMALL_STATE(75)] = 1458,
  [SMALL_STATE(76)] = 1462,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2), SHIFT_REPEAT(74),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2), SHIFT_REPEAT(54),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2), SHIFT_REPEAT(70),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(5),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(32),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 7),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 5),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5, .production_id = 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [173] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 1),
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

TS_PUBLIC const TSLanguage *tree_sitter_asm() {
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

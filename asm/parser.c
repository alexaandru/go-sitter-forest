#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
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
  sym_meta_ident = 24,
  sym__ident = 25,
  aux_sym_line_comment_token1 = 26,
  aux_sym_line_comment_token2 = 27,
  sym_block_comment = 28,
  sym_program = 29,
  sym__item = 30,
  sym_meta = 31,
  sym_label = 32,
  sym_instruction = 33,
  sym__expr = 34,
  sym_ptr = 35,
  sym_int = 36,
  sym_reg = 37,
  sym_ident = 38,
  sym_line_comment = 39,
  aux_sym_program_repeat1 = 40,
  aux_sym_program_repeat2 = 41,
  aux_sym_meta_repeat1 = 42,
  aux_sym_meta_repeat2 = 43,
  aux_sym_meta_repeat3 = 44,
  aux_sym_instruction_repeat1 = 45,
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
      if (eof) ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(98);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(78);
      if (lookahead == 'q') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == 'w') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '0') ADVANCE(55);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '0') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '0') ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(98);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(99);
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
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(47);
      if (lookahead == ';') ADVANCE(98);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ';') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 20:
      if (eof) ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(98);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead == 'q') ADVANCE(81);
      if (lookahead == 'w') ADVANCE(71);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(98);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '.') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '.') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '.') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '.') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (lookahead == '.') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_rel);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_rel);
      if (lookahead == '.') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == 'x') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'x') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'x') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == 'x') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(62);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 't') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 't') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'w') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'w') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'y') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__reg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_meta_ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_meta_ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == ';') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 20},
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
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 20},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 20},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 20},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 21},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 21},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 21},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 96},
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
    [sym_meta_ident] = ACTIONS(1),
    [sym__ident] = ACTIONS(1),
    [aux_sym_line_comment_token2] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_program] = STATE(70),
    [sym__item] = STATE(21),
    [sym_meta] = STATE(56),
    [sym_label] = STATE(56),
    [sym_instruction] = STATE(56),
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
    [sym_ptr] = STATE(46),
    [sym_int] = STATE(26),
    [sym_reg] = STATE(15),
    [sym_ident] = STATE(46),
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
    [sym_meta_ident] = ACTIONS(37),
    [sym__ident] = ACTIONS(37),
    [aux_sym_line_comment_token2] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(7),
  },
  [3] = {
    [sym__expr] = STATE(37),
    [sym_ptr] = STATE(46),
    [sym_int] = STATE(26),
    [sym_reg] = STATE(15),
    [sym_ident] = STATE(46),
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
    [sym_meta_ident] = ACTIONS(37),
    [sym__ident] = ACTIONS(37),
    [aux_sym_line_comment_token2] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(7),
  },
  [4] = {
    [sym__expr] = STATE(37),
    [sym_ptr] = STATE(46),
    [sym_int] = STATE(26),
    [sym_reg] = STATE(15),
    [sym_ident] = STATE(46),
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
    [sym_meta_ident] = ACTIONS(37),
    [sym__ident] = ACTIONS(37),
    [aux_sym_line_comment_token2] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      aux_sym_int_token2,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_string,
    STATE(5), 1,
      sym_line_comment,
    STATE(15), 1,
      sym_reg,
    STATE(26), 1,
      sym_int,
    STATE(37), 1,
      sym__expr,
    ACTIONS(35), 2,
      sym_word,
      sym__reg,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
    STATE(46), 2,
      sym_ptr,
      sym_ident,
    ACTIONS(21), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [58] = 14,
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
    ACTIONS(35), 2,
      sym_word,
      sym__reg,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [104] = 11,
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
    STATE(7), 1,
      sym_line_comment,
    STATE(16), 1,
      aux_sym_program_repeat1,
    STATE(54), 1,
      sym__item,
    STATE(56), 3,
      sym_meta,
      sym_label,
      sym_instruction,
  [140] = 11,
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
    STATE(8), 1,
      sym_line_comment,
    STATE(16), 1,
      aux_sym_program_repeat1,
    STATE(54), 1,
      sym__item,
    STATE(56), 3,
      sym_meta,
      sym_label,
      sym_instruction,
  [176] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      aux_sym_int_token2,
    STATE(9), 1,
      sym_line_comment,
    STATE(15), 1,
      sym_reg,
    ACTIONS(35), 2,
      sym_word,
      sym__reg,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
    STATE(73), 2,
      sym_int,
      sym_ident,
  [207] = 10,
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
    STATE(10), 1,
      sym_line_comment,
    STATE(16), 1,
      aux_sym_program_repeat1,
    STATE(54), 1,
      sym__item,
    STATE(56), 3,
      sym_meta,
      sym_label,
      sym_instruction,
  [240] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      aux_sym_int_token2,
    STATE(11), 1,
      sym_line_comment,
    STATE(15), 1,
      sym_reg,
    ACTIONS(35), 2,
      sym_word,
      sym__reg,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
    STATE(69), 2,
      sym_int,
      sym_ident,
  [271] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(12), 1,
      sym_line_comment,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [293] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(13), 1,
      sym_line_comment,
    STATE(15), 1,
      sym_reg,
    STATE(60), 1,
      sym_ident,
    ACTIONS(35), 2,
      sym_word,
      sym__reg,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
  [320] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(14), 1,
      sym_line_comment,
    STATE(15), 1,
      sym_reg,
    STATE(62), 1,
      sym_ident,
    ACTIONS(35), 2,
      sym_word,
      sym__reg,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
  [347] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(15), 1,
      sym_line_comment,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [367] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(63), 1,
      anon_sym_LF,
    STATE(16), 2,
      sym_line_comment,
      aux_sym_program_repeat1,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      sym_word,
      sym_meta_ident,
  [389] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(17), 1,
      sym_line_comment,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
  [409] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(18), 1,
      sym_line_comment,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
  [429] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      sym_line_comment,
    STATE(27), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [452] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      sym_line_comment,
    STATE(23), 1,
      aux_sym_meta_repeat3,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [475] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(53), 1,
      anon_sym_LF,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      aux_sym_program_repeat1,
    STATE(21), 1,
      sym_line_comment,
    STATE(33), 1,
      aux_sym_program_repeat2,
  [500] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(22), 2,
      sym_line_comment,
      aux_sym_meta_repeat1,
  [521] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(23), 2,
      sym_line_comment,
      aux_sym_meta_repeat3,
  [542] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(24), 2,
      sym_line_comment,
      aux_sym_meta_repeat2,
  [563] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_instruction_repeat1,
    STATE(25), 1,
      sym_line_comment,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [586] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_line_comment,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [607] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(27), 2,
      sym_line_comment,
      aux_sym_instruction_repeat1,
  [628] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      sym_line_comment,
    STATE(35), 1,
      aux_sym_meta_repeat2,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [651] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_meta_repeat3,
    STATE(29), 1,
      sym_line_comment,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [674] = 7,
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
    STATE(34), 1,
      aux_sym_meta_repeat1,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [697] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 1,
      anon_sym_LF,
    STATE(10), 1,
      aux_sym_program_repeat1,
    STATE(31), 2,
      sym_line_comment,
      aux_sym_program_repeat2,
  [720] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(32), 1,
      sym_line_comment,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_word,
      sym_meta_ident,
  [739] = 8,
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
    STATE(7), 1,
      aux_sym_program_repeat1,
    STATE(31), 1,
      aux_sym_program_repeat2,
    STATE(33), 1,
      sym_line_comment,
  [764] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_meta_repeat1,
    STATE(34), 1,
      sym_line_comment,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [787] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_meta_repeat2,
    STATE(35), 1,
      sym_line_comment,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [810] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      sym__reg,
    ACTIONS(119), 1,
      sym_word,
    STATE(36), 1,
      sym_line_comment,
    STATE(63), 1,
      sym_reg,
  [832] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(37), 1,
      sym_line_comment,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [850] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      sym_line_comment,
    ACTIONS(121), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [870] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(39), 1,
      sym_line_comment,
    ACTIONS(125), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [888] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      sym__reg,
    ACTIONS(119), 1,
      sym_word,
    STATE(40), 1,
      sym_line_comment,
    STATE(68), 1,
      sym_reg,
  [910] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(41), 1,
      sym_line_comment,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [928] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(42), 1,
      sym_line_comment,
    ACTIONS(129), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [946] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym_line_comment,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [966] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(44), 1,
      sym_line_comment,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [984] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      sym__reg,
    ACTIONS(119), 1,
      sym_word,
    STATE(38), 1,
      sym_reg,
    STATE(45), 1,
      sym_line_comment,
  [1006] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(46), 1,
      sym_line_comment,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1024] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(47), 1,
      sym_line_comment,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1042] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_line_comment,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1062] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym_line_comment,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1082] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(50), 1,
      sym_line_comment,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1100] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(51), 1,
      sym_line_comment,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [1118] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      sym__reg,
    ACTIONS(119), 1,
      sym_word,
    STATE(43), 1,
      sym_reg,
    STATE(52), 1,
      sym_line_comment,
  [1140] = 5,
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
  [1157] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(54), 1,
      sym_line_comment,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1174] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      aux_sym_int_token2,
    STATE(55), 1,
      sym_line_comment,
    STATE(69), 1,
      sym_int,
  [1193] = 5,
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
  [1210] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(57), 1,
      sym_line_comment,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1227] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(58), 1,
      sym_line_comment,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1244] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      aux_sym_int_token2,
    STATE(44), 1,
      sym_int,
    STATE(59), 1,
      sym_line_comment,
  [1263] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_line_comment,
  [1279] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    STATE(61), 1,
      sym_line_comment,
  [1295] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      sym_line_comment,
  [1311] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      sym_line_comment,
  [1327] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(159), 1,
      anon_sym_ptr,
    STATE(64), 1,
      sym_line_comment,
  [1343] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(161), 1,
      aux_sym_int_token1,
    STATE(65), 1,
      sym_line_comment,
  [1359] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(163), 1,
      anon_sym_rel,
    STATE(66), 1,
      sym_line_comment,
  [1375] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    STATE(67), 1,
      sym_line_comment,
  [1391] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      sym_line_comment,
  [1407] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      sym_line_comment,
  [1423] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    STATE(70), 1,
      sym_line_comment,
  [1439] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(171), 1,
      sym_string,
    STATE(71), 1,
      sym_line_comment,
  [1455] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(173), 1,
      sym_float,
    STATE(72), 1,
      sym_line_comment,
  [1471] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_line_comment,
  [1487] = 5,
    ACTIONS(177), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      aux_sym_line_comment_token1,
    ACTIONS(181), 1,
      aux_sym_line_comment_token2,
    ACTIONS(183), 1,
      sym_block_comment,
    STATE(74), 1,
      sym_line_comment,
  [1503] = 1,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
  [1507] = 1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 58,
  [SMALL_STATE(7)] = 104,
  [SMALL_STATE(8)] = 140,
  [SMALL_STATE(9)] = 176,
  [SMALL_STATE(10)] = 207,
  [SMALL_STATE(11)] = 240,
  [SMALL_STATE(12)] = 271,
  [SMALL_STATE(13)] = 293,
  [SMALL_STATE(14)] = 320,
  [SMALL_STATE(15)] = 347,
  [SMALL_STATE(16)] = 367,
  [SMALL_STATE(17)] = 389,
  [SMALL_STATE(18)] = 409,
  [SMALL_STATE(19)] = 429,
  [SMALL_STATE(20)] = 452,
  [SMALL_STATE(21)] = 475,
  [SMALL_STATE(22)] = 500,
  [SMALL_STATE(23)] = 521,
  [SMALL_STATE(24)] = 542,
  [SMALL_STATE(25)] = 563,
  [SMALL_STATE(26)] = 586,
  [SMALL_STATE(27)] = 607,
  [SMALL_STATE(28)] = 628,
  [SMALL_STATE(29)] = 651,
  [SMALL_STATE(30)] = 674,
  [SMALL_STATE(31)] = 697,
  [SMALL_STATE(32)] = 720,
  [SMALL_STATE(33)] = 739,
  [SMALL_STATE(34)] = 764,
  [SMALL_STATE(35)] = 787,
  [SMALL_STATE(36)] = 810,
  [SMALL_STATE(37)] = 832,
  [SMALL_STATE(38)] = 850,
  [SMALL_STATE(39)] = 870,
  [SMALL_STATE(40)] = 888,
  [SMALL_STATE(41)] = 910,
  [SMALL_STATE(42)] = 928,
  [SMALL_STATE(43)] = 946,
  [SMALL_STATE(44)] = 966,
  [SMALL_STATE(45)] = 984,
  [SMALL_STATE(46)] = 1006,
  [SMALL_STATE(47)] = 1024,
  [SMALL_STATE(48)] = 1042,
  [SMALL_STATE(49)] = 1062,
  [SMALL_STATE(50)] = 1082,
  [SMALL_STATE(51)] = 1100,
  [SMALL_STATE(52)] = 1118,
  [SMALL_STATE(53)] = 1140,
  [SMALL_STATE(54)] = 1157,
  [SMALL_STATE(55)] = 1174,
  [SMALL_STATE(56)] = 1193,
  [SMALL_STATE(57)] = 1210,
  [SMALL_STATE(58)] = 1227,
  [SMALL_STATE(59)] = 1244,
  [SMALL_STATE(60)] = 1263,
  [SMALL_STATE(61)] = 1279,
  [SMALL_STATE(62)] = 1295,
  [SMALL_STATE(63)] = 1311,
  [SMALL_STATE(64)] = 1327,
  [SMALL_STATE(65)] = 1343,
  [SMALL_STATE(66)] = 1359,
  [SMALL_STATE(67)] = 1375,
  [SMALL_STATE(68)] = 1391,
  [SMALL_STATE(69)] = 1407,
  [SMALL_STATE(70)] = 1423,
  [SMALL_STATE(71)] = 1439,
  [SMALL_STATE(72)] = 1455,
  [SMALL_STATE(73)] = 1471,
  [SMALL_STATE(74)] = 1487,
  [SMALL_STATE(75)] = 1503,
  [SMALL_STATE(76)] = 1507,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2), SHIFT_REPEAT(59),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2), SHIFT_REPEAT(71),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2), SHIFT_REPEAT(72),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(5),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(32),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 7),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 5),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, .production_id = 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5, .production_id = 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [169] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
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

#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum {
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
  anon_sym_DOLLAR = 17,
  aux_sym_int_token1 = 18,
  sym_float = 19,
  sym_string = 20,
  sym_word = 21,
  sym__reg = 22,
  sym_meta_ident = 23,
  sym__ident = 24,
  sym_line_comment = 25,
  sym_block_comment = 26,
  sym_program = 27,
  sym__item = 28,
  sym_meta = 29,
  sym_label = 30,
  sym_instruction = 31,
  sym__expr = 32,
  sym_ptr = 33,
  sym_int = 34,
  sym_reg = 35,
  sym_ident = 36,
  aux_sym_program_repeat1 = 37,
  aux_sym_program_repeat2 = 38,
  aux_sym_meta_repeat1 = 39,
  aux_sym_meta_repeat2 = 40,
  aux_sym_meta_repeat3 = 41,
  aux_sym_instruction_repeat1 = 42,
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
  [anon_sym_DOLLAR] = "$",
  [aux_sym_int_token1] = "int_token1",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_word] = "word",
  [sym__reg] = "_reg",
  [sym_meta_ident] = "meta_ident",
  [sym__ident] = "_ident",
  [sym_line_comment] = "line_comment",
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
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_int_token1] = aux_sym_int_token1,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_word] = sym_word,
  [sym__reg] = sym__reg,
  [sym_meta_ident] = sym_meta_ident,
  [sym__ident] = sym__ident,
  [sym_line_comment] = sym_line_comment,
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_token1] = {
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
  [sym_line_comment] = {
    .visible = true,
    .named = true,
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

enum {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(84);
      if (lookahead == '$') ADVANCE(38);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == 'b') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == 'q') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(49);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(84);
      if (lookahead == '$') ADVANCE(38);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(84);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '/') ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(84);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 16:
      if (eof) ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(84);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '/') ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 17:
      if (eof) ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(84);
      if (lookahead == '$') ADVANCE(38);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == 'b') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead == 'q') ADVANCE(73);
      if (lookahead == 'w') ADVANCE(63);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(84);
      if (lookahead == '$') ADVANCE(38);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ':') ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '.') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '.') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '.') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (lookahead == '.') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_rel);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_rel);
      if (lookahead == '.') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'x') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '_') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '_') ADVANCE(46);
      if (lookahead == 'x') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'x') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == 'x') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(54);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'l') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 't') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 't') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'w') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'w') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == 'y') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__reg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_meta_ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 16},
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
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 13},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 17},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 17},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
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
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym__reg] = ACTIONS(1),
    [sym_meta_ident] = ACTIONS(1),
    [sym__ident] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(64),
    [sym__item] = STATE(23),
    [sym_meta] = STATE(23),
    [sym_label] = STATE(23),
    [sym_instruction] = STATE(23),
    [sym_reg] = STATE(14),
    [sym_ident] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_word] = ACTIONS(7),
    [sym__reg] = ACTIONS(9),
    [sym_meta_ident] = ACTIONS(11),
    [sym__ident] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__expr] = STATE(29),
    [sym_ptr] = STATE(29),
    [sym_int] = STATE(31),
    [sym_reg] = STATE(14),
    [sym_ident] = STATE(29),
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
    [anon_sym_DOLLAR] = ACTIONS(27),
    [aux_sym_int_token1] = ACTIONS(29),
    [sym_float] = ACTIONS(31),
    [sym_string] = ACTIONS(33),
    [sym_word] = ACTIONS(9),
    [sym__reg] = ACTIONS(9),
    [sym_meta_ident] = ACTIONS(13),
    [sym__ident] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__expr] = STATE(47),
    [sym_ptr] = STATE(47),
    [sym_int] = STATE(31),
    [sym_reg] = STATE(14),
    [sym_ident] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LF] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(21),
    [anon_sym_word] = ACTIONS(21),
    [anon_sym_dword] = ACTIONS(21),
    [anon_sym_qword] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_DOLLAR] = ACTIONS(27),
    [aux_sym_int_token1] = ACTIONS(29),
    [sym_float] = ACTIONS(37),
    [sym_string] = ACTIONS(39),
    [sym_word] = ACTIONS(9),
    [sym__reg] = ACTIONS(9),
    [sym_meta_ident] = ACTIONS(13),
    [sym__ident] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__expr] = STATE(47),
    [sym_ptr] = STATE(47),
    [sym_int] = STATE(31),
    [sym_reg] = STATE(14),
    [sym_ident] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(21),
    [anon_sym_word] = ACTIONS(21),
    [anon_sym_dword] = ACTIONS(21),
    [anon_sym_qword] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_DOLLAR] = ACTIONS(27),
    [aux_sym_int_token1] = ACTIONS(29),
    [sym_float] = ACTIONS(37),
    [sym_string] = ACTIONS(39),
    [sym_word] = ACTIONS(9),
    [sym__reg] = ACTIONS(9),
    [sym_meta_ident] = ACTIONS(13),
    [sym__ident] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__expr] = STATE(47),
    [sym_ptr] = STATE(47),
    [sym_int] = STATE(31),
    [sym_reg] = STATE(14),
    [sym_ident] = STATE(47),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(21),
    [anon_sym_word] = ACTIONS(21),
    [anon_sym_dword] = ACTIONS(21),
    [anon_sym_qword] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_DOLLAR] = ACTIONS(27),
    [aux_sym_int_token1] = ACTIONS(29),
    [sym_float] = ACTIONS(37),
    [sym_string] = ACTIONS(39),
    [sym_word] = ACTIONS(9),
    [sym__reg] = ACTIONS(9),
    [sym_meta_ident] = ACTIONS(13),
    [sym__ident] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      aux_sym_int_token1,
    ACTIONS(45), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      sym_float,
    ACTIONS(49), 1,
      sym_string,
    STATE(14), 1,
      sym_reg,
    STATE(22), 1,
      sym_int,
    STATE(51), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      sym_word,
      sym__reg,
    ACTIONS(13), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [41] = 11,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(11), 1,
      sym_meta_ident,
    ACTIONS(13), 1,
      sym__ident,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_LF,
    STATE(13), 1,
      aux_sym_program_repeat1,
    STATE(14), 1,
      sym_reg,
    STATE(63), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(52), 4,
      sym__item,
      sym_meta,
      sym_label,
      sym_instruction,
  [79] = 11,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(11), 1,
      sym_meta_ident,
    ACTIONS(13), 1,
      sym__ident,
    ACTIONS(53), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym_program_repeat1,
    STATE(14), 1,
      sym_reg,
    STATE(63), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(52), 4,
      sym__item,
      sym_meta,
      sym_label,
      sym_instruction,
  [117] = 10,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(11), 1,
      sym_meta_ident,
    ACTIONS(13), 1,
      sym__ident,
    ACTIONS(53), 1,
      anon_sym_LF,
    STATE(13), 1,
      aux_sym_program_repeat1,
    STATE(14), 1,
      sym_reg,
    STATE(63), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(52), 4,
      sym__item,
      sym_meta,
      sym_label,
      sym_instruction,
  [152] = 7,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      aux_sym_int_token1,
    STATE(14), 1,
      sym_reg,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      sym_word,
      sym__reg,
    ACTIONS(13), 2,
      sym_meta_ident,
      sym__ident,
    STATE(66), 2,
      sym_int,
      sym_ident,
  [178] = 7,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      aux_sym_int_token1,
    STATE(14), 1,
      sym_reg,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      sym_word,
      sym__reg,
    ACTIONS(13), 2,
      sym_meta_ident,
      sym__ident,
    STATE(62), 2,
      sym_int,
      sym_ident,
  [204] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [219] = 5,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      anon_sym_LF,
    STATE(13), 1,
      aux_sym_program_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(62), 4,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
  [239] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [252] = 5,
    STATE(14), 1,
      sym_reg,
    STATE(60), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 2,
      sym_word,
      sym__reg,
    ACTIONS(13), 2,
      sym_meta_ident,
      sym__ident,
  [271] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
  [283] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
  [295] = 4,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_meta_repeat3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [310] = 5,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      anon_sym_LF,
    STATE(9), 1,
      aux_sym_program_repeat1,
    STATE(19), 1,
      aux_sym_program_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [327] = 4,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_meta_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [342] = 4,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_meta_repeat3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [357] = 4,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_meta_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [372] = 5,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      anon_sym_LF,
    STATE(7), 1,
      aux_sym_program_repeat1,
    STATE(24), 1,
      aux_sym_program_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [389] = 5,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym_program_repeat1,
    STATE(19), 1,
      aux_sym_program_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [406] = 4,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym_meta_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [421] = 4,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_meta_repeat3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [436] = 4,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_meta_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [451] = 4,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [466] = 4,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [481] = 4,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [496] = 3,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [509] = 4,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym_meta_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [524] = 4,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_meta_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [539] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [549] = 3,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(121), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [561] = 4,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(125), 1,
      sym_word,
    STATE(54), 1,
      sym_reg,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [575] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [585] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(129), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [595] = 3,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [607] = 4,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(135), 1,
      aux_sym_int_token1,
    STATE(43), 1,
      sym_int,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [621] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(137), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [631] = 4,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(125), 1,
      sym_word,
    STATE(58), 1,
      sym_reg,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [645] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [655] = 4,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(125), 1,
      sym_word,
    STATE(35), 1,
      sym_reg,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [669] = 4,
    ACTIONS(9), 1,
      sym__reg,
    ACTIONS(125), 1,
      sym_word,
    STATE(49), 1,
      sym_reg,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [683] = 4,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(135), 1,
      aux_sym_int_token1,
    STATE(62), 1,
      sym_int,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [697] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [707] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [717] = 3,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(139), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [729] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [739] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [748] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [757] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [766] = 2,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [774] = 2,
    ACTIONS(147), 1,
      anon_sym_ptr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [782] = 2,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [790] = 2,
    ACTIONS(151), 1,
      anon_sym_rel,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [798] = 2,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [806] = 2,
    ACTIONS(153), 1,
      aux_sym_int_token1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [814] = 2,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [822] = 2,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [830] = 2,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [838] = 2,
    ACTIONS(159), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [846] = 2,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [854] = 2,
    ACTIONS(163), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [862] = 2,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [870] = 2,
    ACTIONS(167), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 41,
  [SMALL_STATE(8)] = 79,
  [SMALL_STATE(9)] = 117,
  [SMALL_STATE(10)] = 152,
  [SMALL_STATE(11)] = 178,
  [SMALL_STATE(12)] = 204,
  [SMALL_STATE(13)] = 219,
  [SMALL_STATE(14)] = 239,
  [SMALL_STATE(15)] = 252,
  [SMALL_STATE(16)] = 271,
  [SMALL_STATE(17)] = 283,
  [SMALL_STATE(18)] = 295,
  [SMALL_STATE(19)] = 310,
  [SMALL_STATE(20)] = 327,
  [SMALL_STATE(21)] = 342,
  [SMALL_STATE(22)] = 357,
  [SMALL_STATE(23)] = 372,
  [SMALL_STATE(24)] = 389,
  [SMALL_STATE(25)] = 406,
  [SMALL_STATE(26)] = 421,
  [SMALL_STATE(27)] = 436,
  [SMALL_STATE(28)] = 451,
  [SMALL_STATE(29)] = 466,
  [SMALL_STATE(30)] = 481,
  [SMALL_STATE(31)] = 496,
  [SMALL_STATE(32)] = 509,
  [SMALL_STATE(33)] = 524,
  [SMALL_STATE(34)] = 539,
  [SMALL_STATE(35)] = 549,
  [SMALL_STATE(36)] = 561,
  [SMALL_STATE(37)] = 575,
  [SMALL_STATE(38)] = 585,
  [SMALL_STATE(39)] = 595,
  [SMALL_STATE(40)] = 607,
  [SMALL_STATE(41)] = 621,
  [SMALL_STATE(42)] = 631,
  [SMALL_STATE(43)] = 645,
  [SMALL_STATE(44)] = 655,
  [SMALL_STATE(45)] = 669,
  [SMALL_STATE(46)] = 683,
  [SMALL_STATE(47)] = 697,
  [SMALL_STATE(48)] = 707,
  [SMALL_STATE(49)] = 717,
  [SMALL_STATE(50)] = 729,
  [SMALL_STATE(51)] = 739,
  [SMALL_STATE(52)] = 748,
  [SMALL_STATE(53)] = 757,
  [SMALL_STATE(54)] = 766,
  [SMALL_STATE(55)] = 774,
  [SMALL_STATE(56)] = 782,
  [SMALL_STATE(57)] = 790,
  [SMALL_STATE(58)] = 798,
  [SMALL_STATE(59)] = 806,
  [SMALL_STATE(60)] = 814,
  [SMALL_STATE(61)] = 822,
  [SMALL_STATE(62)] = 830,
  [SMALL_STATE(63)] = 838,
  [SMALL_STATE(64)] = 846,
  [SMALL_STATE(65)] = 854,
  [SMALL_STATE(66)] = 862,
  [SMALL_STATE(67)] = 870,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, .production_id = 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(9),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2), SHIFT_REPEAT(40),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2), SHIFT_REPEAT(65),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2), SHIFT_REPEAT(67),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 7),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [161] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_asm(void) {
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

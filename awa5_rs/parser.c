#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_comment = 2,
  anon_sym_lbl = 3,
  sym_ascii_string = 4,
  sym_awascii_string = 5,
  sym_number = 6,
  sym_float = 7,
  anon_sym_nop = 8,
  anon_sym_prn = 9,
  anon_sym_pr1 = 10,
  anon_sym_red = 11,
  anon_sym_r3d = 12,
  anon_sym_blo = 13,
  anon_sym_sbm = 14,
  anon_sym_pop = 15,
  anon_sym_dpl = 16,
  anon_sym_srn = 17,
  anon_sym_mrg = 18,
  anon_sym_4dd = 19,
  anon_sym_sub = 20,
  anon_sym_mul = 21,
  anon_sym_div = 22,
  anon_sym_cnt = 23,
  anon_sym_jmp = 24,
  anon_sym_eql = 25,
  anon_sym_lss = 26,
  anon_sym_gr8 = 27,
  anon_sym_lib = 28,
  anon_sym_trm = 29,
  anon_sym_BANGi32 = 30,
  anon_sym_BANGf32 = 31,
  anon_sym_BANGchr = 32,
  anon_sym_BANGstr = 33,
  anon_sym_BANG_i32 = 34,
  anon_sym_BANG_f32 = 35,
  anon_sym_BANG_chr = 36,
  anon_sym_BANG_str = 37,
  sym_macro_name = 38,
  sym_source_file = 39,
  sym__statement = 40,
  sym_label = 41,
  sym_value = 42,
  sym_instruction = 43,
  sym_awatism = 44,
  sym_macro = 45,
  sym_builtin_macro_name = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_source_file_repeat2 = 48,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_lbl] = "lbl",
  [sym_ascii_string] = "ascii_string",
  [sym_awascii_string] = "awascii_string",
  [sym_number] = "number",
  [sym_float] = "float",
  [anon_sym_nop] = "nop",
  [anon_sym_prn] = "prn",
  [anon_sym_pr1] = "pr1",
  [anon_sym_red] = "red",
  [anon_sym_r3d] = "r3d",
  [anon_sym_blo] = "blo",
  [anon_sym_sbm] = "sbm",
  [anon_sym_pop] = "pop",
  [anon_sym_dpl] = "dpl",
  [anon_sym_srn] = "srn",
  [anon_sym_mrg] = "mrg",
  [anon_sym_4dd] = "4dd",
  [anon_sym_sub] = "sub",
  [anon_sym_mul] = "mul",
  [anon_sym_div] = "div",
  [anon_sym_cnt] = "cnt",
  [anon_sym_jmp] = "jmp",
  [anon_sym_eql] = "eql",
  [anon_sym_lss] = "lss",
  [anon_sym_gr8] = "gr8",
  [anon_sym_lib] = "lib",
  [anon_sym_trm] = "trm",
  [anon_sym_BANGi32] = "!i32",
  [anon_sym_BANGf32] = "!f32",
  [anon_sym_BANGchr] = "!chr",
  [anon_sym_BANGstr] = "!str",
  [anon_sym_BANG_i32] = "!_i32",
  [anon_sym_BANG_f32] = "!_f32",
  [anon_sym_BANG_chr] = "!_chr",
  [anon_sym_BANG_str] = "!_str",
  [sym_macro_name] = "macro_name",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_label] = "label",
  [sym_value] = "value",
  [sym_instruction] = "instruction",
  [sym_awatism] = "awatism",
  [sym_macro] = "macro",
  [sym_builtin_macro_name] = "builtin_macro_name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [anon_sym_lbl] = anon_sym_lbl,
  [sym_ascii_string] = sym_ascii_string,
  [sym_awascii_string] = sym_awascii_string,
  [sym_number] = sym_number,
  [sym_float] = sym_float,
  [anon_sym_nop] = anon_sym_nop,
  [anon_sym_prn] = anon_sym_prn,
  [anon_sym_pr1] = anon_sym_pr1,
  [anon_sym_red] = anon_sym_red,
  [anon_sym_r3d] = anon_sym_r3d,
  [anon_sym_blo] = anon_sym_blo,
  [anon_sym_sbm] = anon_sym_sbm,
  [anon_sym_pop] = anon_sym_pop,
  [anon_sym_dpl] = anon_sym_dpl,
  [anon_sym_srn] = anon_sym_srn,
  [anon_sym_mrg] = anon_sym_mrg,
  [anon_sym_4dd] = anon_sym_4dd,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_mul] = anon_sym_mul,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_cnt] = anon_sym_cnt,
  [anon_sym_jmp] = anon_sym_jmp,
  [anon_sym_eql] = anon_sym_eql,
  [anon_sym_lss] = anon_sym_lss,
  [anon_sym_gr8] = anon_sym_gr8,
  [anon_sym_lib] = anon_sym_lib,
  [anon_sym_trm] = anon_sym_trm,
  [anon_sym_BANGi32] = anon_sym_BANGi32,
  [anon_sym_BANGf32] = anon_sym_BANGf32,
  [anon_sym_BANGchr] = anon_sym_BANGchr,
  [anon_sym_BANGstr] = anon_sym_BANGstr,
  [anon_sym_BANG_i32] = anon_sym_BANG_i32,
  [anon_sym_BANG_f32] = anon_sym_BANG_f32,
  [anon_sym_BANG_chr] = anon_sym_BANG_chr,
  [anon_sym_BANG_str] = anon_sym_BANG_str,
  [sym_macro_name] = sym_macro_name,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_label] = sym_label,
  [sym_value] = sym_value,
  [sym_instruction] = sym_instruction,
  [sym_awatism] = sym_awatism,
  [sym_macro] = sym_macro,
  [sym_builtin_macro_name] = sym_builtin_macro_name,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_lbl] = {
    .visible = true,
    .named = false,
  },
  [sym_ascii_string] = {
    .visible = true,
    .named = true,
  },
  [sym_awascii_string] = {
    .visible = true,
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
  [anon_sym_nop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pr1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_red] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r3d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sbm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dpl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_srn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mrg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4dd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cnt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eql] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gr8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lib] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGi32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGf32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGchr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGstr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_chr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_str] = {
    .visible = true,
    .named = false,
  },
  [sym_macro_name] = {
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
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_awatism] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_macro_name] = {
    .visible = true,
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
};

enum ts_field_identifiers {
  field_argument = 1,
  field_kind = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_kind] = "kind",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_kind, 0},
  [1] =
    {field_argument, 1},
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
  [18] = 18,
  [19] = 19,
  [20] = 20,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '4') ADVANCE(54);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'g') ADVANCE(36);
      if (lookahead == 'j') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '1') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '3') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == '8') ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(96);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 's') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(78);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(9);
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 35:
      if (lookahead == 'q') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 43:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 44:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 45:
      if (eof) ADVANCE(48);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '4') ADVANCE(13);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'g') ADVANCE(36);
      if (lookahead == 'j') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45)
      END_STATE();
    case 46:
      if (eof) ADVANCE(48);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '4') ADVANCE(13);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'g') ADVANCE(36);
      if (lookahead == 'j') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47)
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_lbl);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_ascii_string);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_awascii_string);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_nop);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_prn);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_pr1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_r3d);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_blo);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_sbm);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_dpl);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_srn);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_mrg);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_4dd);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_mul);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_cnt);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_jmp);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_eql);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_lss);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_gr8);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_lib);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_trm);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BANGi32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BANGf32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_BANGchr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_BANGstr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_BANG_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_BANG_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_BANG_chr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_BANG_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '2') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '2') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '2') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '2') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '3') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '3') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '3') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '3') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 's') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'h') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'h') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_macro_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 47},
  [2] = {.lex_state = 45},
  [3] = {.lex_state = 45},
  [4] = {.lex_state = 45},
  [5] = {.lex_state = 45},
  [6] = {.lex_state = 45},
  [7] = {.lex_state = 46},
  [8] = {.lex_state = 46},
  [9] = {.lex_state = 46},
  [10] = {.lex_state = 46},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 47},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lbl] = ACTIONS(1),
    [sym_ascii_string] = ACTIONS(1),
    [sym_awascii_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_nop] = ACTIONS(1),
    [anon_sym_prn] = ACTIONS(1),
    [anon_sym_pr1] = ACTIONS(1),
    [anon_sym_red] = ACTIONS(1),
    [anon_sym_r3d] = ACTIONS(1),
    [anon_sym_blo] = ACTIONS(1),
    [anon_sym_sbm] = ACTIONS(1),
    [anon_sym_pop] = ACTIONS(1),
    [anon_sym_dpl] = ACTIONS(1),
    [anon_sym_srn] = ACTIONS(1),
    [anon_sym_mrg] = ACTIONS(1),
    [anon_sym_4dd] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_mul] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_cnt] = ACTIONS(1),
    [anon_sym_jmp] = ACTIONS(1),
    [anon_sym_eql] = ACTIONS(1),
    [anon_sym_lss] = ACTIONS(1),
    [anon_sym_gr8] = ACTIONS(1),
    [anon_sym_lib] = ACTIONS(1),
    [anon_sym_trm] = ACTIONS(1),
    [anon_sym_BANGi32] = ACTIONS(1),
    [anon_sym_BANGf32] = ACTIONS(1),
    [anon_sym_BANGchr] = ACTIONS(1),
    [anon_sym_BANGstr] = ACTIONS(1),
    [anon_sym_BANG_i32] = ACTIONS(1),
    [anon_sym_BANG_f32] = ACTIONS(1),
    [anon_sym_BANG_chr] = ACTIONS(1),
    [anon_sym_BANG_str] = ACTIONS(1),
    [sym_macro_name] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym__statement] = STATE(11),
    [sym_label] = STATE(11),
    [sym_instruction] = STATE(11),
    [sym_awatism] = STATE(8),
    [sym_macro] = STATE(11),
    [sym_builtin_macro_name] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_lbl] = ACTIONS(9),
    [anon_sym_nop] = ACTIONS(11),
    [anon_sym_prn] = ACTIONS(11),
    [anon_sym_pr1] = ACTIONS(11),
    [anon_sym_red] = ACTIONS(11),
    [anon_sym_r3d] = ACTIONS(11),
    [anon_sym_blo] = ACTIONS(11),
    [anon_sym_sbm] = ACTIONS(11),
    [anon_sym_pop] = ACTIONS(11),
    [anon_sym_dpl] = ACTIONS(11),
    [anon_sym_srn] = ACTIONS(11),
    [anon_sym_mrg] = ACTIONS(11),
    [anon_sym_4dd] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_mul] = ACTIONS(11),
    [anon_sym_div] = ACTIONS(11),
    [anon_sym_cnt] = ACTIONS(11),
    [anon_sym_jmp] = ACTIONS(11),
    [anon_sym_eql] = ACTIONS(11),
    [anon_sym_lss] = ACTIONS(11),
    [anon_sym_gr8] = ACTIONS(11),
    [anon_sym_lib] = ACTIONS(11),
    [anon_sym_trm] = ACTIONS(11),
    [anon_sym_BANGi32] = ACTIONS(13),
    [anon_sym_BANGf32] = ACTIONS(13),
    [anon_sym_BANGchr] = ACTIONS(13),
    [anon_sym_BANGstr] = ACTIONS(13),
    [anon_sym_BANG_i32] = ACTIONS(13),
    [anon_sym_BANG_f32] = ACTIONS(13),
    [anon_sym_BANG_chr] = ACTIONS(13),
    [anon_sym_BANG_str] = ACTIONS(13),
    [sym_macro_name] = ACTIONS(15),
  },
  [2] = {
    [sym__statement] = STATE(15),
    [sym_label] = STATE(15),
    [sym_instruction] = STATE(15),
    [sym_awatism] = STATE(8),
    [sym_macro] = STATE(15),
    [sym_builtin_macro_name] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lbl] = ACTIONS(21),
    [anon_sym_nop] = ACTIONS(23),
    [anon_sym_prn] = ACTIONS(23),
    [anon_sym_pr1] = ACTIONS(23),
    [anon_sym_red] = ACTIONS(23),
    [anon_sym_r3d] = ACTIONS(23),
    [anon_sym_blo] = ACTIONS(23),
    [anon_sym_sbm] = ACTIONS(23),
    [anon_sym_pop] = ACTIONS(23),
    [anon_sym_dpl] = ACTIONS(23),
    [anon_sym_srn] = ACTIONS(23),
    [anon_sym_mrg] = ACTIONS(23),
    [anon_sym_4dd] = ACTIONS(23),
    [anon_sym_sub] = ACTIONS(23),
    [anon_sym_mul] = ACTIONS(23),
    [anon_sym_div] = ACTIONS(23),
    [anon_sym_cnt] = ACTIONS(23),
    [anon_sym_jmp] = ACTIONS(23),
    [anon_sym_eql] = ACTIONS(23),
    [anon_sym_lss] = ACTIONS(23),
    [anon_sym_gr8] = ACTIONS(23),
    [anon_sym_lib] = ACTIONS(23),
    [anon_sym_trm] = ACTIONS(23),
    [anon_sym_BANGi32] = ACTIONS(13),
    [anon_sym_BANGf32] = ACTIONS(13),
    [anon_sym_BANGchr] = ACTIONS(13),
    [anon_sym_BANGstr] = ACTIONS(13),
    [anon_sym_BANG_i32] = ACTIONS(13),
    [anon_sym_BANG_f32] = ACTIONS(13),
    [anon_sym_BANG_chr] = ACTIONS(13),
    [anon_sym_BANG_str] = ACTIONS(13),
    [sym_macro_name] = ACTIONS(15),
  },
  [3] = {
    [sym__statement] = STATE(15),
    [sym_label] = STATE(15),
    [sym_instruction] = STATE(15),
    [sym_awatism] = STATE(8),
    [sym_macro] = STATE(15),
    [sym_builtin_macro_name] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lbl] = ACTIONS(21),
    [anon_sym_nop] = ACTIONS(23),
    [anon_sym_prn] = ACTIONS(23),
    [anon_sym_pr1] = ACTIONS(23),
    [anon_sym_red] = ACTIONS(23),
    [anon_sym_r3d] = ACTIONS(23),
    [anon_sym_blo] = ACTIONS(23),
    [anon_sym_sbm] = ACTIONS(23),
    [anon_sym_pop] = ACTIONS(23),
    [anon_sym_dpl] = ACTIONS(23),
    [anon_sym_srn] = ACTIONS(23),
    [anon_sym_mrg] = ACTIONS(23),
    [anon_sym_4dd] = ACTIONS(23),
    [anon_sym_sub] = ACTIONS(23),
    [anon_sym_mul] = ACTIONS(23),
    [anon_sym_div] = ACTIONS(23),
    [anon_sym_cnt] = ACTIONS(23),
    [anon_sym_jmp] = ACTIONS(23),
    [anon_sym_eql] = ACTIONS(23),
    [anon_sym_lss] = ACTIONS(23),
    [anon_sym_gr8] = ACTIONS(23),
    [anon_sym_lib] = ACTIONS(23),
    [anon_sym_trm] = ACTIONS(23),
    [anon_sym_BANGi32] = ACTIONS(13),
    [anon_sym_BANGf32] = ACTIONS(13),
    [anon_sym_BANGchr] = ACTIONS(13),
    [anon_sym_BANGstr] = ACTIONS(13),
    [anon_sym_BANG_i32] = ACTIONS(13),
    [anon_sym_BANG_f32] = ACTIONS(13),
    [anon_sym_BANG_chr] = ACTIONS(13),
    [anon_sym_BANG_str] = ACTIONS(13),
    [sym_macro_name] = ACTIONS(15),
  },
  [4] = {
    [sym__statement] = STATE(15),
    [sym_label] = STATE(15),
    [sym_instruction] = STATE(15),
    [sym_awatism] = STATE(8),
    [sym_macro] = STATE(15),
    [sym_builtin_macro_name] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_LF] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lbl] = ACTIONS(21),
    [anon_sym_nop] = ACTIONS(23),
    [anon_sym_prn] = ACTIONS(23),
    [anon_sym_pr1] = ACTIONS(23),
    [anon_sym_red] = ACTIONS(23),
    [anon_sym_r3d] = ACTIONS(23),
    [anon_sym_blo] = ACTIONS(23),
    [anon_sym_sbm] = ACTIONS(23),
    [anon_sym_pop] = ACTIONS(23),
    [anon_sym_dpl] = ACTIONS(23),
    [anon_sym_srn] = ACTIONS(23),
    [anon_sym_mrg] = ACTIONS(23),
    [anon_sym_4dd] = ACTIONS(23),
    [anon_sym_sub] = ACTIONS(23),
    [anon_sym_mul] = ACTIONS(23),
    [anon_sym_div] = ACTIONS(23),
    [anon_sym_cnt] = ACTIONS(23),
    [anon_sym_jmp] = ACTIONS(23),
    [anon_sym_eql] = ACTIONS(23),
    [anon_sym_lss] = ACTIONS(23),
    [anon_sym_gr8] = ACTIONS(23),
    [anon_sym_lib] = ACTIONS(23),
    [anon_sym_trm] = ACTIONS(23),
    [anon_sym_BANGi32] = ACTIONS(13),
    [anon_sym_BANGf32] = ACTIONS(13),
    [anon_sym_BANGchr] = ACTIONS(13),
    [anon_sym_BANGstr] = ACTIONS(13),
    [anon_sym_BANG_i32] = ACTIONS(13),
    [anon_sym_BANG_f32] = ACTIONS(13),
    [anon_sym_BANG_chr] = ACTIONS(13),
    [anon_sym_BANG_str] = ACTIONS(13),
    [sym_macro_name] = ACTIONS(15),
  },
  [5] = {
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LF] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lbl] = ACTIONS(34),
    [anon_sym_nop] = ACTIONS(34),
    [anon_sym_prn] = ACTIONS(34),
    [anon_sym_pr1] = ACTIONS(34),
    [anon_sym_red] = ACTIONS(34),
    [anon_sym_r3d] = ACTIONS(34),
    [anon_sym_blo] = ACTIONS(34),
    [anon_sym_sbm] = ACTIONS(34),
    [anon_sym_pop] = ACTIONS(34),
    [anon_sym_dpl] = ACTIONS(34),
    [anon_sym_srn] = ACTIONS(34),
    [anon_sym_mrg] = ACTIONS(34),
    [anon_sym_4dd] = ACTIONS(34),
    [anon_sym_sub] = ACTIONS(34),
    [anon_sym_mul] = ACTIONS(34),
    [anon_sym_div] = ACTIONS(34),
    [anon_sym_cnt] = ACTIONS(34),
    [anon_sym_jmp] = ACTIONS(34),
    [anon_sym_eql] = ACTIONS(34),
    [anon_sym_lss] = ACTIONS(34),
    [anon_sym_gr8] = ACTIONS(34),
    [anon_sym_lib] = ACTIONS(34),
    [anon_sym_trm] = ACTIONS(34),
    [anon_sym_BANGi32] = ACTIONS(34),
    [anon_sym_BANGf32] = ACTIONS(34),
    [anon_sym_BANGchr] = ACTIONS(34),
    [anon_sym_BANGstr] = ACTIONS(34),
    [anon_sym_BANG_i32] = ACTIONS(34),
    [anon_sym_BANG_f32] = ACTIONS(34),
    [anon_sym_BANG_chr] = ACTIONS(34),
    [anon_sym_BANG_str] = ACTIONS(34),
    [sym_macro_name] = ACTIONS(34),
  },
  [6] = {
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_LF] = ACTIONS(36),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lbl] = ACTIONS(34),
    [anon_sym_nop] = ACTIONS(34),
    [anon_sym_prn] = ACTIONS(34),
    [anon_sym_pr1] = ACTIONS(34),
    [anon_sym_red] = ACTIONS(34),
    [anon_sym_r3d] = ACTIONS(34),
    [anon_sym_blo] = ACTIONS(34),
    [anon_sym_sbm] = ACTIONS(34),
    [anon_sym_pop] = ACTIONS(34),
    [anon_sym_dpl] = ACTIONS(34),
    [anon_sym_srn] = ACTIONS(34),
    [anon_sym_mrg] = ACTIONS(34),
    [anon_sym_4dd] = ACTIONS(34),
    [anon_sym_sub] = ACTIONS(34),
    [anon_sym_mul] = ACTIONS(34),
    [anon_sym_div] = ACTIONS(34),
    [anon_sym_cnt] = ACTIONS(34),
    [anon_sym_jmp] = ACTIONS(34),
    [anon_sym_eql] = ACTIONS(34),
    [anon_sym_lss] = ACTIONS(34),
    [anon_sym_gr8] = ACTIONS(34),
    [anon_sym_lib] = ACTIONS(34),
    [anon_sym_trm] = ACTIONS(34),
    [anon_sym_BANGi32] = ACTIONS(34),
    [anon_sym_BANGf32] = ACTIONS(34),
    [anon_sym_BANGchr] = ACTIONS(34),
    [anon_sym_BANGstr] = ACTIONS(34),
    [anon_sym_BANG_i32] = ACTIONS(34),
    [anon_sym_BANG_f32] = ACTIONS(34),
    [anon_sym_BANG_chr] = ACTIONS(34),
    [anon_sym_BANG_str] = ACTIONS(34),
    [sym_macro_name] = ACTIONS(34),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym_value,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(41), 4,
      sym_ascii_string,
      sym_awascii_string,
      sym_number,
      sym_float,
  [17] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(17), 1,
      sym_value,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(41), 4,
      sym_ascii_string,
      sym_awascii_string,
      sym_number,
      sym_float,
  [34] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(47), 4,
      sym_ascii_string,
      sym_awascii_string,
      sym_number,
      sym_float,
  [48] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(51), 4,
      sym_ascii_string,
      sym_awascii_string,
      sym_number,
      sym_float,
  [62] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(13), 1,
      aux_sym_source_file_repeat2,
  [78] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      anon_sym_LF,
    STATE(4), 1,
      aux_sym_source_file_repeat1,
    STATE(12), 1,
      aux_sym_source_file_repeat2,
  [94] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(12), 1,
      aux_sym_source_file_repeat2,
  [110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [150] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_number,
  [157] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 17,
  [SMALL_STATE(9)] = 34,
  [SMALL_STATE(10)] = 48,
  [SMALL_STATE(11)] = 62,
  [SMALL_STATE(12)] = 78,
  [SMALL_STATE(13)] = 94,
  [SMALL_STATE(14)] = 110,
  [SMALL_STATE(15)] = 118,
  [SMALL_STATE(16)] = 126,
  [SMALL_STATE(17)] = 134,
  [SMALL_STATE(18)] = 142,
  [SMALL_STATE(19)] = 150,
  [SMALL_STATE(20)] = 157,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_awatism, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_awatism, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_macro_name, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_macro_name, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(4),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 2, .production_id = 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [74] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_awa5_rs() {
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

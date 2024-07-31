#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 78
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_comment = 2,
  anon_sym_lbl = 3,
  anon_sym_COLON = 4,
  aux_sym_label_name_token1 = 5,
  sym_ascii_string = 6,
  sym_awascii_string = 7,
  sym_ascii_char = 8,
  sym_awascii_char = 9,
  anon_sym_LT = 10,
  anon_sym_GT = 11,
  sym_path_content = 12,
  sym_number = 13,
  sym_float = 14,
  sym_replacement_macro_name = 15,
  sym_replacement_var = 16,
  anon_sym_nop = 17,
  anon_sym_prn = 18,
  anon_sym_pr1 = 19,
  anon_sym_red = 20,
  anon_sym_r3d = 21,
  anon_sym_blo = 22,
  anon_sym_sbm = 23,
  anon_sym_pop = 24,
  anon_sym_dpl = 25,
  anon_sym_srn = 26,
  anon_sym_mrg = 27,
  anon_sym_4dd = 28,
  anon_sym_sub = 29,
  anon_sym_mul = 30,
  anon_sym_div = 31,
  anon_sym_cnt = 32,
  anon_sym_jmp = 33,
  anon_sym_eql = 34,
  anon_sym_lss = 35,
  anon_sym_gr8 = 36,
  anon_sym_lib = 37,
  anon_sym_jro = 38,
  anon_sym_trm = 39,
  anon_sym_COMMA = 40,
  anon_sym_BANGonce = 41,
  anon_sym_BANGinclude = 42,
  anon_sym_BANGi32 = 43,
  anon_sym_BANGf32 = 44,
  anon_sym_BANGchr = 45,
  anon_sym_BANGstr = 46,
  anon_sym_BANG_i32 = 47,
  anon_sym_BANG_f32 = 48,
  anon_sym_BANG_chr = 49,
  anon_sym_BANG_str = 50,
  sym_macro_name = 51,
  anon_sym_LPAREN = 52,
  anon_sym_RPAREN = 53,
  sym_macro_block_def = 54,
  sym_macro_block_end = 55,
  sym_source_file = 56,
  sym__statement = 57,
  sym_label = 58,
  sym_label_name = 59,
  sym_value = 60,
  sym_text = 61,
  sym_path = 62,
  sym_replacement_macro = 63,
  sym_instruction = 64,
  sym_awatism = 65,
  sym_macro = 66,
  sym_argument_list = 67,
  sym_builtin_macro_name = 68,
  sym_macro_block = 69,
  sym_macro_block_name = 70,
  sym_parameter_list = 71,
  sym_parameter = 72,
  sym__macro_block_statement = 73,
  aux_sym_source_file_repeat1 = 74,
  aux_sym_source_file_repeat2 = 75,
  aux_sym_argument_list_repeat1 = 76,
  aux_sym_macro_block_repeat1 = 77,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_lbl] = "lbl",
  [anon_sym_COLON] = ":",
  [aux_sym_label_name_token1] = "label_name_token1",
  [sym_ascii_string] = "ascii_string",
  [sym_awascii_string] = "awascii_string",
  [sym_ascii_char] = "ascii_char",
  [sym_awascii_char] = "awascii_char",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym_path_content] = "path_content",
  [sym_number] = "number",
  [sym_float] = "float",
  [sym_replacement_macro_name] = "replacement_macro_name",
  [sym_replacement_var] = "replacement_var",
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
  [anon_sym_jro] = "jro",
  [anon_sym_trm] = "trm",
  [anon_sym_COMMA] = ",",
  [anon_sym_BANGonce] = "!once",
  [anon_sym_BANGinclude] = "!include",
  [anon_sym_BANGi32] = "!i32",
  [anon_sym_BANGf32] = "!f32",
  [anon_sym_BANGchr] = "!chr",
  [anon_sym_BANGstr] = "!str",
  [anon_sym_BANG_i32] = "!_i32",
  [anon_sym_BANG_f32] = "!_f32",
  [anon_sym_BANG_chr] = "!_chr",
  [anon_sym_BANG_str] = "!_str",
  [sym_macro_name] = "macro_name",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_macro_block_def] = "macro_block_def",
  [sym_macro_block_end] = "macro_block_end",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_label] = "label",
  [sym_label_name] = "label_name",
  [sym_value] = "value",
  [sym_text] = "text",
  [sym_path] = "path",
  [sym_replacement_macro] = "replacement_macro",
  [sym_instruction] = "instruction",
  [sym_awatism] = "awatism",
  [sym_macro] = "macro",
  [sym_argument_list] = "argument_list",
  [sym_builtin_macro_name] = "builtin_macro_name",
  [sym_macro_block] = "macro_block",
  [sym_macro_block_name] = "macro_block_name",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym__macro_block_statement] = "_macro_block_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_macro_block_repeat1] = "macro_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [anon_sym_lbl] = anon_sym_lbl,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_label_name_token1] = aux_sym_label_name_token1,
  [sym_ascii_string] = sym_ascii_string,
  [sym_awascii_string] = sym_awascii_string,
  [sym_ascii_char] = sym_ascii_char,
  [sym_awascii_char] = sym_awascii_char,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_path_content] = sym_path_content,
  [sym_number] = sym_number,
  [sym_float] = sym_float,
  [sym_replacement_macro_name] = sym_replacement_macro_name,
  [sym_replacement_var] = sym_replacement_var,
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
  [anon_sym_jro] = anon_sym_jro,
  [anon_sym_trm] = anon_sym_trm,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_BANGonce] = anon_sym_BANGonce,
  [anon_sym_BANGinclude] = anon_sym_BANGinclude,
  [anon_sym_BANGi32] = anon_sym_BANGi32,
  [anon_sym_BANGf32] = anon_sym_BANGf32,
  [anon_sym_BANGchr] = anon_sym_BANGchr,
  [anon_sym_BANGstr] = anon_sym_BANGstr,
  [anon_sym_BANG_i32] = anon_sym_BANG_i32,
  [anon_sym_BANG_f32] = anon_sym_BANG_f32,
  [anon_sym_BANG_chr] = anon_sym_BANG_chr,
  [anon_sym_BANG_str] = anon_sym_BANG_str,
  [sym_macro_name] = sym_macro_name,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_macro_block_def] = sym_macro_block_def,
  [sym_macro_block_end] = sym_macro_block_end,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_label] = sym_label,
  [sym_label_name] = sym_label_name,
  [sym_value] = sym_value,
  [sym_text] = sym_text,
  [sym_path] = sym_path,
  [sym_replacement_macro] = sym_replacement_macro,
  [sym_instruction] = sym_instruction,
  [sym_awatism] = sym_awatism,
  [sym_macro] = sym_macro,
  [sym_argument_list] = sym_argument_list,
  [sym_builtin_macro_name] = sym_builtin_macro_name,
  [sym_macro_block] = sym_macro_block,
  [sym_macro_block_name] = sym_macro_block_name,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym__macro_block_statement] = sym__macro_block_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_macro_block_repeat1] = aux_sym_macro_block_repeat1,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_name_token1] = {
    .visible = false,
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
  [sym_ascii_char] = {
    .visible = true,
    .named = true,
  },
  [sym_awascii_char] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_path_content] = {
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
  [sym_replacement_macro_name] = {
    .visible = true,
    .named = true,
  },
  [sym_replacement_var] = {
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
  [anon_sym_jro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGonce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGinclude] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_macro_block_def] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_block_end] = {
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
  [sym_label_name] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_replacement_macro] = {
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
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_macro_name] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_block] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_block_name] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__macro_block_statement] = {
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
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_macro_block_repeat1] = {
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
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 9,
  [12] = 9,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 16,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 29,
  [35] = 35,
  [36] = 36,
  [37] = 27,
  [38] = 38,
  [39] = 39,
  [40] = 39,
  [41] = 41,
  [42] = 42,
  [43] = 41,
  [44] = 44,
  [45] = 44,
  [46] = 38,
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
  [61] = 59,
  [62] = 51,
  [63] = 55,
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
  [74] = 69,
  [75] = 70,
  [76] = 65,
  [77] = 72,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(149);
      if (lookahead == ')') ADVANCE(150);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '4') ADVANCE(80);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(55);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'g') ADVANCE(65);
      if (lookahead == 'j') ADVANCE(52);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '4') ADVANCE(13);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(55);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'g') ADVANCE(65);
      if (lookahead == 'j') ADVANCE(52);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '4') ADVANCE(13);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(55);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'g') ADVANCE(65);
      if (lookahead == 'j') ADVANCE(52);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'a') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '_') ADVANCE(129);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == 'd') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'f') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == 's') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '_') ADVANCE(129);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'f') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == 's') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '_') ADVANCE(129);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == 'f') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == 's') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == ';') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(79);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(129);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == 'd') ADVANCE(132);
      if (lookahead == 'f') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == 's') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 19:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 20:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 24:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 25:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '4') ADVANCE(13);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(55);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'g') ADVANCE(65);
      if (lookahead == 'j') ADVANCE(52);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 26:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '4') ADVANCE(13);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(55);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'g') ADVANCE(65);
      if (lookahead == 'j') ADVANCE(52);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 27:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == 'a') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '4') ADVANCE(13);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(55);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'g') ADVANCE(65);
      if (lookahead == 'j') ADVANCE(52);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(32);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_lbl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == '1') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == '3') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == '8') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'b') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'b') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 's') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'd') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'd') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'g') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'p') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'l') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'l') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'l') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'l') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'l') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'm') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'm') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'n') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'n') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'o') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'o') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'o') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'p') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'p') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'p') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'q') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'r') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'r') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 's') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 't') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == 'v') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_ascii_string);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_awascii_string);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_ascii_char);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_awascii_char);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_path_content);
      if (lookahead == ';') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_path_content);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_replacement_macro_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_replacement_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_nop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_prn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_pr1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_red);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_r3d);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_blo);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_sbm);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_pop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_dpl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_srn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_mrg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_4dd);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_sub);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_mul);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_div);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_cnt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_jmp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_eql);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_lss);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_gr8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_lib);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_jro);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_trm);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_BANGonce);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_BANGinclude);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_BANGi32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_BANGf32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_BANGchr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_BANGstr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_BANG_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_BANG_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_BANG_chr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_BANG_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '2') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '2') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '2') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '2') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '3') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '3') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '3') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '3') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 's') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'f') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'h') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'h') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'u') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_macro_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_macro_block_def);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_macro_block_end);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_macro_block_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 26},
  [3] = {.lex_state = 26},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 25},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 26},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 26},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 26},
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 26},
  [38] = {.lex_state = 26},
  [39] = {.lex_state = 26},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 26},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 26},
  [44] = {.lex_state = 26},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 26},
  [47] = {.lex_state = 26},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 26},
  [50] = {.lex_state = 26},
  [51] = {.lex_state = 26},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 26},
  [54] = {.lex_state = 26},
  [55] = {.lex_state = 26},
  [56] = {.lex_state = 26},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 26},
  [59] = {.lex_state = 26},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 26},
  [62] = {.lex_state = 26},
  [63] = {.lex_state = 26},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lbl] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_label_name_token1] = ACTIONS(1),
    [sym_ascii_string] = ACTIONS(1),
    [sym_awascii_string] = ACTIONS(1),
    [sym_ascii_char] = ACTIONS(1),
    [sym_awascii_char] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_replacement_macro_name] = ACTIONS(1),
    [sym_replacement_var] = ACTIONS(1),
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
    [anon_sym_jro] = ACTIONS(1),
    [anon_sym_trm] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_BANGonce] = ACTIONS(1),
    [anon_sym_BANGinclude] = ACTIONS(1),
    [anon_sym_BANGi32] = ACTIONS(1),
    [anon_sym_BANGf32] = ACTIONS(1),
    [anon_sym_BANGchr] = ACTIONS(1),
    [anon_sym_BANGstr] = ACTIONS(1),
    [anon_sym_BANG_i32] = ACTIONS(1),
    [anon_sym_BANG_f32] = ACTIONS(1),
    [anon_sym_BANG_chr] = ACTIONS(1),
    [anon_sym_BANG_str] = ACTIONS(1),
    [sym_macro_name] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_macro_block_def] = ACTIONS(1),
    [sym_macro_block_end] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(66),
    [sym__statement] = STATE(32),
    [sym_label] = STATE(32),
    [sym_label_name] = STATE(70),
    [sym_instruction] = STATE(32),
    [sym_awatism] = STATE(19),
    [sym_macro] = STATE(32),
    [sym_builtin_macro_name] = STATE(18),
    [sym_macro_block] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lbl] = ACTIONS(7),
    [aux_sym_label_name_token1] = ACTIONS(9),
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
    [anon_sym_4dd] = ACTIONS(13),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_mul] = ACTIONS(11),
    [anon_sym_div] = ACTIONS(11),
    [anon_sym_cnt] = ACTIONS(11),
    [anon_sym_jmp] = ACTIONS(11),
    [anon_sym_eql] = ACTIONS(11),
    [anon_sym_lss] = ACTIONS(11),
    [anon_sym_gr8] = ACTIONS(11),
    [anon_sym_lib] = ACTIONS(11),
    [anon_sym_jro] = ACTIONS(11),
    [anon_sym_trm] = ACTIONS(11),
    [anon_sym_BANGonce] = ACTIONS(15),
    [anon_sym_BANGinclude] = ACTIONS(15),
    [anon_sym_BANGi32] = ACTIONS(15),
    [anon_sym_BANGf32] = ACTIONS(15),
    [anon_sym_BANGchr] = ACTIONS(15),
    [anon_sym_BANGstr] = ACTIONS(15),
    [anon_sym_BANG_i32] = ACTIONS(15),
    [anon_sym_BANG_f32] = ACTIONS(15),
    [anon_sym_BANG_chr] = ACTIONS(15),
    [anon_sym_BANG_str] = ACTIONS(15),
    [sym_macro_name] = ACTIONS(17),
    [sym_macro_block_def] = ACTIONS(19),
  },
  [2] = {
    [sym_label] = STATE(50),
    [sym_label_name] = STATE(75),
    [sym_replacement_macro] = STATE(50),
    [sym_instruction] = STATE(50),
    [sym_awatism] = STATE(16),
    [sym_macro] = STATE(50),
    [sym_builtin_macro_name] = STATE(17),
    [sym__macro_block_statement] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
    [anon_sym_lbl] = ACTIONS(25),
    [aux_sym_label_name_token1] = ACTIONS(9),
    [sym_replacement_macro_name] = ACTIONS(27),
    [sym_replacement_var] = ACTIONS(29),
    [anon_sym_nop] = ACTIONS(31),
    [anon_sym_prn] = ACTIONS(31),
    [anon_sym_pr1] = ACTIONS(31),
    [anon_sym_red] = ACTIONS(31),
    [anon_sym_r3d] = ACTIONS(31),
    [anon_sym_blo] = ACTIONS(31),
    [anon_sym_sbm] = ACTIONS(31),
    [anon_sym_pop] = ACTIONS(31),
    [anon_sym_dpl] = ACTIONS(31),
    [anon_sym_srn] = ACTIONS(31),
    [anon_sym_mrg] = ACTIONS(31),
    [anon_sym_4dd] = ACTIONS(31),
    [anon_sym_sub] = ACTIONS(31),
    [anon_sym_mul] = ACTIONS(31),
    [anon_sym_div] = ACTIONS(31),
    [anon_sym_cnt] = ACTIONS(31),
    [anon_sym_jmp] = ACTIONS(31),
    [anon_sym_eql] = ACTIONS(31),
    [anon_sym_lss] = ACTIONS(31),
    [anon_sym_gr8] = ACTIONS(31),
    [anon_sym_lib] = ACTIONS(31),
    [anon_sym_jro] = ACTIONS(31),
    [anon_sym_trm] = ACTIONS(31),
    [anon_sym_BANGonce] = ACTIONS(33),
    [anon_sym_BANGinclude] = ACTIONS(33),
    [anon_sym_BANGi32] = ACTIONS(33),
    [anon_sym_BANGf32] = ACTIONS(33),
    [anon_sym_BANGchr] = ACTIONS(33),
    [anon_sym_BANGstr] = ACTIONS(33),
    [anon_sym_BANG_i32] = ACTIONS(33),
    [anon_sym_BANG_f32] = ACTIONS(33),
    [anon_sym_BANG_chr] = ACTIONS(33),
    [anon_sym_BANG_str] = ACTIONS(33),
    [sym_macro_name] = ACTIONS(35),
    [sym_macro_block_end] = ACTIONS(37),
  },
  [3] = {
    [sym_label] = STATE(50),
    [sym_label_name] = STATE(75),
    [sym_replacement_macro] = STATE(50),
    [sym_instruction] = STATE(50),
    [sym_awatism] = STATE(16),
    [sym_macro] = STATE(50),
    [sym_builtin_macro_name] = STATE(17),
    [sym__macro_block_statement] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
    [anon_sym_lbl] = ACTIONS(25),
    [aux_sym_label_name_token1] = ACTIONS(9),
    [sym_replacement_macro_name] = ACTIONS(27),
    [sym_replacement_var] = ACTIONS(29),
    [anon_sym_nop] = ACTIONS(31),
    [anon_sym_prn] = ACTIONS(31),
    [anon_sym_pr1] = ACTIONS(31),
    [anon_sym_red] = ACTIONS(31),
    [anon_sym_r3d] = ACTIONS(31),
    [anon_sym_blo] = ACTIONS(31),
    [anon_sym_sbm] = ACTIONS(31),
    [anon_sym_pop] = ACTIONS(31),
    [anon_sym_dpl] = ACTIONS(31),
    [anon_sym_srn] = ACTIONS(31),
    [anon_sym_mrg] = ACTIONS(31),
    [anon_sym_4dd] = ACTIONS(31),
    [anon_sym_sub] = ACTIONS(31),
    [anon_sym_mul] = ACTIONS(31),
    [anon_sym_div] = ACTIONS(31),
    [anon_sym_cnt] = ACTIONS(31),
    [anon_sym_jmp] = ACTIONS(31),
    [anon_sym_eql] = ACTIONS(31),
    [anon_sym_lss] = ACTIONS(31),
    [anon_sym_gr8] = ACTIONS(31),
    [anon_sym_lib] = ACTIONS(31),
    [anon_sym_jro] = ACTIONS(31),
    [anon_sym_trm] = ACTIONS(31),
    [anon_sym_BANGonce] = ACTIONS(33),
    [anon_sym_BANGinclude] = ACTIONS(33),
    [anon_sym_BANGi32] = ACTIONS(33),
    [anon_sym_BANGf32] = ACTIONS(33),
    [anon_sym_BANGchr] = ACTIONS(33),
    [anon_sym_BANGstr] = ACTIONS(33),
    [anon_sym_BANG_i32] = ACTIONS(33),
    [anon_sym_BANG_f32] = ACTIONS(33),
    [anon_sym_BANG_chr] = ACTIONS(33),
    [anon_sym_BANG_str] = ACTIONS(33),
    [sym_macro_name] = ACTIONS(35),
    [sym_macro_block_end] = ACTIONS(39),
  },
  [4] = {
    [sym__statement] = STATE(56),
    [sym_label] = STATE(56),
    [sym_label_name] = STATE(70),
    [sym_instruction] = STATE(56),
    [sym_awatism] = STATE(19),
    [sym_macro] = STATE(56),
    [sym_builtin_macro_name] = STATE(18),
    [sym_macro_block] = STATE(56),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(43),
    [sym_comment] = ACTIONS(23),
    [anon_sym_lbl] = ACTIONS(7),
    [aux_sym_label_name_token1] = ACTIONS(9),
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
    [anon_sym_jro] = ACTIONS(11),
    [anon_sym_trm] = ACTIONS(11),
    [anon_sym_BANGonce] = ACTIONS(15),
    [anon_sym_BANGinclude] = ACTIONS(15),
    [anon_sym_BANGi32] = ACTIONS(15),
    [anon_sym_BANGf32] = ACTIONS(15),
    [anon_sym_BANGchr] = ACTIONS(15),
    [anon_sym_BANGstr] = ACTIONS(15),
    [anon_sym_BANG_i32] = ACTIONS(15),
    [anon_sym_BANG_f32] = ACTIONS(15),
    [anon_sym_BANG_chr] = ACTIONS(15),
    [anon_sym_BANG_str] = ACTIONS(15),
    [sym_macro_name] = ACTIONS(17),
    [sym_macro_block_def] = ACTIONS(19),
  },
  [5] = {
    [sym_label] = STATE(50),
    [sym_label_name] = STATE(75),
    [sym_replacement_macro] = STATE(50),
    [sym_instruction] = STATE(50),
    [sym_awatism] = STATE(16),
    [sym_macro] = STATE(50),
    [sym_builtin_macro_name] = STATE(17),
    [sym__macro_block_statement] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(10),
    [anon_sym_LF] = ACTIONS(45),
    [sym_comment] = ACTIONS(23),
    [anon_sym_lbl] = ACTIONS(25),
    [aux_sym_label_name_token1] = ACTIONS(9),
    [sym_replacement_macro_name] = ACTIONS(27),
    [sym_replacement_var] = ACTIONS(29),
    [anon_sym_nop] = ACTIONS(31),
    [anon_sym_prn] = ACTIONS(31),
    [anon_sym_pr1] = ACTIONS(31),
    [anon_sym_red] = ACTIONS(31),
    [anon_sym_r3d] = ACTIONS(31),
    [anon_sym_blo] = ACTIONS(31),
    [anon_sym_sbm] = ACTIONS(31),
    [anon_sym_pop] = ACTIONS(31),
    [anon_sym_dpl] = ACTIONS(31),
    [anon_sym_srn] = ACTIONS(31),
    [anon_sym_mrg] = ACTIONS(31),
    [anon_sym_4dd] = ACTIONS(31),
    [anon_sym_sub] = ACTIONS(31),
    [anon_sym_mul] = ACTIONS(31),
    [anon_sym_div] = ACTIONS(31),
    [anon_sym_cnt] = ACTIONS(31),
    [anon_sym_jmp] = ACTIONS(31),
    [anon_sym_eql] = ACTIONS(31),
    [anon_sym_lss] = ACTIONS(31),
    [anon_sym_gr8] = ACTIONS(31),
    [anon_sym_lib] = ACTIONS(31),
    [anon_sym_jro] = ACTIONS(31),
    [anon_sym_trm] = ACTIONS(31),
    [anon_sym_BANGonce] = ACTIONS(33),
    [anon_sym_BANGinclude] = ACTIONS(33),
    [anon_sym_BANGi32] = ACTIONS(33),
    [anon_sym_BANGf32] = ACTIONS(33),
    [anon_sym_BANGchr] = ACTIONS(33),
    [anon_sym_BANGstr] = ACTIONS(33),
    [anon_sym_BANG_i32] = ACTIONS(33),
    [anon_sym_BANG_f32] = ACTIONS(33),
    [anon_sym_BANG_chr] = ACTIONS(33),
    [anon_sym_BANG_str] = ACTIONS(33),
    [sym_macro_name] = ACTIONS(35),
  },
  [6] = {
    [sym__statement] = STATE(56),
    [sym_label] = STATE(56),
    [sym_label_name] = STATE(70),
    [sym_instruction] = STATE(56),
    [sym_awatism] = STATE(19),
    [sym_macro] = STATE(56),
    [sym_builtin_macro_name] = STATE(18),
    [sym_macro_block] = STATE(56),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(43),
    [sym_comment] = ACTIONS(23),
    [anon_sym_lbl] = ACTIONS(7),
    [aux_sym_label_name_token1] = ACTIONS(9),
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
    [anon_sym_jro] = ACTIONS(11),
    [anon_sym_trm] = ACTIONS(11),
    [anon_sym_BANGonce] = ACTIONS(15),
    [anon_sym_BANGinclude] = ACTIONS(15),
    [anon_sym_BANGi32] = ACTIONS(15),
    [anon_sym_BANGf32] = ACTIONS(15),
    [anon_sym_BANGchr] = ACTIONS(15),
    [anon_sym_BANGstr] = ACTIONS(15),
    [anon_sym_BANG_i32] = ACTIONS(15),
    [anon_sym_BANG_f32] = ACTIONS(15),
    [anon_sym_BANG_chr] = ACTIONS(15),
    [anon_sym_BANG_str] = ACTIONS(15),
    [sym_macro_name] = ACTIONS(17),
    [sym_macro_block_def] = ACTIONS(19),
  },
  [7] = {
    [sym_label] = STATE(36),
    [sym_label_name] = STATE(75),
    [sym_replacement_macro] = STATE(36),
    [sym_instruction] = STATE(36),
    [sym_awatism] = STATE(16),
    [sym_macro] = STATE(36),
    [sym_builtin_macro_name] = STATE(17),
    [sym__macro_block_statement] = STATE(36),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lbl] = ACTIONS(25),
    [aux_sym_label_name_token1] = ACTIONS(9),
    [sym_replacement_macro_name] = ACTIONS(49),
    [sym_replacement_var] = ACTIONS(51),
    [anon_sym_nop] = ACTIONS(31),
    [anon_sym_prn] = ACTIONS(31),
    [anon_sym_pr1] = ACTIONS(31),
    [anon_sym_red] = ACTIONS(31),
    [anon_sym_r3d] = ACTIONS(31),
    [anon_sym_blo] = ACTIONS(31),
    [anon_sym_sbm] = ACTIONS(31),
    [anon_sym_pop] = ACTIONS(31),
    [anon_sym_dpl] = ACTIONS(31),
    [anon_sym_srn] = ACTIONS(31),
    [anon_sym_mrg] = ACTIONS(31),
    [anon_sym_4dd] = ACTIONS(53),
    [anon_sym_sub] = ACTIONS(31),
    [anon_sym_mul] = ACTIONS(31),
    [anon_sym_div] = ACTIONS(31),
    [anon_sym_cnt] = ACTIONS(31),
    [anon_sym_jmp] = ACTIONS(31),
    [anon_sym_eql] = ACTIONS(31),
    [anon_sym_lss] = ACTIONS(31),
    [anon_sym_gr8] = ACTIONS(31),
    [anon_sym_lib] = ACTIONS(31),
    [anon_sym_jro] = ACTIONS(31),
    [anon_sym_trm] = ACTIONS(31),
    [anon_sym_BANGonce] = ACTIONS(33),
    [anon_sym_BANGinclude] = ACTIONS(33),
    [anon_sym_BANGi32] = ACTIONS(33),
    [anon_sym_BANGf32] = ACTIONS(33),
    [anon_sym_BANGchr] = ACTIONS(33),
    [anon_sym_BANGstr] = ACTIONS(33),
    [anon_sym_BANG_i32] = ACTIONS(33),
    [anon_sym_BANG_f32] = ACTIONS(33),
    [anon_sym_BANG_chr] = ACTIONS(33),
    [anon_sym_BANG_str] = ACTIONS(33),
    [sym_macro_name] = ACTIONS(35),
    [sym_macro_block_end] = ACTIONS(55),
  },
  [8] = {
    [sym__statement] = STATE(56),
    [sym_label] = STATE(56),
    [sym_label_name] = STATE(70),
    [sym_instruction] = STATE(56),
    [sym_awatism] = STATE(19),
    [sym_macro] = STATE(56),
    [sym_builtin_macro_name] = STATE(18),
    [sym_macro_block] = STATE(56),
    [aux_sym_source_file_repeat1] = STATE(12),
    [anon_sym_LF] = ACTIONS(57),
    [sym_comment] = ACTIONS(23),
    [anon_sym_lbl] = ACTIONS(7),
    [aux_sym_label_name_token1] = ACTIONS(9),
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
    [anon_sym_jro] = ACTIONS(11),
    [anon_sym_trm] = ACTIONS(11),
    [anon_sym_BANGonce] = ACTIONS(15),
    [anon_sym_BANGinclude] = ACTIONS(15),
    [anon_sym_BANGi32] = ACTIONS(15),
    [anon_sym_BANGf32] = ACTIONS(15),
    [anon_sym_BANGchr] = ACTIONS(15),
    [anon_sym_BANGstr] = ACTIONS(15),
    [anon_sym_BANG_i32] = ACTIONS(15),
    [anon_sym_BANG_f32] = ACTIONS(15),
    [anon_sym_BANG_chr] = ACTIONS(15),
    [anon_sym_BANG_str] = ACTIONS(15),
    [sym_macro_name] = ACTIONS(17),
    [sym_macro_block_def] = ACTIONS(19),
  },
  [9] = {
    [aux_sym_source_file_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(59),
    [sym_comment] = ACTIONS(23),
    [anon_sym_lbl] = ACTIONS(62),
    [aux_sym_label_name_token1] = ACTIONS(62),
    [sym_replacement_macro_name] = ACTIONS(62),
    [sym_replacement_var] = ACTIONS(62),
    [anon_sym_nop] = ACTIONS(62),
    [anon_sym_prn] = ACTIONS(62),
    [anon_sym_pr1] = ACTIONS(62),
    [anon_sym_red] = ACTIONS(62),
    [anon_sym_r3d] = ACTIONS(62),
    [anon_sym_blo] = ACTIONS(62),
    [anon_sym_sbm] = ACTIONS(62),
    [anon_sym_pop] = ACTIONS(62),
    [anon_sym_dpl] = ACTIONS(62),
    [anon_sym_srn] = ACTIONS(62),
    [anon_sym_mrg] = ACTIONS(62),
    [anon_sym_4dd] = ACTIONS(62),
    [anon_sym_sub] = ACTIONS(62),
    [anon_sym_mul] = ACTIONS(62),
    [anon_sym_div] = ACTIONS(62),
    [anon_sym_cnt] = ACTIONS(62),
    [anon_sym_jmp] = ACTIONS(62),
    [anon_sym_eql] = ACTIONS(62),
    [anon_sym_lss] = ACTIONS(62),
    [anon_sym_gr8] = ACTIONS(62),
    [anon_sym_lib] = ACTIONS(62),
    [anon_sym_jro] = ACTIONS(62),
    [anon_sym_trm] = ACTIONS(62),
    [anon_sym_BANGonce] = ACTIONS(62),
    [anon_sym_BANGinclude] = ACTIONS(62),
    [anon_sym_BANGi32] = ACTIONS(62),
    [anon_sym_BANGf32] = ACTIONS(62),
    [anon_sym_BANGchr] = ACTIONS(62),
    [anon_sym_BANGstr] = ACTIONS(62),
    [anon_sym_BANG_i32] = ACTIONS(62),
    [anon_sym_BANG_f32] = ACTIONS(62),
    [anon_sym_BANG_chr] = ACTIONS(62),
    [anon_sym_BANG_str] = ACTIONS(62),
    [sym_macro_name] = ACTIONS(62),
    [sym_macro_block_end] = ACTIONS(62),
  },
  [10] = {
    [aux_sym_source_file_repeat1] = STATE(10),
    [anon_sym_LF] = ACTIONS(64),
    [sym_comment] = ACTIONS(23),
    [anon_sym_lbl] = ACTIONS(62),
    [aux_sym_label_name_token1] = ACTIONS(62),
    [sym_replacement_macro_name] = ACTIONS(62),
    [sym_replacement_var] = ACTIONS(62),
    [anon_sym_nop] = ACTIONS(62),
    [anon_sym_prn] = ACTIONS(62),
    [anon_sym_pr1] = ACTIONS(62),
    [anon_sym_red] = ACTIONS(62),
    [anon_sym_r3d] = ACTIONS(62),
    [anon_sym_blo] = ACTIONS(62),
    [anon_sym_sbm] = ACTIONS(62),
    [anon_sym_pop] = ACTIONS(62),
    [anon_sym_dpl] = ACTIONS(62),
    [anon_sym_srn] = ACTIONS(62),
    [anon_sym_mrg] = ACTIONS(62),
    [anon_sym_4dd] = ACTIONS(62),
    [anon_sym_sub] = ACTIONS(62),
    [anon_sym_mul] = ACTIONS(62),
    [anon_sym_div] = ACTIONS(62),
    [anon_sym_cnt] = ACTIONS(62),
    [anon_sym_jmp] = ACTIONS(62),
    [anon_sym_eql] = ACTIONS(62),
    [anon_sym_lss] = ACTIONS(62),
    [anon_sym_gr8] = ACTIONS(62),
    [anon_sym_lib] = ACTIONS(62),
    [anon_sym_jro] = ACTIONS(62),
    [anon_sym_trm] = ACTIONS(62),
    [anon_sym_BANGonce] = ACTIONS(62),
    [anon_sym_BANGinclude] = ACTIONS(62),
    [anon_sym_BANGi32] = ACTIONS(62),
    [anon_sym_BANGf32] = ACTIONS(62),
    [anon_sym_BANGchr] = ACTIONS(62),
    [anon_sym_BANGstr] = ACTIONS(62),
    [anon_sym_BANG_i32] = ACTIONS(62),
    [anon_sym_BANG_f32] = ACTIONS(62),
    [anon_sym_BANG_chr] = ACTIONS(62),
    [anon_sym_BANG_str] = ACTIONS(62),
    [sym_macro_name] = ACTIONS(62),
  },
  [11] = {
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_LF] = ACTIONS(69),
    [sym_comment] = ACTIONS(23),
    [anon_sym_lbl] = ACTIONS(62),
    [aux_sym_label_name_token1] = ACTIONS(62),
    [anon_sym_nop] = ACTIONS(62),
    [anon_sym_prn] = ACTIONS(62),
    [anon_sym_pr1] = ACTIONS(62),
    [anon_sym_red] = ACTIONS(62),
    [anon_sym_r3d] = ACTIONS(62),
    [anon_sym_blo] = ACTIONS(62),
    [anon_sym_sbm] = ACTIONS(62),
    [anon_sym_pop] = ACTIONS(62),
    [anon_sym_dpl] = ACTIONS(62),
    [anon_sym_srn] = ACTIONS(62),
    [anon_sym_mrg] = ACTIONS(62),
    [anon_sym_4dd] = ACTIONS(62),
    [anon_sym_sub] = ACTIONS(62),
    [anon_sym_mul] = ACTIONS(62),
    [anon_sym_div] = ACTIONS(62),
    [anon_sym_cnt] = ACTIONS(62),
    [anon_sym_jmp] = ACTIONS(62),
    [anon_sym_eql] = ACTIONS(62),
    [anon_sym_lss] = ACTIONS(62),
    [anon_sym_gr8] = ACTIONS(62),
    [anon_sym_lib] = ACTIONS(62),
    [anon_sym_jro] = ACTIONS(62),
    [anon_sym_trm] = ACTIONS(62),
    [anon_sym_BANGonce] = ACTIONS(62),
    [anon_sym_BANGinclude] = ACTIONS(62),
    [anon_sym_BANGi32] = ACTIONS(62),
    [anon_sym_BANGf32] = ACTIONS(62),
    [anon_sym_BANGchr] = ACTIONS(62),
    [anon_sym_BANGstr] = ACTIONS(62),
    [anon_sym_BANG_i32] = ACTIONS(62),
    [anon_sym_BANG_f32] = ACTIONS(62),
    [anon_sym_BANG_chr] = ACTIONS(62),
    [anon_sym_BANG_str] = ACTIONS(62),
    [sym_macro_name] = ACTIONS(62),
    [sym_macro_block_def] = ACTIONS(62),
  },
  [12] = {
    [aux_sym_source_file_repeat1] = STATE(12),
    [anon_sym_LF] = ACTIONS(72),
    [sym_comment] = ACTIONS(23),
    [anon_sym_lbl] = ACTIONS(62),
    [aux_sym_label_name_token1] = ACTIONS(62),
    [anon_sym_nop] = ACTIONS(62),
    [anon_sym_prn] = ACTIONS(62),
    [anon_sym_pr1] = ACTIONS(62),
    [anon_sym_red] = ACTIONS(62),
    [anon_sym_r3d] = ACTIONS(62),
    [anon_sym_blo] = ACTIONS(62),
    [anon_sym_sbm] = ACTIONS(62),
    [anon_sym_pop] = ACTIONS(62),
    [anon_sym_dpl] = ACTIONS(62),
    [anon_sym_srn] = ACTIONS(62),
    [anon_sym_mrg] = ACTIONS(62),
    [anon_sym_4dd] = ACTIONS(62),
    [anon_sym_sub] = ACTIONS(62),
    [anon_sym_mul] = ACTIONS(62),
    [anon_sym_div] = ACTIONS(62),
    [anon_sym_cnt] = ACTIONS(62),
    [anon_sym_jmp] = ACTIONS(62),
    [anon_sym_eql] = ACTIONS(62),
    [anon_sym_lss] = ACTIONS(62),
    [anon_sym_gr8] = ACTIONS(62),
    [anon_sym_lib] = ACTIONS(62),
    [anon_sym_jro] = ACTIONS(62),
    [anon_sym_trm] = ACTIONS(62),
    [anon_sym_BANGonce] = ACTIONS(62),
    [anon_sym_BANGinclude] = ACTIONS(62),
    [anon_sym_BANGi32] = ACTIONS(62),
    [anon_sym_BANGf32] = ACTIONS(62),
    [anon_sym_BANGchr] = ACTIONS(62),
    [anon_sym_BANGstr] = ACTIONS(62),
    [anon_sym_BANG_i32] = ACTIONS(62),
    [anon_sym_BANG_f32] = ACTIONS(62),
    [anon_sym_BANG_chr] = ACTIONS(62),
    [anon_sym_BANG_str] = ACTIONS(62),
    [sym_macro_name] = ACTIONS(62),
    [sym_macro_block_def] = ACTIONS(62),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_label_name_token1,
    ACTIONS(81), 1,
      anon_sym_LT,
    STATE(37), 1,
      sym_value,
    STATE(51), 1,
      sym_argument_list,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(39), 2,
      sym_text,
      sym_path,
    ACTIONS(79), 7,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [33] = 9,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      aux_sym_label_name_token1,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym_macro_block_end,
    STATE(27), 1,
      sym_value,
    STATE(62), 1,
      sym_argument_list,
    STATE(40), 2,
      sym_text,
      sym_path,
    ACTIONS(85), 7,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [68] = 9,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(83), 1,
      aux_sym_label_name_token1,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_LF,
    ACTIONS(93), 1,
      sym_macro_block_end,
    STATE(27), 1,
      sym_value,
    STATE(47), 1,
      sym_argument_list,
    STATE(40), 2,
      sym_text,
      sym_path,
    ACTIONS(85), 7,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [103] = 8,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(83), 1,
      aux_sym_label_name_token1,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(95), 1,
      anon_sym_LF,
    ACTIONS(97), 1,
      sym_macro_block_end,
    STATE(63), 1,
      sym_value,
    STATE(40), 2,
      sym_text,
      sym_path,
    ACTIONS(85), 7,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [135] = 8,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      aux_sym_label_name_token1,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym_macro_block_end,
    STATE(62), 1,
      sym_value,
    STATE(40), 2,
      sym_text,
      sym_path,
    ACTIONS(85), 7,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [167] = 7,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_label_name_token1,
    ACTIONS(81), 1,
      anon_sym_LT,
    STATE(51), 1,
      sym_value,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(39), 2,
      sym_text,
      sym_path,
    ACTIONS(79), 7,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [197] = 7,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_label_name_token1,
    ACTIONS(81), 1,
      anon_sym_LT,
    STATE(55), 1,
      sym_value,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(39), 2,
      sym_text,
      sym_path,
    ACTIONS(79), 7,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [227] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      aux_sym_label_name_token1,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(101), 1,
      anon_sym_LT,
    STATE(44), 1,
      sym_value,
    STATE(40), 2,
      sym_text,
      sym_path,
    ACTIONS(99), 6,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_float,
      sym_replacement_var,
  [255] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_label_name_token1,
    ACTIONS(79), 1,
      sym_number,
    ACTIONS(105), 1,
      anon_sym_LT,
    STATE(45), 1,
      sym_value,
    STATE(39), 2,
      sym_text,
      sym_path,
    ACTIONS(103), 6,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_float,
      sym_replacement_var,
  [283] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(109), 9,
      aux_sym_label_name_token1,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      anon_sym_LT,
      sym_number,
      sym_float,
      sym_replacement_var,
  [302] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(113), 9,
      aux_sym_label_name_token1,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      anon_sym_LT,
      sym_number,
      sym_float,
      sym_replacement_var,
  [321] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LF,
    ACTIONS(109), 10,
      aux_sym_label_name_token1,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      anon_sym_LT,
      sym_number,
      sym_float,
      sym_replacement_var,
      sym_macro_block_end,
  [340] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LF,
    ACTIONS(113), 10,
      aux_sym_label_name_token1,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      anon_sym_LT,
      sym_number,
      sym_float,
      sym_replacement_var,
      sym_macro_block_end,
  [359] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LF,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      sym_macro_block_end,
    STATE(29), 1,
      aux_sym_argument_list_repeat1,
  [375] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_LF,
    ACTIONS(123), 1,
      sym_macro_block_end,
    STATE(26), 1,
      aux_sym_argument_list_repeat1,
  [391] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [405] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_LF,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      sym_macro_block_end,
    STATE(29), 1,
      aux_sym_argument_list_repeat1,
  [421] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      anon_sym_LF,
    STATE(4), 1,
      aux_sym_source_file_repeat1,
    STATE(31), 1,
      aux_sym_source_file_repeat2,
  [437] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(31), 1,
      aux_sym_source_file_repeat2,
  [453] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(30), 1,
      aux_sym_source_file_repeat2,
  [469] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(148), 1,
      sym_macro_block_end,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(33), 1,
      aux_sym_macro_block_repeat1,
  [485] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [499] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_macro_block_end,
    ACTIONS(153), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(33), 1,
      aux_sym_macro_block_repeat1,
  [515] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_macro_block_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(35), 1,
      aux_sym_macro_block_repeat1,
  [531] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [545] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [556] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [567] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      sym_macro_block_end,
  [578] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LF,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      sym_macro_block_end,
  [589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_label_name_token1,
    STATE(48), 1,
      sym_parameter,
    STATE(64), 1,
      sym_parameter_list,
  [602] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [613] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_LF,
    ACTIONS(132), 2,
      anon_sym_COMMA,
      sym_macro_block_end,
  [624] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [635] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_LF,
    ACTIONS(161), 2,
      anon_sym_COMMA,
      sym_macro_block_end,
  [646] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LF,
    ACTIONS(175), 1,
      sym_macro_block_end,
  [656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
  [666] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [674] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_macro_block_end,
    ACTIONS(183), 1,
      anon_sym_LF,
  [684] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [700] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [708] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [716] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [724] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      aux_sym_label_name_token1,
    STATE(67), 1,
      sym_macro_block_name,
  [742] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [750] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LF,
    ACTIONS(201), 1,
      sym_macro_block_end,
  [760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_label_name_token1,
    STATE(71), 1,
      sym_parameter,
  [770] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [778] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(203), 1,
      sym_macro_block_end,
  [788] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LF,
    ACTIONS(205), 1,
      sym_macro_block_end,
  [798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
  [805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_GT,
  [812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
  [819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
  [826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
  [833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym_number,
  [840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COLON,
  [847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
  [854] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_path_content,
  [861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_COLON,
  [868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_number,
  [875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COLON,
  [882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_GT,
  [889] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_path_content,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 33,
  [SMALL_STATE(15)] = 68,
  [SMALL_STATE(16)] = 103,
  [SMALL_STATE(17)] = 135,
  [SMALL_STATE(18)] = 167,
  [SMALL_STATE(19)] = 197,
  [SMALL_STATE(20)] = 227,
  [SMALL_STATE(21)] = 255,
  [SMALL_STATE(22)] = 283,
  [SMALL_STATE(23)] = 302,
  [SMALL_STATE(24)] = 321,
  [SMALL_STATE(25)] = 340,
  [SMALL_STATE(26)] = 359,
  [SMALL_STATE(27)] = 375,
  [SMALL_STATE(28)] = 391,
  [SMALL_STATE(29)] = 405,
  [SMALL_STATE(30)] = 421,
  [SMALL_STATE(31)] = 437,
  [SMALL_STATE(32)] = 453,
  [SMALL_STATE(33)] = 469,
  [SMALL_STATE(34)] = 485,
  [SMALL_STATE(35)] = 499,
  [SMALL_STATE(36)] = 515,
  [SMALL_STATE(37)] = 531,
  [SMALL_STATE(38)] = 545,
  [SMALL_STATE(39)] = 556,
  [SMALL_STATE(40)] = 567,
  [SMALL_STATE(41)] = 578,
  [SMALL_STATE(42)] = 589,
  [SMALL_STATE(43)] = 602,
  [SMALL_STATE(44)] = 613,
  [SMALL_STATE(45)] = 624,
  [SMALL_STATE(46)] = 635,
  [SMALL_STATE(47)] = 646,
  [SMALL_STATE(48)] = 656,
  [SMALL_STATE(49)] = 666,
  [SMALL_STATE(50)] = 674,
  [SMALL_STATE(51)] = 684,
  [SMALL_STATE(52)] = 692,
  [SMALL_STATE(53)] = 700,
  [SMALL_STATE(54)] = 708,
  [SMALL_STATE(55)] = 716,
  [SMALL_STATE(56)] = 724,
  [SMALL_STATE(57)] = 732,
  [SMALL_STATE(58)] = 742,
  [SMALL_STATE(59)] = 750,
  [SMALL_STATE(60)] = 760,
  [SMALL_STATE(61)] = 770,
  [SMALL_STATE(62)] = 778,
  [SMALL_STATE(63)] = 788,
  [SMALL_STATE(64)] = 798,
  [SMALL_STATE(65)] = 805,
  [SMALL_STATE(66)] = 812,
  [SMALL_STATE(67)] = 819,
  [SMALL_STATE(68)] = 826,
  [SMALL_STATE(69)] = 833,
  [SMALL_STATE(70)] = 840,
  [SMALL_STATE(71)] = 847,
  [SMALL_STATE(72)] = 854,
  [SMALL_STATE(73)] = 861,
  [SMALL_STATE(74)] = 868,
  [SMALL_STATE(75)] = 875,
  [SMALL_STATE(76)] = 882,
  [SMALL_STATE(77)] = 889,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 1, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement_macro, 1, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement_macro, 1, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_awatism, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_awatism, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_macro_name, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_macro_name, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(20),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(8),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_block_repeat1, 2), SHIFT_REPEAT(5),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_block_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(21),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement_macro, 2, .production_id = 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement_macro, 2, .production_id = 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block, 8),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_block_repeat1, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 2, .production_id = 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block, 9),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block, 7),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block, 6),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 2, .production_id = 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, .production_id = 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [211] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block_name, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_name, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
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

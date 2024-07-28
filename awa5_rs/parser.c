#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_comment = 2,
  anon_sym_lbl = 3,
  aux_sym_text_token1 = 4,
  sym_ascii_string = 5,
  sym_awascii_string = 6,
  sym_ascii_char = 7,
  sym_awascii_char = 8,
  anon_sym_LT = 9,
  anon_sym_GT = 10,
  sym_path_content = 11,
  sym_number = 12,
  sym_float = 13,
  sym_replacement_macro_name = 14,
  sym_replacement_var = 15,
  anon_sym_nop = 16,
  anon_sym_prn = 17,
  anon_sym_pr1 = 18,
  anon_sym_red = 19,
  anon_sym_r3d = 20,
  anon_sym_blo = 21,
  anon_sym_sbm = 22,
  anon_sym_pop = 23,
  anon_sym_dpl = 24,
  anon_sym_srn = 25,
  anon_sym_mrg = 26,
  anon_sym_4dd = 27,
  anon_sym_sub = 28,
  anon_sym_mul = 29,
  anon_sym_div = 30,
  anon_sym_cnt = 31,
  anon_sym_jmp = 32,
  anon_sym_eql = 33,
  anon_sym_lss = 34,
  anon_sym_gr8 = 35,
  anon_sym_lib = 36,
  anon_sym_trm = 37,
  anon_sym_COMMA = 38,
  anon_sym_BANGonce = 39,
  anon_sym_BANGinclude = 40,
  anon_sym_BANGi32 = 41,
  anon_sym_BANGf32 = 42,
  anon_sym_BANGchr = 43,
  anon_sym_BANGstr = 44,
  anon_sym_BANG_i32 = 45,
  anon_sym_BANG_f32 = 46,
  anon_sym_BANG_chr = 47,
  anon_sym_BANG_str = 48,
  sym_macro_name = 49,
  anon_sym_LPAREN = 50,
  anon_sym_RPAREN = 51,
  sym_macro_block_def = 52,
  sym_macro_block_end = 53,
  sym_source_file = 54,
  sym__statement = 55,
  sym_label = 56,
  sym_value = 57,
  sym_text = 58,
  sym_path = 59,
  sym_replacement_macro = 60,
  sym_instruction = 61,
  sym_awatism = 62,
  sym_macro = 63,
  sym_argument_list = 64,
  sym_builtin_macro_name = 65,
  sym_macro_block = 66,
  sym_macro_block_name = 67,
  sym_parameter_list = 68,
  sym_parameter = 69,
  sym__macro_block_statement = 70,
  aux_sym_source_file_repeat1 = 71,
  aux_sym_source_file_repeat2 = 72,
  aux_sym_argument_list_repeat1 = 73,
  aux_sym_macro_block_repeat1 = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_lbl] = "lbl",
  [aux_sym_text_token1] = "text_token1",
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
  [aux_sym_text_token1] = aux_sym_text_token1,
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
  [aux_sym_text_token1] = {
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
  [24] = 23,
  [25] = 22,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 28,
  [31] = 27,
  [32] = 32,
  [33] = 33,
  [34] = 32,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 39,
  [43] = 43,
  [44] = 44,
  [45] = 44,
  [46] = 43,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 47,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 56,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 49,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 65,
  [73] = 71,
  [74] = 70,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(64);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(147);
      if (lookahead == ')') ADVANCE(148);
      if (lookahead == ',') ADVANCE(106);
      if (lookahead == '4') ADVANCE(79);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == 'a') ADVANCE(6);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'g') ADVANCE(47);
      if (lookahead == 'j') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '4') ADVANCE(21);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'g') ADVANCE(47);
      if (lookahead == 'j') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '4') ADVANCE(21);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'g') ADVANCE(47);
      if (lookahead == 'j') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '_') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 's') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '_') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 's') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '_') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 's') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '1') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 13:
      if (lookahead == '3') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == '8') ADVANCE(103);
      END_STATE();
    case 15:
      if (lookahead == ';') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(78);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 's') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(104);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(96);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(94);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 46:
      if (lookahead == 'q') ADVANCE(30);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 52:
      if (lookahead == 'v') ADVANCE(98);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 54:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 55:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 56:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 57:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 58:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 59:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 60:
      if (eof) ADVANCE(64);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '4') ADVANCE(21);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'g') ADVANCE(47);
      if (lookahead == 'j') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60)
      END_STATE();
    case 61:
      if (eof) ADVANCE(64);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == ',') ADVANCE(106);
      if (lookahead == '4') ADVANCE(21);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'g') ADVANCE(47);
      if (lookahead == 'j') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61)
      END_STATE();
    case 62:
      if (eof) ADVANCE(64);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 63:
      if (eof) ADVANCE(64);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '4') ADVANCE(21);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'g') ADVANCE(47);
      if (lookahead == 'j') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63)
      END_STATE();
    case 64:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(67);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_lbl);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_ascii_string);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_awascii_string);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_ascii_char);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_awascii_char);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_path_content);
      if (lookahead == ';') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_path_content);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_replacement_macro_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_replacement_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_nop);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_prn);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_pr1);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_r3d);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_blo);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_sbm);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_dpl);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_srn);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_mrg);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_4dd);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_mul);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_cnt);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_jmp);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_eql);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_lss);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_gr8);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_lib);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_trm);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_BANGonce);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_BANGinclude);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_BANGi32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_BANGf32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_BANGchr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_BANGstr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_BANG_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_BANG_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_BANG_chr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_BANG_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '2') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '2') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '2') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '2') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '3') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '3') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '3') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '3') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == 'f') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'f') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'h') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'h') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'u') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_macro_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_macro_block_def);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_macro_block_end);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_macro_block_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 63},
  [2] = {.lex_state = 61},
  [3] = {.lex_state = 61},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 60},
  [6] = {.lex_state = 60},
  [7] = {.lex_state = 60},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 61},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 60},
  [12] = {.lex_state = 60},
  [13] = {.lex_state = 62},
  [14] = {.lex_state = 62},
  [15] = {.lex_state = 62},
  [16] = {.lex_state = 62},
  [17] = {.lex_state = 62},
  [18] = {.lex_state = 62},
  [19] = {.lex_state = 62},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 62},
  [23] = {.lex_state = 62},
  [24] = {.lex_state = 62},
  [25] = {.lex_state = 62},
  [26] = {.lex_state = 61},
  [27] = {.lex_state = 61},
  [28] = {.lex_state = 61},
  [29] = {.lex_state = 61},
  [30] = {.lex_state = 61},
  [31] = {.lex_state = 61},
  [32] = {.lex_state = 61},
  [33] = {.lex_state = 61},
  [34] = {.lex_state = 61},
  [35] = {.lex_state = 61},
  [36] = {.lex_state = 61},
  [37] = {.lex_state = 61},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 61},
  [40] = {.lex_state = 61},
  [41] = {.lex_state = 61},
  [42] = {.lex_state = 61},
  [43] = {.lex_state = 61},
  [44] = {.lex_state = 61},
  [45] = {.lex_state = 61},
  [46] = {.lex_state = 61},
  [47] = {.lex_state = 61},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 61},
  [50] = {.lex_state = 61},
  [51] = {.lex_state = 61},
  [52] = {.lex_state = 61},
  [53] = {.lex_state = 61},
  [54] = {.lex_state = 61},
  [55] = {.lex_state = 61},
  [56] = {.lex_state = 61},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 61},
  [59] = {.lex_state = 61},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 61},
  [63] = {.lex_state = 61},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 15},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lbl] = ACTIONS(1),
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
    [sym_source_file] = STATE(64),
    [sym__statement] = STATE(33),
    [sym_label] = STATE(33),
    [sym_instruction] = STATE(33),
    [sym_awatism] = STATE(17),
    [sym_macro] = STATE(33),
    [sym_builtin_macro_name] = STATE(16),
    [sym_macro_block] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lbl] = ACTIONS(7),
    [anon_sym_nop] = ACTIONS(9),
    [anon_sym_prn] = ACTIONS(9),
    [anon_sym_pr1] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_r3d] = ACTIONS(9),
    [anon_sym_blo] = ACTIONS(9),
    [anon_sym_sbm] = ACTIONS(9),
    [anon_sym_pop] = ACTIONS(9),
    [anon_sym_dpl] = ACTIONS(9),
    [anon_sym_srn] = ACTIONS(9),
    [anon_sym_mrg] = ACTIONS(9),
    [anon_sym_4dd] = ACTIONS(9),
    [anon_sym_sub] = ACTIONS(9),
    [anon_sym_mul] = ACTIONS(9),
    [anon_sym_div] = ACTIONS(9),
    [anon_sym_cnt] = ACTIONS(9),
    [anon_sym_jmp] = ACTIONS(9),
    [anon_sym_eql] = ACTIONS(9),
    [anon_sym_lss] = ACTIONS(9),
    [anon_sym_gr8] = ACTIONS(9),
    [anon_sym_lib] = ACTIONS(9),
    [anon_sym_trm] = ACTIONS(9),
    [anon_sym_BANGonce] = ACTIONS(11),
    [anon_sym_BANGinclude] = ACTIONS(11),
    [anon_sym_BANGi32] = ACTIONS(11),
    [anon_sym_BANGf32] = ACTIONS(11),
    [anon_sym_BANGchr] = ACTIONS(11),
    [anon_sym_BANGstr] = ACTIONS(11),
    [anon_sym_BANG_i32] = ACTIONS(11),
    [anon_sym_BANG_f32] = ACTIONS(11),
    [anon_sym_BANG_chr] = ACTIONS(11),
    [anon_sym_BANG_str] = ACTIONS(11),
    [sym_macro_name] = ACTIONS(13),
    [sym_macro_block_def] = ACTIONS(15),
  },
  [2] = {
    [sym_label] = STATE(62),
    [sym_replacement_macro] = STATE(62),
    [sym_instruction] = STATE(62),
    [sym_awatism] = STATE(18),
    [sym_macro] = STATE(62),
    [sym_builtin_macro_name] = STATE(19),
    [sym__macro_block_statement] = STATE(62),
    [aux_sym_source_file_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [anon_sym_lbl] = ACTIONS(21),
    [sym_replacement_macro_name] = ACTIONS(23),
    [sym_replacement_var] = ACTIONS(25),
    [anon_sym_nop] = ACTIONS(27),
    [anon_sym_prn] = ACTIONS(27),
    [anon_sym_pr1] = ACTIONS(27),
    [anon_sym_red] = ACTIONS(27),
    [anon_sym_r3d] = ACTIONS(27),
    [anon_sym_blo] = ACTIONS(27),
    [anon_sym_sbm] = ACTIONS(27),
    [anon_sym_pop] = ACTIONS(27),
    [anon_sym_dpl] = ACTIONS(27),
    [anon_sym_srn] = ACTIONS(27),
    [anon_sym_mrg] = ACTIONS(27),
    [anon_sym_4dd] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_div] = ACTIONS(27),
    [anon_sym_cnt] = ACTIONS(27),
    [anon_sym_jmp] = ACTIONS(27),
    [anon_sym_eql] = ACTIONS(27),
    [anon_sym_lss] = ACTIONS(27),
    [anon_sym_gr8] = ACTIONS(27),
    [anon_sym_lib] = ACTIONS(27),
    [anon_sym_trm] = ACTIONS(27),
    [anon_sym_BANGonce] = ACTIONS(29),
    [anon_sym_BANGinclude] = ACTIONS(29),
    [anon_sym_BANGi32] = ACTIONS(29),
    [anon_sym_BANGf32] = ACTIONS(29),
    [anon_sym_BANGchr] = ACTIONS(29),
    [anon_sym_BANGstr] = ACTIONS(29),
    [anon_sym_BANG_i32] = ACTIONS(29),
    [anon_sym_BANG_f32] = ACTIONS(29),
    [anon_sym_BANG_chr] = ACTIONS(29),
    [anon_sym_BANG_str] = ACTIONS(29),
    [sym_macro_name] = ACTIONS(31),
    [sym_macro_block_end] = ACTIONS(33),
  },
  [3] = {
    [sym_label] = STATE(62),
    [sym_replacement_macro] = STATE(62),
    [sym_instruction] = STATE(62),
    [sym_awatism] = STATE(18),
    [sym_macro] = STATE(62),
    [sym_builtin_macro_name] = STATE(19),
    [sym__macro_block_statement] = STATE(62),
    [aux_sym_source_file_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [anon_sym_lbl] = ACTIONS(21),
    [sym_replacement_macro_name] = ACTIONS(23),
    [sym_replacement_var] = ACTIONS(25),
    [anon_sym_nop] = ACTIONS(27),
    [anon_sym_prn] = ACTIONS(27),
    [anon_sym_pr1] = ACTIONS(27),
    [anon_sym_red] = ACTIONS(27),
    [anon_sym_r3d] = ACTIONS(27),
    [anon_sym_blo] = ACTIONS(27),
    [anon_sym_sbm] = ACTIONS(27),
    [anon_sym_pop] = ACTIONS(27),
    [anon_sym_dpl] = ACTIONS(27),
    [anon_sym_srn] = ACTIONS(27),
    [anon_sym_mrg] = ACTIONS(27),
    [anon_sym_4dd] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_div] = ACTIONS(27),
    [anon_sym_cnt] = ACTIONS(27),
    [anon_sym_jmp] = ACTIONS(27),
    [anon_sym_eql] = ACTIONS(27),
    [anon_sym_lss] = ACTIONS(27),
    [anon_sym_gr8] = ACTIONS(27),
    [anon_sym_lib] = ACTIONS(27),
    [anon_sym_trm] = ACTIONS(27),
    [anon_sym_BANGonce] = ACTIONS(29),
    [anon_sym_BANGinclude] = ACTIONS(29),
    [anon_sym_BANGi32] = ACTIONS(29),
    [anon_sym_BANGf32] = ACTIONS(29),
    [anon_sym_BANGchr] = ACTIONS(29),
    [anon_sym_BANGstr] = ACTIONS(29),
    [anon_sym_BANG_i32] = ACTIONS(29),
    [anon_sym_BANG_f32] = ACTIONS(29),
    [anon_sym_BANG_chr] = ACTIONS(29),
    [anon_sym_BANG_str] = ACTIONS(29),
    [sym_macro_name] = ACTIONS(31),
    [sym_macro_block_end] = ACTIONS(35),
  },
  [4] = {
    [sym_label] = STATE(62),
    [sym_replacement_macro] = STATE(62),
    [sym_instruction] = STATE(62),
    [sym_awatism] = STATE(18),
    [sym_macro] = STATE(62),
    [sym_builtin_macro_name] = STATE(19),
    [sym__macro_block_statement] = STATE(62),
    [aux_sym_source_file_repeat1] = STATE(10),
    [anon_sym_LF] = ACTIONS(37),
    [sym_comment] = ACTIONS(19),
    [anon_sym_lbl] = ACTIONS(21),
    [sym_replacement_macro_name] = ACTIONS(23),
    [sym_replacement_var] = ACTIONS(25),
    [anon_sym_nop] = ACTIONS(27),
    [anon_sym_prn] = ACTIONS(27),
    [anon_sym_pr1] = ACTIONS(27),
    [anon_sym_red] = ACTIONS(27),
    [anon_sym_r3d] = ACTIONS(27),
    [anon_sym_blo] = ACTIONS(27),
    [anon_sym_sbm] = ACTIONS(27),
    [anon_sym_pop] = ACTIONS(27),
    [anon_sym_dpl] = ACTIONS(27),
    [anon_sym_srn] = ACTIONS(27),
    [anon_sym_mrg] = ACTIONS(27),
    [anon_sym_4dd] = ACTIONS(27),
    [anon_sym_sub] = ACTIONS(27),
    [anon_sym_mul] = ACTIONS(27),
    [anon_sym_div] = ACTIONS(27),
    [anon_sym_cnt] = ACTIONS(27),
    [anon_sym_jmp] = ACTIONS(27),
    [anon_sym_eql] = ACTIONS(27),
    [anon_sym_lss] = ACTIONS(27),
    [anon_sym_gr8] = ACTIONS(27),
    [anon_sym_lib] = ACTIONS(27),
    [anon_sym_trm] = ACTIONS(27),
    [anon_sym_BANGonce] = ACTIONS(29),
    [anon_sym_BANGinclude] = ACTIONS(29),
    [anon_sym_BANGi32] = ACTIONS(29),
    [anon_sym_BANGf32] = ACTIONS(29),
    [anon_sym_BANGchr] = ACTIONS(29),
    [anon_sym_BANGstr] = ACTIONS(29),
    [anon_sym_BANG_i32] = ACTIONS(29),
    [anon_sym_BANG_f32] = ACTIONS(29),
    [anon_sym_BANG_chr] = ACTIONS(29),
    [anon_sym_BANG_str] = ACTIONS(29),
    [sym_macro_name] = ACTIONS(31),
  },
  [5] = {
    [sym__statement] = STATE(52),
    [sym_label] = STATE(52),
    [sym_instruction] = STATE(52),
    [sym_awatism] = STATE(17),
    [sym_macro] = STATE(52),
    [sym_builtin_macro_name] = STATE(16),
    [sym_macro_block] = STATE(52),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(41),
    [sym_comment] = ACTIONS(19),
    [anon_sym_lbl] = ACTIONS(43),
    [anon_sym_nop] = ACTIONS(45),
    [anon_sym_prn] = ACTIONS(45),
    [anon_sym_pr1] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_r3d] = ACTIONS(45),
    [anon_sym_blo] = ACTIONS(45),
    [anon_sym_sbm] = ACTIONS(45),
    [anon_sym_pop] = ACTIONS(45),
    [anon_sym_dpl] = ACTIONS(45),
    [anon_sym_srn] = ACTIONS(45),
    [anon_sym_mrg] = ACTIONS(45),
    [anon_sym_4dd] = ACTIONS(45),
    [anon_sym_sub] = ACTIONS(45),
    [anon_sym_mul] = ACTIONS(45),
    [anon_sym_div] = ACTIONS(45),
    [anon_sym_cnt] = ACTIONS(45),
    [anon_sym_jmp] = ACTIONS(45),
    [anon_sym_eql] = ACTIONS(45),
    [anon_sym_lss] = ACTIONS(45),
    [anon_sym_gr8] = ACTIONS(45),
    [anon_sym_lib] = ACTIONS(45),
    [anon_sym_trm] = ACTIONS(45),
    [anon_sym_BANGonce] = ACTIONS(11),
    [anon_sym_BANGinclude] = ACTIONS(11),
    [anon_sym_BANGi32] = ACTIONS(11),
    [anon_sym_BANGf32] = ACTIONS(11),
    [anon_sym_BANGchr] = ACTIONS(11),
    [anon_sym_BANGstr] = ACTIONS(11),
    [anon_sym_BANG_i32] = ACTIONS(11),
    [anon_sym_BANG_f32] = ACTIONS(11),
    [anon_sym_BANG_chr] = ACTIONS(11),
    [anon_sym_BANG_str] = ACTIONS(11),
    [sym_macro_name] = ACTIONS(13),
    [sym_macro_block_def] = ACTIONS(15),
  },
  [6] = {
    [sym__statement] = STATE(52),
    [sym_label] = STATE(52),
    [sym_instruction] = STATE(52),
    [sym_awatism] = STATE(17),
    [sym_macro] = STATE(52),
    [sym_builtin_macro_name] = STATE(16),
    [sym_macro_block] = STATE(52),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(41),
    [sym_comment] = ACTIONS(19),
    [anon_sym_lbl] = ACTIONS(43),
    [anon_sym_nop] = ACTIONS(45),
    [anon_sym_prn] = ACTIONS(45),
    [anon_sym_pr1] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_r3d] = ACTIONS(45),
    [anon_sym_blo] = ACTIONS(45),
    [anon_sym_sbm] = ACTIONS(45),
    [anon_sym_pop] = ACTIONS(45),
    [anon_sym_dpl] = ACTIONS(45),
    [anon_sym_srn] = ACTIONS(45),
    [anon_sym_mrg] = ACTIONS(45),
    [anon_sym_4dd] = ACTIONS(45),
    [anon_sym_sub] = ACTIONS(45),
    [anon_sym_mul] = ACTIONS(45),
    [anon_sym_div] = ACTIONS(45),
    [anon_sym_cnt] = ACTIONS(45),
    [anon_sym_jmp] = ACTIONS(45),
    [anon_sym_eql] = ACTIONS(45),
    [anon_sym_lss] = ACTIONS(45),
    [anon_sym_gr8] = ACTIONS(45),
    [anon_sym_lib] = ACTIONS(45),
    [anon_sym_trm] = ACTIONS(45),
    [anon_sym_BANGonce] = ACTIONS(11),
    [anon_sym_BANGinclude] = ACTIONS(11),
    [anon_sym_BANGi32] = ACTIONS(11),
    [anon_sym_BANGf32] = ACTIONS(11),
    [anon_sym_BANGchr] = ACTIONS(11),
    [anon_sym_BANGstr] = ACTIONS(11),
    [anon_sym_BANG_i32] = ACTIONS(11),
    [anon_sym_BANG_f32] = ACTIONS(11),
    [anon_sym_BANG_chr] = ACTIONS(11),
    [anon_sym_BANG_str] = ACTIONS(11),
    [sym_macro_name] = ACTIONS(13),
    [sym_macro_block_def] = ACTIONS(15),
  },
  [7] = {
    [sym__statement] = STATE(52),
    [sym_label] = STATE(52),
    [sym_instruction] = STATE(52),
    [sym_awatism] = STATE(17),
    [sym_macro] = STATE(52),
    [sym_builtin_macro_name] = STATE(16),
    [sym_macro_block] = STATE(52),
    [aux_sym_source_file_repeat1] = STATE(12),
    [anon_sym_LF] = ACTIONS(49),
    [sym_comment] = ACTIONS(19),
    [anon_sym_lbl] = ACTIONS(43),
    [anon_sym_nop] = ACTIONS(45),
    [anon_sym_prn] = ACTIONS(45),
    [anon_sym_pr1] = ACTIONS(45),
    [anon_sym_red] = ACTIONS(45),
    [anon_sym_r3d] = ACTIONS(45),
    [anon_sym_blo] = ACTIONS(45),
    [anon_sym_sbm] = ACTIONS(45),
    [anon_sym_pop] = ACTIONS(45),
    [anon_sym_dpl] = ACTIONS(45),
    [anon_sym_srn] = ACTIONS(45),
    [anon_sym_mrg] = ACTIONS(45),
    [anon_sym_4dd] = ACTIONS(45),
    [anon_sym_sub] = ACTIONS(45),
    [anon_sym_mul] = ACTIONS(45),
    [anon_sym_div] = ACTIONS(45),
    [anon_sym_cnt] = ACTIONS(45),
    [anon_sym_jmp] = ACTIONS(45),
    [anon_sym_eql] = ACTIONS(45),
    [anon_sym_lss] = ACTIONS(45),
    [anon_sym_gr8] = ACTIONS(45),
    [anon_sym_lib] = ACTIONS(45),
    [anon_sym_trm] = ACTIONS(45),
    [anon_sym_BANGonce] = ACTIONS(11),
    [anon_sym_BANGinclude] = ACTIONS(11),
    [anon_sym_BANGi32] = ACTIONS(11),
    [anon_sym_BANGf32] = ACTIONS(11),
    [anon_sym_BANGchr] = ACTIONS(11),
    [anon_sym_BANGstr] = ACTIONS(11),
    [anon_sym_BANG_i32] = ACTIONS(11),
    [anon_sym_BANG_f32] = ACTIONS(11),
    [anon_sym_BANG_chr] = ACTIONS(11),
    [anon_sym_BANG_str] = ACTIONS(11),
    [sym_macro_name] = ACTIONS(13),
    [sym_macro_block_def] = ACTIONS(15),
  },
  [8] = {
    [sym_label] = STATE(26),
    [sym_replacement_macro] = STATE(26),
    [sym_instruction] = STATE(26),
    [sym_awatism] = STATE(18),
    [sym_macro] = STATE(26),
    [sym_builtin_macro_name] = STATE(19),
    [sym__macro_block_statement] = STATE(26),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lbl] = ACTIONS(51),
    [sym_replacement_macro_name] = ACTIONS(53),
    [sym_replacement_var] = ACTIONS(55),
    [anon_sym_nop] = ACTIONS(57),
    [anon_sym_prn] = ACTIONS(57),
    [anon_sym_pr1] = ACTIONS(57),
    [anon_sym_red] = ACTIONS(57),
    [anon_sym_r3d] = ACTIONS(57),
    [anon_sym_blo] = ACTIONS(57),
    [anon_sym_sbm] = ACTIONS(57),
    [anon_sym_pop] = ACTIONS(57),
    [anon_sym_dpl] = ACTIONS(57),
    [anon_sym_srn] = ACTIONS(57),
    [anon_sym_mrg] = ACTIONS(57),
    [anon_sym_4dd] = ACTIONS(57),
    [anon_sym_sub] = ACTIONS(57),
    [anon_sym_mul] = ACTIONS(57),
    [anon_sym_div] = ACTIONS(57),
    [anon_sym_cnt] = ACTIONS(57),
    [anon_sym_jmp] = ACTIONS(57),
    [anon_sym_eql] = ACTIONS(57),
    [anon_sym_lss] = ACTIONS(57),
    [anon_sym_gr8] = ACTIONS(57),
    [anon_sym_lib] = ACTIONS(57),
    [anon_sym_trm] = ACTIONS(57),
    [anon_sym_BANGonce] = ACTIONS(29),
    [anon_sym_BANGinclude] = ACTIONS(29),
    [anon_sym_BANGi32] = ACTIONS(29),
    [anon_sym_BANGf32] = ACTIONS(29),
    [anon_sym_BANGchr] = ACTIONS(29),
    [anon_sym_BANGstr] = ACTIONS(29),
    [anon_sym_BANG_i32] = ACTIONS(29),
    [anon_sym_BANG_f32] = ACTIONS(29),
    [anon_sym_BANG_chr] = ACTIONS(29),
    [anon_sym_BANG_str] = ACTIONS(29),
    [sym_macro_name] = ACTIONS(31),
    [sym_macro_block_end] = ACTIONS(59),
  },
  [9] = {
    [aux_sym_source_file_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(61),
    [sym_comment] = ACTIONS(19),
    [anon_sym_lbl] = ACTIONS(64),
    [sym_replacement_macro_name] = ACTIONS(64),
    [sym_replacement_var] = ACTIONS(64),
    [anon_sym_nop] = ACTIONS(64),
    [anon_sym_prn] = ACTIONS(64),
    [anon_sym_pr1] = ACTIONS(64),
    [anon_sym_red] = ACTIONS(64),
    [anon_sym_r3d] = ACTIONS(64),
    [anon_sym_blo] = ACTIONS(64),
    [anon_sym_sbm] = ACTIONS(64),
    [anon_sym_pop] = ACTIONS(64),
    [anon_sym_dpl] = ACTIONS(64),
    [anon_sym_srn] = ACTIONS(64),
    [anon_sym_mrg] = ACTIONS(64),
    [anon_sym_4dd] = ACTIONS(64),
    [anon_sym_sub] = ACTIONS(64),
    [anon_sym_mul] = ACTIONS(64),
    [anon_sym_div] = ACTIONS(64),
    [anon_sym_cnt] = ACTIONS(64),
    [anon_sym_jmp] = ACTIONS(64),
    [anon_sym_eql] = ACTIONS(64),
    [anon_sym_lss] = ACTIONS(64),
    [anon_sym_gr8] = ACTIONS(64),
    [anon_sym_lib] = ACTIONS(64),
    [anon_sym_trm] = ACTIONS(64),
    [anon_sym_BANGonce] = ACTIONS(64),
    [anon_sym_BANGinclude] = ACTIONS(64),
    [anon_sym_BANGi32] = ACTIONS(64),
    [anon_sym_BANGf32] = ACTIONS(64),
    [anon_sym_BANGchr] = ACTIONS(64),
    [anon_sym_BANGstr] = ACTIONS(64),
    [anon_sym_BANG_i32] = ACTIONS(64),
    [anon_sym_BANG_f32] = ACTIONS(64),
    [anon_sym_BANG_chr] = ACTIONS(64),
    [anon_sym_BANG_str] = ACTIONS(64),
    [sym_macro_name] = ACTIONS(64),
    [sym_macro_block_end] = ACTIONS(64),
  },
  [10] = {
    [aux_sym_source_file_repeat1] = STATE(10),
    [anon_sym_LF] = ACTIONS(66),
    [sym_comment] = ACTIONS(19),
    [anon_sym_lbl] = ACTIONS(64),
    [sym_replacement_macro_name] = ACTIONS(64),
    [sym_replacement_var] = ACTIONS(64),
    [anon_sym_nop] = ACTIONS(64),
    [anon_sym_prn] = ACTIONS(64),
    [anon_sym_pr1] = ACTIONS(64),
    [anon_sym_red] = ACTIONS(64),
    [anon_sym_r3d] = ACTIONS(64),
    [anon_sym_blo] = ACTIONS(64),
    [anon_sym_sbm] = ACTIONS(64),
    [anon_sym_pop] = ACTIONS(64),
    [anon_sym_dpl] = ACTIONS(64),
    [anon_sym_srn] = ACTIONS(64),
    [anon_sym_mrg] = ACTIONS(64),
    [anon_sym_4dd] = ACTIONS(64),
    [anon_sym_sub] = ACTIONS(64),
    [anon_sym_mul] = ACTIONS(64),
    [anon_sym_div] = ACTIONS(64),
    [anon_sym_cnt] = ACTIONS(64),
    [anon_sym_jmp] = ACTIONS(64),
    [anon_sym_eql] = ACTIONS(64),
    [anon_sym_lss] = ACTIONS(64),
    [anon_sym_gr8] = ACTIONS(64),
    [anon_sym_lib] = ACTIONS(64),
    [anon_sym_trm] = ACTIONS(64),
    [anon_sym_BANGonce] = ACTIONS(64),
    [anon_sym_BANGinclude] = ACTIONS(64),
    [anon_sym_BANGi32] = ACTIONS(64),
    [anon_sym_BANGf32] = ACTIONS(64),
    [anon_sym_BANGchr] = ACTIONS(64),
    [anon_sym_BANGstr] = ACTIONS(64),
    [anon_sym_BANG_i32] = ACTIONS(64),
    [anon_sym_BANG_f32] = ACTIONS(64),
    [anon_sym_BANG_chr] = ACTIONS(64),
    [anon_sym_BANG_str] = ACTIONS(64),
    [sym_macro_name] = ACTIONS(64),
  },
  [11] = {
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(71),
    [sym_comment] = ACTIONS(19),
    [anon_sym_lbl] = ACTIONS(64),
    [anon_sym_nop] = ACTIONS(64),
    [anon_sym_prn] = ACTIONS(64),
    [anon_sym_pr1] = ACTIONS(64),
    [anon_sym_red] = ACTIONS(64),
    [anon_sym_r3d] = ACTIONS(64),
    [anon_sym_blo] = ACTIONS(64),
    [anon_sym_sbm] = ACTIONS(64),
    [anon_sym_pop] = ACTIONS(64),
    [anon_sym_dpl] = ACTIONS(64),
    [anon_sym_srn] = ACTIONS(64),
    [anon_sym_mrg] = ACTIONS(64),
    [anon_sym_4dd] = ACTIONS(64),
    [anon_sym_sub] = ACTIONS(64),
    [anon_sym_mul] = ACTIONS(64),
    [anon_sym_div] = ACTIONS(64),
    [anon_sym_cnt] = ACTIONS(64),
    [anon_sym_jmp] = ACTIONS(64),
    [anon_sym_eql] = ACTIONS(64),
    [anon_sym_lss] = ACTIONS(64),
    [anon_sym_gr8] = ACTIONS(64),
    [anon_sym_lib] = ACTIONS(64),
    [anon_sym_trm] = ACTIONS(64),
    [anon_sym_BANGonce] = ACTIONS(64),
    [anon_sym_BANGinclude] = ACTIONS(64),
    [anon_sym_BANGi32] = ACTIONS(64),
    [anon_sym_BANGf32] = ACTIONS(64),
    [anon_sym_BANGchr] = ACTIONS(64),
    [anon_sym_BANGstr] = ACTIONS(64),
    [anon_sym_BANG_i32] = ACTIONS(64),
    [anon_sym_BANG_f32] = ACTIONS(64),
    [anon_sym_BANG_chr] = ACTIONS(64),
    [anon_sym_BANG_str] = ACTIONS(64),
    [sym_macro_name] = ACTIONS(64),
    [sym_macro_block_def] = ACTIONS(64),
  },
  [12] = {
    [aux_sym_source_file_repeat1] = STATE(12),
    [anon_sym_LF] = ACTIONS(74),
    [sym_comment] = ACTIONS(19),
    [anon_sym_lbl] = ACTIONS(64),
    [anon_sym_nop] = ACTIONS(64),
    [anon_sym_prn] = ACTIONS(64),
    [anon_sym_pr1] = ACTIONS(64),
    [anon_sym_red] = ACTIONS(64),
    [anon_sym_r3d] = ACTIONS(64),
    [anon_sym_blo] = ACTIONS(64),
    [anon_sym_sbm] = ACTIONS(64),
    [anon_sym_pop] = ACTIONS(64),
    [anon_sym_dpl] = ACTIONS(64),
    [anon_sym_srn] = ACTIONS(64),
    [anon_sym_mrg] = ACTIONS(64),
    [anon_sym_4dd] = ACTIONS(64),
    [anon_sym_sub] = ACTIONS(64),
    [anon_sym_mul] = ACTIONS(64),
    [anon_sym_div] = ACTIONS(64),
    [anon_sym_cnt] = ACTIONS(64),
    [anon_sym_jmp] = ACTIONS(64),
    [anon_sym_eql] = ACTIONS(64),
    [anon_sym_lss] = ACTIONS(64),
    [anon_sym_gr8] = ACTIONS(64),
    [anon_sym_lib] = ACTIONS(64),
    [anon_sym_trm] = ACTIONS(64),
    [anon_sym_BANGonce] = ACTIONS(64),
    [anon_sym_BANGinclude] = ACTIONS(64),
    [anon_sym_BANGi32] = ACTIONS(64),
    [anon_sym_BANGf32] = ACTIONS(64),
    [anon_sym_BANGchr] = ACTIONS(64),
    [anon_sym_BANGstr] = ACTIONS(64),
    [anon_sym_BANG_i32] = ACTIONS(64),
    [anon_sym_BANG_f32] = ACTIONS(64),
    [anon_sym_BANG_chr] = ACTIONS(64),
    [anon_sym_BANG_str] = ACTIONS(64),
    [sym_macro_name] = ACTIONS(64),
    [sym_macro_block_def] = ACTIONS(64),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_text_token1,
    ACTIONS(83), 1,
      anon_sym_LT,
    STATE(34), 1,
      sym_value,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(46), 2,
      sym_text,
      sym_path,
    ACTIONS(81), 7,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [33] = 9,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LF,
    ACTIONS(85), 1,
      aux_sym_text_token1,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      sym_macro_block_end,
    STATE(32), 1,
      sym_value,
    STATE(47), 1,
      sym_argument_list,
    STATE(43), 2,
      sym_text,
      sym_path,
    ACTIONS(87), 7,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [68] = 9,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_text_token1,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(93), 1,
      anon_sym_LF,
    ACTIONS(95), 1,
      sym_macro_block_end,
    STATE(32), 1,
      sym_value,
    STATE(55), 1,
      sym_argument_list,
    STATE(43), 2,
      sym_text,
      sym_path,
    ACTIONS(87), 7,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [103] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_text_token1,
    ACTIONS(83), 1,
      anon_sym_LT,
    STATE(53), 1,
      sym_value,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(46), 2,
      sym_text,
      sym_path,
    ACTIONS(81), 7,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [133] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_text_token1,
    ACTIONS(83), 1,
      anon_sym_LT,
    STATE(49), 1,
      sym_value,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(46), 2,
      sym_text,
      sym_path,
    ACTIONS(81), 7,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [163] = 8,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_text_token1,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(97), 1,
      anon_sym_LF,
    ACTIONS(99), 1,
      sym_macro_block_end,
    STATE(63), 1,
      sym_value,
    STATE(43), 2,
      sym_text,
      sym_path,
    ACTIONS(87), 7,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [195] = 8,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LF,
    ACTIONS(85), 1,
      aux_sym_text_token1,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      sym_macro_block_end,
    STATE(47), 1,
      sym_value,
    STATE(43), 2,
      sym_text,
      sym_path,
    ACTIONS(87), 7,
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
    ACTIONS(85), 1,
      aux_sym_text_token1,
    ACTIONS(87), 1,
      sym_number,
    ACTIONS(103), 1,
      anon_sym_LT,
    STATE(41), 1,
      sym_value,
    STATE(43), 2,
      sym_text,
      sym_path,
    ACTIONS(101), 6,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_float,
      sym_replacement_var,
  [255] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_text_token1,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(107), 1,
      anon_sym_LT,
    STATE(40), 1,
      sym_value,
    STATE(46), 2,
      sym_text,
      sym_path,
    ACTIONS(105), 6,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_float,
      sym_replacement_var,
  [283] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LF,
    ACTIONS(111), 10,
      aux_sym_text_token1,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      anon_sym_LT,
      sym_number,
      sym_float,
      sym_replacement_var,
      sym_macro_block_end,
  [302] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(115), 9,
      aux_sym_text_token1,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      anon_sym_LT,
      sym_number,
      sym_float,
      sym_replacement_var,
  [321] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_LF,
    ACTIONS(115), 10,
      aux_sym_text_token1,
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
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(111), 9,
      aux_sym_text_token1,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      anon_sym_LT,
      sym_number,
      sym_float,
      sym_replacement_var,
  [359] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LF,
    ACTIONS(119), 1,
      sym_macro_block_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(37), 1,
      aux_sym_macro_block_repeat1,
  [375] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [389] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LF,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      sym_macro_block_end,
    STATE(28), 1,
      aux_sym_argument_list_repeat1,
  [405] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      anon_sym_LF,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(29), 1,
      aux_sym_source_file_repeat2,
  [421] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [435] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LF,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      sym_macro_block_end,
    STATE(28), 1,
      aux_sym_argument_list_repeat1,
  [451] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_LF,
    ACTIONS(146), 1,
      sym_macro_block_end,
    STATE(31), 1,
      aux_sym_argument_list_repeat1,
  [467] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(35), 1,
      aux_sym_source_file_repeat2,
  [483] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [497] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(29), 1,
      aux_sym_source_file_repeat2,
  [513] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      sym_macro_block_end,
    STATE(4), 1,
      aux_sym_source_file_repeat1,
    STATE(36), 1,
      aux_sym_macro_block_repeat1,
  [529] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_macro_block_end,
    ACTIONS(159), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(36), 1,
      aux_sym_macro_block_repeat1,
  [545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym_text_token1,
    STATE(60), 1,
      sym_parameter,
    STATE(68), 1,
      sym_parameter_list,
  [558] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [569] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [580] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LF,
    ACTIONS(130), 2,
      anon_sym_COMMA,
      sym_macro_block_end,
  [591] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      sym_macro_block_end,
  [602] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LF,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      sym_macro_block_end,
  [613] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LF,
    ACTIONS(173), 2,
      anon_sym_COMMA,
      sym_macro_block_end,
  [624] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [635] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [646] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LF,
    ACTIONS(177), 1,
      sym_macro_block_end,
  [656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_text_token1,
    STATE(66), 1,
      sym_macro_block_name,
  [666] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [674] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [682] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [690] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [698] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [706] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [714] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LF,
    ACTIONS(191), 1,
      sym_macro_block_end,
  [724] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [740] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LF,
    ACTIONS(197), 1,
      sym_macro_block_end,
  [750] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
  [768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym_text_token1,
    STATE(69), 1,
      sym_parameter,
  [778] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_macro_block_end,
    ACTIONS(205), 1,
      anon_sym_LF,
  [788] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LF,
    ACTIONS(207), 1,
      sym_macro_block_end,
  [798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
  [805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_number,
  [812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
  [819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
  [826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
  [833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
  [840] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_path_content,
  [847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_GT,
  [854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_number,
  [861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_GT,
  [868] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_path_content,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 33,
  [SMALL_STATE(15)] = 68,
  [SMALL_STATE(16)] = 103,
  [SMALL_STATE(17)] = 133,
  [SMALL_STATE(18)] = 163,
  [SMALL_STATE(19)] = 195,
  [SMALL_STATE(20)] = 227,
  [SMALL_STATE(21)] = 255,
  [SMALL_STATE(22)] = 283,
  [SMALL_STATE(23)] = 302,
  [SMALL_STATE(24)] = 321,
  [SMALL_STATE(25)] = 340,
  [SMALL_STATE(26)] = 359,
  [SMALL_STATE(27)] = 375,
  [SMALL_STATE(28)] = 389,
  [SMALL_STATE(29)] = 405,
  [SMALL_STATE(30)] = 421,
  [SMALL_STATE(31)] = 435,
  [SMALL_STATE(32)] = 451,
  [SMALL_STATE(33)] = 467,
  [SMALL_STATE(34)] = 483,
  [SMALL_STATE(35)] = 497,
  [SMALL_STATE(36)] = 513,
  [SMALL_STATE(37)] = 529,
  [SMALL_STATE(38)] = 545,
  [SMALL_STATE(39)] = 558,
  [SMALL_STATE(40)] = 569,
  [SMALL_STATE(41)] = 580,
  [SMALL_STATE(42)] = 591,
  [SMALL_STATE(43)] = 602,
  [SMALL_STATE(44)] = 613,
  [SMALL_STATE(45)] = 624,
  [SMALL_STATE(46)] = 635,
  [SMALL_STATE(47)] = 646,
  [SMALL_STATE(48)] = 656,
  [SMALL_STATE(49)] = 666,
  [SMALL_STATE(50)] = 674,
  [SMALL_STATE(51)] = 682,
  [SMALL_STATE(52)] = 690,
  [SMALL_STATE(53)] = 698,
  [SMALL_STATE(54)] = 706,
  [SMALL_STATE(55)] = 714,
  [SMALL_STATE(56)] = 724,
  [SMALL_STATE(57)] = 732,
  [SMALL_STATE(58)] = 740,
  [SMALL_STATE(59)] = 750,
  [SMALL_STATE(60)] = 758,
  [SMALL_STATE(61)] = 768,
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
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 1, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement_macro, 1, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement_macro, 1, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_awatism, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_awatism, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_macro_name, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_macro_name, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(20),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(7),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(21),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_block_repeat1, 2), SHIFT_REPEAT(4),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_block_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 2, .production_id = 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 2, .production_id = 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block, 8),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block, 9),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block, 7),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement_macro, 2, .production_id = 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement_macro, 2, .production_id = 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block, 6),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_block_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, .production_id = 2),
  [209] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block_name, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
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

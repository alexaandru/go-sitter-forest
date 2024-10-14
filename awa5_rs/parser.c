#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_comment = 2,
  anon_sym_lbl = 3,
  anon_sym_COLON = 4,
  sym_label_name = 5,
  aux_sym_text_token1 = 6,
  sym_ascii_string = 7,
  sym_awascii_string = 8,
  sym_ascii_char = 9,
  sym_awascii_char = 10,
  anon_sym_LT = 11,
  anon_sym_GT = 12,
  sym_path_content = 13,
  sym_number = 14,
  sym_float = 15,
  sym_replacement_macro_name = 16,
  sym_replacement_var = 17,
  anon_sym_nop = 18,
  anon_sym_prn = 19,
  anon_sym_pr1 = 20,
  anon_sym_red = 21,
  anon_sym_r3d = 22,
  anon_sym_blo = 23,
  anon_sym_sbm = 24,
  anon_sym_pop = 25,
  anon_sym_dpl = 26,
  anon_sym_srn = 27,
  anon_sym_mrg = 28,
  anon_sym_4dd = 29,
  anon_sym_sub = 30,
  anon_sym_mul = 31,
  anon_sym_div = 32,
  anon_sym_cnt = 33,
  anon_sym_jmp = 34,
  anon_sym_eql = 35,
  anon_sym_lss = 36,
  anon_sym_gr8 = 37,
  anon_sym_lib = 38,
  anon_sym_jro = 39,
  anon_sym_call = 40,
  anon_sym_ret = 41,
  anon_sym_trm = 42,
  anon_sym_COMMA = 43,
  anon_sym_BANGonce = 44,
  anon_sym_BANGinclude = 45,
  anon_sym_BANGi32 = 46,
  anon_sym_BANGf32 = 47,
  anon_sym_BANGchr = 48,
  anon_sym_BANGstr = 49,
  anon_sym_BANG_i32 = 50,
  anon_sym_BANG_f32 = 51,
  anon_sym_BANG_chr = 52,
  anon_sym_BANG_str = 53,
  sym_macro_name = 54,
  anon_sym_LPAREN = 55,
  anon_sym_RPAREN = 56,
  sym_macro_block_def = 57,
  sym_macro_block_end = 58,
  sym_source_file = 59,
  sym__statement = 60,
  sym_label = 61,
  sym_value = 62,
  sym_text = 63,
  sym_path = 64,
  sym_replacement_macro = 65,
  sym_instruction = 66,
  sym_awatism = 67,
  sym_macro = 68,
  sym_argument_list = 69,
  sym_builtin_macro_name = 70,
  sym_macro_block = 71,
  sym_macro_block_name = 72,
  sym_parameter_list = 73,
  sym_parameter = 74,
  sym__macro_block_statement = 75,
  aux_sym_source_file_repeat1 = 76,
  aux_sym_source_file_repeat2 = 77,
  aux_sym_argument_list_repeat1 = 78,
  aux_sym_macro_block_repeat1 = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_lbl] = "lbl",
  [anon_sym_COLON] = ":",
  [sym_label_name] = "label_name",
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
  [anon_sym_jro] = "jro",
  [anon_sym_call] = "call",
  [anon_sym_ret] = "ret",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_label_name] = sym_label_name,
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
  [anon_sym_jro] = anon_sym_jro,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_ret] = anon_sym_ret,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_label_name] = {
    .visible = true,
    .named = true,
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
  [anon_sym_jro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ret] = {
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
  [14] = 14,
  [15] = 14,
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
  [29] = 26,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 33,
  [36] = 36,
  [37] = 36,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 38,
  [43] = 43,
  [44] = 39,
  [45] = 41,
  [46] = 40,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 54,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 57,
  [61] = 61,
  [62] = 55,
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
  [73] = 66,
  [74] = 67,
  [75] = 64,
  [76] = 65,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '!', 6,
        '"', 4,
        '$', 21,
        '\'', 9,
        '(', 156,
        ')', 157,
        ',', 115,
        '.', 20,
        '4', 85,
        ':', 36,
        ';', 34,
        '<', 81,
        '>', 82,
        'a', 37,
        'b', 55,
        'c', 41,
        'd', 49,
        'e', 68,
        'g', 69,
        'j', 57,
        'l', 45,
        'm', 70,
        'n', 63,
        'p', 64,
        'r', 39,
        's', 42,
        't', 71,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 32,
        '!', 8,
        '$', 21,
        '.', 20,
        '4', 14,
        ';', 34,
        'b', 55,
        'c', 41,
        'd', 49,
        'e', 68,
        'g', 69,
        'j', 57,
        'l', 45,
        'm', 70,
        'n', 63,
        'p', 64,
        'r', 39,
        's', 42,
        't', 71,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 7,
        '$', 21,
        '.', 20,
        '4', 14,
        ';', 34,
        'b', 55,
        'c', 41,
        'd', 49,
        'e', 68,
        'g', 69,
        'j', 57,
        'l', 45,
        'm', 70,
        'n', 63,
        'p', 64,
        'r', 39,
        's', 42,
        't', 71,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '$', 22,
        '_', 136,
        'c', 143,
        'd', 139,
        'e', 146,
        'f', 130,
        'i', 131,
        'o', 147,
        's', 152,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '$', 22,
        '_', 136,
        'c', 143,
        'e', 146,
        'f', 130,
        'i', 131,
        'o', 147,
        's', 152,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '_') ADVANCE(136);
      if (lookahead == 'c') ADVANCE(143);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead == 's') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == ';') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 12:
      if (lookahead == ';') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(84);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(136);
      if (lookahead == 'c') ADVANCE(143);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead == 's') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 20:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 21:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 22:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 24:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 27:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '\n', 32,
        '!', 13,
        '.', 20,
        '4', 14,
        ';', 34,
        'b', 55,
        'c', 41,
        'd', 49,
        'e', 68,
        'g', 69,
        'j', 57,
        'l', 45,
        'm', 70,
        'n', 63,
        'p', 64,
        'r', 39,
        's', 42,
        't', 71,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 28:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '\n', 32,
        '!', 7,
        '$', 21,
        ',', 115,
        '.', 20,
        '4', 14,
        ';', 34,
        'b', 55,
        'c', 41,
        'd', 49,
        'e', 68,
        'g', 69,
        'j', 57,
        'l', 45,
        'm', 70,
        'n', 63,
        'p', 64,
        'r', 39,
        's', 42,
        't', 71,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 29:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '\n', 32,
        '!', 17,
        '"', 4,
        '$', 21,
        '\'', 9,
        '.', 20,
        ';', 34,
        '<', 81,
        'a', 37,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '!', 13,
        '.', 20,
        '4', 14,
        ';', 34,
        'b', 55,
        'c', 41,
        'd', 49,
        'e', 68,
        'g', 69,
        'j', 57,
        'l', 45,
        'm', 70,
        'n', 63,
        'p', 64,
        'r', 39,
        's', 42,
        't', 71,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(34);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_lbl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == '1') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == '3') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == '8') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'b') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'b') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'b') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 's') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'd') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'g') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'l') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'l') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'l') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'l') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'l') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'l') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'l') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'm') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'm') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'n') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'o') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'o') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'o') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'p') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'p') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'p') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'q') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'r') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'r') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 's') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 't') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead == 'v') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_label_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_ascii_string);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_awascii_string);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_ascii_char);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_awascii_char);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_path_content);
      if (lookahead == ';') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_path_content);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_replacement_macro_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_replacement_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_nop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_prn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_pr1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_red);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_r3d);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_blo);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_sbm);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_pop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_dpl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_srn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_mrg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_4dd);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_sub);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_mul);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_div);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_cnt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_jmp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_eql);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_lss);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_gr8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_lib);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_jro);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_ret);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_trm);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_BANGonce);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_BANGinclude);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_BANGi32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_BANGf32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_BANGchr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_BANGstr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_BANG_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_BANG_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_BANG_chr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_BANG_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '2') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '2') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '2') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '2') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '3') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '3') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '3') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '3') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 's') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'f') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'h') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'h') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'u') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_macro_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_macro_block_def);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_macro_block_end);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_macro_block_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 27},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 29},
  [17] = {.lex_state = 29},
  [18] = {.lex_state = 29},
  [19] = {.lex_state = 29},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 29},
  [23] = {.lex_state = 29},
  [24] = {.lex_state = 29},
  [25] = {.lex_state = 29},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 28},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 28},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 28},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 28},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 28},
  [41] = {.lex_state = 28},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 28},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 28},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 28},
  [51] = {.lex_state = 28},
  [52] = {.lex_state = 28},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 28},
  [55] = {.lex_state = 28},
  [56] = {.lex_state = 28},
  [57] = {.lex_state = 28},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 28},
  [61] = {.lex_state = 28},
  [62] = {.lex_state = 28},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 12},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lbl] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_label_name] = ACTIONS(1),
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
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_ret] = ACTIONS(1),
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
    [sym_source_file] = STATE(70),
    [sym__statement] = STATE(27),
    [sym_label] = STATE(27),
    [sym_instruction] = STATE(27),
    [sym_awatism] = STATE(16),
    [sym_macro] = STATE(27),
    [sym_builtin_macro_name] = STATE(17),
    [sym_macro_block] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lbl] = ACTIONS(7),
    [sym_label_name] = ACTIONS(9),
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
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_ret] = ACTIONS(11),
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
    [sym_label] = STATE(51),
    [sym_replacement_macro] = STATE(51),
    [sym_instruction] = STATE(51),
    [sym_awatism] = STATE(19),
    [sym_macro] = STATE(51),
    [sym_builtin_macro_name] = STATE(18),
    [sym__macro_block_statement] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
    [anon_sym_lbl] = ACTIONS(25),
    [sym_label_name] = ACTIONS(27),
    [sym_replacement_macro_name] = ACTIONS(29),
    [sym_replacement_var] = ACTIONS(31),
    [anon_sym_nop] = ACTIONS(33),
    [anon_sym_prn] = ACTIONS(33),
    [anon_sym_pr1] = ACTIONS(33),
    [anon_sym_red] = ACTIONS(33),
    [anon_sym_r3d] = ACTIONS(33),
    [anon_sym_blo] = ACTIONS(33),
    [anon_sym_sbm] = ACTIONS(33),
    [anon_sym_pop] = ACTIONS(33),
    [anon_sym_dpl] = ACTIONS(33),
    [anon_sym_srn] = ACTIONS(33),
    [anon_sym_mrg] = ACTIONS(33),
    [anon_sym_4dd] = ACTIONS(33),
    [anon_sym_sub] = ACTIONS(33),
    [anon_sym_mul] = ACTIONS(33),
    [anon_sym_div] = ACTIONS(33),
    [anon_sym_cnt] = ACTIONS(33),
    [anon_sym_jmp] = ACTIONS(33),
    [anon_sym_eql] = ACTIONS(33),
    [anon_sym_lss] = ACTIONS(33),
    [anon_sym_gr8] = ACTIONS(33),
    [anon_sym_lib] = ACTIONS(33),
    [anon_sym_jro] = ACTIONS(33),
    [anon_sym_call] = ACTIONS(33),
    [anon_sym_ret] = ACTIONS(33),
    [anon_sym_trm] = ACTIONS(33),
    [anon_sym_BANGonce] = ACTIONS(35),
    [anon_sym_BANGinclude] = ACTIONS(35),
    [anon_sym_BANGi32] = ACTIONS(35),
    [anon_sym_BANGf32] = ACTIONS(35),
    [anon_sym_BANGchr] = ACTIONS(35),
    [anon_sym_BANGstr] = ACTIONS(35),
    [anon_sym_BANG_i32] = ACTIONS(35),
    [anon_sym_BANG_f32] = ACTIONS(35),
    [anon_sym_BANG_chr] = ACTIONS(35),
    [anon_sym_BANG_str] = ACTIONS(35),
    [sym_macro_name] = ACTIONS(37),
    [sym_macro_block_end] = ACTIONS(39),
  },
  [3] = {
    [sym_label] = STATE(51),
    [sym_replacement_macro] = STATE(51),
    [sym_instruction] = STATE(51),
    [sym_awatism] = STATE(19),
    [sym_macro] = STATE(51),
    [sym_builtin_macro_name] = STATE(18),
    [sym__macro_block_statement] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
    [anon_sym_lbl] = ACTIONS(25),
    [sym_label_name] = ACTIONS(27),
    [sym_replacement_macro_name] = ACTIONS(29),
    [sym_replacement_var] = ACTIONS(31),
    [anon_sym_nop] = ACTIONS(33),
    [anon_sym_prn] = ACTIONS(33),
    [anon_sym_pr1] = ACTIONS(33),
    [anon_sym_red] = ACTIONS(33),
    [anon_sym_r3d] = ACTIONS(33),
    [anon_sym_blo] = ACTIONS(33),
    [anon_sym_sbm] = ACTIONS(33),
    [anon_sym_pop] = ACTIONS(33),
    [anon_sym_dpl] = ACTIONS(33),
    [anon_sym_srn] = ACTIONS(33),
    [anon_sym_mrg] = ACTIONS(33),
    [anon_sym_4dd] = ACTIONS(33),
    [anon_sym_sub] = ACTIONS(33),
    [anon_sym_mul] = ACTIONS(33),
    [anon_sym_div] = ACTIONS(33),
    [anon_sym_cnt] = ACTIONS(33),
    [anon_sym_jmp] = ACTIONS(33),
    [anon_sym_eql] = ACTIONS(33),
    [anon_sym_lss] = ACTIONS(33),
    [anon_sym_gr8] = ACTIONS(33),
    [anon_sym_lib] = ACTIONS(33),
    [anon_sym_jro] = ACTIONS(33),
    [anon_sym_call] = ACTIONS(33),
    [anon_sym_ret] = ACTIONS(33),
    [anon_sym_trm] = ACTIONS(33),
    [anon_sym_BANGonce] = ACTIONS(35),
    [anon_sym_BANGinclude] = ACTIONS(35),
    [anon_sym_BANGi32] = ACTIONS(35),
    [anon_sym_BANGf32] = ACTIONS(35),
    [anon_sym_BANGchr] = ACTIONS(35),
    [anon_sym_BANGstr] = ACTIONS(35),
    [anon_sym_BANG_i32] = ACTIONS(35),
    [anon_sym_BANG_f32] = ACTIONS(35),
    [anon_sym_BANG_chr] = ACTIONS(35),
    [anon_sym_BANG_str] = ACTIONS(35),
    [sym_macro_name] = ACTIONS(37),
    [sym_macro_block_end] = ACTIONS(41),
  },
  [4] = {
    [sym__statement] = STATE(61),
    [sym_label] = STATE(61),
    [sym_instruction] = STATE(61),
    [sym_awatism] = STATE(16),
    [sym_macro] = STATE(61),
    [sym_builtin_macro_name] = STATE(17),
    [sym_macro_block] = STATE(61),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_LF] = ACTIONS(45),
    [sym_comment] = ACTIONS(23),
    [anon_sym_lbl] = ACTIONS(7),
    [sym_label_name] = ACTIONS(9),
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
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_ret] = ACTIONS(11),
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
    [sym__statement] = STATE(61),
    [sym_label] = STATE(61),
    [sym_instruction] = STATE(61),
    [sym_awatism] = STATE(16),
    [sym_macro] = STATE(61),
    [sym_builtin_macro_name] = STATE(17),
    [sym_macro_block] = STATE(61),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(45),
    [sym_comment] = ACTIONS(23),
    [anon_sym_lbl] = ACTIONS(7),
    [sym_label_name] = ACTIONS(9),
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
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_ret] = ACTIONS(11),
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
  [6] = {
    [sym_label] = STATE(51),
    [sym_replacement_macro] = STATE(51),
    [sym_instruction] = STATE(51),
    [sym_awatism] = STATE(19),
    [sym_macro] = STATE(51),
    [sym_builtin_macro_name] = STATE(18),
    [sym__macro_block_statement] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(11),
    [anon_sym_LF] = ACTIONS(49),
    [sym_comment] = ACTIONS(23),
    [anon_sym_lbl] = ACTIONS(25),
    [sym_label_name] = ACTIONS(27),
    [sym_replacement_macro_name] = ACTIONS(29),
    [sym_replacement_var] = ACTIONS(31),
    [anon_sym_nop] = ACTIONS(33),
    [anon_sym_prn] = ACTIONS(33),
    [anon_sym_pr1] = ACTIONS(33),
    [anon_sym_red] = ACTIONS(33),
    [anon_sym_r3d] = ACTIONS(33),
    [anon_sym_blo] = ACTIONS(33),
    [anon_sym_sbm] = ACTIONS(33),
    [anon_sym_pop] = ACTIONS(33),
    [anon_sym_dpl] = ACTIONS(33),
    [anon_sym_srn] = ACTIONS(33),
    [anon_sym_mrg] = ACTIONS(33),
    [anon_sym_4dd] = ACTIONS(33),
    [anon_sym_sub] = ACTIONS(33),
    [anon_sym_mul] = ACTIONS(33),
    [anon_sym_div] = ACTIONS(33),
    [anon_sym_cnt] = ACTIONS(33),
    [anon_sym_jmp] = ACTIONS(33),
    [anon_sym_eql] = ACTIONS(33),
    [anon_sym_lss] = ACTIONS(33),
    [anon_sym_gr8] = ACTIONS(33),
    [anon_sym_lib] = ACTIONS(33),
    [anon_sym_jro] = ACTIONS(33),
    [anon_sym_call] = ACTIONS(33),
    [anon_sym_ret] = ACTIONS(33),
    [anon_sym_trm] = ACTIONS(33),
    [anon_sym_BANGonce] = ACTIONS(35),
    [anon_sym_BANGinclude] = ACTIONS(35),
    [anon_sym_BANGi32] = ACTIONS(35),
    [anon_sym_BANGf32] = ACTIONS(35),
    [anon_sym_BANGchr] = ACTIONS(35),
    [anon_sym_BANGstr] = ACTIONS(35),
    [anon_sym_BANG_i32] = ACTIONS(35),
    [anon_sym_BANG_f32] = ACTIONS(35),
    [anon_sym_BANG_chr] = ACTIONS(35),
    [anon_sym_BANG_str] = ACTIONS(35),
    [sym_macro_name] = ACTIONS(37),
  },
  [7] = {
    [sym__statement] = STATE(61),
    [sym_label] = STATE(61),
    [sym_instruction] = STATE(61),
    [sym_awatism] = STATE(16),
    [sym_macro] = STATE(61),
    [sym_builtin_macro_name] = STATE(17),
    [sym_macro_block] = STATE(61),
    [aux_sym_source_file_repeat1] = STATE(12),
    [anon_sym_LF] = ACTIONS(51),
    [sym_comment] = ACTIONS(23),
    [anon_sym_lbl] = ACTIONS(7),
    [sym_label_name] = ACTIONS(9),
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
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_ret] = ACTIONS(11),
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
  [8] = {
    [sym_label] = STATE(30),
    [sym_replacement_macro] = STATE(30),
    [sym_instruction] = STATE(30),
    [sym_awatism] = STATE(19),
    [sym_macro] = STATE(30),
    [sym_builtin_macro_name] = STATE(18),
    [sym__macro_block_statement] = STATE(30),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lbl] = ACTIONS(25),
    [sym_label_name] = ACTIONS(27),
    [sym_replacement_macro_name] = ACTIONS(53),
    [sym_replacement_var] = ACTIONS(55),
    [anon_sym_nop] = ACTIONS(33),
    [anon_sym_prn] = ACTIONS(33),
    [anon_sym_pr1] = ACTIONS(33),
    [anon_sym_red] = ACTIONS(33),
    [anon_sym_r3d] = ACTIONS(33),
    [anon_sym_blo] = ACTIONS(33),
    [anon_sym_sbm] = ACTIONS(33),
    [anon_sym_pop] = ACTIONS(33),
    [anon_sym_dpl] = ACTIONS(33),
    [anon_sym_srn] = ACTIONS(33),
    [anon_sym_mrg] = ACTIONS(33),
    [anon_sym_4dd] = ACTIONS(57),
    [anon_sym_sub] = ACTIONS(33),
    [anon_sym_mul] = ACTIONS(33),
    [anon_sym_div] = ACTIONS(33),
    [anon_sym_cnt] = ACTIONS(33),
    [anon_sym_jmp] = ACTIONS(33),
    [anon_sym_eql] = ACTIONS(33),
    [anon_sym_lss] = ACTIONS(33),
    [anon_sym_gr8] = ACTIONS(33),
    [anon_sym_lib] = ACTIONS(33),
    [anon_sym_jro] = ACTIONS(33),
    [anon_sym_call] = ACTIONS(33),
    [anon_sym_ret] = ACTIONS(33),
    [anon_sym_trm] = ACTIONS(33),
    [anon_sym_BANGonce] = ACTIONS(35),
    [anon_sym_BANGinclude] = ACTIONS(35),
    [anon_sym_BANGi32] = ACTIONS(35),
    [anon_sym_BANGf32] = ACTIONS(35),
    [anon_sym_BANGchr] = ACTIONS(35),
    [anon_sym_BANGstr] = ACTIONS(35),
    [anon_sym_BANG_i32] = ACTIONS(35),
    [anon_sym_BANG_f32] = ACTIONS(35),
    [anon_sym_BANG_chr] = ACTIONS(35),
    [anon_sym_BANG_str] = ACTIONS(35),
    [sym_macro_name] = ACTIONS(37),
    [sym_macro_block_end] = ACTIONS(59),
  },
  [9] = {
    [aux_sym_source_file_repeat1] = STATE(9),
    [anon_sym_LF] = ACTIONS(61),
    [sym_comment] = ACTIONS(23),
    [anon_sym_lbl] = ACTIONS(64),
    [sym_label_name] = ACTIONS(64),
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
    [anon_sym_jro] = ACTIONS(64),
    [anon_sym_call] = ACTIONS(64),
    [anon_sym_ret] = ACTIONS(64),
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
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_LF] = ACTIONS(68),
    [sym_comment] = ACTIONS(23),
    [anon_sym_lbl] = ACTIONS(64),
    [sym_label_name] = ACTIONS(64),
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
    [anon_sym_jro] = ACTIONS(64),
    [anon_sym_call] = ACTIONS(64),
    [anon_sym_ret] = ACTIONS(64),
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
  [11] = {
    [aux_sym_source_file_repeat1] = STATE(11),
    [anon_sym_LF] = ACTIONS(71),
    [sym_comment] = ACTIONS(23),
    [anon_sym_lbl] = ACTIONS(64),
    [sym_label_name] = ACTIONS(64),
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
    [anon_sym_jro] = ACTIONS(64),
    [anon_sym_call] = ACTIONS(64),
    [anon_sym_ret] = ACTIONS(64),
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
  [12] = {
    [aux_sym_source_file_repeat1] = STATE(12),
    [anon_sym_LF] = ACTIONS(74),
    [sym_comment] = ACTIONS(23),
    [anon_sym_lbl] = ACTIONS(64),
    [sym_label_name] = ACTIONS(64),
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
    [anon_sym_jro] = ACTIONS(64),
    [anon_sym_call] = ACTIONS(64),
    [anon_sym_ret] = ACTIONS(64),
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
  [0] = 9,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LF,
    ACTIONS(81), 1,
      aux_sym_text_token1,
    ACTIONS(83), 1,
      anon_sym_LT,
    ACTIONS(85), 1,
      sym_macro_block_end,
    STATE(35), 1,
      sym_value,
    STATE(49), 1,
      sym_argument_list,
    STATE(44), 2,
      sym_text,
      sym_path,
    ACTIONS(79), 8,
      sym_label_name,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [36] = 8,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_text_token1,
    ACTIONS(93), 1,
      anon_sym_LT,
    STATE(33), 1,
      sym_value,
    STATE(54), 1,
      sym_argument_list,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(39), 2,
      sym_text,
      sym_path,
    ACTIONS(89), 8,
      sym_label_name,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [70] = 9,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_text_token1,
    ACTIONS(83), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_LF,
    ACTIONS(95), 1,
      sym_macro_block_end,
    STATE(35), 1,
      sym_value,
    STATE(56), 1,
      sym_argument_list,
    STATE(44), 2,
      sym_text,
      sym_path,
    ACTIONS(79), 8,
      sym_label_name,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [106] = 7,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_text_token1,
    ACTIONS(93), 1,
      anon_sym_LT,
    STATE(60), 1,
      sym_value,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(39), 2,
      sym_text,
      sym_path,
    ACTIONS(89), 8,
      sym_label_name,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [137] = 7,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_text_token1,
    ACTIONS(93), 1,
      anon_sym_LT,
    STATE(54), 1,
      sym_value,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(39), 2,
      sym_text,
      sym_path,
    ACTIONS(89), 8,
      sym_label_name,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [168] = 8,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_text_token1,
    ACTIONS(83), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_LF,
    ACTIONS(95), 1,
      sym_macro_block_end,
    STATE(56), 1,
      sym_value,
    STATE(44), 2,
      sym_text,
      sym_path,
    ACTIONS(79), 8,
      sym_label_name,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [201] = 8,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_text_token1,
    ACTIONS(83), 1,
      anon_sym_LT,
    ACTIONS(97), 1,
      anon_sym_LF,
    ACTIONS(99), 1,
      sym_macro_block_end,
    STATE(57), 1,
      sym_value,
    STATE(44), 2,
      sym_text,
      sym_path,
    ACTIONS(79), 8,
      sym_label_name,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_number,
      sym_float,
      sym_replacement_var,
  [234] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_text_token1,
    ACTIONS(103), 1,
      anon_sym_LT,
    STATE(42), 1,
      sym_value,
    ACTIONS(89), 2,
      sym_label_name,
      sym_number,
    STATE(39), 2,
      sym_text,
      sym_path,
    ACTIONS(101), 6,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_float,
      sym_replacement_var,
  [263] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_text_token1,
    ACTIONS(107), 1,
      anon_sym_LT,
    STATE(38), 1,
      sym_value,
    ACTIONS(79), 2,
      sym_label_name,
      sym_number,
    STATE(44), 2,
      sym_text,
      sym_path,
    ACTIONS(105), 6,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      sym_float,
      sym_replacement_var,
  [292] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(111), 10,
      sym_label_name,
      aux_sym_text_token1,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      anon_sym_LT,
      sym_number,
      sym_float,
      sym_replacement_var,
  [312] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(115), 10,
      sym_label_name,
      aux_sym_text_token1,
      sym_ascii_string,
      sym_awascii_string,
      sym_ascii_char,
      sym_awascii_char,
      anon_sym_LT,
      sym_number,
      sym_float,
      sym_replacement_var,
  [332] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_LF,
    ACTIONS(115), 11,
      sym_label_name,
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
  [352] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LF,
    ACTIONS(111), 11,
      sym_label_name,
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
  [372] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LF,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(122), 1,
      sym_macro_block_end,
    STATE(26), 1,
      aux_sym_argument_list_repeat1,
  [388] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 1,
      anon_sym_LF,
    STATE(4), 1,
      aux_sym_source_file_repeat1,
    STATE(34), 1,
      aux_sym_source_file_repeat2,
  [404] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      anon_sym_LF,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(28), 1,
      aux_sym_source_file_repeat2,
  [420] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [434] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_LF,
    ACTIONS(138), 1,
      sym_macro_block_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(31), 1,
      aux_sym_macro_block_repeat1,
  [450] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_macro_block_end,
    ACTIONS(140), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(32), 1,
      aux_sym_macro_block_repeat1,
  [466] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LF,
    ACTIONS(145), 1,
      sym_macro_block_end,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(32), 1,
      aux_sym_macro_block_repeat1,
  [482] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [496] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(28), 1,
      aux_sym_source_file_repeat2,
  [512] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      sym_macro_block_end,
    STATE(36), 1,
      aux_sym_argument_list_repeat1,
  [528] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_LF,
    ACTIONS(159), 1,
      sym_macro_block_end,
    STATE(26), 1,
      aux_sym_argument_list_repeat1,
  [544] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [558] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LF,
    ACTIONS(122), 2,
      anon_sym_COMMA,
      sym_macro_block_end,
  [569] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [580] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [591] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [602] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [613] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym_text_token1,
    STATE(58), 1,
      sym_parameter,
    STATE(72), 1,
      sym_parameter_list,
  [626] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(163), 2,
      anon_sym_COMMA,
      sym_macro_block_end,
  [637] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LF,
    ACTIONS(171), 2,
      anon_sym_COMMA,
      sym_macro_block_end,
  [648] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      sym_macro_block_end,
  [659] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [667] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [675] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(181), 1,
      sym_macro_block_end,
  [685] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [693] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_macro_block_end,
    ACTIONS(185), 1,
      anon_sym_LF,
  [703] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [719] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [727] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LF,
    ACTIONS(195), 1,
      sym_macro_block_end,
  [737] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LF,
    ACTIONS(197), 1,
      sym_macro_block_end,
  [747] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LF,
    ACTIONS(201), 1,
      sym_macro_block_end,
  [757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
  [767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym_text_token1,
    STATE(71), 1,
      sym_parameter,
  [777] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [785] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [793] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      aux_sym_text_token1,
    STATE(69), 1,
      sym_macro_block_name,
  [811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_GT,
  [818] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_path_content,
  [825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_number,
  [832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_COLON,
  [839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
  [846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
  [853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
  [860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
  [867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
  [874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_number,
  [881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COLON,
  [888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_GT,
  [895] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_path_content,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 36,
  [SMALL_STATE(15)] = 70,
  [SMALL_STATE(16)] = 106,
  [SMALL_STATE(17)] = 137,
  [SMALL_STATE(18)] = 168,
  [SMALL_STATE(19)] = 201,
  [SMALL_STATE(20)] = 234,
  [SMALL_STATE(21)] = 263,
  [SMALL_STATE(22)] = 292,
  [SMALL_STATE(23)] = 312,
  [SMALL_STATE(24)] = 332,
  [SMALL_STATE(25)] = 352,
  [SMALL_STATE(26)] = 372,
  [SMALL_STATE(27)] = 388,
  [SMALL_STATE(28)] = 404,
  [SMALL_STATE(29)] = 420,
  [SMALL_STATE(30)] = 434,
  [SMALL_STATE(31)] = 450,
  [SMALL_STATE(32)] = 466,
  [SMALL_STATE(33)] = 482,
  [SMALL_STATE(34)] = 496,
  [SMALL_STATE(35)] = 512,
  [SMALL_STATE(36)] = 528,
  [SMALL_STATE(37)] = 544,
  [SMALL_STATE(38)] = 558,
  [SMALL_STATE(39)] = 569,
  [SMALL_STATE(40)] = 580,
  [SMALL_STATE(41)] = 591,
  [SMALL_STATE(42)] = 602,
  [SMALL_STATE(43)] = 613,
  [SMALL_STATE(44)] = 626,
  [SMALL_STATE(45)] = 637,
  [SMALL_STATE(46)] = 648,
  [SMALL_STATE(47)] = 659,
  [SMALL_STATE(48)] = 667,
  [SMALL_STATE(49)] = 675,
  [SMALL_STATE(50)] = 685,
  [SMALL_STATE(51)] = 693,
  [SMALL_STATE(52)] = 703,
  [SMALL_STATE(53)] = 711,
  [SMALL_STATE(54)] = 719,
  [SMALL_STATE(55)] = 727,
  [SMALL_STATE(56)] = 737,
  [SMALL_STATE(57)] = 747,
  [SMALL_STATE(58)] = 757,
  [SMALL_STATE(59)] = 767,
  [SMALL_STATE(60)] = 777,
  [SMALL_STATE(61)] = 785,
  [SMALL_STATE(62)] = 793,
  [SMALL_STATE(63)] = 801,
  [SMALL_STATE(64)] = 811,
  [SMALL_STATE(65)] = 818,
  [SMALL_STATE(66)] = 825,
  [SMALL_STATE(67)] = 832,
  [SMALL_STATE(68)] = 839,
  [SMALL_STATE(69)] = 846,
  [SMALL_STATE(70)] = 853,
  [SMALL_STATE(71)] = 860,
  [SMALL_STATE(72)] = 867,
  [SMALL_STATE(73)] = 874,
  [SMALL_STATE(74)] = 881,
  [SMALL_STATE(75)] = 888,
  [SMALL_STATE(76)] = 895,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement_macro, 1, 0, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement_macro, 1, 0, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1, 0, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 1, 0, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_macro_name, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_macro_name, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_awatism, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_awatism, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(7),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_block_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_block_repeat1, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block, 6, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block, 7, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement_macro, 2, 0, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement_macro, 2, 0, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block, 8, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_block_repeat1, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block, 9, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 2, 0, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 2, 0, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_block_name, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [219] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
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

TS_PUBLIC const TSLanguage *tree_sitter_awa5_rs(void) {
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

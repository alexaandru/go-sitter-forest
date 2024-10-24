#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 35
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_LPAREN = 1,
  anon_sym_and = 2,
  anon_sym_catch = 3,
  anon_sym_cond = 4,
  anon_sym_condition_DASHcase = 5,
  anon_sym_defconst = 6,
  anon_sym_defvar = 7,
  anon_sym_function = 8,
  anon_sym_if = 9,
  anon_sym_interactive = 10,
  anon_sym_lambda = 11,
  anon_sym_let = 12,
  anon_sym_let_STAR = 13,
  anon_sym_or = 14,
  anon_sym_prog1 = 15,
  anon_sym_prog2 = 16,
  anon_sym_progn = 17,
  anon_sym_quote = 18,
  anon_sym_save_DASHcurrent_DASHbuffer = 19,
  anon_sym_save_DASHexcursion = 20,
  anon_sym_save_DASHrestriction = 21,
  anon_sym_setq = 22,
  anon_sym_setq_DASHdefault = 23,
  anon_sym_unwind_DASHprotect = 24,
  anon_sym_while = 25,
  anon_sym_RPAREN = 26,
  anon_sym_defun = 27,
  anon_sym_defsubst = 28,
  anon_sym_defmacro = 29,
  aux_sym_float_token1 = 30,
  aux_sym_float_token2 = 31,
  aux_sym_float_token3 = 32,
  aux_sym_float_token4 = 33,
  aux_sym_float_token5 = 34,
  aux_sym_integer_token1 = 35,
  aux_sym_integer_token2 = 36,
  aux_sym_char_token1 = 37,
  aux_sym_char_token2 = 38,
  aux_sym_char_token3 = 39,
  aux_sym_char_token4 = 40,
  aux_sym_char_token5 = 41,
  aux_sym_char_token6 = 42,
  aux_sym_char_token7 = 43,
  aux_sym_char_token8 = 44,
  sym_string = 45,
  sym_byte_compiled_file_name = 46,
  anon_sym_nil = 47,
  anon_sym_t = 48,
  aux_sym_symbol_token1 = 49,
  aux_sym_symbol_token2 = 50,
  anon_sym_POUND_POUND = 51,
  anon_sym_POUND_SQUOTE = 52,
  anon_sym_SQUOTE = 53,
  anon_sym_BQUOTE = 54,
  anon_sym_COMMA_AT = 55,
  anon_sym_COMMA = 56,
  anon_sym_LBRACK = 57,
  anon_sym_RBRACK = 58,
  anon_sym_POUND_LBRACK = 59,
  anon_sym_POUND_LPAREN = 60,
  anon_sym_POUNDs_LPARENhash_DASHtable = 61,
  sym_comment = 62,
  sym_source_file = 63,
  sym__sexp = 64,
  sym_special_form = 65,
  sym_function_definition = 66,
  sym_macro_definition = 67,
  sym__atom = 68,
  sym_float = 69,
  sym_integer = 70,
  sym_char = 71,
  sym_symbol = 72,
  sym_quote = 73,
  sym_unquote_splice = 74,
  sym_unquote = 75,
  sym_list = 76,
  sym_vector = 77,
  sym_bytecode = 78,
  sym_string_text_properties = 79,
  sym_hash_table = 80,
  aux_sym_source_file_repeat1 = 81,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_and] = "and",
  [anon_sym_catch] = "catch",
  [anon_sym_cond] = "cond",
  [anon_sym_condition_DASHcase] = "condition-case",
  [anon_sym_defconst] = "defconst",
  [anon_sym_defvar] = "defvar",
  [anon_sym_function] = "function",
  [anon_sym_if] = "if",
  [anon_sym_interactive] = "interactive",
  [anon_sym_lambda] = "lambda",
  [anon_sym_let] = "let",
  [anon_sym_let_STAR] = "let*",
  [anon_sym_or] = "or",
  [anon_sym_prog1] = "prog1",
  [anon_sym_prog2] = "prog2",
  [anon_sym_progn] = "progn",
  [anon_sym_quote] = "quote",
  [anon_sym_save_DASHcurrent_DASHbuffer] = "save-current-buffer",
  [anon_sym_save_DASHexcursion] = "save-excursion",
  [anon_sym_save_DASHrestriction] = "save-restriction",
  [anon_sym_setq] = "setq",
  [anon_sym_setq_DASHdefault] = "setq-default",
  [anon_sym_unwind_DASHprotect] = "unwind-protect",
  [anon_sym_while] = "while",
  [anon_sym_RPAREN] = ")",
  [anon_sym_defun] = "defun",
  [anon_sym_defsubst] = "defsubst",
  [anon_sym_defmacro] = "defmacro",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [aux_sym_float_token3] = "float_token3",
  [aux_sym_float_token4] = "float_token4",
  [aux_sym_float_token5] = "float_token5",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_integer_token2] = "integer_token2",
  [aux_sym_char_token1] = "char_token1",
  [aux_sym_char_token2] = "char_token2",
  [aux_sym_char_token3] = "char_token3",
  [aux_sym_char_token4] = "char_token4",
  [aux_sym_char_token5] = "char_token5",
  [aux_sym_char_token6] = "char_token6",
  [aux_sym_char_token7] = "char_token7",
  [aux_sym_char_token8] = "char_token8",
  [sym_string] = "string",
  [sym_byte_compiled_file_name] = "byte_compiled_file_name",
  [anon_sym_nil] = "nil",
  [anon_sym_t] = "t",
  [aux_sym_symbol_token1] = "symbol_token1",
  [aux_sym_symbol_token2] = "symbol_token2",
  [anon_sym_POUND_POUND] = "##",
  [anon_sym_POUND_SQUOTE] = "#'",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA_AT] = ",@",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_POUND_LBRACK] = "#[",
  [anon_sym_POUND_LPAREN] = "#(",
  [anon_sym_POUNDs_LPARENhash_DASHtable] = "#s(hash-table",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__sexp] = "_sexp",
  [sym_special_form] = "special_form",
  [sym_function_definition] = "function_definition",
  [sym_macro_definition] = "macro_definition",
  [sym__atom] = "_atom",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [sym_char] = "char",
  [sym_symbol] = "symbol",
  [sym_quote] = "quote",
  [sym_unquote_splice] = "unquote_splice",
  [sym_unquote] = "unquote",
  [sym_list] = "list",
  [sym_vector] = "vector",
  [sym_bytecode] = "bytecode",
  [sym_string_text_properties] = "string_text_properties",
  [sym_hash_table] = "hash_table",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_cond] = anon_sym_cond,
  [anon_sym_condition_DASHcase] = anon_sym_condition_DASHcase,
  [anon_sym_defconst] = anon_sym_defconst,
  [anon_sym_defvar] = anon_sym_defvar,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_interactive] = anon_sym_interactive,
  [anon_sym_lambda] = anon_sym_lambda,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_let_STAR] = anon_sym_let_STAR,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_prog1] = anon_sym_prog1,
  [anon_sym_prog2] = anon_sym_prog2,
  [anon_sym_progn] = anon_sym_progn,
  [anon_sym_quote] = anon_sym_quote,
  [anon_sym_save_DASHcurrent_DASHbuffer] = anon_sym_save_DASHcurrent_DASHbuffer,
  [anon_sym_save_DASHexcursion] = anon_sym_save_DASHexcursion,
  [anon_sym_save_DASHrestriction] = anon_sym_save_DASHrestriction,
  [anon_sym_setq] = anon_sym_setq,
  [anon_sym_setq_DASHdefault] = anon_sym_setq_DASHdefault,
  [anon_sym_unwind_DASHprotect] = anon_sym_unwind_DASHprotect,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_defun] = anon_sym_defun,
  [anon_sym_defsubst] = anon_sym_defsubst,
  [anon_sym_defmacro] = anon_sym_defmacro,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [aux_sym_float_token3] = aux_sym_float_token3,
  [aux_sym_float_token4] = aux_sym_float_token4,
  [aux_sym_float_token5] = aux_sym_float_token5,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_integer_token2] = aux_sym_integer_token2,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [aux_sym_char_token2] = aux_sym_char_token2,
  [aux_sym_char_token3] = aux_sym_char_token3,
  [aux_sym_char_token4] = aux_sym_char_token4,
  [aux_sym_char_token5] = aux_sym_char_token5,
  [aux_sym_char_token6] = aux_sym_char_token6,
  [aux_sym_char_token7] = aux_sym_char_token7,
  [aux_sym_char_token8] = aux_sym_char_token8,
  [sym_string] = sym_string,
  [sym_byte_compiled_file_name] = sym_byte_compiled_file_name,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_t] = anon_sym_t,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [aux_sym_symbol_token2] = aux_sym_symbol_token2,
  [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
  [anon_sym_POUND_SQUOTE] = anon_sym_POUND_SQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA_AT] = anon_sym_COMMA_AT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_POUND_LBRACK] = anon_sym_POUND_LBRACK,
  [anon_sym_POUND_LPAREN] = anon_sym_POUND_LPAREN,
  [anon_sym_POUNDs_LPARENhash_DASHtable] = anon_sym_POUNDs_LPARENhash_DASHtable,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__sexp] = sym__sexp,
  [sym_special_form] = sym_special_form,
  [sym_function_definition] = sym_function_definition,
  [sym_macro_definition] = sym_macro_definition,
  [sym__atom] = sym__atom,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [sym_char] = sym_char,
  [sym_symbol] = sym_symbol,
  [sym_quote] = sym_quote,
  [sym_unquote_splice] = sym_unquote_splice,
  [sym_unquote] = sym_unquote,
  [sym_list] = sym_list,
  [sym_vector] = sym_vector,
  [sym_bytecode] = sym_bytecode,
  [sym_string_text_properties] = sym_string_text_properties,
  [sym_hash_table] = sym_hash_table,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_condition_DASHcase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defconst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defvar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interactive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lambda] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prog1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prog2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_progn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_save_DASHcurrent_DASHbuffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_save_DASHexcursion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_save_DASHrestriction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setq_DASHdefault] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unwind_DASHprotect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defsubst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defmacro] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token8] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_compiled_file_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbol_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDs_LPARENhash_DASHtable] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__sexp] = {
    .visible = false,
    .named = true,
  },
  [sym_special_form] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote_splice] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_bytecode] = {
    .visible = true,
    .named = true,
  },
  [sym_string_text_properties] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_table] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_docstring = 1,
  field_name = 2,
  field_parameters = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_docstring] = "docstring",
  [field_name] = "name",
  [field_parameters] = "parameters",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 2},
  [1] =
    {field_docstring, 3},
    {field_name, 2},
  [3] =
    {field_name, 2},
    {field_parameters, 3},
  [5] =
    {field_docstring, 4},
    {field_name, 2},
    {field_parameters, 3},
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
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
};

static TSCharacterRange aux_sym_symbol_token2_character_set_2[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'$', '&'}, {'*', '+'}, {'-', ':'}, {'<', 'Z'}, {'\\', '\\'},
  {'^', '_'}, {'a', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      ADVANCE_MAP(
        '"', 1,
        '#', 2,
        '\'', 290,
        '(', 52,
        ')', 77,
        '+', 141,
        ',', 293,
        '-', 140,
        '.', 284,
        '0', 92,
        '1', 98,
        ';', 299,
        '?', 17,
        '[', 294,
        '\\', 35,
        ']', 295,
        '`', 291,
        'a', 216,
        'c', 152,
        'd', 180,
        'f', 273,
        'i', 193,
        'l', 153,
        'n', 202,
        'o', 239,
        'p', 240,
        'q', 271,
        's', 154,
        't', 128,
        'u', 217,
        'w', 201,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '#', 288,
        '$', 126,
        '\'', 289,
        '(', 297,
        '[', 296,
        's', 3,
        'b', 46,
        'o', 46,
        'x', 46,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == '+') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'F') ADVANCE(88);
      END_STATE();
    case 13:
      if (lookahead == 'I') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'N') ADVANCE(90);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 18:
      if (lookahead == '\\') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 19:
      if (lookahead == '\\') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 25:
      if (lookahead == 'h') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(6);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == '}') ADVANCE(113);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 35:
      if (lookahead == '\'' ||
          lookahead == ',' ||
          lookahead == '`') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 47:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 48:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(32);
      END_STATE();
    case 49:
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      ADVANCE_MAP(
        '"', 1,
        '#', 2,
        '\'', 290,
        '(', 52,
        ')', 77,
        '+', 141,
        ',', 293,
        '-', 140,
        '.', 284,
        '0', 92,
        '1', 98,
        ';', 299,
        '?', 17,
        '[', 294,
        '\\', 35,
        ']', 295,
        '`', 291,
        'd', 188,
        'n', 202,
        't', 128,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_catch);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_cond);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(269);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_condition_DASHcase);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_defconst);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_defvar);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_interactive);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_lambda);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_let_STAR);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_prog1);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_prog2);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_progn);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_save_DASHcurrent_DASHbuffer);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_save_DASHexcursion);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_save_DASHrestriction);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_setq);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_setq_DASHdefault);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_unwind_DASHprotect);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_defun);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_defsubst);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_defmacro);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_float_token4);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_float_token4);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_float_token5);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_float_token5);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '`') ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(142);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '0') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '0') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '`') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(144);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_char_token1);
      ADVANCE_MAP(
        'M', 104,
        'N', 108,
        'U', 110,
        '^', 107,
        'u', 112,
        'x', 111,
        'A', 105,
        'C', 105,
        'H', 105,
        'S', 105,
        's', 105,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\\') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '{') ADVANCE(48);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(118);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_char_token2);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_char_token3);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_char_token4);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_char_token6);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_char_token6);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_char_token7);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_char_token7);
      ADVANCE_MAP(
        ';', 119,
        '^', 18,
        'A', 7,
        'C', 7,
        'H', 7,
        'M', 7,
        'S', 7,
        's', 7,
      );
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_char_token7);
      ADVANCE_MAP(
        ';', 119,
        '^', 18,
        'A', 7,
        'C', 7,
        'H', 7,
        'M', 7,
        'S', 7,
        's', 7,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_char_token8);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_char_token8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_char_token8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_byte_compiled_file_name);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_nil);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(148);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(148);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '+') ADVANCE(148);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '-') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == '1') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(47);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '1') ADVANCE(66);
      if (lookahead == '2') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(68);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'F') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'I') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'N') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'N') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == 'N') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'o') ADVANCE(223);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(256);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(278);
      if (lookahead == 'e') ADVANCE(257);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(62);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(168);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(150);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(252);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(241);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(275);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(171);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(178);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(274);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(251);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(200);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead == 'm') ADVANCE(156);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == 'u') ADVANCE(218);
      if (lookahead == 'v') ADVANCE(159);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(276);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(191);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(244);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(263);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(158);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(265);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(261);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(277);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(270);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(53);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(55);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(137);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(155);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(186);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(194);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(136);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(69);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(76);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(61);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(56);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(197);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(248);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(195);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(227);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(242);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(253);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(172);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(262);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(166);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(215);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(198);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(160);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(190);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'g') ADVANCE(146);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'h') ADVANCE(54);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'h') ADVANCE(203);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(211);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(212);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(279);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(232);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(226);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(233);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(234);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(235);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(174);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'l') ADVANCE(127);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'l') ADVANCE(183);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'l') ADVANCE(260);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(162);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(156);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == 'u') ADVANCE(218);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(175);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(280);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(78);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(250);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(59);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(71);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(72);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(176);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(169);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(139);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(177);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(266);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(199);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(80);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(219);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(264);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(220);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(225);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(221);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(222);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(267);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(249);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'q') ADVANCE(73);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(65);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(228);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(58);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(70);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(254);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(229);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(210);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(189);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(246);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(161);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(236);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 's') ADVANCE(258);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 's') ADVANCE(259);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 's') ADVANCE(185);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 's') ADVANCE(268);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 's') ADVANCE(208);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 't') ADVANCE(165);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 't') ADVANCE(63);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 't') ADVANCE(238);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 't') ADVANCE(57);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 't') ADVANCE(79);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 't') ADVANCE(74);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 't') ADVANCE(75);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 't') ADVANCE(187);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 't') ADVANCE(205);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 't') ADVANCE(182);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 't') ADVANCE(204);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 't') ADVANCE(138);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 't') ADVANCE(192);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 't') ADVANCE(245);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 't') ADVANCE(207);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 't') ADVANCE(209);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(231);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(164);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(224);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(196);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(213);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(247);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(243);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'v') ADVANCE(181);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'v') ADVANCE(184);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'w') ADVANCE(206);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'x') ADVANCE(173);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead == '\\') ADVANCE(47);
      if ((!eof && set_contains(aux_sym_symbol_token2_character_set_2, 10, lookahead))) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(292);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACK);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_POUNDs_LPARENhash_DASHtable);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(299);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 50},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 50},
  [4] = {.lex_state = 50},
  [5] = {.lex_state = 50},
  [6] = {.lex_state = 50},
  [7] = {.lex_state = 50},
  [8] = {.lex_state = 50},
  [9] = {.lex_state = 50},
  [10] = {.lex_state = 50},
  [11] = {.lex_state = 50},
  [12] = {.lex_state = 50},
  [13] = {.lex_state = 50},
  [14] = {.lex_state = 50},
  [15] = {.lex_state = 50},
  [16] = {.lex_state = 50},
  [17] = {.lex_state = 50},
  [18] = {.lex_state = 50},
  [19] = {.lex_state = 50},
  [20] = {.lex_state = 50},
  [21] = {.lex_state = 50},
  [22] = {.lex_state = 50},
  [23] = {.lex_state = 50},
  [24] = {.lex_state = 50},
  [25] = {.lex_state = 50},
  [26] = {.lex_state = 50},
  [27] = {.lex_state = 50},
  [28] = {.lex_state = 50},
  [29] = {.lex_state = 50},
  [30] = {.lex_state = 50},
  [31] = {.lex_state = 50},
  [32] = {.lex_state = 50},
  [33] = {.lex_state = 50},
  [34] = {.lex_state = 50},
  [35] = {.lex_state = 50},
  [36] = {.lex_state = 50},
  [37] = {.lex_state = 50},
  [38] = {.lex_state = 50},
  [39] = {.lex_state = 50},
  [40] = {.lex_state = 50},
  [41] = {.lex_state = 50},
  [42] = {.lex_state = 50},
  [43] = {.lex_state = 50},
  [44] = {.lex_state = 50},
  [45] = {.lex_state = 50},
  [46] = {.lex_state = 50},
  [47] = {.lex_state = 50},
  [48] = {.lex_state = 50},
  [49] = {.lex_state = 50},
  [50] = {.lex_state = 50},
  [51] = {.lex_state = 50},
  [52] = {.lex_state = 50},
  [53] = {.lex_state = 50},
  [54] = {.lex_state = 50},
  [55] = {.lex_state = 50},
  [56] = {.lex_state = 50},
  [57] = {.lex_state = 50},
  [58] = {.lex_state = 50},
  [59] = {.lex_state = 50},
  [60] = {.lex_state = 50},
  [61] = {.lex_state = 50},
  [62] = {.lex_state = 50},
  [63] = {.lex_state = 50},
  [64] = {.lex_state = 50},
  [65] = {.lex_state = 50},
  [66] = {.lex_state = 50},
  [67] = {.lex_state = 50},
  [68] = {.lex_state = 50},
  [69] = {.lex_state = 50},
  [70] = {.lex_state = 50},
  [71] = {.lex_state = 50},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_cond] = ACTIONS(1),
    [anon_sym_condition_DASHcase] = ACTIONS(1),
    [anon_sym_defconst] = ACTIONS(1),
    [anon_sym_defvar] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_interactive] = ACTIONS(1),
    [anon_sym_lambda] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_let_STAR] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_prog1] = ACTIONS(1),
    [anon_sym_prog2] = ACTIONS(1),
    [anon_sym_progn] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(1),
    [anon_sym_save_DASHcurrent_DASHbuffer] = ACTIONS(1),
    [anon_sym_save_DASHexcursion] = ACTIONS(1),
    [anon_sym_save_DASHrestriction] = ACTIONS(1),
    [anon_sym_setq] = ACTIONS(1),
    [anon_sym_setq_DASHdefault] = ACTIONS(1),
    [anon_sym_unwind_DASHprotect] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_defun] = ACTIONS(1),
    [anon_sym_defsubst] = ACTIONS(1),
    [anon_sym_defmacro] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [aux_sym_float_token3] = ACTIONS(1),
    [aux_sym_float_token4] = ACTIONS(1),
    [aux_sym_float_token5] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [aux_sym_char_token1] = ACTIONS(1),
    [aux_sym_char_token2] = ACTIONS(1),
    [aux_sym_char_token3] = ACTIONS(1),
    [aux_sym_char_token4] = ACTIONS(1),
    [aux_sym_char_token5] = ACTIONS(1),
    [aux_sym_char_token6] = ACTIONS(1),
    [aux_sym_char_token7] = ACTIONS(1),
    [aux_sym_char_token8] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_byte_compiled_file_name] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [aux_sym_symbol_token1] = ACTIONS(1),
    [aux_sym_symbol_token2] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(1),
    [anon_sym_POUND_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA_AT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_POUND_LBRACK] = ACTIONS(1),
    [anon_sym_POUND_LPAREN] = ACTIONS(1),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(72),
    [sym__sexp] = STATE(8),
    [sym_special_form] = STATE(8),
    [sym_function_definition] = STATE(8),
    [sym_macro_definition] = STATE(8),
    [sym__atom] = STATE(8),
    [sym_float] = STATE(8),
    [sym_integer] = STATE(8),
    [sym_char] = STATE(8),
    [sym_symbol] = STATE(8),
    [sym_quote] = STATE(8),
    [sym_unquote_splice] = STATE(8),
    [sym_unquote] = STATE(8),
    [sym_list] = STATE(8),
    [sym_vector] = STATE(8),
    [sym_bytecode] = STATE(8),
    [sym_string_text_properties] = STATE(8),
    [sym_hash_table] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(21),
    [sym_byte_compiled_file_name] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__sexp] = STATE(10),
    [sym_special_form] = STATE(10),
    [sym_function_definition] = STATE(10),
    [sym_macro_definition] = STATE(10),
    [sym__atom] = STATE(10),
    [sym_float] = STATE(10),
    [sym_integer] = STATE(10),
    [sym_char] = STATE(10),
    [sym_symbol] = STATE(10),
    [sym_quote] = STATE(10),
    [sym_unquote_splice] = STATE(10),
    [sym_unquote] = STATE(10),
    [sym_list] = STATE(10),
    [sym_vector] = STATE(10),
    [sym_bytecode] = STATE(10),
    [sym_string_text_properties] = STATE(10),
    [sym_hash_table] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_and] = ACTIONS(39),
    [anon_sym_catch] = ACTIONS(39),
    [anon_sym_cond] = ACTIONS(39),
    [anon_sym_condition_DASHcase] = ACTIONS(39),
    [anon_sym_defconst] = ACTIONS(39),
    [anon_sym_defvar] = ACTIONS(39),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_interactive] = ACTIONS(39),
    [anon_sym_lambda] = ACTIONS(39),
    [anon_sym_let] = ACTIONS(39),
    [anon_sym_let_STAR] = ACTIONS(39),
    [anon_sym_or] = ACTIONS(39),
    [anon_sym_prog1] = ACTIONS(39),
    [anon_sym_prog2] = ACTIONS(39),
    [anon_sym_progn] = ACTIONS(39),
    [anon_sym_quote] = ACTIONS(39),
    [anon_sym_save_DASHcurrent_DASHbuffer] = ACTIONS(39),
    [anon_sym_save_DASHexcursion] = ACTIONS(39),
    [anon_sym_save_DASHrestriction] = ACTIONS(39),
    [anon_sym_setq] = ACTIONS(39),
    [anon_sym_setq_DASHdefault] = ACTIONS(39),
    [anon_sym_unwind_DASHprotect] = ACTIONS(39),
    [anon_sym_while] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_defun] = ACTIONS(43),
    [anon_sym_defsubst] = ACTIONS(43),
    [anon_sym_defmacro] = ACTIONS(45),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(47),
    [sym_byte_compiled_file_name] = ACTIONS(47),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_defun] = ACTIONS(54),
    [anon_sym_defsubst] = ACTIONS(54),
    [anon_sym_defmacro] = ACTIONS(54),
    [aux_sym_float_token1] = ACTIONS(57),
    [aux_sym_float_token2] = ACTIONS(57),
    [aux_sym_float_token3] = ACTIONS(57),
    [aux_sym_float_token4] = ACTIONS(57),
    [aux_sym_float_token5] = ACTIONS(57),
    [aux_sym_integer_token1] = ACTIONS(60),
    [aux_sym_integer_token2] = ACTIONS(63),
    [aux_sym_char_token1] = ACTIONS(66),
    [aux_sym_char_token2] = ACTIONS(69),
    [aux_sym_char_token3] = ACTIONS(69),
    [aux_sym_char_token4] = ACTIONS(69),
    [aux_sym_char_token5] = ACTIONS(69),
    [aux_sym_char_token6] = ACTIONS(66),
    [aux_sym_char_token7] = ACTIONS(66),
    [aux_sym_char_token8] = ACTIONS(69),
    [sym_string] = ACTIONS(72),
    [sym_byte_compiled_file_name] = ACTIONS(72),
    [anon_sym_nil] = ACTIONS(54),
    [anon_sym_t] = ACTIONS(54),
    [aux_sym_symbol_token1] = ACTIONS(54),
    [aux_sym_symbol_token2] = ACTIONS(54),
    [anon_sym_POUND_POUND] = ACTIONS(75),
    [anon_sym_POUND_SQUOTE] = ACTIONS(78),
    [anon_sym_SQUOTE] = ACTIONS(78),
    [anon_sym_BQUOTE] = ACTIONS(78),
    [anon_sym_COMMA_AT] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_POUND_LBRACK] = ACTIONS(90),
    [anon_sym_POUND_LPAREN] = ACTIONS(93),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__sexp] = STATE(11),
    [sym_special_form] = STATE(11),
    [sym_function_definition] = STATE(11),
    [sym_macro_definition] = STATE(11),
    [sym__atom] = STATE(11),
    [sym_float] = STATE(11),
    [sym_integer] = STATE(11),
    [sym_char] = STATE(11),
    [sym_symbol] = STATE(11),
    [sym_quote] = STATE(11),
    [sym_unquote_splice] = STATE(11),
    [sym_unquote] = STATE(11),
    [sym_list] = STATE(11),
    [sym_vector] = STATE(11),
    [sym_bytecode] = STATE(11),
    [sym_string_text_properties] = STATE(11),
    [sym_hash_table] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(103),
    [sym_byte_compiled_file_name] = ACTIONS(103),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__sexp] = STATE(12),
    [sym_special_form] = STATE(12),
    [sym_function_definition] = STATE(12),
    [sym_macro_definition] = STATE(12),
    [sym__atom] = STATE(12),
    [sym_float] = STATE(12),
    [sym_integer] = STATE(12),
    [sym_char] = STATE(12),
    [sym_symbol] = STATE(12),
    [sym_quote] = STATE(12),
    [sym_unquote_splice] = STATE(12),
    [sym_unquote] = STATE(12),
    [sym_list] = STATE(12),
    [sym_vector] = STATE(12),
    [sym_bytecode] = STATE(12),
    [sym_string_text_properties] = STATE(12),
    [sym_hash_table] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(107),
    [sym_byte_compiled_file_name] = ACTIONS(107),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__sexp] = STATE(14),
    [sym_special_form] = STATE(14),
    [sym_function_definition] = STATE(14),
    [sym_macro_definition] = STATE(14),
    [sym__atom] = STATE(14),
    [sym_float] = STATE(14),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_symbol] = STATE(14),
    [sym_quote] = STATE(14),
    [sym_unquote_splice] = STATE(14),
    [sym_unquote] = STATE(14),
    [sym_list] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_bytecode] = STATE(14),
    [sym_string_text_properties] = STATE(14),
    [sym_hash_table] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(113),
    [sym_byte_compiled_file_name] = ACTIONS(113),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__sexp] = STATE(16),
    [sym_special_form] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_macro_definition] = STATE(16),
    [sym__atom] = STATE(16),
    [sym_float] = STATE(16),
    [sym_integer] = STATE(16),
    [sym_char] = STATE(16),
    [sym_symbol] = STATE(16),
    [sym_quote] = STATE(16),
    [sym_unquote_splice] = STATE(16),
    [sym_unquote] = STATE(16),
    [sym_list] = STATE(16),
    [sym_vector] = STATE(16),
    [sym_bytecode] = STATE(16),
    [sym_string_text_properties] = STATE(16),
    [sym_hash_table] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(119),
    [sym_byte_compiled_file_name] = ACTIONS(119),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__sexp] = STATE(18),
    [sym_special_form] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_macro_definition] = STATE(18),
    [sym__atom] = STATE(18),
    [sym_float] = STATE(18),
    [sym_integer] = STATE(18),
    [sym_char] = STATE(18),
    [sym_symbol] = STATE(18),
    [sym_quote] = STATE(18),
    [sym_unquote_splice] = STATE(18),
    [sym_unquote] = STATE(18),
    [sym_list] = STATE(18),
    [sym_vector] = STATE(18),
    [sym_bytecode] = STATE(18),
    [sym_string_text_properties] = STATE(18),
    [sym_hash_table] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(129),
    [sym_byte_compiled_file_name] = ACTIONS(129),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__sexp] = STATE(20),
    [sym_special_form] = STATE(20),
    [sym_function_definition] = STATE(20),
    [sym_macro_definition] = STATE(20),
    [sym__atom] = STATE(20),
    [sym_float] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_char] = STATE(20),
    [sym_symbol] = STATE(20),
    [sym_quote] = STATE(20),
    [sym_unquote_splice] = STATE(20),
    [sym_unquote] = STATE(20),
    [sym_list] = STATE(20),
    [sym_vector] = STATE(20),
    [sym_bytecode] = STATE(20),
    [sym_string_text_properties] = STATE(20),
    [sym_hash_table] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(21),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(135),
    [sym_byte_compiled_file_name] = ACTIONS(137),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__sexp] = STATE(23),
    [sym_special_form] = STATE(23),
    [sym_function_definition] = STATE(23),
    [sym_macro_definition] = STATE(23),
    [sym__atom] = STATE(23),
    [sym_float] = STATE(23),
    [sym_integer] = STATE(23),
    [sym_char] = STATE(23),
    [sym_symbol] = STATE(23),
    [sym_quote] = STATE(23),
    [sym_unquote_splice] = STATE(23),
    [sym_unquote] = STATE(23),
    [sym_list] = STATE(23),
    [sym_vector] = STATE(23),
    [sym_bytecode] = STATE(23),
    [sym_string_text_properties] = STATE(23),
    [sym_hash_table] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(24),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(143),
    [sym_byte_compiled_file_name] = ACTIONS(145),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__sexp] = STATE(25),
    [sym_special_form] = STATE(25),
    [sym_function_definition] = STATE(25),
    [sym_macro_definition] = STATE(25),
    [sym__atom] = STATE(25),
    [sym_float] = STATE(25),
    [sym_integer] = STATE(25),
    [sym_char] = STATE(25),
    [sym_symbol] = STATE(25),
    [sym_quote] = STATE(25),
    [sym_unquote_splice] = STATE(25),
    [sym_unquote] = STATE(25),
    [sym_list] = STATE(25),
    [sym_vector] = STATE(25),
    [sym_bytecode] = STATE(25),
    [sym_string_text_properties] = STATE(25),
    [sym_hash_table] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(151),
    [sym_byte_compiled_file_name] = ACTIONS(151),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym__sexp] = STATE(4),
    [sym_special_form] = STATE(4),
    [sym_function_definition] = STATE(4),
    [sym_macro_definition] = STATE(4),
    [sym__atom] = STATE(4),
    [sym_float] = STATE(4),
    [sym_integer] = STATE(4),
    [sym_char] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_quote] = STATE(4),
    [sym_unquote_splice] = STATE(4),
    [sym_unquote] = STATE(4),
    [sym_list] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_bytecode] = STATE(4),
    [sym_string_text_properties] = STATE(4),
    [sym_hash_table] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(155),
    [sym_byte_compiled_file_name] = ACTIONS(157),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(159),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym__sexp] = STATE(28),
    [sym_special_form] = STATE(28),
    [sym_function_definition] = STATE(28),
    [sym_macro_definition] = STATE(28),
    [sym__atom] = STATE(28),
    [sym_float] = STATE(28),
    [sym_integer] = STATE(28),
    [sym_char] = STATE(28),
    [sym_symbol] = STATE(28),
    [sym_quote] = STATE(28),
    [sym_unquote_splice] = STATE(28),
    [sym_unquote] = STATE(28),
    [sym_list] = STATE(28),
    [sym_vector] = STATE(28),
    [sym_bytecode] = STATE(28),
    [sym_string_text_properties] = STATE(28),
    [sym_hash_table] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(28),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(163),
    [sym_byte_compiled_file_name] = ACTIONS(163),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym__sexp] = STATE(30),
    [sym_special_form] = STATE(30),
    [sym_function_definition] = STATE(30),
    [sym_macro_definition] = STATE(30),
    [sym__atom] = STATE(30),
    [sym_float] = STATE(30),
    [sym_integer] = STATE(30),
    [sym_char] = STATE(30),
    [sym_symbol] = STATE(30),
    [sym_quote] = STATE(30),
    [sym_unquote_splice] = STATE(30),
    [sym_unquote] = STATE(30),
    [sym_list] = STATE(30),
    [sym_vector] = STATE(30),
    [sym_bytecode] = STATE(30),
    [sym_string_text_properties] = STATE(30),
    [sym_hash_table] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(167),
    [sym_byte_compiled_file_name] = ACTIONS(169),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym__sexp] = STATE(29),
    [sym_special_form] = STATE(29),
    [sym_function_definition] = STATE(29),
    [sym_macro_definition] = STATE(29),
    [sym__atom] = STATE(29),
    [sym_float] = STATE(29),
    [sym_integer] = STATE(29),
    [sym_char] = STATE(29),
    [sym_symbol] = STATE(29),
    [sym_quote] = STATE(29),
    [sym_unquote_splice] = STATE(29),
    [sym_unquote] = STATE(29),
    [sym_list] = STATE(29),
    [sym_vector] = STATE(29),
    [sym_bytecode] = STATE(29),
    [sym_string_text_properties] = STATE(29),
    [sym_hash_table] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(177),
    [sym_byte_compiled_file_name] = ACTIONS(177),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym__sexp] = STATE(31),
    [sym_special_form] = STATE(31),
    [sym_function_definition] = STATE(31),
    [sym_macro_definition] = STATE(31),
    [sym__atom] = STATE(31),
    [sym_float] = STATE(31),
    [sym_integer] = STATE(31),
    [sym_char] = STATE(31),
    [sym_symbol] = STATE(31),
    [sym_quote] = STATE(31),
    [sym_unquote_splice] = STATE(31),
    [sym_unquote] = STATE(31),
    [sym_list] = STATE(31),
    [sym_vector] = STATE(31),
    [sym_bytecode] = STATE(31),
    [sym_string_text_properties] = STATE(31),
    [sym_hash_table] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(181),
    [sym_byte_compiled_file_name] = ACTIONS(181),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_bytecode] = STATE(3),
    [sym_string_text_properties] = STATE(3),
    [sym_hash_table] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(101),
    [sym_byte_compiled_file_name] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym__sexp] = STATE(43),
    [sym_special_form] = STATE(43),
    [sym_function_definition] = STATE(43),
    [sym_macro_definition] = STATE(43),
    [sym__atom] = STATE(43),
    [sym_float] = STATE(43),
    [sym_integer] = STATE(43),
    [sym_char] = STATE(43),
    [sym_symbol] = STATE(43),
    [sym_quote] = STATE(43),
    [sym_unquote_splice] = STATE(43),
    [sym_unquote] = STATE(43),
    [sym_list] = STATE(43),
    [sym_vector] = STATE(43),
    [sym_bytecode] = STATE(43),
    [sym_string_text_properties] = STATE(43),
    [sym_hash_table] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(191),
    [sym_byte_compiled_file_name] = ACTIONS(191),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym__sexp] = STATE(44),
    [sym_special_form] = STATE(44),
    [sym_function_definition] = STATE(44),
    [sym_macro_definition] = STATE(44),
    [sym__atom] = STATE(44),
    [sym_float] = STATE(44),
    [sym_integer] = STATE(44),
    [sym_char] = STATE(44),
    [sym_symbol] = STATE(44),
    [sym_quote] = STATE(44),
    [sym_unquote_splice] = STATE(44),
    [sym_unquote] = STATE(44),
    [sym_list] = STATE(44),
    [sym_vector] = STATE(44),
    [sym_bytecode] = STATE(44),
    [sym_string_text_properties] = STATE(44),
    [sym_hash_table] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(193),
    [sym_byte_compiled_file_name] = ACTIONS(193),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym__sexp] = STATE(45),
    [sym_special_form] = STATE(45),
    [sym_function_definition] = STATE(45),
    [sym_macro_definition] = STATE(45),
    [sym__atom] = STATE(45),
    [sym_float] = STATE(45),
    [sym_integer] = STATE(45),
    [sym_char] = STATE(45),
    [sym_symbol] = STATE(45),
    [sym_quote] = STATE(45),
    [sym_unquote_splice] = STATE(45),
    [sym_unquote] = STATE(45),
    [sym_list] = STATE(45),
    [sym_vector] = STATE(45),
    [sym_bytecode] = STATE(45),
    [sym_string_text_properties] = STATE(45),
    [sym_hash_table] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_integer_token2] = ACTIONS(15),
    [aux_sym_char_token1] = ACTIONS(17),
    [aux_sym_char_token2] = ACTIONS(19),
    [aux_sym_char_token3] = ACTIONS(19),
    [aux_sym_char_token4] = ACTIONS(19),
    [aux_sym_char_token5] = ACTIONS(19),
    [aux_sym_char_token6] = ACTIONS(17),
    [aux_sym_char_token7] = ACTIONS(17),
    [aux_sym_char_token8] = ACTIONS(19),
    [sym_string] = ACTIONS(195),
    [sym_byte_compiled_file_name] = ACTIONS(195),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_t] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [aux_sym_symbol_token2] = ACTIONS(9),
    [anon_sym_POUND_POUND] = ACTIONS(23),
    [anon_sym_POUND_SQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_COMMA_AT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_POUND_LBRACK] = ACTIONS(33),
    [anon_sym_POUND_LPAREN] = ACTIONS(35),
    [anon_sym_POUNDs_LPARENhash_DASHtable] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(197), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [46] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(201), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [92] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(205), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(209), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(213), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(217), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(221), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(225), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(229), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(233), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(237), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(241), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(245), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(249), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(253), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(257), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(261), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(265), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(269), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(273), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(277), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(281), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [1012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(285), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [1058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(289), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [1104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(293), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [1150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(297), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [1196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(301), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [1242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(305), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [1288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(309), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [1334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(313), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [1380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(317), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [1426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(321), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [1472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(325), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [1518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(329), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [1564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 17,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      anon_sym_COMMA,
    ACTIONS(333), 21,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_POUND,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [1610] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_POUND_POUND,
    STATE(17), 1,
      sym_symbol,
    ACTIONS(9), 7,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
    ACTIONS(215), 10,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_COMMA,
    ACTIONS(213), 18,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [1661] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_POUND_POUND,
    STATE(15), 1,
      sym_symbol,
    ACTIONS(9), 7,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      anon_sym_nil,
      anon_sym_t,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
    ACTIONS(215), 10,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token6,
      aux_sym_char_token7,
      anon_sym_COMMA,
    ACTIONS(213), 18,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_integer_token2,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token8,
      sym_string,
      sym_byte_compiled_file_name,
      anon_sym_POUND_SQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_LBRACK,
      anon_sym_POUND_LBRACK,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDs_LPARENhash_DASHtable,
  [1712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
  [1719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(35)] = 0,
  [SMALL_STATE(36)] = 46,
  [SMALL_STATE(37)] = 92,
  [SMALL_STATE(38)] = 138,
  [SMALL_STATE(39)] = 184,
  [SMALL_STATE(40)] = 230,
  [SMALL_STATE(41)] = 276,
  [SMALL_STATE(42)] = 322,
  [SMALL_STATE(43)] = 368,
  [SMALL_STATE(44)] = 414,
  [SMALL_STATE(45)] = 460,
  [SMALL_STATE(46)] = 506,
  [SMALL_STATE(47)] = 552,
  [SMALL_STATE(48)] = 598,
  [SMALL_STATE(49)] = 644,
  [SMALL_STATE(50)] = 690,
  [SMALL_STATE(51)] = 736,
  [SMALL_STATE(52)] = 782,
  [SMALL_STATE(53)] = 828,
  [SMALL_STATE(54)] = 874,
  [SMALL_STATE(55)] = 920,
  [SMALL_STATE(56)] = 966,
  [SMALL_STATE(57)] = 1012,
  [SMALL_STATE(58)] = 1058,
  [SMALL_STATE(59)] = 1104,
  [SMALL_STATE(60)] = 1150,
  [SMALL_STATE(61)] = 1196,
  [SMALL_STATE(62)] = 1242,
  [SMALL_STATE(63)] = 1288,
  [SMALL_STATE(64)] = 1334,
  [SMALL_STATE(65)] = 1380,
  [SMALL_STATE(66)] = 1426,
  [SMALL_STATE(67)] = 1472,
  [SMALL_STATE(68)] = 1518,
  [SMALL_STATE(69)] = 1564,
  [SMALL_STATE(70)] = 1610,
  [SMALL_STATE(71)] = 1661,
  [SMALL_STATE(72)] = 1712,
  [SMALL_STATE(73)] = 1719,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, 0, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytecode, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytecode, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_text_properties, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_text_properties, 3, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_table, 3, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_table, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 4, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_form, 4, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, 0, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splice, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splice, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 4, 0, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 4, 0, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bytecode, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bytecode, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_text_properties, 4, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_text_properties, 4, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_table, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash_table, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 5, 0, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 5, 0, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 5, 0, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 5, 0, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 3, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_form, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 5, 0, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 5, 0, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, 0, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 4),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, 0, 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 6, 0, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 6, 0, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 6, 0, 4),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 6, 0, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 6, 0, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 6, 0, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, 0, 4),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7, 0, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 7, 0, 4),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 7, 0, 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 2),
  [337] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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

TS_PUBLIC const TSLanguage *tree_sitter_elisp(void) {
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

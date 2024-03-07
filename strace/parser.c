#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 139
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LT_DOT_DOT_DOT = 1,
  anon_sym_resumed_GT = 2,
  anon_sym_EQ_GT = 3,
  anon_sym_COMMA = 4,
  anon_sym_EQ = 5,
  anon_sym_PLUS_PLUS_PLUS = 6,
  anon_sym_killed = 7,
  anon_sym_by = 8,
  anon_sym_DASH_DASH_DASH = 9,
  sym_syscall = 10,
  anon_sym_LPAREN = 11,
  anon_sym_LTunfinished_DOT_DOT_DOT_GT = 12,
  anon_sym_RPAREN = 13,
  aux_sym_parameter_token1 = 14,
  anon_sym_NULL = 15,
  anon_sym_DOT_DOT_DOT = 16,
  sym_integer = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_string_token1 = 19,
  sym__escape_sequence = 20,
  anon_sym_TILDE = 21,
  anon_sym_LBRACK = 22,
  anon_sym_RBRACK = 23,
  sym_pointer = 24,
  anon_sym_PIPE = 25,
  anon_sym_STAR = 26,
  aux_sym_value_token1 = 27,
  anon_sym_SLASH_STAR = 28,
  aux_sym_comment_token1 = 29,
  anon_sym_STAR_SLASH = 30,
  sym__newline = 31,
  anon_sym_QMARK = 32,
  aux_sym_errorName_token1 = 33,
  aux_sym_errorDescription_token1 = 34,
  anon_sym_LBRACE = 35,
  anon_sym_RBRACE = 36,
  anon_sym_AMP_AMP = 37,
  anon_sym_EQ_EQ = 38,
  aux_sym_macro_token1 = 39,
  sym_dictKey = 40,
  anon_sym_exited = 41,
  anon_sym_with = 42,
  sym_source_file = 43,
  sym_line = 44,
  sym_killSignal = 45,
  sym_signal = 46,
  sym_pid = 47,
  sym_parameters = 48,
  sym_parameter = 49,
  sym_string = 50,
  sym_list = 51,
  sym_values = 52,
  sym_value = 53,
  sym_comment = 54,
  sym_returnValue = 55,
  sym_errorName = 56,
  sym_errorDescription = 57,
  sym_dictFn = 58,
  sym_dict = 59,
  sym_dictElem = 60,
  sym_macro = 61,
  sym__dictValue = 62,
  sym_exit = 63,
  aux_sym_source_file_repeat1 = 64,
  aux_sym_parameters_repeat1 = 65,
  aux_sym_string_repeat1 = 66,
  aux_sym_values_repeat1 = 67,
  aux_sym_comment_repeat1 = 68,
  aux_sym_errorDescription_repeat1 = 69,
  aux_sym_dict_repeat1 = 70,
  aux_sym_dictElem_repeat1 = 71,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_DOT_DOT_DOT] = "<...",
  [anon_sym_resumed_GT] = "resumed>",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_PLUS_PLUS] = "+++",
  [anon_sym_killed] = "killed",
  [anon_sym_by] = "by",
  [anon_sym_DASH_DASH_DASH] = "---",
  [sym_syscall] = "syscall",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LTunfinished_DOT_DOT_DOT_GT] = "<unfinished ...>",
  [anon_sym_RPAREN] = ")",
  [aux_sym_parameter_token1] = "parameter_token1",
  [anon_sym_NULL] = "NULL",
  [anon_sym_DOT_DOT_DOT] = "...",
  [sym_integer] = "integer",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_content",
  [sym__escape_sequence] = "_escape_sequence",
  [anon_sym_TILDE] = "~",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_pointer] = "pointer",
  [anon_sym_PIPE] = "|",
  [anon_sym_STAR] = "*",
  [aux_sym_value_token1] = "value_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_STAR_SLASH] = "*/",
  [sym__newline] = "_newline",
  [anon_sym_QMARK] = "\?",
  [aux_sym_errorName_token1] = "errorName_token1",
  [aux_sym_errorDescription_token1] = "errorContent",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_EQ_EQ] = "==",
  [aux_sym_macro_token1] = "macro_token1",
  [sym_dictKey] = "dictKey",
  [anon_sym_exited] = "exited",
  [anon_sym_with] = "with",
  [sym_source_file] = "source_file",
  [sym_line] = "line",
  [sym_killSignal] = "killSignal",
  [sym_signal] = "signal",
  [sym_pid] = "pid",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_string] = "string",
  [sym_list] = "list",
  [sym_values] = "values",
  [sym_value] = "value",
  [sym_comment] = "comment",
  [sym_returnValue] = "returnValue",
  [sym_errorName] = "errorName",
  [sym_errorDescription] = "errorDescription",
  [sym_dictFn] = "dictFn",
  [sym_dict] = "dict",
  [sym_dictElem] = "dictElem",
  [sym_macro] = "macro",
  [sym__dictValue] = "_dictValue",
  [sym_exit] = "exit",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_values_repeat1] = "values_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_errorDescription_repeat1] = "errorDescription_repeat1",
  [aux_sym_dict_repeat1] = "dict_repeat1",
  [aux_sym_dictElem_repeat1] = "dictElem_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_DOT_DOT_DOT] = anon_sym_LT_DOT_DOT_DOT,
  [anon_sym_resumed_GT] = anon_sym_resumed_GT,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
  [anon_sym_killed] = anon_sym_killed,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [sym_syscall] = sym_syscall,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LTunfinished_DOT_DOT_DOT_GT] = anon_sym_LTunfinished_DOT_DOT_DOT_GT,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_parameter_token1] = aux_sym_parameter_token1,
  [anon_sym_NULL] = anon_sym_NULL,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [sym_integer] = sym_integer,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym__escape_sequence] = sym__escape_sequence,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_pointer] = sym_pointer,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym__newline] = sym__newline,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [aux_sym_errorName_token1] = aux_sym_errorName_token1,
  [aux_sym_errorDescription_token1] = aux_sym_errorDescription_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [aux_sym_macro_token1] = aux_sym_macro_token1,
  [sym_dictKey] = sym_dictKey,
  [anon_sym_exited] = anon_sym_exited,
  [anon_sym_with] = anon_sym_with,
  [sym_source_file] = sym_source_file,
  [sym_line] = sym_line,
  [sym_killSignal] = sym_killSignal,
  [sym_signal] = sym_signal,
  [sym_pid] = sym_pid,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_string] = sym_string,
  [sym_list] = sym_list,
  [sym_values] = sym_values,
  [sym_value] = sym_value,
  [sym_comment] = sym_comment,
  [sym_returnValue] = sym_returnValue,
  [sym_errorName] = sym_errorName,
  [sym_errorDescription] = sym_errorDescription,
  [sym_dictFn] = sym_dictFn,
  [sym_dict] = sym_dict,
  [sym_dictElem] = sym_dictElem,
  [sym_macro] = sym_macro,
  [sym__dictValue] = sym__dictValue,
  [sym_exit] = sym_exit,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_values_repeat1] = aux_sym_values_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_errorDescription_repeat1] = aux_sym_errorDescription_repeat1,
  [aux_sym_dict_repeat1] = aux_sym_dict_repeat1,
  [aux_sym_dictElem_repeat1] = aux_sym_dictElem_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resumed_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_killed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_syscall] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTunfinished_DOT_DOT_DOT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parameter_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_TILDE] = {
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
  [sym_pointer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_errorName_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_errorDescription_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_macro_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_dictKey] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_exited] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_killSignal] = {
    .visible = true,
    .named = true,
  },
  [sym_signal] = {
    .visible = true,
    .named = true,
  },
  [sym_pid] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_values] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_returnValue] = {
    .visible = true,
    .named = true,
  },
  [sym_errorName] = {
    .visible = true,
    .named = true,
  },
  [sym_errorDescription] = {
    .visible = true,
    .named = true,
  },
  [sym_dictFn] = {
    .visible = true,
    .named = true,
  },
  [sym_dict] = {
    .visible = true,
    .named = true,
  },
  [sym_dictElem] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym__dictValue] = {
    .visible = false,
    .named = true,
  },
  [sym_exit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_errorDescription_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dict_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictElem_repeat1] = {
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
  [69] = 67,
  [70] = 70,
  [71] = 70,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 36,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 38,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(73);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '?') ADVANCE(120);
      if (lookahead == 'N') ADVANCE(112);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'k') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 'w') ADVANCE(44);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead == '~') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(113);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(121);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == 'N') ADVANCE(112);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead == '~') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == 'N') ADVANCE(112);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead == '~') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(126);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(114);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 11:
      if (lookahead == '+') ADVANCE(80);
      END_STATE();
    case 12:
      if (lookahead == '+') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '0') ADVANCE(94);
      if (lookahead == '?') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(121);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(113);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(92);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(74);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(118);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(87);
      END_STATE();
    case 30:
      if (lookahead == 'U') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(66);
      if (lookahead == 'x') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 59:
      if (lookahead == 'x') ADVANCE(47);
      END_STATE();
    case 60:
      if (lookahead == 'y') ADVANCE(82);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(121);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT_DOT_DOT_DOT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_resumed_GT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_killed);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_syscall);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_syscall);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LTunfinished_DOT_DOT_DOT_GT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '_') ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(113);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(113);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(113);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(118);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(113);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(113);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'U') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(114);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(115);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_errorName_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_dictKey);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_exited);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 72},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 72},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 72},
  [47] = {.lex_state = 72},
  [48] = {.lex_state = 72},
  [49] = {.lex_state = 72},
  [50] = {.lex_state = 72},
  [51] = {.lex_state = 72},
  [52] = {.lex_state = 72},
  [53] = {.lex_state = 72},
  [54] = {.lex_state = 72},
  [55] = {.lex_state = 72},
  [56] = {.lex_state = 72},
  [57] = {.lex_state = 72},
  [58] = {.lex_state = 72},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 72},
  [61] = {.lex_state = 72},
  [62] = {.lex_state = 72},
  [63] = {.lex_state = 72},
  [64] = {.lex_state = 72},
  [65] = {.lex_state = 72},
  [66] = {.lex_state = 72},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 15},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 15},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 15},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 15},
  [87] = {.lex_state = 16},
  [88] = {.lex_state = 15},
  [89] = {.lex_state = 72},
  [90] = {.lex_state = 15},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 72},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 72},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 16},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 72},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 72},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 72},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_resumed_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_killed] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LTunfinished_DOT_DOT_DOT_GT] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_pointer] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym_value_token1] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_exited] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(136),
    [sym_line] = STATE(46),
    [sym_killSignal] = STATE(46),
    [sym_signal] = STATE(46),
    [sym_pid] = STATE(53),
    [sym_exit] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(7),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(9),
    [sym_syscall] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(15), 1,
      anon_sym_EQ_GT,
    ACTIONS(17), 1,
      anon_sym_COMMA,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_value,
    STATE(16), 1,
      aux_sym_parameters_repeat1,
    STATE(24), 1,
      sym_dict,
    STATE(43), 1,
      sym_parameter,
    STATE(57), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(27), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [60] = 17,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      sym_value,
    STATE(16), 1,
      aux_sym_parameters_repeat1,
    STATE(24), 1,
      sym_dict,
    STATE(43), 1,
      sym_parameter,
    STATE(55), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(27), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [117] = 16,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_value,
    STATE(16), 1,
      aux_sym_parameters_repeat1,
    STATE(24), 1,
      sym_dict,
    STATE(43), 1,
      sym_parameter,
    STATE(54), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(27), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [171] = 16,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_value,
    STATE(16), 1,
      aux_sym_parameters_repeat1,
    STATE(24), 1,
      sym_dict,
    STATE(43), 1,
      sym_parameter,
    STATE(56), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(27), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [225] = 16,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_value,
    STATE(16), 1,
      aux_sym_parameters_repeat1,
    STATE(24), 1,
      sym_dict,
    STATE(43), 1,
      sym_parameter,
    STATE(55), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(27), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [279] = 16,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_value,
    STATE(16), 1,
      aux_sym_parameters_repeat1,
    STATE(24), 1,
      sym_dict,
    STATE(43), 1,
      sym_parameter,
    STATE(102), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(27), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [333] = 14,
    ACTIONS(43), 1,
      aux_sym_parameter_token1,
    ACTIONS(46), 1,
      anon_sym_NULL,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_TILDE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      sym_pointer,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      aux_sym_parameters_repeat1,
    STATE(15), 1,
      sym_value,
    STATE(24), 1,
      sym_dict,
    STATE(43), 1,
      sym_parameter,
    ACTIONS(49), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(41), 3,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(27), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [382] = 14,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym_syscall,
    STATE(15), 1,
      sym_value,
    STATE(24), 1,
      sym_dict,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(67), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(111), 2,
      sym_parameter,
      sym__dictValue,
    STATE(27), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [431] = 4,
    STATE(10), 1,
      aux_sym_values_repeat1,
    ACTIONS(75), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(73), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(71), 12,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [459] = 4,
    STATE(10), 1,
      aux_sym_values_repeat1,
    ACTIONS(82), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(80), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(78), 12,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [487] = 2,
    ACTIONS(86), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(84), 15,
      anon_sym_COMMA,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [511] = 14,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      aux_sym_parameters_repeat1,
    STATE(15), 1,
      sym_value,
    STATE(24), 1,
      sym_dict,
    STATE(43), 1,
      sym_parameter,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(88), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    STATE(27), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [559] = 14,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      aux_sym_parameters_repeat1,
    STATE(15), 1,
      sym_value,
    STATE(24), 1,
      sym_dict,
    STATE(43), 1,
      sym_parameter,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(90), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    STATE(27), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [607] = 4,
    STATE(11), 1,
      aux_sym_values_repeat1,
    ACTIONS(82), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(94), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(92), 12,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [635] = 14,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      aux_sym_parameters_repeat1,
    STATE(15), 1,
      sym_value,
    STATE(24), 1,
      sym_dict,
    STATE(43), 1,
      sym_parameter,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(90), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    STATE(27), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [683] = 14,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      sym_value,
    STATE(23), 1,
      aux_sym_parameters_repeat1,
    STATE(24), 1,
      sym_dict,
    STATE(43), 1,
      sym_parameter,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(27), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [730] = 2,
    ACTIONS(100), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(98), 14,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [753] = 2,
    ACTIONS(104), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(102), 14,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [776] = 2,
    ACTIONS(73), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(71), 14,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [799] = 2,
    ACTIONS(108), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(106), 14,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [822] = 14,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      sym_value,
    STATE(24), 1,
      sym_dict,
    STATE(25), 1,
      aux_sym_parameters_repeat1,
    STATE(43), 1,
      sym_parameter,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(27), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [869] = 14,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_parameters_repeat1,
    STATE(15), 1,
      sym_value,
    STATE(24), 1,
      sym_dict,
    STATE(43), 1,
      sym_parameter,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(27), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [916] = 6,
    ACTIONS(114), 1,
      anon_sym_EQ_GT,
    ACTIONS(120), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(122), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_comment,
    ACTIONS(118), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(116), 10,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [947] = 14,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_parameters_repeat1,
    STATE(15), 1,
      sym_value,
    STATE(24), 1,
      sym_dict,
    STATE(43), 1,
      sym_parameter,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(27), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [994] = 2,
    ACTIONS(126), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(124), 14,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1017] = 5,
    ACTIONS(120), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(122), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_comment,
    ACTIONS(118), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(116), 10,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1045] = 5,
    ACTIONS(122), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(132), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(35), 1,
      sym_comment,
    ACTIONS(130), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(128), 10,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1073] = 2,
    ACTIONS(136), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(134), 12,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1094] = 2,
    ACTIONS(140), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(138), 12,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1115] = 2,
    ACTIONS(144), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(142), 12,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1136] = 2,
    ACTIONS(148), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(146), 12,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1157] = 2,
    ACTIONS(152), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(150), 12,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1178] = 2,
    ACTIONS(156), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(154), 12,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_SLASH_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1199] = 3,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(160), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(158), 10,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1221] = 2,
    ACTIONS(166), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(164), 11,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1241] = 3,
    ACTIONS(172), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(170), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(168), 10,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1263] = 2,
    ACTIONS(176), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(174), 11,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1283] = 2,
    ACTIONS(170), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(168), 10,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1302] = 2,
    ACTIONS(130), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(128), 10,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1321] = 2,
    ACTIONS(180), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(178), 10,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1340] = 2,
    ACTIONS(160), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(158), 10,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1359] = 3,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(186), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(184), 8,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [1379] = 8,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 1,
      anon_sym_LT_DOT_DOT_DOT,
    ACTIONS(193), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(196), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(199), 1,
      sym_syscall,
    ACTIONS(202), 1,
      sym_integer,
    STATE(53), 1,
      sym_pid,
    STATE(44), 5,
      sym_line,
      sym_killSignal,
      sym_signal,
      sym_exit,
      aux_sym_source_file_repeat1,
  [1408] = 2,
    ACTIONS(205), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(41), 8,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [1425] = 8,
    ACTIONS(5), 1,
      anon_sym_LT_DOT_DOT_DOT,
    ACTIONS(7), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(9), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(11), 1,
      sym_syscall,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_pid,
    STATE(44), 5,
      sym_line,
      sym_killSignal,
      sym_signal,
      sym_exit,
      aux_sym_source_file_repeat1,
  [1454] = 2,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    ACTIONS(209), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
  [1469] = 2,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
  [1484] = 2,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    ACTIONS(217), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
  [1499] = 1,
    ACTIONS(217), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
  [1511] = 1,
    ACTIONS(221), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
  [1523] = 1,
    ACTIONS(209), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
  [1535] = 5,
    ACTIONS(5), 1,
      anon_sym_LT_DOT_DOT_DOT,
    ACTIONS(7), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(9), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(11), 1,
      sym_syscall,
    STATE(66), 4,
      sym_line,
      sym_killSignal,
      sym_signal,
      sym_exit,
  [1554] = 2,
    ACTIONS(225), 1,
      anon_sym_EQ,
    ACTIONS(223), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1566] = 2,
    ACTIONS(229), 1,
      anon_sym_EQ,
    ACTIONS(227), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1578] = 2,
    ACTIONS(233), 1,
      anon_sym_EQ,
    ACTIONS(231), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1590] = 2,
    ACTIONS(237), 1,
      anon_sym_EQ,
    ACTIONS(235), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1602] = 1,
    ACTIONS(239), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1611] = 5,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(241), 1,
      anon_sym_NULL,
    STATE(15), 1,
      sym_value,
    STATE(28), 1,
      sym_values,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
  [1628] = 1,
    ACTIONS(227), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1637] = 1,
    ACTIONS(243), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1646] = 1,
    ACTIONS(245), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1655] = 1,
    ACTIONS(247), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1664] = 1,
    ACTIONS(249), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1673] = 1,
    ACTIONS(251), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1682] = 1,
    ACTIONS(188), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1691] = 4,
    ACTIONS(253), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(255), 1,
      aux_sym_comment_token1,
    ACTIONS(257), 1,
      anon_sym_STAR_SLASH,
    STATE(73), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [1705] = 5,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      sym__newline,
    ACTIONS(263), 1,
      aux_sym_errorName_token1,
    STATE(93), 1,
      sym_errorName,
    STATE(128), 1,
      sym_errorDescription,
  [1721] = 4,
    ACTIONS(253), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(255), 1,
      aux_sym_comment_token1,
    ACTIONS(265), 1,
      anon_sym_STAR_SLASH,
    STATE(73), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [1735] = 4,
    ACTIONS(253), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(267), 1,
      aux_sym_comment_token1,
    ACTIONS(269), 1,
      anon_sym_STAR_SLASH,
    STATE(67), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [1749] = 4,
    ACTIONS(253), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(271), 1,
      aux_sym_comment_token1,
    ACTIONS(273), 1,
      anon_sym_STAR_SLASH,
    STATE(69), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [1763] = 5,
    ACTIONS(275), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(277), 1,
      aux_sym_errorName_token1,
    ACTIONS(279), 1,
      sym_dictKey,
    STATE(104), 1,
      sym_macro,
    STATE(105), 1,
      sym_dictElem,
  [1779] = 4,
    ACTIONS(281), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(284), 1,
      aux_sym_comment_token1,
    ACTIONS(287), 1,
      anon_sym_STAR_SLASH,
    STATE(73), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [1793] = 5,
    ACTIONS(277), 1,
      aux_sym_errorName_token1,
    ACTIONS(279), 1,
      sym_dictKey,
    ACTIONS(289), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(104), 1,
      sym_macro,
    STATE(105), 1,
      sym_dictElem,
  [1809] = 4,
    ACTIONS(277), 1,
      aux_sym_errorName_token1,
    ACTIONS(279), 1,
      sym_dictKey,
    STATE(104), 1,
      sym_macro,
    STATE(105), 1,
      sym_dictElem,
  [1822] = 4,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    ACTIONS(296), 1,
      aux_sym_errorDescription_token1,
    STATE(76), 1,
      aux_sym_errorDescription_repeat1,
  [1835] = 4,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    ACTIONS(303), 1,
      aux_sym_errorDescription_token1,
    STATE(76), 1,
      aux_sym_errorDescription_repeat1,
  [1848] = 3,
    ACTIONS(35), 1,
      sym_pointer,
    STATE(110), 1,
      sym_value,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
  [1859] = 4,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    ACTIONS(307), 1,
      aux_sym_errorDescription_token1,
    STATE(77), 1,
      aux_sym_errorDescription_repeat1,
  [1872] = 4,
    ACTIONS(277), 1,
      aux_sym_errorName_token1,
    ACTIONS(279), 1,
      sym_dictKey,
    STATE(96), 1,
      sym_dictElem,
    STATE(104), 1,
      sym_macro,
  [1885] = 3,
    ACTIONS(35), 1,
      sym_pointer,
    STATE(112), 1,
      sym_value,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
  [1896] = 4,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      aux_sym_string_token1,
    ACTIONS(313), 1,
      sym__escape_sequence,
    STATE(91), 1,
      aux_sym_string_repeat1,
  [1909] = 3,
    ACTIONS(315), 1,
      sym_integer,
    STATE(132), 1,
      sym_returnValue,
    ACTIONS(317), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1920] = 3,
    ACTIONS(35), 1,
      sym_pointer,
    STATE(135), 1,
      sym_value,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
  [1931] = 4,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
    ACTIONS(321), 1,
      aux_sym_string_token1,
    ACTIONS(324), 1,
      sym__escape_sequence,
    STATE(85), 1,
      aux_sym_string_repeat1,
  [1944] = 3,
    ACTIONS(315), 1,
      sym_integer,
    STATE(116), 1,
      sym_returnValue,
    ACTIONS(317), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1955] = 3,
    ACTIONS(35), 1,
      sym_pointer,
    STATE(20), 1,
      sym_value,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
  [1966] = 3,
    ACTIONS(315), 1,
      sym_integer,
    STATE(123), 1,
      sym_returnValue,
    ACTIONS(317), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1977] = 1,
    ACTIONS(327), 4,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
  [1984] = 3,
    ACTIONS(315), 1,
      sym_integer,
    STATE(114), 1,
      sym_returnValue,
    ACTIONS(317), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1995] = 4,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_string_token1,
    ACTIONS(333), 1,
      sym__escape_sequence,
    STATE(85), 1,
      aux_sym_string_repeat1,
  [2008] = 3,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_dict_repeat1,
  [2018] = 3,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      sym__newline,
    STATE(124), 1,
      sym_errorDescription,
  [2028] = 1,
    ACTIONS(166), 3,
      anon_sym_SLASH_STAR,
      aux_sym_comment_token1,
      anon_sym_STAR_SLASH,
  [2034] = 2,
    ACTIONS(341), 1,
      aux_sym_errorDescription_token1,
    ACTIONS(294), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2042] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_dict_repeat1,
  [2052] = 3,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_dict_repeat1,
  [2062] = 1,
    ACTIONS(176), 3,
      anon_sym_SLASH_STAR,
      aux_sym_comment_token1,
      anon_sym_STAR_SLASH,
  [2068] = 3,
    ACTIONS(352), 1,
      anon_sym_AMP_AMP,
    ACTIONS(355), 1,
      anon_sym_EQ_EQ,
    STATE(99), 1,
      aux_sym_dictElem_repeat1,
  [2078] = 3,
    ACTIONS(357), 1,
      anon_sym_AMP_AMP,
    ACTIONS(359), 1,
      anon_sym_EQ_EQ,
    STATE(99), 1,
      aux_sym_dictElem_repeat1,
  [2088] = 1,
    ACTIONS(361), 2,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
  [2093] = 1,
    ACTIONS(363), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2098] = 1,
    ACTIONS(355), 2,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
  [2103] = 2,
    ACTIONS(357), 1,
      anon_sym_AMP_AMP,
    STATE(100), 1,
      aux_sym_dictElem_repeat1,
  [2110] = 1,
    ACTIONS(350), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2115] = 2,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_dict,
  [2122] = 2,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym__newline,
  [2129] = 2,
    ACTIONS(369), 1,
      anon_sym_killed,
    ACTIONS(371), 1,
      anon_sym_exited,
  [2136] = 2,
    ACTIONS(277), 1,
      aux_sym_errorName_token1,
    STATE(103), 1,
      sym_macro,
  [2143] = 1,
    ACTIONS(373), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2148] = 1,
    ACTIONS(375), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2153] = 2,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(131), 1,
      sym_dict,
  [2160] = 1,
    ACTIONS(377), 1,
      anon_sym_resumed_GT,
  [2164] = 1,
    ACTIONS(379), 1,
      sym__newline,
  [2168] = 1,
    ACTIONS(381), 1,
      anon_sym_by,
  [2172] = 1,
    ACTIONS(383), 1,
      sym__newline,
  [2176] = 1,
    ACTIONS(385), 1,
      anon_sym_with,
  [2180] = 1,
    ACTIONS(387), 1,
      anon_sym_EQ,
  [2184] = 1,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
  [2188] = 1,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
  [2192] = 1,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
  [2196] = 1,
    ACTIONS(395), 1,
      sym__newline,
  [2200] = 1,
    ACTIONS(397), 1,
      sym__newline,
  [2204] = 1,
    ACTIONS(399), 1,
      sym__newline,
  [2208] = 1,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
  [2212] = 1,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
  [2216] = 1,
    ACTIONS(405), 1,
      aux_sym_macro_token1,
  [2220] = 1,
    ACTIONS(339), 1,
      sym__newline,
  [2224] = 1,
    ACTIONS(407), 1,
      sym_integer,
  [2228] = 1,
    ACTIONS(409), 1,
      sym__newline,
  [2232] = 1,
    ACTIONS(411), 1,
      anon_sym_DASH_DASH_DASH,
  [2236] = 1,
    ACTIONS(413), 1,
      sym__newline,
  [2240] = 1,
    ACTIONS(415), 1,
      sym_syscall,
  [2244] = 1,
    ACTIONS(417), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [2248] = 1,
    ACTIONS(419), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [2252] = 1,
    ACTIONS(421), 1,
      ts_builtin_sym_end,
  [2256] = 1,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
  [2260] = 1,
    ACTIONS(425), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 117,
  [SMALL_STATE(5)] = 171,
  [SMALL_STATE(6)] = 225,
  [SMALL_STATE(7)] = 279,
  [SMALL_STATE(8)] = 333,
  [SMALL_STATE(9)] = 382,
  [SMALL_STATE(10)] = 431,
  [SMALL_STATE(11)] = 459,
  [SMALL_STATE(12)] = 487,
  [SMALL_STATE(13)] = 511,
  [SMALL_STATE(14)] = 559,
  [SMALL_STATE(15)] = 607,
  [SMALL_STATE(16)] = 635,
  [SMALL_STATE(17)] = 683,
  [SMALL_STATE(18)] = 730,
  [SMALL_STATE(19)] = 753,
  [SMALL_STATE(20)] = 776,
  [SMALL_STATE(21)] = 799,
  [SMALL_STATE(22)] = 822,
  [SMALL_STATE(23)] = 869,
  [SMALL_STATE(24)] = 916,
  [SMALL_STATE(25)] = 947,
  [SMALL_STATE(26)] = 994,
  [SMALL_STATE(27)] = 1017,
  [SMALL_STATE(28)] = 1045,
  [SMALL_STATE(29)] = 1073,
  [SMALL_STATE(30)] = 1094,
  [SMALL_STATE(31)] = 1115,
  [SMALL_STATE(32)] = 1136,
  [SMALL_STATE(33)] = 1157,
  [SMALL_STATE(34)] = 1178,
  [SMALL_STATE(35)] = 1199,
  [SMALL_STATE(36)] = 1221,
  [SMALL_STATE(37)] = 1241,
  [SMALL_STATE(38)] = 1263,
  [SMALL_STATE(39)] = 1283,
  [SMALL_STATE(40)] = 1302,
  [SMALL_STATE(41)] = 1321,
  [SMALL_STATE(42)] = 1340,
  [SMALL_STATE(43)] = 1359,
  [SMALL_STATE(44)] = 1379,
  [SMALL_STATE(45)] = 1408,
  [SMALL_STATE(46)] = 1425,
  [SMALL_STATE(47)] = 1454,
  [SMALL_STATE(48)] = 1469,
  [SMALL_STATE(49)] = 1484,
  [SMALL_STATE(50)] = 1499,
  [SMALL_STATE(51)] = 1511,
  [SMALL_STATE(52)] = 1523,
  [SMALL_STATE(53)] = 1535,
  [SMALL_STATE(54)] = 1554,
  [SMALL_STATE(55)] = 1566,
  [SMALL_STATE(56)] = 1578,
  [SMALL_STATE(57)] = 1590,
  [SMALL_STATE(58)] = 1602,
  [SMALL_STATE(59)] = 1611,
  [SMALL_STATE(60)] = 1628,
  [SMALL_STATE(61)] = 1637,
  [SMALL_STATE(62)] = 1646,
  [SMALL_STATE(63)] = 1655,
  [SMALL_STATE(64)] = 1664,
  [SMALL_STATE(65)] = 1673,
  [SMALL_STATE(66)] = 1682,
  [SMALL_STATE(67)] = 1691,
  [SMALL_STATE(68)] = 1705,
  [SMALL_STATE(69)] = 1721,
  [SMALL_STATE(70)] = 1735,
  [SMALL_STATE(71)] = 1749,
  [SMALL_STATE(72)] = 1763,
  [SMALL_STATE(73)] = 1779,
  [SMALL_STATE(74)] = 1793,
  [SMALL_STATE(75)] = 1809,
  [SMALL_STATE(76)] = 1822,
  [SMALL_STATE(77)] = 1835,
  [SMALL_STATE(78)] = 1848,
  [SMALL_STATE(79)] = 1859,
  [SMALL_STATE(80)] = 1872,
  [SMALL_STATE(81)] = 1885,
  [SMALL_STATE(82)] = 1896,
  [SMALL_STATE(83)] = 1909,
  [SMALL_STATE(84)] = 1920,
  [SMALL_STATE(85)] = 1931,
  [SMALL_STATE(86)] = 1944,
  [SMALL_STATE(87)] = 1955,
  [SMALL_STATE(88)] = 1966,
  [SMALL_STATE(89)] = 1977,
  [SMALL_STATE(90)] = 1984,
  [SMALL_STATE(91)] = 1995,
  [SMALL_STATE(92)] = 2008,
  [SMALL_STATE(93)] = 2018,
  [SMALL_STATE(94)] = 2028,
  [SMALL_STATE(95)] = 2034,
  [SMALL_STATE(96)] = 2042,
  [SMALL_STATE(97)] = 2052,
  [SMALL_STATE(98)] = 2062,
  [SMALL_STATE(99)] = 2068,
  [SMALL_STATE(100)] = 2078,
  [SMALL_STATE(101)] = 2088,
  [SMALL_STATE(102)] = 2093,
  [SMALL_STATE(103)] = 2098,
  [SMALL_STATE(104)] = 2103,
  [SMALL_STATE(105)] = 2110,
  [SMALL_STATE(106)] = 2115,
  [SMALL_STATE(107)] = 2122,
  [SMALL_STATE(108)] = 2129,
  [SMALL_STATE(109)] = 2136,
  [SMALL_STATE(110)] = 2143,
  [SMALL_STATE(111)] = 2148,
  [SMALL_STATE(112)] = 2153,
  [SMALL_STATE(113)] = 2160,
  [SMALL_STATE(114)] = 2164,
  [SMALL_STATE(115)] = 2168,
  [SMALL_STATE(116)] = 2172,
  [SMALL_STATE(117)] = 2176,
  [SMALL_STATE(118)] = 2180,
  [SMALL_STATE(119)] = 2184,
  [SMALL_STATE(120)] = 2188,
  [SMALL_STATE(121)] = 2192,
  [SMALL_STATE(122)] = 2196,
  [SMALL_STATE(123)] = 2200,
  [SMALL_STATE(124)] = 2204,
  [SMALL_STATE(125)] = 2208,
  [SMALL_STATE(126)] = 2212,
  [SMALL_STATE(127)] = 2216,
  [SMALL_STATE(128)] = 2220,
  [SMALL_STATE(129)] = 2224,
  [SMALL_STATE(130)] = 2228,
  [SMALL_STATE(131)] = 2232,
  [SMALL_STATE(132)] = 2236,
  [SMALL_STATE(133)] = 2240,
  [SMALL_STATE(134)] = 2244,
  [SMALL_STATE(135)] = 2248,
  [SMALL_STATE(136)] = 2252,
  [SMALL_STATE(137)] = 2256,
  [SMALL_STATE(138)] = 2260,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(118),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(27),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(12),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(82),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(120),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(22),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(12),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(80),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(87),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 6),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 6),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictFn, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictFn, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 6),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 5),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_killSignal, 5),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 9),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 8),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 7),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(70),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(73),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_errorDescription_repeat1, 2), SHIFT_REPEAT(121),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_errorDescription_repeat1, 2),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_errorDescription_repeat1, 2), SHIFT_REPEAT(76),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(85),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(85),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pid, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_errorDescription_repeat1, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(75),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictElem_repeat1, 2), SHIFT_REPEAT(109),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictElem_repeat1, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 4),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dictValue, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_errorName, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorName, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [421] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_strace(void) {
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

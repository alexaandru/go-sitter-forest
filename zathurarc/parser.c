#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 2
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_set = 1,
  sym_option = 2,
  sym__int = 3,
  anon_sym_DOT = 4,
  anon_sym_true = 5,
  anon_sym_false = 6,
  aux_sym__word_token1 = 7,
  anon_sym_DQUOTE = 8,
  aux_sym__quoted_string_token1 = 9,
  anon_sym_SQUOTE = 10,
  aux_sym__quoted_string_token2 = 11,
  anon_sym_include = 12,
  anon_sym_unmap = 13,
  anon_sym_map = 14,
  aux_sym_map_directive_token1 = 15,
  aux_sym_map_directive_token2 = 16,
  anon_sym_LT = 17,
  aux_sym_key_token1 = 18,
  anon_sym_GT = 19,
  aux_sym_key_token2 = 20,
  aux_sym_key_token3 = 21,
  anon_sym_LBRACK = 22,
  anon_sym_RBRACK = 23,
  sym_comment = 24,
  sym__eol = 25,
  aux_sym__space_token1 = 26,
  sym_file = 27,
  sym__code = 28,
  sym_set_directive = 29,
  sym_int = 30,
  sym_float = 31,
  sym_string = 32,
  sym_bool = 33,
  aux_sym__word = 34,
  sym__quoted_string = 35,
  sym_include_directive = 36,
  sym_unmap_directive = 37,
  sym_map_directive = 38,
  sym_key = 39,
  sym_mode = 40,
  sym__space = 41,
  sym__end = 42,
  aux_sym_file_repeat1 = 43,
  aux_sym__quoted_string_repeat1 = 44,
  aux_sym__quoted_string_repeat2 = 45,
  aux_sym__space_repeat1 = 46,
  alias_sym_mode_name = 47,
  alias_sym_path = 48,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_set] = "command",
  [sym_option] = "option",
  [sym__int] = "_int",
  [anon_sym_DOT] = ".",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym__word_token1] = "_word_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_string_token1] = "_quoted_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__quoted_string_token2] = "_quoted_string_token2",
  [anon_sym_include] = "command",
  [anon_sym_unmap] = "command",
  [anon_sym_map] = "command",
  [aux_sym_map_directive_token1] = "function",
  [aux_sym_map_directive_token2] = "argument",
  [anon_sym_LT] = "<",
  [aux_sym_key_token1] = "key_name",
  [anon_sym_GT] = ">",
  [aux_sym_key_token2] = "key_token2",
  [aux_sym_key_token3] = "key_token3",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [sym__eol] = "_eol",
  [aux_sym__space_token1] = "_space_token1",
  [sym_file] = "file",
  [sym__code] = "_code",
  [sym_set_directive] = "set_directive",
  [sym_int] = "int",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_bool] = "bool",
  [aux_sym__word] = "_word",
  [sym__quoted_string] = "_quoted_string",
  [sym_include_directive] = "include_directive",
  [sym_unmap_directive] = "unmap_directive",
  [sym_map_directive] = "map_directive",
  [sym_key] = "key",
  [sym_mode] = "mode",
  [sym__space] = "_space",
  [sym__end] = "_end",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym__quoted_string_repeat1] = "_quoted_string_repeat1",
  [aux_sym__quoted_string_repeat2] = "_quoted_string_repeat2",
  [aux_sym__space_repeat1] = "_space_repeat1",
  [alias_sym_mode_name] = "mode_name",
  [alias_sym_path] = "path",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_set] = anon_sym_set,
  [sym_option] = sym_option,
  [sym__int] = sym__int,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym__word_token1] = aux_sym__word_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__quoted_string_token1] = aux_sym__quoted_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__quoted_string_token2] = aux_sym__quoted_string_token2,
  [anon_sym_include] = anon_sym_set,
  [anon_sym_unmap] = anon_sym_set,
  [anon_sym_map] = anon_sym_set,
  [aux_sym_map_directive_token1] = aux_sym_map_directive_token1,
  [aux_sym_map_directive_token2] = aux_sym_map_directive_token2,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_key_token1] = aux_sym_key_token1,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_key_token2] = aux_sym_key_token2,
  [aux_sym_key_token3] = aux_sym_key_token3,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comment] = sym_comment,
  [sym__eol] = sym__eol,
  [aux_sym__space_token1] = aux_sym__space_token1,
  [sym_file] = sym_file,
  [sym__code] = sym__code,
  [sym_set_directive] = sym_set_directive,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_bool] = sym_bool,
  [aux_sym__word] = aux_sym__word,
  [sym__quoted_string] = sym__quoted_string,
  [sym_include_directive] = sym_include_directive,
  [sym_unmap_directive] = sym_unmap_directive,
  [sym_map_directive] = sym_map_directive,
  [sym_key] = sym_key,
  [sym_mode] = sym_mode,
  [sym__space] = sym__space,
  [sym__end] = sym__end,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym__quoted_string_repeat1] = aux_sym__quoted_string_repeat1,
  [aux_sym__quoted_string_repeat2] = aux_sym__quoted_string_repeat2,
  [aux_sym__space_repeat1] = aux_sym__space_repeat1,
  [alias_sym_mode_name] = alias_sym_mode_name,
  [alias_sym_path] = alias_sym_path,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym__int] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unmap] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_map_directive_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_map_directive_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_token3] = {
    .visible = false,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__space_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym__code] = {
    .visible = false,
    .named = true,
  },
  [sym_set_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__word] = {
    .visible = false,
    .named = false,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym_include_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_unmap_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_map_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_mode] = {
    .visible = true,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__space_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_mode_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_path] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_content = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_path,
  },
  [2] = {
    [1] = alias_sym_mode_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__word, 3,
    aux_sym__word,
    alias_sym_mode_name,
    alias_sym_path,
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
  [41] = 15,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 18,
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
  [58] = 23,
  [59] = 59,
  [60] = 32,
  [61] = 48,
  [62] = 57,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') SKIP(0);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == ']') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(70);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == '#') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(70);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(69);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') SKIP(4);
      if (lookahead == '#') ADVANCE(68);
      if (lookahead == '>') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(33);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 't') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(6);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '>' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(7);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '>' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 8:
      if (lookahead == ' ') SKIP(8);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 11:
      if (lookahead == ' ') SKIP(11);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == ' ') SKIP(12);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == ' ') SKIP(13);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 33:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        '\t', 70,
        '\n', 69,
        '\r', 3,
        ' ', 71,
        '#', 68,
        '.', 39,
        'i', 25,
        'm', 14,
        's', 18,
        'u', 26,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__word_token1);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__word_token1);
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__word_token1);
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__word_token1);
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__word_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '"') ADVANCE(48);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__quoted_string_token2);
      if (lookahead == '\'') ADVANCE(52);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_unmap);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_map_directive_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_map_directive_token2);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_key_token2);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_key_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_key_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__space_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\t') ADVANCE(70);
      if (lookahead == ' ') ADVANCE(71);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 34},
  [3] = {.lex_state = 34},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 34},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 34},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 34},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 34},
  [21] = {.lex_state = 34},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 34},
  [24] = {.lex_state = 34},
  [25] = {.lex_state = 34},
  [26] = {.lex_state = 34},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 34},
  [29] = {.lex_state = 34},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 34},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 34},
  [35] = {.lex_state = 34},
  [36] = {.lex_state = 34},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 34},
  [40] = {.lex_state = 34},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 13},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__int] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym__word_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym_key_token2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(50),
    [sym__code] = STATE(10),
    [sym_set_directive] = STATE(10),
    [sym_include_directive] = STATE(10),
    [sym_unmap_directive] = STATE(10),
    [sym_map_directive] = STATE(10),
    [sym__space] = STATE(45),
    [sym__end] = STATE(3),
    [aux_sym_file_repeat1] = STATE(3),
    [aux_sym__space_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_unmap] = ACTIONS(9),
    [anon_sym_map] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__eol] = ACTIONS(15),
    [aux_sym__space_token1] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_set,
    ACTIONS(24), 1,
      anon_sym_include,
    ACTIONS(27), 1,
      anon_sym_unmap,
    ACTIONS(30), 1,
      anon_sym_map,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(36), 1,
      sym__eol,
    ACTIONS(39), 1,
      aux_sym__space_token1,
    STATE(17), 1,
      aux_sym__space_repeat1,
    STATE(45), 1,
      sym__space,
    STATE(2), 2,
      sym__end,
      aux_sym_file_repeat1,
    STATE(10), 5,
      sym__code,
      sym_set_directive,
      sym_include_directive,
      sym_unmap_directive,
      sym_map_directive,
  [42] = 12,
    ACTIONS(5), 1,
      anon_sym_set,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(9), 1,
      anon_sym_unmap,
    ACTIONS(11), 1,
      anon_sym_map,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym__space_token1,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      sym__eol,
    STATE(17), 1,
      aux_sym__space_repeat1,
    STATE(45), 1,
      sym__space,
    STATE(2), 2,
      sym__end,
      aux_sym_file_repeat1,
    STATE(10), 5,
      sym__code,
      sym_set_directive,
      sym_include_directive,
      sym_unmap_directive,
      sym_map_directive,
  [84] = 9,
    ACTIONS(46), 1,
      sym__int,
    ACTIONS(48), 1,
      anon_sym_DOT,
    ACTIONS(52), 1,
      aux_sym__word_token1,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      aux_sym__word,
    STATE(29), 1,
      sym__quoted_string,
    ACTIONS(50), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 4,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
  [116] = 2,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      aux_sym__space_token1,
    ACTIONS(58), 6,
      anon_sym_set,
      anon_sym_include,
      anon_sym_unmap,
      anon_sym_map,
      sym_comment,
      sym__eol,
  [129] = 2,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      aux_sym__space_token1,
    ACTIONS(62), 6,
      anon_sym_set,
      anon_sym_include,
      anon_sym_unmap,
      anon_sym_map,
      sym_comment,
      sym__eol,
  [142] = 2,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      aux_sym__space_token1,
    ACTIONS(66), 6,
      anon_sym_set,
      anon_sym_include,
      anon_sym_unmap,
      anon_sym_map,
      sym_comment,
      sym__eol,
  [155] = 5,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_mode,
    STATE(56), 1,
      sym_key,
    ACTIONS(70), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [172] = 5,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      anon_sym_LT,
    STATE(19), 1,
      sym_mode,
    STATE(28), 1,
      sym_key,
    ACTIONS(76), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [189] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym__space_token1,
    ACTIONS(78), 1,
      sym__eol,
    STATE(5), 1,
      sym__end,
    STATE(17), 1,
      aux_sym__space_repeat1,
    STATE(45), 1,
      sym__space,
  [208] = 4,
    ACTIONS(82), 1,
      aux_sym__space_token1,
    STATE(17), 1,
      aux_sym__space_repeat1,
    STATE(55), 1,
      sym__space,
    ACTIONS(80), 2,
      sym_comment,
      sym__eol,
  [222] = 4,
    ACTIONS(52), 1,
      aux_sym__word_token1,
    ACTIONS(87), 1,
      aux_sym__space_token1,
    STATE(15), 1,
      aux_sym__word,
    ACTIONS(85), 2,
      sym_comment,
      sym__eol,
  [236] = 3,
    ACTIONS(91), 1,
      aux_sym__space_token1,
    STATE(13), 1,
      aux_sym__space_repeat1,
    ACTIONS(89), 3,
      aux_sym_map_directive_token2,
      sym_comment,
      sym__eol,
  [248] = 4,
    ACTIONS(52), 1,
      aux_sym__word_token1,
    ACTIONS(96), 1,
      aux_sym__space_token1,
    STATE(15), 1,
      aux_sym__word,
    ACTIONS(94), 2,
      sym_comment,
      sym__eol,
  [262] = 4,
    ACTIONS(98), 1,
      aux_sym__word_token1,
    ACTIONS(103), 1,
      aux_sym__space_token1,
    STATE(15), 1,
      aux_sym__word,
    ACTIONS(101), 2,
      sym_comment,
      sym__eol,
  [276] = 4,
    ACTIONS(107), 1,
      aux_sym__space_token1,
    STATE(17), 1,
      aux_sym__space_repeat1,
    STATE(59), 1,
      sym__space,
    ACTIONS(105), 2,
      sym_comment,
      sym__eol,
  [290] = 3,
    ACTIONS(112), 1,
      aux_sym__space_token1,
    STATE(13), 1,
      aux_sym__space_repeat1,
    ACTIONS(110), 3,
      aux_sym_map_directive_token2,
      sym_comment,
      sym__eol,
  [302] = 2,
    ACTIONS(116), 1,
      aux_sym__space_token1,
    ACTIONS(114), 3,
      aux_sym__word_token1,
      sym_comment,
      sym__eol,
  [311] = 3,
    ACTIONS(74), 1,
      anon_sym_LT,
    STATE(26), 1,
      sym_key,
    ACTIONS(76), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [322] = 3,
    ACTIONS(118), 1,
      anon_sym_DOT,
    ACTIONS(122), 1,
      aux_sym__space_token1,
    ACTIONS(120), 2,
      sym_comment,
      sym__eol,
  [333] = 3,
    ACTIONS(124), 1,
      sym__int,
    ACTIONS(128), 1,
      aux_sym__space_token1,
    ACTIONS(126), 2,
      sym_comment,
      sym__eol,
  [344] = 3,
    ACTIONS(68), 1,
      anon_sym_LT,
    STATE(49), 1,
      sym_key,
    ACTIONS(70), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [355] = 2,
    ACTIONS(132), 1,
      aux_sym__space_token1,
    ACTIONS(130), 2,
      sym_comment,
      sym__eol,
  [363] = 2,
    ACTIONS(136), 1,
      aux_sym__space_token1,
    ACTIONS(134), 2,
      sym_comment,
      sym__eol,
  [371] = 2,
    ACTIONS(140), 1,
      aux_sym__space_token1,
    ACTIONS(138), 2,
      sym_comment,
      sym__eol,
  [379] = 2,
    ACTIONS(144), 1,
      aux_sym__space_token1,
    ACTIONS(142), 2,
      sym_comment,
      sym__eol,
  [387] = 3,
    ACTIONS(146), 1,
      aux_sym__word_token1,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      aux_sym__word,
  [397] = 2,
    ACTIONS(152), 1,
      aux_sym__space_token1,
    ACTIONS(150), 2,
      sym_comment,
      sym__eol,
  [405] = 2,
    ACTIONS(96), 1,
      aux_sym__space_token1,
    ACTIONS(94), 2,
      sym_comment,
      sym__eol,
  [413] = 3,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      aux_sym__quoted_string_token1,
    STATE(37), 1,
      aux_sym__quoted_string_repeat1,
  [423] = 3,
    ACTIONS(154), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      aux_sym__quoted_string_token2,
    STATE(38), 1,
      aux_sym__quoted_string_repeat2,
  [433] = 2,
    ACTIONS(162), 1,
      aux_sym__space_token1,
    ACTIONS(160), 2,
      sym_comment,
      sym__eol,
  [441] = 2,
    ACTIONS(164), 1,
      anon_sym_LT,
    ACTIONS(166), 2,
      aux_sym_key_token2,
      aux_sym_key_token3,
  [449] = 2,
    ACTIONS(128), 1,
      aux_sym__space_token1,
    ACTIONS(126), 2,
      sym_comment,
      sym__eol,
  [457] = 2,
    ACTIONS(170), 1,
      aux_sym__space_token1,
    ACTIONS(168), 2,
      sym_comment,
      sym__eol,
  [465] = 2,
    ACTIONS(174), 1,
      aux_sym__space_token1,
    ACTIONS(172), 2,
      sym_comment,
      sym__eol,
  [473] = 3,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      aux_sym__quoted_string_token1,
    STATE(37), 1,
      aux_sym__quoted_string_repeat1,
  [483] = 3,
    ACTIONS(181), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      aux_sym__quoted_string_token2,
    STATE(38), 1,
      aux_sym__quoted_string_repeat2,
  [493] = 2,
    ACTIONS(188), 1,
      aux_sym__space_token1,
    ACTIONS(186), 2,
      sym_comment,
      sym__eol,
  [501] = 2,
    ACTIONS(192), 1,
      aux_sym__space_token1,
    ACTIONS(190), 2,
      sym_comment,
      sym__eol,
  [509] = 3,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    ACTIONS(194), 1,
      aux_sym__word_token1,
    STATE(41), 1,
      aux_sym__word,
  [519] = 2,
    ACTIONS(197), 1,
      aux_sym__quoted_string_token1,
    STATE(30), 1,
      aux_sym__quoted_string_repeat1,
  [526] = 2,
    ACTIONS(199), 1,
      aux_sym__word_token1,
    STATE(27), 1,
      aux_sym__word,
  [533] = 2,
    ACTIONS(201), 1,
      aux_sym__quoted_string_token2,
    STATE(31), 1,
      aux_sym__quoted_string_repeat2,
  [540] = 2,
    ACTIONS(203), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym__eol,
  [547] = 2,
    ACTIONS(207), 1,
      aux_sym__word_token1,
    STATE(12), 1,
      aux_sym__word,
  [554] = 2,
    ACTIONS(114), 1,
      aux_sym__word_token1,
    ACTIONS(116), 1,
      anon_sym_RBRACK,
  [561] = 1,
    ACTIONS(209), 1,
      anon_sym_GT,
  [565] = 1,
    ACTIONS(211), 1,
      aux_sym_map_directive_token1,
  [569] = 1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
  [573] = 1,
    ACTIONS(215), 1,
      sym__int,
  [577] = 1,
    ACTIONS(217), 1,
      sym_option,
  [581] = 1,
    ACTIONS(205), 1,
      sym__eol,
  [585] = 1,
    ACTIONS(219), 1,
      sym__eol,
  [589] = 1,
    ACTIONS(221), 1,
      aux_sym_map_directive_token2,
  [593] = 1,
    ACTIONS(223), 1,
      aux_sym_map_directive_token1,
  [597] = 1,
    ACTIONS(225), 1,
      aux_sym_key_token1,
  [601] = 1,
    ACTIONS(132), 1,
      aux_sym_map_directive_token1,
  [605] = 1,
    ACTIONS(227), 1,
      aux_sym_map_directive_token2,
  [609] = 1,
    ACTIONS(162), 1,
      aux_sym_map_directive_token1,
  [613] = 1,
    ACTIONS(229), 1,
      anon_sym_GT,
  [617] = 1,
    ACTIONS(231), 1,
      aux_sym_key_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 116,
  [SMALL_STATE(6)] = 129,
  [SMALL_STATE(7)] = 142,
  [SMALL_STATE(8)] = 155,
  [SMALL_STATE(9)] = 172,
  [SMALL_STATE(10)] = 189,
  [SMALL_STATE(11)] = 208,
  [SMALL_STATE(12)] = 222,
  [SMALL_STATE(13)] = 236,
  [SMALL_STATE(14)] = 248,
  [SMALL_STATE(15)] = 262,
  [SMALL_STATE(16)] = 276,
  [SMALL_STATE(17)] = 290,
  [SMALL_STATE(18)] = 302,
  [SMALL_STATE(19)] = 311,
  [SMALL_STATE(20)] = 322,
  [SMALL_STATE(21)] = 333,
  [SMALL_STATE(22)] = 344,
  [SMALL_STATE(23)] = 355,
  [SMALL_STATE(24)] = 363,
  [SMALL_STATE(25)] = 371,
  [SMALL_STATE(26)] = 379,
  [SMALL_STATE(27)] = 387,
  [SMALL_STATE(28)] = 397,
  [SMALL_STATE(29)] = 405,
  [SMALL_STATE(30)] = 413,
  [SMALL_STATE(31)] = 423,
  [SMALL_STATE(32)] = 433,
  [SMALL_STATE(33)] = 441,
  [SMALL_STATE(34)] = 449,
  [SMALL_STATE(35)] = 457,
  [SMALL_STATE(36)] = 465,
  [SMALL_STATE(37)] = 473,
  [SMALL_STATE(38)] = 483,
  [SMALL_STATE(39)] = 493,
  [SMALL_STATE(40)] = 501,
  [SMALL_STATE(41)] = 509,
  [SMALL_STATE(42)] = 519,
  [SMALL_STATE(43)] = 526,
  [SMALL_STATE(44)] = 533,
  [SMALL_STATE(45)] = 540,
  [SMALL_STATE(46)] = 547,
  [SMALL_STATE(47)] = 554,
  [SMALL_STATE(48)] = 561,
  [SMALL_STATE(49)] = 565,
  [SMALL_STATE(50)] = 569,
  [SMALL_STATE(51)] = 573,
  [SMALL_STATE(52)] = 577,
  [SMALL_STATE(53)] = 581,
  [SMALL_STATE(54)] = 585,
  [SMALL_STATE(55)] = 589,
  [SMALL_STATE(56)] = 593,
  [SMALL_STATE(57)] = 597,
  [SMALL_STATE(58)] = 601,
  [SMALL_STATE(59)] = 605,
  [SMALL_STATE(60)] = 609,
  [SMALL_STATE(61)] = 613,
  [SMALL_STATE(62)] = 617,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_directive, 4, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_map_directive, 4, 0, 0), SHIFT(17),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_directive, 2, 0, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2, 0, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__space_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__space_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__word, 2, 0, 0), SHIFT_REPEAT(18),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__word, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__word, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_directive, 3, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_map_directive, 3, 0, 0), SHIFT(17),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__space, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__word, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__word, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_directive, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_directive, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmap_directive, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unmap_directive, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unmap_directive, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unmap_directive, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 3, 0, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode, 3, 0, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 3, 0, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3, 0, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2, 0, 0),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat2, 2, 0, 0),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat2, 2, 0, 0), SHIFT_REPEAT(38),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_directive, 5, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_directive, 5, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_directive, 6, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_directive, 6, 0, 0),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__word, 2, 0, 0), SHIFT_REPEAT(47),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [213] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
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

TS_PUBLIC const TSLanguage *tree_sitter_zathurarc(void) {
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

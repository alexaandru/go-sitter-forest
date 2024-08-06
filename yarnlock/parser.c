#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 1
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 28

enum ts_symbol_identifiers {
  anon_sym_AT = 1,
  anon_sym_COMMA = 2,
  anon_sym_DQUOTE = 3,
  aux_sym_dependency_token1 = 4,
  anon_sym_COLON = 5,
  anon_sym_version = 6,
  anon_sym_resolved = 7,
  aux_sym_resolved_token1 = 8,
  anon_sym_dependencies = 9,
  anon_sym_integrity = 10,
  aux_sym_integrity_token1 = 11,
  anon_sym_CARET = 12,
  anon_sym_TILDE = 13,
  anon_sym_EQ = 14,
  anon_sym_GT_EQ = 15,
  anon_sym_GT = 16,
  aux_sym_semver_token1 = 17,
  anon_sym_DOT = 18,
  aux_sym_semver_token2 = 19,
  aux_sym_semver_token3 = 20,
  aux_sym_semver_token4 = 21,
  sym__indent = 22,
  sym__newline = 23,
  sym_identifier = 24,
  sym_comment = 25,
  sym_lock_file = 26,
  sym_dependency = 27,
  sym_dependency_body = 28,
  sym_version = 29,
  sym_resolved = 30,
  sym_dependencies = 31,
  sym_dependency_list = 32,
  sym_dependency_entry = 33,
  sym_integrity = 34,
  sym_semver = 35,
  aux_sym_lock_file_repeat1 = 36,
  aux_sym_dependency_repeat1 = 37,
  aux_sym_dependency_repeat2 = 38,
  aux_sym_dependency_body_repeat1 = 39,
  aux_sym_dependency_list_repeat1 = 40,
  alias_sym_minor = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT] = "@",
  [anon_sym_COMMA] = ",",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_dependency_token1] = "url",
  [anon_sym_COLON] = ":",
  [anon_sym_version] = "version",
  [anon_sym_resolved] = "resolved",
  [aux_sym_resolved_token1] = "url",
  [anon_sym_dependencies] = "dependencies",
  [anon_sym_integrity] = "integrity",
  [aux_sym_integrity_token1] = "hash",
  [anon_sym_CARET] = "^",
  [anon_sym_TILDE] = "~",
  [anon_sym_EQ] = "=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [aux_sym_semver_token1] = "major",
  [anon_sym_DOT] = ".",
  [aux_sym_semver_token2] = "patch",
  [aux_sym_semver_token3] = "semver_token3",
  [aux_sym_semver_token4] = "semver_token4",
  [sym__indent] = "_indent",
  [sym__newline] = "_newline",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_lock_file] = "lock_file",
  [sym_dependency] = "dependency",
  [sym_dependency_body] = "dependency_body",
  [sym_version] = "version",
  [sym_resolved] = "resolved",
  [sym_dependencies] = "dependencies",
  [sym_dependency_list] = "dependency_list",
  [sym_dependency_entry] = "dependency_entry",
  [sym_integrity] = "integrity",
  [sym_semver] = "semver",
  [aux_sym_lock_file_repeat1] = "lock_file_repeat1",
  [aux_sym_dependency_repeat1] = "dependency_repeat1",
  [aux_sym_dependency_repeat2] = "dependency_repeat2",
  [aux_sym_dependency_body_repeat1] = "dependency_body_repeat1",
  [aux_sym_dependency_list_repeat1] = "dependency_list_repeat1",
  [alias_sym_minor] = "minor",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_dependency_token1] = aux_sym_dependency_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_version] = anon_sym_version,
  [anon_sym_resolved] = anon_sym_resolved,
  [aux_sym_resolved_token1] = aux_sym_dependency_token1,
  [anon_sym_dependencies] = anon_sym_dependencies,
  [anon_sym_integrity] = anon_sym_integrity,
  [aux_sym_integrity_token1] = aux_sym_integrity_token1,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_semver_token1] = aux_sym_semver_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_semver_token2] = aux_sym_semver_token2,
  [aux_sym_semver_token3] = aux_sym_semver_token3,
  [aux_sym_semver_token4] = aux_sym_semver_token4,
  [sym__indent] = sym__indent,
  [sym__newline] = sym__newline,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_lock_file] = sym_lock_file,
  [sym_dependency] = sym_dependency,
  [sym_dependency_body] = sym_dependency_body,
  [sym_version] = sym_version,
  [sym_resolved] = sym_resolved,
  [sym_dependencies] = sym_dependencies,
  [sym_dependency_list] = sym_dependency_list,
  [sym_dependency_entry] = sym_dependency_entry,
  [sym_integrity] = sym_integrity,
  [sym_semver] = sym_semver,
  [aux_sym_lock_file_repeat1] = aux_sym_lock_file_repeat1,
  [aux_sym_dependency_repeat1] = aux_sym_dependency_repeat1,
  [aux_sym_dependency_repeat2] = aux_sym_dependency_repeat2,
  [aux_sym_dependency_body_repeat1] = aux_sym_dependency_body_repeat1,
  [aux_sym_dependency_list_repeat1] = aux_sym_dependency_list_repeat1,
  [alias_sym_minor] = alias_sym_minor,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_dependency_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resolved] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_resolved_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_dependencies] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integrity] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_integrity_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_semver_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_semver_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_semver_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_semver_token4] = {
    .visible = false,
    .named = false,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_lock_file] = {
    .visible = true,
    .named = true,
  },
  [sym_dependency] = {
    .visible = true,
    .named = true,
  },
  [sym_dependency_body] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_resolved] = {
    .visible = true,
    .named = true,
  },
  [sym_dependencies] = {
    .visible = true,
    .named = true,
  },
  [sym_dependency_list] = {
    .visible = true,
    .named = true,
  },
  [sym_dependency_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_integrity] = {
    .visible = true,
    .named = true,
  },
  [sym_semver] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_lock_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dependency_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dependency_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dependency_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dependency_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_minor] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_build = 1,
  field_name = 2,
  field_operator = 3,
  field_prerelease = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_build] = "build",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_prerelease] = "prerelease",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 0, .length = 1},
  [10] = {.index = 11, .length = 3},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 2},
  [14] = {.index = 18, .length = 2},
  [15] = {.index = 20, .length = 2},
  [16] = {.index = 22, .length = 1},
  [17] = {.index = 23, .length = 1},
  [18] = {.index = 24, .length = 3},
  [19] = {.index = 27, .length = 1},
  [20] = {.index = 28, .length = 1},
  [21] = {.index = 29, .length = 2},
  [22] = {.index = 31, .length = 2},
  [23] = {.index = 33, .length = 2},
  [24] = {.index = 35, .length = 2},
  [25] = {.index = 37, .length = 2},
  [26] = {.index = 39, .length = 3},
  [27] = {.index = 42, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operator, 0},
  [1] =
    {field_prerelease, 1},
  [2] =
    {field_build, 1},
  [3] =
    {field_operator, 0},
    {field_prerelease, 2},
  [5] =
    {field_build, 2},
    {field_operator, 0},
  [7] =
    {field_build, 2},
    {field_prerelease, 1},
  [9] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [11] =
    {field_build, 3},
    {field_operator, 0},
    {field_prerelease, 2},
  [14] =
    {field_prerelease, 3},
  [15] =
    {field_build, 3},
  [16] =
    {field_operator, 0},
    {field_prerelease, 4},
  [18] =
    {field_build, 4},
    {field_operator, 0},
  [20] =
    {field_build, 4},
    {field_prerelease, 3},
  [22] =
    {field_name, 1},
  [23] =
    {field_name, 0},
  [24] =
    {field_build, 5},
    {field_operator, 0},
    {field_prerelease, 4},
  [27] =
    {field_prerelease, 5},
  [28] =
    {field_build, 5},
  [29] =
    {field_name, 0},
    {field_name, 3, .inherited = true},
  [31] =
    {field_operator, 0},
    {field_prerelease, 6},
  [33] =
    {field_build, 6},
    {field_operator, 0},
  [35] =
    {field_build, 6},
    {field_prerelease, 5},
  [37] =
    {field_name, 1},
    {field_name, 5, .inherited = true},
  [39] =
    {field_build, 7},
    {field_operator, 0},
    {field_prerelease, 6},
  [42] =
    {field_name, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [2] = alias_sym_minor,
  },
  [9] = {
    [3] = alias_sym_minor,
  },
  [11] = {
    [2] = alias_sym_minor,
  },
  [12] = {
    [2] = alias_sym_minor,
  },
  [13] = {
    [3] = alias_sym_minor,
  },
  [14] = {
    [3] = alias_sym_minor,
  },
  [15] = {
    [2] = alias_sym_minor,
  },
  [18] = {
    [3] = alias_sym_minor,
  },
  [19] = {
    [2] = alias_sym_minor,
  },
  [20] = {
    [2] = alias_sym_minor,
  },
  [22] = {
    [3] = alias_sym_minor,
  },
  [23] = {
    [3] = alias_sym_minor,
  },
  [24] = {
    [2] = alias_sym_minor,
  },
  [26] = {
    [3] = alias_sym_minor,
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
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      ADVANCE_MAP(
        '"', 51,
        '#', 99,
        '+', 41,
        ',', 50,
        '-', 42,
        '.', 72,
        ':', 55,
        '=', 68,
        '>', 70,
        '@', 49,
        '^', 66,
        'd', 12,
        'i', 25,
        'r', 13,
        'v', 14,
        'x', 73,
        '~', 67,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == '#') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '#') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '>') ADVANCE(70);
      if (lookahead == '^') ADVANCE(66);
      if (lookahead == '~') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == 'x') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '@') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(100);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 39:
      if (lookahead == 'v') ADVANCE(17);
      END_STATE();
    case 40:
      if (lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 41:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(76);
      END_STATE();
    case 42:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(75);
      END_STATE();
    case 43:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 44:
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(54);
      END_STATE();
    case 45:
      if (eof) ADVANCE(48);
      ADVANCE_MAP(
        '"', 51,
        '#', 99,
        '+', 41,
        ',', 50,
        '-', 42,
        ':', 55,
        '=', 68,
        '>', 70,
        '@', 49,
        '^', 66,
        'd', 12,
        'i', 25,
        'r', 13,
        'v', 14,
        'x', 73,
        '~', 67,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 46:
      if (eof) ADVANCE(48);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '@') ADVANCE(99);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '@') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_resolved);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_resolved_token1);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '"') ADVANCE(99);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_resolved_token1);
      if (lookahead == '#') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_resolved_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_dependencies);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_dependencies);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_integrity);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_integrity);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_integrity_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_semver_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_semver_token2);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_semver_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_semver_token3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_semver_token4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__indent);
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 47},
  [2] = {.lex_state = 46},
  [3] = {.lex_state = 46},
  [4] = {.lex_state = 46},
  [5] = {.lex_state = 46},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 46},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 47},
  [18] = {.lex_state = 46},
  [19] = {.lex_state = 46},
  [20] = {.lex_state = 46},
  [21] = {.lex_state = 46},
  [22] = {.lex_state = 47},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 47},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 47},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 47},
  [54] = {.lex_state = 47},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 47},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 47},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_resolved] = ACTIONS(1),
    [anon_sym_dependencies] = ACTIONS(1),
    [anon_sym_integrity] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym_semver_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_semver_token2] = ACTIONS(1),
    [aux_sym_semver_token3] = ACTIONS(1),
    [aux_sym_semver_token4] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_lock_file] = STATE(94),
    [sym_dependency] = STATE(22),
    [aux_sym_lock_file_repeat1] = STATE(22),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_dependencies,
    ACTIONS(14), 1,
      anon_sym_integrity,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    STATE(2), 3,
      sym_dependencies,
      sym_integrity,
      aux_sym_dependency_body_repeat1,
  [22] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_dependencies,
    ACTIONS(23), 1,
      anon_sym_integrity,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    STATE(4), 3,
      sym_dependencies,
      sym_integrity,
      aux_sym_dependency_body_repeat1,
  [44] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_dependencies,
    ACTIONS(23), 1,
      anon_sym_integrity,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    STATE(2), 3,
      sym_dependencies,
      sym_integrity,
      aux_sym_dependency_body_repeat1,
  [66] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(33), 2,
      anon_sym_dependencies,
      anon_sym_integrity,
    STATE(11), 2,
      sym_dependency_entry,
      aux_sym_dependency_list_repeat1,
  [85] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_GT,
    ACTIONS(42), 1,
      aux_sym_semver_token1,
    STATE(34), 1,
      sym_semver,
    ACTIONS(38), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [104] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_GT,
    ACTIONS(42), 1,
      aux_sym_semver_token1,
    STATE(87), 1,
      sym_semver,
    ACTIONS(38), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [123] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_GT,
    ACTIONS(42), 1,
      aux_sym_semver_token1,
    STATE(78), 1,
      sym_semver,
    ACTIONS(38), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [142] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_GT,
    ACTIONS(42), 1,
      aux_sym_semver_token1,
    STATE(95), 1,
      sym_semver,
    ACTIONS(38), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [161] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_GT,
    ACTIONS(42), 1,
      aux_sym_semver_token1,
    STATE(66), 1,
      sym_semver,
    ACTIONS(38), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [180] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      sym_identifier,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(46), 2,
      anon_sym_dependencies,
      anon_sym_integrity,
    STATE(11), 2,
      sym_dependency_entry,
      aux_sym_dependency_list_repeat1,
  [199] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_GT,
    ACTIONS(42), 1,
      aux_sym_semver_token1,
    STATE(59), 1,
      sym_semver,
    ACTIONS(38), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [218] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      aux_sym_semver_token3,
    ACTIONS(57), 1,
      aux_sym_semver_token4,
    ACTIONS(51), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [236] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(63), 1,
      aux_sym_semver_token3,
    ACTIONS(65), 1,
      aux_sym_semver_token4,
    ACTIONS(59), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [254] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(71), 1,
      aux_sym_semver_token3,
    ACTIONS(73), 1,
      aux_sym_semver_token4,
    ACTIONS(67), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [272] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_DOT,
    ACTIONS(79), 1,
      aux_sym_semver_token3,
    ACTIONS(81), 1,
      aux_sym_semver_token4,
    ACTIONS(75), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [290] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(17), 2,
      sym_dependency,
      aux_sym_lock_file_repeat1,
  [307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(93), 3,
      anon_sym_dependencies,
      anon_sym_integrity,
      sym_identifier,
  [320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(97), 3,
      anon_sym_dependencies,
      anon_sym_integrity,
      sym_identifier,
  [333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(101), 3,
      anon_sym_dependencies,
      anon_sym_integrity,
      sym_identifier,
  [346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(105), 3,
      anon_sym_dependencies,
      anon_sym_integrity,
      sym_identifier,
  [359] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(17), 2,
      sym_dependency,
      aux_sym_lock_file_repeat1,
  [376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym_semver_token3,
    ACTIONS(113), 1,
      aux_sym_semver_token4,
    ACTIONS(109), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym_semver_token3,
    ACTIONS(119), 1,
      aux_sym_semver_token4,
    ACTIONS(115), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      aux_sym_semver_token4,
    ACTIONS(121), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      aux_sym_semver_token4,
    ACTIONS(125), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(18), 1,
      sym_dependency_list,
    STATE(5), 2,
      sym_dependency_entry,
      aux_sym_dependency_list_repeat1,
  [444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_semver_token4,
    ACTIONS(131), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_semver_token4,
    ACTIONS(135), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_semver_token4,
    ACTIONS(139), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_semver_token4,
    ACTIONS(143), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_COLON,
    STATE(33), 1,
      aux_sym_dependency_repeat2,
  [514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_COLON,
    STATE(51), 1,
      aux_sym_dependency_repeat1,
  [527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_COLON,
    STATE(35), 1,
      aux_sym_dependency_repeat1,
  [540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_COLON,
    STATE(33), 1,
      aux_sym_dependency_repeat2,
  [571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_version,
    STATE(53), 1,
      sym_dependency_body,
    STATE(58), 1,
      sym_version,
  [611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_COLON,
    STATE(38), 1,
      aux_sym_dependency_repeat2,
  [624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_COLON,
    STATE(35), 1,
      aux_sym_dependency_repeat1,
  [700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_version,
    STATE(44), 1,
      sym_dependency_body,
    STATE(58), 1,
      sym_version,
  [713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [731] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_version,
    STATE(54), 1,
      sym_dependency_body,
    STATE(58), 1,
      sym_version,
  [744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_version,
    STATE(56), 1,
      sym_dependency_body,
    STATE(58), 1,
      sym_version,
  [766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_resolved,
    STATE(3), 1,
      sym_resolved,
  [776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [792] = 2,
    ACTIONS(209), 1,
      sym__newline,
    ACTIONS(211), 1,
      sym_comment,
  [799] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym_dependency_token1,
  [806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
  [813] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym__indent,
  [820] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym_dependency_token1,
  [827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
  [834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_identifier,
  [841] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym__indent,
  [848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_AT,
  [855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_AT,
  [862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
  [869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      aux_sym_semver_token2,
  [876] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym__newline,
  [883] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym_resolved_token1,
  [890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_COLON,
  [897] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(241), 1,
      aux_sym_integrity_token1,
  [904] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym__newline,
  [911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
  [918] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym__indent,
  [925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      aux_sym_semver_token1,
  [932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_resolved,
  [939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
  [946] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym__newline,
  [953] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym__indent,
  [960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_semver_token1,
  [967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      aux_sym_semver_token2,
  [974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
  [981] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym__indent,
  [988] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym__newline,
  [995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
  [1002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
  [1009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym_semver_token1,
  [1016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_AT,
  [1023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
  [1030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
  [1037] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym__newline,
  [1044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_AT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 85,
  [SMALL_STATE(7)] = 104,
  [SMALL_STATE(8)] = 123,
  [SMALL_STATE(9)] = 142,
  [SMALL_STATE(10)] = 161,
  [SMALL_STATE(11)] = 180,
  [SMALL_STATE(12)] = 199,
  [SMALL_STATE(13)] = 218,
  [SMALL_STATE(14)] = 236,
  [SMALL_STATE(15)] = 254,
  [SMALL_STATE(16)] = 272,
  [SMALL_STATE(17)] = 290,
  [SMALL_STATE(18)] = 307,
  [SMALL_STATE(19)] = 320,
  [SMALL_STATE(20)] = 333,
  [SMALL_STATE(21)] = 346,
  [SMALL_STATE(22)] = 359,
  [SMALL_STATE(23)] = 376,
  [SMALL_STATE(24)] = 391,
  [SMALL_STATE(25)] = 406,
  [SMALL_STATE(26)] = 418,
  [SMALL_STATE(27)] = 430,
  [SMALL_STATE(28)] = 444,
  [SMALL_STATE(29)] = 456,
  [SMALL_STATE(30)] = 468,
  [SMALL_STATE(31)] = 480,
  [SMALL_STATE(32)] = 492,
  [SMALL_STATE(33)] = 501,
  [SMALL_STATE(34)] = 514,
  [SMALL_STATE(35)] = 527,
  [SMALL_STATE(36)] = 540,
  [SMALL_STATE(37)] = 549,
  [SMALL_STATE(38)] = 558,
  [SMALL_STATE(39)] = 571,
  [SMALL_STATE(40)] = 580,
  [SMALL_STATE(41)] = 589,
  [SMALL_STATE(42)] = 598,
  [SMALL_STATE(43)] = 611,
  [SMALL_STATE(44)] = 624,
  [SMALL_STATE(45)] = 633,
  [SMALL_STATE(46)] = 642,
  [SMALL_STATE(47)] = 651,
  [SMALL_STATE(48)] = 660,
  [SMALL_STATE(49)] = 669,
  [SMALL_STATE(50)] = 678,
  [SMALL_STATE(51)] = 687,
  [SMALL_STATE(52)] = 700,
  [SMALL_STATE(53)] = 713,
  [SMALL_STATE(54)] = 722,
  [SMALL_STATE(55)] = 731,
  [SMALL_STATE(56)] = 744,
  [SMALL_STATE(57)] = 753,
  [SMALL_STATE(58)] = 766,
  [SMALL_STATE(59)] = 776,
  [SMALL_STATE(60)] = 784,
  [SMALL_STATE(61)] = 792,
  [SMALL_STATE(62)] = 799,
  [SMALL_STATE(63)] = 806,
  [SMALL_STATE(64)] = 813,
  [SMALL_STATE(65)] = 820,
  [SMALL_STATE(66)] = 827,
  [SMALL_STATE(67)] = 834,
  [SMALL_STATE(68)] = 841,
  [SMALL_STATE(69)] = 848,
  [SMALL_STATE(70)] = 855,
  [SMALL_STATE(71)] = 862,
  [SMALL_STATE(72)] = 869,
  [SMALL_STATE(73)] = 876,
  [SMALL_STATE(74)] = 883,
  [SMALL_STATE(75)] = 890,
  [SMALL_STATE(76)] = 897,
  [SMALL_STATE(77)] = 904,
  [SMALL_STATE(78)] = 911,
  [SMALL_STATE(79)] = 918,
  [SMALL_STATE(80)] = 925,
  [SMALL_STATE(81)] = 932,
  [SMALL_STATE(82)] = 939,
  [SMALL_STATE(83)] = 946,
  [SMALL_STATE(84)] = 953,
  [SMALL_STATE(85)] = 960,
  [SMALL_STATE(86)] = 967,
  [SMALL_STATE(87)] = 974,
  [SMALL_STATE(88)] = 981,
  [SMALL_STATE(89)] = 988,
  [SMALL_STATE(90)] = 995,
  [SMALL_STATE(91)] = 1002,
  [SMALL_STATE(92)] = 1009,
  [SMALL_STATE(93)] = 1016,
  [SMALL_STATE(94)] = 1023,
  [SMALL_STATE(95)] = 1030,
  [SMALL_STATE(96)] = 1037,
  [SMALL_STATE(97)] = 1044,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_body_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_body_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_body_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dependency_body_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_body, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_body, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_body, 3, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_body, 3, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_list, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_list, 1, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_dependency_list, 1, 0, 0), SHIFT(90),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_list_repeat1, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dependency_list_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_list_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 3, 0, 6),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 2, 0, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 4, 0, 9),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lock_file_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lock_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lock_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 5, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependencies, 5, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resolved, 4, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resolved, 4, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_entry, 5, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_entry, 5, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integrity, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integrity, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_file, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 6, 0, 9),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 5, 0, 6),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 5, 0, 13),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 4, 0, 11),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 3, 0, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 2, 0, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 7, 0, 22),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 6, 0, 19),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 8, 0, 26),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_repeat2, 2, 0, 8), SHIFT_REPEAT(91),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_repeat2, 2, 0, 8),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2, 0, 8), SHIFT_REPEAT(67),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2, 0, 8),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 3, 0, 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 6, 0, 18),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 4, 0, 10),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 3, 0, 7),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 4, 0, 12),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 10, 0, 25),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 2, 0, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 7, 0, 24),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 6, 0, 20),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 7, 0, 23),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 5, 0, 14),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 5, 0, 15),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 7, 0, 17),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 8, 0, 21),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 9, 0, 16),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 4, 0, 16),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_repeat2, 6, 0, 27),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 4, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [277] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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

TS_PUBLIC const TSLanguage *tree_sitter_yarnlock(void) {
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

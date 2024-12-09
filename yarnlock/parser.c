#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 142
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 1
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 28

enum ts_symbol_identifiers {
  anon_sym_AT = 1,
  aux_sym_dependency_token1 = 2,
  anon_sym_DQUOTE = 3,
  aux_sym_dependency_token2 = 4,
  aux_sym_dependency_token3 = 5,
  anon_sym_COMMA = 6,
  anon_sym_COLON = 7,
  anon_sym_version = 8,
  anon_sym_resolved = 9,
  aux_sym_resolved_token1 = 10,
  anon_sym_dependencies = 11,
  anon_sym_optionalDependencies = 12,
  anon_sym_integrity = 13,
  aux_sym_integrity_token1 = 14,
  anon_sym_CARET = 15,
  anon_sym_TILDE = 16,
  anon_sym_EQ = 17,
  anon_sym_GT_EQ = 18,
  anon_sym_GT = 19,
  aux_sym_semver_token1 = 20,
  anon_sym_DOT = 21,
  aux_sym_semver_token2 = 22,
  aux_sym_semver_token3 = 23,
  aux_sym_semver_token4 = 24,
  sym__indent = 25,
  sym__newline = 26,
  sym_identifier = 27,
  sym_comment = 28,
  sym_lock_file = 29,
  sym_dependency = 30,
  sym_dependency_body = 31,
  sym_version = 32,
  sym_resolved = 33,
  sym_dependencies = 34,
  sym_optional_dependencies = 35,
  sym_dependency_list = 36,
  sym_dependency_entry = 37,
  sym_integrity = 38,
  sym_semver = 39,
  aux_sym_lock_file_repeat1 = 40,
  aux_sym_dependency_repeat1 = 41,
  aux_sym_dependency_body_repeat1 = 42,
  aux_sym_dependency_list_repeat1 = 43,
  alias_sym_minor = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT] = "@",
  [aux_sym_dependency_token1] = "remote_url",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_dependency_token2] = "url",
  [aux_sym_dependency_token3] = "remote_url",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_version] = "version",
  [anon_sym_resolved] = "resolved",
  [aux_sym_resolved_token1] = "url",
  [anon_sym_dependencies] = "dependencies",
  [anon_sym_optionalDependencies] = "optionalDependencies",
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
  [sym_optional_dependencies] = "optional_dependencies",
  [sym_dependency_list] = "dependency_list",
  [sym_dependency_entry] = "dependency_entry",
  [sym_integrity] = "integrity",
  [sym_semver] = "semver",
  [aux_sym_lock_file_repeat1] = "lock_file_repeat1",
  [aux_sym_dependency_repeat1] = "dependency_repeat1",
  [aux_sym_dependency_body_repeat1] = "dependency_body_repeat1",
  [aux_sym_dependency_list_repeat1] = "dependency_list_repeat1",
  [alias_sym_minor] = "minor",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_dependency_token1] = aux_sym_dependency_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_dependency_token2] = aux_sym_dependency_token2,
  [aux_sym_dependency_token3] = aux_sym_dependency_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_version] = anon_sym_version,
  [anon_sym_resolved] = anon_sym_resolved,
  [aux_sym_resolved_token1] = aux_sym_dependency_token2,
  [anon_sym_dependencies] = anon_sym_dependencies,
  [anon_sym_optionalDependencies] = anon_sym_optionalDependencies,
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
  [sym_optional_dependencies] = sym_optional_dependencies,
  [sym_dependency_list] = sym_dependency_list,
  [sym_dependency_entry] = sym_dependency_entry,
  [sym_integrity] = sym_integrity,
  [sym_semver] = sym_semver,
  [aux_sym_lock_file_repeat1] = aux_sym_lock_file_repeat1,
  [aux_sym_dependency_repeat1] = aux_sym_dependency_repeat1,
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
  [aux_sym_dependency_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_dependency_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_dependency_token3] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
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
  [anon_sym_optionalDependencies] = {
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
  [sym_optional_dependencies] = {
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
  [6] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 0, .length = 1},
  [10] = {.index = 11, .length = 3},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 1},
  [15] = {.index = 18, .length = 2},
  [16] = {.index = 20, .length = 2},
  [17] = {.index = 22, .length = 2},
  [18] = {.index = 24, .length = 2},
  [19] = {.index = 26, .length = 3},
  [20] = {.index = 29, .length = 1},
  [21] = {.index = 30, .length = 1},
  [22] = {.index = 31, .length = 1},
  [23] = {.index = 32, .length = 2},
  [24] = {.index = 34, .length = 2},
  [25] = {.index = 36, .length = 2},
  [26] = {.index = 38, .length = 2},
  [27] = {.index = 40, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operator, 0},
  [1] =
    {field_prerelease, 1},
  [2] =
    {field_build, 1},
  [3] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [5] =
    {field_operator, 0},
    {field_prerelease, 2},
  [7] =
    {field_build, 2},
    {field_operator, 0},
  [9] =
    {field_build, 2},
    {field_prerelease, 1},
  [11] =
    {field_build, 3},
    {field_operator, 0},
    {field_prerelease, 2},
  [14] =
    {field_prerelease, 3},
  [15] =
    {field_build, 3},
  [16] =
    {field_name, 1},
  [17] =
    {field_name, 0},
  [18] =
    {field_operator, 0},
    {field_prerelease, 4},
  [20] =
    {field_build, 4},
    {field_operator, 0},
  [22] =
    {field_build, 4},
    {field_prerelease, 3},
  [24] =
    {field_name, 0},
    {field_name, 3, .inherited = true},
  [26] =
    {field_build, 5},
    {field_operator, 0},
    {field_prerelease, 4},
  [29] =
    {field_prerelease, 5},
  [30] =
    {field_build, 5},
  [31] =
    {field_name, 2},
  [32] =
    {field_operator, 0},
    {field_prerelease, 6},
  [34] =
    {field_build, 6},
    {field_operator, 0},
  [36] =
    {field_build, 6},
    {field_prerelease, 5},
  [38] =
    {field_name, 1},
    {field_name, 5, .inherited = true},
  [40] =
    {field_build, 7},
    {field_operator, 0},
    {field_prerelease, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [7] = {
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
  [15] = {
    [3] = alias_sym_minor,
  },
  [16] = {
    [3] = alias_sym_minor,
  },
  [17] = {
    [2] = alias_sym_minor,
  },
  [19] = {
    [3] = alias_sym_minor,
  },
  [20] = {
    [2] = alias_sym_minor,
  },
  [21] = {
    [2] = alias_sym_minor,
  },
  [23] = {
    [3] = alias_sym_minor,
  },
  [24] = {
    [3] = alias_sym_minor,
  },
  [25] = {
    [2] = alias_sym_minor,
  },
  [27] = {
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
  [98] = 98,
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
  [139] = 139,
  [140] = 140,
  [141] = 141,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(73);
      ADVANCE_MAP(
        '"', 131,
        '#', 209,
        ',', 135,
        '.', 155,
        ':', 136,
        '=', 151,
        '>', 153,
        '@', 74,
        '^', 149,
        'd', 88,
        'f', 97,
        'i', 106,
        'o', 116,
        'r', 83,
        'v', 84,
        'x', 156,
        '~', 150,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(210);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(160);
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(195);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(5);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 131,
        '#', 210,
        '+', 64,
        ',', 135,
        '-', 65,
        '.', 155,
        ':', 136,
        'd', 23,
        'i', 40,
        'o', 49,
        'r', 19,
        'v', 20,
        'x', 156,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 131,
        '#', 210,
        '+', 64,
        ',', 135,
        '-', 65,
        ':', 136,
        'd', 23,
        'i', 40,
        'o', 49,
        'r', 19,
        'v', 20,
        'x', 156,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(195);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(208);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '^') ADVANCE(149);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == '~') ADVANCE(150);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(130);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '^') ADVANCE(149);
      if (lookahead == '~') ADVANCE(150);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(134);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(140);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(141);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == '@') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(133);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(211);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 61:
      if (lookahead == 'v') ADVANCE(24);
      END_STATE();
    case 62:
      if (lookahead == 'y') ADVANCE(146);
      END_STATE();
    case 63:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 64:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(159);
      END_STATE();
    case 65:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(158);
      END_STATE();
    case 66:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '@') ADVANCE(133);
      END_STATE();
    case 67:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 68:
      if (eof) ADVANCE(73);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(195);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(72);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 69:
      if (eof) ADVANCE(73);
      ADVANCE_MAP(
        '"', 131,
        '#', 209,
        ',', 135,
        ':', 136,
        '=', 151,
        '>', 153,
        '@', 74,
        '^', 149,
        'd', 88,
        'f', 97,
        'i', 106,
        'o', 116,
        'r', 83,
        'v', 84,
        'x', 156,
        '~', 150,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 70:
      if (eof) ADVANCE(73);
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == ':') ADVANCE(136);
      if (lookahead == '@') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(70);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 71:
      if (eof) ADVANCE(73);
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(71);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(195);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(72);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(130);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'D') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'd') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'g') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'p') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'p') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 's') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 's') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'v') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead == 'y') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_dependency_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_dependency_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '@') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_dependency_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '@') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_dependency_token3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_resolved);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_resolved);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_resolved_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_resolved_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_dependencies);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_dependencies);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_optionalDependencies);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_optionalDependencies);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_integrity);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_integrity);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_integrity_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_semver_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_semver_token2);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_semver_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_semver_token3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_semver_token4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__indent);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(205);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(202);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == ':') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 70},
  [2] = {.lex_state = 71},
  [3] = {.lex_state = 72},
  [4] = {.lex_state = 72},
  [5] = {.lex_state = 72},
  [6] = {.lex_state = 72},
  [7] = {.lex_state = 68},
  [8] = {.lex_state = 68},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 71},
  [18] = {.lex_state = 71},
  [19] = {.lex_state = 68},
  [20] = {.lex_state = 68},
  [21] = {.lex_state = 68},
  [22] = {.lex_state = 68},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 72},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 72},
  [29] = {.lex_state = 72},
  [30] = {.lex_state = 72},
  [31] = {.lex_state = 72},
  [32] = {.lex_state = 72},
  [33] = {.lex_state = 72},
  [34] = {.lex_state = 72},
  [35] = {.lex_state = 70},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 70},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 70},
  [43] = {.lex_state = 70},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 70},
  [47] = {.lex_state = 70},
  [48] = {.lex_state = 70},
  [49] = {.lex_state = 68},
  [50] = {.lex_state = 68},
  [51] = {.lex_state = 68},
  [52] = {.lex_state = 68},
  [53] = {.lex_state = 70},
  [54] = {.lex_state = 70},
  [55] = {.lex_state = 70},
  [56] = {.lex_state = 70},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 70},
  [59] = {.lex_state = 70},
  [60] = {.lex_state = 70},
  [61] = {.lex_state = 70},
  [62] = {.lex_state = 70},
  [63] = {.lex_state = 70},
  [64] = {.lex_state = 70},
  [65] = {.lex_state = 70},
  [66] = {.lex_state = 70},
  [67] = {.lex_state = 70},
  [68] = {.lex_state = 70},
  [69] = {.lex_state = 70},
  [70] = {.lex_state = 70},
  [71] = {.lex_state = 70},
  [72] = {.lex_state = 70},
  [73] = {.lex_state = 70},
  [74] = {.lex_state = 70},
  [75] = {.lex_state = 70},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 70},
  [78] = {.lex_state = 70},
  [79] = {.lex_state = 70},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 70},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 68},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 70},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 68},
  [101] = {.lex_state = 68},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 68},
  [113] = {.lex_state = 68},
  [114] = {.lex_state = 68},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 70},
  [117] = {.lex_state = 68},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 70},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 70},
  [141] = {.lex_state = 68},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_dependency_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_resolved] = ACTIONS(1),
    [anon_sym_dependencies] = ACTIONS(1),
    [anon_sym_optionalDependencies] = ACTIONS(1),
    [anon_sym_integrity] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym_semver_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_semver_token2] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_lock_file] = STATE(121),
    [sym_dependency] = STATE(38),
    [aux_sym_lock_file_repeat1] = STATE(38),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(14), 1,
      anon_sym_resolved,
    ACTIONS(16), 1,
      anon_sym_dependencies,
    ACTIONS(18), 1,
      anon_sym_optionalDependencies,
    ACTIONS(20), 1,
      anon_sym_integrity,
    ACTIONS(22), 1,
      sym_identifier,
    STATE(5), 1,
      sym_resolved,
    STATE(6), 4,
      sym_dependencies,
      sym_optional_dependencies,
      sym_integrity,
      aux_sym_dependency_body_repeat1,
  [34] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_dependencies,
    ACTIONS(32), 1,
      anon_sym_optionalDependencies,
    ACTIONS(35), 1,
      anon_sym_integrity,
    ACTIONS(38), 1,
      sym_identifier,
    STATE(3), 4,
      sym_dependencies,
      sym_optional_dependencies,
      sym_integrity,
      aux_sym_dependency_body_repeat1,
  [62] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(16), 1,
      anon_sym_dependencies,
    ACTIONS(18), 1,
      anon_sym_optionalDependencies,
    ACTIONS(20), 1,
      anon_sym_integrity,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(3), 4,
      sym_dependencies,
      sym_optional_dependencies,
      sym_integrity,
      aux_sym_dependency_body_repeat1,
  [90] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(16), 1,
      anon_sym_dependencies,
    ACTIONS(18), 1,
      anon_sym_optionalDependencies,
    ACTIONS(20), 1,
      anon_sym_integrity,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(4), 4,
      sym_dependencies,
      sym_optional_dependencies,
      sym_integrity,
      aux_sym_dependency_body_repeat1,
  [118] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(16), 1,
      anon_sym_dependencies,
    ACTIONS(18), 1,
      anon_sym_optionalDependencies,
    ACTIONS(20), 1,
      anon_sym_integrity,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(3), 4,
      sym_dependencies,
      sym_optional_dependencies,
      sym_integrity,
      aux_sym_dependency_body_repeat1,
  [146] = 5,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      sym__indent,
    ACTIONS(60), 1,
      sym_comment,
    STATE(8), 2,
      sym_dependency_entry,
      aux_sym_dependency_list_repeat1,
    ACTIONS(56), 5,
      anon_sym_DQUOTE,
      anon_sym_dependencies,
      anon_sym_optionalDependencies,
      anon_sym_integrity,
      sym_identifier,
  [167] = 5,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      sym__indent,
    STATE(8), 2,
      sym_dependency_entry,
      aux_sym_dependency_list_repeat1,
    ACTIONS(64), 5,
      anon_sym_DQUOTE,
      anon_sym_dependencies,
      anon_sym_optionalDependencies,
      anon_sym_integrity,
      sym_identifier,
  [188] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_dependency_token1,
    ACTIONS(73), 1,
      anon_sym_GT,
    ACTIONS(75), 1,
      aux_sym_semver_token1,
    STATE(81), 1,
      sym_semver,
    ACTIONS(71), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [210] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_GT,
    ACTIONS(75), 1,
      aux_sym_semver_token1,
    ACTIONS(77), 1,
      aux_sym_dependency_token3,
    STATE(87), 1,
      sym_semver,
    ACTIONS(71), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [232] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_GT,
    ACTIONS(75), 1,
      aux_sym_semver_token1,
    ACTIONS(79), 1,
      aux_sym_dependency_token1,
    STATE(68), 1,
      sym_semver,
    ACTIONS(71), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [254] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_GT,
    ACTIONS(75), 1,
      aux_sym_semver_token1,
    ACTIONS(81), 1,
      aux_sym_dependency_token3,
    STATE(108), 1,
      sym_semver,
    ACTIONS(71), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [276] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_GT,
    ACTIONS(75), 1,
      aux_sym_semver_token1,
    ACTIONS(83), 1,
      aux_sym_dependency_token3,
    STATE(131), 1,
      sym_semver,
    ACTIONS(71), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [298] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_GT,
    ACTIONS(75), 1,
      aux_sym_semver_token1,
    ACTIONS(85), 1,
      aux_sym_dependency_token3,
    STATE(136), 1,
      sym_semver,
    ACTIONS(71), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [320] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_GT,
    ACTIONS(75), 1,
      aux_sym_semver_token1,
    STATE(110), 1,
      sym_semver,
    ACTIONS(71), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [339] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_GT,
    ACTIONS(75), 1,
      aux_sym_semver_token1,
    STATE(103), 1,
      sym_semver,
    ACTIONS(71), 4,
      anon_sym_CARET,
      anon_sym_TILDE,
      anon_sym_EQ,
      anon_sym_GT_EQ,
  [358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(89), 5,
      anon_sym_resolved,
      anon_sym_dependencies,
      anon_sym_optionalDependencies,
      anon_sym_integrity,
      sym_identifier,
  [373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(93), 5,
      anon_sym_resolved,
      anon_sym_dependencies,
      anon_sym_optionalDependencies,
      anon_sym_integrity,
      sym_identifier,
  [388] = 3,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(97), 5,
      anon_sym_DQUOTE,
      anon_sym_dependencies,
      anon_sym_optionalDependencies,
      anon_sym_integrity,
      sym_identifier,
  [403] = 3,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(101), 5,
      anon_sym_DQUOTE,
      anon_sym_dependencies,
      anon_sym_optionalDependencies,
      anon_sym_integrity,
      sym_identifier,
  [418] = 3,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(105), 5,
      anon_sym_DQUOTE,
      anon_sym_dependencies,
      anon_sym_optionalDependencies,
      anon_sym_integrity,
      sym_identifier,
  [433] = 3,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(109), 5,
      anon_sym_DQUOTE,
      anon_sym_dependencies,
      anon_sym_optionalDependencies,
      anon_sym_integrity,
      sym_identifier,
  [448] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      aux_sym_semver_token3,
    ACTIONS(117), 1,
      aux_sym_semver_token4,
    ACTIONS(111), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [466] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DOT,
    ACTIONS(123), 1,
      aux_sym_semver_token3,
    ACTIONS(125), 1,
      aux_sym_semver_token4,
    ACTIONS(119), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(129), 4,
      anon_sym_dependencies,
      anon_sym_optionalDependencies,
      anon_sym_integrity,
      sym_identifier,
  [498] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_DOT,
    ACTIONS(135), 1,
      aux_sym_semver_token3,
    ACTIONS(137), 1,
      aux_sym_semver_token4,
    ACTIONS(131), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [516] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      aux_sym_semver_token3,
    ACTIONS(145), 1,
      aux_sym_semver_token4,
    ACTIONS(139), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(149), 4,
      anon_sym_dependencies,
      anon_sym_optionalDependencies,
      anon_sym_integrity,
      sym_identifier,
  [548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(153), 4,
      anon_sym_dependencies,
      anon_sym_optionalDependencies,
      anon_sym_integrity,
      sym_identifier,
  [562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(157), 4,
      anon_sym_dependencies,
      anon_sym_optionalDependencies,
      anon_sym_integrity,
      sym_identifier,
  [576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(161), 4,
      anon_sym_dependencies,
      anon_sym_optionalDependencies,
      anon_sym_integrity,
      sym_identifier,
  [590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(165), 4,
      anon_sym_dependencies,
      anon_sym_optionalDependencies,
      anon_sym_integrity,
      sym_identifier,
  [604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(169), 4,
      anon_sym_dependencies,
      anon_sym_optionalDependencies,
      anon_sym_integrity,
      sym_identifier,
  [618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(173), 4,
      anon_sym_dependencies,
      anon_sym_optionalDependencies,
      anon_sym_integrity,
      sym_identifier,
  [632] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      sym_identifier,
    STATE(35), 2,
      sym_dependency,
      aux_sym_lock_file_repeat1,
  [649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym_semver_token3,
    ACTIONS(187), 1,
      aux_sym_semver_token4,
    ACTIONS(183), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      aux_sym_semver_token3,
    ACTIONS(193), 1,
      aux_sym_semver_token4,
    ACTIONS(189), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [679] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    STATE(35), 2,
      sym_dependency,
      aux_sym_lock_file_repeat1,
  [696] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_version,
    STATE(2), 1,
      sym_version,
    STATE(62), 1,
      sym_dependency_body,
  [712] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_version,
    STATE(2), 1,
      sym_version,
    STATE(55), 1,
      sym_dependency_body,
  [728] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_version,
    STATE(2), 1,
      sym_version,
    STATE(67), 1,
      sym_dependency_body,
  [744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_semver_token4,
    ACTIONS(201), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      aux_sym_semver_token4,
    ACTIONS(205), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [768] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_version,
    STATE(2), 1,
      sym_version,
    STATE(74), 1,
      sym_dependency_body,
  [784] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_resolved,
    ACTIONS(211), 1,
      anon_sym_dependencies,
    ACTIONS(213), 1,
      anon_sym_optionalDependencies,
    ACTIONS(215), 1,
      anon_sym_integrity,
  [800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym_semver_token4,
    ACTIONS(217), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_semver_token4,
    ACTIONS(221), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_semver_token4,
    ACTIONS(225), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [836] = 4,
    ACTIONS(58), 1,
      sym__indent,
    ACTIONS(60), 1,
      sym_comment,
    STATE(29), 1,
      sym_dependency_list,
    STATE(7), 2,
      sym_dependency_entry,
      aux_sym_dependency_list_repeat1,
  [850] = 4,
    ACTIONS(58), 1,
      sym__indent,
    ACTIONS(60), 1,
      sym_comment,
    STATE(33), 1,
      sym_dependency_list,
    STATE(7), 2,
      sym_dependency_entry,
      aux_sym_dependency_list_repeat1,
  [864] = 4,
    ACTIONS(58), 1,
      sym__indent,
    ACTIONS(60), 1,
      sym_comment,
    STATE(30), 1,
      sym_dependency_list,
    STATE(7), 2,
      sym_dependency_entry,
      aux_sym_dependency_list_repeat1,
  [878] = 4,
    ACTIONS(58), 1,
      sym__indent,
    ACTIONS(60), 1,
      sym_comment,
    STATE(31), 1,
      sym_dependency_list,
    STATE(7), 2,
      sym_dependency_entry,
      aux_sym_dependency_list_repeat1,
  [892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      aux_sym_semver_token4,
    ACTIONS(229), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_COLON,
    STATE(69), 1,
      aux_sym_dependency_repeat1,
  [917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [935] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_dependencies,
    ACTIONS(213), 1,
      anon_sym_optionalDependencies,
    ACTIONS(215), 1,
      anon_sym_integrity,
  [948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_COLON,
    STATE(69), 1,
      aux_sym_dependency_repeat1,
  [961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_COLON,
    STATE(54), 1,
      aux_sym_dependency_repeat1,
  [1037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [1046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_COLON,
    STATE(58), 1,
      aux_sym_dependency_repeat1,
  [1059] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_COLON,
    STATE(69), 1,
      aux_sym_dependency_repeat1,
  [1072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_identifier,
  [1117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 3,
      anon_sym_DQUOTE,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      aux_sym_dependency_token3,
  [1136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      sym_identifier,
  [1154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_identifier,
  [1164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      aux_sym_dependency_token3,
  [1174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
  [1189] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym__newline,
  [1196] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym__newline,
  [1203] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym__newline,
  [1210] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym__indent,
  [1217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
  [1224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_AT,
  [1231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DQUOTE,
  [1238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym_semver_token2,
  [1245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym_semver_token1,
  [1252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
  [1259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      aux_sym_semver_token1,
  [1266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_COLON,
  [1273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
  [1280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_COLON,
  [1287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_COLON,
  [1294] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(332), 1,
      aux_sym_integrity_token1,
  [1301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
  [1308] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym__indent,
  [1315] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym__indent,
  [1322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_COLON,
  [1329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
  [1336] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(344), 1,
      aux_sym_resolved_token1,
  [1343] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym__newline,
  [1350] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym__newline,
  [1357] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(350), 1,
      aux_sym_integrity_token1,
  [1364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
  [1371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_DQUOTE,
  [1378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
  [1385] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(358), 1,
      aux_sym_dependency_token2,
  [1392] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__indent,
  [1399] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym__indent,
  [1406] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym__indent,
  [1413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_DQUOTE,
  [1420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_AT,
  [1427] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym__indent,
  [1434] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym__newline,
  [1441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      aux_sym_semver_token2,
  [1448] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym__newline,
  [1455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
  [1462] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_dependency_token2,
  [1469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
  [1476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      aux_sym_semver_token1,
  [1483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
  [1490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_version,
  [1497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
  [1504] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(392), 1,
      aux_sym_dependency_token2,
  [1511] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(394), 1,
      sym__newline,
  [1518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
  [1525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_DQUOTE,
  [1532] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(400), 1,
      aux_sym_resolved_token1,
  [1539] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym__newline,
  [1546] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__newline,
  [1553] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym__newline,
  [1560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
  [1567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
  [1574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_AT,
  [1581] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym__newline,
  [1588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_AT,
  [1595] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(418), 1,
      sym__indent,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 118,
  [SMALL_STATE(7)] = 146,
  [SMALL_STATE(8)] = 167,
  [SMALL_STATE(9)] = 188,
  [SMALL_STATE(10)] = 210,
  [SMALL_STATE(11)] = 232,
  [SMALL_STATE(12)] = 254,
  [SMALL_STATE(13)] = 276,
  [SMALL_STATE(14)] = 298,
  [SMALL_STATE(15)] = 320,
  [SMALL_STATE(16)] = 339,
  [SMALL_STATE(17)] = 358,
  [SMALL_STATE(18)] = 373,
  [SMALL_STATE(19)] = 388,
  [SMALL_STATE(20)] = 403,
  [SMALL_STATE(21)] = 418,
  [SMALL_STATE(22)] = 433,
  [SMALL_STATE(23)] = 448,
  [SMALL_STATE(24)] = 466,
  [SMALL_STATE(25)] = 484,
  [SMALL_STATE(26)] = 498,
  [SMALL_STATE(27)] = 516,
  [SMALL_STATE(28)] = 534,
  [SMALL_STATE(29)] = 548,
  [SMALL_STATE(30)] = 562,
  [SMALL_STATE(31)] = 576,
  [SMALL_STATE(32)] = 590,
  [SMALL_STATE(33)] = 604,
  [SMALL_STATE(34)] = 618,
  [SMALL_STATE(35)] = 632,
  [SMALL_STATE(36)] = 649,
  [SMALL_STATE(37)] = 664,
  [SMALL_STATE(38)] = 679,
  [SMALL_STATE(39)] = 696,
  [SMALL_STATE(40)] = 712,
  [SMALL_STATE(41)] = 728,
  [SMALL_STATE(42)] = 744,
  [SMALL_STATE(43)] = 756,
  [SMALL_STATE(44)] = 768,
  [SMALL_STATE(45)] = 784,
  [SMALL_STATE(46)] = 800,
  [SMALL_STATE(47)] = 812,
  [SMALL_STATE(48)] = 824,
  [SMALL_STATE(49)] = 836,
  [SMALL_STATE(50)] = 850,
  [SMALL_STATE(51)] = 864,
  [SMALL_STATE(52)] = 878,
  [SMALL_STATE(53)] = 892,
  [SMALL_STATE(54)] = 904,
  [SMALL_STATE(55)] = 917,
  [SMALL_STATE(56)] = 926,
  [SMALL_STATE(57)] = 935,
  [SMALL_STATE(58)] = 948,
  [SMALL_STATE(59)] = 961,
  [SMALL_STATE(60)] = 970,
  [SMALL_STATE(61)] = 979,
  [SMALL_STATE(62)] = 988,
  [SMALL_STATE(63)] = 997,
  [SMALL_STATE(64)] = 1006,
  [SMALL_STATE(65)] = 1015,
  [SMALL_STATE(66)] = 1024,
  [SMALL_STATE(67)] = 1037,
  [SMALL_STATE(68)] = 1046,
  [SMALL_STATE(69)] = 1059,
  [SMALL_STATE(70)] = 1072,
  [SMALL_STATE(71)] = 1081,
  [SMALL_STATE(72)] = 1090,
  [SMALL_STATE(73)] = 1099,
  [SMALL_STATE(74)] = 1108,
  [SMALL_STATE(75)] = 1117,
  [SMALL_STATE(76)] = 1126,
  [SMALL_STATE(77)] = 1136,
  [SMALL_STATE(78)] = 1144,
  [SMALL_STATE(79)] = 1154,
  [SMALL_STATE(80)] = 1164,
  [SMALL_STATE(81)] = 1174,
  [SMALL_STATE(82)] = 1182,
  [SMALL_STATE(83)] = 1189,
  [SMALL_STATE(84)] = 1196,
  [SMALL_STATE(85)] = 1203,
  [SMALL_STATE(86)] = 1210,
  [SMALL_STATE(87)] = 1217,
  [SMALL_STATE(88)] = 1224,
  [SMALL_STATE(89)] = 1231,
  [SMALL_STATE(90)] = 1238,
  [SMALL_STATE(91)] = 1245,
  [SMALL_STATE(92)] = 1252,
  [SMALL_STATE(93)] = 1259,
  [SMALL_STATE(94)] = 1266,
  [SMALL_STATE(95)] = 1273,
  [SMALL_STATE(96)] = 1280,
  [SMALL_STATE(97)] = 1287,
  [SMALL_STATE(98)] = 1294,
  [SMALL_STATE(99)] = 1301,
  [SMALL_STATE(100)] = 1308,
  [SMALL_STATE(101)] = 1315,
  [SMALL_STATE(102)] = 1322,
  [SMALL_STATE(103)] = 1329,
  [SMALL_STATE(104)] = 1336,
  [SMALL_STATE(105)] = 1343,
  [SMALL_STATE(106)] = 1350,
  [SMALL_STATE(107)] = 1357,
  [SMALL_STATE(108)] = 1364,
  [SMALL_STATE(109)] = 1371,
  [SMALL_STATE(110)] = 1378,
  [SMALL_STATE(111)] = 1385,
  [SMALL_STATE(112)] = 1392,
  [SMALL_STATE(113)] = 1399,
  [SMALL_STATE(114)] = 1406,
  [SMALL_STATE(115)] = 1413,
  [SMALL_STATE(116)] = 1420,
  [SMALL_STATE(117)] = 1427,
  [SMALL_STATE(118)] = 1434,
  [SMALL_STATE(119)] = 1441,
  [SMALL_STATE(120)] = 1448,
  [SMALL_STATE(121)] = 1455,
  [SMALL_STATE(122)] = 1462,
  [SMALL_STATE(123)] = 1469,
  [SMALL_STATE(124)] = 1476,
  [SMALL_STATE(125)] = 1483,
  [SMALL_STATE(126)] = 1490,
  [SMALL_STATE(127)] = 1497,
  [SMALL_STATE(128)] = 1504,
  [SMALL_STATE(129)] = 1511,
  [SMALL_STATE(130)] = 1518,
  [SMALL_STATE(131)] = 1525,
  [SMALL_STATE(132)] = 1532,
  [SMALL_STATE(133)] = 1539,
  [SMALL_STATE(134)] = 1546,
  [SMALL_STATE(135)] = 1553,
  [SMALL_STATE(136)] = 1560,
  [SMALL_STATE(137)] = 1567,
  [SMALL_STATE(138)] = 1574,
  [SMALL_STATE(139)] = 1581,
  [SMALL_STATE(140)] = 1588,
  [SMALL_STATE(141)] = 1595,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_body, 1, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_dependency_body, 1, 0, 0), SHIFT(45),
  [14] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [16] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [18] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_body, 1, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_body_repeat1, 2, 0, 0),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_body_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_body_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_body_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependency_body_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dependency_body_repeat1, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_body, 3, 0, 0),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_dependency_body, 3, 0, 0), SHIFT(57),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_body, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_body, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_dependency_body, 2, 0, 0), SHIFT(57),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_body, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_list, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_list, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_list_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dependency_list_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_list_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 4, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 4, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 6, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 6, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_entry, 4, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_entry, 4, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_entry, 6, 0, 22),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_entry, 6, 0, 22),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_entry, 6, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_entry, 6, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_entry, 8, 0, 22),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency_entry, 8, 0, 22),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 2, 0, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 3, 0, 7),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integrity, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integrity, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 4, 0, 9),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resolved, 6, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resolved, 6, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 5, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependencies, 5, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 7, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependencies, 7, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_dependencies, 7, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_dependencies, 7, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resolved, 4, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_resolved, 4, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_dependencies, 5, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_dependencies, 5, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integrity, 4, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integrity, 4, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lock_file_repeat1, 2, 0, 0),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lock_file_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lock_file_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 6, 0, 9),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 5, 0, 7),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_file, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 5, 0, 15),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 4, 0, 11),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 6, 0, 20),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 7, 0, 23),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 2, 0, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 3, 0, 5),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 7, 0, 14),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 4, 0, 10),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 4, 0, 12),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 7, 0, 24),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 7, 0, 25),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 10, 0, 26),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 5, 0, 17),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 8, 0, 27),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 2, 0, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 8, 0, 18),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2, 0, 4), SHIFT_REPEAT(78),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 2, 0, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 6, 0, 19),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 5, 0, 16),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 6, 0, 21),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 3, 0, 6),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 9, 0, 13),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semver, 3, 0, 8),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 6, 0, 22),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_repeat1, 4, 0, 13),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [378] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
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

#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 71
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_PATH = 1,
  anon_sym_GIT = 2,
  anon_sym_GEM = 3,
  anon_sym_COLON = 4,
  anon_sym_specs_COLON = 5,
  anon_sym_PLATFORMS = 6,
  anon_sym_DEPENDENCIES = 7,
  anon_sym_RUBYVERSION = 8,
  anon_sym_BUNDLEDWITH = 9,
  anon_sym_ruby = 10,
  anon_sym_p = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_COMMA = 14,
  anon_sym_TILDE_GT = 15,
  anon_sym_GT_EQ = 16,
  anon_sym_LT_EQ = 17,
  anon_sym_GT = 18,
  anon_sym_LT = 19,
  anon_sym_EQ = 20,
  anon_sym_BANG_EQ = 21,
  anon_sym_DOT = 22,
  sym_identifier = 23,
  sym_gem_name = 24,
  sym_string = 25,
  sym_number = 26,
  sym__newline = 27,
  sym_platform_name = 28,
  sym__indent = 29,
  sym__dedent = 30,
  sym_document = 31,
  sym_path_section = 32,
  sym_git_section = 33,
  sym_gem_section = 34,
  sym_section_content = 35,
  sym_key_value = 36,
  sym_specs = 37,
  sym_platforms = 38,
  sym_dependencies = 39,
  sym_ruby_version = 40,
  sym_bundled_with = 41,
  sym_ruby_version_entry = 42,
  sym_ruby_patch = 43,
  sym_bundled_with_entry = 44,
  sym_gem_entry_with_dependencies = 45,
  sym_gem_entry = 46,
  sym_dependency = 47,
  sym_constraint = 48,
  sym_tilde = 49,
  sym_comparison = 50,
  sym_exact = 51,
  sym_version = 52,
  aux_sym_document_repeat1 = 53,
  aux_sym_section_content_repeat1 = 54,
  aux_sym_specs_repeat1 = 55,
  aux_sym_platforms_repeat1 = 56,
  aux_sym_dependencies_repeat1 = 57,
  aux_sym_constraint_repeat1 = 58,
  aux_sym_version_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PATH] = "PATH",
  [anon_sym_GIT] = "GIT",
  [anon_sym_GEM] = "GEM",
  [anon_sym_COLON] = ":",
  [anon_sym_specs_COLON] = "specs:",
  [anon_sym_PLATFORMS] = "PLATFORMS",
  [anon_sym_DEPENDENCIES] = "DEPENDENCIES",
  [anon_sym_RUBYVERSION] = "RUBY VERSION",
  [anon_sym_BUNDLEDWITH] = "BUNDLED WITH",
  [anon_sym_ruby] = "ruby",
  [anon_sym_p] = "p",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_TILDE_GT] = "~>",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_DOT] = ".",
  [sym_identifier] = "identifier",
  [sym_gem_name] = "gem_name",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym__newline] = "_newline",
  [sym_platform_name] = "platform_name",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_document] = "document",
  [sym_path_section] = "path_section",
  [sym_git_section] = "git_section",
  [sym_gem_section] = "gem_section",
  [sym_section_content] = "section_content",
  [sym_key_value] = "key_value",
  [sym_specs] = "specs",
  [sym_platforms] = "platforms",
  [sym_dependencies] = "dependencies",
  [sym_ruby_version] = "ruby_version",
  [sym_bundled_with] = "bundled_with",
  [sym_ruby_version_entry] = "ruby_version_entry",
  [sym_ruby_patch] = "ruby_patch",
  [sym_bundled_with_entry] = "bundled_with_entry",
  [sym_gem_entry_with_dependencies] = "gem_entry_with_dependencies",
  [sym_gem_entry] = "gem_entry",
  [sym_dependency] = "dependency",
  [sym_constraint] = "constraint",
  [sym_tilde] = "tilde",
  [sym_comparison] = "comparison",
  [sym_exact] = "exact",
  [sym_version] = "version",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_section_content_repeat1] = "section_content_repeat1",
  [aux_sym_specs_repeat1] = "specs_repeat1",
  [aux_sym_platforms_repeat1] = "platforms_repeat1",
  [aux_sym_dependencies_repeat1] = "dependencies_repeat1",
  [aux_sym_constraint_repeat1] = "constraint_repeat1",
  [aux_sym_version_repeat1] = "version_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PATH] = anon_sym_PATH,
  [anon_sym_GIT] = anon_sym_GIT,
  [anon_sym_GEM] = anon_sym_GEM,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_specs_COLON] = anon_sym_specs_COLON,
  [anon_sym_PLATFORMS] = anon_sym_PLATFORMS,
  [anon_sym_DEPENDENCIES] = anon_sym_DEPENDENCIES,
  [anon_sym_RUBYVERSION] = anon_sym_RUBYVERSION,
  [anon_sym_BUNDLEDWITH] = anon_sym_BUNDLEDWITH,
  [anon_sym_ruby] = anon_sym_ruby,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_TILDE_GT] = anon_sym_TILDE_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_identifier] = sym_identifier,
  [sym_gem_name] = sym_gem_name,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym__newline] = sym__newline,
  [sym_platform_name] = sym_platform_name,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_document] = sym_document,
  [sym_path_section] = sym_path_section,
  [sym_git_section] = sym_git_section,
  [sym_gem_section] = sym_gem_section,
  [sym_section_content] = sym_section_content,
  [sym_key_value] = sym_key_value,
  [sym_specs] = sym_specs,
  [sym_platforms] = sym_platforms,
  [sym_dependencies] = sym_dependencies,
  [sym_ruby_version] = sym_ruby_version,
  [sym_bundled_with] = sym_bundled_with,
  [sym_ruby_version_entry] = sym_ruby_version_entry,
  [sym_ruby_patch] = sym_ruby_patch,
  [sym_bundled_with_entry] = sym_bundled_with_entry,
  [sym_gem_entry_with_dependencies] = sym_gem_entry_with_dependencies,
  [sym_gem_entry] = sym_gem_entry,
  [sym_dependency] = sym_dependency,
  [sym_constraint] = sym_constraint,
  [sym_tilde] = sym_tilde,
  [sym_comparison] = sym_comparison,
  [sym_exact] = sym_exact,
  [sym_version] = sym_version,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_section_content_repeat1] = aux_sym_section_content_repeat1,
  [aux_sym_specs_repeat1] = aux_sym_specs_repeat1,
  [aux_sym_platforms_repeat1] = aux_sym_platforms_repeat1,
  [aux_sym_dependencies_repeat1] = aux_sym_dependencies_repeat1,
  [aux_sym_constraint_repeat1] = aux_sym_constraint_repeat1,
  [aux_sym_version_repeat1] = aux_sym_version_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PATH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GEM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_specs_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLATFORMS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEPENDENCIES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RUBYVERSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BUNDLEDWITH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ruby] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_gem_name] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_platform_name] = {
    .visible = true,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_path_section] = {
    .visible = true,
    .named = true,
  },
  [sym_git_section] = {
    .visible = true,
    .named = true,
  },
  [sym_gem_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_content] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_specs] = {
    .visible = true,
    .named = true,
  },
  [sym_platforms] = {
    .visible = true,
    .named = true,
  },
  [sym_dependencies] = {
    .visible = true,
    .named = true,
  },
  [sym_ruby_version] = {
    .visible = true,
    .named = true,
  },
  [sym_bundled_with] = {
    .visible = true,
    .named = true,
  },
  [sym_ruby_version_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_ruby_patch] = {
    .visible = true,
    .named = true,
  },
  [sym_bundled_with_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_gem_entry_with_dependencies] = {
    .visible = true,
    .named = true,
  },
  [sym_gem_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_dependency] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_tilde] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison] = {
    .visible = true,
    .named = true,
  },
  [sym_exact] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_specs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_platforms_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dependencies_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constraint_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_version_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_constraint = 1,
  field_key = 2,
  field_name = 3,
  field_value = 4,
  field_version = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_constraint] = "constraint",
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 4},
  [4] = {.index = 7, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_key, 0},
    {field_value, 2},
  [3] =
    {field_name, 0},
    {field_value, 2},
    {field_version, 1},
    {field_version, 3},
  [7] =
    {field_constraint, 1},
    {field_constraint, 3},
    {field_name, 0},
    {field_value, 2},
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
  [11] = 8,
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
  [46] = 18,
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
  [58] = 56,
  [59] = 29,
  [60] = 32,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 64,
  [69] = 69,
  [70] = 69,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '!', 6,
        '(', 92,
        ')', 93,
        ',', 94,
        '.', 102,
        ':', 78,
        '<', 99,
        '=', 100,
        '>', 98,
        'B', 47,
        'D', 15,
        'G', 16,
        'P', 8,
        'R', 48,
        'p', 91,
        'r', 58,
        's', 55,
        '~', 7,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(180);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(79);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(95);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'L') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(45);
      END_STATE();
    case 10:
      if (lookahead == 'B') ADVANCE(51);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(4);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(29);
      if (lookahead == 'I') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'F') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'H') ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == 'H') ADVANCE(89);
      END_STATE();
    case 25:
      if (lookahead == 'I') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'I') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 'I') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'L') ADVANCE(19);
      END_STATE();
    case 29:
      if (lookahead == 'M') ADVANCE(74);
      END_STATE();
    case 30:
      if (lookahead == 'M') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(11);
      END_STATE();
    case 33:
      if (lookahead == 'N') ADVANCE(88);
      END_STATE();
    case 34:
      if (lookahead == 'N') ADVANCE(14);
      END_STATE();
    case 35:
      if (lookahead == 'O') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'O') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 'P') ADVANCE(21);
      END_STATE();
    case 38:
      if (lookahead == 'R') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 'R') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'S') ADVANCE(80);
      END_STATE();
    case 41:
      if (lookahead == 'S') ADVANCE(84);
      END_STATE();
    case 42:
      if (lookahead == 'S') ADVANCE(25);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 47:
      if (lookahead == 'U') ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == 'U') ADVANCE(10);
      END_STATE();
    case 49:
      if (lookahead == 'V') ADVANCE(18);
      END_STATE();
    case 50:
      if (lookahead == 'W') ADVANCE(26);
      END_STATE();
    case 51:
      if (lookahead == 'Y') ADVANCE(3);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(59);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 59:
      if (lookahead == 'y') ADVANCE(90);
      END_STATE();
    case 60:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 61:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 62:
      if (eof) ADVANCE(65);
      if (lookahead == 'B') ADVANCE(136);
      if (lookahead == 'D') ADVANCE(113);
      if (lookahead == 'G') ADVANCE(114);
      if (lookahead == 'P') ADVANCE(106);
      if (lookahead == 'R') ADVANCE(137);
      if (lookahead == 's') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 63:
      if (eof) ADVANCE(65);
      if (lookahead == 'B') ADVANCE(176);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == 'G') ADVANCE(154);
      if (lookahead == 'P') ADVANCE(146);
      if (lookahead == 'R') ADVANCE(177);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      if (lookahead == 'B') ADVANCE(216);
      if (lookahead == 'D') ADVANCE(193);
      if (lookahead == 'G') ADVANCE(194);
      if (lookahead == 'P') ADVANCE(186);
      if (lookahead == 'R') ADVANCE(217);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PATH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PATH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PATH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PATH);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_GIT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_GEM);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GEM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GEM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GEM);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_specs_COLON);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PLATFORMS);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PLATFORMS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_PLATFORMS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PLATFORMS);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DEPENDENCIES);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DEPENDENCIES);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DEPENDENCIES);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DEPENDENCIES);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RUBYVERSION);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_BUNDLEDWITH);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_ruby);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_TILDE_GT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(96);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead == 'L') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(123);
      if (lookahead == 'I') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'A') ADVANCE(174);
      if (lookahead == 'L') ADVANCE(147);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'A') ADVANCE(175);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'B') ADVANCE(178);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'C') ADVANCE(161);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'D') ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'D') ADVANCE(145);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'D') ADVANCE(155);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'E') ADVANCE(169);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'E') ADVANCE(163);
      if (lookahead == 'I') ADVANCE(173);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'E') ADVANCE(166);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'E') ADVANCE(172);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'E') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'E') ADVANCE(167);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'F') ADVANCE(168);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'H') ADVANCE(69);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'I') ADVANCE(156);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'L') ADVANCE(157);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'M') ADVANCE(77);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'M') ADVANCE(171);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'N') ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'N') ADVANCE(149);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'N') ADVANCE(152);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'O') ADVANCE(170);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'P') ADVANCE(158);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'R') ADVANCE(164);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'S') ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'T') ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'T') ADVANCE(160);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'U') ADVANCE(165);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'U') ADVANCE(148);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == 'Y') ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_gem_name);
      if (lookahead == '!' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'A') ADVANCE(213);
      if (lookahead == 'L') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'B') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'C') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'D') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'D') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'D') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'E') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'E') ADVANCE(204);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'E') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'E') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'E') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'E') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'F') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'H') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'I') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'L') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'M') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'M') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'N') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'N') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'N') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'O') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'P') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'R') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'S') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'S') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'T') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'T') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'T') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'U') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'U') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == 'Y') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_platform_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 62},
  [13] = {.lex_state = 63},
  [14] = {.lex_state = 62},
  [15] = {.lex_state = 63},
  [16] = {.lex_state = 63},
  [17] = {.lex_state = 63},
  [18] = {.lex_state = 63},
  [19] = {.lex_state = 63, .external_lex_state = 2},
  [20] = {.lex_state = 64},
  [21] = {.lex_state = 64},
  [22] = {.lex_state = 62},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 63, .external_lex_state = 2},
  [29] = {.lex_state = 63},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 63},
  [32] = {.lex_state = 63},
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
  [43] = {.lex_state = 57},
  [44] = {.lex_state = 57},
  [45] = {.lex_state = 57},
  [46] = {.lex_state = 60, .external_lex_state = 3},
  [47] = {.lex_state = 60, .external_lex_state = 3},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 60},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 60},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 61},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 60, .external_lex_state = 3},
  [60] = {.lex_state = 60, .external_lex_state = 3},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PATH] = ACTIONS(1),
    [anon_sym_GIT] = ACTIONS(1),
    [anon_sym_GEM] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_specs_COLON] = ACTIONS(1),
    [anon_sym_PLATFORMS] = ACTIONS(1),
    [anon_sym_DEPENDENCIES] = ACTIONS(1),
    [anon_sym_RUBYVERSION] = ACTIONS(1),
    [anon_sym_BUNDLEDWITH] = ACTIONS(1),
    [anon_sym_ruby] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_TILDE_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(67),
    [sym_path_section] = STATE(6),
    [sym_git_section] = STATE(6),
    [sym_gem_section] = STATE(6),
    [sym_platforms] = STATE(6),
    [sym_dependencies] = STATE(6),
    [sym_ruby_version] = STATE(6),
    [sym_bundled_with] = STATE(6),
    [aux_sym_document_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_PATH] = ACTIONS(5),
    [anon_sym_GIT] = ACTIONS(7),
    [anon_sym_GEM] = ACTIONS(9),
    [anon_sym_PLATFORMS] = ACTIONS(11),
    [anon_sym_DEPENDENCIES] = ACTIONS(13),
    [anon_sym_RUBYVERSION] = ACTIONS(15),
    [anon_sym_BUNDLEDWITH] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(21), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(19), 17,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      anon_sym_p,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      sym_number,
  [27] = 4,
    ACTIONS(29), 1,
      sym_number,
    STATE(4), 1,
      aux_sym_version_repeat1,
    ACTIONS(27), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(25), 16,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      anon_sym_p,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [56] = 4,
    ACTIONS(35), 1,
      sym_number,
    STATE(4), 1,
      aux_sym_version_repeat1,
    ACTIONS(33), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 16,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      anon_sym_p,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [85] = 2,
    ACTIONS(33), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 17,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
      anon_sym_p,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      sym_number,
  [109] = 9,
    ACTIONS(5), 1,
      anon_sym_PATH,
    ACTIONS(7), 1,
      anon_sym_GIT,
    ACTIONS(9), 1,
      anon_sym_GEM,
    ACTIONS(11), 1,
      anon_sym_PLATFORMS,
    ACTIONS(13), 1,
      anon_sym_DEPENDENCIES,
    ACTIONS(15), 1,
      anon_sym_RUBYVERSION,
    ACTIONS(17), 1,
      anon_sym_BUNDLEDWITH,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(7), 8,
      sym_path_section,
      sym_git_section,
      sym_gem_section,
      sym_platforms,
      sym_dependencies,
      sym_ruby_version,
      sym_bundled_with,
      aux_sym_document_repeat1,
  [144] = 9,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      anon_sym_PATH,
    ACTIONS(45), 1,
      anon_sym_GIT,
    ACTIONS(48), 1,
      anon_sym_GEM,
    ACTIONS(51), 1,
      anon_sym_PLATFORMS,
    ACTIONS(54), 1,
      anon_sym_DEPENDENCIES,
    ACTIONS(57), 1,
      anon_sym_RUBYVERSION,
    ACTIONS(60), 1,
      anon_sym_BUNDLEDWITH,
    STATE(7), 8,
      sym_path_section,
      sym_git_section,
      sym_gem_section,
      sym_platforms,
      sym_dependencies,
      sym_ruby_version,
      sym_bundled_with,
      aux_sym_document_repeat1,
  [179] = 9,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_TILDE_GT,
    STATE(3), 1,
      aux_sym_version_repeat1,
    STATE(9), 1,
      aux_sym_constraint_repeat1,
    STATE(26), 1,
      sym_version,
    STATE(70), 1,
      sym_constraint,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(23), 3,
      sym_tilde,
      sym_comparison,
      sym_exact,
    ACTIONS(65), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [213] = 9,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_TILDE_GT,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      aux_sym_version_repeat1,
    STATE(10), 1,
      aux_sym_constraint_repeat1,
    STATE(26), 1,
      sym_version,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(23), 3,
      sym_tilde,
      sym_comparison,
      sym_exact,
    ACTIONS(65), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [247] = 9,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(73), 1,
      anon_sym_TILDE_GT,
    ACTIONS(82), 1,
      sym_number,
    STATE(3), 1,
      aux_sym_version_repeat1,
    STATE(10), 1,
      aux_sym_constraint_repeat1,
    STATE(26), 1,
      sym_version,
    ACTIONS(79), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(23), 3,
      sym_tilde,
      sym_comparison,
      sym_exact,
    ACTIONS(76), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [281] = 9,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(63), 1,
      anon_sym_TILDE_GT,
    STATE(3), 1,
      aux_sym_version_repeat1,
    STATE(9), 1,
      aux_sym_constraint_repeat1,
    STATE(26), 1,
      sym_version,
    STATE(69), 1,
      sym_constraint,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(23), 3,
      sym_tilde,
      sym_comparison,
      sym_exact,
    ACTIONS(65), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [315] = 6,
    ACTIONS(89), 1,
      anon_sym_specs_COLON,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(33), 1,
      sym_specs,
    STATE(14), 2,
      sym_key_value,
      aux_sym_section_content_repeat1,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(87), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [341] = 5,
    ACTIONS(97), 1,
      sym_gem_name,
    STATE(19), 1,
      sym_gem_entry,
    STATE(15), 2,
      sym_gem_entry_with_dependencies,
      aux_sym_specs_repeat1,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(95), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [364] = 4,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(14), 2,
      sym_key_value,
      aux_sym_section_content_repeat1,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      anon_sym_specs_COLON,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(101), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [385] = 5,
    ACTIONS(110), 1,
      sym_gem_name,
    STATE(19), 1,
      sym_gem_entry,
    STATE(15), 2,
      sym_gem_entry_with_dependencies,
      aux_sym_specs_repeat1,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(108), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [408] = 4,
    ACTIONS(117), 1,
      sym_gem_name,
    STATE(18), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
    ACTIONS(113), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(115), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [428] = 4,
    ACTIONS(117), 1,
      sym_gem_name,
    STATE(16), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(121), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [448] = 4,
    ACTIONS(127), 1,
      sym_gem_name,
    STATE(18), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
    ACTIONS(123), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(125), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [468] = 3,
    ACTIONS(134), 1,
      sym__indent,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(132), 6,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      sym_gem_name,
  [485] = 4,
    ACTIONS(140), 1,
      sym_platform_name,
    STATE(21), 1,
      aux_sym_platforms_repeat1,
    ACTIONS(136), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(138), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [504] = 4,
    ACTIONS(146), 1,
      sym_platform_name,
    STATE(21), 1,
      aux_sym_platforms_repeat1,
    ACTIONS(142), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(144), 5,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
  [523] = 2,
    ACTIONS(149), 4,
      ts_builtin_sym_end,
      anon_sym_specs_COLON,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(151), 6,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      sym_identifier,
  [538] = 3,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(157), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(153), 7,
      anon_sym_RPAREN,
      anon_sym_TILDE_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      sym_number,
  [555] = 3,
    ACTIONS(161), 1,
      anon_sym_p,
    STATE(41), 1,
      sym_ruby_patch,
    ACTIONS(159), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [572] = 2,
    ACTIONS(165), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      sym_number,
  [587] = 2,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      sym_number,
  [602] = 2,
    ACTIONS(173), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(171), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      sym_number,
  [617] = 2,
    ACTIONS(175), 4,
      sym__indent,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(177), 6,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      sym_gem_name,
  [632] = 2,
    ACTIONS(179), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(181), 6,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      sym_gem_name,
  [646] = 2,
    ACTIONS(183), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(71), 7,
      anon_sym_RPAREN,
      anon_sym_TILDE_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      sym_number,
  [660] = 2,
    ACTIONS(185), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(187), 6,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      sym_gem_name,
  [674] = 2,
    ACTIONS(189), 3,
      ts_builtin_sym_end,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
    ACTIONS(191), 6,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      sym_gem_name,
  [688] = 1,
    ACTIONS(193), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [699] = 1,
    ACTIONS(195), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [710] = 1,
    ACTIONS(85), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [721] = 1,
    ACTIONS(197), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [732] = 1,
    ACTIONS(199), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [743] = 1,
    ACTIONS(201), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [754] = 1,
    ACTIONS(203), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [765] = 1,
    ACTIONS(205), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [776] = 1,
    ACTIONS(207), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [787] = 1,
    ACTIONS(209), 8,
      ts_builtin_sym_end,
      anon_sym_PATH,
      anon_sym_GIT,
      anon_sym_GEM,
      anon_sym_PLATFORMS,
      anon_sym_DEPENDENCIES,
      anon_sym_RUBYVERSION,
      anon_sym_BUNDLEDWITH,
  [798] = 5,
    ACTIONS(89), 1,
      anon_sym_specs_COLON,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(34), 1,
      sym_section_content,
    STATE(35), 1,
      sym_specs,
    STATE(12), 2,
      sym_key_value,
      aux_sym_section_content_repeat1,
  [815] = 5,
    ACTIONS(89), 1,
      anon_sym_specs_COLON,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(35), 1,
      sym_specs,
    STATE(38), 1,
      sym_section_content,
    STATE(12), 2,
      sym_key_value,
      aux_sym_section_content_repeat1,
  [832] = 5,
    ACTIONS(89), 1,
      anon_sym_specs_COLON,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(35), 1,
      sym_specs,
    STATE(37), 1,
      sym_section_content,
    STATE(12), 2,
      sym_key_value,
      aux_sym_section_content_repeat1,
  [849] = 3,
    ACTIONS(123), 1,
      sym__dedent,
    ACTIONS(211), 1,
      sym_gem_name,
    STATE(46), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [860] = 3,
    ACTIONS(214), 1,
      sym_gem_name,
    ACTIONS(216), 1,
      sym__dedent,
    STATE(46), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [871] = 4,
    ACTIONS(29), 1,
      sym_number,
    STATE(3), 1,
      aux_sym_version_repeat1,
    STATE(36), 1,
      sym_version,
    STATE(39), 1,
      sym_bundled_with_entry,
  [884] = 3,
    ACTIONS(218), 1,
      sym_gem_name,
    STATE(19), 1,
      sym_gem_entry,
    STATE(13), 2,
      sym_gem_entry_with_dependencies,
      aux_sym_specs_repeat1,
  [895] = 3,
    ACTIONS(29), 1,
      sym_number,
    STATE(3), 1,
      aux_sym_version_repeat1,
    STATE(62), 1,
      sym_version,
  [905] = 2,
    ACTIONS(214), 1,
      sym_gem_name,
    STATE(47), 2,
      sym_dependency,
      aux_sym_dependencies_repeat1,
  [913] = 3,
    ACTIONS(29), 1,
      sym_number,
    STATE(3), 1,
      aux_sym_version_repeat1,
    STATE(25), 1,
      sym_version,
  [923] = 3,
    ACTIONS(29), 1,
      sym_number,
    STATE(3), 1,
      aux_sym_version_repeat1,
    STATE(27), 1,
      sym_version,
  [933] = 3,
    ACTIONS(29), 1,
      sym_number,
    STATE(3), 1,
      aux_sym_version_repeat1,
    STATE(24), 1,
      sym_version,
  [943] = 2,
    ACTIONS(220), 1,
      anon_sym_ruby,
    STATE(40), 1,
      sym_ruby_version_entry,
  [950] = 2,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      sym__newline,
  [957] = 2,
    ACTIONS(226), 1,
      sym_platform_name,
    STATE(20), 1,
      aux_sym_platforms_repeat1,
  [964] = 2,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      sym__newline,
  [971] = 1,
    ACTIONS(179), 2,
      sym__dedent,
      sym_gem_name,
  [976] = 1,
    ACTIONS(189), 2,
      sym__dedent,
      sym_gem_name,
  [981] = 1,
    ACTIONS(232), 1,
      sym_string,
  [985] = 1,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
  [989] = 1,
    ACTIONS(236), 1,
      sym_number,
  [993] = 1,
    ACTIONS(238), 1,
      sym__newline,
  [997] = 1,
    ACTIONS(240), 1,
      anon_sym_COLON,
  [1001] = 1,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
  [1005] = 1,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
  [1009] = 1,
    ACTIONS(246), 1,
      sym__newline,
  [1013] = 1,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
  [1017] = 1,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 85,
  [SMALL_STATE(6)] = 109,
  [SMALL_STATE(7)] = 144,
  [SMALL_STATE(8)] = 179,
  [SMALL_STATE(9)] = 213,
  [SMALL_STATE(10)] = 247,
  [SMALL_STATE(11)] = 281,
  [SMALL_STATE(12)] = 315,
  [SMALL_STATE(13)] = 341,
  [SMALL_STATE(14)] = 364,
  [SMALL_STATE(15)] = 385,
  [SMALL_STATE(16)] = 408,
  [SMALL_STATE(17)] = 428,
  [SMALL_STATE(18)] = 448,
  [SMALL_STATE(19)] = 468,
  [SMALL_STATE(20)] = 485,
  [SMALL_STATE(21)] = 504,
  [SMALL_STATE(22)] = 523,
  [SMALL_STATE(23)] = 538,
  [SMALL_STATE(24)] = 555,
  [SMALL_STATE(25)] = 572,
  [SMALL_STATE(26)] = 587,
  [SMALL_STATE(27)] = 602,
  [SMALL_STATE(28)] = 617,
  [SMALL_STATE(29)] = 632,
  [SMALL_STATE(30)] = 646,
  [SMALL_STATE(31)] = 660,
  [SMALL_STATE(32)] = 674,
  [SMALL_STATE(33)] = 688,
  [SMALL_STATE(34)] = 699,
  [SMALL_STATE(35)] = 710,
  [SMALL_STATE(36)] = 721,
  [SMALL_STATE(37)] = 732,
  [SMALL_STATE(38)] = 743,
  [SMALL_STATE(39)] = 754,
  [SMALL_STATE(40)] = 765,
  [SMALL_STATE(41)] = 776,
  [SMALL_STATE(42)] = 787,
  [SMALL_STATE(43)] = 798,
  [SMALL_STATE(44)] = 815,
  [SMALL_STATE(45)] = 832,
  [SMALL_STATE(46)] = 849,
  [SMALL_STATE(47)] = 860,
  [SMALL_STATE(48)] = 871,
  [SMALL_STATE(49)] = 884,
  [SMALL_STATE(50)] = 895,
  [SMALL_STATE(51)] = 905,
  [SMALL_STATE(52)] = 913,
  [SMALL_STATE(53)] = 923,
  [SMALL_STATE(54)] = 933,
  [SMALL_STATE(55)] = 943,
  [SMALL_STATE(56)] = 950,
  [SMALL_STATE(57)] = 957,
  [SMALL_STATE(58)] = 964,
  [SMALL_STATE(59)] = 971,
  [SMALL_STATE(60)] = 976,
  [SMALL_STATE(61)] = 981,
  [SMALL_STATE(62)] = 985,
  [SMALL_STATE(63)] = 989,
  [SMALL_STATE(64)] = 993,
  [SMALL_STATE(65)] = 997,
  [SMALL_STATE(66)] = 1001,
  [SMALL_STATE(67)] = 1005,
  [SMALL_STATE(68)] = 1009,
  [SMALL_STATE(69)] = 1013,
  [SMALL_STATE(70)] = 1017,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_version_repeat1, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_version_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_content, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_content, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specs, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_specs, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_content_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_content_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_content_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specs_repeat1, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_specs_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specs_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependencies, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependencies, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dependencies_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dependencies_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gem_entry_with_dependencies, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gem_entry_with_dependencies, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platforms, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platforms, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_platforms_repeat1, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_platforms_repeat1, 2, 0, 0),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_platforms_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, 0, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, 0, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_version_entry, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tilde, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tilde, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exact, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exact, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gem_entry, 4, 0, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gem_entry, 4, 0, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 2, 0, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency, 2, 0, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gem_entry_with_dependencies, 4, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gem_entry_with_dependencies, 4, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 5, 0, 4),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dependency, 5, 0, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_content, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_section, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundled_with_entry, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_section, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gem_section, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundled_with, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_version, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_version_entry, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_patch, 2, 0, 0),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependencies_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [244] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__indent = 0,
  ts_external_token__dedent = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__indent] = true,
  },
  [3] = {
    [ts_external_token__dedent] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_gemfilelock_external_scanner_create(void);
void tree_sitter_gemfilelock_external_scanner_destroy(void *);
bool tree_sitter_gemfilelock_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_gemfilelock_external_scanner_serialize(void *, char *);
void tree_sitter_gemfilelock_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_gemfilelock(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_gemfilelock_external_scanner_create,
      tree_sitter_gemfilelock_external_scanner_destroy,
      tree_sitter_gemfilelock_external_scanner_scan,
      tree_sitter_gemfilelock_external_scanner_serialize,
      tree_sitter_gemfilelock_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

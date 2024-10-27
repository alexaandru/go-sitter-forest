#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  aux_sym_desktop_entry_token1 = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_EQ = 5,
  aux_sym_entry_token1 = 6,
  anon_sym_LBRACK2 = 7,
  anon_sym_RBRACK2 = 8,
  anon_sym__ = 9,
  anon_sym_DOT = 10,
  anon_sym_AT = 11,
  sym_language = 12,
  sym_country = 13,
  aux_sym_encoding_token1 = 14,
  sym_true = 15,
  sym_false = 16,
  aux_sym_string_token1 = 17,
  sym_escape_sequence = 18,
  sym_field_code = 19,
  anon_sym_SEMI = 20,
  sym_group_name = 21,
  sym_identifier = 22,
  sym_desktop_entry = 23,
  sym_comment = 24,
  sym_group = 25,
  sym_header = 26,
  sym__line = 27,
  sym_entry = 28,
  sym_localized_key = 29,
  sym_locale = 30,
  sym_encoding = 31,
  sym_modifier = 32,
  sym__value = 33,
  sym_string = 34,
  sym_list = 35,
  aux_sym_desktop_entry_repeat1 = 36,
  aux_sym_desktop_entry_repeat2 = 37,
  aux_sym_group_repeat1 = 38,
  aux_sym_string_repeat1 = 39,
  aux_sym_list_repeat1 = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_desktop_entry_token1] = "desktop_entry_token1",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [aux_sym_entry_token1] = "entry_token1",
  [anon_sym_LBRACK2] = "[",
  [anon_sym_RBRACK2] = "]",
  [anon_sym__] = "_",
  [anon_sym_DOT] = ".",
  [anon_sym_AT] = "@",
  [sym_language] = "language",
  [sym_country] = "country",
  [aux_sym_encoding_token1] = "encoding_token1",
  [sym_true] = "true",
  [sym_false] = "false",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_field_code] = "field_code",
  [anon_sym_SEMI] = ";",
  [sym_group_name] = "group_name",
  [sym_identifier] = "identifier",
  [sym_desktop_entry] = "desktop_entry",
  [sym_comment] = "comment",
  [sym_group] = "group",
  [sym_header] = "header",
  [sym__line] = "_line",
  [sym_entry] = "entry",
  [sym_localized_key] = "localized_key",
  [sym_locale] = "locale",
  [sym_encoding] = "encoding",
  [sym_modifier] = "modifier",
  [sym__value] = "_value",
  [sym_string] = "string",
  [sym_list] = "list",
  [aux_sym_desktop_entry_repeat1] = "desktop_entry_repeat1",
  [aux_sym_desktop_entry_repeat2] = "desktop_entry_repeat2",
  [aux_sym_group_repeat1] = "group_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_desktop_entry_token1] = aux_sym_desktop_entry_token1,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_entry_token1] = aux_sym_entry_token1,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [anon_sym_RBRACK2] = anon_sym_RBRACK,
  [anon_sym__] = anon_sym__,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_AT] = anon_sym_AT,
  [sym_language] = sym_language,
  [sym_country] = sym_country,
  [aux_sym_encoding_token1] = aux_sym_encoding_token1,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_field_code] = sym_field_code,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_group_name] = sym_group_name,
  [sym_identifier] = sym_identifier,
  [sym_desktop_entry] = sym_desktop_entry,
  [sym_comment] = sym_comment,
  [sym_group] = sym_group,
  [sym_header] = sym_header,
  [sym__line] = sym__line,
  [sym_entry] = sym_entry,
  [sym_localized_key] = sym_localized_key,
  [sym_locale] = sym_locale,
  [sym_encoding] = sym_encoding,
  [sym_modifier] = sym_modifier,
  [sym__value] = sym__value,
  [sym_string] = sym_string,
  [sym_list] = sym_list,
  [aux_sym_desktop_entry_repeat1] = aux_sym_desktop_entry_repeat1,
  [aux_sym_desktop_entry_repeat2] = aux_sym_desktop_entry_repeat2,
  [aux_sym_group_repeat1] = aux_sym_group_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_desktop_entry_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token1] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_entry_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_language] = {
    .visible = true,
    .named = true,
  },
  [sym_country] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_encoding_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_field_code] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_group_name] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_desktop_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_localized_key] = {
    .visible = true,
    .named = true,
  },
  [sym_locale] = {
    .visible = true,
    .named = true,
  },
  [sym_encoding] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
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
  [aux_sym_desktop_entry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_desktop_entry_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_locale = 2,
  field_name = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_locale] = "locale",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_locale, 2},
    {field_name, 0},
  [2] =
    {field_key, 0},
    {field_value, 3},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '\n', 19,
        '#', 20,
        '%', 12,
        '-', 38,
        '.', 28,
        ';', 58,
        '=', 23,
        '@', 29,
        '[', 25,
        '\\', 11,
        ']', 26,
        '_', 27,
        'f', 30,
        't', 34,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1);
      if (lookahead == ' ') ADVANCE(59);
      if (('!' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(60);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(56);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '%', 57,
        'D', 57,
        'F', 57,
        'N', 57,
        'U', 57,
        'c', 57,
        'd', 57,
        'f', 57,
        'i', 57,
        'k', 57,
        'm', 57,
        'n', 57,
        'u', 57,
        'v', 57,
      );
      END_STATE();
    case 13:
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 14:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 15:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '\n', 19,
        '#', 20,
        '%', 12,
        ';', 58,
        '=', 23,
        '[', 21,
        '\\', 11,
        ']', 22,
        'f', 61,
        't', 65,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_desktop_entry_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_entry_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == 's') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_country);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_country);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_encoding_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(49);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_token1);
      ADVANCE_MAP(
        '%', 57,
        'D', 57,
        'F', 57,
        'N', 57,
        'U', 57,
        'c', 57,
        'd', 57,
        'f', 57,
        'i', 57,
        'k', 57,
        'm', 57,
        'n', 57,
        'u', 57,
        'v', 57,
      );
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_field_code);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_group_name);
      if (lookahead == ' ') ADVANCE(59);
      if (('!' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_group_name);
      if ((' ' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 24},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 16},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_desktop_entry_token1] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_RBRACK2] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_language] = ACTIONS(1),
    [sym_country] = ACTIONS(1),
    [aux_sym_encoding_token1] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_field_code] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_desktop_entry] = STATE(37),
    [sym_comment] = STATE(5),
    [sym_group] = STATE(13),
    [sym_header] = STATE(2),
    [aux_sym_desktop_entry_repeat1] = STATE(5),
    [aux_sym_desktop_entry_repeat2] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_desktop_entry_token1] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      aux_sym_desktop_entry_token1,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(46), 1,
      sym_localized_key,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(3), 4,
      sym_comment,
      sym__line,
      sym_entry,
      aux_sym_group_repeat1,
  [23] = 6,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(19), 1,
      aux_sym_desktop_entry_token1,
    STATE(46), 1,
      sym_localized_key,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(4), 4,
      sym_comment,
      sym__line,
      sym_entry,
      aux_sym_group_repeat1,
  [46] = 6,
    ACTIONS(23), 1,
      aux_sym_desktop_entry_token1,
    ACTIONS(26), 1,
      aux_sym_comment_token1,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(46), 1,
      sym_localized_key,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(4), 4,
      sym_comment,
      sym__line,
      sym_entry,
      aux_sym_group_repeat1,
  [69] = 7,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      aux_sym_desktop_entry_token1,
    STATE(2), 1,
      sym_header,
    STATE(7), 2,
      sym_comment,
      aux_sym_desktop_entry_repeat1,
    STATE(14), 2,
      sym_group,
      aux_sym_desktop_entry_repeat2,
  [93] = 5,
    STATE(8), 1,
      aux_sym_string_repeat1,
    STATE(22), 1,
      sym_string,
    ACTIONS(36), 2,
      sym_true,
      sym_false,
    STATE(38), 2,
      sym__value,
      sym_list,
    ACTIONS(38), 3,
      aux_sym_string_token1,
      sym_escape_sequence,
      sym_field_code,
  [113] = 4,
    ACTIONS(42), 1,
      aux_sym_desktop_entry_token1,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(7), 2,
      sym_comment,
      aux_sym_desktop_entry_repeat1,
  [128] = 3,
    STATE(9), 1,
      aux_sym_string_repeat1,
    ACTIONS(48), 2,
      aux_sym_desktop_entry_token1,
      anon_sym_SEMI,
    ACTIONS(50), 3,
      aux_sym_string_token1,
      sym_escape_sequence,
      sym_field_code,
  [141] = 3,
    STATE(9), 1,
      aux_sym_string_repeat1,
    ACTIONS(52), 2,
      aux_sym_desktop_entry_token1,
      anon_sym_SEMI,
    ACTIONS(54), 3,
      aux_sym_string_token1,
      sym_escape_sequence,
      sym_field_code,
  [154] = 4,
    ACTIONS(57), 1,
      aux_sym_desktop_entry_token1,
    STATE(8), 1,
      aux_sym_string_repeat1,
    STATE(30), 1,
      sym_string,
    ACTIONS(38), 3,
      aux_sym_string_token1,
      sym_escape_sequence,
      sym_field_code,
  [169] = 4,
    ACTIONS(59), 1,
      aux_sym_desktop_entry_token1,
    STATE(8), 1,
      aux_sym_string_repeat1,
    STATE(30), 1,
      sym_string,
    ACTIONS(38), 3,
      aux_sym_string_token1,
      sym_escape_sequence,
      sym_field_code,
  [184] = 1,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      aux_sym_desktop_entry_token1,
      aux_sym_comment_token1,
      anon_sym_LBRACK,
      sym_identifier,
  [192] = 4,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_header,
    STATE(15), 2,
      sym_group,
      aux_sym_desktop_entry_repeat2,
  [206] = 4,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_header,
    STATE(15), 2,
      sym_group,
      aux_sym_desktop_entry_repeat2,
  [220] = 4,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym_header,
    STATE(15), 2,
      sym_group,
      aux_sym_desktop_entry_repeat2,
  [234] = 1,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      aux_sym_desktop_entry_token1,
      aux_sym_comment_token1,
      anon_sym_LBRACK,
      sym_identifier,
  [242] = 1,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      aux_sym_desktop_entry_token1,
      aux_sym_comment_token1,
      anon_sym_LBRACK,
      sym_identifier,
  [250] = 3,
    STATE(8), 1,
      aux_sym_string_repeat1,
    STATE(30), 1,
      sym_string,
    ACTIONS(38), 3,
      aux_sym_string_token1,
      sym_escape_sequence,
      sym_field_code,
  [262] = 4,
    ACTIONS(74), 1,
      anon_sym_RBRACK2,
    ACTIONS(76), 1,
      anon_sym__,
    ACTIONS(78), 1,
      anon_sym_DOT,
    ACTIONS(80), 1,
      anon_sym_AT,
  [275] = 3,
    ACTIONS(82), 1,
      aux_sym_desktop_entry_token1,
    ACTIONS(84), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      aux_sym_list_repeat1,
  [285] = 3,
    ACTIONS(87), 1,
      aux_sym_desktop_entry_token1,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      aux_sym_list_repeat1,
  [295] = 3,
    ACTIONS(91), 1,
      aux_sym_desktop_entry_token1,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    STATE(21), 1,
      aux_sym_list_repeat1,
  [305] = 3,
    ACTIONS(95), 1,
      anon_sym_RBRACK2,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_AT,
  [315] = 2,
    ACTIONS(101), 1,
      aux_sym_encoding_token1,
    STATE(47), 1,
      sym_modifier,
  [322] = 2,
    ACTIONS(103), 1,
      aux_sym_encoding_token1,
    STATE(27), 1,
      sym_encoding,
  [329] = 1,
    ACTIONS(105), 2,
      anon_sym_RBRACK2,
      anon_sym_AT,
  [334] = 2,
    ACTIONS(95), 1,
      anon_sym_RBRACK2,
    ACTIONS(99), 1,
      anon_sym_AT,
  [341] = 2,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(109), 1,
      anon_sym_LBRACK2,
  [348] = 2,
    ACTIONS(111), 1,
      anon_sym_RBRACK2,
    ACTIONS(113), 1,
      anon_sym_AT,
  [355] = 1,
    ACTIONS(82), 2,
      aux_sym_desktop_entry_token1,
      anon_sym_SEMI,
  [360] = 2,
    ACTIONS(115), 1,
      sym_language,
    STATE(35), 1,
      sym_locale,
  [367] = 2,
    ACTIONS(101), 1,
      aux_sym_encoding_token1,
    STATE(48), 1,
      sym_modifier,
  [374] = 2,
    ACTIONS(103), 1,
      aux_sym_encoding_token1,
    STATE(29), 1,
      sym_encoding,
  [381] = 2,
    ACTIONS(101), 1,
      aux_sym_encoding_token1,
    STATE(49), 1,
      sym_modifier,
  [388] = 1,
    ACTIONS(117), 1,
      anon_sym_RBRACK2,
  [392] = 1,
    ACTIONS(119), 1,
      aux_sym_desktop_entry_token1,
  [396] = 1,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
  [400] = 1,
    ACTIONS(123), 1,
      aux_sym_desktop_entry_token1,
  [404] = 1,
    ACTIONS(125), 1,
      sym_country,
  [408] = 1,
    ACTIONS(127), 1,
      anon_sym_EQ,
  [412] = 1,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
  [416] = 1,
    ACTIONS(131), 1,
      aux_sym_desktop_entry_token1,
  [420] = 1,
    ACTIONS(133), 1,
      sym_group_name,
  [424] = 1,
    ACTIONS(135), 1,
      aux_sym_entry_token1,
  [428] = 1,
    ACTIONS(137), 1,
      anon_sym_RBRACK2,
  [432] = 1,
    ACTIONS(107), 1,
      anon_sym_EQ,
  [436] = 1,
    ACTIONS(95), 1,
      anon_sym_RBRACK2,
  [440] = 1,
    ACTIONS(111), 1,
      anon_sym_RBRACK2,
  [444] = 1,
    ACTIONS(139), 1,
      anon_sym_RBRACK2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 93,
  [SMALL_STATE(7)] = 113,
  [SMALL_STATE(8)] = 128,
  [SMALL_STATE(9)] = 141,
  [SMALL_STATE(10)] = 154,
  [SMALL_STATE(11)] = 169,
  [SMALL_STATE(12)] = 184,
  [SMALL_STATE(13)] = 192,
  [SMALL_STATE(14)] = 206,
  [SMALL_STATE(15)] = 220,
  [SMALL_STATE(16)] = 234,
  [SMALL_STATE(17)] = 242,
  [SMALL_STATE(18)] = 250,
  [SMALL_STATE(19)] = 262,
  [SMALL_STATE(20)] = 275,
  [SMALL_STATE(21)] = 285,
  [SMALL_STATE(22)] = 295,
  [SMALL_STATE(23)] = 305,
  [SMALL_STATE(24)] = 315,
  [SMALL_STATE(25)] = 322,
  [SMALL_STATE(26)] = 329,
  [SMALL_STATE(27)] = 334,
  [SMALL_STATE(28)] = 341,
  [SMALL_STATE(29)] = 348,
  [SMALL_STATE(30)] = 355,
  [SMALL_STATE(31)] = 360,
  [SMALL_STATE(32)] = 367,
  [SMALL_STATE(33)] = 374,
  [SMALL_STATE(34)] = 381,
  [SMALL_STATE(35)] = 388,
  [SMALL_STATE(36)] = 392,
  [SMALL_STATE(37)] = 396,
  [SMALL_STATE(38)] = 400,
  [SMALL_STATE(39)] = 404,
  [SMALL_STATE(40)] = 408,
  [SMALL_STATE(41)] = 412,
  [SMALL_STATE(42)] = 416,
  [SMALL_STATE(43)] = 420,
  [SMALL_STATE(44)] = 424,
  [SMALL_STATE(45)] = 428,
  [SMALL_STATE(46)] = 432,
  [SMALL_STATE(47)] = 436,
  [SMALL_STATE(48)] = 440,
  [SMALL_STATE(49)] = 444,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_desktop_entry, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 2, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_desktop_entry, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_desktop_entry_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_desktop_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_desktop_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_desktop_entry, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_desktop_entry_repeat2, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_desktop_entry_repeat2, 2, 0, 0), SHIFT_REPEAT(43),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 5, 0, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locale, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locale, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encoding, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locale, 5, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [121] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localized_key, 4, 0, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locale, 7, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_desktop(void) {
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

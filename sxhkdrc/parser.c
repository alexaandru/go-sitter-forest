#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 22
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  aux_sym_binding_token1 = 2,
  anon_sym_BSLASH_LF = 3,
  anon_sym_super = 4,
  anon_sym_hyper = 5,
  anon_sym_meta = 6,
  anon_sym_alt = 7,
  anon_sym_control = 8,
  anon_sym_ctrl = 9,
  anon_sym_shift = 10,
  anon_sym_mode_switch = 11,
  anon_sym_lock = 12,
  anon_sym_mod1 = 13,
  anon_sym_mod2 = 14,
  anon_sym_mod3 = 15,
  anon_sym_mod4 = 16,
  anon_sym_mod5 = 17,
  anon_sym_any = 18,
  sym_operator = 19,
  anon_sym_AT = 20,
  anon_sym_TILDE = 21,
  anon_sym_LBRACE = 22,
  anon_sym_COMMA = 23,
  anon_sym_RBRACE = 24,
  anon_sym_SEMI = 25,
  anon_sym_COLON = 26,
  sym_keysym = 27,
  sym_range = 28,
  sym_comment = 29,
  aux_sym_command_token1 = 30,
  aux_sym_command_token2 = 31,
  sym_source_file = 32,
  sym__definition = 33,
  sym_binding = 34,
  sym_hotkey = 35,
  aux_sym__hotkey = 36,
  sym_modifier = 37,
  sym_attribute = 38,
  sym_punctuation = 39,
  sym_delimiter = 40,
  sym_command_sync_prefix = 41,
  sym_command = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_hotkey_repeat1 = 44,
  aux_sym_command_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_binding_token1] = "binding_token1",
  [anon_sym_BSLASH_LF] = "\\\n",
  [anon_sym_super] = "super",
  [anon_sym_hyper] = "hyper",
  [anon_sym_meta] = "meta",
  [anon_sym_alt] = "alt",
  [anon_sym_control] = "control",
  [anon_sym_ctrl] = "ctrl",
  [anon_sym_shift] = "shift",
  [anon_sym_mode_switch] = "mode_switch",
  [anon_sym_lock] = "lock",
  [anon_sym_mod1] = "mod1",
  [anon_sym_mod2] = "mod2",
  [anon_sym_mod3] = "mod3",
  [anon_sym_mod4] = "mod4",
  [anon_sym_mod5] = "mod5",
  [anon_sym_any] = "any",
  [sym_operator] = "operator",
  [anon_sym_AT] = "@",
  [anon_sym_TILDE] = "~",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [sym_keysym] = "keysym",
  [sym_range] = "range",
  [sym_comment] = "comment",
  [aux_sym_command_token1] = "command_token1",
  [aux_sym_command_token2] = "command_token2",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_binding] = "binding",
  [sym_hotkey] = "hotkey",
  [aux_sym__hotkey] = "_hotkey",
  [sym_modifier] = "modifier",
  [sym_attribute] = "attribute",
  [sym_punctuation] = "punctuation",
  [sym_delimiter] = "delimiter",
  [sym_command_sync_prefix] = "command_sync_prefix",
  [sym_command] = "command",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_hotkey_repeat1] = "hotkey_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_binding_token1] = aux_sym_binding_token1,
  [anon_sym_BSLASH_LF] = anon_sym_BSLASH_LF,
  [anon_sym_super] = anon_sym_super,
  [anon_sym_hyper] = anon_sym_hyper,
  [anon_sym_meta] = anon_sym_meta,
  [anon_sym_alt] = anon_sym_alt,
  [anon_sym_control] = anon_sym_control,
  [anon_sym_ctrl] = anon_sym_ctrl,
  [anon_sym_shift] = anon_sym_shift,
  [anon_sym_mode_switch] = anon_sym_mode_switch,
  [anon_sym_lock] = anon_sym_lock,
  [anon_sym_mod1] = anon_sym_mod1,
  [anon_sym_mod2] = anon_sym_mod2,
  [anon_sym_mod3] = anon_sym_mod3,
  [anon_sym_mod4] = anon_sym_mod4,
  [anon_sym_mod5] = anon_sym_mod5,
  [anon_sym_any] = anon_sym_any,
  [sym_operator] = sym_operator,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_keysym] = sym_keysym,
  [sym_range] = sym_range,
  [sym_comment] = sym_comment,
  [aux_sym_command_token1] = aux_sym_command_token1,
  [aux_sym_command_token2] = aux_sym_command_token2,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_binding] = sym_binding,
  [sym_hotkey] = sym_hotkey,
  [aux_sym__hotkey] = aux_sym__hotkey,
  [sym_modifier] = sym_modifier,
  [sym_attribute] = sym_attribute,
  [sym_punctuation] = sym_punctuation,
  [sym_delimiter] = sym_delimiter,
  [sym_command_sync_prefix] = sym_command_sync_prefix,
  [sym_command] = sym_command,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_hotkey_repeat1] = aux_sym_hotkey_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
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
  [aux_sym_binding_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_super] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hyper] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_control] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ctrl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mode_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_keysym] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_command_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_hotkey] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__hotkey] = {
    .visible = false,
    .named = false,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_punctuation] = {
    .visible = true,
    .named = true,
  },
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_command_sync_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hotkey_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
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
  [9] = 6,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 12,
  [17] = 13,
  [18] = 18,
  [19] = 19,
  [20] = 11,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      ADVANCE_MAP(
        '\n', 9,
        '#', 76,
        '+', 27,
        ',', 31,
        ':', 35,
        ';', 33,
        '@', 28,
        '\\', 1,
        '_', 74,
        'a', 38,
        'c', 39,
        'h', 41,
        'l', 40,
        'm', 36,
        's', 37,
        '{', 30,
        '}', 32,
        '~', 29,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == ';') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(81);
      END_STATE();
    case 5:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      ADVANCE_MAP(
        '#', 76,
        '+', 27,
        ',', 31,
        ':', 35,
        ';', 33,
        '@', 28,
        '\\', 1,
        '_', 74,
        'a', 38,
        'c', 39,
        'h', 41,
        'l', 40,
        'm', 36,
        's', 37,
        '{', 30,
        '}', 32,
        '~', 29,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_binding_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_super);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_hyper);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_mode_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_lock);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_mod1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_mod2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_mod3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_mod4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_mod5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_operator);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 't') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == 'y') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == '-') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '2') ADVANCE(22);
      if (lookahead == '3') ADVANCE(23);
      if (lookahead == '4') ADVANCE(24);
      if (lookahead == '5') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'a') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'c') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'c') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'd') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'f') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'h') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'i') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'i') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'k') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'l') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'l') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'o') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'p') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'p') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'r') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'r') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'r') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'r') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 's') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 't') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 't') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 't') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 't') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 't') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'w') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_keysym);
      if (lookahead == 'y') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_keysym);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_range);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_command_token2);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_command_token2);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_command_token2);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_command_token2);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_BSLASH_LF] = ACTIONS(1),
    [anon_sym_super] = ACTIONS(1),
    [anon_sym_hyper] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_alt] = ACTIONS(1),
    [anon_sym_control] = ACTIONS(1),
    [anon_sym_ctrl] = ACTIONS(1),
    [anon_sym_shift] = ACTIONS(1),
    [anon_sym_mode_switch] = ACTIONS(1),
    [anon_sym_lock] = ACTIONS(1),
    [anon_sym_mod1] = ACTIONS(1),
    [anon_sym_mod2] = ACTIONS(1),
    [anon_sym_mod3] = ACTIONS(1),
    [anon_sym_mod4] = ACTIONS(1),
    [anon_sym_mod5] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [sym_operator] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_keysym] = ACTIONS(1),
    [sym_range] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym__definition] = STATE(3),
    [sym_binding] = STATE(3),
    [sym_hotkey] = STATE(32),
    [aux_sym__hotkey] = STATE(4),
    [sym_modifier] = STATE(4),
    [sym_attribute] = STATE(4),
    [sym_punctuation] = STATE(4),
    [sym_delimiter] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_hotkey_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_super] = ACTIONS(7),
    [anon_sym_hyper] = ACTIONS(7),
    [anon_sym_meta] = ACTIONS(7),
    [anon_sym_alt] = ACTIONS(7),
    [anon_sym_control] = ACTIONS(7),
    [anon_sym_ctrl] = ACTIONS(7),
    [anon_sym_shift] = ACTIONS(7),
    [anon_sym_mode_switch] = ACTIONS(7),
    [anon_sym_lock] = ACTIONS(7),
    [anon_sym_mod1] = ACTIONS(7),
    [anon_sym_mod2] = ACTIONS(7),
    [anon_sym_mod3] = ACTIONS(7),
    [anon_sym_mod4] = ACTIONS(7),
    [anon_sym_mod5] = ACTIONS(7),
    [anon_sym_any] = ACTIONS(7),
    [sym_operator] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(15),
    [sym_keysym] = ACTIONS(17),
    [sym_range] = ACTIONS(9),
    [sym_comment] = ACTIONS(19),
  },
  [2] = {
    [sym__definition] = STATE(2),
    [sym_binding] = STATE(2),
    [sym_hotkey] = STATE(32),
    [aux_sym__hotkey] = STATE(4),
    [sym_modifier] = STATE(4),
    [sym_attribute] = STATE(4),
    [sym_punctuation] = STATE(4),
    [sym_delimiter] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_hotkey_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_super] = ACTIONS(23),
    [anon_sym_hyper] = ACTIONS(23),
    [anon_sym_meta] = ACTIONS(23),
    [anon_sym_alt] = ACTIONS(23),
    [anon_sym_control] = ACTIONS(23),
    [anon_sym_ctrl] = ACTIONS(23),
    [anon_sym_shift] = ACTIONS(23),
    [anon_sym_mode_switch] = ACTIONS(23),
    [anon_sym_lock] = ACTIONS(23),
    [anon_sym_mod1] = ACTIONS(23),
    [anon_sym_mod2] = ACTIONS(23),
    [anon_sym_mod3] = ACTIONS(23),
    [anon_sym_mod4] = ACTIONS(23),
    [anon_sym_mod5] = ACTIONS(23),
    [anon_sym_any] = ACTIONS(23),
    [sym_operator] = ACTIONS(26),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(32),
    [anon_sym_COMMA] = ACTIONS(32),
    [anon_sym_RBRACE] = ACTIONS(32),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(35),
    [sym_keysym] = ACTIONS(38),
    [sym_range] = ACTIONS(26),
    [sym_comment] = ACTIONS(19),
  },
  [3] = {
    [sym__definition] = STATE(2),
    [sym_binding] = STATE(2),
    [sym_hotkey] = STATE(32),
    [aux_sym__hotkey] = STATE(4),
    [sym_modifier] = STATE(4),
    [sym_attribute] = STATE(4),
    [sym_punctuation] = STATE(4),
    [sym_delimiter] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_hotkey_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_super] = ACTIONS(7),
    [anon_sym_hyper] = ACTIONS(7),
    [anon_sym_meta] = ACTIONS(7),
    [anon_sym_alt] = ACTIONS(7),
    [anon_sym_control] = ACTIONS(7),
    [anon_sym_ctrl] = ACTIONS(7),
    [anon_sym_shift] = ACTIONS(7),
    [anon_sym_mode_switch] = ACTIONS(7),
    [anon_sym_lock] = ACTIONS(7),
    [anon_sym_mod1] = ACTIONS(7),
    [anon_sym_mod2] = ACTIONS(7),
    [anon_sym_mod3] = ACTIONS(7),
    [anon_sym_mod4] = ACTIONS(7),
    [anon_sym_mod5] = ACTIONS(7),
    [anon_sym_any] = ACTIONS(7),
    [sym_operator] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(15),
    [sym_keysym] = ACTIONS(17),
    [sym_range] = ACTIONS(9),
    [sym_comment] = ACTIONS(19),
  },
  [4] = {
    [aux_sym__hotkey] = STATE(6),
    [sym_modifier] = STATE(6),
    [sym_attribute] = STATE(6),
    [sym_punctuation] = STATE(6),
    [sym_delimiter] = STATE(6),
    [anon_sym_LF] = ACTIONS(43),
    [anon_sym_BSLASH_LF] = ACTIONS(45),
    [anon_sym_super] = ACTIONS(7),
    [anon_sym_hyper] = ACTIONS(7),
    [anon_sym_meta] = ACTIONS(7),
    [anon_sym_alt] = ACTIONS(7),
    [anon_sym_control] = ACTIONS(7),
    [anon_sym_ctrl] = ACTIONS(7),
    [anon_sym_shift] = ACTIONS(7),
    [anon_sym_mode_switch] = ACTIONS(7),
    [anon_sym_lock] = ACTIONS(7),
    [anon_sym_mod1] = ACTIONS(7),
    [anon_sym_mod2] = ACTIONS(7),
    [anon_sym_mod3] = ACTIONS(7),
    [anon_sym_mod4] = ACTIONS(7),
    [anon_sym_mod5] = ACTIONS(7),
    [anon_sym_any] = ACTIONS(7),
    [sym_operator] = ACTIONS(47),
    [anon_sym_AT] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(53),
    [sym_keysym] = ACTIONS(47),
    [sym_range] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [aux_sym__hotkey] = STATE(6),
    [sym_modifier] = STATE(6),
    [sym_attribute] = STATE(6),
    [sym_punctuation] = STATE(6),
    [sym_delimiter] = STATE(6),
    [anon_sym_LF] = ACTIONS(55),
    [anon_sym_BSLASH_LF] = ACTIONS(45),
    [anon_sym_super] = ACTIONS(7),
    [anon_sym_hyper] = ACTIONS(7),
    [anon_sym_meta] = ACTIONS(7),
    [anon_sym_alt] = ACTIONS(7),
    [anon_sym_control] = ACTIONS(7),
    [anon_sym_ctrl] = ACTIONS(7),
    [anon_sym_shift] = ACTIONS(7),
    [anon_sym_mode_switch] = ACTIONS(7),
    [anon_sym_lock] = ACTIONS(7),
    [anon_sym_mod1] = ACTIONS(7),
    [anon_sym_mod2] = ACTIONS(7),
    [anon_sym_mod3] = ACTIONS(7),
    [anon_sym_mod4] = ACTIONS(7),
    [anon_sym_mod5] = ACTIONS(7),
    [anon_sym_any] = ACTIONS(7),
    [sym_operator] = ACTIONS(47),
    [anon_sym_AT] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(53),
    [sym_keysym] = ACTIONS(47),
    [sym_range] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [aux_sym__hotkey] = STATE(6),
    [sym_modifier] = STATE(6),
    [sym_attribute] = STATE(6),
    [sym_punctuation] = STATE(6),
    [sym_delimiter] = STATE(6),
    [anon_sym_LF] = ACTIONS(57),
    [anon_sym_BSLASH_LF] = ACTIONS(59),
    [anon_sym_super] = ACTIONS(61),
    [anon_sym_hyper] = ACTIONS(61),
    [anon_sym_meta] = ACTIONS(61),
    [anon_sym_alt] = ACTIONS(61),
    [anon_sym_control] = ACTIONS(61),
    [anon_sym_ctrl] = ACTIONS(61),
    [anon_sym_shift] = ACTIONS(61),
    [anon_sym_mode_switch] = ACTIONS(61),
    [anon_sym_lock] = ACTIONS(61),
    [anon_sym_mod1] = ACTIONS(61),
    [anon_sym_mod2] = ACTIONS(61),
    [anon_sym_mod3] = ACTIONS(61),
    [anon_sym_mod4] = ACTIONS(61),
    [anon_sym_mod5] = ACTIONS(61),
    [anon_sym_any] = ACTIONS(61),
    [sym_operator] = ACTIONS(64),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_TILDE] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_COMMA] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(73),
    [sym_keysym] = ACTIONS(64),
    [sym_range] = ACTIONS(64),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [aux_sym__hotkey] = STATE(10),
    [sym_modifier] = STATE(10),
    [sym_attribute] = STATE(10),
    [sym_punctuation] = STATE(10),
    [sym_delimiter] = STATE(10),
    [aux_sym_hotkey_repeat1] = STATE(7),
    [anon_sym_super] = ACTIONS(76),
    [anon_sym_hyper] = ACTIONS(76),
    [anon_sym_meta] = ACTIONS(76),
    [anon_sym_alt] = ACTIONS(76),
    [anon_sym_control] = ACTIONS(76),
    [anon_sym_ctrl] = ACTIONS(76),
    [anon_sym_shift] = ACTIONS(76),
    [anon_sym_mode_switch] = ACTIONS(76),
    [anon_sym_lock] = ACTIONS(76),
    [anon_sym_mod1] = ACTIONS(76),
    [anon_sym_mod2] = ACTIONS(76),
    [anon_sym_mod3] = ACTIONS(76),
    [anon_sym_mod4] = ACTIONS(76),
    [anon_sym_mod5] = ACTIONS(76),
    [anon_sym_any] = ACTIONS(76),
    [sym_operator] = ACTIONS(79),
    [anon_sym_AT] = ACTIONS(82),
    [anon_sym_TILDE] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(88),
    [anon_sym_COLON] = ACTIONS(88),
    [sym_keysym] = ACTIONS(91),
    [sym_range] = ACTIONS(79),
    [sym_comment] = ACTIONS(19),
  },
  [8] = {
    [aux_sym__hotkey] = STATE(5),
    [sym_modifier] = STATE(5),
    [sym_attribute] = STATE(5),
    [sym_punctuation] = STATE(5),
    [sym_delimiter] = STATE(5),
    [aux_sym_hotkey_repeat1] = STATE(7),
    [anon_sym_super] = ACTIONS(7),
    [anon_sym_hyper] = ACTIONS(7),
    [anon_sym_meta] = ACTIONS(7),
    [anon_sym_alt] = ACTIONS(7),
    [anon_sym_control] = ACTIONS(7),
    [anon_sym_ctrl] = ACTIONS(7),
    [anon_sym_shift] = ACTIONS(7),
    [anon_sym_mode_switch] = ACTIONS(7),
    [anon_sym_lock] = ACTIONS(7),
    [anon_sym_mod1] = ACTIONS(7),
    [anon_sym_mod2] = ACTIONS(7),
    [anon_sym_mod3] = ACTIONS(7),
    [anon_sym_mod4] = ACTIONS(7),
    [anon_sym_mod5] = ACTIONS(7),
    [anon_sym_any] = ACTIONS(7),
    [sym_operator] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(15),
    [sym_keysym] = ACTIONS(96),
    [sym_range] = ACTIONS(94),
    [sym_comment] = ACTIONS(19),
  },
  [9] = {
    [aux_sym__hotkey] = STATE(9),
    [sym_modifier] = STATE(9),
    [sym_attribute] = STATE(9),
    [sym_punctuation] = STATE(9),
    [sym_delimiter] = STATE(9),
    [anon_sym_BSLASH_LF] = ACTIONS(57),
    [anon_sym_super] = ACTIONS(98),
    [anon_sym_hyper] = ACTIONS(98),
    [anon_sym_meta] = ACTIONS(98),
    [anon_sym_alt] = ACTIONS(98),
    [anon_sym_control] = ACTIONS(98),
    [anon_sym_ctrl] = ACTIONS(98),
    [anon_sym_shift] = ACTIONS(98),
    [anon_sym_mode_switch] = ACTIONS(98),
    [anon_sym_lock] = ACTIONS(98),
    [anon_sym_mod1] = ACTIONS(98),
    [anon_sym_mod2] = ACTIONS(98),
    [anon_sym_mod3] = ACTIONS(98),
    [anon_sym_mod4] = ACTIONS(98),
    [anon_sym_mod5] = ACTIONS(98),
    [anon_sym_any] = ACTIONS(98),
    [sym_operator] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(104),
    [anon_sym_TILDE] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_SEMI] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(110),
    [sym_keysym] = ACTIONS(113),
    [sym_range] = ACTIONS(101),
    [sym_comment] = ACTIONS(19),
  },
  [10] = {
    [aux_sym__hotkey] = STATE(9),
    [sym_modifier] = STATE(9),
    [sym_attribute] = STATE(9),
    [sym_punctuation] = STATE(9),
    [sym_delimiter] = STATE(9),
    [anon_sym_BSLASH_LF] = ACTIONS(116),
    [anon_sym_super] = ACTIONS(118),
    [anon_sym_hyper] = ACTIONS(118),
    [anon_sym_meta] = ACTIONS(118),
    [anon_sym_alt] = ACTIONS(118),
    [anon_sym_control] = ACTIONS(118),
    [anon_sym_ctrl] = ACTIONS(118),
    [anon_sym_shift] = ACTIONS(118),
    [anon_sym_mode_switch] = ACTIONS(118),
    [anon_sym_lock] = ACTIONS(118),
    [anon_sym_mod1] = ACTIONS(118),
    [anon_sym_mod2] = ACTIONS(118),
    [anon_sym_mod3] = ACTIONS(118),
    [anon_sym_mod4] = ACTIONS(118),
    [anon_sym_mod5] = ACTIONS(118),
    [anon_sym_any] = ACTIONS(118),
    [sym_operator] = ACTIONS(120),
    [anon_sym_AT] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(124),
    [anon_sym_RBRACE] = ACTIONS(124),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(126),
    [sym_keysym] = ACTIONS(128),
    [sym_range] = ACTIONS(120),
    [sym_comment] = ACTIONS(19),
  },
  [11] = {
    [anon_sym_LF] = ACTIONS(130),
    [anon_sym_BSLASH_LF] = ACTIONS(132),
    [anon_sym_super] = ACTIONS(132),
    [anon_sym_hyper] = ACTIONS(132),
    [anon_sym_meta] = ACTIONS(132),
    [anon_sym_alt] = ACTIONS(132),
    [anon_sym_control] = ACTIONS(132),
    [anon_sym_ctrl] = ACTIONS(132),
    [anon_sym_shift] = ACTIONS(132),
    [anon_sym_mode_switch] = ACTIONS(132),
    [anon_sym_lock] = ACTIONS(132),
    [anon_sym_mod1] = ACTIONS(132),
    [anon_sym_mod2] = ACTIONS(132),
    [anon_sym_mod3] = ACTIONS(132),
    [anon_sym_mod4] = ACTIONS(132),
    [anon_sym_mod5] = ACTIONS(132),
    [anon_sym_any] = ACTIONS(132),
    [sym_operator] = ACTIONS(132),
    [anon_sym_AT] = ACTIONS(132),
    [anon_sym_TILDE] = ACTIONS(132),
    [anon_sym_LBRACE] = ACTIONS(132),
    [anon_sym_COMMA] = ACTIONS(132),
    [anon_sym_RBRACE] = ACTIONS(132),
    [anon_sym_SEMI] = ACTIONS(132),
    [anon_sym_COLON] = ACTIONS(132),
    [sym_keysym] = ACTIONS(132),
    [sym_range] = ACTIONS(132),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [anon_sym_LF] = ACTIONS(134),
    [anon_sym_BSLASH_LF] = ACTIONS(136),
    [anon_sym_super] = ACTIONS(136),
    [anon_sym_hyper] = ACTIONS(136),
    [anon_sym_meta] = ACTIONS(136),
    [anon_sym_alt] = ACTIONS(136),
    [anon_sym_control] = ACTIONS(136),
    [anon_sym_ctrl] = ACTIONS(136),
    [anon_sym_shift] = ACTIONS(136),
    [anon_sym_mode_switch] = ACTIONS(136),
    [anon_sym_lock] = ACTIONS(136),
    [anon_sym_mod1] = ACTIONS(136),
    [anon_sym_mod2] = ACTIONS(136),
    [anon_sym_mod3] = ACTIONS(136),
    [anon_sym_mod4] = ACTIONS(136),
    [anon_sym_mod5] = ACTIONS(136),
    [anon_sym_any] = ACTIONS(136),
    [sym_operator] = ACTIONS(136),
    [anon_sym_AT] = ACTIONS(136),
    [anon_sym_TILDE] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(136),
    [sym_keysym] = ACTIONS(136),
    [sym_range] = ACTIONS(136),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [anon_sym_LF] = ACTIONS(138),
    [anon_sym_BSLASH_LF] = ACTIONS(140),
    [anon_sym_super] = ACTIONS(140),
    [anon_sym_hyper] = ACTIONS(140),
    [anon_sym_meta] = ACTIONS(140),
    [anon_sym_alt] = ACTIONS(140),
    [anon_sym_control] = ACTIONS(140),
    [anon_sym_ctrl] = ACTIONS(140),
    [anon_sym_shift] = ACTIONS(140),
    [anon_sym_mode_switch] = ACTIONS(140),
    [anon_sym_lock] = ACTIONS(140),
    [anon_sym_mod1] = ACTIONS(140),
    [anon_sym_mod2] = ACTIONS(140),
    [anon_sym_mod3] = ACTIONS(140),
    [anon_sym_mod4] = ACTIONS(140),
    [anon_sym_mod5] = ACTIONS(140),
    [anon_sym_any] = ACTIONS(140),
    [sym_operator] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(140),
    [anon_sym_TILDE] = ACTIONS(140),
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(140),
    [anon_sym_RBRACE] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(140),
    [sym_keysym] = ACTIONS(140),
    [sym_range] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [anon_sym_LF] = ACTIONS(142),
    [anon_sym_BSLASH_LF] = ACTIONS(144),
    [anon_sym_super] = ACTIONS(144),
    [anon_sym_hyper] = ACTIONS(144),
    [anon_sym_meta] = ACTIONS(144),
    [anon_sym_alt] = ACTIONS(144),
    [anon_sym_control] = ACTIONS(144),
    [anon_sym_ctrl] = ACTIONS(144),
    [anon_sym_shift] = ACTIONS(144),
    [anon_sym_mode_switch] = ACTIONS(144),
    [anon_sym_lock] = ACTIONS(144),
    [anon_sym_mod1] = ACTIONS(144),
    [anon_sym_mod2] = ACTIONS(144),
    [anon_sym_mod3] = ACTIONS(144),
    [anon_sym_mod4] = ACTIONS(144),
    [anon_sym_mod5] = ACTIONS(144),
    [anon_sym_any] = ACTIONS(144),
    [sym_operator] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(144),
    [anon_sym_TILDE] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_COMMA] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(144),
    [sym_keysym] = ACTIONS(144),
    [sym_range] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [anon_sym_BSLASH_LF] = ACTIONS(142),
    [anon_sym_super] = ACTIONS(144),
    [anon_sym_hyper] = ACTIONS(144),
    [anon_sym_meta] = ACTIONS(144),
    [anon_sym_alt] = ACTIONS(144),
    [anon_sym_control] = ACTIONS(144),
    [anon_sym_ctrl] = ACTIONS(144),
    [anon_sym_shift] = ACTIONS(144),
    [anon_sym_mode_switch] = ACTIONS(144),
    [anon_sym_lock] = ACTIONS(144),
    [anon_sym_mod1] = ACTIONS(144),
    [anon_sym_mod2] = ACTIONS(144),
    [anon_sym_mod3] = ACTIONS(144),
    [anon_sym_mod4] = ACTIONS(144),
    [anon_sym_mod5] = ACTIONS(144),
    [anon_sym_any] = ACTIONS(144),
    [sym_operator] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(142),
    [anon_sym_TILDE] = ACTIONS(142),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_COMMA] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(142),
    [anon_sym_SEMI] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(142),
    [sym_keysym] = ACTIONS(144),
    [sym_range] = ACTIONS(142),
    [sym_comment] = ACTIONS(19),
  },
  [16] = {
    [anon_sym_BSLASH_LF] = ACTIONS(134),
    [anon_sym_super] = ACTIONS(136),
    [anon_sym_hyper] = ACTIONS(136),
    [anon_sym_meta] = ACTIONS(136),
    [anon_sym_alt] = ACTIONS(136),
    [anon_sym_control] = ACTIONS(136),
    [anon_sym_ctrl] = ACTIONS(136),
    [anon_sym_shift] = ACTIONS(136),
    [anon_sym_mode_switch] = ACTIONS(136),
    [anon_sym_lock] = ACTIONS(136),
    [anon_sym_mod1] = ACTIONS(136),
    [anon_sym_mod2] = ACTIONS(136),
    [anon_sym_mod3] = ACTIONS(136),
    [anon_sym_mod4] = ACTIONS(136),
    [anon_sym_mod5] = ACTIONS(136),
    [anon_sym_any] = ACTIONS(136),
    [sym_operator] = ACTIONS(134),
    [anon_sym_AT] = ACTIONS(134),
    [anon_sym_TILDE] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(134),
    [anon_sym_RBRACE] = ACTIONS(134),
    [anon_sym_SEMI] = ACTIONS(134),
    [anon_sym_COLON] = ACTIONS(134),
    [sym_keysym] = ACTIONS(136),
    [sym_range] = ACTIONS(134),
    [sym_comment] = ACTIONS(19),
  },
  [17] = {
    [anon_sym_BSLASH_LF] = ACTIONS(138),
    [anon_sym_super] = ACTIONS(140),
    [anon_sym_hyper] = ACTIONS(140),
    [anon_sym_meta] = ACTIONS(140),
    [anon_sym_alt] = ACTIONS(140),
    [anon_sym_control] = ACTIONS(140),
    [anon_sym_ctrl] = ACTIONS(140),
    [anon_sym_shift] = ACTIONS(140),
    [anon_sym_mode_switch] = ACTIONS(140),
    [anon_sym_lock] = ACTIONS(140),
    [anon_sym_mod1] = ACTIONS(140),
    [anon_sym_mod2] = ACTIONS(140),
    [anon_sym_mod3] = ACTIONS(140),
    [anon_sym_mod4] = ACTIONS(140),
    [anon_sym_mod5] = ACTIONS(140),
    [anon_sym_any] = ACTIONS(140),
    [sym_operator] = ACTIONS(138),
    [anon_sym_AT] = ACTIONS(138),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_LBRACE] = ACTIONS(138),
    [anon_sym_COMMA] = ACTIONS(138),
    [anon_sym_RBRACE] = ACTIONS(138),
    [anon_sym_SEMI] = ACTIONS(138),
    [anon_sym_COLON] = ACTIONS(138),
    [sym_keysym] = ACTIONS(140),
    [sym_range] = ACTIONS(138),
    [sym_comment] = ACTIONS(19),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_super] = ACTIONS(148),
    [anon_sym_hyper] = ACTIONS(148),
    [anon_sym_meta] = ACTIONS(148),
    [anon_sym_alt] = ACTIONS(148),
    [anon_sym_control] = ACTIONS(148),
    [anon_sym_ctrl] = ACTIONS(148),
    [anon_sym_shift] = ACTIONS(148),
    [anon_sym_mode_switch] = ACTIONS(148),
    [anon_sym_lock] = ACTIONS(148),
    [anon_sym_mod1] = ACTIONS(148),
    [anon_sym_mod2] = ACTIONS(148),
    [anon_sym_mod3] = ACTIONS(148),
    [anon_sym_mod4] = ACTIONS(148),
    [anon_sym_mod5] = ACTIONS(148),
    [anon_sym_any] = ACTIONS(148),
    [sym_operator] = ACTIONS(146),
    [anon_sym_AT] = ACTIONS(146),
    [anon_sym_TILDE] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(146),
    [anon_sym_COMMA] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(146),
    [anon_sym_SEMI] = ACTIONS(146),
    [anon_sym_COLON] = ACTIONS(146),
    [sym_keysym] = ACTIONS(148),
    [sym_range] = ACTIONS(146),
    [sym_comment] = ACTIONS(19),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_super] = ACTIONS(152),
    [anon_sym_hyper] = ACTIONS(152),
    [anon_sym_meta] = ACTIONS(152),
    [anon_sym_alt] = ACTIONS(152),
    [anon_sym_control] = ACTIONS(152),
    [anon_sym_ctrl] = ACTIONS(152),
    [anon_sym_shift] = ACTIONS(152),
    [anon_sym_mode_switch] = ACTIONS(152),
    [anon_sym_lock] = ACTIONS(152),
    [anon_sym_mod1] = ACTIONS(152),
    [anon_sym_mod2] = ACTIONS(152),
    [anon_sym_mod3] = ACTIONS(152),
    [anon_sym_mod4] = ACTIONS(152),
    [anon_sym_mod5] = ACTIONS(152),
    [anon_sym_any] = ACTIONS(152),
    [sym_operator] = ACTIONS(150),
    [anon_sym_AT] = ACTIONS(150),
    [anon_sym_TILDE] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_COMMA] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(150),
    [anon_sym_COLON] = ACTIONS(150),
    [sym_keysym] = ACTIONS(152),
    [sym_range] = ACTIONS(150),
    [sym_comment] = ACTIONS(19),
  },
  [20] = {
    [anon_sym_BSLASH_LF] = ACTIONS(130),
    [anon_sym_super] = ACTIONS(132),
    [anon_sym_hyper] = ACTIONS(132),
    [anon_sym_meta] = ACTIONS(132),
    [anon_sym_alt] = ACTIONS(132),
    [anon_sym_control] = ACTIONS(132),
    [anon_sym_ctrl] = ACTIONS(132),
    [anon_sym_shift] = ACTIONS(132),
    [anon_sym_mode_switch] = ACTIONS(132),
    [anon_sym_lock] = ACTIONS(132),
    [anon_sym_mod1] = ACTIONS(132),
    [anon_sym_mod2] = ACTIONS(132),
    [anon_sym_mod3] = ACTIONS(132),
    [anon_sym_mod4] = ACTIONS(132),
    [anon_sym_mod5] = ACTIONS(132),
    [anon_sym_any] = ACTIONS(132),
    [sym_operator] = ACTIONS(130),
    [anon_sym_AT] = ACTIONS(130),
    [anon_sym_TILDE] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(130),
    [anon_sym_SEMI] = ACTIONS(130),
    [anon_sym_COLON] = ACTIONS(130),
    [sym_keysym] = ACTIONS(132),
    [sym_range] = ACTIONS(130),
    [sym_comment] = ACTIONS(19),
  },
  [21] = {
    [anon_sym_super] = ACTIONS(154),
    [anon_sym_hyper] = ACTIONS(154),
    [anon_sym_meta] = ACTIONS(154),
    [anon_sym_alt] = ACTIONS(154),
    [anon_sym_control] = ACTIONS(154),
    [anon_sym_ctrl] = ACTIONS(154),
    [anon_sym_shift] = ACTIONS(154),
    [anon_sym_mode_switch] = ACTIONS(154),
    [anon_sym_lock] = ACTIONS(154),
    [anon_sym_mod1] = ACTIONS(154),
    [anon_sym_mod2] = ACTIONS(154),
    [anon_sym_mod3] = ACTIONS(154),
    [anon_sym_mod4] = ACTIONS(154),
    [anon_sym_mod5] = ACTIONS(154),
    [anon_sym_any] = ACTIONS(154),
    [sym_operator] = ACTIONS(156),
    [anon_sym_AT] = ACTIONS(156),
    [anon_sym_TILDE] = ACTIONS(156),
    [anon_sym_LBRACE] = ACTIONS(156),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_RBRACE] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
    [anon_sym_COLON] = ACTIONS(156),
    [sym_keysym] = ACTIONS(154),
    [sym_range] = ACTIONS(156),
    [sym_comment] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_SEMI,
    ACTIONS(160), 1,
      aux_sym_command_token1,
    ACTIONS(162), 1,
      aux_sym_command_token2,
    STATE(23), 1,
      sym_command_sync_prefix,
    STATE(24), 1,
      aux_sym_command_repeat1,
    STATE(28), 1,
      sym_command,
  [22] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      aux_sym_command_token1,
    ACTIONS(162), 1,
      aux_sym_command_token2,
    STATE(24), 1,
      aux_sym_command_repeat1,
    STATE(30), 1,
      sym_command,
  [38] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym_command_token1,
    ACTIONS(166), 1,
      aux_sym_command_token2,
    STATE(25), 1,
      aux_sym_command_repeat1,
  [51] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      aux_sym_command_token1,
    ACTIONS(171), 1,
      aux_sym_command_token2,
    STATE(25), 1,
      aux_sym_command_repeat1,
  [64] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 2,
      aux_sym_command_token1,
      aux_sym_command_token2,
  [72] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LF,
  [79] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LF,
  [86] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LF,
  [93] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LF,
  [100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      aux_sym_binding_token1,
  [107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_LF,
  [114] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(22)] = 0,
  [SMALL_STATE(23)] = 22,
  [SMALL_STATE(24)] = 38,
  [SMALL_STATE(25)] = 51,
  [SMALL_STATE(26)] = 64,
  [SMALL_STATE(27)] = 72,
  [SMALL_STATE(28)] = 79,
  [SMALL_STATE(29)] = 86,
  [SMALL_STATE(30)] = 93,
  [SMALL_STATE(31)] = 100,
  [SMALL_STATE(32)] = 107,
  [SMALL_STATE(33)] = 114,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hotkey, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hotkey, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hotkey, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hotkey, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hotkey, 2, 0, 0), SHIFT_REPEAT(11),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hotkey, 2, 0, 0), SHIFT_REPEAT(6),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hotkey, 2, 0, 0), SHIFT_REPEAT(14),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hotkey, 2, 0, 0), SHIFT_REPEAT(13),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hotkey, 2, 0, 0), SHIFT_REPEAT(12),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hotkey_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hotkey_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hotkey_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hotkey_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hotkey_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hotkey_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hotkey, 2, 0, 0), SHIFT_REPEAT(20),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hotkey, 2, 0, 0), SHIFT_REPEAT(9),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hotkey, 2, 0, 0), SHIFT_REPEAT(15),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hotkey, 2, 0, 0), SHIFT_REPEAT(17),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hotkey, 2, 0, 0), SHIFT_REPEAT(16),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hotkey, 2, 0, 0), SHIFT_REPEAT(9),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimiter, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delimiter, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_punctuation, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_punctuation, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 5, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding, 5, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 6, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binding, 6, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hotkey_repeat1, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hotkey_repeat1, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_sync_prefix, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [187] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_sxhkdrc(void) {
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

#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_PERCENTdw = 2,
  anon_sym_1_DOT0 = 3,
  anon_sym_2_DOT0 = 4,
  anon_sym_output = 5,
  anon_sym_input = 6,
  anon_sym_text = 7,
  anon_sym_audio = 8,
  anon_sym_video = 9,
  anon_sym_application = 10,
  anon_sym_multipart = 11,
  anon_sym_image = 12,
  anon_sym_SLASH = 13,
  aux_sym_mime_type_token1 = 14,
  sym_separator = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_COMMA = 18,
  anon_sym_COLON = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  anon_sym_DASH = 22,
  aux_sym_int_token1 = 23,
  anon_sym_DOT = 24,
  aux_sym_float_token1 = 25,
  aux_sym_string_token1 = 26,
  aux_sym_string_token2 = 27,
  anon_sym_true = 28,
  anon_sym_false = 29,
  sym_null = 30,
  anon_sym_PIPE = 31,
  sym_date = 32,
  sym_datetime = 33,
  sym_localdatetime = 34,
  sym_localtime = 35,
  sym_period = 36,
  sym_time = 37,
  aux_sym_timezone_token1 = 38,
  aux_sym_timezone_token2 = 39,
  sym_comment = 40,
  sym_source_file = 41,
  sym_header = 42,
  sym_version = 43,
  sym__header_keyword = 44,
  sym_output = 45,
  sym_input = 46,
  sym_mime_type = 47,
  sym_script = 48,
  sym__expression = 49,
  sym__primitive = 50,
  sym_object = 51,
  sym__object_members = 52,
  sym__pair = 53,
  sym_key = 54,
  sym_value = 55,
  sym_array = 56,
  sym__array_members = 57,
  sym__singleton = 58,
  sym__number = 59,
  sym_int = 60,
  sym_float = 61,
  sym_string = 62,
  sym_bool = 63,
  sym__date_types = 64,
  sym_timezone = 65,
  aux_sym_script_repeat1 = 66,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_PERCENTdw] = "%dw",
  [anon_sym_1_DOT0] = "1.0",
  [anon_sym_2_DOT0] = "2.0",
  [anon_sym_output] = "output",
  [anon_sym_input] = "input",
  [anon_sym_text] = "text",
  [anon_sym_audio] = "audio",
  [anon_sym_video] = "video",
  [anon_sym_application] = "application",
  [anon_sym_multipart] = "multipart",
  [anon_sym_image] = "image",
  [anon_sym_SLASH] = "/",
  [aux_sym_mime_type_token1] = "mime_type_token1",
  [sym_separator] = "separator",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH] = "-",
  [aux_sym_int_token1] = "int_token1",
  [anon_sym_DOT] = ".",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null] = "null",
  [anon_sym_PIPE] = "|",
  [sym_date] = "date",
  [sym_datetime] = "datetime",
  [sym_localdatetime] = "localdatetime",
  [sym_localtime] = "localtime",
  [sym_period] = "period",
  [sym_time] = "time",
  [aux_sym_timezone_token1] = "timezone_token1",
  [aux_sym_timezone_token2] = "timezone_token2",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_header] = "header",
  [sym_version] = "version",
  [sym__header_keyword] = "_header_keyword",
  [sym_output] = "output",
  [sym_input] = "input",
  [sym_mime_type] = "mime_type",
  [sym_script] = "script",
  [sym__expression] = "_expression",
  [sym__primitive] = "_primitive",
  [sym_object] = "object",
  [sym__object_members] = "_object_members",
  [sym__pair] = "_pair",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym_array] = "array",
  [sym__array_members] = "_array_members",
  [sym__singleton] = "_singleton",
  [sym__number] = "_number",
  [sym_int] = "int",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_bool] = "bool",
  [sym__date_types] = "_date_types",
  [sym_timezone] = "timezone",
  [aux_sym_script_repeat1] = "script_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_PERCENTdw] = anon_sym_PERCENTdw,
  [anon_sym_1_DOT0] = anon_sym_1_DOT0,
  [anon_sym_2_DOT0] = anon_sym_2_DOT0,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_audio] = anon_sym_audio,
  [anon_sym_video] = anon_sym_video,
  [anon_sym_application] = anon_sym_application,
  [anon_sym_multipart] = anon_sym_multipart,
  [anon_sym_image] = anon_sym_image,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_mime_type_token1] = aux_sym_mime_type_token1,
  [sym_separator] = sym_separator,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_int_token1] = aux_sym_int_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null] = sym_null,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_date] = sym_date,
  [sym_datetime] = sym_datetime,
  [sym_localdatetime] = sym_localdatetime,
  [sym_localtime] = sym_localtime,
  [sym_period] = sym_period,
  [sym_time] = sym_time,
  [aux_sym_timezone_token1] = aux_sym_timezone_token1,
  [aux_sym_timezone_token2] = aux_sym_timezone_token2,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_header] = sym_header,
  [sym_version] = sym_version,
  [sym__header_keyword] = sym__header_keyword,
  [sym_output] = sym_output,
  [sym_input] = sym_input,
  [sym_mime_type] = sym_mime_type,
  [sym_script] = sym_script,
  [sym__expression] = sym__expression,
  [sym__primitive] = sym__primitive,
  [sym_object] = sym_object,
  [sym__object_members] = sym__object_members,
  [sym__pair] = sym__pair,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym_array] = sym_array,
  [sym__array_members] = sym__array_members,
  [sym__singleton] = sym__singleton,
  [sym__number] = sym__number,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_bool] = sym_bool,
  [sym__date_types] = sym__date_types,
  [sym_timezone] = sym_timezone,
  [aux_sym_script_repeat1] = aux_sym_script_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENTdw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1_DOT0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2_DOT0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_audio] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_video] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_application] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multipart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_image] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_mime_type_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_separator] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
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
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_datetime] = {
    .visible = true,
    .named = true,
  },
  [sym_localdatetime] = {
    .visible = true,
    .named = true,
  },
  [sym_localtime] = {
    .visible = true,
    .named = true,
  },
  [sym_period] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_timezone_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_timezone_token2] = {
    .visible = false,
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
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym__header_keyword] = {
    .visible = false,
    .named = true,
  },
  [sym_output] = {
    .visible = true,
    .named = true,
  },
  [sym_input] = {
    .visible = true,
    .named = true,
  },
  [sym_mime_type] = {
    .visible = true,
    .named = true,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__primitive] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym__object_members] = {
    .visible = false,
    .named = true,
  },
  [sym__pair] = {
    .visible = false,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym__array_members] = {
    .visible = false,
    .named = true,
  },
  [sym__singleton] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
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
  [sym__date_types] = {
    .visible = false,
    .named = true,
  },
  [sym_timezone] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_script_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '"', 1,
        '%', 28,
        '\'', 2,
        ',', 75,
        '-', 94,
        '.', 98,
        '/', 70,
        ':', 76,
        'P', 85,
        '[', 77,
        ']', 78,
        '{', 73,
        '|', 102,
        '}', 74,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(123);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '2') ADVANCE(12);
      if (lookahead == 'P') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(72);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(67);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(68);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(44);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(112);
      if (lookahead == 'M') ADVANCE(114);
      if (lookahead == 'Y') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(112);
      if (lookahead == 'M') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(117);
      if (lookahead == 'M') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'M') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 'S') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'w') ADVANCE(66);
      END_STATE();
    case 30:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '"', 1,
        '%', 28,
        '\'', 2,
        ',', 75,
        '-', 93,
        '.', 98,
        '/', 3,
        '[', 77,
        ']', 78,
        '{', 73,
        '|', 102,
        '}', 74,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PERCENTdw);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_1_DOT0);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_2_DOT0);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(123);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_mime_type_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(88);
      if (lookahead == 'M') ADVANCE(86);
      if (lookahead == 'Y') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(88);
      if (lookahead == 'M') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(90);
      if (lookahead == 'M') ADVANCE(91);
      if (lookahead == 'S') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(91);
      if (lookahead == 'S') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_datetime);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_localdatetime);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_localdatetime);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'Z') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(57);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_localdatetime);
      if (lookahead == 'Z') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(57);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_localtime);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_localtime);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 'Z') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_localtime);
      if (lookahead == 'Z') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_period);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_period);
      if (lookahead == 'T') ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_period);
      if (lookahead == 'T') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_period);
      if (lookahead == 'T') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_period);
      if (lookahead == 'T') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_period);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_period);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_period);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_timezone_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_timezone_token2);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(123);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'a', 1,
        'f', 2,
        'i', 3,
        'm', 4,
        'n', 5,
        'o', 6,
        't', 7,
        'v', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'm') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_audio);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_video);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_multipart);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_application);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 64},
  [2] = {.lex_state = 64},
  [3] = {.lex_state = 64},
  [4] = {.lex_state = 64},
  [5] = {.lex_state = 64},
  [6] = {.lex_state = 64},
  [7] = {.lex_state = 64},
  [8] = {.lex_state = 64},
  [9] = {.lex_state = 64},
  [10] = {.lex_state = 64},
  [11] = {.lex_state = 64},
  [12] = {.lex_state = 64},
  [13] = {.lex_state = 64},
  [14] = {.lex_state = 64},
  [15] = {.lex_state = 64},
  [16] = {.lex_state = 64},
  [17] = {.lex_state = 64},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 64},
  [20] = {.lex_state = 64},
  [21] = {.lex_state = 64},
  [22] = {.lex_state = 64},
  [23] = {.lex_state = 64},
  [24] = {.lex_state = 64},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 64},
  [27] = {.lex_state = 64},
  [28] = {.lex_state = 64},
  [29] = {.lex_state = 64},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 64},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 99},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 30},
  [54] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_PERCENTdw] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_audio] = ACTIONS(1),
    [anon_sym_video] = ACTIONS(1),
    [anon_sym_application] = ACTIONS(1),
    [anon_sym_multipart] = ACTIONS(1),
    [anon_sym_image] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_separator] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_int_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_localtime] = ACTIONS(1),
    [sym_period] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [aux_sym_timezone_token2] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(49),
    [sym_header] = STATE(36),
    [sym_script] = STATE(38),
    [sym__expression] = STATE(2),
    [sym__primitive] = STATE(2),
    [sym_object] = STATE(2),
    [sym_array] = STATE(2),
    [sym__number] = STATE(2),
    [sym_int] = STATE(2),
    [sym_float] = STATE(2),
    [sym_string] = STATE(2),
    [sym_bool] = STATE(2),
    [sym__date_types] = STATE(2),
    [aux_sym_script_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(3),
    [anon_sym_PERCENTdw] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(11),
    [aux_sym_int_token1] = ACTIONS(13),
    [aux_sym_string_token1] = ACTIONS(15),
    [aux_sym_string_token2] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_null] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      aux_sym_int_token1,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(15), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_identifier,
      sym_null,
    STATE(4), 11,
      sym__expression,
      sym__primitive,
      sym_object,
      sym_array,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
      sym__date_types,
      aux_sym_script_repeat1,
  [47] = 11,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      aux_sym_int_token1,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(21), 1,
      sym_comment,
    STATE(44), 1,
      sym_script,
    ACTIONS(3), 2,
      sym_identifier,
      sym_null,
    ACTIONS(15), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 11,
      sym__expression,
      sym__primitive,
      sym_object,
      sym_array,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
      sym__date_types,
      aux_sym_script_repeat1,
  [94] = 11,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(40), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_int_token1,
    ACTIONS(52), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      sym_comment,
    ACTIONS(31), 2,
      sym_identifier,
      sym_null,
    ACTIONS(46), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 11,
      sym__expression,
      sym__primitive,
      sym_object,
      sym_array,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
      sym__date_types,
      aux_sym_script_repeat1,
  [141] = 10,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      aux_sym_int_token1,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
    ACTIONS(62), 1,
      sym_null,
    STATE(37), 1,
      sym__array_members,
    ACTIONS(15), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(60), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(30), 9,
      sym__primitive,
      sym_object,
      sym_array,
      sym__singleton,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
  [182] = 10,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      aux_sym_int_token1,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(64), 1,
      sym_null,
    STATE(29), 1,
      sym_value,
    ACTIONS(15), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(60), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(28), 9,
      sym__primitive,
      sym_object,
      sym_array,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
      sym__date_types,
  [223] = 9,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      aux_sym_int_token1,
    ACTIONS(62), 1,
      sym_null,
    STATE(51), 1,
      sym__array_members,
    ACTIONS(15), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(60), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(30), 9,
      sym__primitive,
      sym_object,
      sym_array,
      sym__singleton,
      sym__number,
      sym_int,
      sym_float,
      sym_string,
      sym_bool,
  [261] = 3,
    ACTIONS(70), 1,
      anon_sym_DOT,
    ACTIONS(68), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(66), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [285] = 2,
    ACTIONS(74), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(72), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [306] = 2,
    ACTIONS(78), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(76), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [327] = 2,
    ACTIONS(82), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(80), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [348] = 2,
    ACTIONS(86), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(84), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [369] = 2,
    ACTIONS(90), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(88), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [390] = 2,
    ACTIONS(94), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(92), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [411] = 2,
    ACTIONS(98), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(96), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [432] = 2,
    ACTIONS(102), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(100), 12,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [453] = 2,
    ACTIONS(106), 4,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      sym_null,
    ACTIONS(104), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH,
      aux_sym_int_token1,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_PIPE,
      sym_comment,
  [473] = 4,
    ACTIONS(112), 1,
      aux_sym_timezone_token1,
    STATE(41), 1,
      sym_timezone,
    ACTIONS(108), 3,
      sym_date,
      sym_localdatetime,
      sym_localtime,
    ACTIONS(110), 3,
      sym_datetime,
      sym_period,
      sym_time,
  [490] = 2,
    STATE(47), 1,
      sym_mime_type,
    ACTIONS(114), 6,
      anon_sym_text,
      anon_sym_audio,
      anon_sym_video,
      anon_sym_application,
      anon_sym_multipart,
      anon_sym_image,
  [502] = 2,
    STATE(46), 1,
      sym_mime_type,
    ACTIONS(114), 6,
      anon_sym_text,
      anon_sym_audio,
      anon_sym_video,
      anon_sym_application,
      anon_sym_multipart,
      anon_sym_image,
  [514] = 6,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    ACTIONS(120), 1,
      sym_comment,
    STATE(27), 1,
      sym__pair,
    STATE(33), 1,
      sym_key,
    STATE(35), 1,
      sym__object_members,
  [533] = 6,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      sym__pair,
    STATE(33), 1,
      sym_key,
    STATE(50), 1,
      sym__object_members,
  [552] = 3,
    ACTIONS(124), 1,
      anon_sym_output,
    ACTIONS(126), 1,
      anon_sym_input,
    STATE(34), 3,
      sym__header_keyword,
      sym_output,
      sym_input,
  [564] = 5,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(120), 1,
      sym_comment,
    STATE(27), 1,
      sym__pair,
    STATE(33), 1,
      sym_key,
    STATE(48), 1,
      sym__object_members,
  [580] = 2,
    STATE(23), 1,
      sym_version,
    ACTIONS(128), 2,
      anon_sym_1_DOT0,
      anon_sym_2_DOT0,
  [588] = 2,
    ACTIONS(13), 1,
      aux_sym_int_token1,
    STATE(14), 2,
      sym_int,
      sym_float,
  [596] = 3,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      sym_comment,
  [606] = 1,
    ACTIONS(134), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_comment,
  [612] = 1,
    ACTIONS(136), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_comment,
  [618] = 2,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
  [625] = 1,
    ACTIONS(142), 2,
      anon_sym_output,
      anon_sym_input,
  [630] = 2,
    ACTIONS(144), 1,
      anon_sym_COLON,
    ACTIONS(146), 1,
      aux_sym_timezone_token2,
  [637] = 1,
    ACTIONS(148), 1,
      anon_sym_COLON,
  [641] = 1,
    ACTIONS(150), 1,
      sym_separator,
  [645] = 1,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
  [649] = 1,
    ACTIONS(154), 1,
      sym_separator,
  [653] = 1,
    ACTIONS(156), 1,
      anon_sym_RBRACK,
  [657] = 1,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
  [661] = 1,
    ACTIONS(160), 1,
      anon_sym_COLON,
  [665] = 1,
    ACTIONS(162), 1,
      aux_sym_float_token1,
  [669] = 1,
    ACTIONS(164), 1,
      anon_sym_PIPE,
  [673] = 1,
    ACTIONS(166), 1,
      aux_sym_timezone_token2,
  [677] = 1,
    ACTIONS(168), 1,
      anon_sym_PIPE,
  [681] = 1,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
  [685] = 1,
    ACTIONS(172), 1,
      anon_sym_SLASH,
  [689] = 1,
    ACTIONS(174), 1,
      sym_separator,
  [693] = 1,
    ACTIONS(176), 1,
      sym_separator,
  [697] = 1,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
  [701] = 1,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
  [705] = 1,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
  [709] = 1,
    ACTIONS(184), 1,
      anon_sym_RBRACK,
  [713] = 1,
    ACTIONS(186), 1,
      anon_sym_PIPE,
  [717] = 1,
    ACTIONS(188), 1,
      aux_sym_mime_type_token1,
  [721] = 1,
    ACTIONS(190), 1,
      sym_separator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 141,
  [SMALL_STATE(6)] = 182,
  [SMALL_STATE(7)] = 223,
  [SMALL_STATE(8)] = 261,
  [SMALL_STATE(9)] = 285,
  [SMALL_STATE(10)] = 306,
  [SMALL_STATE(11)] = 327,
  [SMALL_STATE(12)] = 348,
  [SMALL_STATE(13)] = 369,
  [SMALL_STATE(14)] = 390,
  [SMALL_STATE(15)] = 411,
  [SMALL_STATE(16)] = 432,
  [SMALL_STATE(17)] = 453,
  [SMALL_STATE(18)] = 473,
  [SMALL_STATE(19)] = 490,
  [SMALL_STATE(20)] = 502,
  [SMALL_STATE(21)] = 514,
  [SMALL_STATE(22)] = 533,
  [SMALL_STATE(23)] = 552,
  [SMALL_STATE(24)] = 564,
  [SMALL_STATE(25)] = 580,
  [SMALL_STATE(26)] = 588,
  [SMALL_STATE(27)] = 596,
  [SMALL_STATE(28)] = 606,
  [SMALL_STATE(29)] = 612,
  [SMALL_STATE(30)] = 618,
  [SMALL_STATE(31)] = 625,
  [SMALL_STATE(32)] = 630,
  [SMALL_STATE(33)] = 637,
  [SMALL_STATE(34)] = 641,
  [SMALL_STATE(35)] = 645,
  [SMALL_STATE(36)] = 649,
  [SMALL_STATE(37)] = 653,
  [SMALL_STATE(38)] = 657,
  [SMALL_STATE(39)] = 661,
  [SMALL_STATE(40)] = 665,
  [SMALL_STATE(41)] = 669,
  [SMALL_STATE(42)] = 673,
  [SMALL_STATE(43)] = 677,
  [SMALL_STATE(44)] = 681,
  [SMALL_STATE(45)] = 685,
  [SMALL_STATE(46)] = 689,
  [SMALL_STATE(47)] = 693,
  [SMALL_STATE(48)] = 697,
  [SMALL_STATE(49)] = 701,
  [SMALL_STATE(50)] = 705,
  [SMALL_STATE(51)] = 709,
  [SMALL_STATE(52)] = 713,
  [SMALL_STATE(53)] = 717,
  [SMALL_STATE(54)] = 721,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date_types, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date_types, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_members, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pair, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_members, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_members, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_members, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_members, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mime_type, 3, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_dataweave(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

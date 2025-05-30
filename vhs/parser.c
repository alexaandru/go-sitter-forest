#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_Hide = 1,
  anon_sym_Show = 2,
  anon_sym_Copy = 3,
  anon_sym_Paste = 4,
  sym_control = 5,
  sym_alt = 6,
  sym_shift = 7,
  anon_sym_Output = 8,
  anon_sym_Set = 9,
  anon_sym_Env = 10,
  anon_sym_Sleep = 11,
  anon_sym_Type = 12,
  anon_sym_Backspace = 13,
  anon_sym_Down = 14,
  anon_sym_Enter = 15,
  anon_sym_Escape = 16,
  anon_sym_Left = 17,
  anon_sym_Right = 18,
  anon_sym_Space = 19,
  anon_sym_Tab = 20,
  anon_sym_Up = 21,
  anon_sym_PageUp = 22,
  anon_sym_PageDown = 23,
  anon_sym_Wait = 24,
  anon_sym_Require = 25,
  anon_sym_Source = 26,
  anon_sym_Shell = 27,
  anon_sym_FontFamily = 28,
  anon_sym_FontSize = 29,
  anon_sym_Framerate = 30,
  anon_sym_PlaybackSpeed = 31,
  anon_sym_Height = 32,
  anon_sym_LetterSpacing = 33,
  anon_sym_TypingSpeed = 34,
  anon_sym_LineHeight = 35,
  anon_sym_Padding = 36,
  anon_sym_Theme = 37,
  anon_sym_LoopOffset = 38,
  anon_sym_PERCENT = 39,
  anon_sym_Width = 40,
  anon_sym_BorderRadius = 41,
  anon_sym_Margin = 42,
  anon_sym_MarginFill = 43,
  anon_sym_WindowBar = 44,
  anon_sym_WindowBarSize = 45,
  anon_sym_CursorBlink = 46,
  aux_sym_string_token1 = 47,
  aux_sym_string_token2 = 48,
  aux_sym_string_token3 = 49,
  aux_sym_string_token4 = 50,
  sym_regex = 51,
  sym_comment = 52,
  sym_float = 53,
  sym_integer = 54,
  sym_json = 55,
  sym_path = 56,
  anon_sym_AT = 57,
  anon_sym_PLUS = 58,
  anon_sym_Screen = 59,
  anon_sym_Line = 60,
  sym_time = 61,
  sym_boolean = 62,
  sym_program = 63,
  sym_command = 64,
  sym_output = 65,
  sym_set = 66,
  sym_env = 67,
  sym_sleep = 68,
  sym_type = 69,
  sym_backspace = 70,
  sym_down = 71,
  sym_enter = 72,
  sym_escape = 73,
  sym_left = 74,
  sym_right = 75,
  sym_space = 76,
  sym_tab = 77,
  sym_up = 78,
  sym_pageup = 79,
  sym_pagedown = 80,
  sym_wait = 81,
  sym_require = 82,
  sym_source = 83,
  sym_setting = 84,
  sym_string = 85,
  sym_duration = 86,
  sym_waitOn = 87,
  aux_sym_program_repeat1 = 88,
  aux_sym_type_repeat1 = 89,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_Hide] = "Hide",
  [anon_sym_Show] = "Show",
  [anon_sym_Copy] = "Copy",
  [anon_sym_Paste] = "Paste",
  [sym_control] = "control",
  [sym_alt] = "alt",
  [sym_shift] = "shift",
  [anon_sym_Output] = "Output",
  [anon_sym_Set] = "Set",
  [anon_sym_Env] = "Env",
  [anon_sym_Sleep] = "Sleep",
  [anon_sym_Type] = "Type",
  [anon_sym_Backspace] = "Backspace",
  [anon_sym_Down] = "Down",
  [anon_sym_Enter] = "Enter",
  [anon_sym_Escape] = "Escape",
  [anon_sym_Left] = "Left",
  [anon_sym_Right] = "Right",
  [anon_sym_Space] = "Space",
  [anon_sym_Tab] = "Tab",
  [anon_sym_Up] = "Up",
  [anon_sym_PageUp] = "PageUp",
  [anon_sym_PageDown] = "PageDown",
  [anon_sym_Wait] = "Wait",
  [anon_sym_Require] = "Require",
  [anon_sym_Source] = "Source",
  [anon_sym_Shell] = "Shell",
  [anon_sym_FontFamily] = "FontFamily",
  [anon_sym_FontSize] = "FontSize",
  [anon_sym_Framerate] = "Framerate",
  [anon_sym_PlaybackSpeed] = "PlaybackSpeed",
  [anon_sym_Height] = "Height",
  [anon_sym_LetterSpacing] = "LetterSpacing",
  [anon_sym_TypingSpeed] = "TypingSpeed",
  [anon_sym_LineHeight] = "LineHeight",
  [anon_sym_Padding] = "Padding",
  [anon_sym_Theme] = "Theme",
  [anon_sym_LoopOffset] = "LoopOffset",
  [anon_sym_PERCENT] = "%",
  [anon_sym_Width] = "Width",
  [anon_sym_BorderRadius] = "BorderRadius",
  [anon_sym_Margin] = "Margin",
  [anon_sym_MarginFill] = "MarginFill",
  [anon_sym_WindowBar] = "WindowBar",
  [anon_sym_WindowBarSize] = "WindowBarSize",
  [anon_sym_CursorBlink] = "CursorBlink",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym_string_token3] = "string_token3",
  [aux_sym_string_token4] = "string_token4",
  [sym_regex] = "regex",
  [sym_comment] = "comment",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [sym_json] = "json",
  [sym_path] = "path",
  [anon_sym_AT] = "@",
  [anon_sym_PLUS] = "+",
  [anon_sym_Screen] = "Screen",
  [anon_sym_Line] = "Line",
  [sym_time] = "time",
  [sym_boolean] = "boolean",
  [sym_program] = "program",
  [sym_command] = "command",
  [sym_output] = "output",
  [sym_set] = "set",
  [sym_env] = "env",
  [sym_sleep] = "sleep",
  [sym_type] = "type",
  [sym_backspace] = "backspace",
  [sym_down] = "down",
  [sym_enter] = "enter",
  [sym_escape] = "escape",
  [sym_left] = "left",
  [sym_right] = "right",
  [sym_space] = "space",
  [sym_tab] = "tab",
  [sym_up] = "up",
  [sym_pageup] = "pageup",
  [sym_pagedown] = "pagedown",
  [sym_wait] = "wait",
  [sym_require] = "require",
  [sym_source] = "source",
  [sym_setting] = "setting",
  [sym_string] = "string",
  [sym_duration] = "duration",
  [sym_waitOn] = "waitOn",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_Hide] = anon_sym_Hide,
  [anon_sym_Show] = anon_sym_Show,
  [anon_sym_Copy] = anon_sym_Copy,
  [anon_sym_Paste] = anon_sym_Paste,
  [sym_control] = sym_control,
  [sym_alt] = sym_alt,
  [sym_shift] = sym_shift,
  [anon_sym_Output] = anon_sym_Output,
  [anon_sym_Set] = anon_sym_Set,
  [anon_sym_Env] = anon_sym_Env,
  [anon_sym_Sleep] = anon_sym_Sleep,
  [anon_sym_Type] = anon_sym_Type,
  [anon_sym_Backspace] = anon_sym_Backspace,
  [anon_sym_Down] = anon_sym_Down,
  [anon_sym_Enter] = anon_sym_Enter,
  [anon_sym_Escape] = anon_sym_Escape,
  [anon_sym_Left] = anon_sym_Left,
  [anon_sym_Right] = anon_sym_Right,
  [anon_sym_Space] = anon_sym_Space,
  [anon_sym_Tab] = anon_sym_Tab,
  [anon_sym_Up] = anon_sym_Up,
  [anon_sym_PageUp] = anon_sym_PageUp,
  [anon_sym_PageDown] = anon_sym_PageDown,
  [anon_sym_Wait] = anon_sym_Wait,
  [anon_sym_Require] = anon_sym_Require,
  [anon_sym_Source] = anon_sym_Source,
  [anon_sym_Shell] = anon_sym_Shell,
  [anon_sym_FontFamily] = anon_sym_FontFamily,
  [anon_sym_FontSize] = anon_sym_FontSize,
  [anon_sym_Framerate] = anon_sym_Framerate,
  [anon_sym_PlaybackSpeed] = anon_sym_PlaybackSpeed,
  [anon_sym_Height] = anon_sym_Height,
  [anon_sym_LetterSpacing] = anon_sym_LetterSpacing,
  [anon_sym_TypingSpeed] = anon_sym_TypingSpeed,
  [anon_sym_LineHeight] = anon_sym_LineHeight,
  [anon_sym_Padding] = anon_sym_Padding,
  [anon_sym_Theme] = anon_sym_Theme,
  [anon_sym_LoopOffset] = anon_sym_LoopOffset,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_Width] = anon_sym_Width,
  [anon_sym_BorderRadius] = anon_sym_BorderRadius,
  [anon_sym_Margin] = anon_sym_Margin,
  [anon_sym_MarginFill] = anon_sym_MarginFill,
  [anon_sym_WindowBar] = anon_sym_WindowBar,
  [anon_sym_WindowBarSize] = anon_sym_WindowBarSize,
  [anon_sym_CursorBlink] = anon_sym_CursorBlink,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [aux_sym_string_token4] = aux_sym_string_token4,
  [sym_regex] = sym_regex,
  [sym_comment] = sym_comment,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [sym_json] = sym_json,
  [sym_path] = sym_path,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_Screen] = anon_sym_Screen,
  [anon_sym_Line] = anon_sym_Line,
  [sym_time] = sym_time,
  [sym_boolean] = sym_boolean,
  [sym_program] = sym_program,
  [sym_command] = sym_command,
  [sym_output] = sym_output,
  [sym_set] = sym_set,
  [sym_env] = sym_env,
  [sym_sleep] = sym_sleep,
  [sym_type] = sym_type,
  [sym_backspace] = sym_backspace,
  [sym_down] = sym_down,
  [sym_enter] = sym_enter,
  [sym_escape] = sym_escape,
  [sym_left] = sym_left,
  [sym_right] = sym_right,
  [sym_space] = sym_space,
  [sym_tab] = sym_tab,
  [sym_up] = sym_up,
  [sym_pageup] = sym_pageup,
  [sym_pagedown] = sym_pagedown,
  [sym_wait] = sym_wait,
  [sym_require] = sym_require,
  [sym_source] = sym_source,
  [sym_setting] = sym_setting,
  [sym_string] = sym_string,
  [sym_duration] = sym_duration,
  [sym_waitOn] = sym_waitOn,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Hide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Show] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Copy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Paste] = {
    .visible = true,
    .named = false,
  },
  [sym_control] = {
    .visible = true,
    .named = true,
  },
  [sym_alt] = {
    .visible = true,
    .named = true,
  },
  [sym_shift] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Env] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Sleep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Backspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Down] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Enter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Escape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Space] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Tab] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PageUp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PageDown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Wait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Require] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Shell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FontFamily] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FontSize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Framerate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlaybackSpeed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Height] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LetterSpacing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TypingSpeed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LineHeight] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Padding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Theme] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LoopOffset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Width] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BorderRadius] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Margin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MarginFill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WindowBar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WindowBarSize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CursorBlink] = {
    .visible = true,
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
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
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
  [sym_json] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Screen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Line] = {
    .visible = true,
    .named = false,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_output] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_env] = {
    .visible = true,
    .named = true,
  },
  [sym_sleep] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_backspace] = {
    .visible = true,
    .named = true,
  },
  [sym_down] = {
    .visible = true,
    .named = true,
  },
  [sym_enter] = {
    .visible = true,
    .named = true,
  },
  [sym_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_left] = {
    .visible = true,
    .named = true,
  },
  [sym_right] = {
    .visible = true,
    .named = true,
  },
  [sym_space] = {
    .visible = true,
    .named = true,
  },
  [sym_tab] = {
    .visible = true,
    .named = true,
  },
  [sym_up] = {
    .visible = true,
    .named = true,
  },
  [sym_pageup] = {
    .visible = true,
    .named = true,
  },
  [sym_pagedown] = {
    .visible = true,
    .named = true,
  },
  [sym_wait] = {
    .visible = true,
    .named = true,
  },
  [sym_require] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_waitOn] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
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
  [33] = 7,
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
  [73] = 31,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 7,
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
  [93] = 87,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(258);
      ADVANCE_MAP(
        '"', 2,
        '#', 424,
        '%', 328,
        '\'', 3,
        '+', 433,
        '.', 253,
        '/', 10,
        '@', 432,
        'A', 145,
        'B', 29,
        'C', 172,
        'D', 170,
        'E', 157,
        'F', 171,
        'H', 68,
        'L', 69,
        'M', 39,
        'O', 236,
        'P', 30,
        'R', 71,
        'S', 54,
        'T', 31,
        'U', 177,
        'W', 34,
        '`', 28,
        'f', 33,
        't', 201,
        '{', 251,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '@') ADVANCE(432);
      if (lookahead == '`') ADVANCE(28);
      if (lookahead == '{') ADVANCE(251);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(336);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(337);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == '+') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == '+') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == '+') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(269);
      if (lookahead == 'E') ADVANCE(270);
      if (lookahead == 'S') ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '/' || ':' < lookahead)) ADVANCE(267);
      END_STATE();
    case 12:
      if (lookahead == 'B') ADVANCE(153);
      END_STATE();
    case 13:
      if (lookahead == 'B') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(176);
      if (lookahead == 'U') ADVANCE(181);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(274);
      if (lookahead == 'S') ADVANCE(273);
      if (lookahead == 'T') ADVANCE(272);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '/' || ':' < lookahead)) ADVANCE(271);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(274);
      if (lookahead == 'T') ADVANCE(272);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '/' || ':' < lookahead)) ADVANCE(271);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(270);
      if (lookahead == 'S') ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '/' || ':' < lookahead)) ADVANCE(267);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(270);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '/' || ':' < lookahead)) ADVANCE(267);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(277);
      if (lookahead == 'T') ADVANCE(276);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '/' || ':' < lookahead)) ADVANCE(275);
      END_STATE();
    case 20:
      if (lookahead == 'F') ADVANCE(36);
      if (lookahead == 'S') ADVANCE(126);
      END_STATE();
    case 21:
      if (lookahead == 'H') ADVANCE(108);
      END_STATE();
    case 22:
      if (lookahead == 'L') ADVANCE(137);
      if (lookahead == 'S') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 'S') ADVANCE(183);
      END_STATE();
    case 26:
      if (lookahead == 'S') ADVANCE(187);
      END_STATE();
    case 27:
      if (lookahead == 'S') ADVANCE(188);
      END_STATE();
    case 28:
      if (lookahead == '`') ADVANCE(338);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'h') ADVANCE(107);
      if (lookahead == 'y') ADVANCE(182);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(302);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(271);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(275);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == 'h') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(323);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(320);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'g') ADVANCE(74);
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(223);
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == 'h') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(225);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(212);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(228);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(229);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(325);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(322);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(329);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(218);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(219);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(221);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 142:
      if (lookahead == 'k') ADVANCE(335);
      END_STATE();
    case 143:
      if (lookahead == 'k') ADVANCE(210);
      END_STATE();
    case 144:
      if (lookahead == 'k') ADVANCE(27);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(332);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(224);
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 177:
      if (lookahead == 'p') ADVANCE(304);
      END_STATE();
    case 178:
      if (lookahead == 'p') ADVANCE(246);
      END_STATE();
    case 179:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(284);
      END_STATE();
    case 181:
      if (lookahead == 'p') ADVANCE(306);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 184:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 185:
      if (lookahead == 'p') ADVANCE(241);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 189:
      if (lookahead == 'q') ADVANCE(237);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(437);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'v') ADVANCE(282);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 240:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 241:
      if (lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 242:
      if (lookahead == 'w') ADVANCE(261);
      END_STATE();
    case 243:
      if (lookahead == 'w') ADVANCE(13);
      END_STATE();
    case 244:
      if (lookahead == 'w') ADVANCE(158);
      END_STATE();
    case 245:
      if (lookahead == 'w') ADVANCE(161);
      END_STATE();
    case 246:
      if (lookahead == 'y') ADVANCE(263);
      END_STATE();
    case 247:
      if (lookahead == 'y') ADVANCE(317);
      END_STATE();
    case 248:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 249:
      if (lookahead == 'z') ADVANCE(83);
      END_STATE();
    case 250:
      if (lookahead == 'z') ADVANCE(86);
      END_STATE();
    case 251:
      if (lookahead == '}') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 252:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(252);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(439);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 256:
      if (eof) ADVANCE(258);
      ADVANCE_MAP(
        '"', 2,
        '#', 424,
        '\'', 3,
        '.', 254,
        'A', 382,
        'B', 343,
        'C', 388,
        'D', 387,
        'E', 384,
        'H', 377,
        'L', 357,
        'O', 414,
        'P', 344,
        'R', 358,
        'S', 368,
        'T', 345,
        'U', 390,
        'W', 346,
        '`', 28,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 257:
      if (eof) ADVANCE(258);
      ADVANCE_MAP(
        '#', 424,
        '@', 432,
        'A', 145,
        'B', 29,
        'C', 172,
        'D', 170,
        'E', 157,
        'F', 171,
        'H', 68,
        'L', 70,
        'M', 39,
        'O', 236,
        'P', 30,
        'R', 71,
        'S', 89,
        'T', 31,
        'U', 177,
        'W', 34,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_Hide);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_Hide);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_Show);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_Show);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_Copy);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_Copy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_Paste);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_Paste);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_control);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_control);
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_control);
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_control);
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_alt);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_alt);
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_alt);
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_alt);
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_shift);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_shift);
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_shift);
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_Output);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_Output);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_Set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_Env);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_Env);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_Sleep);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_Sleep);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_Type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_Backspace);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_Backspace);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_Down);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_Down);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_Enter);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_Enter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_Escape);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_Escape);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_Left);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_Left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_Right);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_Right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_Space);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_Space);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_Tab);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_Tab);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_Up);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_Up);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_PageUp);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_PageUp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_PageDown);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_PageDown);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_Wait);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_Wait);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_Require);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_Require);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_Source);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_Source);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_Shell);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_FontFamily);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_FontSize);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_Framerate);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_PlaybackSpeed);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_Height);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_LetterSpacing);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_TypingSpeed);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_LineHeight);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_Padding);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_Theme);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_LoopOffset);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_Width);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_BorderRadius);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_Margin);
      if (lookahead == 'F') ADVANCE(136);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_MarginFill);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_WindowBar);
      if (lookahead == 'S') ADVANCE(135);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_WindowBarSize);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_CursorBlink);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == '+') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == '+') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == '+') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'D') ADVANCE(389);
      if (lookahead == 'U') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'a') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'a') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'a') ADVANCE(350);
      if (lookahead == 'y') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'a') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'a') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'a') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'a') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'b') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'c') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'c') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'c') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'c') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'c') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'd') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == 'h') ADVANCE(378);
      if (lookahead == 'l') ADVANCE(371);
      if (lookahead == 'o') ADVANCE(415);
      if (lookahead == 'p') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'e') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'f') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'f') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'g') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'g') ADVANCE(360);
      if (lookahead == 's') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'h') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'i') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'i') ADVANCE(373);
      if (lookahead == 'o') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'i') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'i') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'k') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'l') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'l') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == 's') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'n') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'n') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'o') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'o') ADVANCE(391);
      if (lookahead == 't') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'o') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'p') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'q') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'r') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'r') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'r') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'r') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 's') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == 'v') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 't') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'u') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'u') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'u') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'u') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'w') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'w') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'w') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == 'y') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_regex);
      if (lookahead == '/') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(207);
      if (lookahead == 's') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'm') ADVANCE(207);
      if (lookahead == 's') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_json);
      if (lookahead == '}') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_Screen);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_Line);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_Line);
      if (lookahead == 'H') ADVANCE(108);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == 'm') ADVANCE(207);
      if (lookahead == 's') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'm') ADVANCE(207);
      if (lookahead == 's') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 256},
  [5] = {.lex_state = 256},
  [6] = {.lex_state = 256},
  [7] = {.lex_state = 256},
  [8] = {.lex_state = 257},
  [9] = {.lex_state = 257},
  [10] = {.lex_state = 257},
  [11] = {.lex_state = 257},
  [12] = {.lex_state = 257},
  [13] = {.lex_state = 257},
  [14] = {.lex_state = 257},
  [15] = {.lex_state = 257},
  [16] = {.lex_state = 257},
  [17] = {.lex_state = 257},
  [18] = {.lex_state = 257},
  [19] = {.lex_state = 257},
  [20] = {.lex_state = 257},
  [21] = {.lex_state = 257},
  [22] = {.lex_state = 257},
  [23] = {.lex_state = 257},
  [24] = {.lex_state = 257},
  [25] = {.lex_state = 257},
  [26] = {.lex_state = 257},
  [27] = {.lex_state = 257},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 257},
  [30] = {.lex_state = 257},
  [31] = {.lex_state = 257},
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
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 257},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 22},
  [82] = {.lex_state = 256},
  [83] = {.lex_state = 257},
  [84] = {.lex_state = 252},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 256},
  [87] = {.lex_state = 256},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 256},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Hide] = ACTIONS(1),
    [anon_sym_Show] = ACTIONS(1),
    [anon_sym_Copy] = ACTIONS(1),
    [anon_sym_Paste] = ACTIONS(1),
    [sym_control] = ACTIONS(1),
    [sym_alt] = ACTIONS(1),
    [sym_shift] = ACTIONS(1),
    [anon_sym_Output] = ACTIONS(1),
    [anon_sym_Set] = ACTIONS(1),
    [anon_sym_Env] = ACTIONS(1),
    [anon_sym_Sleep] = ACTIONS(1),
    [anon_sym_Type] = ACTIONS(1),
    [anon_sym_Backspace] = ACTIONS(1),
    [anon_sym_Down] = ACTIONS(1),
    [anon_sym_Enter] = ACTIONS(1),
    [anon_sym_Escape] = ACTIONS(1),
    [anon_sym_Left] = ACTIONS(1),
    [anon_sym_Right] = ACTIONS(1),
    [anon_sym_Space] = ACTIONS(1),
    [anon_sym_Tab] = ACTIONS(1),
    [anon_sym_Up] = ACTIONS(1),
    [anon_sym_PageUp] = ACTIONS(1),
    [anon_sym_PageDown] = ACTIONS(1),
    [anon_sym_Wait] = ACTIONS(1),
    [anon_sym_Require] = ACTIONS(1),
    [anon_sym_Source] = ACTIONS(1),
    [anon_sym_Shell] = ACTIONS(1),
    [anon_sym_FontFamily] = ACTIONS(1),
    [anon_sym_FontSize] = ACTIONS(1),
    [anon_sym_Framerate] = ACTIONS(1),
    [anon_sym_PlaybackSpeed] = ACTIONS(1),
    [anon_sym_Height] = ACTIONS(1),
    [anon_sym_LetterSpacing] = ACTIONS(1),
    [anon_sym_TypingSpeed] = ACTIONS(1),
    [anon_sym_LineHeight] = ACTIONS(1),
    [anon_sym_Padding] = ACTIONS(1),
    [anon_sym_Theme] = ACTIONS(1),
    [anon_sym_LoopOffset] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_Width] = ACTIONS(1),
    [anon_sym_BorderRadius] = ACTIONS(1),
    [anon_sym_Margin] = ACTIONS(1),
    [anon_sym_MarginFill] = ACTIONS(1),
    [anon_sym_WindowBar] = ACTIONS(1),
    [anon_sym_WindowBarSize] = ACTIONS(1),
    [anon_sym_CursorBlink] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [aux_sym_string_token3] = ACTIONS(1),
    [sym_regex] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_json] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_Screen] = ACTIONS(1),
    [anon_sym_Line] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(85),
    [sym_command] = STATE(2),
    [sym_output] = STATE(35),
    [sym_set] = STATE(35),
    [sym_env] = STATE(35),
    [sym_sleep] = STATE(35),
    [sym_type] = STATE(35),
    [sym_backspace] = STATE(35),
    [sym_down] = STATE(35),
    [sym_enter] = STATE(35),
    [sym_escape] = STATE(35),
    [sym_left] = STATE(35),
    [sym_right] = STATE(35),
    [sym_space] = STATE(35),
    [sym_tab] = STATE(35),
    [sym_up] = STATE(35),
    [sym_pageup] = STATE(35),
    [sym_pagedown] = STATE(35),
    [sym_wait] = STATE(35),
    [sym_require] = STATE(35),
    [sym_source] = STATE(35),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_Hide] = ACTIONS(5),
    [anon_sym_Show] = ACTIONS(5),
    [anon_sym_Copy] = ACTIONS(5),
    [anon_sym_Paste] = ACTIONS(5),
    [sym_control] = ACTIONS(5),
    [sym_alt] = ACTIONS(5),
    [sym_shift] = ACTIONS(5),
    [anon_sym_Output] = ACTIONS(7),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_Env] = ACTIONS(11),
    [anon_sym_Sleep] = ACTIONS(13),
    [anon_sym_Type] = ACTIONS(15),
    [anon_sym_Backspace] = ACTIONS(17),
    [anon_sym_Down] = ACTIONS(19),
    [anon_sym_Enter] = ACTIONS(21),
    [anon_sym_Escape] = ACTIONS(23),
    [anon_sym_Left] = ACTIONS(25),
    [anon_sym_Right] = ACTIONS(27),
    [anon_sym_Space] = ACTIONS(29),
    [anon_sym_Tab] = ACTIONS(31),
    [anon_sym_Up] = ACTIONS(33),
    [anon_sym_PageUp] = ACTIONS(35),
    [anon_sym_PageDown] = ACTIONS(37),
    [anon_sym_Wait] = ACTIONS(39),
    [anon_sym_Require] = ACTIONS(41),
    [anon_sym_Source] = ACTIONS(43),
    [sym_comment] = ACTIONS(45),
  },
  [2] = {
    [sym_command] = STATE(3),
    [sym_output] = STATE(35),
    [sym_set] = STATE(35),
    [sym_env] = STATE(35),
    [sym_sleep] = STATE(35),
    [sym_type] = STATE(35),
    [sym_backspace] = STATE(35),
    [sym_down] = STATE(35),
    [sym_enter] = STATE(35),
    [sym_escape] = STATE(35),
    [sym_left] = STATE(35),
    [sym_right] = STATE(35),
    [sym_space] = STATE(35),
    [sym_tab] = STATE(35),
    [sym_up] = STATE(35),
    [sym_pageup] = STATE(35),
    [sym_pagedown] = STATE(35),
    [sym_wait] = STATE(35),
    [sym_require] = STATE(35),
    [sym_source] = STATE(35),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_Hide] = ACTIONS(5),
    [anon_sym_Show] = ACTIONS(5),
    [anon_sym_Copy] = ACTIONS(5),
    [anon_sym_Paste] = ACTIONS(5),
    [sym_control] = ACTIONS(5),
    [sym_alt] = ACTIONS(5),
    [sym_shift] = ACTIONS(5),
    [anon_sym_Output] = ACTIONS(7),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_Env] = ACTIONS(11),
    [anon_sym_Sleep] = ACTIONS(13),
    [anon_sym_Type] = ACTIONS(15),
    [anon_sym_Backspace] = ACTIONS(17),
    [anon_sym_Down] = ACTIONS(19),
    [anon_sym_Enter] = ACTIONS(21),
    [anon_sym_Escape] = ACTIONS(23),
    [anon_sym_Left] = ACTIONS(25),
    [anon_sym_Right] = ACTIONS(27),
    [anon_sym_Space] = ACTIONS(29),
    [anon_sym_Tab] = ACTIONS(31),
    [anon_sym_Up] = ACTIONS(33),
    [anon_sym_PageUp] = ACTIONS(35),
    [anon_sym_PageDown] = ACTIONS(37),
    [anon_sym_Wait] = ACTIONS(39),
    [anon_sym_Require] = ACTIONS(41),
    [anon_sym_Source] = ACTIONS(43),
    [sym_comment] = ACTIONS(49),
  },
  [3] = {
    [sym_command] = STATE(3),
    [sym_output] = STATE(35),
    [sym_set] = STATE(35),
    [sym_env] = STATE(35),
    [sym_sleep] = STATE(35),
    [sym_type] = STATE(35),
    [sym_backspace] = STATE(35),
    [sym_down] = STATE(35),
    [sym_enter] = STATE(35),
    [sym_escape] = STATE(35),
    [sym_left] = STATE(35),
    [sym_right] = STATE(35),
    [sym_space] = STATE(35),
    [sym_tab] = STATE(35),
    [sym_up] = STATE(35),
    [sym_pageup] = STATE(35),
    [sym_pagedown] = STATE(35),
    [sym_wait] = STATE(35),
    [sym_require] = STATE(35),
    [sym_source] = STATE(35),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_Hide] = ACTIONS(53),
    [anon_sym_Show] = ACTIONS(53),
    [anon_sym_Copy] = ACTIONS(53),
    [anon_sym_Paste] = ACTIONS(53),
    [sym_control] = ACTIONS(53),
    [sym_alt] = ACTIONS(53),
    [sym_shift] = ACTIONS(53),
    [anon_sym_Output] = ACTIONS(56),
    [anon_sym_Set] = ACTIONS(59),
    [anon_sym_Env] = ACTIONS(62),
    [anon_sym_Sleep] = ACTIONS(65),
    [anon_sym_Type] = ACTIONS(68),
    [anon_sym_Backspace] = ACTIONS(71),
    [anon_sym_Down] = ACTIONS(74),
    [anon_sym_Enter] = ACTIONS(77),
    [anon_sym_Escape] = ACTIONS(80),
    [anon_sym_Left] = ACTIONS(83),
    [anon_sym_Right] = ACTIONS(86),
    [anon_sym_Space] = ACTIONS(89),
    [anon_sym_Tab] = ACTIONS(92),
    [anon_sym_Up] = ACTIONS(95),
    [anon_sym_PageUp] = ACTIONS(98),
    [anon_sym_PageDown] = ACTIONS(101),
    [anon_sym_Wait] = ACTIONS(104),
    [anon_sym_Require] = ACTIONS(107),
    [anon_sym_Source] = ACTIONS(110),
    [sym_comment] = ACTIONS(113),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(122), 1,
      aux_sym_string_token4,
    STATE(5), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(120), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(116), 5,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
      sym_shift,
      sym_comment,
    ACTIONS(118), 23,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
  [45] = 5,
    ACTIONS(131), 1,
      aux_sym_string_token4,
    STATE(5), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(128), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(124), 5,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
      sym_shift,
      sym_comment,
    ACTIONS(126), 23,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
  [90] = 5,
    ACTIONS(122), 1,
      aux_sym_string_token4,
    STATE(5), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(120), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
      sym_shift,
      sym_comment,
    ACTIONS(136), 23,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
  [135] = 2,
    ACTIONS(138), 8,
      ts_builtin_sym_end,
      sym_control,
      sym_alt,
      sym_shift,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      sym_comment,
    ACTIONS(140), 24,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      aux_sym_string_token4,
  [172] = 4,
    ACTIONS(144), 1,
      sym_integer,
    ACTIONS(146), 1,
      anon_sym_AT,
    STATE(20), 1,
      sym_duration,
    ACTIONS(142), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [212] = 4,
    ACTIONS(146), 1,
      anon_sym_AT,
    ACTIONS(150), 1,
      sym_integer,
    STATE(19), 1,
      sym_duration,
    ACTIONS(148), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [252] = 4,
    ACTIONS(146), 1,
      anon_sym_AT,
    ACTIONS(154), 1,
      sym_integer,
    STATE(23), 1,
      sym_duration,
    ACTIONS(152), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [292] = 4,
    ACTIONS(146), 1,
      anon_sym_AT,
    ACTIONS(158), 1,
      sym_integer,
    STATE(27), 1,
      sym_duration,
    ACTIONS(156), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [332] = 4,
    ACTIONS(146), 1,
      anon_sym_AT,
    ACTIONS(162), 1,
      sym_integer,
    STATE(21), 1,
      sym_duration,
    ACTIONS(160), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [372] = 4,
    ACTIONS(146), 1,
      anon_sym_AT,
    ACTIONS(166), 1,
      sym_integer,
    STATE(22), 1,
      sym_duration,
    ACTIONS(164), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [412] = 4,
    ACTIONS(146), 1,
      anon_sym_AT,
    ACTIONS(170), 1,
      sym_integer,
    STATE(30), 1,
      sym_duration,
    ACTIONS(168), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [452] = 4,
    ACTIONS(146), 1,
      anon_sym_AT,
    ACTIONS(174), 1,
      sym_integer,
    STATE(24), 1,
      sym_duration,
    ACTIONS(172), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [492] = 4,
    ACTIONS(146), 1,
      anon_sym_AT,
    ACTIONS(178), 1,
      sym_integer,
    STATE(25), 1,
      sym_duration,
    ACTIONS(176), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [532] = 4,
    ACTIONS(146), 1,
      anon_sym_AT,
    ACTIONS(182), 1,
      sym_integer,
    STATE(29), 1,
      sym_duration,
    ACTIONS(180), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [572] = 4,
    ACTIONS(146), 1,
      anon_sym_AT,
    ACTIONS(186), 1,
      sym_integer,
    STATE(26), 1,
      sym_duration,
    ACTIONS(184), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [612] = 2,
    ACTIONS(190), 1,
      sym_integer,
    ACTIONS(188), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [646] = 2,
    ACTIONS(194), 1,
      sym_integer,
    ACTIONS(192), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [680] = 2,
    ACTIONS(198), 1,
      sym_integer,
    ACTIONS(196), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [714] = 2,
    ACTIONS(202), 1,
      sym_integer,
    ACTIONS(200), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [748] = 2,
    ACTIONS(206), 1,
      sym_integer,
    ACTIONS(204), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [782] = 2,
    ACTIONS(210), 1,
      sym_integer,
    ACTIONS(208), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [816] = 2,
    ACTIONS(214), 1,
      sym_integer,
    ACTIONS(212), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [850] = 2,
    ACTIONS(218), 1,
      sym_integer,
    ACTIONS(216), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [884] = 2,
    ACTIONS(222), 1,
      sym_integer,
    ACTIONS(220), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [918] = 2,
    ACTIONS(226), 1,
      anon_sym_PERCENT,
    ACTIONS(224), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [952] = 2,
    ACTIONS(230), 1,
      sym_integer,
    ACTIONS(228), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [986] = 2,
    ACTIONS(234), 1,
      sym_integer,
    ACTIONS(232), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1020] = 1,
    ACTIONS(236), 29,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
      sym_integer,
  [1052] = 1,
    ACTIONS(238), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1083] = 1,
    ACTIONS(138), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1114] = 1,
    ACTIONS(240), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1145] = 1,
    ACTIONS(242), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1176] = 1,
    ACTIONS(188), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1207] = 1,
    ACTIONS(192), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1238] = 1,
    ACTIONS(232), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1269] = 1,
    ACTIONS(204), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1300] = 1,
    ACTIONS(220), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1331] = 1,
    ACTIONS(196), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1362] = 1,
    ACTIONS(200), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1393] = 1,
    ACTIONS(228), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1424] = 1,
    ACTIONS(208), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1455] = 1,
    ACTIONS(212), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1486] = 1,
    ACTIONS(244), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1517] = 1,
    ACTIONS(216), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1548] = 1,
    ACTIONS(246), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1579] = 1,
    ACTIONS(248), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1610] = 1,
    ACTIONS(224), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1641] = 1,
    ACTIONS(250), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1672] = 1,
    ACTIONS(252), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1703] = 1,
    ACTIONS(254), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1734] = 1,
    ACTIONS(256), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1765] = 1,
    ACTIONS(258), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1796] = 1,
    ACTIONS(260), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1827] = 1,
    ACTIONS(262), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1858] = 1,
    ACTIONS(264), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1889] = 1,
    ACTIONS(266), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1920] = 1,
    ACTIONS(268), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1951] = 1,
    ACTIONS(270), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [1982] = 1,
    ACTIONS(272), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [2013] = 1,
    ACTIONS(274), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [2044] = 1,
    ACTIONS(276), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [2075] = 1,
    ACTIONS(278), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [2106] = 1,
    ACTIONS(280), 28,
      ts_builtin_sym_end,
      anon_sym_Hide,
      anon_sym_Show,
      anon_sym_Copy,
      anon_sym_Paste,
      sym_control,
      sym_alt,
      sym_shift,
      anon_sym_Output,
      anon_sym_Set,
      anon_sym_Env,
      anon_sym_Sleep,
      anon_sym_Type,
      anon_sym_Backspace,
      anon_sym_Down,
      anon_sym_Enter,
      anon_sym_Escape,
      anon_sym_Left,
      anon_sym_Right,
      anon_sym_Space,
      anon_sym_Tab,
      anon_sym_Up,
      anon_sym_PageUp,
      anon_sym_PageDown,
      anon_sym_Wait,
      anon_sym_Require,
      anon_sym_Source,
      sym_comment,
  [2137] = 10,
    ACTIONS(288), 1,
      anon_sym_TypingSpeed,
    ACTIONS(290), 1,
      anon_sym_Theme,
    ACTIONS(292), 1,
      anon_sym_LoopOffset,
    ACTIONS(294), 1,
      anon_sym_Margin,
    ACTIONS(296), 1,
      anon_sym_WindowBar,
    ACTIONS(298), 1,
      anon_sym_CursorBlink,
    STATE(65), 1,
      sym_setting,
    ACTIONS(282), 3,
      anon_sym_Shell,
      anon_sym_FontFamily,
      anon_sym_MarginFill,
    ACTIONS(284), 5,
      anon_sym_FontSize,
      anon_sym_PlaybackSpeed,
      anon_sym_LetterSpacing,
      anon_sym_LineHeight,
      anon_sym_Padding,
    ACTIONS(286), 5,
      anon_sym_Framerate,
      anon_sym_Height,
      anon_sym_Width,
      anon_sym_BorderRadius,
      anon_sym_WindowBarSize,
  [2178] = 4,
    ACTIONS(300), 1,
      anon_sym_AT,
    STATE(70), 1,
      sym_duration,
    STATE(4), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(120), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2195] = 3,
    ACTIONS(304), 1,
      sym_json,
    STATE(50), 1,
      sym_string,
    ACTIONS(302), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2208] = 2,
    STATE(6), 2,
      sym_string,
      aux_sym_type_repeat1,
    ACTIONS(120), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2219] = 2,
    STATE(51), 1,
      sym_string,
    ACTIONS(302), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2229] = 2,
    STATE(49), 1,
      sym_string,
    ACTIONS(302), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2239] = 1,
    ACTIONS(236), 5,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
      sym_regex,
  [2247] = 2,
    STATE(71), 1,
      sym_string,
    ACTIONS(306), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2257] = 5,
    ACTIONS(300), 1,
      anon_sym_AT,
    ACTIONS(308), 1,
      sym_regex,
    ACTIONS(310), 1,
      anon_sym_PLUS,
    STATE(79), 1,
      sym_waitOn,
    STATE(91), 1,
      sym_duration,
  [2273] = 2,
    STATE(48), 1,
      sym_string,
    ACTIONS(302), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2283] = 2,
    STATE(50), 1,
      sym_string,
    ACTIONS(302), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2293] = 1,
    ACTIONS(138), 4,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
      aux_sym_string_token4,
  [2300] = 3,
    ACTIONS(300), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      sym_regex,
    STATE(89), 1,
      sym_duration,
  [2310] = 1,
    ACTIONS(314), 2,
      sym_regex,
      anon_sym_AT,
  [2315] = 1,
    ACTIONS(316), 2,
      anon_sym_Screen,
      anon_sym_Line,
  [2320] = 1,
    ACTIONS(304), 1,
      sym_time,
  [2324] = 1,
    ACTIONS(304), 1,
      sym_integer,
  [2328] = 1,
    ACTIONS(318), 1,
      sym_path,
  [2332] = 1,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
  [2336] = 1,
    ACTIONS(322), 1,
      sym_time,
  [2340] = 1,
    ACTIONS(324), 1,
      sym_time,
  [2344] = 1,
    ACTIONS(326), 1,
      sym_float,
  [2348] = 1,
    ACTIONS(328), 1,
      sym_regex,
  [2352] = 1,
    ACTIONS(304), 1,
      sym_boolean,
  [2356] = 1,
    ACTIONS(312), 1,
      sym_regex,
  [2360] = 1,
    ACTIONS(304), 1,
      sym_float,
  [2364] = 1,
    ACTIONS(330), 1,
      sym_time,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 135,
  [SMALL_STATE(8)] = 172,
  [SMALL_STATE(9)] = 212,
  [SMALL_STATE(10)] = 252,
  [SMALL_STATE(11)] = 292,
  [SMALL_STATE(12)] = 332,
  [SMALL_STATE(13)] = 372,
  [SMALL_STATE(14)] = 412,
  [SMALL_STATE(15)] = 452,
  [SMALL_STATE(16)] = 492,
  [SMALL_STATE(17)] = 532,
  [SMALL_STATE(18)] = 572,
  [SMALL_STATE(19)] = 612,
  [SMALL_STATE(20)] = 646,
  [SMALL_STATE(21)] = 680,
  [SMALL_STATE(22)] = 714,
  [SMALL_STATE(23)] = 748,
  [SMALL_STATE(24)] = 782,
  [SMALL_STATE(25)] = 816,
  [SMALL_STATE(26)] = 850,
  [SMALL_STATE(27)] = 884,
  [SMALL_STATE(28)] = 918,
  [SMALL_STATE(29)] = 952,
  [SMALL_STATE(30)] = 986,
  [SMALL_STATE(31)] = 1020,
  [SMALL_STATE(32)] = 1052,
  [SMALL_STATE(33)] = 1083,
  [SMALL_STATE(34)] = 1114,
  [SMALL_STATE(35)] = 1145,
  [SMALL_STATE(36)] = 1176,
  [SMALL_STATE(37)] = 1207,
  [SMALL_STATE(38)] = 1238,
  [SMALL_STATE(39)] = 1269,
  [SMALL_STATE(40)] = 1300,
  [SMALL_STATE(41)] = 1331,
  [SMALL_STATE(42)] = 1362,
  [SMALL_STATE(43)] = 1393,
  [SMALL_STATE(44)] = 1424,
  [SMALL_STATE(45)] = 1455,
  [SMALL_STATE(46)] = 1486,
  [SMALL_STATE(47)] = 1517,
  [SMALL_STATE(48)] = 1548,
  [SMALL_STATE(49)] = 1579,
  [SMALL_STATE(50)] = 1610,
  [SMALL_STATE(51)] = 1641,
  [SMALL_STATE(52)] = 1672,
  [SMALL_STATE(53)] = 1703,
  [SMALL_STATE(54)] = 1734,
  [SMALL_STATE(55)] = 1765,
  [SMALL_STATE(56)] = 1796,
  [SMALL_STATE(57)] = 1827,
  [SMALL_STATE(58)] = 1858,
  [SMALL_STATE(59)] = 1889,
  [SMALL_STATE(60)] = 1920,
  [SMALL_STATE(61)] = 1951,
  [SMALL_STATE(62)] = 1982,
  [SMALL_STATE(63)] = 2013,
  [SMALL_STATE(64)] = 2044,
  [SMALL_STATE(65)] = 2075,
  [SMALL_STATE(66)] = 2106,
  [SMALL_STATE(67)] = 2137,
  [SMALL_STATE(68)] = 2178,
  [SMALL_STATE(69)] = 2195,
  [SMALL_STATE(70)] = 2208,
  [SMALL_STATE(71)] = 2219,
  [SMALL_STATE(72)] = 2229,
  [SMALL_STATE(73)] = 2239,
  [SMALL_STATE(74)] = 2247,
  [SMALL_STATE(75)] = 2257,
  [SMALL_STATE(76)] = 2273,
  [SMALL_STATE(77)] = 2283,
  [SMALL_STATE(78)] = 2293,
  [SMALL_STATE(79)] = 2300,
  [SMALL_STATE(80)] = 2310,
  [SMALL_STATE(81)] = 2315,
  [SMALL_STATE(82)] = 2320,
  [SMALL_STATE(83)] = 2324,
  [SMALL_STATE(84)] = 2328,
  [SMALL_STATE(85)] = 2332,
  [SMALL_STATE(86)] = 2336,
  [SMALL_STATE(87)] = 2340,
  [SMALL_STATE(88)] = 2344,
  [SMALL_STATE(89)] = 2348,
  [SMALL_STATE(90)] = 2352,
  [SMALL_STATE(91)] = 2356,
  [SMALL_STATE(92)] = 2360,
  [SMALL_STATE(93)] = 2364,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pageup, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pagedown, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 2, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pageup, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pagedown, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tab, 3, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep, 2, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require, 2, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env, 3, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backspace, 3, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_down, 3, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter, 3, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 3, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_up, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pageup, 3, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pagedown, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait, 3, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait, 4, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait, 2, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waitOn, 2, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [320] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
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

TS_PUBLIC const TSLanguage *tree_sitter_vhs(void) {
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

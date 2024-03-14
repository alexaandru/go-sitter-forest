#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 184
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_recipe_token1 = 1,
  anon_sym_GT_GT = 2,
  anon_sym_COLON = 3,
  anon_sym_DASH = 4,
  aux_sym_comment_token1 = 5,
  anon_sym_LBRACK_DASH = 6,
  aux_sym_block_comment_token1 = 7,
  anon_sym_RBRACK = 8,
  anon_sym_AT = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_POUND = 12,
  anon_sym_TILDE = 13,
  anon_sym_PERCENT = 14,
  anon_sym_SLASH = 15,
  anon_sym_DOT = 16,
  sym__non_zero_digit = 17,
  sym__zero = 18,
  aux_sym__alphabetic_token1 = 19,
  aux_sym__alphabetic_token2 = 20,
  aux_sym__whitespace_token1 = 21,
  aux_sym__whitespace_token2 = 22,
  aux_sym__punctuation_token1 = 23,
  aux_sym__unreserved_symbol_token1 = 24,
  sym__newline = 25,
  sym_recipe = 26,
  sym__line = 27,
  sym_metadata = 28,
  sym_step = 29,
  sym_comment = 30,
  sym_block_comment = 31,
  sym_ingredient = 32,
  sym_cookware = 33,
  sym_timer = 34,
  sym_name = 35,
  sym_amount = 36,
  sym_quantity = 37,
  sym_units = 38,
  sym__multiword = 39,
  aux_sym__word = 40,
  aux_sym__text_item = 41,
  sym__number = 42,
  sym__fractional = 43,
  sym__decimal = 44,
  sym__integer = 45,
  sym__digit = 46,
  sym__alphabetic = 47,
  sym__whitespace = 48,
  sym__punctuation = 49,
  sym__unreserved_symbol = 50,
  sym__symbol = 51,
  aux_sym_recipe_repeat1 = 52,
  aux_sym_step_repeat1 = 53,
  aux_sym_ingredient_repeat1 = 54,
  aux_sym__multiword_repeat1 = 55,
  aux_sym__integer_repeat1 = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_recipe_token1] = "recipe_token1",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH] = "-",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_LBRACK_DASH] = "[-",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUND] = "#",
  [anon_sym_TILDE] = "~",
  [anon_sym_PERCENT] = "%",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT] = ".",
  [sym__non_zero_digit] = "_non_zero_digit",
  [sym__zero] = "_zero",
  [aux_sym__alphabetic_token1] = "_alphabetic_token1",
  [aux_sym__alphabetic_token2] = "_alphabetic_token2",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [aux_sym__whitespace_token2] = "_whitespace_token2",
  [aux_sym__punctuation_token1] = "_punctuation_token1",
  [aux_sym__unreserved_symbol_token1] = "_unreserved_symbol_token1",
  [sym__newline] = "_newline",
  [sym_recipe] = "recipe",
  [sym__line] = "_line",
  [sym_metadata] = "metadata",
  [sym_step] = "step",
  [sym_comment] = "comment",
  [sym_block_comment] = "block_comment",
  [sym_ingredient] = "ingredient",
  [sym_cookware] = "cookware",
  [sym_timer] = "timer",
  [sym_name] = "name",
  [sym_amount] = "amount",
  [sym_quantity] = "quantity",
  [sym_units] = "units",
  [sym__multiword] = "_multiword",
  [aux_sym__word] = "_word",
  [aux_sym__text_item] = "_text_item",
  [sym__number] = "_number",
  [sym__fractional] = "_fractional",
  [sym__decimal] = "_decimal",
  [sym__integer] = "_integer",
  [sym__digit] = "_digit",
  [sym__alphabetic] = "_alphabetic",
  [sym__whitespace] = "_whitespace",
  [sym__punctuation] = "_punctuation",
  [sym__unreserved_symbol] = "_unreserved_symbol",
  [sym__symbol] = "_symbol",
  [aux_sym_recipe_repeat1] = "recipe_repeat1",
  [aux_sym_step_repeat1] = "step_repeat1",
  [aux_sym_ingredient_repeat1] = "ingredient_repeat1",
  [aux_sym__multiword_repeat1] = "_multiword_repeat1",
  [aux_sym__integer_repeat1] = "_integer_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_recipe_token1] = aux_sym_recipe_token1,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_LBRACK_DASH] = anon_sym_LBRACK_DASH,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__non_zero_digit] = sym__non_zero_digit,
  [sym__zero] = sym__zero,
  [aux_sym__alphabetic_token1] = aux_sym__alphabetic_token1,
  [aux_sym__alphabetic_token2] = aux_sym__alphabetic_token2,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [aux_sym__whitespace_token2] = aux_sym__whitespace_token2,
  [aux_sym__punctuation_token1] = aux_sym__punctuation_token1,
  [aux_sym__unreserved_symbol_token1] = aux_sym__unreserved_symbol_token1,
  [sym__newline] = sym__newline,
  [sym_recipe] = sym_recipe,
  [sym__line] = sym__line,
  [sym_metadata] = sym_metadata,
  [sym_step] = sym_step,
  [sym_comment] = sym_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_ingredient] = sym_ingredient,
  [sym_cookware] = sym_cookware,
  [sym_timer] = sym_timer,
  [sym_name] = sym_name,
  [sym_amount] = sym_amount,
  [sym_quantity] = sym_quantity,
  [sym_units] = sym_units,
  [sym__multiword] = sym__multiword,
  [aux_sym__word] = aux_sym__word,
  [aux_sym__text_item] = aux_sym__text_item,
  [sym__number] = sym__number,
  [sym__fractional] = sym__fractional,
  [sym__decimal] = sym__decimal,
  [sym__integer] = sym__integer,
  [sym__digit] = sym__digit,
  [sym__alphabetic] = sym__alphabetic,
  [sym__whitespace] = sym__whitespace,
  [sym__punctuation] = sym__punctuation,
  [sym__unreserved_symbol] = sym__unreserved_symbol,
  [sym__symbol] = sym__symbol,
  [aux_sym_recipe_repeat1] = aux_sym_recipe_repeat1,
  [aux_sym_step_repeat1] = aux_sym_step_repeat1,
  [aux_sym_ingredient_repeat1] = aux_sym_ingredient_repeat1,
  [aux_sym__multiword_repeat1] = aux_sym__multiword_repeat1,
  [aux_sym__integer_repeat1] = aux_sym__integer_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_recipe_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__non_zero_digit] = {
    .visible = false,
    .named = true,
  },
  [sym__zero] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__alphabetic_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__alphabetic_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__whitespace_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__punctuation_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__unreserved_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_recipe] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_step] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_ingredient] = {
    .visible = true,
    .named = true,
  },
  [sym_cookware] = {
    .visible = true,
    .named = true,
  },
  [sym_timer] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_units] = {
    .visible = true,
    .named = true,
  },
  [sym__multiword] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__word] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_item] = {
    .visible = false,
    .named = false,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym__fractional] = {
    .visible = false,
    .named = true,
  },
  [sym__decimal] = {
    .visible = false,
    .named = true,
  },
  [sym__integer] = {
    .visible = false,
    .named = true,
  },
  [sym__digit] = {
    .visible = false,
    .named = true,
  },
  [sym__alphabetic] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__punctuation] = {
    .visible = false,
    .named = true,
  },
  [sym__unreserved_symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__symbol] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_recipe_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_step_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ingredient_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiword_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__integer_repeat1] = {
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
  [7] = 6,
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
  [22] = 21,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 21,
  [27] = 25,
  [28] = 24,
  [29] = 25,
  [30] = 23,
  [31] = 24,
  [32] = 23,
  [33] = 33,
  [34] = 34,
  [35] = 20,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 34,
  [41] = 34,
  [42] = 42,
  [43] = 43,
  [44] = 42,
  [45] = 45,
  [46] = 46,
  [47] = 34,
  [48] = 48,
  [49] = 36,
  [50] = 50,
  [51] = 39,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 42,
  [60] = 37,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 38,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 71,
  [73] = 73,
  [74] = 36,
  [75] = 75,
  [76] = 71,
  [77] = 37,
  [78] = 71,
  [79] = 70,
  [80] = 80,
  [81] = 80,
  [82] = 70,
  [83] = 36,
  [84] = 80,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 37,
  [90] = 56,
  [91] = 91,
  [92] = 92,
  [93] = 70,
  [94] = 92,
  [95] = 95,
  [96] = 96,
  [97] = 80,
  [98] = 98,
  [99] = 42,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 87,
  [104] = 104,
  [105] = 105,
  [106] = 88,
  [107] = 104,
  [108] = 105,
  [109] = 102,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 112,
  [114] = 114,
  [115] = 111,
  [116] = 116,
  [117] = 114,
  [118] = 116,
  [119] = 119,
  [120] = 120,
  [121] = 110,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 110,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 129,
  [131] = 131,
  [132] = 132,
  [133] = 129,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 132,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 119,
  [151] = 122,
  [152] = 123,
  [153] = 120,
  [154] = 125,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 156,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 157,
  [165] = 163,
  [166] = 166,
  [167] = 167,
  [168] = 161,
  [169] = 166,
  [170] = 167,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
};

static inline bool aux_sym__alphabetic_token1_character_set_1(int32_t c) {
  return (c < 6480
    ? (c < 3077
      ? (c < 2565
        ? (c < 1994
          ? (c < 1329
            ? (c < 890
              ? (c < 181
                ? (c < 170
                  ? (c >= 'A' && c <= 'z')
                  : c <= 170)
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 887)))
              : (c <= 895 || (c < 910
                ? (c < 908
                  ? (c >= 902 && c <= 906)
                  : c <= 908)
                : (c <= 929 || (c >= 931 && c <= 1327)))))
            : (c <= 1366 || (c < 1646
              ? (c < 1519
                ? (c < 1488
                  ? (c >= 1369 && c <= 1416)
                  : c <= 1514)
                : (c <= 1522 || (c >= 1568 && c <= 1610)))
              : (c <= 1749 || (c < 1808
                ? (c < 1786
                  ? (c >= 1765 && c <= 1775)
                  : c <= 1791)
                : (c <= 1839 || (c >= 1869 && c <= 1969)))))))
          : (c <= 2042 || (c < 2451
            ? (c < 2208
              ? (c < 2144
                ? (c < 2112
                  ? (c >= 2048 && c <= 2088)
                  : c <= 2136)
                : (c <= 2154 || (c >= 2160 && c <= 2190)))
              : (c <= 2249 || (c < 2437
                ? (c < 2417
                  ? (c >= 2308 && c <= 2401)
                  : c <= 2432)
                : (c <= 2444 || (c >= 2447 && c <= 2448)))))
            : (c <= 2472 || (c < 2510
              ? (c < 2486
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)
                : (c <= 2489 || c == 2493))
              : (c <= 2510 || (c < 2544
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)
                : (c <= 2545 || c == 2556))))))))
        : (c <= 2570 || (c < 2831
          ? (c < 2703
            ? (c < 2616
              ? (c < 2602
                ? (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c >= 2693 && c <= 2701)))))
            : (c <= 2705 || (c < 2749
              ? (c < 2738
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : c <= 2736)
                : (c <= 2739 || (c >= 2741 && c <= 2745)))
              : (c <= 2749 || (c < 2809
                ? (c < 2784
                  ? c == 2768
                  : c <= 2785)
                : (c <= 2809 || (c >= 2821 && c <= 2828)))))))
          : (c <= 2832 || (c < 2949
            ? (c < 2877
              ? (c < 2866
                ? (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)
                : (c <= 2867 || (c >= 2869 && c <= 2873)))
              : (c <= 2877 || (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)
                : (c <= 2929 || c == 2947))))
            : (c <= 2954 || (c < 2974
              ? (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || c == 2972))
              : (c <= 2975 || (c < 2990
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)
                : (c <= 3001 || c == 3024))))))))))
      : (c <= 3084 || (c < 3904
        ? (c < 3412
          ? (c < 3242
            ? (c < 3165
              ? (c < 3114
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)
                : (c <= 3129 || (c < 3160
                  ? c == 3133
                  : c <= 3162)))
              : (c <= 3165 || (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3212)
                : (c <= 3216 || (c >= 3218 && c <= 3240)))))
            : (c <= 3251 || (c < 3313
              ? (c < 3293
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)
                : (c <= 3294 || (c >= 3296 && c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3389 || c == 3406))))))
          : (c <= 3414 || (c < 3713
            ? (c < 3507
              ? (c < 3461
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)
                : (c <= 3478 || (c >= 3482 && c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : c <= 3526)
                : (c <= 3635 || (c >= 3648 && c <= 3654)))))
            : (c <= 3714 || (c < 3751
              ? (c < 3724
                ? (c < 3718
                  ? c == 3716
                  : c <= 3722)
                : (c <= 3747 || c == 3749))
              : (c <= 3773 || (c < 3804
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)
                : (c <= 3807 || c == 3840))))))))
        : (c <= 3911 || (c < 4824
          ? (c < 4696
            ? (c < 4295
              ? (c < 4096
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)
                : (c <= 4159 || (c < 4256
                  ? (c >= 4176 && c <= 4238)
                  : c <= 4293)))
              : (c <= 4295 || (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : c <= 4680)
                : (c <= 4685 || (c >= 4688 && c <= 4694)))))
            : (c <= 4696 || (c < 4786
              ? (c < 4746
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : c <= 4744)
                : (c <= 4749 || (c >= 4752 && c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c >= 4808 && c <= 4822)))))))
          : (c <= 4880 || (c < 5888
            ? (c < 5112
              ? (c < 4992
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)
                : (c <= 5007 || (c >= 5024 && c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5761
                  ? (c >= 5121 && c <= 5759)
                  : c <= 5786)
                : (c <= 5866 || (c >= 5873 && c <= 5880)))))
            : (c <= 5905 || (c < 6016
              ? (c < 5984
                ? (c < 5952
                  ? (c >= 5919 && c <= 5937)
                  : c <= 5969)
                : (c <= 5996 || (c >= 5998 && c <= 6000)))
              : (c <= 6108 || (c < 6320
                ? (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : c <= 6314)
                : (c <= 6389 || (c >= 6400 && c <= 6430)))))))))))))
    : (c <= 6509 || (c < 43520
      ? (c < 11568
        ? (c < 8025
          ? (c < 7245
            ? (c < 6823
              ? (c < 6576
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)
                : (c <= 6601 || (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : c <= 6740)))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c >= 6917 && c <= 6988)
                  : c <= 7087)
                : (c <= 7141 || (c >= 7168 && c <= 7203)))))
            : (c <= 7247 || (c < 7424
              ? (c < 7357
                ? (c < 7312
                  ? (c >= 7258 && c <= 7304)
                  : c <= 7354)
                : (c <= 7359 || (c >= 7401 && c <= 7418)))
              : (c <= 7957 || (c < 8008
                ? (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)
                : (c <= 8013 || (c >= 8016 && c <= 8023)))))))
          : (c <= 8025 || (c < 8182
            ? (c < 8118
              ? (c < 8031
                ? (c < 8029
                  ? c == 8027
                  : c <= 8029)
                : (c <= 8061 || (c >= 8064 && c <= 8116)))
              : (c <= 8132 || (c < 8160
                ? (c < 8150
                  ? (c >= 8134 && c <= 8147)
                  : c <= 8155)
                : (c <= 8172 || (c >= 8178 && c <= 8180)))))
            : (c <= 8188 || (c < 8579
              ? (c < 8336
                ? (c < 8319
                  ? c == 8305
                  : c <= 8319)
                : (c <= 8348 || (c >= 8450 && c <= 8526)))
              : (c <= 8580 || (c < 11559
                ? (c < 11520
                  ? (c >= 11264 && c <= 11507)
                  : c <= 11557)
                : (c <= 11559 || c == 11565))))))))
        : (c <= 11623 || (c < 13312
          ? (c < 11823
            ? (c < 11704
              ? (c < 11680
                ? (c < 11648
                  ? c == 11631
                  : c <= 11670)
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))
              : (c <= 11710 || (c < 11728
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : c <= 11726)
                : (c <= 11734 || (c >= 11736 && c <= 11742)))))
            : (c <= 11823 || (c < 12445
              ? (c < 12347
                ? (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)
                : (c <= 12348 || (c >= 12353 && c <= 12438)))
              : (c <= 12543 || (c < 12704
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)
                : (c <= 12735 || (c >= 12784 && c <= 12799)))))))
          : (c <= 13312 || (c < 42994
            ? (c < 42560
              ? (c < 42192
                ? (c < 40959
                  ? (c >= 19903 && c <= 19968)
                  : c <= 42124)
                : (c <= 42527 || (c >= 42538 && c <= 42539)))
              : (c <= 42725 || (c < 42963
                ? (c < 42960
                  ? (c >= 42775 && c <= 42954)
                  : c <= 42961)
                : (c <= 42963 || (c >= 42965 && c <= 42969)))))
            : (c <= 43042 || (c < 43360
              ? (c < 43250
                ? (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)
                : (c <= 43262 || (c >= 43274 && c <= 43334)))
              : (c <= 43388 || (c < 43488
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)
                : (c <= 43503 || (c >= 43514 && c <= 43518)))))))))))
      : (c <= 43560 || (c < 65664
        ? (c < 64318
          ? (c < 44032
            ? (c < 43793
              ? (c < 43739
                ? (c < 43616
                  ? (c >= 43584 && c <= 43595)
                  : c <= 43714)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))
              : (c <= 43798 || (c < 43824
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : c <= 43822)
                : (c <= 43881 || (c >= 43888 && c <= 44002)))))
            : (c <= 44032 || (c < 64112
              ? (c < 55243
                ? (c < 55216
                  ? c == 55203
                  : c <= 55238)
                : (c <= 55291 || (c >= 63744 && c <= 64109)))
              : (c <= 64217 || (c < 64285
                ? (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)
                : (c <= 64310 || (c >= 64312 && c <= 64316)))))))
          : (c <= 64318 || (c < 65474
            ? (c < 64914
              ? (c < 64326
                ? (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)
                : (c <= 64433 || (c >= 64467 && c <= 64911)))
              : (c <= 64967 || (c < 65142
                ? (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)
                : (c <= 65276 || (c >= 65313 && c <= 65470)))))
            : (c <= 65479 || (c < 65549
              ? (c < 65498
                ? (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)
                : (c <= 65500 || (c >= 65536 && c <= 65547)))
              : (c <= 65574 || (c < 65599
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : c <= 65597)
                : (c <= 65613 || (c >= 65616 && c <= 65629)))))))))
        : (c <= 65786 || (c < 66995
          ? (c < 66736
            ? (c < 66384
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : c <= 66256)
                : (c <= 66335 || (c < 66370
                  ? (c >= 66349 && c <= 66368)
                  : c <= 66377)))
              : (c <= 66421 || (c < 66504
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)
                : (c <= 66511 || (c >= 66560 && c <= 66717)))))
            : (c <= 66771 || (c < 66940
              ? (c < 66864
                ? (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)
                : (c <= 66915 || (c >= 66928 && c <= 66938)))
              : (c <= 66954 || (c < 66967
                ? (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : c <= 66965)
                : (c <= 66977 || (c >= 66979 && c <= 66993)))))))
          : (c <= 67001 || (c < 67594
            ? (c < 67456
              ? (c < 67392
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : c <= 67382)
                : (c <= 67413 || (c >= 67424 && c <= 67431)))
              : (c <= 67461 || (c < 67584
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : c <= 67514)
                : (c <= 67589 || c == 67592))))
            : (c <= 67637 || (c < 67712
              ? (c < 67647
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)
                : (c <= 67669 || (c >= 67680 && c <= 67702)))
              : (c <= 67742 || (c < 67840
                ? (c < 67828
                  ? (c >= 67808 && c <= 67826)
                  : c <= 67829)
                : (c <= 67861 || (c >= 67872 && c <= 67883)))))))))))))));
}

static inline bool aux_sym__alphabetic_token1_character_set_2(int32_t c) {
  return (c < 6512
    ? (c < 3077
      ? (c < 2565
        ? (c < 1994
          ? (c < 1329
            ? (c < 890
              ? (c < 181
                ? (c < 170
                  ? (c >= 'A' && c <= 'z')
                  : c <= 170)
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 887)))
              : (c <= 895 || (c < 910
                ? (c < 908
                  ? (c >= 902 && c <= 906)
                  : c <= 908)
                : (c <= 929 || (c >= 931 && c <= 1327)))))
            : (c <= 1366 || (c < 1646
              ? (c < 1519
                ? (c < 1488
                  ? (c >= 1369 && c <= 1416)
                  : c <= 1514)
                : (c <= 1522 || (c >= 1568 && c <= 1610)))
              : (c <= 1749 || (c < 1808
                ? (c < 1786
                  ? (c >= 1765 && c <= 1775)
                  : c <= 1791)
                : (c <= 1839 || (c >= 1869 && c <= 1969)))))))
          : (c <= 2042 || (c < 2451
            ? (c < 2208
              ? (c < 2144
                ? (c < 2112
                  ? (c >= 2048 && c <= 2088)
                  : c <= 2136)
                : (c <= 2154 || (c >= 2160 && c <= 2190)))
              : (c <= 2249 || (c < 2437
                ? (c < 2417
                  ? (c >= 2308 && c <= 2401)
                  : c <= 2432)
                : (c <= 2444 || (c >= 2447 && c <= 2448)))))
            : (c <= 2472 || (c < 2510
              ? (c < 2486
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)
                : (c <= 2489 || c == 2493))
              : (c <= 2510 || (c < 2544
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)
                : (c <= 2545 || c == 2556))))))))
        : (c <= 2570 || (c < 2831
          ? (c < 2703
            ? (c < 2616
              ? (c < 2602
                ? (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c >= 2693 && c <= 2701)))))
            : (c <= 2705 || (c < 2749
              ? (c < 2738
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : c <= 2736)
                : (c <= 2739 || (c >= 2741 && c <= 2745)))
              : (c <= 2749 || (c < 2809
                ? (c < 2784
                  ? c == 2768
                  : c <= 2785)
                : (c <= 2809 || (c >= 2821 && c <= 2828)))))))
          : (c <= 2832 || (c < 2949
            ? (c < 2877
              ? (c < 2866
                ? (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)
                : (c <= 2867 || (c >= 2869 && c <= 2873)))
              : (c <= 2877 || (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)
                : (c <= 2929 || c == 2947))))
            : (c <= 2954 || (c < 2974
              ? (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || c == 2972))
              : (c <= 2975 || (c < 2990
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)
                : (c <= 3001 || c == 3024))))))))))
      : (c <= 3084 || (c < 3904
        ? (c < 3412
          ? (c < 3242
            ? (c < 3165
              ? (c < 3114
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)
                : (c <= 3129 || (c < 3160
                  ? c == 3133
                  : c <= 3162)))
              : (c <= 3165 || (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3212)
                : (c <= 3216 || (c >= 3218 && c <= 3240)))))
            : (c <= 3251 || (c < 3313
              ? (c < 3293
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)
                : (c <= 3294 || (c >= 3296 && c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3389 || c == 3406))))))
          : (c <= 3414 || (c < 3713
            ? (c < 3507
              ? (c < 3461
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)
                : (c <= 3478 || (c >= 3482 && c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : c <= 3526)
                : (c <= 3635 || (c >= 3648 && c <= 3654)))))
            : (c <= 3714 || (c < 3751
              ? (c < 3724
                ? (c < 3718
                  ? c == 3716
                  : c <= 3722)
                : (c <= 3747 || c == 3749))
              : (c <= 3773 || (c < 3804
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)
                : (c <= 3807 || c == 3840))))))))
        : (c <= 3911 || (c < 4824
          ? (c < 4696
            ? (c < 4295
              ? (c < 4096
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)
                : (c <= 4159 || (c < 4256
                  ? (c >= 4176 && c <= 4238)
                  : c <= 4293)))
              : (c <= 4295 || (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : c <= 4680)
                : (c <= 4685 || (c >= 4688 && c <= 4694)))))
            : (c <= 4696 || (c < 4786
              ? (c < 4746
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : c <= 4744)
                : (c <= 4749 || (c >= 4752 && c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c >= 4808 && c <= 4822)))))))
          : (c <= 4880 || (c < 5919
            ? (c < 5112
              ? (c < 4992
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)
                : (c <= 5007 || (c >= 5024 && c <= 5109)))
              : (c <= 5117 || (c < 5873
                ? (c < 5792
                  ? (c >= 5121 && c <= 5786)
                  : c <= 5866)
                : (c <= 5880 || (c >= 5888 && c <= 5905)))))
            : (c <= 5937 || (c < 6176
              ? (c < 5998
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)
                : (c <= 6000 || (c >= 6016 && c <= 6108)))
              : (c <= 6264 || (c < 6400
                ? (c < 6320
                  ? (c >= 6272 && c <= 6314)
                  : c <= 6389)
                : (c <= 6430 || (c >= 6480 && c <= 6509)))))))))))))
    : (c <= 6516 || (c < 43584
      ? (c < 11631
        ? (c < 8027
          ? (c < 7258
            ? (c < 6917
              ? (c < 6656
                ? (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)
                : (c <= 6678 || (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : c <= 6823)))
              : (c <= 6988 || (c < 7168
                ? (c < 7098
                  ? (c >= 7043 && c <= 7087)
                  : c <= 7141)
                : (c <= 7203 || (c >= 7245 && c <= 7247)))))
            : (c <= 7304 || (c < 7960
              ? (c < 7401
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)
                : (c <= 7418 || (c >= 7424 && c <= 7957)))
              : (c <= 7965 || (c < 8016
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : c <= 8013)
                : (c <= 8023 || c == 8025))))))
          : (c <= 8027 || (c < 8305
            ? (c < 8134
              ? (c < 8064
                ? (c < 8031
                  ? c == 8029
                  : c <= 8061)
                : (c <= 8116 || (c >= 8118 && c <= 8132)))
              : (c <= 8147 || (c < 8178
                ? (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : c <= 8172)
                : (c <= 8180 || (c >= 8182 && c <= 8188)))))
            : (c <= 8305 || (c < 11264
              ? (c < 8450
                ? (c < 8336
                  ? c == 8319
                  : c <= 8348)
                : (c <= 8526 || (c >= 8579 && c <= 8580)))
              : (c <= 11507 || (c < 11565
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)
                : (c <= 11565 || (c >= 11568 && c <= 11623)))))))))
        : (c <= 11631 || (c < 19903
          ? (c < 12293
            ? (c < 11712
              ? (c < 11688
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : c <= 11686)
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))
              : (c <= 11718 || (c < 11736
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)
                : (c <= 11742 || c == 11823))))
            : (c <= 12294 || (c < 12549
              ? (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c >= 12445 && c <= 12543)))
              : (c <= 12591 || (c < 12784
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : c <= 12735)
                : (c <= 12799 || c == 13312))))))
          : (c <= 19968 || (c < 43072
            ? (c < 42775
              ? (c < 42538
                ? (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42527)
                : (c <= 42539 || (c >= 42560 && c <= 42725)))
              : (c <= 42954 || (c < 42965
                ? (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)
                : (c <= 42969 || (c >= 42994 && c <= 43042)))))
            : (c <= 43123 || (c < 43396
              ? (c < 43274
                ? (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43262)
                : (c <= 43334 || (c >= 43360 && c <= 43388)))
              : (c <= 43442 || (c < 43514
                ? (c < 43488
                  ? c == 43471
                  : c <= 43503)
                : (c <= 43518 || (c >= 43520 && c <= 43560)))))))))))
      : (c <= 43595 || (c < 66176
        ? (c < 64320
          ? (c < 55203
            ? (c < 43808
              ? (c < 43777
                ? (c < 43739
                  ? (c >= 43616 && c <= 43714)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))
              : (c <= 43814 || (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : c <= 43881)
                : (c <= 44002 || c == 44032))))
            : (c <= 55203 || (c < 64256
              ? (c < 63744
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : c <= 55291)
                : (c <= 64109 || (c >= 64112 && c <= 64217)))
              : (c <= 64262 || (c < 64312
                ? (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64310)
                : (c <= 64316 || c == 64318))))))
          : (c <= 64321 || (c < 65482
            ? (c < 65008
              ? (c < 64467
                ? (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)
                : (c <= 64911 || (c >= 64914 && c <= 64967)))
              : (c <= 65019 || (c < 65313
                ? (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)
                : (c <= 65470 || (c >= 65474 && c <= 65479)))))
            : (c <= 65487 || (c < 65576
              ? (c < 65536
                ? (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)
                : (c <= 65547 || (c >= 65549 && c <= 65574)))
              : (c <= 65594 || (c < 65616
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : c <= 65613)
                : (c <= 65629 || (c >= 65664 && c <= 65786)))))))))
        : (c <= 66204 || (c < 66995
          ? (c < 66736
            ? (c < 66384
              ? (c < 66349
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : c <= 66335)
                : (c <= 66368 || (c >= 66370 && c <= 66377)))
              : (c <= 66421 || (c < 66504
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)
                : (c <= 66511 || (c >= 66560 && c <= 66717)))))
            : (c <= 66771 || (c < 66940
              ? (c < 66864
                ? (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)
                : (c <= 66915 || (c >= 66928 && c <= 66938)))
              : (c <= 66954 || (c < 66967
                ? (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : c <= 66965)
                : (c <= 66977 || (c >= 66979 && c <= 66993)))))))
          : (c <= 67001 || (c < 67594
            ? (c < 67456
              ? (c < 67392
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : c <= 67382)
                : (c <= 67413 || (c >= 67424 && c <= 67431)))
              : (c <= 67461 || (c < 67584
                ? (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : c <= 67514)
                : (c <= 67589 || c == 67592))))
            : (c <= 67637 || (c < 67712
              ? (c < 67647
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)
                : (c <= 67669 || (c >= 67680 && c <= 67702)))
              : (c <= 67742 || (c < 67840
                ? (c < 67828
                  ? (c >= 67808 && c <= 67826)
                  : c <= 67829)
                : (c <= 67861 || (c >= 67872 && c <= 67883)))))))))))))));
}

static inline bool aux_sym__alphabetic_token1_character_set_3(int32_t c) {
  return (c < 6528
    ? (c < 3077
      ? (c < 2527
        ? (c < 1765
          ? (c < 908
            ? (c < 192
              ? (c < 170
                ? (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : c <= 'z')
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 887 || (c < 902
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)
                : (c <= 902 || (c >= 904 && c <= 906)))))
            : (c <= 908 || (c < 1488
              ? (c < 1329
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))
              : (c <= 1514 || (c < 1646
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : c <= 1610)
                : (c <= 1747 || c == 1749))))))
          : (c <= 1775 || (c < 2308
            ? (c < 2048
              ? (c < 1869
                ? (c < 1808
                  ? (c >= 1786 && c <= 1791)
                  : c <= 1839)
                : (c <= 1969 || (c < 2042
                  ? (c >= 1994 && c <= 2037)
                  : c <= 2042)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2190 || (c >= 2208 && c <= 2249)))))
            : (c <= 2401 || (c < 2482
              ? (c < 2447
                ? (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2510
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2493)
                : (c <= 2510 || (c >= 2524 && c <= 2525)))))))))
        : (c <= 2529 || (c < 2809
          ? (c < 2654
            ? (c < 2602
              ? (c < 2565
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : c <= 2556)
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c >= 2649 && c <= 2652)))))
            : (c <= 2654 || (c < 2738
              ? (c < 2703
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : c <= 2736)))
              : (c <= 2739 || (c < 2768
                ? (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)
                : (c <= 2768 || (c >= 2784 && c <= 2785)))))))
          : (c <= 2809 || (c < 2947
            ? (c < 2869
              ? (c < 2835
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))
              : (c <= 2873 || (c < 2911
                ? (c < 2908
                  ? c == 2877
                  : c <= 2909)
                : (c <= 2913 || c == 2929))))
            : (c <= 2947 || (c < 2974
              ? (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))
              : (c <= 2975 || (c < 2990
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)
                : (c <= 3001 || c == 3024))))))))))
      : (c <= 3084 || (c < 3976
        ? (c < 3412
          ? (c < 3218
            ? (c < 3165
              ? (c < 3114
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)
                : (c <= 3129 || (c < 3160
                  ? c == 3133
                  : c <= 3162)))
              : (c <= 3165 || (c < 3205
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)
                : (c <= 3212 || (c >= 3214 && c <= 3216)))))
            : (c <= 3240 || (c < 3313
              ? (c < 3261
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : c <= 3257)
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3389 || c == 3406))))))
          : (c <= 3414 || (c < 3716
            ? (c < 3517
              ? (c < 3461
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3635)
                : (c <= 3654 || (c >= 3713 && c <= 3714)))))
            : (c <= 3716 || (c < 3782
              ? (c < 3749
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)
                : (c <= 3749 || (c < 3776
                  ? (c >= 3751 && c <= 3773)
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c >= 3913 && c <= 3948)))))))))
        : (c <= 3980 || (c < 4888
          ? (c < 4698
            ? (c < 4304
              ? (c < 4256
                ? (c < 4176
                  ? (c >= 4096 && c <= 4159)
                  : c <= 4238)
                : (c <= 4293 || (c < 4301
                  ? c == 4295
                  : c <= 4301)))
              : (c <= 4346 || (c < 4688
                ? (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)
                : (c <= 4694 || c == 4696))))
            : (c <= 4701 || (c < 4800
              ? (c < 4752
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : c <= 4749)
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c >= 4882 && c <= 4885)))))))
          : (c <= 4954 || (c < 5984
            ? (c < 5792
              ? (c < 5112
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5919
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)
                : (c <= 5937 || (c >= 5952 && c <= 5969)))))
            : (c <= 5996 || (c < 6272
              ? (c < 6103
                ? (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)
                : (c <= 6103 || (c < 6176
                  ? c == 6108
                  : c <= 6264)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c >= 6512 && c <= 6516)))))))))))))
    : (c <= 6571 || (c < 43514
      ? (c < 11688
        ? (c < 8029
          ? (c < 7296
            ? (c < 7043
              ? (c < 6688
                ? (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)
                : (c <= 6740 || (c < 6917
                  ? c == 6823
                  : c <= 6988)))
              : (c <= 7087 || (c < 7245
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : c <= 7203)
                : (c <= 7247 || (c >= 7258 && c <= 7293)))))
            : (c <= 7304 || (c < 7968
              ? (c < 7401
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)
                : (c <= 7418 || (c < 7960
                  ? (c >= 7424 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || c == 8027))))))
          : (c <= 8029 || (c < 8336
            ? (c < 8160
              ? (c < 8118
                ? (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : c <= 8116)
                : (c <= 8132 || (c < 8150
                  ? (c >= 8134 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8305
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : c <= 8188)
                : (c <= 8305 || c == 8319))))
            : (c <= 8348 || (c < 11565
              ? (c < 11264
                ? (c < 8579
                  ? (c >= 8450 && c <= 8526)
                  : c <= 8580)
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11648
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : c <= 11631)
                : (c <= 11670 || (c >= 11680 && c <= 11686)))))))))
        : (c <= 11694 || (c < 42192
          ? (c < 12353
            ? (c < 11736
              ? (c < 11712
                ? (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12337
                ? (c < 12293
                  ? c == 11823
                  : c <= 12294)
                : (c <= 12341 || (c >= 12347 && c <= 12348)))))
            : (c <= 12438 || (c < 12704
              ? (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))
              : (c <= 12735 || (c < 19903
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)
                : (c <= 19968 || (c >= 40959 && c <= 42124)))))))
          : (c <= 42237 || (c < 43072
            ? (c < 42775
              ? (c < 42538
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42527)
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42725)))
              : (c <= 42954 || (c < 42965
                ? (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)
                : (c <= 42969 || (c >= 42994 && c <= 43042)))))
            : (c <= 43123 || (c < 43312
              ? (c < 43259
                ? (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)
                : (c <= 43259 || (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : c <= 43301)))
              : (c <= 43334 || (c < 43471
                ? (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)
                : (c <= 43471 || (c >= 43488 && c <= 43503)))))))))))
      : (c <= 43518 || (c < 65596
        ? (c < 64285
          ? (c < 43816
            ? (c < 43762
              ? (c < 43616
                ? (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43595)
                : (c <= 43714 || (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)))
              : (c <= 43764 || (c < 43793
                ? (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)
                : (c <= 43798 || (c >= 43808 && c <= 43814)))))
            : (c <= 43822 || (c < 55243
              ? (c < 44032
                ? (c < 43888
                  ? (c >= 43824 && c <= 43881)
                  : c <= 44002)
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64256
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : c <= 64217)
                : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
          : (c <= 64310 || (c < 65142
            ? (c < 64467
              ? (c < 64320
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : c <= 64318)
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c >= 65136 && c <= 65140)))))
            : (c <= 65276 || (c < 65490
              ? (c < 65382
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : c <= 65370)
                : (c <= 65470 || (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : c <= 65487)))
              : (c <= 65495 || (c < 65549
                ? (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)
                : (c <= 65574 || (c >= 65576 && c <= 65594)))))))))
        : (c <= 65597 || (c < 66967
          ? (c < 66464
            ? (c < 66304
              ? (c < 65664
                ? (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)
                : (c <= 65786 || (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : c <= 66256)))
              : (c <= 66335 || (c < 66384
                ? (c < 66370
                  ? (c >= 66349 && c <= 66368)
                  : c <= 66377)
                : (c <= 66421 || (c >= 66432 && c <= 66461)))))
            : (c <= 66499 || (c < 66864
              ? (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))
              : (c <= 66915 || (c < 66956
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : c <= 66954)
                : (c <= 66962 || (c >= 66964 && c <= 66965)))))))
          : (c <= 66977 || (c < 67592
            ? (c < 67424
              ? (c < 67003
                ? (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)))
              : (c <= 67431 || (c < 67506
                ? (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)
                : (c <= 67514 || (c >= 67584 && c <= 67589)))))
            : (c <= 67592 || (c < 67712
              ? (c < 67644
                ? (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : c <= 67640)
                : (c <= 67644 || (c < 67680
                  ? (c >= 67647 && c <= 67669)
                  : c <= 67702)))
              : (c <= 67742 || (c < 67840
                ? (c < 67828
                  ? (c >= 67808 && c <= 67826)
                  : c <= 67829)
                : (c <= 67861 || (c >= 67872 && c <= 67883)))))))))))))));
}

static inline bool aux_sym__alphabetic_token1_character_set_4(int32_t c) {
  return (c < 6528
    ? (c < 3086
      ? (c < 2544
        ? (c < 1786
          ? (c < 910
            ? (c < 192
              ? (c < 170
                ? (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : c <= 'z')
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 887 || (c < 902
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))))
            : (c <= 929 || (c < 1519
              ? (c < 1369
                ? (c < 1329
                  ? (c >= 931 && c <= 1327)
                  : c <= 1366)
                : (c <= 1369 || (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : c <= 1514)))
              : (c <= 1522 || (c < 1749
                ? (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1747)
                : (c <= 1749 || (c >= 1765 && c <= 1775)))))))
          : (c <= 1791 || (c < 2417
            ? (c < 2112
              ? (c < 1994
                ? (c < 1869
                  ? (c >= 1808 && c <= 1839)
                  : c <= 1969)
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2088)))
              : (c <= 2136 || (c < 2208
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2190)
                : (c <= 2249 || (c >= 2308 && c <= 2401)))))
            : (c <= 2432 || (c < 2486
              ? (c < 2451
                ? (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : c <= 2482)))
              : (c <= 2489 || (c < 2524
                ? (c < 2510
                  ? c == 2493
                  : c <= 2510)
                : (c <= 2525 || (c >= 2527 && c <= 2529)))))))))
        : (c <= 2545 || (c < 2821
          ? (c < 2674
            ? (c < 2610
              ? (c < 2575
                ? (c < 2565
                  ? c == 2556
                  : c <= 2570)
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || c == 2654))))
            : (c <= 2676 || (c < 2741
              ? (c < 2707
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))
              : (c <= 2745 || (c < 2784
                ? (c < 2768
                  ? c == 2749
                  : c <= 2768)
                : (c <= 2785 || c == 2809))))))
          : (c <= 2828 || (c < 2949
            ? (c < 2877
              ? (c < 2858
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))
              : (c <= 2877 || (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)
                : (c <= 2929 || c == 2947))))
            : (c <= 2954 || (c < 2979
              ? (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))
              : (c <= 2980 || (c < 3024
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)
                : (c <= 3024 || (c >= 3077 && c <= 3084)))))))))))
      : (c <= 3088 || (c < 4096
        ? (c < 3423
          ? (c < 3242
            ? (c < 3168
              ? (c < 3133
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)
                : (c <= 3133 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : c <= 3165)))
              : (c <= 3169 || (c < 3214
                ? (c < 3205
                  ? c == 3200
                  : c <= 3212)
                : (c <= 3216 || (c >= 3218 && c <= 3240)))))
            : (c <= 3251 || (c < 3332
              ? (c < 3293
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3406
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3389)
                : (c <= 3406 || (c >= 3412 && c <= 3414)))))))
          : (c <= 3425 || (c < 3718
            ? (c < 3520
              ? (c < 3482
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : c <= 3478)
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3648
                  ? (c >= 3585 && c <= 3635)
                  : c <= 3654)
                : (c <= 3714 || c == 3716))))
            : (c <= 3722 || (c < 3804
              ? (c < 3751
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c >= 3976 && c <= 3980)))))))))
        : (c <= 4159 || (c < 4992
          ? (c < 4704
            ? (c < 4348
              ? (c < 4295
                ? (c < 4256
                  ? (c >= 4176 && c <= 4238)
                  : c <= 4293)
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))
              : (c <= 4680 || (c < 4696
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)
                : (c <= 4696 || (c >= 4698 && c <= 4701)))))
            : (c <= 4744 || (c < 4802
              ? (c < 4786
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))
              : (c <= 4805 || (c < 4882
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)
                : (c <= 4885 || (c >= 4888 && c <= 4954)))))))
          : (c <= 5007 || (c < 5984
            ? (c < 5792
              ? (c < 5121
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : c <= 5117)
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5919
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)
                : (c <= 5937 || (c >= 5952 && c <= 5969)))))
            : (c <= 5996 || (c < 6272
              ? (c < 6103
                ? (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)
                : (c <= 6103 || (c < 6176
                  ? c == 6108
                  : c <= 6264)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c >= 6512 && c <= 6516)))))))))))))
    : (c <= 6571 || (c < 43514
      ? (c < 11688
        ? (c < 8029
          ? (c < 7296
            ? (c < 7043
              ? (c < 6688
                ? (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)
                : (c <= 6740 || (c < 6917
                  ? c == 6823
                  : c <= 6988)))
              : (c <= 7087 || (c < 7245
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : c <= 7203)
                : (c <= 7247 || (c >= 7258 && c <= 7293)))))
            : (c <= 7304 || (c < 7968
              ? (c < 7401
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)
                : (c <= 7418 || (c < 7960
                  ? (c >= 7424 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || c == 8027))))))
          : (c <= 8029 || (c < 8336
            ? (c < 8160
              ? (c < 8118
                ? (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : c <= 8116)
                : (c <= 8132 || (c < 8150
                  ? (c >= 8134 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8305
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : c <= 8188)
                : (c <= 8305 || c == 8319))))
            : (c <= 8348 || (c < 11565
              ? (c < 11264
                ? (c < 8579
                  ? (c >= 8450 && c <= 8526)
                  : c <= 8580)
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11648
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : c <= 11631)
                : (c <= 11670 || (c >= 11680 && c <= 11686)))))))))
        : (c <= 11694 || (c < 42192
          ? (c < 12353
            ? (c < 11736
              ? (c < 11712
                ? (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12337
                ? (c < 12293
                  ? c == 11823
                  : c <= 12294)
                : (c <= 12341 || (c >= 12347 && c <= 12348)))))
            : (c <= 12438 || (c < 12704
              ? (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))
              : (c <= 12735 || (c < 19903
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)
                : (c <= 19968 || (c >= 40959 && c <= 42124)))))))
          : (c <= 42237 || (c < 43072
            ? (c < 42775
              ? (c < 42538
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42527)
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42725)))
              : (c <= 42954 || (c < 42965
                ? (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)
                : (c <= 42969 || (c >= 42994 && c <= 43042)))))
            : (c <= 43123 || (c < 43312
              ? (c < 43259
                ? (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)
                : (c <= 43259 || (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : c <= 43301)))
              : (c <= 43334 || (c < 43471
                ? (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)
                : (c <= 43471 || (c >= 43488 && c <= 43503)))))))))))
      : (c <= 43518 || (c < 65596
        ? (c < 64285
          ? (c < 43816
            ? (c < 43762
              ? (c < 43616
                ? (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43595)
                : (c <= 43714 || (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)))
              : (c <= 43764 || (c < 43793
                ? (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)
                : (c <= 43798 || (c >= 43808 && c <= 43814)))))
            : (c <= 43822 || (c < 55243
              ? (c < 44032
                ? (c < 43888
                  ? (c >= 43824 && c <= 43881)
                  : c <= 44002)
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64256
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : c <= 64217)
                : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
          : (c <= 64310 || (c < 65142
            ? (c < 64467
              ? (c < 64320
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : c <= 64318)
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c >= 65136 && c <= 65140)))))
            : (c <= 65276 || (c < 65490
              ? (c < 65382
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : c <= 65370)
                : (c <= 65470 || (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : c <= 65487)))
              : (c <= 65495 || (c < 65549
                ? (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)
                : (c <= 65574 || (c >= 65576 && c <= 65594)))))))))
        : (c <= 65597 || (c < 66967
          ? (c < 66464
            ? (c < 66304
              ? (c < 65664
                ? (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)
                : (c <= 65786 || (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : c <= 66256)))
              : (c <= 66335 || (c < 66384
                ? (c < 66370
                  ? (c >= 66349 && c <= 66368)
                  : c <= 66377)
                : (c <= 66421 || (c >= 66432 && c <= 66461)))))
            : (c <= 66499 || (c < 66864
              ? (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))
              : (c <= 66915 || (c < 66956
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : c <= 66954)
                : (c <= 66962 || (c >= 66964 && c <= 66965)))))))
          : (c <= 66977 || (c < 67592
            ? (c < 67424
              ? (c < 67003
                ? (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)
                : (c <= 67004 || (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)))
              : (c <= 67431 || (c < 67506
                ? (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)
                : (c <= 67514 || (c >= 67584 && c <= 67589)))))
            : (c <= 67592 || (c < 67712
              ? (c < 67644
                ? (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : c <= 67640)
                : (c <= 67644 || (c < 67680
                  ? (c >= 67647 && c <= 67669)
                  : c <= 67702)))
              : (c <= 67742 || (c < 67840
                ? (c < 67828
                  ? (c >= 67808 && c <= 67826)
                  : c <= 67829)
                : (c <= 67861 || (c >= 67872 && c <= 67883)))))))))))))));
}

static inline bool aux_sym__alphabetic_token2_character_set_1(int32_t c) {
  return (c < 3655
    ? (c < 2750
      ? (c < 2275
        ? (c < 1840
          ? (c < 1648
            ? (c < 1425
              ? (c < 1155
                ? (c >= 768 && c <= 879)
                : c <= 1161)
              : (c <= 1479 || (c < 1611
                ? (c >= 1552 && c <= 1562)
                : c <= 1631)))
            : (c <= 1648 || (c < 1767
              ? (c < 1759
                ? (c >= 1750 && c <= 1756)
                : c <= 1764)
              : (c <= 1768 || (c < 1809
                ? (c >= 1770 && c <= 1773)
                : c <= 1809)))))
          : (c <= 1866 || (c < 2085
            ? (c < 2045
              ? (c < 2027
                ? (c >= 1958 && c <= 1968)
                : c <= 2035)
              : (c <= 2045 || (c < 2075
                ? (c >= 2070 && c <= 2073)
                : c <= 2083)))
            : (c <= 2087 || (c < 2200
              ? (c < 2137
                ? (c >= 2089 && c <= 2093)
                : c <= 2139)
              : (c <= 2207 || (c >= 2250 && c <= 2273)))))))
        : (c <= 2307 || (c < 2558
          ? (c < 2492
            ? (c < 2385
              ? (c < 2366
                ? (c >= 2362 && c <= 2364)
                : c <= 2383)
              : (c <= 2391 || (c < 2433
                ? (c >= 2402 && c <= 2403)
                : c <= 2435)))
            : (c <= 2492 || (c < 2507
              ? (c < 2503
                ? (c >= 2494 && c <= 2500)
                : c <= 2504)
              : (c <= 2509 || (c < 2530
                ? c == 2519
                : c <= 2531)))))
          : (c <= 2558 || (c < 2641
            ? (c < 2622
              ? (c < 2620
                ? (c >= 2561 && c <= 2563)
                : c <= 2620)
              : (c <= 2626 || (c < 2635
                ? (c >= 2631 && c <= 2632)
                : c <= 2637)))
            : (c <= 2641 || (c < 2689
              ? (c < 2677
                ? (c >= 2672 && c <= 2673)
                : c <= 2677)
              : (c <= 2691 || c == 2748))))))))
      : (c <= 2757 || (c < 3170
        ? (c < 2946
          ? (c < 2876
            ? (c < 2786
              ? (c < 2763
                ? (c >= 2759 && c <= 2761)
                : c <= 2765)
              : (c <= 2787 || (c < 2817
                ? (c >= 2810 && c <= 2815)
                : c <= 2819)))
            : (c <= 2876 || (c < 2891
              ? (c < 2887
                ? (c >= 2878 && c <= 2884)
                : c <= 2888)
              : (c <= 2893 || (c < 2914
                ? (c >= 2901 && c <= 2903)
                : c <= 2915)))))
          : (c <= 2946 || (c < 3132
            ? (c < 3018
              ? (c < 3014
                ? (c >= 3006 && c <= 3010)
                : c <= 3016)
              : (c <= 3021 || (c < 3072
                ? c == 3031
                : c <= 3076)))
            : (c <= 3132 || (c < 3146
              ? (c < 3142
                ? (c >= 3134 && c <= 3140)
                : c <= 3144)
              : (c <= 3149 || (c >= 3157 && c <= 3158)))))))
        : (c <= 3171 || (c < 3402
          ? (c < 3285
            ? (c < 3262
              ? (c < 3260
                ? (c >= 3201 && c <= 3203)
                : c <= 3260)
              : (c <= 3268 || (c < 3274
                ? (c >= 3270 && c <= 3272)
                : c <= 3277)))
            : (c <= 3286 || (c < 3387
              ? (c < 3328
                ? (c >= 3298 && c <= 3299)
                : c <= 3331)
              : (c <= 3388 || (c < 3398
                ? (c >= 3390 && c <= 3396)
                : c <= 3400)))))
          : (c <= 3405 || (c < 3542
            ? (c < 3457
              ? (c < 3426
                ? c == 3415
                : c <= 3427)
              : (c <= 3459 || (c < 3535
                ? c == 3530
                : c <= 3540)))
            : (c <= 3542 || (c < 3633
              ? (c < 3570
                ? (c >= 3544 && c <= 3551)
                : c <= 3571)
              : (c <= 3633 || (c >= 3636 && c <= 3642)))))))))))
    : (c <= 3662 || (c < 7376
      ? (c < 5938
        ? (c < 4139
          ? (c < 3895
            ? (c < 3784
              ? (c < 3764
                ? c == 3761
                : c <= 3772)
              : (c <= 3789 || (c < 3893
                ? (c >= 3864 && c <= 3865)
                : c <= 3893)))
            : (c <= 3895 || (c < 3981
              ? (c < 3953
                ? (c >= 3897 && c <= 3903)
                : c <= 3975)
              : (c <= 3991 || (c < 4038
                ? (c >= 3993 && c <= 4028)
                : c <= 4038)))))
          : (c <= 4158 || (c < 4226
            ? (c < 4194
              ? (c < 4190
                ? (c >= 4182 && c <= 4185)
                : c <= 4192)
              : (c <= 4196 || (c < 4209
                ? (c >= 4199 && c <= 4205)
                : c <= 4212)))
            : (c <= 4237 || (c < 4957
              ? (c < 4250
                ? c == 4239
                : c <= 4253)
              : (c <= 4959 || (c >= 5906 && c <= 5909)))))))
        : (c <= 5940 || (c < 6741
          ? (c < 6159
            ? (c < 6068
              ? (c < 6002
                ? (c >= 5970 && c <= 5971)
                : c <= 6003)
              : (c <= 6099 || (c < 6155
                ? c == 6109
                : c <= 6157)))
            : (c <= 6159 || (c < 6432
              ? (c < 6313
                ? (c >= 6277 && c <= 6278)
                : c <= 6313)
              : (c <= 6443 || (c < 6679
                ? (c >= 6448 && c <= 6459)
                : c <= 6683)))))
          : (c <= 6750 || (c < 7019
            ? (c < 6832
              ? (c < 6783
                ? (c >= 6752 && c <= 6780)
                : c <= 6783)
              : (c <= 6862 || (c < 6964
                ? (c >= 6912 && c <= 6916)
                : c <= 6980)))
            : (c <= 7027 || (c < 7142
              ? (c < 7073
                ? (c >= 7040 && c <= 7042)
                : c <= 7085)
              : (c <= 7155 || (c >= 7204 && c <= 7223)))))))))
      : (c <= 7400 || (c < 43302
        ? (c < 42654
          ? (c < 11503
            ? (c < 7415
              ? (c < 7412
                ? c == 7405
                : c <= 7412)
              : (c <= 7417 || (c < 8400
                ? (c >= 7616 && c <= 7679)
                : c <= 8432)))
            : (c <= 11505 || (c < 12330
              ? (c < 11744
                ? c == 11647
                : c <= 11775)
              : (c <= 12335 || (c < 42607
                ? (c >= 12441 && c <= 12442)
                : c <= 42621)))))
          : (c <= 42655 || (c < 43052
            ? (c < 43014
              ? (c < 43010
                ? (c >= 42736 && c <= 42737)
                : c <= 43010)
              : (c <= 43014 || (c < 43043
                ? c == 43019
                : c <= 43047)))
            : (c <= 43052 || (c < 43232
              ? (c < 43188
                ? (c >= 43136 && c <= 43137)
                : c <= 43205)
              : (c <= 43249 || c == 43263))))))
        : (c <= 43309 || (c < 43710
          ? (c < 43587
            ? (c < 43443
              ? (c < 43392
                ? (c >= 43335 && c <= 43347)
                : c <= 43395)
              : (c <= 43456 || (c < 43561
                ? c == 43493
                : c <= 43574)))
            : (c <= 43587 || (c < 43696
              ? (c < 43643
                ? (c >= 43596 && c <= 43597)
                : c <= 43645)
              : (c <= 43696 || (c < 43703
                ? (c >= 43698 && c <= 43700)
                : c <= 43704)))))
          : (c <= 43711 || (c < 65024
            ? (c < 43765
              ? (c < 43755
                ? c == 43713
                : c <= 43759)
              : (c <= 43766 || (c < 64286
                ? (c >= 44003 && c <= 44013)
                : c <= 64286)))
            : (c <= 65039 || (c < 66272
              ? (c < 66045
                ? (c >= 65056 && c <= 65071)
                : c <= 66045)
              : (c <= 66272 || (c >= 66422 && c <= 66426)))))))))))));
}

static inline bool aux_sym__alphabetic_token2_character_set_2(int32_t c) {
  return (c < 3761
    ? (c < 2748
      ? (c < 2200
        ? (c < 1767
          ? (c < 1479
            ? (c < 1471
              ? (c < 1155
                ? (c >= 768 && c <= 879)
                : (c <= 1161 || (c >= 1425 && c <= 1469)))
              : (c <= 1471 || (c < 1476
                ? (c >= 1473 && c <= 1474)
                : c <= 1477)))
            : (c <= 1479 || (c < 1648
              ? (c < 1611
                ? (c >= 1552 && c <= 1562)
                : c <= 1631)
              : (c <= 1648 || (c < 1759
                ? (c >= 1750 && c <= 1756)
                : c <= 1764)))))
          : (c <= 1768 || (c < 2045
            ? (c < 1840
              ? (c < 1809
                ? (c >= 1770 && c <= 1773)
                : c <= 1809)
              : (c <= 1866 || (c < 2027
                ? (c >= 1958 && c <= 1968)
                : c <= 2035)))
            : (c <= 2045 || (c < 2085
              ? (c < 2075
                ? (c >= 2070 && c <= 2073)
                : c <= 2083)
              : (c <= 2087 || (c < 2137
                ? (c >= 2089 && c <= 2093)
                : c <= 2139)))))))
        : (c <= 2207 || (c < 2519
          ? (c < 2402
            ? (c < 2362
              ? (c < 2275
                ? (c >= 2250 && c <= 2273)
                : c <= 2307)
              : (c <= 2364 || (c < 2385
                ? (c >= 2366 && c <= 2383)
                : c <= 2391)))
            : (c <= 2403 || (c < 2494
              ? (c < 2492
                ? (c >= 2433 && c <= 2435)
                : c <= 2492)
              : (c <= 2500 || (c < 2507
                ? (c >= 2503 && c <= 2504)
                : c <= 2509)))))
          : (c <= 2519 || (c < 2631
            ? (c < 2561
              ? (c < 2558
                ? (c >= 2530 && c <= 2531)
                : c <= 2558)
              : (c <= 2563 || (c < 2622
                ? c == 2620
                : c <= 2626)))
            : (c <= 2632 || (c < 2672
              ? (c < 2641
                ? (c >= 2635 && c <= 2637)
                : c <= 2641)
              : (c <= 2673 || (c < 2689
                ? c == 2677
                : c <= 2691)))))))))
      : (c <= 2748 || (c < 3170
        ? (c < 2914
          ? (c < 2817
            ? (c < 2763
              ? (c < 2759
                ? (c >= 2750 && c <= 2757)
                : c <= 2761)
              : (c <= 2765 || (c < 2810
                ? (c >= 2786 && c <= 2787)
                : c <= 2815)))
            : (c <= 2819 || (c < 2887
              ? (c < 2878
                ? c == 2876
                : c <= 2884)
              : (c <= 2888 || (c < 2901
                ? (c >= 2891 && c <= 2893)
                : c <= 2903)))))
          : (c <= 2915 || (c < 3072
            ? (c < 3014
              ? (c < 3006
                ? c == 2946
                : c <= 3010)
              : (c <= 3016 || (c < 3031
                ? (c >= 3018 && c <= 3021)
                : c <= 3031)))
            : (c <= 3076 || (c < 3142
              ? (c < 3134
                ? c == 3132
                : c <= 3140)
              : (c <= 3144 || (c < 3157
                ? (c >= 3146 && c <= 3149)
                : c <= 3158)))))))
        : (c <= 3171 || (c < 3402
          ? (c < 3285
            ? (c < 3262
              ? (c < 3260
                ? (c >= 3201 && c <= 3203)
                : c <= 3260)
              : (c <= 3268 || (c < 3274
                ? (c >= 3270 && c <= 3272)
                : c <= 3277)))
            : (c <= 3286 || (c < 3387
              ? (c < 3328
                ? (c >= 3298 && c <= 3299)
                : c <= 3331)
              : (c <= 3388 || (c < 3398
                ? (c >= 3390 && c <= 3396)
                : c <= 3400)))))
          : (c <= 3405 || (c < 3542
            ? (c < 3457
              ? (c < 3426
                ? c == 3415
                : c <= 3427)
              : (c <= 3459 || (c < 3535
                ? c == 3530
                : c <= 3540)))
            : (c <= 3542 || (c < 3633
              ? (c < 3570
                ? (c >= 3544 && c <= 3551)
                : c <= 3571)
              : (c <= 3633 || (c < 3655
                ? (c >= 3636 && c <= 3642)
                : c <= 3662)))))))))))
    : (c <= 3761 || (c < 7380
      ? (c < 5938
        ? (c < 4038
          ? (c < 3897
            ? (c < 3864
              ? (c < 3784
                ? (c >= 3764 && c <= 3772)
                : c <= 3789)
              : (c <= 3865 || (c < 3895
                ? c == 3893
                : c <= 3895)))
            : (c <= 3897 || (c < 3974
              ? (c < 3953
                ? (c >= 3902 && c <= 3903)
                : c <= 3972)
              : (c <= 3975 || (c < 3993
                ? (c >= 3981 && c <= 3991)
                : c <= 4028)))))
          : (c <= 4038 || (c < 4209
            ? (c < 4190
              ? (c < 4182
                ? (c >= 4139 && c <= 4158)
                : c <= 4185)
              : (c <= 4192 || (c < 4199
                ? (c >= 4194 && c <= 4196)
                : c <= 4205)))
            : (c <= 4212 || (c < 4250
              ? (c < 4239
                ? (c >= 4226 && c <= 4237)
                : c <= 4239)
              : (c <= 4253 || (c < 5906
                ? (c >= 4957 && c <= 4959)
                : c <= 5909)))))))
        : (c <= 5940 || (c < 6741
          ? (c < 6159
            ? (c < 6068
              ? (c < 6002
                ? (c >= 5970 && c <= 5971)
                : c <= 6003)
              : (c <= 6099 || (c < 6155
                ? c == 6109
                : c <= 6157)))
            : (c <= 6159 || (c < 6432
              ? (c < 6313
                ? (c >= 6277 && c <= 6278)
                : c <= 6313)
              : (c <= 6443 || (c < 6679
                ? (c >= 6448 && c <= 6459)
                : c <= 6683)))))
          : (c <= 6750 || (c < 7019
            ? (c < 6832
              ? (c < 6783
                ? (c >= 6752 && c <= 6780)
                : c <= 6783)
              : (c <= 6862 || (c < 6964
                ? (c >= 6912 && c <= 6916)
                : c <= 6980)))
            : (c <= 7027 || (c < 7142
              ? (c < 7073
                ? (c >= 7040 && c <= 7042)
                : c <= 7085)
              : (c <= 7155 || (c < 7376
                ? (c >= 7204 && c <= 7223)
                : c <= 7378)))))))))
      : (c <= 7400 || (c < 43302
        ? (c < 42612
          ? (c < 11503
            ? (c < 7415
              ? (c < 7412
                ? c == 7405
                : c <= 7412)
              : (c <= 7417 || (c < 8400
                ? (c >= 7616 && c <= 7679)
                : c <= 8432)))
            : (c <= 11505 || (c < 12330
              ? (c < 11744
                ? c == 11647
                : c <= 11775)
              : (c <= 12335 || (c < 42607
                ? (c >= 12441 && c <= 12442)
                : c <= 42610)))))
          : (c <= 42621 || (c < 43043
            ? (c < 43010
              ? (c < 42736
                ? (c >= 42654 && c <= 42655)
                : c <= 42737)
              : (c <= 43010 || (c < 43019
                ? c == 43014
                : c <= 43019)))
            : (c <= 43047 || (c < 43188
              ? (c < 43136
                ? c == 43052
                : c <= 43137)
              : (c <= 43205 || (c < 43263
                ? (c >= 43232 && c <= 43249)
                : c <= 43263)))))))
        : (c <= 43309 || (c < 43710
          ? (c < 43587
            ? (c < 43443
              ? (c < 43392
                ? (c >= 43335 && c <= 43347)
                : c <= 43395)
              : (c <= 43456 || (c < 43561
                ? c == 43493
                : c <= 43574)))
            : (c <= 43587 || (c < 43696
              ? (c < 43643
                ? (c >= 43596 && c <= 43597)
                : c <= 43645)
              : (c <= 43696 || (c < 43703
                ? (c >= 43698 && c <= 43700)
                : c <= 43704)))))
          : (c <= 43711 || (c < 64286
            ? (c < 43765
              ? (c < 43755
                ? c == 43713
                : c <= 43759)
              : (c <= 43766 || (c < 44012
                ? (c >= 44003 && c <= 44010)
                : c <= 44013)))
            : (c <= 64286 || (c < 66045
              ? (c < 65056
                ? (c >= 65024 && c <= 65039)
                : c <= 65071)
              : (c <= 66045 || (c < 66422
                ? c == 66272
                : c <= 66426)))))))))))));
}

static inline bool aux_sym__punctuation_token1_character_set_1(int32_t c) {
  return (c < 7379
    ? (c < 2678
      ? (c < 1472
        ? (c < 171
          ? (c < '\\'
            ? (c < ','
              ? (c < '&'
                ? (c >= '!' && c <= '"')
                : c <= '*')
              : (c <= ';' || c == '?'))
            : (c <= '\\' || (c < 161
              ? c == '_'
              : (c <= 161 || c == 167))))
          : (c <= 171 || (c < 903
            ? (c < 191
              ? (c < 187
                ? (c >= 182 && c <= 183)
                : c <= 187)
              : (c <= 191 || c == 894))
            : (c <= 903 || (c < 1417
              ? (c >= 1370 && c <= 1375)
              : (c <= 1418 || c == 1470))))))
        : (c <= 1472 || (c < 1748
          ? (c < 1548
            ? (c < 1523
              ? (c < 1478
                ? c == 1475
                : c <= 1478)
              : (c <= 1524 || (c >= 1545 && c <= 1546)))
            : (c <= 1549 || (c < 1565
              ? c == 1563
              : (c <= 1567 || (c >= 1642 && c <= 1645)))))
          : (c <= 1748 || (c < 2142
            ? (c < 2039
              ? (c >= 1792 && c <= 1805)
              : (c <= 2041 || (c >= 2096 && c <= 2110)))
            : (c <= 2142 || (c < 2416
              ? (c >= 2404 && c <= 2405)
              : (c <= 2416 || c == 2557))))))))
      : (c <= 2678 || (c < 5742
        ? (c < 3898
          ? (c < 3663
            ? (c < 3204
              ? (c < 3191
                ? c == 2800
                : c <= 3191)
              : (c <= 3204 || c == 3572))
            : (c <= 3663 || (c < 3844
              ? (c >= 3674 && c <= 3675)
              : (c <= 3858 || c == 3860))))
          : (c <= 3901 || (c < 4170
            ? (c < 4048
              ? c == 3973
              : (c <= 4052 || (c >= 4057 && c <= 4058)))
            : (c <= 4175 || (c < 4960
              ? c == 4347
              : (c <= 4968 || c == 5120))))))
        : (c <= 5742 || (c < 6816
          ? (c < 6104
            ? (c < 5941
              ? (c < 5867
                ? (c >= 5787 && c <= 5788)
                : c <= 5869)
              : (c <= 5942 || (c >= 6100 && c <= 6102)))
            : (c <= 6106 || (c < 6468
              ? (c >= 6144 && c <= 6154)
              : (c <= 6469 || (c >= 6686 && c <= 6687)))))
          : (c <= 6822 || (c < 7164
            ? (c < 7002
              ? (c >= 6824 && c <= 6829)
              : (c <= 7008 || (c >= 7037 && c <= 7038)))
            : (c <= 7167 || (c < 7294
              ? (c >= 7227 && c <= 7231)
              : (c <= 7295 || (c >= 7360 && c <= 7367)))))))))))
    : (c <= 7379 || (c < 43214
      ? (c < 11632
        ? (c < 10088
          ? (c < 8317
            ? (c < 8261
              ? (c < 8240
                ? (c >= 8208 && c <= 8231)
                : c <= 8259)
              : (c <= 8273 || (c >= 8275 && c <= 8286)))
            : (c <= 8318 || (c < 8968
              ? (c >= 8333 && c <= 8334)
              : (c <= 8971 || (c >= 9001 && c <= 9002)))))
          : (c <= 10101 || (c < 10712
            ? (c < 10214
              ? (c >= 10181 && c <= 10182)
              : (c <= 10223 || (c >= 10627 && c <= 10648)))
            : (c <= 10715 || (c < 11513
              ? (c >= 10748 && c <= 10749)
              : (c <= 11516 || (c >= 11518 && c <= 11519)))))))
        : (c <= 11632 || (c < 12448
          ? (c < 12296
            ? (c < 11858
              ? (c < 11824
                ? (c >= 11776 && c <= 11822)
                : c <= 11855)
              : (c <= 11869 || (c >= 12289 && c <= 12291)))
            : (c <= 12305 || (c < 12336
              ? (c >= 12308 && c <= 12319)
              : (c <= 12336 || c == 12349))))
          : (c <= 12448 || (c < 42611
            ? (c < 42238
              ? c == 12539
              : (c <= 42239 || (c >= 42509 && c <= 42511)))
            : (c <= 42611 || (c < 42738
              ? c == 42622
              : (c <= 42743 || (c >= 43124 && c <= 43127)))))))))
      : (c <= 43215 || (c < 65130
        ? (c < 43760
          ? (c < 43457
            ? (c < 43310
              ? (c < 43260
                ? (c >= 43256 && c <= 43258)
                : c <= 43260)
              : (c <= 43311 || c == 43359))
            : (c <= 43469 || (c < 43612
              ? (c >= 43486 && c <= 43487)
              : (c <= 43615 || (c >= 43742 && c <= 43743)))))
          : (c <= 43761 || (c < 65072
            ? (c < 64830
              ? c == 44011
              : (c <= 64831 || (c >= 65040 && c <= 65049)))
            : (c <= 65106 || (c < 65123
              ? (c >= 65108 && c <= 65121)
              : (c <= 65123 || c == 65128))))))
        : (c <= 65131 || (c < 65373
          ? (c < 65311
            ? (c < 65292
              ? (c < 65285
                ? (c >= 65281 && c <= 65283)
                : c <= 65290)
              : (c <= 65295 || (c >= 65306 && c <= 65307)))
            : (c <= 65312 || (c < 65343
              ? (c >= 65339 && c <= 65341)
              : (c <= 65343 || c == 65371))))
          : (c <= 65373 || (c < 66512
            ? (c < 65792
              ? (c >= 65375 && c <= 65381)
              : (c <= 65794 || c == 66463))
            : (c <= 66512 || (c < 67671
              ? c == 66927
              : (c <= 67671 || c == 67871))))))))))));
}

static inline bool aux_sym__punctuation_token1_character_set_2(int32_t c) {
  return (c < 7360
    ? (c < 2416
      ? (c < 1417
        ? (c < 161
          ? (c < '\\'
            ? (c < ','
              ? (c < '%'
                ? (c >= '!' && c <= '"')
                : c <= '*')
              : (c <= ';' || c == '?'))
            : (c <= ']' || (c < '{'
              ? c == '_'
              : (c <= '{' || c == '}'))))
          : (c <= 161 || (c < 191
            ? (c < 182
              ? (c < 171
                ? c == 167
                : c <= 171)
              : (c <= 183 || c == 187))
            : (c <= 191 || (c < 903
              ? c == 894
              : (c <= 903 || (c >= 1370 && c <= 1375)))))))
        : (c <= 1418 || (c < 1565
          ? (c < 1523
            ? (c < 1475
              ? (c < 1472
                ? c == 1470
                : c <= 1472)
              : (c <= 1475 || c == 1478))
            : (c <= 1524 || (c < 1548
              ? (c >= 1545 && c <= 1546)
              : (c <= 1549 || c == 1563))))
          : (c <= 1567 || (c < 2039
            ? (c < 1748
              ? (c >= 1642 && c <= 1645)
              : (c <= 1748 || (c >= 1792 && c <= 1805)))
            : (c <= 2041 || (c < 2142
              ? (c >= 2096 && c <= 2110)
              : (c <= 2142 || (c >= 2404 && c <= 2405)))))))))
      : (c <= 2416 || (c < 5120
        ? (c < 3844
          ? (c < 3204
            ? (c < 2800
              ? (c < 2678
                ? c == 2557
                : c <= 2678)
              : (c <= 2800 || c == 3191))
            : (c <= 3204 || (c < 3663
              ? c == 3572
              : (c <= 3663 || (c >= 3674 && c <= 3675)))))
          : (c <= 3858 || (c < 4057
            ? (c < 3973
              ? (c < 3898
                ? c == 3860
                : c <= 3901)
              : (c <= 3973 || (c >= 4048 && c <= 4052)))
            : (c <= 4058 || (c < 4347
              ? (c >= 4170 && c <= 4175)
              : (c <= 4347 || (c >= 4960 && c <= 4968)))))))
        : (c <= 5120 || (c < 6686
          ? (c < 6100
            ? (c < 5867
              ? (c < 5787
                ? c == 5742
                : c <= 5788)
              : (c <= 5869 || (c >= 5941 && c <= 5942)))
            : (c <= 6102 || (c < 6144
              ? (c >= 6104 && c <= 6106)
              : (c <= 6154 || (c >= 6468 && c <= 6469)))))
          : (c <= 6687 || (c < 7037
            ? (c < 6824
              ? (c >= 6816 && c <= 6822)
              : (c <= 6829 || (c >= 7002 && c <= 7008)))
            : (c <= 7038 || (c < 7227
              ? (c >= 7164 && c <= 7167)
              : (c <= 7231 || (c >= 7294 && c <= 7295)))))))))))
    : (c <= 7367 || (c < 43214
      ? (c < 11632
        ? (c < 9001
          ? (c < 8275
            ? (c < 8240
              ? (c < 8208
                ? c == 7379
                : c <= 8231)
              : (c <= 8259 || (c >= 8261 && c <= 8273)))
            : (c <= 8286 || (c < 8333
              ? (c >= 8317 && c <= 8318)
              : (c <= 8334 || (c >= 8968 && c <= 8971)))))
          : (c <= 9002 || (c < 10712
            ? (c < 10214
              ? (c < 10181
                ? (c >= 10088 && c <= 10101)
                : c <= 10182)
              : (c <= 10223 || (c >= 10627 && c <= 10648)))
            : (c <= 10715 || (c < 11513
              ? (c >= 10748 && c <= 10749)
              : (c <= 11516 || (c >= 11518 && c <= 11519)))))))
        : (c <= 11632 || (c < 12448
          ? (c < 12296
            ? (c < 11858
              ? (c < 11824
                ? (c >= 11776 && c <= 11822)
                : c <= 11855)
              : (c <= 11869 || (c >= 12289 && c <= 12291)))
            : (c <= 12305 || (c < 12336
              ? (c >= 12308 && c <= 12319)
              : (c <= 12336 || c == 12349))))
          : (c <= 12448 || (c < 42611
            ? (c < 42238
              ? c == 12539
              : (c <= 42239 || (c >= 42509 && c <= 42511)))
            : (c <= 42611 || (c < 42738
              ? c == 42622
              : (c <= 42743 || (c >= 43124 && c <= 43127)))))))))
      : (c <= 43215 || (c < 65130
        ? (c < 43760
          ? (c < 43457
            ? (c < 43310
              ? (c < 43260
                ? (c >= 43256 && c <= 43258)
                : c <= 43260)
              : (c <= 43311 || c == 43359))
            : (c <= 43469 || (c < 43612
              ? (c >= 43486 && c <= 43487)
              : (c <= 43615 || (c >= 43742 && c <= 43743)))))
          : (c <= 43761 || (c < 65072
            ? (c < 64830
              ? c == 44011
              : (c <= 64831 || (c >= 65040 && c <= 65049)))
            : (c <= 65106 || (c < 65123
              ? (c >= 65108 && c <= 65121)
              : (c <= 65123 || c == 65128))))))
        : (c <= 65131 || (c < 65373
          ? (c < 65311
            ? (c < 65292
              ? (c < 65285
                ? (c >= 65281 && c <= 65283)
                : c <= 65290)
              : (c <= 65295 || (c >= 65306 && c <= 65307)))
            : (c <= 65312 || (c < 65343
              ? (c >= 65339 && c <= 65341)
              : (c <= 65343 || c == 65371))))
          : (c <= 65373 || (c < 66512
            ? (c < 65792
              ? (c >= 65375 && c <= 65381)
              : (c <= 65794 || c == 66463))
            : (c <= 66512 || (c < 67671
              ? c == 66927
              : (c <= 67671 || c == 67871))))))))))));
}

static inline bool aux_sym__punctuation_token1_character_set_3(int32_t c) {
  return (c < 7360
    ? (c < 2416
      ? (c < 1417
        ? (c < 161
          ? (c < '['
            ? (c < ','
              ? (c < '%'
                ? (c >= '!' && c <= '"')
                : c <= '*')
              : (c <= ';' || c == '?'))
            : (c <= ']' || (c < '{'
              ? c == '_'
              : (c <= '{' || c == '}'))))
          : (c <= 161 || (c < 191
            ? (c < 182
              ? (c < 171
                ? c == 167
                : c <= 171)
              : (c <= 183 || c == 187))
            : (c <= 191 || (c < 903
              ? c == 894
              : (c <= 903 || (c >= 1370 && c <= 1375)))))))
        : (c <= 1418 || (c < 1565
          ? (c < 1523
            ? (c < 1475
              ? (c < 1472
                ? c == 1470
                : c <= 1472)
              : (c <= 1475 || c == 1478))
            : (c <= 1524 || (c < 1548
              ? (c >= 1545 && c <= 1546)
              : (c <= 1549 || c == 1563))))
          : (c <= 1567 || (c < 2039
            ? (c < 1748
              ? (c >= 1642 && c <= 1645)
              : (c <= 1748 || (c >= 1792 && c <= 1805)))
            : (c <= 2041 || (c < 2142
              ? (c >= 2096 && c <= 2110)
              : (c <= 2142 || (c >= 2404 && c <= 2405)))))))))
      : (c <= 2416 || (c < 5120
        ? (c < 3844
          ? (c < 3204
            ? (c < 2800
              ? (c < 2678
                ? c == 2557
                : c <= 2678)
              : (c <= 2800 || c == 3191))
            : (c <= 3204 || (c < 3663
              ? c == 3572
              : (c <= 3663 || (c >= 3674 && c <= 3675)))))
          : (c <= 3858 || (c < 4057
            ? (c < 3973
              ? (c < 3898
                ? c == 3860
                : c <= 3901)
              : (c <= 3973 || (c >= 4048 && c <= 4052)))
            : (c <= 4058 || (c < 4347
              ? (c >= 4170 && c <= 4175)
              : (c <= 4347 || (c >= 4960 && c <= 4968)))))))
        : (c <= 5120 || (c < 6686
          ? (c < 6100
            ? (c < 5867
              ? (c < 5787
                ? c == 5742
                : c <= 5788)
              : (c <= 5869 || (c >= 5941 && c <= 5942)))
            : (c <= 6102 || (c < 6144
              ? (c >= 6104 && c <= 6106)
              : (c <= 6154 || (c >= 6468 && c <= 6469)))))
          : (c <= 6687 || (c < 7037
            ? (c < 6824
              ? (c >= 6816 && c <= 6822)
              : (c <= 6829 || (c >= 7002 && c <= 7008)))
            : (c <= 7038 || (c < 7227
              ? (c >= 7164 && c <= 7167)
              : (c <= 7231 || (c >= 7294 && c <= 7295)))))))))))
    : (c <= 7367 || (c < 43214
      ? (c < 11632
        ? (c < 9001
          ? (c < 8275
            ? (c < 8240
              ? (c < 8208
                ? c == 7379
                : c <= 8231)
              : (c <= 8259 || (c >= 8261 && c <= 8273)))
            : (c <= 8286 || (c < 8333
              ? (c >= 8317 && c <= 8318)
              : (c <= 8334 || (c >= 8968 && c <= 8971)))))
          : (c <= 9002 || (c < 10712
            ? (c < 10214
              ? (c < 10181
                ? (c >= 10088 && c <= 10101)
                : c <= 10182)
              : (c <= 10223 || (c >= 10627 && c <= 10648)))
            : (c <= 10715 || (c < 11513
              ? (c >= 10748 && c <= 10749)
              : (c <= 11516 || (c >= 11518 && c <= 11519)))))))
        : (c <= 11632 || (c < 12448
          ? (c < 12296
            ? (c < 11858
              ? (c < 11824
                ? (c >= 11776 && c <= 11822)
                : c <= 11855)
              : (c <= 11869 || (c >= 12289 && c <= 12291)))
            : (c <= 12305 || (c < 12336
              ? (c >= 12308 && c <= 12319)
              : (c <= 12336 || c == 12349))))
          : (c <= 12448 || (c < 42611
            ? (c < 42238
              ? c == 12539
              : (c <= 42239 || (c >= 42509 && c <= 42511)))
            : (c <= 42611 || (c < 42738
              ? c == 42622
              : (c <= 42743 || (c >= 43124 && c <= 43127)))))))))
      : (c <= 43215 || (c < 65130
        ? (c < 43760
          ? (c < 43457
            ? (c < 43310
              ? (c < 43260
                ? (c >= 43256 && c <= 43258)
                : c <= 43260)
              : (c <= 43311 || c == 43359))
            : (c <= 43469 || (c < 43612
              ? (c >= 43486 && c <= 43487)
              : (c <= 43615 || (c >= 43742 && c <= 43743)))))
          : (c <= 43761 || (c < 65072
            ? (c < 64830
              ? c == 44011
              : (c <= 64831 || (c >= 65040 && c <= 65049)))
            : (c <= 65106 || (c < 65123
              ? (c >= 65108 && c <= 65121)
              : (c <= 65123 || c == 65128))))))
        : (c <= 65131 || (c < 65373
          ? (c < 65311
            ? (c < 65292
              ? (c < 65285
                ? (c >= 65281 && c <= 65283)
                : c <= 65290)
              : (c <= 65295 || (c >= 65306 && c <= 65307)))
            : (c <= 65312 || (c < 65343
              ? (c >= 65339 && c <= 65341)
              : (c <= 65343 || c == 65371))))
          : (c <= 65373 || (c < 66512
            ? (c < 65792
              ? (c >= 65375 && c <= 65381)
              : (c <= 65794 || c == 66463))
            : (c <= 66512 || (c < 67671
              ? c == 66927
              : (c <= 67671 || c == 67871))))))))))));
}

static inline bool aux_sym__punctuation_token1_character_set_4(int32_t c) {
  return (c < 7360
    ? (c < 2416
      ? (c < 1417
        ? (c < 161
          ? (c < '['
            ? (c < ','
              ? (c < '&'
                ? (c >= '!' && c <= '#')
                : c <= '*')
              : (c <= ';' || (c >= '?' && c <= '@')))
            : (c <= ']' || (c < '{'
              ? c == '_'
              : (c <= '{' || c == '}'))))
          : (c <= 161 || (c < 191
            ? (c < 182
              ? (c < 171
                ? c == 167
                : c <= 171)
              : (c <= 183 || c == 187))
            : (c <= 191 || (c < 903
              ? c == 894
              : (c <= 903 || (c >= 1370 && c <= 1375)))))))
        : (c <= 1418 || (c < 1565
          ? (c < 1523
            ? (c < 1475
              ? (c < 1472
                ? c == 1470
                : c <= 1472)
              : (c <= 1475 || c == 1478))
            : (c <= 1524 || (c < 1548
              ? (c >= 1545 && c <= 1546)
              : (c <= 1549 || c == 1563))))
          : (c <= 1567 || (c < 2039
            ? (c < 1748
              ? (c >= 1642 && c <= 1645)
              : (c <= 1748 || (c >= 1792 && c <= 1805)))
            : (c <= 2041 || (c < 2142
              ? (c >= 2096 && c <= 2110)
              : (c <= 2142 || (c >= 2404 && c <= 2405)))))))))
      : (c <= 2416 || (c < 5120
        ? (c < 3844
          ? (c < 3204
            ? (c < 2800
              ? (c < 2678
                ? c == 2557
                : c <= 2678)
              : (c <= 2800 || c == 3191))
            : (c <= 3204 || (c < 3663
              ? c == 3572
              : (c <= 3663 || (c >= 3674 && c <= 3675)))))
          : (c <= 3858 || (c < 4057
            ? (c < 3973
              ? (c < 3898
                ? c == 3860
                : c <= 3901)
              : (c <= 3973 || (c >= 4048 && c <= 4052)))
            : (c <= 4058 || (c < 4347
              ? (c >= 4170 && c <= 4175)
              : (c <= 4347 || (c >= 4960 && c <= 4968)))))))
        : (c <= 5120 || (c < 6686
          ? (c < 6100
            ? (c < 5867
              ? (c < 5787
                ? c == 5742
                : c <= 5788)
              : (c <= 5869 || (c >= 5941 && c <= 5942)))
            : (c <= 6102 || (c < 6144
              ? (c >= 6104 && c <= 6106)
              : (c <= 6154 || (c >= 6468 && c <= 6469)))))
          : (c <= 6687 || (c < 7037
            ? (c < 6824
              ? (c >= 6816 && c <= 6822)
              : (c <= 6829 || (c >= 7002 && c <= 7008)))
            : (c <= 7038 || (c < 7227
              ? (c >= 7164 && c <= 7167)
              : (c <= 7231 || (c >= 7294 && c <= 7295)))))))))))
    : (c <= 7367 || (c < 43214
      ? (c < 11632
        ? (c < 9001
          ? (c < 8275
            ? (c < 8240
              ? (c < 8208
                ? c == 7379
                : c <= 8231)
              : (c <= 8259 || (c >= 8261 && c <= 8273)))
            : (c <= 8286 || (c < 8333
              ? (c >= 8317 && c <= 8318)
              : (c <= 8334 || (c >= 8968 && c <= 8971)))))
          : (c <= 9002 || (c < 10712
            ? (c < 10214
              ? (c < 10181
                ? (c >= 10088 && c <= 10101)
                : c <= 10182)
              : (c <= 10223 || (c >= 10627 && c <= 10648)))
            : (c <= 10715 || (c < 11513
              ? (c >= 10748 && c <= 10749)
              : (c <= 11516 || (c >= 11518 && c <= 11519)))))))
        : (c <= 11632 || (c < 12448
          ? (c < 12296
            ? (c < 11858
              ? (c < 11824
                ? (c >= 11776 && c <= 11822)
                : c <= 11855)
              : (c <= 11869 || (c >= 12289 && c <= 12291)))
            : (c <= 12305 || (c < 12336
              ? (c >= 12308 && c <= 12319)
              : (c <= 12336 || c == 12349))))
          : (c <= 12448 || (c < 42611
            ? (c < 42238
              ? c == 12539
              : (c <= 42239 || (c >= 42509 && c <= 42511)))
            : (c <= 42611 || (c < 42738
              ? c == 42622
              : (c <= 42743 || (c >= 43124 && c <= 43127)))))))))
      : (c <= 43215 || (c < 65130
        ? (c < 43760
          ? (c < 43457
            ? (c < 43310
              ? (c < 43260
                ? (c >= 43256 && c <= 43258)
                : c <= 43260)
              : (c <= 43311 || c == 43359))
            : (c <= 43469 || (c < 43612
              ? (c >= 43486 && c <= 43487)
              : (c <= 43615 || (c >= 43742 && c <= 43743)))))
          : (c <= 43761 || (c < 65072
            ? (c < 64830
              ? c == 44011
              : (c <= 64831 || (c >= 65040 && c <= 65049)))
            : (c <= 65106 || (c < 65123
              ? (c >= 65108 && c <= 65121)
              : (c <= 65123 || c == 65128))))))
        : (c <= 65131 || (c < 65373
          ? (c < 65311
            ? (c < 65292
              ? (c < 65285
                ? (c >= 65281 && c <= 65283)
                : c <= 65290)
              : (c <= 65295 || (c >= 65306 && c <= 65307)))
            : (c <= 65312 || (c < 65343
              ? (c >= 65339 && c <= 65341)
              : (c <= 65343 || c == 65371))))
          : (c <= 65373 || (c < 66512
            ? (c < 65792
              ? (c >= 65375 && c <= 65381)
              : (c <= 65794 || c == 66463))
            : (c <= 66512 || (c < 67671
              ? c == 66927
              : (c <= 67671 || c == 67871))))))))))));
}

static inline bool aux_sym__punctuation_token1_character_set_5(int32_t c) {
  return (c < 7360
    ? (c < 2416
      ? (c < 1417
        ? (c < 161
          ? (c < '['
            ? (c < ','
              ? (c < '%'
                ? (c >= '!' && c <= '#')
                : c <= '*')
              : (c <= ';' || (c >= '?' && c <= '@')))
            : (c <= ']' || (c < '{'
              ? c == '_'
              : (c <= '{' || c == '}'))))
          : (c <= 161 || (c < 191
            ? (c < 182
              ? (c < 171
                ? c == 167
                : c <= 171)
              : (c <= 183 || c == 187))
            : (c <= 191 || (c < 903
              ? c == 894
              : (c <= 903 || (c >= 1370 && c <= 1375)))))))
        : (c <= 1418 || (c < 1565
          ? (c < 1523
            ? (c < 1475
              ? (c < 1472
                ? c == 1470
                : c <= 1472)
              : (c <= 1475 || c == 1478))
            : (c <= 1524 || (c < 1548
              ? (c >= 1545 && c <= 1546)
              : (c <= 1549 || c == 1563))))
          : (c <= 1567 || (c < 2039
            ? (c < 1748
              ? (c >= 1642 && c <= 1645)
              : (c <= 1748 || (c >= 1792 && c <= 1805)))
            : (c <= 2041 || (c < 2142
              ? (c >= 2096 && c <= 2110)
              : (c <= 2142 || (c >= 2404 && c <= 2405)))))))))
      : (c <= 2416 || (c < 5120
        ? (c < 3844
          ? (c < 3204
            ? (c < 2800
              ? (c < 2678
                ? c == 2557
                : c <= 2678)
              : (c <= 2800 || c == 3191))
            : (c <= 3204 || (c < 3663
              ? c == 3572
              : (c <= 3663 || (c >= 3674 && c <= 3675)))))
          : (c <= 3858 || (c < 4057
            ? (c < 3973
              ? (c < 3898
                ? c == 3860
                : c <= 3901)
              : (c <= 3973 || (c >= 4048 && c <= 4052)))
            : (c <= 4058 || (c < 4347
              ? (c >= 4170 && c <= 4175)
              : (c <= 4347 || (c >= 4960 && c <= 4968)))))))
        : (c <= 5120 || (c < 6686
          ? (c < 6100
            ? (c < 5867
              ? (c < 5787
                ? c == 5742
                : c <= 5788)
              : (c <= 5869 || (c >= 5941 && c <= 5942)))
            : (c <= 6102 || (c < 6144
              ? (c >= 6104 && c <= 6106)
              : (c <= 6154 || (c >= 6468 && c <= 6469)))))
          : (c <= 6687 || (c < 7037
            ? (c < 6824
              ? (c >= 6816 && c <= 6822)
              : (c <= 6829 || (c >= 7002 && c <= 7008)))
            : (c <= 7038 || (c < 7227
              ? (c >= 7164 && c <= 7167)
              : (c <= 7231 || (c >= 7294 && c <= 7295)))))))))))
    : (c <= 7367 || (c < 43214
      ? (c < 11632
        ? (c < 9001
          ? (c < 8275
            ? (c < 8240
              ? (c < 8208
                ? c == 7379
                : c <= 8231)
              : (c <= 8259 || (c >= 8261 && c <= 8273)))
            : (c <= 8286 || (c < 8333
              ? (c >= 8317 && c <= 8318)
              : (c <= 8334 || (c >= 8968 && c <= 8971)))))
          : (c <= 9002 || (c < 10712
            ? (c < 10214
              ? (c < 10181
                ? (c >= 10088 && c <= 10101)
                : c <= 10182)
              : (c <= 10223 || (c >= 10627 && c <= 10648)))
            : (c <= 10715 || (c < 11513
              ? (c >= 10748 && c <= 10749)
              : (c <= 11516 || (c >= 11518 && c <= 11519)))))))
        : (c <= 11632 || (c < 12448
          ? (c < 12296
            ? (c < 11858
              ? (c < 11824
                ? (c >= 11776 && c <= 11822)
                : c <= 11855)
              : (c <= 11869 || (c >= 12289 && c <= 12291)))
            : (c <= 12305 || (c < 12336
              ? (c >= 12308 && c <= 12319)
              : (c <= 12336 || c == 12349))))
          : (c <= 12448 || (c < 42611
            ? (c < 42238
              ? c == 12539
              : (c <= 42239 || (c >= 42509 && c <= 42511)))
            : (c <= 42611 || (c < 42738
              ? c == 42622
              : (c <= 42743 || (c >= 43124 && c <= 43127)))))))))
      : (c <= 43215 || (c < 65130
        ? (c < 43760
          ? (c < 43457
            ? (c < 43310
              ? (c < 43260
                ? (c >= 43256 && c <= 43258)
                : c <= 43260)
              : (c <= 43311 || c == 43359))
            : (c <= 43469 || (c < 43612
              ? (c >= 43486 && c <= 43487)
              : (c <= 43615 || (c >= 43742 && c <= 43743)))))
          : (c <= 43761 || (c < 65072
            ? (c < 64830
              ? c == 44011
              : (c <= 64831 || (c >= 65040 && c <= 65049)))
            : (c <= 65106 || (c < 65123
              ? (c >= 65108 && c <= 65121)
              : (c <= 65123 || c == 65128))))))
        : (c <= 65131 || (c < 65373
          ? (c < 65311
            ? (c < 65292
              ? (c < 65285
                ? (c >= 65281 && c <= 65283)
                : c <= 65290)
              : (c <= 65295 || (c >= 65306 && c <= 65307)))
            : (c <= 65312 || (c < 65343
              ? (c >= 65339 && c <= 65341)
              : (c <= 65343 || c == 65371))))
          : (c <= 65373 || (c < 66512
            ? (c < 65792
              ? (c >= 65375 && c <= 65381)
              : (c <= 65794 || c == 66463))
            : (c <= 66512 || (c < 67671
              ? c == 66927
              : (c <= 67671 || c == 67871))))))))))));
}

static inline bool aux_sym__unreserved_symbol_token1_character_set_1(int32_t c) {
  return (c < 8489
    ? (c < 3199
      ? (c < 900
        ? (c < 215
          ? (c < 172
            ? (c < '|'
              ? (c < '^'
                ? (c >= '$' && c <= '=')
                : c <= '`')
              : (c <= '|' || (c >= 162 && c <= 169)))
            : (c <= 172 || (c < 180
              ? (c >= 174 && c <= 177)
              : (c <= 180 || c == 184))))
          : (c <= 215 || (c < 741
            ? (c < 706
              ? c == 247
              : (c <= 709 || (c >= 722 && c <= 735)))
            : (c <= 747 || (c < 751
              ? c == 749
              : (c <= 767 || c == 885))))))
        : (c <= 901 || (c < 2038
          ? (c < 1542
            ? (c < 1154
              ? c == 1014
              : (c <= 1154 || (c >= 1421 && c <= 1423)))
            : (c <= 1551 || (c < 1769
              ? c == 1758
              : (c <= 1769 || (c >= 1789 && c <= 1790)))))
          : (c <= 2038 || (c < 2554
            ? (c < 2184
              ? (c >= 2046 && c <= 2047)
              : (c <= 2184 || (c >= 2546 && c <= 2547)))
            : (c <= 2555 || (c < 2928
              ? c == 2801
              : (c <= 2928 || (c >= 3059 && c <= 3066)))))))))
      : (c <= 3199 || (c < 8141
        ? (c < 5008
          ? (c < 3892
            ? (c < 3647
              ? (c < 3449
                ? c == 3407
                : c <= 3449)
              : (c <= 3647 || (c >= 3841 && c <= 3871)))
            : (c <= 3896 || (c < 4046
              ? (c >= 4030 && c <= 4044)
              : (c <= 4056 || (c >= 4254 && c <= 4255)))))
          : (c <= 5017 || (c < 6622
            ? (c < 6107
              ? c == 5741
              : (c <= 6107 || c == 6464))
            : (c <= 6655 || (c < 8125
              ? (c >= 7009 && c <= 7036)
              : (c <= 8125 || (c >= 8127 && c <= 8129)))))))
        : (c <= 8143 || (c < 8448
          ? (c < 8260
            ? (c < 8173
              ? (c >= 8157 && c <= 8159)
              : (c <= 8175 || (c >= 8189 && c <= 8190)))
            : (c <= 8274 || (c < 8330
              ? (c >= 8314 && c <= 8316)
              : (c <= 8332 || (c >= 8352 && c <= 8384)))))
          : (c <= 8449 || (c < 8470
            ? (c < 8456
              ? (c >= 8451 && c <= 8454)
              : (c <= 8457 || c == 8468))
            : (c <= 8472 || (c < 8485
              ? (c >= 8478 && c <= 8483)
              : (c <= 8485 || c == 8487))))))))))
    : (c <= 8489 || (c < 12992
      ? (c < 11931
        ? (c < 9372
          ? (c < 8527
            ? (c < 8512
              ? (c < 8506
                ? c == 8494
                : c <= 8507)
              : (c <= 8516 || (c >= 8522 && c <= 8525)))
            : (c <= 8527 || (c < 8592
              ? (c >= 8586 && c <= 8587)
              : (c <= 9254 || (c >= 9280 && c <= 9290)))))
          : (c <= 9449 || (c < 11159
            ? (c < 10132
              ? (c >= 9472 && c <= 10087)
              : (c <= 11123 || (c >= 11126 && c <= 11157)))
            : (c <= 11263 || (c < 11856
              ? (c >= 11493 && c <= 11498)
              : (c <= 11857 || (c >= 11904 && c <= 11929)))))))
        : (c <= 12019 || (c < 12688
          ? (c < 12306
            ? (c < 12272
              ? (c >= 12032 && c <= 12245)
              : (c <= 12283 || c == 12292))
            : (c <= 12320 || (c < 12350
              ? (c >= 12342 && c <= 12343)
              : (c <= 12351 || (c >= 12443 && c <= 12444)))))
          : (c <= 12689 || (c < 12842
            ? (c < 12736
              ? (c >= 12694 && c <= 12703)
              : (c <= 12771 || (c >= 12800 && c <= 12830)))
            : (c <= 12871 || (c < 12896
              ? c == 12880
              : (c <= 12927 || (c >= 12938 && c <= 12976)))))))))
      : (c <= 13311 || (c < 65122
        ? (c < 43639
          ? (c < 42784
            ? (c < 42128
              ? (c >= 19904 && c <= 19967)
              : (c <= 42182 || (c >= 42752 && c <= 42774)))
            : (c <= 42785 || (c < 43048
              ? (c >= 42889 && c <= 42890)
              : (c <= 43051 || (c >= 43062 && c <= 43065)))))
          : (c <= 43641 || (c < 64434
            ? (c < 43882
              ? c == 43867
              : (c <= 43883 || c == 64297))
            : (c <= 64450 || (c < 64975
              ? (c >= 64832 && c <= 64847)
              : (c <= 64975 || (c >= 65020 && c <= 65023)))))))
        : (c <= 65126 || (c < 65532
          ? (c < 65342
            ? (c < 65284
              ? c == 65129
              : (c <= 65291 || (c >= 65308 && c <= 65310)))
            : (c <= 65344 || (c < 65504
              ? (c >= 65372 && c <= 65374)
              : (c <= 65510 || (c >= 65512 && c <= 65518)))))
          : (c <= 65533 || (c < 65936
            ? (c < 65913
              ? (c >= 65847 && c <= 65855)
              : (c <= 65929 || (c >= 65932 && c <= 65934)))
            : (c <= 65948 || (c < 66000
              ? c == 65952
              : (c <= 66044 || (c >= 67703 && c <= 67704)))))))))))));
}

static inline bool aux_sym__unreserved_symbol_token1_character_set_2(int32_t c) {
  return (c < 8489
    ? (c < 3199
      ? (c < 900
        ? (c < 215
          ? (c < 172
            ? (c < '|'
              ? (c < '^'
                ? (c >= '$' && c <= '>')
                : c <= '`')
              : (c <= '|' || (c >= 162 && c <= 169)))
            : (c <= 172 || (c < 180
              ? (c >= 174 && c <= 177)
              : (c <= 180 || c == 184))))
          : (c <= 215 || (c < 741
            ? (c < 706
              ? c == 247
              : (c <= 709 || (c >= 722 && c <= 735)))
            : (c <= 747 || (c < 751
              ? c == 749
              : (c <= 767 || c == 885))))))
        : (c <= 901 || (c < 2038
          ? (c < 1542
            ? (c < 1154
              ? c == 1014
              : (c <= 1154 || (c >= 1421 && c <= 1423)))
            : (c <= 1551 || (c < 1769
              ? c == 1758
              : (c <= 1769 || (c >= 1789 && c <= 1790)))))
          : (c <= 2038 || (c < 2554
            ? (c < 2184
              ? (c >= 2046 && c <= 2047)
              : (c <= 2184 || (c >= 2546 && c <= 2547)))
            : (c <= 2555 || (c < 2928
              ? c == 2801
              : (c <= 2928 || (c >= 3059 && c <= 3066)))))))))
      : (c <= 3199 || (c < 8141
        ? (c < 5008
          ? (c < 3892
            ? (c < 3647
              ? (c < 3449
                ? c == 3407
                : c <= 3449)
              : (c <= 3647 || (c >= 3841 && c <= 3871)))
            : (c <= 3896 || (c < 4046
              ? (c >= 4030 && c <= 4044)
              : (c <= 4056 || (c >= 4254 && c <= 4255)))))
          : (c <= 5017 || (c < 6622
            ? (c < 6107
              ? c == 5741
              : (c <= 6107 || c == 6464))
            : (c <= 6655 || (c < 8125
              ? (c >= 7009 && c <= 7036)
              : (c <= 8125 || (c >= 8127 && c <= 8129)))))))
        : (c <= 8143 || (c < 8448
          ? (c < 8260
            ? (c < 8173
              ? (c >= 8157 && c <= 8159)
              : (c <= 8175 || (c >= 8189 && c <= 8190)))
            : (c <= 8274 || (c < 8330
              ? (c >= 8314 && c <= 8316)
              : (c <= 8332 || (c >= 8352 && c <= 8384)))))
          : (c <= 8449 || (c < 8470
            ? (c < 8456
              ? (c >= 8451 && c <= 8454)
              : (c <= 8457 || c == 8468))
            : (c <= 8472 || (c < 8485
              ? (c >= 8478 && c <= 8483)
              : (c <= 8485 || c == 8487))))))))))
    : (c <= 8489 || (c < 12992
      ? (c < 11931
        ? (c < 9372
          ? (c < 8527
            ? (c < 8512
              ? (c < 8506
                ? c == 8494
                : c <= 8507)
              : (c <= 8516 || (c >= 8522 && c <= 8525)))
            : (c <= 8527 || (c < 8592
              ? (c >= 8586 && c <= 8587)
              : (c <= 9254 || (c >= 9280 && c <= 9290)))))
          : (c <= 9449 || (c < 11159
            ? (c < 10132
              ? (c >= 9472 && c <= 10087)
              : (c <= 11123 || (c >= 11126 && c <= 11157)))
            : (c <= 11263 || (c < 11856
              ? (c >= 11493 && c <= 11498)
              : (c <= 11857 || (c >= 11904 && c <= 11929)))))))
        : (c <= 12019 || (c < 12688
          ? (c < 12306
            ? (c < 12272
              ? (c >= 12032 && c <= 12245)
              : (c <= 12283 || c == 12292))
            : (c <= 12320 || (c < 12350
              ? (c >= 12342 && c <= 12343)
              : (c <= 12351 || (c >= 12443 && c <= 12444)))))
          : (c <= 12689 || (c < 12842
            ? (c < 12736
              ? (c >= 12694 && c <= 12703)
              : (c <= 12771 || (c >= 12800 && c <= 12830)))
            : (c <= 12871 || (c < 12896
              ? c == 12880
              : (c <= 12927 || (c >= 12938 && c <= 12976)))))))))
      : (c <= 13311 || (c < 65122
        ? (c < 43639
          ? (c < 42784
            ? (c < 42128
              ? (c >= 19904 && c <= 19967)
              : (c <= 42182 || (c >= 42752 && c <= 42774)))
            : (c <= 42785 || (c < 43048
              ? (c >= 42889 && c <= 42890)
              : (c <= 43051 || (c >= 43062 && c <= 43065)))))
          : (c <= 43641 || (c < 64434
            ? (c < 43882
              ? c == 43867
              : (c <= 43883 || c == 64297))
            : (c <= 64450 || (c < 64975
              ? (c >= 64832 && c <= 64847)
              : (c <= 64975 || (c >= 65020 && c <= 65023)))))))
        : (c <= 65126 || (c < 65532
          ? (c < 65342
            ? (c < 65284
              ? c == 65129
              : (c <= 65291 || (c >= 65308 && c <= 65310)))
            : (c <= 65344 || (c < 65504
              ? (c >= 65372 && c <= 65374)
              : (c <= 65510 || (c >= 65512 && c <= 65518)))))
          : (c <= 65533 || (c < 65936
            ? (c < 65913
              ? (c >= 65847 && c <= 65855)
              : (c <= 65929 || (c >= 65932 && c <= 65934)))
            : (c <= 65948 || (c < 66000
              ? c == 65952
              : (c <= 66044 || (c >= 67703 && c <= 67704)))))))))))));
}

static inline bool aux_sym__unreserved_symbol_token1_character_set_3(int32_t c) {
  return (c < 8494
    ? (c < 3199
      ? (c < 885
        ? (c < 174
          ? (c < '`'
            ? (c < '<'
              ? (c < '+'
                ? c == '$'
                : c <= '+')
              : (c <= '>' || c == '^'))
            : (c <= '`' || (c < 168
              ? (c < 162
                ? (c >= '|' && c <= '~')
                : c <= 166)
              : (c <= 169 || c == 172))))
          : (c <= 177 || (c < 706
            ? (c < 215
              ? (c < 184
                ? c == 180
                : c <= 184)
              : (c <= 215 || c == 247))
            : (c <= 709 || (c < 749
              ? (c < 741
                ? (c >= 722 && c <= 735)
                : c <= 747)
              : (c <= 749 || (c >= 751 && c <= 767)))))))
        : (c <= 885 || (c < 1789
          ? (c < 1542
            ? (c < 1154
              ? (c < 1014
                ? (c >= 900 && c <= 901)
                : c <= 1014)
              : (c <= 1154 || (c >= 1421 && c <= 1423)))
            : (c <= 1544 || (c < 1758
              ? (c < 1550
                ? c == 1547
                : c <= 1551)
              : (c <= 1758 || c == 1769))))
          : (c <= 1790 || (c < 2554
            ? (c < 2184
              ? (c < 2046
                ? c == 2038
                : c <= 2047)
              : (c <= 2184 || (c >= 2546 && c <= 2547)))
            : (c <= 2555 || (c < 2928
              ? c == 2801
              : (c <= 2928 || (c >= 3059 && c <= 3066)))))))))
      : (c <= 3199 || (c < 8127
        ? (c < 4053
          ? (c < 3859
            ? (c < 3647
              ? (c < 3449
                ? c == 3407
                : c <= 3449)
              : (c <= 3647 || (c >= 3841 && c <= 3843)))
            : (c <= 3859 || (c < 4030
              ? (c < 3892
                ? (c >= 3861 && c <= 3871)
                : c <= 3896)
              : (c <= 4044 || (c >= 4046 && c <= 4047)))))
          : (c <= 4056 || (c < 6464
            ? (c < 5741
              ? (c < 5008
                ? (c >= 4254 && c <= 4255)
                : c <= 5017)
              : (c <= 5741 || c == 6107))
            : (c <= 6464 || (c < 7009
              ? (c >= 6622 && c <= 6655)
              : (c <= 7036 || c == 8125))))))
        : (c <= 8129 || (c < 8448
          ? (c < 8260
            ? (c < 8173
              ? (c < 8157
                ? (c >= 8141 && c <= 8143)
                : c <= 8159)
              : (c <= 8175 || (c >= 8189 && c <= 8190)))
            : (c <= 8260 || (c < 8330
              ? (c < 8314
                ? c == 8274
                : c <= 8316)
              : (c <= 8332 || (c >= 8352 && c <= 8384)))))
          : (c <= 8449 || (c < 8478
            ? (c < 8468
              ? (c < 8456
                ? (c >= 8451 && c <= 8454)
                : c <= 8457)
              : (c <= 8468 || (c >= 8470 && c <= 8472)))
            : (c <= 8483 || (c < 8487
              ? c == 8485
              : (c <= 8487 || c == 8489))))))))))
    : (c <= 8494 || (c < 12896
      ? (c < 11159
        ? (c < 9372
          ? (c < 8586
            ? (c < 8522
              ? (c < 8512
                ? (c >= 8506 && c <= 8507)
                : c <= 8516)
              : (c <= 8525 || c == 8527))
            : (c <= 8587 || (c < 9003
              ? (c < 8972
                ? (c >= 8592 && c <= 8967)
                : c <= 9000)
              : (c <= 9254 || (c >= 9280 && c <= 9290)))))
          : (c <= 9449 || (c < 10649
            ? (c < 10183
              ? (c < 10132
                ? (c >= 9472 && c <= 10087)
                : c <= 10180)
              : (c <= 10213 || (c >= 10224 && c <= 10626)))
            : (c <= 10711 || (c < 10750
              ? (c >= 10716 && c <= 10747)
              : (c <= 11123 || (c >= 11126 && c <= 11157)))))))
        : (c <= 11263 || (c < 12342
          ? (c < 12032
            ? (c < 11904
              ? (c < 11856
                ? (c >= 11493 && c <= 11498)
                : c <= 11857)
              : (c <= 11929 || (c >= 11931 && c <= 12019)))
            : (c <= 12245 || (c < 12306
              ? (c < 12292
                ? (c >= 12272 && c <= 12283)
                : c <= 12292)
              : (c <= 12307 || c == 12320))))
          : (c <= 12343 || (c < 12736
            ? (c < 12688
              ? (c < 12443
                ? (c >= 12350 && c <= 12351)
                : c <= 12444)
              : (c <= 12689 || (c >= 12694 && c <= 12703)))
            : (c <= 12771 || (c < 12842
              ? (c >= 12800 && c <= 12830)
              : (c <= 12871 || c == 12880))))))))
      : (c <= 12927 || (c < 65124
        ? (c < 43639
          ? (c < 42752
            ? (c < 19904
              ? (c < 12992
                ? (c >= 12938 && c <= 12976)
                : c <= 13311)
              : (c <= 19967 || (c >= 42128 && c <= 42182)))
            : (c <= 42774 || (c < 43048
              ? (c < 42889
                ? (c >= 42784 && c <= 42785)
                : c <= 42890)
              : (c <= 43051 || (c >= 43062 && c <= 43065)))))
          : (c <= 43641 || (c < 64832
            ? (c < 64297
              ? (c < 43882
                ? c == 43867
                : c <= 43883)
              : (c <= 64297 || (c >= 64434 && c <= 64450)))
            : (c <= 64847 || (c < 65020
              ? c == 64975
              : (c <= 65023 || c == 65122))))))
        : (c <= 65126 || (c < 65512
          ? (c < 65342
            ? (c < 65291
              ? (c < 65284
                ? c == 65129
                : c <= 65284)
              : (c <= 65291 || (c >= 65308 && c <= 65310)))
            : (c <= 65342 || (c < 65374
              ? (c < 65372
                ? c == 65344
                : c <= 65372)
              : (c <= 65374 || (c >= 65504 && c <= 65510)))))
          : (c <= 65518 || (c < 65936
            ? (c < 65913
              ? (c < 65847
                ? (c >= 65532 && c <= 65533)
                : c <= 65855)
              : (c <= 65929 || (c >= 65932 && c <= 65934)))
            : (c <= 65948 || (c < 66000
              ? c == 65952
              : (c <= 66044 || (c >= 67703 && c <= 67704)))))))))))));
}

static inline bool aux_sym__unreserved_symbol_token1_character_set_4(int32_t c) {
  return (c < 8489
    ? (c < 3199
      ? (c < 900
        ? (c < 215
          ? (c < 172
            ? (c < '|'
              ? (c < '^'
                ? (c >= '$' && c <= '>')
                : c <= '`')
              : (c <= '~' || (c >= 162 && c <= 169)))
            : (c <= 172 || (c < 180
              ? (c >= 174 && c <= 177)
              : (c <= 180 || c == 184))))
          : (c <= 215 || (c < 741
            ? (c < 706
              ? c == 247
              : (c <= 709 || (c >= 722 && c <= 735)))
            : (c <= 747 || (c < 751
              ? c == 749
              : (c <= 767 || c == 885))))))
        : (c <= 901 || (c < 2038
          ? (c < 1542
            ? (c < 1154
              ? c == 1014
              : (c <= 1154 || (c >= 1421 && c <= 1423)))
            : (c <= 1551 || (c < 1769
              ? c == 1758
              : (c <= 1769 || (c >= 1789 && c <= 1790)))))
          : (c <= 2038 || (c < 2554
            ? (c < 2184
              ? (c >= 2046 && c <= 2047)
              : (c <= 2184 || (c >= 2546 && c <= 2547)))
            : (c <= 2555 || (c < 2928
              ? c == 2801
              : (c <= 2928 || (c >= 3059 && c <= 3066)))))))))
      : (c <= 3199 || (c < 8141
        ? (c < 5008
          ? (c < 3892
            ? (c < 3647
              ? (c < 3449
                ? c == 3407
                : c <= 3449)
              : (c <= 3647 || (c >= 3841 && c <= 3871)))
            : (c <= 3896 || (c < 4046
              ? (c >= 4030 && c <= 4044)
              : (c <= 4056 || (c >= 4254 && c <= 4255)))))
          : (c <= 5017 || (c < 6622
            ? (c < 6107
              ? c == 5741
              : (c <= 6107 || c == 6464))
            : (c <= 6655 || (c < 8125
              ? (c >= 7009 && c <= 7036)
              : (c <= 8125 || (c >= 8127 && c <= 8129)))))))
        : (c <= 8143 || (c < 8448
          ? (c < 8260
            ? (c < 8173
              ? (c >= 8157 && c <= 8159)
              : (c <= 8175 || (c >= 8189 && c <= 8190)))
            : (c <= 8274 || (c < 8330
              ? (c >= 8314 && c <= 8316)
              : (c <= 8332 || (c >= 8352 && c <= 8384)))))
          : (c <= 8449 || (c < 8470
            ? (c < 8456
              ? (c >= 8451 && c <= 8454)
              : (c <= 8457 || c == 8468))
            : (c <= 8472 || (c < 8485
              ? (c >= 8478 && c <= 8483)
              : (c <= 8485 || c == 8487))))))))))
    : (c <= 8489 || (c < 12992
      ? (c < 11931
        ? (c < 9372
          ? (c < 8527
            ? (c < 8512
              ? (c < 8506
                ? c == 8494
                : c <= 8507)
              : (c <= 8516 || (c >= 8522 && c <= 8525)))
            : (c <= 8527 || (c < 8592
              ? (c >= 8586 && c <= 8587)
              : (c <= 9254 || (c >= 9280 && c <= 9290)))))
          : (c <= 9449 || (c < 11159
            ? (c < 10132
              ? (c >= 9472 && c <= 10087)
              : (c <= 11123 || (c >= 11126 && c <= 11157)))
            : (c <= 11263 || (c < 11856
              ? (c >= 11493 && c <= 11498)
              : (c <= 11857 || (c >= 11904 && c <= 11929)))))))
        : (c <= 12019 || (c < 12688
          ? (c < 12306
            ? (c < 12272
              ? (c >= 12032 && c <= 12245)
              : (c <= 12283 || c == 12292))
            : (c <= 12320 || (c < 12350
              ? (c >= 12342 && c <= 12343)
              : (c <= 12351 || (c >= 12443 && c <= 12444)))))
          : (c <= 12689 || (c < 12842
            ? (c < 12736
              ? (c >= 12694 && c <= 12703)
              : (c <= 12771 || (c >= 12800 && c <= 12830)))
            : (c <= 12871 || (c < 12896
              ? c == 12880
              : (c <= 12927 || (c >= 12938 && c <= 12976)))))))))
      : (c <= 13311 || (c < 65122
        ? (c < 43639
          ? (c < 42784
            ? (c < 42128
              ? (c >= 19904 && c <= 19967)
              : (c <= 42182 || (c >= 42752 && c <= 42774)))
            : (c <= 42785 || (c < 43048
              ? (c >= 42889 && c <= 42890)
              : (c <= 43051 || (c >= 43062 && c <= 43065)))))
          : (c <= 43641 || (c < 64434
            ? (c < 43882
              ? c == 43867
              : (c <= 43883 || c == 64297))
            : (c <= 64450 || (c < 64975
              ? (c >= 64832 && c <= 64847)
              : (c <= 64975 || (c >= 65020 && c <= 65023)))))))
        : (c <= 65126 || (c < 65532
          ? (c < 65342
            ? (c < 65284
              ? c == 65129
              : (c <= 65291 || (c >= 65308 && c <= 65310)))
            : (c <= 65344 || (c < 65504
              ? (c >= 65372 && c <= 65374)
              : (c <= 65510 || (c >= 65512 && c <= 65518)))))
          : (c <= 65533 || (c < 65936
            ? (c < 65913
              ? (c >= 65847 && c <= 65855)
              : (c <= 65929 || (c >= 65932 && c <= 65934)))
            : (c <= 65948 || (c < 66000
              ? c == 65952
              : (c <= 66044 || (c >= 67703 && c <= 67704)))))))))))));
}

static inline bool aux_sym__unreserved_symbol_token1_character_set_5(int32_t c) {
  return (c < 8489
    ? (c < 3059
      ? (c < 751
        ? (c < 172
          ? (c < '`'
            ? (c < '<'
              ? (c < '+'
                ? c == '$'
                : c <= '+')
              : (c <= '>' || c == '^'))
            : (c <= '`' || (c < 162
              ? (c < '~'
                ? c == '|'
                : c <= '~')
              : (c <= 166 || (c >= 168 && c <= 169)))))
          : (c <= 172 || (c < 247
            ? (c < 184
              ? (c < 180
                ? (c >= 174 && c <= 177)
                : c <= 180)
              : (c <= 184 || c == 215))
            : (c <= 247 || (c < 741
              ? (c < 722
                ? (c >= 706 && c <= 709)
                : c <= 735)
              : (c <= 747 || c == 749))))))
        : (c <= 767 || (c < 1769
          ? (c < 1421
            ? (c < 1014
              ? (c < 900
                ? c == 885
                : c <= 901)
              : (c <= 1014 || c == 1154))
            : (c <= 1423 || (c < 1550
              ? (c < 1547
                ? (c >= 1542 && c <= 1544)
                : c <= 1547)
              : (c <= 1551 || c == 1758))))
          : (c <= 1769 || (c < 2546
            ? (c < 2046
              ? (c < 2038
                ? (c >= 1789 && c <= 1790)
                : c <= 2038)
              : (c <= 2047 || c == 2184))
            : (c <= 2547 || (c < 2801
              ? (c >= 2554 && c <= 2555)
              : (c <= 2801 || c == 2928))))))))
      : (c <= 3066 || (c < 8125
        ? (c < 4046
          ? (c < 3841
            ? (c < 3449
              ? (c < 3407
                ? c == 3199
                : c <= 3407)
              : (c <= 3449 || c == 3647))
            : (c <= 3843 || (c < 3892
              ? (c < 3861
                ? c == 3859
                : c <= 3871)
              : (c <= 3896 || (c >= 4030 && c <= 4044)))))
          : (c <= 4047 || (c < 6107
            ? (c < 5008
              ? (c < 4254
                ? (c >= 4053 && c <= 4056)
                : c <= 4255)
              : (c <= 5017 || c == 5741))
            : (c <= 6107 || (c < 6622
              ? c == 6464
              : (c <= 6655 || (c >= 7009 && c <= 7036)))))))
        : (c <= 8125 || (c < 8352
          ? (c < 8189
            ? (c < 8157
              ? (c < 8141
                ? (c >= 8127 && c <= 8129)
                : c <= 8143)
              : (c <= 8159 || (c >= 8173 && c <= 8175)))
            : (c <= 8190 || (c < 8314
              ? (c < 8274
                ? c == 8260
                : c <= 8274)
              : (c <= 8316 || (c >= 8330 && c <= 8332)))))
          : (c <= 8384 || (c < 8470
            ? (c < 8456
              ? (c < 8451
                ? (c >= 8448 && c <= 8449)
                : c <= 8454)
              : (c <= 8457 || c == 8468))
            : (c <= 8472 || (c < 8485
              ? (c >= 8478 && c <= 8483)
              : (c <= 8485 || c == 8487))))))))))
    : (c <= 8489 || (c < 12896
      ? (c < 11159
        ? (c < 9280
          ? (c < 8527
            ? (c < 8512
              ? (c < 8506
                ? c == 8494
                : c <= 8507)
              : (c <= 8516 || (c >= 8522 && c <= 8525)))
            : (c <= 8527 || (c < 8972
              ? (c < 8592
                ? (c >= 8586 && c <= 8587)
                : c <= 8967)
              : (c <= 9000 || (c >= 9003 && c <= 9254)))))
          : (c <= 9290 || (c < 10224
            ? (c < 10132
              ? (c < 9472
                ? (c >= 9372 && c <= 9449)
                : c <= 10087)
              : (c <= 10180 || (c >= 10183 && c <= 10213)))
            : (c <= 10626 || (c < 10750
              ? (c < 10716
                ? (c >= 10649 && c <= 10711)
                : c <= 10747)
              : (c <= 11123 || (c >= 11126 && c <= 11157)))))))
        : (c <= 11263 || (c < 12342
          ? (c < 12032
            ? (c < 11904
              ? (c < 11856
                ? (c >= 11493 && c <= 11498)
                : c <= 11857)
              : (c <= 11929 || (c >= 11931 && c <= 12019)))
            : (c <= 12245 || (c < 12306
              ? (c < 12292
                ? (c >= 12272 && c <= 12283)
                : c <= 12292)
              : (c <= 12307 || c == 12320))))
          : (c <= 12343 || (c < 12736
            ? (c < 12688
              ? (c < 12443
                ? (c >= 12350 && c <= 12351)
                : c <= 12444)
              : (c <= 12689 || (c >= 12694 && c <= 12703)))
            : (c <= 12771 || (c < 12842
              ? (c >= 12800 && c <= 12830)
              : (c <= 12871 || c == 12880))))))))
      : (c <= 12927 || (c < 65124
        ? (c < 43639
          ? (c < 42752
            ? (c < 19904
              ? (c < 12992
                ? (c >= 12938 && c <= 12976)
                : c <= 13311)
              : (c <= 19967 || (c >= 42128 && c <= 42182)))
            : (c <= 42774 || (c < 43048
              ? (c < 42889
                ? (c >= 42784 && c <= 42785)
                : c <= 42890)
              : (c <= 43051 || (c >= 43062 && c <= 43065)))))
          : (c <= 43641 || (c < 64832
            ? (c < 64297
              ? (c < 43882
                ? c == 43867
                : c <= 43883)
              : (c <= 64297 || (c >= 64434 && c <= 64450)))
            : (c <= 64847 || (c < 65020
              ? c == 64975
              : (c <= 65023 || c == 65122))))))
        : (c <= 65126 || (c < 65512
          ? (c < 65342
            ? (c < 65291
              ? (c < 65284
                ? c == 65129
                : c <= 65284)
              : (c <= 65291 || (c >= 65308 && c <= 65310)))
            : (c <= 65342 || (c < 65374
              ? (c < 65372
                ? c == 65344
                : c <= 65372)
              : (c <= 65374 || (c >= 65504 && c <= 65510)))))
          : (c <= 65518 || (c < 65936
            ? (c < 65913
              ? (c < 65847
                ? (c >= 65532 && c <= 65533)
                : c <= 65855)
              : (c <= 65929 || (c >= 65932 && c <= 65934)))
            : (c <= 65948 || (c < 66000
              ? c == 65952
              : (c <= 66044 || (c >= 67703 && c <= 67704)))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (!eof && (lookahead == 0)) ADVANCE(10);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '%') ADVANCE(24);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(18);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '~') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (aux_sym__punctuation_token1_character_set_1(lookahead)) ADVANCE(34);
      if (aux_sym__alphabetic_token2_character_set_1(lookahead)) ADVANCE(30);
      if (aux_sym__unreserved_symbol_token1_character_set_1(lookahead)) ADVANCE(36);
      if (aux_sym__alphabetic_token1_character_set_1(lookahead)) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (eof) ADVANCE(9);
      if (!eof && (lookahead == 0)) ADVANCE(10);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '~') ADVANCE(23);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(31);
      if (aux_sym__punctuation_token1_character_set_2(lookahead)) ADVANCE(34);
      if (aux_sym__alphabetic_token2_character_set_1(lookahead)) ADVANCE(30);
      if (aux_sym__unreserved_symbol_token1_character_set_1(lookahead)) ADVANCE(36);
      if (aux_sym__alphabetic_token1_character_set_2(lookahead)) ADVANCE(29);
      END_STATE();
    case 4:
      if (eof) ADVANCE(9);
      if (!eof && (lookahead == 0)) ADVANCE(10);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '~') ADVANCE(23);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(31);
      if (aux_sym__punctuation_token1_character_set_3(lookahead)) ADVANCE(34);
      if (aux_sym__alphabetic_token2_character_set_1(lookahead)) ADVANCE(30);
      if (aux_sym__unreserved_symbol_token1_character_set_2(lookahead)) ADVANCE(36);
      if (aux_sym__alphabetic_token1_character_set_2(lookahead)) ADVANCE(29);
      END_STATE();
    case 5:
      if (eof) ADVANCE(9);
      if (!eof && (lookahead == 0)) ADVANCE(10);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '%') ADVANCE(24);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(21);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(31);
      if (aux_sym__alphabetic_token2_character_set_2(lookahead)) ADVANCE(30);
      if (aux_sym__unreserved_symbol_token1_character_set_3(lookahead)) ADVANCE(36);
      if (aux_sym__alphabetic_token1_character_set_3(lookahead)) ADVANCE(29);
      END_STATE();
    case 6:
      if (eof) ADVANCE(9);
      if (!eof && (lookahead == 0)) ADVANCE(10);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '%') ADVANCE(24);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '0') ADVANCE(28);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(31);
      if (aux_sym__punctuation_token1_character_set_4(lookahead)) ADVANCE(34);
      if (aux_sym__alphabetic_token2_character_set_1(lookahead)) ADVANCE(30);
      if (aux_sym__unreserved_symbol_token1_character_set_4(lookahead)) ADVANCE(36);
      if (aux_sym__alphabetic_token1_character_set_2(lookahead)) ADVANCE(29);
      END_STATE();
    case 7:
      if (eof) ADVANCE(9);
      if (!eof && (lookahead == 0)) ADVANCE(10);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '0') ADVANCE(28);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(31);
      if (aux_sym__punctuation_token1_character_set_5(lookahead)) ADVANCE(34);
      if (aux_sym__alphabetic_token2_character_set_1(lookahead)) ADVANCE(30);
      if (aux_sym__unreserved_symbol_token1_character_set_4(lookahead)) ADVANCE(36);
      if (aux_sym__alphabetic_token1_character_set_2(lookahead)) ADVANCE(29);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (!eof && (lookahead == 0)) ADVANCE(10);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ']') ADVANCE(18);
      if (lookahead == '{') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (aux_sym__alphabetic_token2_character_set_2(lookahead)) ADVANCE(30);
      if (aux_sym__unreserved_symbol_token1_character_set_5(lookahead)) ADVANCE(36);
      if (aux_sym__alphabetic_token1_character_set_4(lookahead)) ADVANCE(29);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_recipe_token1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACK_DASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(2);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__non_zero_digit);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__zero);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__alphabetic_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__alphabetic_token2);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__whitespace_token2);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__punctuation_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__punctuation_token1);
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__unreserved_symbol_token1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__unreserved_symbol_token1);
      if (lookahead == '>') ADVANCE(11);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 4, .external_lex_state = 1},
  [5] = {.lex_state = 4, .external_lex_state = 1},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 4, .external_lex_state = 1},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7, .external_lex_state = 1},
  [34] = {.lex_state = 5, .external_lex_state = 1},
  [35] = {.lex_state = 7, .external_lex_state = 1},
  [36] = {.lex_state = 5, .external_lex_state = 1},
  [37] = {.lex_state = 5, .external_lex_state = 1},
  [38] = {.lex_state = 6, .external_lex_state = 1},
  [39] = {.lex_state = 7, .external_lex_state = 1},
  [40] = {.lex_state = 7, .external_lex_state = 1},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5, .external_lex_state = 1},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 7, .external_lex_state = 1},
  [45] = {.lex_state = 4, .external_lex_state = 1},
  [46] = {.lex_state = 4, .external_lex_state = 1},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 4, .external_lex_state = 1},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 4, .external_lex_state = 1},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 4, .external_lex_state = 1},
  [53] = {.lex_state = 4, .external_lex_state = 1},
  [54] = {.lex_state = 4, .external_lex_state = 1},
  [55] = {.lex_state = 4, .external_lex_state = 1},
  [56] = {.lex_state = 6, .external_lex_state = 1},
  [57] = {.lex_state = 4, .external_lex_state = 1},
  [58] = {.lex_state = 4, .external_lex_state = 1},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 4, .external_lex_state = 1},
  [63] = {.lex_state = 4, .external_lex_state = 1},
  [64] = {.lex_state = 4, .external_lex_state = 1},
  [65] = {.lex_state = 4, .external_lex_state = 1},
  [66] = {.lex_state = 4, .external_lex_state = 1},
  [67] = {.lex_state = 4, .external_lex_state = 1},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 8, .external_lex_state = 1},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 8, .external_lex_state = 1},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 5, .external_lex_state = 1},
  [80] = {.lex_state = 5, .external_lex_state = 1},
  [81] = {.lex_state = 7, .external_lex_state = 1},
  [82] = {.lex_state = 7, .external_lex_state = 1},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 7, .external_lex_state = 1},
  [86] = {.lex_state = 7, .external_lex_state = 1},
  [87] = {.lex_state = 5, .external_lex_state = 1},
  [88] = {.lex_state = 5, .external_lex_state = 1},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5, .external_lex_state = 1},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 5, .external_lex_state = 1},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5, .external_lex_state = 1},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 5, .external_lex_state = 1},
  [120] = {.lex_state = 5, .external_lex_state = 1},
  [121] = {.lex_state = 5, .external_lex_state = 1},
  [122] = {.lex_state = 5, .external_lex_state = 1},
  [123] = {.lex_state = 5, .external_lex_state = 1},
  [124] = {.lex_state = 5, .external_lex_state = 1},
  [125] = {.lex_state = 5, .external_lex_state = 1},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 0, .external_lex_state = 1},
  [156] = {.lex_state = 0, .external_lex_state = 1},
  [157] = {.lex_state = 0, .external_lex_state = 1},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 0, .external_lex_state = 1},
  [160] = {.lex_state = 0, .external_lex_state = 1},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 0, .external_lex_state = 1},
  [163] = {.lex_state = 0, .external_lex_state = 1},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 0, .external_lex_state = 1},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0, .external_lex_state = 1},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 14},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0, .external_lex_state = 1},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 8},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_recipe_token1] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACK_DASH] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__non_zero_digit] = ACTIONS(1),
    [sym__zero] = ACTIONS(1),
    [aux_sym__alphabetic_token1] = ACTIONS(1),
    [aux_sym__alphabetic_token2] = ACTIONS(1),
    [aux_sym__punctuation_token1] = ACTIONS(1),
    [aux_sym__unreserved_symbol_token1] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_recipe] = STATE(177),
    [sym__line] = STATE(171),
    [sym_metadata] = STATE(171),
    [sym_step] = STATE(171),
    [sym_comment] = STATE(171),
    [sym_block_comment] = STATE(171),
    [sym_ingredient] = STATE(4),
    [sym_cookware] = STATE(4),
    [sym_timer] = STATE(4),
    [aux_sym__text_item] = STATE(4),
    [sym__digit] = STATE(4),
    [sym__alphabetic] = STATE(4),
    [sym__whitespace] = STATE(4),
    [sym__punctuation] = STATE(4),
    [sym__symbol] = STATE(4),
    [aux_sym_recipe_repeat1] = STATE(3),
    [aux_sym_step_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_recipe_token1] = ACTIONS(5),
    [anon_sym_GT_GT] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_LBRACK_DASH] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [sym__non_zero_digit] = ACTIONS(19),
    [sym__zero] = ACTIONS(19),
    [aux_sym__alphabetic_token1] = ACTIONS(19),
    [aux_sym__alphabetic_token2] = ACTIONS(19),
    [aux_sym__whitespace_token1] = ACTIONS(19),
    [aux_sym__whitespace_token2] = ACTIONS(19),
    [aux_sym__punctuation_token1] = ACTIONS(19),
    [aux_sym__unreserved_symbol_token1] = ACTIONS(19),
  },
  [2] = {
    [sym__line] = STATE(180),
    [sym_metadata] = STATE(180),
    [sym_step] = STATE(180),
    [sym_comment] = STATE(180),
    [sym_block_comment] = STATE(180),
    [sym_ingredient] = STATE(4),
    [sym_cookware] = STATE(4),
    [sym_timer] = STATE(4),
    [aux_sym__text_item] = STATE(4),
    [sym__digit] = STATE(4),
    [sym__alphabetic] = STATE(4),
    [sym__whitespace] = STATE(4),
    [sym__punctuation] = STATE(4),
    [sym__symbol] = STATE(4),
    [aux_sym_recipe_repeat1] = STATE(2),
    [aux_sym_step_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(21),
    [aux_sym_recipe_token1] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(28),
    [anon_sym_LBRACK_DASH] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(34),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(40),
    [sym__non_zero_digit] = ACTIONS(43),
    [sym__zero] = ACTIONS(43),
    [aux_sym__alphabetic_token1] = ACTIONS(43),
    [aux_sym__alphabetic_token2] = ACTIONS(43),
    [aux_sym__whitespace_token1] = ACTIONS(43),
    [aux_sym__whitespace_token2] = ACTIONS(43),
    [aux_sym__punctuation_token1] = ACTIONS(43),
    [aux_sym__unreserved_symbol_token1] = ACTIONS(43),
  },
  [3] = {
    [sym__line] = STATE(162),
    [sym_metadata] = STATE(162),
    [sym_step] = STATE(162),
    [sym_comment] = STATE(162),
    [sym_block_comment] = STATE(162),
    [sym_ingredient] = STATE(4),
    [sym_cookware] = STATE(4),
    [sym_timer] = STATE(4),
    [aux_sym__text_item] = STATE(4),
    [sym__digit] = STATE(4),
    [sym__alphabetic] = STATE(4),
    [sym__whitespace] = STATE(4),
    [sym__punctuation] = STATE(4),
    [sym__symbol] = STATE(4),
    [aux_sym_recipe_repeat1] = STATE(2),
    [aux_sym_step_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(46),
    [aux_sym_recipe_token1] = ACTIONS(48),
    [anon_sym_GT_GT] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_LBRACK_DASH] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [sym__non_zero_digit] = ACTIONS(19),
    [sym__zero] = ACTIONS(19),
    [aux_sym__alphabetic_token1] = ACTIONS(19),
    [aux_sym__alphabetic_token2] = ACTIONS(19),
    [aux_sym__whitespace_token1] = ACTIONS(19),
    [aux_sym__whitespace_token2] = ACTIONS(19),
    [aux_sym__punctuation_token1] = ACTIONS(19),
    [aux_sym__unreserved_symbol_token1] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_TILDE,
    ACTIONS(52), 1,
      aux_sym_recipe_token1,
    ACTIONS(50), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(54), 9,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
    STATE(5), 10,
      sym_ingredient,
      sym_cookware,
      sym_timer,
      aux_sym__text_item,
      sym__digit,
      sym__alphabetic,
      sym__whitespace,
      sym__punctuation,
      sym__symbol,
      aux_sym_step_repeat1,
  [40] = 7,
    ACTIONS(58), 1,
      aux_sym_recipe_token1,
    ACTIONS(63), 1,
      anon_sym_AT,
    ACTIONS(66), 1,
      anon_sym_POUND,
    ACTIONS(69), 1,
      anon_sym_TILDE,
    ACTIONS(56), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(60), 9,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
    STATE(5), 10,
      sym_ingredient,
      sym_cookware,
      sym_timer,
      aux_sym__text_item,
      sym__digit,
      sym__alphabetic,
      sym__whitespace,
      sym__punctuation,
      sym__symbol,
      aux_sym_step_repeat1,
  [80] = 14,
    ACTIONS(74), 1,
      sym__non_zero_digit,
    ACTIONS(76), 1,
      sym__zero,
    ACTIONS(80), 1,
      aux_sym__unreserved_symbol_token1,
    STATE(37), 1,
      aux_sym__multiword_repeat1,
    STATE(105), 1,
      sym__integer,
    STATE(110), 1,
      sym_quantity,
    STATE(125), 1,
      sym__multiword,
    STATE(155), 1,
      sym_amount,
    STATE(78), 2,
      aux_sym__word,
      sym__unreserved_symbol,
    STATE(86), 2,
      sym__digit,
      sym__alphabetic,
    ACTIONS(72), 3,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
    ACTIONS(78), 3,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
    STATE(124), 3,
      sym__number,
      sym__fractional,
      sym__decimal,
    STATE(33), 4,
      aux_sym__text_item,
      sym__whitespace,
      sym__punctuation,
      sym__symbol,
  [134] = 14,
    ACTIONS(74), 1,
      sym__non_zero_digit,
    ACTIONS(76), 1,
      sym__zero,
    ACTIONS(80), 1,
      aux_sym__unreserved_symbol_token1,
    STATE(37), 1,
      aux_sym__multiword_repeat1,
    STATE(105), 1,
      sym__integer,
    STATE(121), 1,
      sym_quantity,
    STATE(125), 1,
      sym__multiword,
    STATE(155), 1,
      sym_amount,
    STATE(78), 2,
      aux_sym__word,
      sym__unreserved_symbol,
    STATE(86), 2,
      sym__digit,
      sym__alphabetic,
    ACTIONS(72), 3,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
    ACTIONS(78), 3,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
    STATE(124), 3,
      sym__number,
      sym__fractional,
      sym__decimal,
    STATE(33), 4,
      aux_sym__text_item,
      sym__whitespace,
      sym__punctuation,
      sym__symbol,
  [188] = 12,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    STATE(60), 1,
      aux_sym__multiword_repeat1,
    STATE(108), 1,
      sym__integer,
    STATE(126), 1,
      sym_quantity,
    STATE(138), 1,
      sym_amount,
    ACTIONS(90), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(18), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(72), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(154), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [236] = 12,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym__multiword_repeat1,
    STATE(108), 1,
      sym__integer,
    STATE(126), 1,
      sym_quantity,
    STATE(146), 1,
      sym_amount,
    ACTIONS(94), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(11), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(72), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(154), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [284] = 12,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym__multiword_repeat1,
    STATE(108), 1,
      sym__integer,
    STATE(126), 1,
      sym_quantity,
    STATE(146), 1,
      sym_amount,
    ACTIONS(96), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(98), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(72), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(154), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [332] = 12,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym__multiword_repeat1,
    STATE(108), 1,
      sym__integer,
    STATE(126), 1,
      sym_quantity,
    STATE(143), 1,
      sym_amount,
    ACTIONS(100), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(91), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(72), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(154), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [380] = 12,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym__multiword_repeat1,
    STATE(108), 1,
      sym__integer,
    STATE(126), 1,
      sym_quantity,
    STATE(137), 1,
      sym_amount,
    ACTIONS(104), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(101), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(72), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(154), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [428] = 12,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    STATE(60), 1,
      aux_sym__multiword_repeat1,
    STATE(108), 1,
      sym__integer,
    STATE(126), 1,
      sym_quantity,
    STATE(138), 1,
      sym_amount,
    ACTIONS(106), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(95), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(72), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(154), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [476] = 12,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym__multiword_repeat1,
    STATE(108), 1,
      sym__integer,
    STATE(126), 1,
      sym_quantity,
    STATE(135), 1,
      sym_amount,
    ACTIONS(110), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(12), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(72), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(154), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [524] = 12,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym__multiword_repeat1,
    STATE(108), 1,
      sym__integer,
    STATE(126), 1,
      sym_quantity,
    STATE(127), 1,
      sym_amount,
    ACTIONS(114), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(13), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(72), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(154), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [572] = 12,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym__multiword_repeat1,
    STATE(108), 1,
      sym__integer,
    STATE(126), 1,
      sym_quantity,
    STATE(140), 1,
      sym_amount,
    ACTIONS(118), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(17), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(72), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(154), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [620] = 12,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym__multiword_repeat1,
    STATE(108), 1,
      sym__integer,
    STATE(126), 1,
      sym_quantity,
    STATE(135), 1,
      sym_amount,
    ACTIONS(120), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(96), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(72), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(154), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [668] = 12,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym__multiword_repeat1,
    STATE(108), 1,
      sym__integer,
    STATE(126), 1,
      sym_quantity,
    STATE(149), 1,
      sym_amount,
    ACTIONS(124), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(100), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(72), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(154), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [716] = 12,
    ACTIONS(86), 1,
      sym__non_zero_digit,
    ACTIONS(88), 1,
      sym__zero,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym__multiword_repeat1,
    STATE(108), 1,
      sym__integer,
    STATE(126), 1,
      sym_quantity,
    STATE(136), 1,
      sym_amount,
    ACTIONS(128), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(10), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(82), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    STATE(72), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    STATE(154), 4,
      sym__multiword,
      sym__number,
      sym__fractional,
      sym__decimal,
  [764] = 4,
    ACTIONS(130), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(132), 4,
      aux_sym_recipe_token1,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
    STATE(20), 6,
      aux_sym__text_item,
      sym__digit,
      sym__alphabetic,
      sym__whitespace,
      sym__punctuation,
      sym__symbol,
    ACTIONS(134), 9,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [794] = 8,
    ACTIONS(141), 1,
      aux_sym__punctuation_token1,
    STATE(77), 1,
      aux_sym__multiword_repeat1,
    STATE(156), 1,
      sym_units,
    ACTIONS(139), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(93), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(163), 2,
      sym__multiword,
      sym__punctuation,
    STATE(39), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(137), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [830] = 8,
    ACTIONS(145), 1,
      aux_sym__punctuation_token1,
    STATE(60), 1,
      aux_sym__multiword_repeat1,
    STATE(158), 1,
      sym_units,
    ACTIONS(139), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(93), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(165), 2,
      sym__multiword,
      sym__punctuation,
    STATE(51), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(143), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [866] = 8,
    ACTIONS(141), 1,
      aux_sym__punctuation_token1,
    STATE(77), 1,
      aux_sym__multiword_repeat1,
    STATE(157), 1,
      sym_units,
    ACTIONS(147), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(24), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(163), 2,
      sym__multiword,
      sym__punctuation,
    STATE(39), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(137), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [902] = 8,
    ACTIONS(141), 1,
      aux_sym__punctuation_token1,
    STATE(77), 1,
      aux_sym__multiword_repeat1,
    STATE(166), 1,
      sym_units,
    ACTIONS(139), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(93), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(163), 2,
      sym__multiword,
      sym__punctuation,
    STATE(39), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(137), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [938] = 8,
    ACTIONS(141), 1,
      aux_sym__punctuation_token1,
    STATE(77), 1,
      aux_sym__multiword_repeat1,
    STATE(166), 1,
      sym_units,
    ACTIONS(149), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(26), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(163), 2,
      sym__multiword,
      sym__punctuation,
    STATE(39), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(137), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [974] = 8,
    ACTIONS(141), 1,
      aux_sym__punctuation_token1,
    STATE(77), 1,
      aux_sym__multiword_repeat1,
    STATE(156), 1,
      sym_units,
    ACTIONS(139), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(93), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(163), 2,
      sym__multiword,
      sym__punctuation,
    STATE(39), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(137), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1010] = 8,
    ACTIONS(141), 1,
      aux_sym__punctuation_token1,
    STATE(77), 1,
      aux_sym__multiword_repeat1,
    STATE(166), 1,
      sym_units,
    ACTIONS(151), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(21), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(163), 2,
      sym__multiword,
      sym__punctuation,
    STATE(39), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(137), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1046] = 8,
    ACTIONS(141), 1,
      aux_sym__punctuation_token1,
    STATE(77), 1,
      aux_sym__multiword_repeat1,
    STATE(166), 1,
      sym_units,
    ACTIONS(139), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(93), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(163), 2,
      sym__multiword,
      sym__punctuation,
    STATE(39), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(137), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1082] = 8,
    ACTIONS(145), 1,
      aux_sym__punctuation_token1,
    STATE(60), 1,
      aux_sym__multiword_repeat1,
    STATE(169), 1,
      sym_units,
    ACTIONS(153), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(22), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(165), 2,
      sym__multiword,
      sym__punctuation,
    STATE(51), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(143), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1118] = 8,
    ACTIONS(145), 1,
      aux_sym__punctuation_token1,
    STATE(60), 1,
      aux_sym__multiword_repeat1,
    STATE(164), 1,
      sym_units,
    ACTIONS(155), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(31), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(165), 2,
      sym__multiword,
      sym__punctuation,
    STATE(51), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(143), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1154] = 8,
    ACTIONS(145), 1,
      aux_sym__punctuation_token1,
    STATE(60), 1,
      aux_sym__multiword_repeat1,
    STATE(169), 1,
      sym_units,
    ACTIONS(139), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(93), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(165), 2,
      sym__multiword,
      sym__punctuation,
    STATE(51), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(143), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1190] = 8,
    ACTIONS(141), 1,
      aux_sym__punctuation_token1,
    STATE(77), 1,
      aux_sym__multiword_repeat1,
    STATE(157), 1,
      sym_units,
    ACTIONS(157), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(28), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(163), 2,
      sym__multiword,
      sym__punctuation,
    STATE(39), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(137), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1226] = 4,
    ACTIONS(161), 1,
      aux_sym_recipe_token1,
    ACTIONS(159), 2,
      sym__newline,
      ts_builtin_sym_end,
    STATE(35), 6,
      aux_sym__text_item,
      sym__digit,
      sym__alphabetic,
      sym__whitespace,
      sym__punctuation,
      sym__symbol,
    ACTIONS(163), 9,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1253] = 6,
    ACTIONS(165), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(167), 2,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
    ACTIONS(171), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(80), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(42), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(169), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1284] = 4,
    ACTIONS(132), 1,
      aux_sym_recipe_token1,
    ACTIONS(130), 2,
      sym__newline,
      ts_builtin_sym_end,
    STATE(35), 6,
      aux_sym__text_item,
      sym__digit,
      sym__alphabetic,
      sym__whitespace,
      sym__punctuation,
      sym__symbol,
    ACTIONS(173), 9,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1311] = 5,
    STATE(36), 1,
      aux_sym__multiword_repeat1,
    ACTIONS(176), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(178), 4,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(78), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(180), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1339] = 5,
    STATE(36), 1,
      aux_sym__multiword_repeat1,
    ACTIONS(183), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(185), 4,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(34), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(187), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1367] = 6,
    ACTIONS(189), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(199), 2,
      sym__non_zero_digit,
      sym__zero,
    STATE(87), 2,
      sym__digit,
      aux_sym__integer_repeat1,
    ACTIONS(192), 3,
      aux_sym_recipe_token1,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    ACTIONS(197), 3,
      anon_sym_PERCENT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(195), 5,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1397] = 6,
    ACTIONS(204), 1,
      aux_sym_recipe_token1,
    ACTIONS(202), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(208), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(81), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(44), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(206), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1427] = 6,
    ACTIONS(167), 1,
      aux_sym_recipe_token1,
    ACTIONS(165), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(208), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(81), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(44), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(206), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1457] = 5,
    ACTIONS(167), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
    ACTIONS(212), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(84), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(59), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(210), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1484] = 4,
    ACTIONS(214), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(216), 4,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(42), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(218), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1509] = 2,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 15,
      aux_sym_recipe_token1,
      anon_sym_GT_GT,
      anon_sym_DASH,
      anon_sym_LBRACK_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1530] = 4,
    ACTIONS(214), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(216), 3,
      aux_sym_recipe_token1,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(44), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(221), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1554] = 2,
    ACTIONS(224), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(226), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1574] = 2,
    ACTIONS(228), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(230), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1594] = 5,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(232), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(97), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(59), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(210), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1620] = 2,
    ACTIONS(234), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(236), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1640] = 4,
    STATE(49), 1,
      aux_sym__multiword_repeat1,
    ACTIONS(178), 4,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(72), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(238), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1664] = 2,
    ACTIONS(241), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(243), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1684] = 5,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    ACTIONS(212), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(84), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(59), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(210), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1710] = 2,
    ACTIONS(245), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(247), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1730] = 3,
    ACTIONS(253), 1,
      anon_sym_DASH,
    ACTIONS(249), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(251), 12,
      aux_sym_recipe_token1,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1752] = 2,
    ACTIONS(256), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(258), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1772] = 2,
    ACTIONS(260), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(262), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1792] = 4,
    ACTIONS(189), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(192), 3,
      aux_sym_recipe_token1,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    ACTIONS(197), 3,
      anon_sym_PERCENT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(195), 7,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1816] = 2,
    ACTIONS(264), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(266), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1836] = 2,
    ACTIONS(268), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(270), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1856] = 3,
    STATE(59), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(216), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    ACTIONS(272), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1878] = 4,
    STATE(49), 1,
      aux_sym__multiword_repeat1,
    ACTIONS(185), 4,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(41), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(275), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1902] = 5,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    ACTIONS(232), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(97), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(59), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(210), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [1928] = 2,
    ACTIONS(279), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(281), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1948] = 2,
    ACTIONS(283), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(285), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1968] = 2,
    ACTIONS(287), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(289), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [1988] = 2,
    ACTIONS(291), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(293), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [2008] = 2,
    ACTIONS(295), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(297), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [2028] = 2,
    ACTIONS(299), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(301), 13,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [2048] = 5,
    ACTIONS(192), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    ACTIONS(303), 2,
      sym__non_zero_digit,
      sym__zero,
    STATE(103), 2,
      sym__digit,
      aux_sym__integer_repeat1,
    ACTIONS(195), 4,
      anon_sym_DASH,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
    ACTIONS(197), 4,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      anon_sym_SLASH,
      anon_sym_DOT,
  [2073] = 6,
    ACTIONS(308), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      aux_sym__multiword_repeat1,
    STATE(175), 1,
      sym_name,
    STATE(182), 1,
      sym__multiword,
    STATE(61), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(306), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2100] = 3,
    ACTIONS(312), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(310), 10,
      anon_sym_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      anon_sym_SLASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2121] = 4,
    ACTIONS(232), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(97), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(59), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(210), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2144] = 4,
    ACTIONS(212), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(84), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(59), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(210), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2167] = 6,
    ACTIONS(315), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      aux_sym__multiword_repeat1,
    STATE(182), 1,
      sym__multiword,
    STATE(183), 1,
      sym_name,
    STATE(61), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(306), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2194] = 4,
    STATE(74), 1,
      aux_sym__multiword_repeat1,
    ACTIONS(176), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_recipe_token1,
    STATE(76), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(317), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2217] = 6,
    ACTIONS(320), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      aux_sym__multiword_repeat1,
    STATE(176), 1,
      sym_name,
    STATE(182), 1,
      sym__multiword,
    STATE(61), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(306), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2244] = 4,
    ACTIONS(208), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(81), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(59), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(210), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2267] = 4,
    STATE(74), 1,
      aux_sym__multiword_repeat1,
    ACTIONS(183), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_recipe_token1,
    STATE(40), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(322), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2290] = 4,
    ACTIONS(171), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(80), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    STATE(59), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(210), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2313] = 4,
    ACTIONS(324), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(326), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(79), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(310), 8,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_PERCENT,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2336] = 3,
    ACTIONS(176), 2,
      sym__newline,
      ts_builtin_sym_end,
    STATE(79), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(178), 10,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      anon_sym_PERCENT,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__unreserved_symbol_token1,
  [2357] = 4,
    ACTIONS(176), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(329), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(82), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(178), 7,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2379] = 4,
    ACTIONS(324), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(331), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(82), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(310), 7,
      aux_sym_recipe_token1,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2401] = 4,
    ACTIONS(176), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      aux_sym__multiword_repeat1,
    STATE(71), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(334), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2422] = 2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(178), 10,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__unreserved_symbol_token1,
  [2439] = 3,
    ACTIONS(337), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(339), 2,
      aux_sym_recipe_token1,
      aux_sym__punctuation_token1,
    ACTIONS(341), 8,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__unreserved_symbol_token1,
  [2458] = 3,
    ACTIONS(344), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(346), 2,
      aux_sym_recipe_token1,
      aux_sym__punctuation_token1,
    ACTIONS(348), 8,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
      aux_sym__unreserved_symbol_token1,
  [2477] = 4,
    ACTIONS(351), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(355), 2,
      sym__non_zero_digit,
      sym__zero,
    STATE(88), 2,
      sym__digit,
      aux_sym__integer_repeat1,
    ACTIONS(353), 6,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      anon_sym_SLASH,
      anon_sym_DOT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [2498] = 4,
    ACTIONS(357), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(361), 2,
      sym__non_zero_digit,
      sym__zero,
    STATE(88), 2,
      sym__digit,
      aux_sym__integer_repeat1,
    ACTIONS(359), 6,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      anon_sym_SLASH,
      anon_sym_DOT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [2519] = 4,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      aux_sym__multiword_repeat1,
    STATE(47), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(364), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2540] = 3,
    ACTIONS(192), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    ACTIONS(197), 4,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(195), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2559] = 4,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    ACTIONS(312), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(310), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2579] = 3,
    ACTIONS(368), 1,
      anon_sym_COLON,
    STATE(99), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(370), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2597] = 3,
    ACTIONS(372), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(93), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(310), 7,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__punctuation_token1,
      aux_sym__unreserved_symbol_token1,
  [2615] = 3,
    ACTIONS(375), 1,
      anon_sym_COLON,
    STATE(99), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(370), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2633] = 4,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(312), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(310), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2653] = 4,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(312), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(310), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2673] = 3,
    ACTIONS(377), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(178), 7,
      anon_sym_DASH,
      anon_sym_LBRACE,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2691] = 4,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(312), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(310), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2711] = 3,
    ACTIONS(214), 1,
      anon_sym_COLON,
    STATE(99), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(379), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2729] = 4,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
    ACTIONS(312), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(310), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2749] = 4,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    ACTIONS(312), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(310), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2769] = 4,
    ACTIONS(386), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(388), 2,
      sym__non_zero_digit,
      sym__zero,
    STATE(87), 2,
      sym__digit,
      aux_sym__integer_repeat1,
    ACTIONS(197), 4,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [2788] = 3,
    ACTIONS(390), 2,
      sym__non_zero_digit,
      sym__zero,
    STATE(106), 2,
      sym__digit,
      aux_sym__integer_repeat1,
    ACTIONS(353), 6,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      anon_sym_SLASH,
      anon_sym_DOT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [2805] = 2,
    STATE(92), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(392), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2820] = 6,
    ACTIONS(398), 1,
      anon_sym_SLASH,
    ACTIONS(400), 1,
      anon_sym_DOT,
    ACTIONS(394), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(396), 2,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
    ACTIONS(402), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(132), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [2843] = 3,
    ACTIONS(405), 2,
      sym__non_zero_digit,
      sym__zero,
    STATE(106), 2,
      sym__digit,
      aux_sym__integer_repeat1,
    ACTIONS(359), 6,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      anon_sym_SLASH,
      anon_sym_DOT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [2860] = 2,
    STATE(94), 4,
      aux_sym__word,
      sym__digit,
      sym__alphabetic,
      sym__unreserved_symbol,
    ACTIONS(408), 6,
      anon_sym_DASH,
      sym__non_zero_digit,
      sym__zero,
      aux_sym__alphabetic_token1,
      aux_sym__alphabetic_token2,
      aux_sym__unreserved_symbol_token1,
  [2875] = 5,
    ACTIONS(410), 1,
      anon_sym_SLASH,
    ACTIONS(412), 1,
      anon_sym_DOT,
    ACTIONS(396), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
    ACTIONS(414), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(139), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [2894] = 3,
    ACTIONS(417), 2,
      sym__non_zero_digit,
      sym__zero,
    STATE(103), 2,
      sym__digit,
      aux_sym__integer_repeat1,
    ACTIONS(197), 4,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [2909] = 5,
    ACTIONS(421), 1,
      aux_sym_recipe_token1,
    ACTIONS(423), 1,
      anon_sym_PERCENT,
    ACTIONS(419), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(425), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(129), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [2928] = 5,
    ACTIONS(427), 1,
      sym__non_zero_digit,
    ACTIONS(429), 1,
      sym__zero,
    STATE(123), 1,
      sym__integer,
    ACTIONS(377), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [2946] = 5,
    ACTIONS(431), 1,
      sym__non_zero_digit,
    ACTIONS(433), 1,
      sym__zero,
    STATE(150), 1,
      sym__integer,
    ACTIONS(377), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [2964] = 5,
    ACTIONS(427), 1,
      sym__non_zero_digit,
    ACTIONS(435), 1,
      sym__zero,
    STATE(119), 1,
      sym__integer,
    ACTIONS(377), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [2982] = 5,
    ACTIONS(431), 1,
      sym__non_zero_digit,
    ACTIONS(437), 1,
      sym__zero,
    STATE(152), 1,
      sym__integer,
    ACTIONS(439), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(112), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3000] = 5,
    ACTIONS(431), 1,
      sym__non_zero_digit,
    ACTIONS(437), 1,
      sym__zero,
    STATE(152), 1,
      sym__integer,
    ACTIONS(377), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3018] = 5,
    ACTIONS(427), 1,
      sym__non_zero_digit,
    ACTIONS(441), 1,
      sym__zero,
    STATE(122), 1,
      sym__integer,
    ACTIONS(443), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(111), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3036] = 5,
    ACTIONS(427), 1,
      sym__non_zero_digit,
    ACTIONS(429), 1,
      sym__zero,
    STATE(123), 1,
      sym__integer,
    ACTIONS(445), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(113), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3054] = 5,
    ACTIONS(431), 1,
      sym__non_zero_digit,
    ACTIONS(447), 1,
      sym__zero,
    STATE(151), 1,
      sym__integer,
    ACTIONS(449), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(115), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3072] = 2,
    ACTIONS(451), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(453), 4,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3083] = 2,
    ACTIONS(455), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(457), 4,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3094] = 4,
    ACTIONS(419), 1,
      sym__newline,
    ACTIONS(459), 1,
      anon_sym_PERCENT,
    ACTIONS(461), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(133), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3109] = 2,
    ACTIONS(463), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(465), 4,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3120] = 2,
    ACTIONS(467), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(469), 4,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3131] = 2,
    ACTIONS(471), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(473), 4,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3142] = 2,
    ACTIONS(471), 2,
      sym__newline,
      ts_builtin_sym_end,
    ACTIONS(473), 4,
      aux_sym_recipe_token1,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3153] = 3,
    ACTIONS(475), 1,
      anon_sym_PERCENT,
    STATE(130), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
    ACTIONS(421), 3,
      anon_sym_RBRACE,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3166] = 3,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(477), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(147), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3178] = 3,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3190] = 3,
    ACTIONS(479), 1,
      anon_sym_PERCENT,
    ACTIONS(377), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3202] = 3,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    ACTIONS(377), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3214] = 3,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3226] = 3,
    ACTIONS(483), 1,
      anon_sym_SLASH,
    ACTIONS(377), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3238] = 3,
    ACTIONS(485), 1,
      anon_sym_PERCENT,
    ACTIONS(377), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3250] = 3,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3262] = 3,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(487), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(134), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3274] = 3,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(489), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(144), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3286] = 3,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    ACTIONS(491), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(145), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3298] = 3,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(493), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(148), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3310] = 3,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(377), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3322] = 3,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(497), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(131), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3334] = 3,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3346] = 3,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3358] = 3,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    ACTIONS(503), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(142), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3370] = 3,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3382] = 3,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3394] = 3,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(507), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(128), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3406] = 3,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3418] = 3,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(70), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3430] = 3,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
    ACTIONS(509), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
    STATE(141), 2,
      sym__whitespace,
      aux_sym_ingredient_repeat1,
  [3442] = 1,
    ACTIONS(453), 4,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3449] = 1,
    ACTIONS(465), 4,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3456] = 1,
    ACTIONS(469), 4,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3463] = 1,
    ACTIONS(457), 4,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3470] = 1,
    ACTIONS(473), 4,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3477] = 1,
    ACTIONS(159), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_recipe_token1,
  [3483] = 1,
    ACTIONS(511), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_recipe_token1,
  [3489] = 1,
    ACTIONS(513), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_recipe_token1,
  [3495] = 1,
    ACTIONS(515), 3,
      anon_sym_RBRACE,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3501] = 1,
    ACTIONS(517), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_recipe_token1,
  [3507] = 1,
    ACTIONS(519), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_recipe_token1,
  [3513] = 2,
    STATE(6), 1,
      sym__whitespace,
    ACTIONS(521), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3521] = 3,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
    ACTIONS(525), 1,
      aux_sym_recipe_token1,
    ACTIONS(527), 1,
      sym__newline,
  [3531] = 1,
    ACTIONS(202), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_recipe_token1,
  [3537] = 1,
    ACTIONS(529), 3,
      anon_sym_RBRACE,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3543] = 1,
    ACTIONS(204), 3,
      anon_sym_RBRACE,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3549] = 1,
    ACTIONS(531), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_recipe_token1,
  [3555] = 3,
    ACTIONS(533), 1,
      sym__non_zero_digit,
    ACTIONS(535), 1,
      sym__zero,
    STATE(153), 1,
      sym__integer,
  [3565] = 2,
    STATE(7), 1,
      sym__whitespace,
    ACTIONS(537), 2,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3573] = 1,
    ACTIONS(539), 3,
      anon_sym_RBRACE,
      aux_sym__whitespace_token1,
      aux_sym__whitespace_token2,
  [3579] = 3,
    ACTIONS(541), 1,
      sym__non_zero_digit,
    ACTIONS(543), 1,
      sym__zero,
    STATE(120), 1,
      sym__integer,
  [3589] = 3,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(527), 1,
      sym__newline,
    ACTIONS(545), 1,
      aux_sym_recipe_token1,
  [3599] = 1,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
  [3603] = 1,
    ACTIONS(547), 1,
      anon_sym_RBRACK,
  [3607] = 1,
    ACTIONS(549), 1,
      aux_sym_comment_token1,
  [3611] = 1,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
  [3615] = 1,
    ACTIONS(553), 1,
      anon_sym_LBRACE,
  [3619] = 1,
    ACTIONS(555), 1,
      ts_builtin_sym_end,
  [3623] = 1,
    ACTIONS(557), 1,
      aux_sym_block_comment_token1,
  [3627] = 1,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
  [3631] = 1,
    ACTIONS(527), 1,
      sym__newline,
  [3635] = 1,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
  [3639] = 1,
    ACTIONS(561), 1,
      anon_sym_LBRACE,
  [3643] = 1,
    ACTIONS(563), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 40,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 134,
  [SMALL_STATE(8)] = 188,
  [SMALL_STATE(9)] = 236,
  [SMALL_STATE(10)] = 284,
  [SMALL_STATE(11)] = 332,
  [SMALL_STATE(12)] = 380,
  [SMALL_STATE(13)] = 428,
  [SMALL_STATE(14)] = 476,
  [SMALL_STATE(15)] = 524,
  [SMALL_STATE(16)] = 572,
  [SMALL_STATE(17)] = 620,
  [SMALL_STATE(18)] = 668,
  [SMALL_STATE(19)] = 716,
  [SMALL_STATE(20)] = 764,
  [SMALL_STATE(21)] = 794,
  [SMALL_STATE(22)] = 830,
  [SMALL_STATE(23)] = 866,
  [SMALL_STATE(24)] = 902,
  [SMALL_STATE(25)] = 938,
  [SMALL_STATE(26)] = 974,
  [SMALL_STATE(27)] = 1010,
  [SMALL_STATE(28)] = 1046,
  [SMALL_STATE(29)] = 1082,
  [SMALL_STATE(30)] = 1118,
  [SMALL_STATE(31)] = 1154,
  [SMALL_STATE(32)] = 1190,
  [SMALL_STATE(33)] = 1226,
  [SMALL_STATE(34)] = 1253,
  [SMALL_STATE(35)] = 1284,
  [SMALL_STATE(36)] = 1311,
  [SMALL_STATE(37)] = 1339,
  [SMALL_STATE(38)] = 1367,
  [SMALL_STATE(39)] = 1397,
  [SMALL_STATE(40)] = 1427,
  [SMALL_STATE(41)] = 1457,
  [SMALL_STATE(42)] = 1484,
  [SMALL_STATE(43)] = 1509,
  [SMALL_STATE(44)] = 1530,
  [SMALL_STATE(45)] = 1554,
  [SMALL_STATE(46)] = 1574,
  [SMALL_STATE(47)] = 1594,
  [SMALL_STATE(48)] = 1620,
  [SMALL_STATE(49)] = 1640,
  [SMALL_STATE(50)] = 1664,
  [SMALL_STATE(51)] = 1684,
  [SMALL_STATE(52)] = 1710,
  [SMALL_STATE(53)] = 1730,
  [SMALL_STATE(54)] = 1752,
  [SMALL_STATE(55)] = 1772,
  [SMALL_STATE(56)] = 1792,
  [SMALL_STATE(57)] = 1816,
  [SMALL_STATE(58)] = 1836,
  [SMALL_STATE(59)] = 1856,
  [SMALL_STATE(60)] = 1878,
  [SMALL_STATE(61)] = 1902,
  [SMALL_STATE(62)] = 1928,
  [SMALL_STATE(63)] = 1948,
  [SMALL_STATE(64)] = 1968,
  [SMALL_STATE(65)] = 1988,
  [SMALL_STATE(66)] = 2008,
  [SMALL_STATE(67)] = 2028,
  [SMALL_STATE(68)] = 2048,
  [SMALL_STATE(69)] = 2073,
  [SMALL_STATE(70)] = 2100,
  [SMALL_STATE(71)] = 2121,
  [SMALL_STATE(72)] = 2144,
  [SMALL_STATE(73)] = 2167,
  [SMALL_STATE(74)] = 2194,
  [SMALL_STATE(75)] = 2217,
  [SMALL_STATE(76)] = 2244,
  [SMALL_STATE(77)] = 2267,
  [SMALL_STATE(78)] = 2290,
  [SMALL_STATE(79)] = 2313,
  [SMALL_STATE(80)] = 2336,
  [SMALL_STATE(81)] = 2357,
  [SMALL_STATE(82)] = 2379,
  [SMALL_STATE(83)] = 2401,
  [SMALL_STATE(84)] = 2422,
  [SMALL_STATE(85)] = 2439,
  [SMALL_STATE(86)] = 2458,
  [SMALL_STATE(87)] = 2477,
  [SMALL_STATE(88)] = 2498,
  [SMALL_STATE(89)] = 2519,
  [SMALL_STATE(90)] = 2540,
  [SMALL_STATE(91)] = 2559,
  [SMALL_STATE(92)] = 2579,
  [SMALL_STATE(93)] = 2597,
  [SMALL_STATE(94)] = 2615,
  [SMALL_STATE(95)] = 2633,
  [SMALL_STATE(96)] = 2653,
  [SMALL_STATE(97)] = 2673,
  [SMALL_STATE(98)] = 2691,
  [SMALL_STATE(99)] = 2711,
  [SMALL_STATE(100)] = 2729,
  [SMALL_STATE(101)] = 2749,
  [SMALL_STATE(102)] = 2769,
  [SMALL_STATE(103)] = 2788,
  [SMALL_STATE(104)] = 2805,
  [SMALL_STATE(105)] = 2820,
  [SMALL_STATE(106)] = 2843,
  [SMALL_STATE(107)] = 2860,
  [SMALL_STATE(108)] = 2875,
  [SMALL_STATE(109)] = 2894,
  [SMALL_STATE(110)] = 2909,
  [SMALL_STATE(111)] = 2928,
  [SMALL_STATE(112)] = 2946,
  [SMALL_STATE(113)] = 2964,
  [SMALL_STATE(114)] = 2982,
  [SMALL_STATE(115)] = 3000,
  [SMALL_STATE(116)] = 3018,
  [SMALL_STATE(117)] = 3036,
  [SMALL_STATE(118)] = 3054,
  [SMALL_STATE(119)] = 3072,
  [SMALL_STATE(120)] = 3083,
  [SMALL_STATE(121)] = 3094,
  [SMALL_STATE(122)] = 3109,
  [SMALL_STATE(123)] = 3120,
  [SMALL_STATE(124)] = 3131,
  [SMALL_STATE(125)] = 3142,
  [SMALL_STATE(126)] = 3153,
  [SMALL_STATE(127)] = 3166,
  [SMALL_STATE(128)] = 3178,
  [SMALL_STATE(129)] = 3190,
  [SMALL_STATE(130)] = 3202,
  [SMALL_STATE(131)] = 3214,
  [SMALL_STATE(132)] = 3226,
  [SMALL_STATE(133)] = 3238,
  [SMALL_STATE(134)] = 3250,
  [SMALL_STATE(135)] = 3262,
  [SMALL_STATE(136)] = 3274,
  [SMALL_STATE(137)] = 3286,
  [SMALL_STATE(138)] = 3298,
  [SMALL_STATE(139)] = 3310,
  [SMALL_STATE(140)] = 3322,
  [SMALL_STATE(141)] = 3334,
  [SMALL_STATE(142)] = 3346,
  [SMALL_STATE(143)] = 3358,
  [SMALL_STATE(144)] = 3370,
  [SMALL_STATE(145)] = 3382,
  [SMALL_STATE(146)] = 3394,
  [SMALL_STATE(147)] = 3406,
  [SMALL_STATE(148)] = 3418,
  [SMALL_STATE(149)] = 3430,
  [SMALL_STATE(150)] = 3442,
  [SMALL_STATE(151)] = 3449,
  [SMALL_STATE(152)] = 3456,
  [SMALL_STATE(153)] = 3463,
  [SMALL_STATE(154)] = 3470,
  [SMALL_STATE(155)] = 3477,
  [SMALL_STATE(156)] = 3483,
  [SMALL_STATE(157)] = 3489,
  [SMALL_STATE(158)] = 3495,
  [SMALL_STATE(159)] = 3501,
  [SMALL_STATE(160)] = 3507,
  [SMALL_STATE(161)] = 3513,
  [SMALL_STATE(162)] = 3521,
  [SMALL_STATE(163)] = 3531,
  [SMALL_STATE(164)] = 3537,
  [SMALL_STATE(165)] = 3543,
  [SMALL_STATE(166)] = 3549,
  [SMALL_STATE(167)] = 3555,
  [SMALL_STATE(168)] = 3565,
  [SMALL_STATE(169)] = 3573,
  [SMALL_STATE(170)] = 3579,
  [SMALL_STATE(171)] = 3589,
  [SMALL_STATE(172)] = 3599,
  [SMALL_STATE(173)] = 3603,
  [SMALL_STATE(174)] = 3607,
  [SMALL_STATE(175)] = 3611,
  [SMALL_STATE(176)] = 3615,
  [SMALL_STATE(177)] = 3619,
  [SMALL_STATE(178)] = 3623,
  [SMALL_STATE(179)] = 3627,
  [SMALL_STATE(180)] = 3631,
  [SMALL_STATE(181)] = 3635,
  [SMALL_STATE(182)] = 3639,
  [SMALL_STATE(183)] = 3643,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(104),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(53),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(178),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(75),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(73),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(69),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_step_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_repeat1, 2), SHIFT_REPEAT(5),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_repeat1, 2), SHIFT_REPEAT(75),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_repeat1, 2), SHIFT_REPEAT(73),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_repeat1, 2), SHIFT_REPEAT(69),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_item, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_item, 2),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_item, 2), SHIFT_REPEAT(20),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 5),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata, 5),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiword, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiword, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_item, 2), SHIFT_REPEAT(35),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiword_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiword_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiword_repeat1, 2), SHIFT_REPEAT(78),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiword, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiword, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__integer, 1), REDUCE(sym__digit, 1),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__integer, 1), REDUCE(sym__digit, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__digit, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 1),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__digit, 1), SHIFT(87),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_units, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_units, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__word, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__word, 2),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__word, 2), SHIFT_REPEAT(42),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__word, 2), SHIFT_REPEAT(44),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 6),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 6),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookware, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookware, 3),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiword_repeat1, 2), SHIFT_REPEAT(72),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 5),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 5),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alphabetic, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alphabetic, 1),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__alphabetic, 1), SHIFT(174),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookware, 5),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookware, 5),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 5),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookware, 4),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookware, 4),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__word, 2), SHIFT_REPEAT(59),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookware, 6),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookware, 6),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 6),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 6),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookware, 7),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookware, 7),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 7),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ingredient, 7),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 7),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 7),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__digit, 1), SHIFT(103),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ingredient_repeat1, 2),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ingredient_repeat1, 2), SHIFT_REPEAT(70),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multiword_repeat1, 2), SHIFT_REPEAT(76),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ingredient_repeat1, 2),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ingredient_repeat1, 2), SHIFT_REPEAT(79),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ingredient_repeat1, 2), SHIFT_REPEAT(82),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multiword_repeat1, 2), SHIFT_REPEAT(71),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol, 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__symbol, 1),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__unreserved_symbol, 1), REDUCE(sym__symbol, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_item, 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_item, 1),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__word, 1), REDUCE(aux_sym__text_item, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__integer_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__integer_repeat1, 2), SHIFT_REPEAT(88),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ingredient_repeat1, 2), SHIFT_REPEAT(93),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__word, 2), SHIFT_REPEAT(99),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number, 1),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__number, 1), SHIFT(132),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__integer_repeat1, 2), SHIFT_REPEAT(106),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__number, 1), SHIFT(139),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fractional, 5),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fractional, 5),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fractional, 3),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fractional, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fractional, 4),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fractional, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 5),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 5),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 4),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 4),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [555] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__newline = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_cooklang_external_scanner_create(void);
void tree_sitter_cooklang_external_scanner_destroy(void *);
bool tree_sitter_cooklang_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_cooklang_external_scanner_serialize(void *, char *);
void tree_sitter_cooklang_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_cooklang() {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_cooklang_external_scanner_create,
      tree_sitter_cooklang_external_scanner_destroy,
      tree_sitter_cooklang_external_scanner_scan,
      tree_sitter_cooklang_external_scanner_serialize,
      tree_sitter_cooklang_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

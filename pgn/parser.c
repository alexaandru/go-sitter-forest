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
#define STATE_COUNT 296
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 157
#define ALIAS_COUNT 0
#define TOKEN_COUNT 108
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 26
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 44

enum ts_symbol_identifiers {
  sym__empty_line = 1,
  anon_sym_SEMI = 2,
  anon_sym_PERCENT = 3,
  aux_sym_rest_of_line_comment_token1 = 4,
  sym_rest_of_line_comment_text = 5,
  sym_old_style_twic_section_comment = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_double_quote_token1 = 10,
  anon_sym_uff02 = 11,
  aux_sym_double_quote_token2 = 12,
  anon_sym_u201c = 13,
  aux_sym_double_quote_token3 = 14,
  anon_sym_u201d = 15,
  aux_sym_double_quote_token4 = 16,
  anon_sym_u201f = 17,
  aux_sym_double_quote_token5 = 18,
  anon_sym_u2033 = 19,
  aux_sym_double_quote_token6 = 20,
  anon_sym_u2036 = 21,
  aux_sym_double_quote_token7 = 22,
  anon_sym_u3003 = 23,
  aux_sym_double_quote_token8 = 24,
  anon_sym_u05f4 = 25,
  aux_sym_double_quote_token9 = 26,
  anon_sym_u02dd = 27,
  aux_sym_double_quote_token10 = 28,
  anon_sym_u02ba = 29,
  aux_sym_double_quote_token11 = 30,
  anon_sym_u02f6 = 31,
  aux_sym_double_quote_token12 = 32,
  anon_sym_u02ee = 33,
  aux_sym_double_quote_token13 = 34,
  anon_sym_u05f2 = 35,
  aux_sym_double_quote_token14 = 36,
  sym_tagpair_key = 37,
  aux_sym_tagpair_value_contents_token1 = 38,
  sym_variation_delimiter_open = 39,
  anon_sym_RPAREN = 40,
  anon_sym_LBRACE = 41,
  anon_sym_RBRACE = 42,
  aux_sym_inline_comment_text_token1 = 43,
  sym_move_number = 44,
  sym__san_file = 45,
  sym__san_rank = 46,
  sym__san_promotable_piece = 47,
  sym__san_major_or_minor_piece = 48,
  sym__san_capture_symbol = 49,
  sym__san_promotion_symbol = 50,
  anon_sym_P = 51,
  anon_sym_u2659 = 52,
  anon_sym_u265fufe0e = 53,
  anon_sym_AT = 54,
  aux_sym__lan_move_by_coordinates_token1 = 55,
  sym__san_move_castle = 56,
  sym__san_null_move = 57,
  sym_check_or_mate_condition = 58,
  sym_annotation = 59,
  anon_sym_1 = 60,
  anon_sym_DASH = 61,
  aux_sym_result_code_token1 = 62,
  anon_sym_u2212 = 63,
  aux_sym_result_code_token2 = 64,
  anon_sym_u2010 = 65,
  aux_sym_result_code_token3 = 66,
  anon_sym_u2011 = 67,
  aux_sym_result_code_token4 = 68,
  anon_sym_u2012 = 69,
  aux_sym_result_code_token5 = 70,
  anon_sym_u2013 = 71,
  aux_sym_result_code_token6 = 72,
  anon_sym_u2014 = 73,
  aux_sym_result_code_token7 = 74,
  anon_sym_u2796 = 75,
  aux_sym_result_code_token8 = 76,
  anon_sym_O = 77,
  anon_sym_0 = 78,
  anon_sym_o = 79,
  anon_sym_SLASH = 80,
  aux_sym_result_code_token9 = 81,
  anon_sym_u2215 = 82,
  aux_sym_result_code_token10 = 83,
  anon_sym_u2044 = 84,
  aux_sym_result_code_token11 = 85,
  anon_sym_u27cb = 86,
  aux_sym_result_code_token12 = 87,
  anon_sym_u29f8 = 88,
  aux_sym_result_code_token13 = 89,
  anon_sym_2 = 90,
  anon_sym_u00bd = 91,
  aux_sym_result_code_token14 = 92,
  anon_sym_STAR = 93,
  aux_sym_result_code_token15 = 94,
  anon_sym_u2217 = 95,
  aux_sym_result_code_token16 = 96,
  anon_sym_u2731 = 97,
  aux_sym_result_code_token17 = 98,
  anon_sym_u204e = 99,
  aux_sym_result_code_token18 = 100,
  anon_sym_u066d = 101,
  aux_sym_result_code_token19 = 102,
  aux_sym_result_code_token20 = 103,
  aux_sym_result_code_token21 = 104,
  aux_sym_result_code_token22 = 105,
  aux_sym_result_code_token23 = 106,
  sym__full_line_comment_delimiter_bol_assertion = 107,
  sym_series_of_games = 108,
  sym_game = 109,
  sym_freestanding_comment = 110,
  sym_rest_of_line_comment_delimiter_open = 111,
  sym_rest_of_line_comment = 112,
  sym_header = 113,
  sym_tagpair_delimiter_open = 114,
  sym_tagpair_delimiter_close = 115,
  sym_double_quote = 116,
  sym_tagpair = 117,
  sym__tagpair_value = 118,
  sym_tagpair_value_contents = 119,
  sym_movetext = 120,
  sym_variation_movetext = 121,
  sym_variation_delimiter_close = 122,
  sym_inline_comment_delimiter_open = 123,
  sym_inline_comment_delimiter_close = 124,
  sym__recursive_inline_comment_delimiter_open = 125,
  sym__recursive_inline_comment_delimiter_close = 126,
  sym_trailing_garbage = 127,
  sym__movetext_element = 128,
  sym__variation_movetext_element = 129,
  sym_variation = 130,
  sym_recursive_variation = 131,
  sym_inline_comment = 132,
  sym__recursive_inline_comment = 133,
  sym_inline_comment_text = 134,
  aux_sym__recursive_inline_comment_text = 135,
  sym_san_move = 136,
  sym__san_move_piece = 137,
  sym_lan_move = 138,
  sym__san_square = 139,
  sym__san_promotion = 140,
  sym__san_move_pawn = 141,
  sym__san_drop_pawn = 142,
  sym__san_move_major_or_minor_piece = 143,
  sym__san_drop_major_or_minor_piece = 144,
  sym__lan_move_by_coordinates = 145,
  sym_result_code = 146,
  aux_sym_series_of_games_repeat1 = 147,
  aux_sym_freestanding_comment_repeat1 = 148,
  aux_sym_header_repeat1 = 149,
  aux_sym_tagpair_delimiter_open_repeat1 = 150,
  aux_sym_tagpair_delimiter_close_repeat1 = 151,
  aux_sym_tagpair_value_contents_repeat1 = 152,
  aux_sym_movetext_repeat1 = 153,
  aux_sym_variation_movetext_repeat1 = 154,
  aux_sym_trailing_garbage_repeat1 = 155,
  aux_sym_inline_comment_text_repeat1 = 156,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__empty_line] = "_empty_line",
  [anon_sym_SEMI] = ";",
  [anon_sym_PERCENT] = "%",
  [aux_sym_rest_of_line_comment_token1] = "rest_of_line_comment_token1",
  [sym_rest_of_line_comment_text] = "rest_of_line_comment_text",
  [sym_old_style_twic_section_comment] = "old_style_twic_section_comment",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quote_token1] = "double_quote_token1",
  [anon_sym_uff02] = "\uff02",
  [aux_sym_double_quote_token2] = "double_quote_token2",
  [anon_sym_u201c] = "\u201c",
  [aux_sym_double_quote_token3] = "double_quote_token3",
  [anon_sym_u201d] = "\u201d",
  [aux_sym_double_quote_token4] = "double_quote_token4",
  [anon_sym_u201f] = "\u201f",
  [aux_sym_double_quote_token5] = "double_quote_token5",
  [anon_sym_u2033] = "\u2033",
  [aux_sym_double_quote_token6] = "double_quote_token6",
  [anon_sym_u2036] = "\u2036",
  [aux_sym_double_quote_token7] = "double_quote_token7",
  [anon_sym_u3003] = "\u3003",
  [aux_sym_double_quote_token8] = "double_quote_token8",
  [anon_sym_u05f4] = "\u05f4",
  [aux_sym_double_quote_token9] = "double_quote_token9",
  [anon_sym_u02dd] = "\u02dd",
  [aux_sym_double_quote_token10] = "double_quote_token10",
  [anon_sym_u02ba] = "\u02ba",
  [aux_sym_double_quote_token11] = "double_quote_token11",
  [anon_sym_u02f6] = "\u02f6",
  [aux_sym_double_quote_token12] = "double_quote_token12",
  [anon_sym_u02ee] = "\u02ee",
  [aux_sym_double_quote_token13] = "double_quote_token13",
  [anon_sym_u05f2] = "\u05f2",
  [aux_sym_double_quote_token14] = "double_quote_token14",
  [sym_tagpair_key] = "tagpair_key",
  [aux_sym_tagpair_value_contents_token1] = "tagpair_value_contents_token1",
  [sym_variation_delimiter_open] = "variation_delimiter_open",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_inline_comment_text_token1] = "inline_comment_text_token1",
  [sym_move_number] = "move_number",
  [sym__san_file] = "_san_file",
  [sym__san_rank] = "_san_rank",
  [sym__san_promotable_piece] = "_san_promotable_piece",
  [sym__san_major_or_minor_piece] = "_san_major_or_minor_piece",
  [sym__san_capture_symbol] = "_san_capture_symbol",
  [sym__san_promotion_symbol] = "_san_promotion_symbol",
  [anon_sym_P] = "P",
  [anon_sym_u2659] = "\u2659",
  [anon_sym_u265fufe0e] = "\u265f\ufe0e",
  [anon_sym_AT] = "@",
  [aux_sym__lan_move_by_coordinates_token1] = "_lan_move_by_coordinates_token1",
  [sym__san_move_castle] = "_san_move_castle",
  [sym__san_null_move] = "_san_null_move",
  [sym_check_or_mate_condition] = "check_or_mate_condition",
  [sym_annotation] = "annotation",
  [anon_sym_1] = "1",
  [anon_sym_DASH] = "-",
  [aux_sym_result_code_token1] = "result_code_token1",
  [anon_sym_u2212] = "\u2212",
  [aux_sym_result_code_token2] = "result_code_token2",
  [anon_sym_u2010] = "\u2010",
  [aux_sym_result_code_token3] = "result_code_token3",
  [anon_sym_u2011] = "\u2011",
  [aux_sym_result_code_token4] = "result_code_token4",
  [anon_sym_u2012] = "\u2012",
  [aux_sym_result_code_token5] = "result_code_token5",
  [anon_sym_u2013] = "\u2013",
  [aux_sym_result_code_token6] = "result_code_token6",
  [anon_sym_u2014] = "\u2014",
  [aux_sym_result_code_token7] = "result_code_token7",
  [anon_sym_u2796] = "\u2796",
  [aux_sym_result_code_token8] = "result_code_token8",
  [anon_sym_O] = "O",
  [anon_sym_0] = "0",
  [anon_sym_o] = "o",
  [anon_sym_SLASH] = "/",
  [aux_sym_result_code_token9] = "result_code_token9",
  [anon_sym_u2215] = "\u2215",
  [aux_sym_result_code_token10] = "result_code_token10",
  [anon_sym_u2044] = "\u2044",
  [aux_sym_result_code_token11] = "result_code_token11",
  [anon_sym_u27cb] = "\u27cb",
  [aux_sym_result_code_token12] = "result_code_token12",
  [anon_sym_u29f8] = "\u29f8",
  [aux_sym_result_code_token13] = "result_code_token13",
  [anon_sym_2] = "2",
  [anon_sym_u00bd] = "\u00bd",
  [aux_sym_result_code_token14] = "result_code_token14",
  [anon_sym_STAR] = "*",
  [aux_sym_result_code_token15] = "result_code_token15",
  [anon_sym_u2217] = "\u2217",
  [aux_sym_result_code_token16] = "result_code_token16",
  [anon_sym_u2731] = "\u2731",
  [aux_sym_result_code_token17] = "result_code_token17",
  [anon_sym_u204e] = "\u204e",
  [aux_sym_result_code_token18] = "result_code_token18",
  [anon_sym_u066d] = "\u066d",
  [aux_sym_result_code_token19] = "result_code_token19",
  [aux_sym_result_code_token20] = "result_code_token20",
  [aux_sym_result_code_token21] = "result_code_token21",
  [aux_sym_result_code_token22] = "result_code_token22",
  [aux_sym_result_code_token23] = "result_code_token23",
  [sym__full_line_comment_delimiter_bol_assertion] = "_full_line_comment_delimiter_bol_assertion",
  [sym_series_of_games] = "series_of_games",
  [sym_game] = "game",
  [sym_freestanding_comment] = "freestanding_comment",
  [sym_rest_of_line_comment_delimiter_open] = "rest_of_line_comment_delimiter_open",
  [sym_rest_of_line_comment] = "rest_of_line_comment",
  [sym_header] = "header",
  [sym_tagpair_delimiter_open] = "tagpair_delimiter_open",
  [sym_tagpair_delimiter_close] = "tagpair_delimiter_close",
  [sym_double_quote] = "double_quote",
  [sym_tagpair] = "tagpair",
  [sym__tagpair_value] = "_tagpair_value",
  [sym_tagpair_value_contents] = "tagpair_value_contents",
  [sym_movetext] = "movetext",
  [sym_variation_movetext] = "variation_movetext",
  [sym_variation_delimiter_close] = "variation_delimiter_close",
  [sym_inline_comment_delimiter_open] = "inline_comment_delimiter_open",
  [sym_inline_comment_delimiter_close] = "inline_comment_delimiter_close",
  [sym__recursive_inline_comment_delimiter_open] = "_recursive_inline_comment_delimiter_open",
  [sym__recursive_inline_comment_delimiter_close] = "_recursive_inline_comment_delimiter_close",
  [sym_trailing_garbage] = "trailing_garbage",
  [sym__movetext_element] = "_movetext_element",
  [sym__variation_movetext_element] = "_variation_movetext_element",
  [sym_variation] = "variation",
  [sym_recursive_variation] = "recursive_variation",
  [sym_inline_comment] = "inline_comment",
  [sym__recursive_inline_comment] = "_recursive_inline_comment",
  [sym_inline_comment_text] = "inline_comment_text",
  [aux_sym__recursive_inline_comment_text] = "_recursive_inline_comment_text",
  [sym_san_move] = "san_move",
  [sym__san_move_piece] = "_san_move_piece",
  [sym_lan_move] = "lan_move",
  [sym__san_square] = "_san_square",
  [sym__san_promotion] = "_san_promotion",
  [sym__san_move_pawn] = "_san_move_pawn",
  [sym__san_drop_pawn] = "_san_drop_pawn",
  [sym__san_move_major_or_minor_piece] = "_san_move_major_or_minor_piece",
  [sym__san_drop_major_or_minor_piece] = "_san_drop_major_or_minor_piece",
  [sym__lan_move_by_coordinates] = "_lan_move_by_coordinates",
  [sym_result_code] = "result_code",
  [aux_sym_series_of_games_repeat1] = "series_of_games_repeat1",
  [aux_sym_freestanding_comment_repeat1] = "freestanding_comment_repeat1",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_tagpair_delimiter_open_repeat1] = "tagpair_delimiter_open_repeat1",
  [aux_sym_tagpair_delimiter_close_repeat1] = "tagpair_delimiter_close_repeat1",
  [aux_sym_tagpair_value_contents_repeat1] = "tagpair_value_contents_repeat1",
  [aux_sym_movetext_repeat1] = "movetext_repeat1",
  [aux_sym_variation_movetext_repeat1] = "variation_movetext_repeat1",
  [aux_sym_trailing_garbage_repeat1] = "trailing_garbage_repeat1",
  [aux_sym_inline_comment_text_repeat1] = "inline_comment_text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__empty_line] = sym__empty_line,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_rest_of_line_comment_token1] = aux_sym_rest_of_line_comment_token1,
  [sym_rest_of_line_comment_text] = sym_rest_of_line_comment_text,
  [sym_old_style_twic_section_comment] = sym_old_style_twic_section_comment,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quote_token1] = aux_sym_double_quote_token1,
  [anon_sym_uff02] = anon_sym_uff02,
  [aux_sym_double_quote_token2] = aux_sym_double_quote_token2,
  [anon_sym_u201c] = anon_sym_u201c,
  [aux_sym_double_quote_token3] = aux_sym_double_quote_token3,
  [anon_sym_u201d] = anon_sym_u201d,
  [aux_sym_double_quote_token4] = aux_sym_double_quote_token4,
  [anon_sym_u201f] = anon_sym_u201f,
  [aux_sym_double_quote_token5] = aux_sym_double_quote_token5,
  [anon_sym_u2033] = anon_sym_u2033,
  [aux_sym_double_quote_token6] = aux_sym_double_quote_token6,
  [anon_sym_u2036] = anon_sym_u2036,
  [aux_sym_double_quote_token7] = aux_sym_double_quote_token7,
  [anon_sym_u3003] = anon_sym_u3003,
  [aux_sym_double_quote_token8] = aux_sym_double_quote_token8,
  [anon_sym_u05f4] = anon_sym_u05f4,
  [aux_sym_double_quote_token9] = aux_sym_double_quote_token9,
  [anon_sym_u02dd] = anon_sym_u02dd,
  [aux_sym_double_quote_token10] = aux_sym_double_quote_token10,
  [anon_sym_u02ba] = anon_sym_u02ba,
  [aux_sym_double_quote_token11] = aux_sym_double_quote_token11,
  [anon_sym_u02f6] = anon_sym_u02f6,
  [aux_sym_double_quote_token12] = aux_sym_double_quote_token12,
  [anon_sym_u02ee] = anon_sym_u02ee,
  [aux_sym_double_quote_token13] = aux_sym_double_quote_token13,
  [anon_sym_u05f2] = anon_sym_u05f2,
  [aux_sym_double_quote_token14] = aux_sym_double_quote_token14,
  [sym_tagpair_key] = sym_tagpair_key,
  [aux_sym_tagpair_value_contents_token1] = aux_sym_tagpair_value_contents_token1,
  [sym_variation_delimiter_open] = sym_variation_delimiter_open,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_inline_comment_text_token1] = aux_sym_inline_comment_text_token1,
  [sym_move_number] = sym_move_number,
  [sym__san_file] = sym__san_file,
  [sym__san_rank] = sym__san_rank,
  [sym__san_promotable_piece] = sym__san_promotable_piece,
  [sym__san_major_or_minor_piece] = sym__san_major_or_minor_piece,
  [sym__san_capture_symbol] = sym__san_capture_symbol,
  [sym__san_promotion_symbol] = sym__san_promotion_symbol,
  [anon_sym_P] = anon_sym_P,
  [anon_sym_u2659] = anon_sym_u2659,
  [anon_sym_u265fufe0e] = anon_sym_u265fufe0e,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__lan_move_by_coordinates_token1] = aux_sym__lan_move_by_coordinates_token1,
  [sym__san_move_castle] = sym__san_move_castle,
  [sym__san_null_move] = sym__san_null_move,
  [sym_check_or_mate_condition] = sym_check_or_mate_condition,
  [sym_annotation] = sym_annotation,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_result_code_token1] = aux_sym_result_code_token1,
  [anon_sym_u2212] = anon_sym_u2212,
  [aux_sym_result_code_token2] = aux_sym_result_code_token2,
  [anon_sym_u2010] = anon_sym_u2010,
  [aux_sym_result_code_token3] = aux_sym_result_code_token3,
  [anon_sym_u2011] = anon_sym_u2011,
  [aux_sym_result_code_token4] = aux_sym_result_code_token4,
  [anon_sym_u2012] = anon_sym_u2012,
  [aux_sym_result_code_token5] = aux_sym_result_code_token5,
  [anon_sym_u2013] = anon_sym_u2013,
  [aux_sym_result_code_token6] = aux_sym_result_code_token6,
  [anon_sym_u2014] = anon_sym_u2014,
  [aux_sym_result_code_token7] = aux_sym_result_code_token7,
  [anon_sym_u2796] = anon_sym_u2796,
  [aux_sym_result_code_token8] = aux_sym_result_code_token8,
  [anon_sym_O] = anon_sym_O,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_result_code_token9] = aux_sym_result_code_token9,
  [anon_sym_u2215] = anon_sym_u2215,
  [aux_sym_result_code_token10] = aux_sym_result_code_token10,
  [anon_sym_u2044] = anon_sym_u2044,
  [aux_sym_result_code_token11] = aux_sym_result_code_token11,
  [anon_sym_u27cb] = anon_sym_u27cb,
  [aux_sym_result_code_token12] = aux_sym_result_code_token12,
  [anon_sym_u29f8] = anon_sym_u29f8,
  [aux_sym_result_code_token13] = aux_sym_result_code_token13,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_u00bd] = anon_sym_u00bd,
  [aux_sym_result_code_token14] = aux_sym_result_code_token14,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_result_code_token15] = aux_sym_result_code_token15,
  [anon_sym_u2217] = anon_sym_u2217,
  [aux_sym_result_code_token16] = aux_sym_result_code_token16,
  [anon_sym_u2731] = anon_sym_u2731,
  [aux_sym_result_code_token17] = aux_sym_result_code_token17,
  [anon_sym_u204e] = anon_sym_u204e,
  [aux_sym_result_code_token18] = aux_sym_result_code_token18,
  [anon_sym_u066d] = anon_sym_u066d,
  [aux_sym_result_code_token19] = aux_sym_result_code_token19,
  [aux_sym_result_code_token20] = aux_sym_result_code_token20,
  [aux_sym_result_code_token21] = aux_sym_result_code_token21,
  [aux_sym_result_code_token22] = aux_sym_result_code_token22,
  [aux_sym_result_code_token23] = aux_sym_result_code_token23,
  [sym__full_line_comment_delimiter_bol_assertion] = sym__full_line_comment_delimiter_bol_assertion,
  [sym_series_of_games] = sym_series_of_games,
  [sym_game] = sym_game,
  [sym_freestanding_comment] = sym_freestanding_comment,
  [sym_rest_of_line_comment_delimiter_open] = sym_rest_of_line_comment_delimiter_open,
  [sym_rest_of_line_comment] = sym_rest_of_line_comment,
  [sym_header] = sym_header,
  [sym_tagpair_delimiter_open] = sym_tagpair_delimiter_open,
  [sym_tagpair_delimiter_close] = sym_tagpair_delimiter_close,
  [sym_double_quote] = sym_double_quote,
  [sym_tagpair] = sym_tagpair,
  [sym__tagpair_value] = sym__tagpair_value,
  [sym_tagpair_value_contents] = sym_tagpair_value_contents,
  [sym_movetext] = sym_movetext,
  [sym_variation_movetext] = sym_variation_movetext,
  [sym_variation_delimiter_close] = sym_variation_delimiter_close,
  [sym_inline_comment_delimiter_open] = sym_inline_comment_delimiter_open,
  [sym_inline_comment_delimiter_close] = sym_inline_comment_delimiter_close,
  [sym__recursive_inline_comment_delimiter_open] = sym__recursive_inline_comment_delimiter_open,
  [sym__recursive_inline_comment_delimiter_close] = sym__recursive_inline_comment_delimiter_close,
  [sym_trailing_garbage] = sym_trailing_garbage,
  [sym__movetext_element] = sym__movetext_element,
  [sym__variation_movetext_element] = sym__variation_movetext_element,
  [sym_variation] = sym_variation,
  [sym_recursive_variation] = sym_recursive_variation,
  [sym_inline_comment] = sym_inline_comment,
  [sym__recursive_inline_comment] = sym__recursive_inline_comment,
  [sym_inline_comment_text] = sym_inline_comment_text,
  [aux_sym__recursive_inline_comment_text] = aux_sym__recursive_inline_comment_text,
  [sym_san_move] = sym_san_move,
  [sym__san_move_piece] = sym__san_move_piece,
  [sym_lan_move] = sym_lan_move,
  [sym__san_square] = sym__san_square,
  [sym__san_promotion] = sym__san_promotion,
  [sym__san_move_pawn] = sym__san_move_pawn,
  [sym__san_drop_pawn] = sym__san_drop_pawn,
  [sym__san_move_major_or_minor_piece] = sym__san_move_major_or_minor_piece,
  [sym__san_drop_major_or_minor_piece] = sym__san_drop_major_or_minor_piece,
  [sym__lan_move_by_coordinates] = sym__lan_move_by_coordinates,
  [sym_result_code] = sym_result_code,
  [aux_sym_series_of_games_repeat1] = aux_sym_series_of_games_repeat1,
  [aux_sym_freestanding_comment_repeat1] = aux_sym_freestanding_comment_repeat1,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_tagpair_delimiter_open_repeat1] = aux_sym_tagpair_delimiter_open_repeat1,
  [aux_sym_tagpair_delimiter_close_repeat1] = aux_sym_tagpair_delimiter_close_repeat1,
  [aux_sym_tagpair_value_contents_repeat1] = aux_sym_tagpair_value_contents_repeat1,
  [aux_sym_movetext_repeat1] = aux_sym_movetext_repeat1,
  [aux_sym_variation_movetext_repeat1] = aux_sym_variation_movetext_repeat1,
  [aux_sym_trailing_garbage_repeat1] = aux_sym_trailing_garbage_repeat1,
  [aux_sym_inline_comment_text_repeat1] = aux_sym_inline_comment_text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__empty_line] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_rest_of_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_rest_of_line_comment_text] = {
    .visible = true,
    .named = true,
  },
  [sym_old_style_twic_section_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_uff02] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u201c] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u201d] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u201f] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2033] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2036] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token7] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u3003] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token8] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u05f4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token9] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u02dd] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token10] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u02ba] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token11] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u02f6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token12] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u02ee] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token13] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u05f2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_token14] = {
    .visible = false,
    .named = false,
  },
  [sym_tagpair_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_tagpair_value_contents_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_variation_delimiter_open] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RPAREN] = {
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
  [aux_sym_inline_comment_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_move_number] = {
    .visible = true,
    .named = true,
  },
  [sym__san_file] = {
    .visible = false,
    .named = true,
  },
  [sym__san_rank] = {
    .visible = false,
    .named = true,
  },
  [sym__san_promotable_piece] = {
    .visible = false,
    .named = true,
  },
  [sym__san_major_or_minor_piece] = {
    .visible = false,
    .named = true,
  },
  [sym__san_capture_symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__san_promotion_symbol] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_P] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u2659] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u265fufe0e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__lan_move_by_coordinates_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__san_move_castle] = {
    .visible = false,
    .named = true,
  },
  [sym__san_null_move] = {
    .visible = false,
    .named = true,
  },
  [sym_check_or_mate_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2212] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2010] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2011] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2012] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2013] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2014] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token7] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2796] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token8] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_O] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token9] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2215] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token10] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2044] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token11] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u27cb] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token12] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u29f8] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token13] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u00bd] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token14] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token15] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2217] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token16] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u2731] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token17] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u204e] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token18] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u066d] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_result_code_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_result_code_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_result_code_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_result_code_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_result_code_token23] = {
    .visible = false,
    .named = false,
  },
  [sym__full_line_comment_delimiter_bol_assertion] = {
    .visible = false,
    .named = true,
  },
  [sym_series_of_games] = {
    .visible = true,
    .named = true,
  },
  [sym_game] = {
    .visible = true,
    .named = true,
  },
  [sym_freestanding_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_rest_of_line_comment_delimiter_open] = {
    .visible = true,
    .named = true,
  },
  [sym_rest_of_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_tagpair_delimiter_open] = {
    .visible = true,
    .named = true,
  },
  [sym_tagpair_delimiter_close] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_tagpair] = {
    .visible = true,
    .named = true,
  },
  [sym__tagpair_value] = {
    .visible = false,
    .named = true,
  },
  [sym_tagpair_value_contents] = {
    .visible = true,
    .named = true,
  },
  [sym_movetext] = {
    .visible = true,
    .named = true,
  },
  [sym_variation_movetext] = {
    .visible = true,
    .named = true,
  },
  [sym_variation_delimiter_close] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment_delimiter_open] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment_delimiter_close] = {
    .visible = true,
    .named = true,
  },
  [sym__recursive_inline_comment_delimiter_open] = {
    .visible = false,
    .named = true,
  },
  [sym__recursive_inline_comment_delimiter_close] = {
    .visible = false,
    .named = true,
  },
  [sym_trailing_garbage] = {
    .visible = true,
    .named = true,
  },
  [sym__movetext_element] = {
    .visible = false,
    .named = true,
  },
  [sym__variation_movetext_element] = {
    .visible = false,
    .named = true,
  },
  [sym_variation] = {
    .visible = true,
    .named = true,
  },
  [sym_recursive_variation] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__recursive_inline_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_inline_comment_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__recursive_inline_comment_text] = {
    .visible = false,
    .named = false,
  },
  [sym_san_move] = {
    .visible = true,
    .named = true,
  },
  [sym__san_move_piece] = {
    .visible = false,
    .named = true,
  },
  [sym_lan_move] = {
    .visible = true,
    .named = true,
  },
  [sym__san_square] = {
    .visible = false,
    .named = true,
  },
  [sym__san_promotion] = {
    .visible = false,
    .named = true,
  },
  [sym__san_move_pawn] = {
    .visible = false,
    .named = true,
  },
  [sym__san_drop_pawn] = {
    .visible = false,
    .named = true,
  },
  [sym__san_move_major_or_minor_piece] = {
    .visible = false,
    .named = true,
  },
  [sym__san_drop_major_or_minor_piece] = {
    .visible = false,
    .named = true,
  },
  [sym__lan_move_by_coordinates] = {
    .visible = false,
    .named = true,
  },
  [sym_result_code] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_series_of_games_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_freestanding_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tagpair_delimiter_open_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tagpair_delimiter_close_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tagpair_value_contents_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_movetext_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variation_movetext_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_trailing_garbage_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_comment_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_annotation = 1,
  field_comment = 2,
  field_comment_content = 3,
  field_comment_delimiter = 4,
  field_freestanding_comment = 5,
  field_game = 6,
  field_header = 7,
  field_lan_move = 8,
  field_move_number = 9,
  field_movetext = 10,
  field_recursive_variation_content = 11,
  field_recursive_variation_delimiter = 12,
  field_result_code = 13,
  field_san_move = 14,
  field_tagpair = 15,
  field_tagpair_delimiter = 16,
  field_tagpair_key = 17,
  field_tagpair_value_contents = 18,
  field_tagpair_value_delimiter = 19,
  field_variation_annotation = 20,
  field_variation_comment = 21,
  field_variation_content = 22,
  field_variation_delimiter = 23,
  field_variation_lan_move = 24,
  field_variation_move_number = 25,
  field_variation_san_move = 26,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_annotation] = "annotation",
  [field_comment] = "comment",
  [field_comment_content] = "comment_content",
  [field_comment_delimiter] = "comment_delimiter",
  [field_freestanding_comment] = "freestanding_comment",
  [field_game] = "game",
  [field_header] = "header",
  [field_lan_move] = "lan_move",
  [field_move_number] = "move_number",
  [field_movetext] = "movetext",
  [field_recursive_variation_content] = "recursive_variation_content",
  [field_recursive_variation_delimiter] = "recursive_variation_delimiter",
  [field_result_code] = "result_code",
  [field_san_move] = "san_move",
  [field_tagpair] = "tagpair",
  [field_tagpair_delimiter] = "tagpair_delimiter",
  [field_tagpair_key] = "tagpair_key",
  [field_tagpair_value_contents] = "tagpair_value_contents",
  [field_tagpair_value_delimiter] = "tagpair_value_delimiter",
  [field_variation_annotation] = "variation_annotation",
  [field_variation_comment] = "variation_comment",
  [field_variation_content] = "variation_content",
  [field_variation_delimiter] = "variation_delimiter",
  [field_variation_lan_move] = "variation_lan_move",
  [field_variation_move_number] = "variation_move_number",
  [field_variation_san_move] = "variation_san_move",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 5},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 1},
  [12] = {.index = 16, .length = 1},
  [13] = {.index = 17, .length = 1},
  [14] = {.index = 18, .length = 2},
  [15] = {.index = 20, .length = 5},
  [16] = {.index = 25, .length = 1},
  [17] = {.index = 26, .length = 1},
  [18] = {.index = 27, .length = 2},
  [19] = {.index = 29, .length = 2},
  [20] = {.index = 31, .length = 2},
  [21] = {.index = 33, .length = 2},
  [22] = {.index = 35, .length = 3},
  [23] = {.index = 38, .length = 2},
  [24] = {.index = 40, .length = 2},
  [25] = {.index = 42, .length = 3},
  [26] = {.index = 45, .length = 4},
  [27] = {.index = 49, .length = 10},
  [28] = {.index = 59, .length = 2},
  [29] = {.index = 61, .length = 3},
  [30] = {.index = 64, .length = 10},
  [31] = {.index = 74, .length = 2},
  [32] = {.index = 76, .length = 2},
  [33] = {.index = 78, .length = 3},
  [34] = {.index = 81, .length = 4},
  [35] = {.index = 85, .length = 2},
  [36] = {.index = 87, .length = 3},
  [37] = {.index = 90, .length = 3},
  [38] = {.index = 93, .length = 3},
  [39] = {.index = 96, .length = 3},
  [40] = {.index = 99, .length = 2},
  [41] = {.index = 101, .length = 5},
  [42] = {.index = 106, .length = 3},
  [43] = {.index = 109, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_move_number, 0},
  [1] =
    {field_annotation, 0},
  [2] =
    {field_game, 0},
  [3] =
    {field_freestanding_comment, 0},
  [4] =
    {field_comment, 0},
  [5] =
    {field_tagpair, 0},
  [6] =
    {field_annotation, 0, .inherited = true},
    {field_comment, 0, .inherited = true},
    {field_lan_move, 0, .inherited = true},
    {field_move_number, 0, .inherited = true},
    {field_san_move, 0, .inherited = true},
  [11] =
    {field_san_move, 0},
  [12] =
    {field_lan_move, 0},
  [13] =
    {field_freestanding_comment, 0, .inherited = true},
    {field_game, 0, .inherited = true},
  [15] =
    {field_variation_move_number, 0},
  [16] =
    {field_variation_annotation, 0},
  [17] =
    {field_variation_comment, 0},
  [18] =
    {field_variation_delimiter, 0},
    {field_variation_delimiter, 1},
  [20] =
    {field_variation_annotation, 0, .inherited = true},
    {field_variation_comment, 0, .inherited = true},
    {field_variation_lan_move, 0, .inherited = true},
    {field_variation_move_number, 0, .inherited = true},
    {field_variation_san_move, 0, .inherited = true},
  [25] =
    {field_variation_san_move, 0},
  [26] =
    {field_variation_lan_move, 0},
  [27] =
    {field_freestanding_comment, 0},
    {field_game, 1},
  [29] =
    {field_comment_content, 1},
    {field_comment_delimiter, 0},
  [31] =
    {field_header, 0},
    {field_movetext, 1},
  [33] =
    {field_header, 0},
    {field_result_code, 1},
  [35] =
    {field_comment, 1, .inherited = true},
    {field_tagpair, 0},
    {field_tagpair, 1, .inherited = true},
  [38] =
    {field_movetext, 0},
    {field_result_code, 1},
  [40] =
    {field_comment_delimiter, 0},
    {field_comment_delimiter, 1},
  [42] =
    {field_freestanding_comment, 0, .inherited = true},
    {field_freestanding_comment, 1},
    {field_game, 0, .inherited = true},
  [45] =
    {field_freestanding_comment, 0, .inherited = true},
    {field_freestanding_comment, 1, .inherited = true},
    {field_game, 0, .inherited = true},
    {field_game, 1, .inherited = true},
  [49] =
    {field_annotation, 0, .inherited = true},
    {field_annotation, 1, .inherited = true},
    {field_comment, 0, .inherited = true},
    {field_comment, 1, .inherited = true},
    {field_lan_move, 0, .inherited = true},
    {field_lan_move, 1, .inherited = true},
    {field_move_number, 0, .inherited = true},
    {field_move_number, 1, .inherited = true},
    {field_san_move, 0, .inherited = true},
    {field_san_move, 1, .inherited = true},
  [59] =
    {field_recursive_variation_delimiter, 0},
    {field_recursive_variation_delimiter, 1},
  [61] =
    {field_variation_content, 1},
    {field_variation_delimiter, 0},
    {field_variation_delimiter, 2},
  [64] =
    {field_variation_annotation, 0, .inherited = true},
    {field_variation_annotation, 1, .inherited = true},
    {field_variation_comment, 0, .inherited = true},
    {field_variation_comment, 1, .inherited = true},
    {field_variation_lan_move, 0, .inherited = true},
    {field_variation_lan_move, 1, .inherited = true},
    {field_variation_move_number, 0, .inherited = true},
    {field_variation_move_number, 1, .inherited = true},
    {field_variation_san_move, 0, .inherited = true},
    {field_variation_san_move, 1, .inherited = true},
  [74] =
    {field_header, 0},
    {field_movetext, 2},
  [76] =
    {field_header, 0},
    {field_result_code, 2},
  [78] =
    {field_header, 0},
    {field_movetext, 1},
    {field_result_code, 2},
  [81] =
    {field_comment, 0, .inherited = true},
    {field_comment, 1, .inherited = true},
    {field_tagpair, 0, .inherited = true},
    {field_tagpair, 1, .inherited = true},
  [85] =
    {field_movetext, 0},
    {field_result_code, 2},
  [87] =
    {field_comment_content, 1},
    {field_comment_delimiter, 0},
    {field_comment_delimiter, 2},
  [90] =
    {field_recursive_variation_content, 1},
    {field_recursive_variation_delimiter, 0},
    {field_recursive_variation_delimiter, 2},
  [93] =
    {field_header, 0},
    {field_movetext, 2},
    {field_result_code, 3},
  [96] =
    {field_header, 0},
    {field_movetext, 1},
    {field_result_code, 3},
  [99] =
    {field_tagpair_value_delimiter, 0},
    {field_tagpair_value_delimiter, 1},
  [101] =
    {field_tagpair_delimiter, 0},
    {field_tagpair_delimiter, 3},
    {field_tagpair_key, 1},
    {field_tagpair_value_contents, 2, .inherited = true},
    {field_tagpair_value_delimiter, 2, .inherited = true},
  [106] =
    {field_header, 0},
    {field_movetext, 2},
    {field_result_code, 4},
  [109] =
    {field_tagpair_value_contents, 1},
    {field_tagpair_value_delimiter, 0},
    {field_tagpair_value_delimiter, 2},
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
  [5] = 2,
  [6] = 3,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 12,
  [17] = 8,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 12,
  [24] = 24,
  [25] = 14,
  [26] = 13,
  [27] = 27,
  [28] = 28,
  [29] = 15,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 12,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 12,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 31,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 22,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 53,
  [63] = 49,
  [64] = 64,
  [65] = 65,
  [66] = 45,
  [67] = 67,
  [68] = 58,
  [69] = 69,
  [70] = 54,
  [71] = 33,
  [72] = 24,
  [73] = 42,
  [74] = 35,
  [75] = 75,
  [76] = 34,
  [77] = 32,
  [78] = 30,
  [79] = 31,
  [80] = 37,
  [81] = 36,
  [82] = 31,
  [83] = 12,
  [84] = 27,
  [85] = 38,
  [86] = 40,
  [87] = 28,
  [88] = 41,
  [89] = 49,
  [90] = 49,
  [91] = 60,
  [92] = 50,
  [93] = 93,
  [94] = 94,
  [95] = 54,
  [96] = 57,
  [97] = 58,
  [98] = 45,
  [99] = 44,
  [100] = 100,
  [101] = 61,
  [102] = 51,
  [103] = 59,
  [104] = 48,
  [105] = 45,
  [106] = 43,
  [107] = 54,
  [108] = 58,
  [109] = 55,
  [110] = 47,
  [111] = 111,
  [112] = 112,
  [113] = 111,
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
  [129] = 127,
  [130] = 130,
  [131] = 131,
  [132] = 8,
  [133] = 133,
  [134] = 128,
  [135] = 12,
  [136] = 14,
  [137] = 13,
  [138] = 15,
  [139] = 22,
  [140] = 31,
  [141] = 12,
  [142] = 142,
  [143] = 143,
  [144] = 54,
  [145] = 58,
  [146] = 146,
  [147] = 45,
  [148] = 49,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 31,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 41,
  [161] = 37,
  [162] = 38,
  [163] = 49,
  [164] = 40,
  [165] = 54,
  [166] = 31,
  [167] = 167,
  [168] = 36,
  [169] = 58,
  [170] = 33,
  [171] = 42,
  [172] = 27,
  [173] = 173,
  [174] = 45,
  [175] = 28,
  [176] = 176,
  [177] = 35,
  [178] = 12,
  [179] = 34,
  [180] = 32,
  [181] = 30,
  [182] = 24,
  [183] = 54,
  [184] = 184,
  [185] = 185,
  [186] = 47,
  [187] = 58,
  [188] = 188,
  [189] = 44,
  [190] = 57,
  [191] = 191,
  [192] = 192,
  [193] = 45,
  [194] = 49,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 199,
  [201] = 199,
  [202] = 199,
  [203] = 199,
  [204] = 199,
  [205] = 199,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 211,
  [213] = 211,
  [214] = 214,
  [215] = 214,
  [216] = 214,
  [217] = 217,
  [218] = 217,
  [219] = 217,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 222,
  [226] = 226,
  [227] = 227,
  [228] = 222,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 232,
  [235] = 232,
  [236] = 236,
  [237] = 231,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 239,
  [242] = 232,
  [243] = 231,
  [244] = 244,
  [245] = 232,
  [246] = 246,
  [247] = 232,
  [248] = 248,
  [249] = 248,
  [250] = 244,
  [251] = 236,
  [252] = 246,
  [253] = 233,
  [254] = 230,
  [255] = 255,
  [256] = 233,
  [257] = 230,
  [258] = 240,
  [259] = 240,
  [260] = 246,
  [261] = 248,
  [262] = 244,
  [263] = 232,
  [264] = 239,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 269,
  [273] = 270,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 121,
  [279] = 269,
  [280] = 265,
  [281] = 281,
  [282] = 270,
  [283] = 270,
  [284] = 284,
  [285] = 269,
  [286] = 270,
  [287] = 287,
  [288] = 269,
  [289] = 270,
  [290] = 265,
  [291] = 269,
  [292] = 270,
  [293] = 293,
  [294] = 284,
  [295] = 284,
};

static TSCharacterRange aux_sym_tagpair_value_contents_token1_character_set_1[] = {
  {0, '\t'}, {0x0b, '\f'}, {0x0e, '!'}, {'#', 0x2b9}, {0x2bb, 0x2dc}, {0x2de, 0x2ed}, {0x2ef, 0x2f5}, {0x2f7, 0x5f1},
  {0x5f3, 0x5f3}, {0x5f5, 0x201b}, {0x201e, 0x201e}, {0x2020, 0x2032}, {0x2034, 0x2035}, {0x2037, 0x3002}, {0x3004, 0xff01}, {0xff03, 0x10ffff},
};

static TSCharacterRange sym_move_number_character_set_2[] = {
  {'\t', '\r'}, {' ', ' '}, {'.', '.'}, {0x660, 0x660}, {0x6f0, 0x6f0}, {0x701, 0x702}, {0x200e, 0x200e}, {0x2024, 0x2024},
  {0xa4f8, 0xa4f8}, {0xa60e, 0xa60e}, {0x1d16d, 0x1d16d},
};

static TSCharacterRange sym_annotation_character_set_6[] = {
  {'\t', '\r'}, {' ', '!'}, {'$', '$'}, {'&', '&'}, {'+', '+'}, {'-', '-'}, {'/', '/'}, {'<', '='},
  {'?', '?'}, {'N', 'N'}, {'R', 'R'}, {'T', 'T'}, {'e', 'e'}, {0xb1, 0xb1}, {0xd8, 0xd8}, {0xf8, 0xf8},
  {0x16ed, 0x16ed}, {0x2010, 0x2014}, {0x203c, 0x203d}, {0x2044, 0x2044}, {0x2047, 0x2049}, {0x2191, 0x2192}, {0x21c6, 0x21c6}, {0x21d4, 0x21d4},
  {0x21d7, 0x21d7}, {0x2206, 0x2207}, {0x2212, 0x2213}, {0x2215, 0x2215}, {0x221e, 0x221e}, {0x2264, 0x2264}, {0x2295, 0x2295}, {0x2299, 0x2299},
  {0x229e, 0x229e}, {0x22a5, 0x22a5}, {0x2313, 0x2313}, {0x2514, 0x2514}, {0x2518, 0x2518}, {0x25a1, 0x25a1}, {0x25cb, 0x25cb}, {0x25fa, 0x25fa},
  {0x25ff, 0x25ff}, {0x2612, 0x2612}, {0x2642, 0x2642}, {0x2715, 0x2715}, {0x2795, 0x2796}, {0x27cb, 0x27cb}, {0x27ea, 0x27eb}, {0x27f3, 0x27f3},
  {0x29f8, 0x29f8}, {0x2a00, 0x2a01}, {0x2a71, 0x2a72}, {0x2b12, 0x2b13}, {0x2e40, 0x2e40},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2274);
      ADVANCE_MAP(
        '"', 2293,
        '#', 2427,
        '%', 2279,
        '&', 1153,
        '(', 2362,
        ')', 2364,
        '*', 2503,
        '-', 2457,
        '/', 2486,
        '0', 2480,
        '1', 2453,
        '2', 2496,
        ';', 2277,
        '@', 2415,
        'O', 2476,
        'P', 2408,
        '[', 2288,
        ']', 2291,
        'o', 2485,
        '{', 2366,
        '}', 2368,
        0xbd, 2499,
        0x2ba, 2313,
        0x2dd, 2311,
        0x2ee, 2317,
        0x2f6, 2315,
        0x5f2, 2319,
        0x5f4, 2309,
        0x66d, 2519,
        0x2010, 2461,
        0x2011, 2463,
        0x2012, 2465,
        0x2013, 2467,
        0x2014, 2469,
        0x201c, 2297,
        0x201d, 2299,
        0x201f, 2301,
        0x2033, 2303,
        0x2036, 2305,
        0x2044, 2490,
        0x204e, 2515,
        0x2212, 2459,
        0x2215, 2488,
        0x2217, 2507,
        0x2659, 2411,
        0x265f, 2208,
        0x2731, 2511,
        0x2796, 2471,
        0x27cb, 2492,
        0x29f8, 2494,
        0x3003, 2307,
        0xff02, 2295,
        '=', 2401,
        0x2e40, 2401,
        '+', 2430,
        0x16ed, 2430,
        0x2795, 2430,
        ':', 2399,
        'X', 2399,
        'x', 2399,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2273);
      if (('3' <= lookahead && lookahead <= '8')) ADVANCE(2388);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'R') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2389);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1209);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(864);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(270);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(159);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(257);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(189);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '#', 147,
        'D', 587,
        'L', 527,
        'M', 644,
        'O', 748,
        'P', 652,
        'R', 528,
        'S', 618,
        'U', 709,
        'b', 643,
        'c', 641,
        'd', 526,
        'e', 715,
        'h', 531,
        'i', 674,
        'l', 585,
        'm', 537,
        'n', 524,
        'o', 564,
        'p', 588,
        'q', 788,
        'r', 529,
        's', 651,
        'u', 530,
        'x', 697,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == 'd') ADVANCE(549);
      if (lookahead == 'h') ADVANCE(814);
      if (lookahead == 'm') ADVANCE(570);
      if (lookahead == 'n') ADVANCE(571);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == 'p') ADVANCE(668);
      if (lookahead == 's') ADVANCE(703);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '#', 153,
        'd', 547,
        'e', 727,
        'h', 813,
        'm', 566,
        'n', 567,
        's', 705,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(727);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(431);
      if (lookahead == 'i') ADVANCE(696);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == 'p') ADVANCE(668);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == 'e') ADVANCE(812);
      if (lookahead == 'q') ADVANCE(809);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == 'e') ADVANCE(727);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == 'e') ADVANCE(727);
      if (lookahead == 'p') ADVANCE(668);
      if (lookahead == 's') ADVANCE(703);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(741);
      if (lookahead == 'h') ADVANCE(544);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '#', 158,
        'D', 587,
        'L', 527,
        'M', 644,
        'O', 748,
        'P', 652,
        'R', 528,
        'S', 618,
        'U', 709,
        'a', 765,
        'b', 643,
        'c', 641,
        'd', 526,
        'e', 715,
        'f', 736,
        'h', 534,
        'i', 674,
        'l', 584,
        'm', 536,
        'n', 524,
        'o', 564,
        'p', 589,
        'q', 788,
        'r', 529,
        's', 651,
        'u', 530,
        'x', 697,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == 's') ADVANCE(704);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '#', 185,
        'd', 552,
        'h', 815,
        'm', 572,
        'n', 573,
        'p', 668,
        's', 706,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '#', 197,
        'd', 547,
        'e', 727,
        'h', 813,
        'm', 566,
        'n', 567,
        'p', 670,
        's', 705,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '#', 201,
        'd', 555,
        'h', 818,
        'm', 578,
        'n', 579,
        's', 707,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == 'd') ADVANCE(547);
      if (lookahead == 'h') ADVANCE(813);
      if (lookahead == 'm') ADVANCE(566);
      if (lookahead == 'n') ADVANCE(567);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '#', 235,
        'D', 587,
        'L', 527,
        'M', 644,
        'O', 748,
        'P', 652,
        'R', 528,
        'S', 618,
        'U', 709,
        'a', 765,
        'b', 643,
        'c', 641,
        'd', 526,
        'e', 715,
        'f', 736,
        'h', 534,
        'i', 674,
        'l', 584,
        'm', 536,
        'n', 524,
        'o', 564,
        'p', 588,
        'q', 788,
        'r', 529,
        's', 651,
        'u', 530,
        'x', 697,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 28:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '#', 237,
        'D', 587,
        'L', 527,
        'M', 644,
        'O', 748,
        'P', 652,
        'R', 528,
        'S', 618,
        'U', 709,
        'a', 765,
        'b', 643,
        'c', 641,
        'd', 558,
        'e', 716,
        'f', 736,
        'h', 535,
        'i', 674,
        'l', 584,
        'm', 538,
        'n', 525,
        'o', 564,
        'p', 589,
        'q', 788,
        'r', 529,
        's', 651,
        'u', 530,
        'x', 697,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '#', 239,
        'D', 587,
        'L', 527,
        'M', 644,
        'O', 748,
        'P', 652,
        'R', 528,
        'S', 618,
        'U', 709,
        'a', 765,
        'b', 643,
        'c', 641,
        'd', 526,
        'e', 716,
        'f', 736,
        'h', 534,
        'i', 674,
        'l', 584,
        'm', 536,
        'n', 524,
        'o', 564,
        'p', 589,
        'q', 788,
        'r', 529,
        's', 651,
        'u', 530,
        'x', 697,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == 'd') ADVANCE(553);
      if (lookahead == 'h') ADVANCE(816);
      if (lookahead == 'm') ADVANCE(574);
      if (lookahead == 'n') ADVANCE(575);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == 's') ADVANCE(708);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == 'd') ADVANCE(554);
      if (lookahead == 'h') ADVANCE(817);
      if (lookahead == 'm') ADVANCE(576);
      if (lookahead == 'n') ADVANCE(577);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == 'd') ADVANCE(556);
      if (lookahead == 'h') ADVANCE(819);
      if (lookahead == 'm') ADVANCE(580);
      if (lookahead == 'n') ADVANCE(581);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == 'd') ADVANCE(557);
      if (lookahead == 'h') ADVANCE(820);
      if (lookahead == 'm') ADVANCE(582);
      if (lookahead == 'n') ADVANCE(583);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(862);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 36:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '&', 13,
        '/', 42,
        0x2044, 42,
        0x2215, 42,
        0x27cb, 42,
        0x29f8, 42,
      );
      if (lookahead == '-' ||
          lookahead == '=' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796 ||
          lookahead == 0x2e40) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '=' ||
          lookahead == 0x2e40) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(15);
      if (lookahead == 0x221e) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(20);
      if (lookahead == 0xbd) ADVANCE(2530);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(18);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(26);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 43:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '&', 31,
        '/', 7,
        0x2044, 7,
        0x2215, 7,
        0x27cb, 7,
        0x29f8, 7,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(32);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(6);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(33);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(34);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(8);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(1110);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(484);
      if (lookahead == '1') ADVANCE(484);
      if (lookahead == '2') ADVANCE(484);
      if (lookahead == '3') ADVANCE(484);
      if (lookahead == '4') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(484);
      if (lookahead == '1') ADVANCE(484);
      if (lookahead == '2') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(484);
      if (lookahead == '1') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(484);
      if (lookahead == '3') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == '7') ADVANCE(415);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(430);
      if (lookahead == '1') ADVANCE(85);
      if (lookahead == '5') ADVANCE(241);
      if (lookahead == '6') ADVANCE(88);
      if (lookahead == '7') ADVANCE(106);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(430);
      if (lookahead == '1') ADVANCE(85);
      if (lookahead == '5') ADVANCE(241);
      if (lookahead == '6') ADVANCE(88);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 57:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '0', 154,
        '1', 463,
        '2', 59,
        '3', 195,
        '5', 156,
        '6', 190,
        '7', 167,
        '9', 852,
        'A', 67,
        'a', 67,
        'B', 181,
        'b', 181,
        'D', 479,
        'd', 479,
        'E', 350,
        'e', 350,
        'F', 478,
        'f', 478,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(171);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 59:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '0', 393,
        '1', 265,
        '6', 344,
        '9', 377,
        'A', 378,
        'a', 378,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 60:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '0', 393,
        '1', 263,
        '6', 344,
        '9', 377,
        'A', 378,
        'a', 378,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 61:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '0', 393,
        '1', 287,
        '6', 344,
        '9', 377,
        'A', 378,
        'a', 378,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 62:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == '6') ADVANCE(367);
      if (lookahead == '7') ADVANCE(415);
      if (lookahead == '8') ADVANCE(466);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 63:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '1') ADVANCE(80);
      if (lookahead == '6') ADVANCE(367);
      if (lookahead == '7') ADVANCE(415);
      if (lookahead == '8') ADVANCE(466);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 64:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(378);
      if (lookahead == '3') ADVANCE(329);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 65:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(378);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 66:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == '7') ADVANCE(148);
      if (lookahead == ';') ADVANCE(2506);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 67:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == '7') ADVANCE(148);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 68:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(426);
      if (lookahead == '1') ADVANCE(50);
      if (lookahead == '6') ADVANCE(98);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 69:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(426);
      if (lookahead == '1') ADVANCE(50);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 70:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == '1') ADVANCE(318);
      if (lookahead == '2') ADVANCE(172);
      if (lookahead == '7') ADVANCE(363);
      if (lookahead == '8') ADVANCE(397);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 71:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == '1') ADVANCE(334);
      if (lookahead == '2') ADVANCE(172);
      if (lookahead == '7') ADVANCE(363);
      if (lookahead == '8') ADVANCE(397);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 72:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == '1') ADVANCE(336);
      if (lookahead == '2') ADVANCE(172);
      if (lookahead == '7') ADVANCE(363);
      if (lookahead == '8') ADVANCE(397);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 73:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '0', 155,
        '1', 463,
        '2', 60,
        '3', 195,
        '5', 156,
        '6', 190,
        '7', 165,
        '9', 852,
        'A', 66,
        'a', 66,
        'B', 182,
        'b', 182,
        'D', 479,
        'd', 479,
        'E', 350,
        'e', 350,
        'F', 478,
        'f', 478,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 74:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '0', 155,
        '1', 463,
        '2', 60,
        '3', 195,
        '5', 156,
        '6', 190,
        '7', 165,
        '9', 852,
        'A', 66,
        'a', 66,
        'B', 182,
        'b', 182,
        'D', 479,
        'd', 479,
        'E', 371,
        'e', 371,
        'F', 478,
        'f', 478,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 75:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '0', 155,
        '1', 463,
        '2', 60,
        '3', 195,
        '5', 156,
        '6', 190,
        '7', 164,
        '9', 852,
        'A', 66,
        'a', 66,
        'B', 181,
        'b', 181,
        'D', 479,
        'd', 479,
        'E', 350,
        'e', 350,
        'F', 478,
        'f', 478,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 76:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(187);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 77:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '0', 173,
        '2', 157,
        '7', 454,
        '9', 855,
        'D', 484,
        'd', 484,
        'E', 351,
        'e', 351,
        'F', 505,
        'f', 505,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 78:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '0', 173,
        '2', 157,
        '7', 462,
        '9', 855,
        'B', 491,
        'b', 491,
        'D', 484,
        'd', 484,
        'E', 351,
        'e', 351,
        'F', 505,
        'f', 505,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 79:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(253);
      if (lookahead == '8') ADVANCE(350);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 80:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(253);
      if (lookahead == '8') ADVANCE(371);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 81:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(344);
      if (lookahead == '5') ADVANCE(313);
      if (lookahead == '6') ADVANCE(245);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 82:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(198);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 83:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '0', 211,
        '2', 175,
        '7', 461,
        '9', 856,
        'B', 484,
        'b', 484,
        'D', 487,
        'd', 487,
        'F', 488,
        'f', 488,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 84:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(479);
      if (lookahead == '1') ADVANCE(479);
      if (lookahead == '2') ADVANCE(479);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead == '4') ADVANCE(479);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 85:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(479);
      if (lookahead == '1') ADVANCE(479);
      if (lookahead == '2') ADVANCE(479);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 86:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(160);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 87:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '0', 366,
        '2', 209,
        '7', 458,
        '9', 853,
        'B', 484,
        'b', 484,
        'F', 485,
        'f', 485,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 88:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(478);
      if (lookahead == '3') ADVANCE(484);
      if (lookahead == '4') ADVANCE(484);
      if (lookahead == '5') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 89:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == '2') ADVANCE(192);
      if (lookahead == '7') ADVANCE(464);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(506);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 90:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == '1') ADVANCE(318);
      if (lookahead == '2') ADVANCE(172);
      if (lookahead == '7') ADVANCE(363);
      if (lookahead == '8') ADVANCE(397);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 91:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(490);
      if (lookahead == '1') ADVANCE(504);
      if (lookahead == '3') ADVANCE(489);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 92:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(490);
      if (lookahead == '1') ADVANCE(508);
      if (lookahead == '3') ADVANCE(489);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 93:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(506);
      if (lookahead == '1') ADVANCE(506);
      if (lookahead == '2') ADVANCE(506);
      if (lookahead == '3') ADVANCE(506);
      if (lookahead == '4') ADVANCE(506);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 94:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(506);
      if (lookahead == '1') ADVANCE(506);
      if (lookahead == '2') ADVANCE(506);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 95:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(485);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 96:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(486);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 97:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 98:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(505);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 99:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(487);
      if (lookahead == '1') ADVANCE(487);
      if (lookahead == '2') ADVANCE(487);
      if (lookahead == '3') ADVANCE(487);
      if (lookahead == '4') ADVANCE(487);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 100:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(487);
      if (lookahead == '1') ADVANCE(487);
      if (lookahead == '2') ADVANCE(487);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 101:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(174);
      if (lookahead == '2') ADVANCE(191);
      if (lookahead == '7') ADVANCE(455);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 102:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(488);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 103:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(475);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 104:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(509);
      if (lookahead == '1') ADVANCE(509);
      if (lookahead == '2') ADVANCE(509);
      if (lookahead == '3') ADVANCE(509);
      if (lookahead == '4') ADVANCE(509);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 105:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(509);
      if (lookahead == '1') ADVANCE(509);
      if (lookahead == '2') ADVANCE(509);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 106:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(499);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 107:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(494);
      if (lookahead == '1') ADVANCE(494);
      if (lookahead == '2') ADVANCE(494);
      if (lookahead == '3') ADVANCE(494);
      if (lookahead == '4') ADVANCE(494);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 108:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(494);
      if (lookahead == '1') ADVANCE(494);
      if (lookahead == '2') ADVANCE(494);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 109:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(510);
      if (lookahead == '1') ADVANCE(510);
      if (lookahead == '2') ADVANCE(510);
      if (lookahead == '3') ADVANCE(510);
      if (lookahead == '4') ADVANCE(510);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 110:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(510);
      if (lookahead == '1') ADVANCE(510);
      if (lookahead == '2') ADVANCE(510);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 111:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(507);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 112:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(511);
      if (lookahead == '1') ADVANCE(511);
      if (lookahead == '2') ADVANCE(511);
      if (lookahead == '3') ADVANCE(511);
      if (lookahead == '4') ADVANCE(511);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 113:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(511);
      if (lookahead == '1') ADVANCE(511);
      if (lookahead == '2') ADVANCE(511);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 114:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(503);
      if (lookahead == '1') ADVANCE(503);
      if (lookahead == '2') ADVANCE(503);
      if (lookahead == '3') ADVANCE(503);
      if (lookahead == '4') ADVANCE(503);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 115:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(503);
      if (lookahead == '1') ADVANCE(503);
      if (lookahead == '2') ADVANCE(503);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 116:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(502);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 117:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(433);
      if (lookahead == '1') ADVANCE(94);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 118:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(183);
      if (lookahead == '1') ADVANCE(445);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 119:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '0', 223,
        '1', 463,
        '2', 61,
        '3', 195,
        '5', 156,
        '6', 190,
        '7', 166,
        '9', 852,
        'A', 66,
        'a', 66,
        'B', 182,
        'b', 182,
        'D', 503,
        'd', 503,
        'E', 371,
        'e', 371,
        'F', 478,
        'f', 478,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 120:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(200);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 121:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(512);
      if (lookahead == '1') ADVANCE(512);
      if (lookahead == '2') ADVANCE(512);
      if (lookahead == '3') ADVANCE(512);
      if (lookahead == '4') ADVANCE(512);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 122:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(512);
      if (lookahead == '1') ADVANCE(512);
      if (lookahead == '2') ADVANCE(512);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 123:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(513);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 124:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(437);
      if (lookahead == '1') ADVANCE(100);
      if (lookahead == '6') ADVANCE(102);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 125:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(186);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 126:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(439);
      if (lookahead == '1') ADVANCE(105);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 127:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(440);
      if (lookahead == '1') ADVANCE(108);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 128:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(441);
      if (lookahead == '1') ADVANCE(110);
      if (lookahead == '6') ADVANCE(111);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 129:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(443);
      if (lookahead == '1') ADVANCE(113);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 130:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(447);
      if (lookahead == '1') ADVANCE(122);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 131:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(444);
      if (lookahead == '1') ADVANCE(115);
      if (lookahead == '5') ADVANCE(241);
      if (lookahead == '6') ADVANCE(88);
      if (lookahead == '7') ADVANCE(106);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 132:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(70);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == '6') ADVANCE(367);
      if (lookahead == '7') ADVANCE(415);
      if (lookahead == '8') ADVANCE(466);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 133:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(207);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 134:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(210);
      if (lookahead == '1') ADVANCE(445);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 135:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '0', 218,
        '2', 202,
        '7', 471,
        '9', 857,
        'D', 510,
        'd', 510,
        'F', 507,
        'f', 507,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 136:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(225);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 137:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '0', 368,
        '2', 213,
        '7', 837,
        '9', 854,
        'F', 486,
        'f', 486,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 138:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(214);
      if (lookahead == '2') ADVANCE(193);
      if (lookahead == '7') ADVANCE(469);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(509);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 139:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(230);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 140:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(216);
      if (lookahead == '2') ADVANCE(212);
      if (lookahead == '7') ADVANCE(470);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(494);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 141:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(232);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 142:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(220);
      if (lookahead == '2') ADVANCE(215);
      if (lookahead == '7') ADVANCE(472);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(511);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 143:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(233);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 144:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(221);
      if (lookahead == '2') ADVANCE(219);
      if (lookahead == '7') ADVANCE(473);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(512);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 145:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '0', 373,
        '2', 222,
        '7', 838,
        '9', 858,
        'F', 513,
        'f', 513,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 146:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(72);
      if (lookahead == '1') ADVANCE(80);
      if (lookahead == '6') ADVANCE(367);
      if (lookahead == '7') ADVANCE(415);
      if (lookahead == '8') ADVANCE(466);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 147:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '1', 54,
        '2', 151,
        '3', 317,
        '4', 320,
        '5', 428,
        '6', 91,
        '8', 247,
        '9', 346,
        'X', 178,
        'x', 178,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 148:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(484);
      if (lookahead == '2') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 149:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(484);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(497);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 150:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 151:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(394);
      if (lookahead == '4') ADVANCE(427);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 152:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(86);
      if (lookahead == '4') ADVANCE(380);
      if (lookahead == '8') ADVANCE(262);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(249);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 153:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '1', 118,
        '4', 376,
        '6', 150,
        '8', 251,
        'X', 252,
        'x', 252,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 154:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(84);
      if (lookahead == '3') ADVANCE(834);
      if (lookahead == '4') ADVANCE(348);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 155:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(84);
      if (lookahead == '3') ADVANCE(834);
      if (lookahead == '4') ADVANCE(347);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 156:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '1', 343,
        'A', 150,
        'a', 150,
        'C', 825,
        'c', 825,
        'F', 824,
        'f', 824,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 157:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(242);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 158:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '1', 62,
        '2', 151,
        '3', 317,
        '4', 280,
        '5', 449,
        '6', 91,
        '8', 255,
        '9', 346,
        'X', 226,
        'x', 226,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 159:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(2526);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 160:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(335);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 161:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(177);
      if (lookahead == '6') ADVANCE(150);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(258);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 162:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '1', 58,
        '4', 314,
        '5', 446,
        '6', 150,
        '8', 268,
        'X', 203,
        'x', 203,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 163:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '1', 58,
        '4', 314,
        '5', 446,
        '8', 268,
        'X', 204,
        'x', 204,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 164:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '1', 378,
        '3', 194,
        '9', 379,
        'C', 826,
        'c', 826,
        'E', 823,
        'e', 823,
        'F', 315,
        'f', 315,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 165:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '1', 378,
        '3', 194,
        '9', 384,
        'C', 826,
        'c', 826,
        'E', 823,
        'e', 823,
        'F', 315,
        'f', 315,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 166:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '1', 378,
        '3', 194,
        '9', 385,
        'C', 826,
        'c', 826,
        'E', 823,
        'e', 823,
        'F', 315,
        'f', 315,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 167:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '1', 378,
        '9', 379,
        'C', 826,
        'c', 826,
        'E', 823,
        'e', 823,
        'F', 315,
        'f', 315,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 168:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(51);
      if (lookahead == '2') ADVANCE(266);
      if (lookahead == '3') ADVANCE(357);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 169:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(51);
      if (lookahead == '2') ADVANCE(264);
      if (lookahead == '3') ADVANCE(357);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 170:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(51);
      if (lookahead == '2') ADVANCE(288);
      if (lookahead == '3') ADVANCE(357);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 171:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(332);
      if (lookahead == '7') ADVANCE(366);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 172:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(426);
      if (lookahead == '2') ADVANCE(415);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 173:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(49);
      if (lookahead == '4') ADVANCE(355);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 174:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(49);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 175:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(277);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 176:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(333);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 177:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(445);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 178:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '1', 396,
        '2', 57,
        '3', 835,
        'B', 150,
        'b', 150,
        'D', 427,
        'd', 427,
        'F', 427,
        'f', 427,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 179:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '1', 396,
        '2', 75,
        '3', 835,
        '6', 406,
        'B', 149,
        'b', 149,
        'D', 427,
        'd', 427,
        'F', 427,
        'f', 427,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 180:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(76);
      if (lookahead == '4') ADVANCE(420);
      if (lookahead == '8') ADVANCE(305);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(250);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 181:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(241);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 182:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(241);
      if (lookahead == ';') ADVANCE(2428);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 183:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(321);
      if (lookahead == '7') ADVANCE(369);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 184:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(845);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 185:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '1', 82,
        '4', 312,
        '5', 446,
        '8', 260,
        'X', 205,
        'x', 205,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 186:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(339);
      if (lookahead == '7') ADVANCE(372);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 187:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(429);
      if (lookahead == '7') ADVANCE(368);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 188:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(451);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(833);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 189:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(3);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 190:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(246);
      if (lookahead == '4') ADVANCE(246);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 191:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(246);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 192:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(271);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 193:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(278);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 194:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(501);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 195:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(315);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 196:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(97);
      if (lookahead == '4') ADVANCE(315);
      if (lookahead == '5') ADVANCE(446);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(206);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 197:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '1', 134,
        '4', 328,
        '5', 450,
        '6', 150,
        '8', 251,
        'X', 231,
        'x', 231,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 198:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(323);
      if (lookahead == '7') ADVANCE(370);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 199:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(93);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 200:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(322);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 201:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(125);
      if (lookahead == '4') ADVANCE(389);
      if (lookahead == '8') ADVANCE(303);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(256);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 202:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(284);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 203:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(405);
      if (lookahead == '2') ADVANCE(87);
      if (lookahead == '3') ADVANCE(839);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 204:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(405);
      if (lookahead == '2') ADVANCE(87);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 205:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(405);
      if (lookahead == '2') ADVANCE(83);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 206:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(405);
      if (lookahead == '2') ADVANCE(418);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 207:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(452);
      if (lookahead == '7') ADVANCE(373);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 208:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(282);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 209:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(381);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 210:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(324);
      if (lookahead == '7') ADVANCE(369);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 211:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(99);
      if (lookahead == '4') ADVANCE(356);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 212:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(283);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 213:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(382);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 214:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(104);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 215:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(285);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 216:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(107);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 217:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(286);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 218:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(109);
      if (lookahead == '4') ADVANCE(361);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 219:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(293);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 220:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(112);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 221:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(121);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 222:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(392);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 223:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(114);
      if (lookahead == '3') ADVANCE(834);
      if (lookahead == '4') ADVANCE(347);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 224:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(120);
      if (lookahead == '4') ADVANCE(378);
      if (lookahead == '8') ADVANCE(267);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(259);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 225:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(337);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 226:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '1', 413,
        '2', 73,
        '3', 835,
        '6', 406,
        'B', 149,
        'b', 149,
        'D', 427,
        'd', 427,
        'F', 427,
        'f', 427,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 227:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '1', 413,
        '2', 119,
        '3', 836,
        '6', 406,
        'B', 149,
        'b', 149,
        'D', 427,
        'd', 427,
        'F', 427,
        'f', 427,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 228:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '1', 413,
        '2', 74,
        '3', 836,
        '6', 406,
        'B', 149,
        'b', 149,
        'D', 427,
        'd', 427,
        'F', 427,
        'f', 427,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 229:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(133);
      if (lookahead == '4') ADVANCE(425);
      if (lookahead == '8') ADVANCE(307);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(290);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 230:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(338);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 231:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(414);
      if (lookahead == '2') ADVANCE(78);
      if (lookahead == '3') ADVANCE(839);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 232:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(340);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 233:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(341);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 234:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(136);
      if (lookahead == '4') ADVANCE(383);
      if (lookahead == '8') ADVANCE(304);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(289);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 235:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '1', 132,
        '2', 151,
        '3', 317,
        '4', 279,
        '5', 428,
        '6', 91,
        '8', 255,
        '9', 346,
        'X', 179,
        'x', 179,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 236:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(139);
      if (lookahead == '4') ADVANCE(388);
      if (lookahead == '8') ADVANCE(306);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(295);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 237:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '1', 146,
        '2', 151,
        '3', 317,
        '4', 281,
        '5', 449,
        '6', 92,
        '8', 291,
        '9', 346,
        'X', 227,
        'x', 227,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 238:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(141);
      if (lookahead == '4') ADVANCE(390);
      if (lookahead == '8') ADVANCE(308);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(298);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 239:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '1', 63,
        '2', 151,
        '3', 317,
        '4', 280,
        '5', 449,
        '6', 92,
        '8', 255,
        '9', 346,
        'X', 228,
        'x', 228,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 240:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '1') ADVANCE(143);
      if (lookahead == '4') ADVANCE(391);
      if (lookahead == '8') ADVANCE(309);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(300);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 241:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(484);
      if (lookahead == '3') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 242:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(484);
      if (lookahead == '5') ADVANCE(505);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 243:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(484);
      if (lookahead == '6') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 244:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(484);
      if (lookahead == '7') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 245:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(484);
      if (lookahead == '9') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 246:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 247:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '2', 56,
        '5', 456,
        '6', 345,
        '7', 168,
        '8', 81,
        '9', 416,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 248:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(150);
      if (lookahead == '3') ADVANCE(851);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 249:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(89);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 250:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(137);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 251:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(68);
      if (lookahead == '7') ADVANCE(254);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 252:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(77);
      if (lookahead == '3') ADVANCE(839);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 253:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(393);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 254:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(242);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 255:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '2', 55,
        '5', 456,
        '6', 345,
        '7', 169,
        '8', 81,
        '9', 416,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 256:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(135);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 257:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(2528);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 258:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(848);
      if (lookahead == '3') ADVANCE(839);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 259:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(101);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 260:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(124);
      if (lookahead == '7') ADVANCE(261);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 261:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(277);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 262:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(117);
      if (lookahead == '7') ADVANCE(273);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 263:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '2', 479,
        '3', 484,
        '5', 478,
        '7', 500,
        'E', 474,
        'e', 474,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 264:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(479);
      if (lookahead == '3') ADVANCE(484);
      if (lookahead == '5') ADVANCE(478);
      if (lookahead == '7') ADVANCE(500);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 265:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(479);
      if (lookahead == '3') ADVANCE(484);
      if (lookahead == '5') ADVANCE(478);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(474);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 266:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(479);
      if (lookahead == '3') ADVANCE(484);
      if (lookahead == '5') ADVANCE(478);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 267:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(69);
      if (lookahead == '7') ADVANCE(272);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 268:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(407);
      if (lookahead == '7') ADVANCE(294);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 269:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(244);
      if (lookahead == '4') ADVANCE(394);
      if (lookahead == '9') ADVANCE(344);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 270:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(9);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 271:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(506);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 272:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(246);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 273:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(271);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 274:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(275);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 275:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(184);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 276:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(278);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 277:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(487);
      if (lookahead == '5') ADVANCE(488);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 278:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(509);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 279:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(495);
      if (lookahead == '3') ADVANCE(477);
      if (lookahead == '5') ADVANCE(479);
      if (lookahead == '7') ADVANCE(478);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 280:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(495);
      if (lookahead == '3') ADVANCE(493);
      if (lookahead == '5') ADVANCE(479);
      if (lookahead == '7') ADVANCE(478);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 281:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(495);
      if (lookahead == '3') ADVANCE(493);
      if (lookahead == '5') ADVANCE(503);
      if (lookahead == '7') ADVANCE(478);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 282:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(497);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 283:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(494);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 284:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(510);
      if (lookahead == '5') ADVANCE(507);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 285:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(511);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 286:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(496);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 287:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '2', 503,
        '3', 484,
        '5', 478,
        '7', 500,
        'E', 474,
        'e', 474,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 288:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(503);
      if (lookahead == '3') ADVANCE(484);
      if (lookahead == '5') ADVANCE(478);
      if (lookahead == '7') ADVANCE(500);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 289:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(138);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 290:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(145);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 291:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '2', 131,
        '5', 456,
        '6', 345,
        '7', 170,
        '8', 81,
        '9', 416,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 292:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(284);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 293:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(512);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 294:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(381);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 295:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(140);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 296:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(283);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 297:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(382);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 298:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(142);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 299:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(285);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 300:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(144);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 301:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(293);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 302:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(392);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 303:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(128);
      if (lookahead == '7') ADVANCE(292);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 304:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(126);
      if (lookahead == '7') ADVANCE(276);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 305:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(410);
      if (lookahead == '7') ADVANCE(297);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 306:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(127);
      if (lookahead == '7') ADVANCE(296);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 307:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(412);
      if (lookahead == '7') ADVANCE(302);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 308:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(129);
      if (lookahead == '7') ADVANCE(299);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 309:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '2') ADVANCE(130);
      if (lookahead == '7') ADVANCE(301);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 310:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(484);
      if (lookahead == '4') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 311:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(484);
      if (lookahead == '4') ADVANCE(487);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 312:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(484);
      if (lookahead == '5') ADVANCE(487);
      if (lookahead == '7') ADVANCE(488);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 313:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(484);
      if (lookahead == '7') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 314:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(484);
      if (lookahead == '7') ADVANCE(485);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 315:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 316:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(839);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 317:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(489);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 318:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(319);
      if (lookahead == '8') ADVANCE(417);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 319:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(477);
      if (lookahead == '4') ADVANCE(479);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 320:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(477);
      if (lookahead == '5') ADVANCE(479);
      if (lookahead == '7') ADVANCE(478);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 321:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(344);
      if (lookahead == '8') ADVANCE(421);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 322:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(344);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 323:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(311);
      if (lookahead == '8') ADVANCE(422);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 324:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(327);
      if (lookahead == '8') ADVANCE(421);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 325:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(493);
      if (lookahead == '4') ADVANCE(479);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 326:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(493);
      if (lookahead == '4') ADVANCE(503);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 327:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(491);
      if (lookahead == '4') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 328:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(491);
      if (lookahead == '5') ADVANCE(484);
      if (lookahead == '7') ADVANCE(505);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 329:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(501);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 330:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(315);
      if (lookahead == '6') ADVANCE(315);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(248);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 331:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(315);
      if (lookahead == '7') ADVANCE(378);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 332:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(315);
      if (lookahead == '8') ADVANCE(419);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 333:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(315);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 334:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(325);
      if (lookahead == '8') ADVANCE(417);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 335:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(352);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 336:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(326);
      if (lookahead == '8') ADVANCE(417);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 337:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(358);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 338:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(359);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 339:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(360);
      if (lookahead == '8') ADVANCE(423);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 340:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(362);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 341:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '3') ADVANCE(364);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 342:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(484);
      if (lookahead == '7') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 343:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(484);
      if (lookahead == '8') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 344:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 345:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(394);
      if (lookahead == '6') ADVANCE(52);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 346:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(457);
      if (lookahead == '6') ADVANCE(331);
      if (lookahead == '7') ADVANCE(269);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 347:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '4', 478,
        '7', 484,
        '8', 484,
        '9', 484,
        'E', 499,
        'e', 499,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 348:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(478);
      if (lookahead == '7') ADVANCE(484);
      if (lookahead == '8') ADVANCE(484);
      if (lookahead == '9') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 349:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(478);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 350:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(103);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 351:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(53);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 352:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(506);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 353:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(485);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 354:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(486);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 355:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(505);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 356:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(488);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 357:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(474);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 358:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(509);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 359:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(494);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 360:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(510);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 361:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(507);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 362:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(511);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 363:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(349);
      if (lookahead == '5') ADVANCE(241);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 364:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(512);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 365:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(513);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 366:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(353);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 367:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(387);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 368:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(354);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 369:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(355);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 370:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(356);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 371:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(116);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 372:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(361);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 373:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '4') ADVANCE(365);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 374:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(484);
      if (lookahead == '6') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 375:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(484);
      if (lookahead == '6') ADVANCE(487);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 376:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(484);
      if (lookahead == '7') ADVANCE(505);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 377:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(484);
      if (lookahead == '9') ADVANCE(484);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 378:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 379:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(477);
      if (lookahead == '6') ADVANCE(479);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 380:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(506);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 381:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(485);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 382:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(486);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 383:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(509);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 384:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(493);
      if (lookahead == '6') ADVANCE(479);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 385:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(493);
      if (lookahead == '6') ADVANCE(503);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 386:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(491);
      if (lookahead == '6') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 387:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(498);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 388:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(494);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 389:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(510);
      if (lookahead == '7') ADVANCE(507);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 390:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(511);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 391:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(512);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 392:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '5') ADVANCE(513);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 393:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(484);
      if (lookahead == '7') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 394:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 395:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(150);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(316);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 396:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(847);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 397:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(374);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 398:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(460);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 399:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(453);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 400:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(506);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 401:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(509);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 402:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(494);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 403:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(510);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 404:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(511);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 405:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(846);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 406:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(843);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 407:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(95);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 408:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(465);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 409:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(512);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 410:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(96);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 411:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(467);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 412:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(123);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 413:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(849);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 414:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '6') ADVANCE(850);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 415:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 416:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(453);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 417:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(478);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 418:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(459);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 419:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(485);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 420:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(486);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 421:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(505);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 422:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(488);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 423:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(507);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 424:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(322);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 425:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '7') ADVANCE(513);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 426:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(484);
      if (lookahead == '9') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 427:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 428:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(398);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 429:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(420);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 430:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(479);
      if (lookahead == '9') ADVANCE(479);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 431:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(424);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(274);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 432:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(478);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 433:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(506);
      if (lookahead == '9') ADVANCE(506);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 434:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(485);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 435:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(486);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 436:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(505);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 437:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(487);
      if (lookahead == '9') ADVANCE(487);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 438:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(488);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 439:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(509);
      if (lookahead == '9') ADVANCE(509);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 440:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(494);
      if (lookahead == '9') ADVANCE(494);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 441:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(510);
      if (lookahead == '9') ADVANCE(510);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 442:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(507);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 443:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(511);
      if (lookahead == '9') ADVANCE(511);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 444:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(503);
      if (lookahead == '9') ADVANCE(503);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 445:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(351);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 446:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(399);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 447:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(512);
      if (lookahead == '9') ADVANCE(512);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 448:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(513);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 449:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(408);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 450:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(411);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 451:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(468);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 452:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '8') ADVANCE(425);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 453:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 454:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(394);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(829);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 455:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(394);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 456:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(310);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 457:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(243);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 458:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(378);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(827);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 459:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(378);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 460:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(477);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 461:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(375);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(830);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 462:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(386);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(829);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 463:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '9', 148,
        ';', 2438,
        'C', 394,
        'c', 394,
        'D', 342,
        'd', 342,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 464:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(400);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 465:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(493);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 466:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(497);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 467:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(491);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 468:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(496);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 469:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(401);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 470:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(402);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 471:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(403);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(831);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 472:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(404);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 473:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '9') ADVANCE(409);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 474:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2443);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 475:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2434);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 476:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(484);
      if (lookahead == 'e') ADVANCE(484);
      if (lookahead == 'm') ADVANCE(673);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 477:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 478:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 479:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2437);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 480:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2442);
      if (lookahead == 'a') ADVANCE(734);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 481:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2442);
      if (lookahead == 'f') ADVANCE(778);
      if (lookahead == 'q') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 482:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2442);
      if (lookahead == 'o') ADVANCE(810);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 483:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2442);
      if (lookahead == 't') ADVANCE(698);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 484:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 485:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 486:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(874);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 487:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2426);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 488:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 489:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2438);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 490:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 491:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2429);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 492:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2428);
      if (lookahead == 'b') ADVANCE(484);
      if (lookahead == 'e') ADVANCE(484);
      if (lookahead == 'm') ADVANCE(673);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 493:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2428);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 494:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 495:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2506);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 496:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2530);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 497:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2501);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 498:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2522);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 499:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2518);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 500:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2510);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 501:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2514);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 502:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2402);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 503:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2418);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 504:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2439);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 505:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 506:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(862);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 507:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 508:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2404);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 509:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(863);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 510:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(4);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 511:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(2);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 512:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 513:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 514:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 515:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(739);
      if (lookahead == 'R') ADVANCE(640);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 516:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(739);
      if (lookahead == 'T') ADVANCE(590);
      if (lookahead == 'p') ADVANCE(593);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 517:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(739);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 518:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'L') ADVANCE(594);
      if (lookahead == 'R') ADVANCE(640);
      if (lookahead == 'U') ADVANCE(714);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 519:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'M') ADVANCE(648);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 520:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'N') ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 521:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'P') ADVANCE(668);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 522:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(640);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 523:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 524:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(559);
      if (lookahead == 'd') ADVANCE(526);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == 'v') ADVANCE(655);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 525:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(559);
      if (lookahead == 'd') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == 'v') ADVANCE(655);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 526:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(746);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 527:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(675);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 528:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(675);
      if (lookahead == 'i') ADVANCE(615);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 529:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(616);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 530:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead == 'p') ADVANCE(540);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 531:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead == 'y') ADVANCE(712);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 532:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 533:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(562);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 534:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(657);
      if (lookahead == 'y') ADVANCE(712);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 535:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(657);
      if (lookahead == 'y') ADVANCE(726);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 536:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(656);
      if (lookahead == 'd') ADVANCE(526);
      if (lookahead == 'i') ADVANCE(568);
      if (lookahead == 'n') ADVANCE(718);
      if (lookahead == 'p') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 537:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(656);
      if (lookahead == 'd') ADVANCE(526);
      if (lookahead == 'i') ADVANCE(688);
      if (lookahead == 'n') ADVANCE(718);
      if (lookahead == 'p') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 538:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(656);
      if (lookahead == 'd') ADVANCE(558);
      if (lookahead == 'i') ADVANCE(569);
      if (lookahead == 'n') ADVANCE(718);
      if (lookahead == 'p') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 539:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(647);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 540:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(739);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 541:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(734);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 542:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(661);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 543:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(659);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 544:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(666);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 545:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(765);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 546:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(669);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 547:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(750);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 548:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(740);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 549:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(764);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 550:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(563);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 551:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(768);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 552:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(767);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 553:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(769);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 554:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(770);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 555:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(771);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 556:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(772);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 557:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(773);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 558:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(774);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 559:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(654);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 560:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(650);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 561:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(653);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 562:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 563:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 564:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(702);
      if (lookahead == 'p') ADVANCE(668);
      if (lookahead == 's') ADVANCE(671);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 565:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(702);
      if (lookahead == 'p') ADVANCE(668);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 566:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(687);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 567:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(547);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 568:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(545);
      if (lookahead == 'n') ADVANCE(794);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 569:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(545);
      if (lookahead == 'n') ADVANCE(808);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 570:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(549);
      if (lookahead == 'i') ADVANCE(689);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 571:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(549);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 572:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(552);
      if (lookahead == 'i') ADVANCE(690);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 573:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(552);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 574:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(553);
      if (lookahead == 'i') ADVANCE(691);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 575:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(553);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 576:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(554);
      if (lookahead == 'i') ADVANCE(692);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 577:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(554);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 578:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(555);
      if (lookahead == 'i') ADVANCE(693);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 579:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(555);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 580:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(556);
      if (lookahead == 'i') ADVANCE(694);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 581:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(556);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 582:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(557);
      if (lookahead == 'i') ADVANCE(695);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 583:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(557);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 584:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(782);
      if (lookahead == 'o') ADVANCE(811);
      if (lookahead == 'r') ADVANCE(532);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 585:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(782);
      if (lookahead == 'r') ADVANCE(532);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 586:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 587:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(650);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 588:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(735);
      if (lookahead == 'l') ADVANCE(791);
      if (lookahead == 'm') ADVANCE(484);
      if (lookahead == 'r') ADVANCE(700);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 589:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(735);
      if (lookahead == 'l') ADVANCE(798);
      if (lookahead == 'm') ADVANCE(484);
      if (lookahead == 'r') ADVANCE(700);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 590:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(586);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 591:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(754);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 592:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(673);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 593:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(730);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 594:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(607);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 595:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(676);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 596:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(751);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 597:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(677);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 598:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(678);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 599:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(680);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 600:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(681);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 601:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(682);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 602:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(683);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 603:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(685);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 604:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 605:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 606:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(777);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 607:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(779);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 608:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(752);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 609:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(497);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 610:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(496);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 611:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(645);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 612:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(646);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 613:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(697);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 614:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 615:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(621);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 616:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(624);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 617:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 618:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(701);
      if (lookahead == 'q') ADVANCE(802);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 619:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(479);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 620:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(595);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 621:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(779);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 622:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(592);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 623:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(506);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 624:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(786);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 625:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(487);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 626:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(509);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 627:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(494);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 628:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(510);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 629:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(511);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 630:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(503);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 631:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(512);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 632:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(597);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 633:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(598);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 634:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(599);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 635:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(600);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 636:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(601);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 637:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(602);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 638:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(603);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 639:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'h') ADVANCE(604);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 640:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(615);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 641:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(729);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 642:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 643:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(613);
      if (lookahead == 'o') ADVANCE(776);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 644:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(686);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 645:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(679);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 646:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(673);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 647:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(616);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 648:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(687);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 649:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(484);
      if (lookahead == 'r') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 650:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 651:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(658);
      if (lookahead == 'q') ADVANCE(787);
      if (lookahead == 'r') ADVANCE(532);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 652:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(789);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 653:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(489);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 654:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 655:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(783);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 656:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(586);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 657:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(609);
      if (lookahead == 'r') ADVANCE(729);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 658:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(478);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 659:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(742);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 660:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(485);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 661:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(753);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 662:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(486);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 663:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(505);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 664:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(488);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 665:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 666:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(610);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 667:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(513);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 668:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(793);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 669:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(763);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 670:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(801);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 671:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(547);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 672:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 673:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 674:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(611);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 675:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(614);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 676:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(479);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 677:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(506);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 678:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(487);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 679:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(474);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 680:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(509);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 681:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(494);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 682:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(510);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 683:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(511);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 684:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(503);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 685:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(512);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 686:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(792);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 687:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 688:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(794);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 689:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(795);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 690:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(797);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 691:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(800);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 692:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(804);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 693:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(805);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 694:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(806);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 695:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(807);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 696:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(612);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 697:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(565);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 698:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(672);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 699:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(810);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 700:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(608);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 701:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(738);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 702:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(775);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 703:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(660);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 704:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(662);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 705:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(663);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 706:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(664);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 707:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(665);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 708:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(667);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 709:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(516);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 710:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 711:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 712:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(620);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 713:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(622);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 714:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(540);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 715:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(668);
      if (lookahead == 'q') ADVANCE(790);
      if (lookahead == 'x') ADVANCE(561);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 716:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(668);
      if (lookahead == 'q') ADVANCE(803);
      if (lookahead == 'x') ADVANCE(561);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 717:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(668);
      if (lookahead == 'u') ADVANCE(649);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 718:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(668);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 719:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(632);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 720:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(633);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 721:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(634);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 722:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(635);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 723:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(636);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 724:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(637);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 725:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(638);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 726:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(639);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 727:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'q') ADVANCE(799);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 728:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(729);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 729:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 730:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(522);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 731:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(482);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 732:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(642);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 733:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(605);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 734:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(586);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 735:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(710);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 736:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(533);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 737:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(699);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 738:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(780);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 739:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(737);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 740:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(731);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 741:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(550);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 742:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 743:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(519);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 744:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(476);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 745:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(521);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 746:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(619);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 747:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(492);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 748:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(671);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 749:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(479);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 750:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(617);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 751:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(775);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 752:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(796);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 753:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(504);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 754:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(781);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 755:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(506);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 756:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(487);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 757:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(509);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 758:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(491);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 759:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(494);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 760:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(510);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 761:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(511);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 762:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(503);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 763:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(508);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 764:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(623);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 765:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(784);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 766:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(512);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 767:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(625);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 768:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(785);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 769:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(626);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 770:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(627);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 771:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(628);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 772:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(629);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 773:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(631);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 774:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 's') ADVANCE(630);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 775:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 776:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(483);
      if (lookahead == 'x') ADVANCE(717);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 777:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(515);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 778:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(539);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 779:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(517);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 780:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(518);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 781:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(489);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 782:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(732);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 783:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(490);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 784:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(495);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 785:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(500);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 786:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 't') ADVANCE(540);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 787:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(480);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 788:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(591);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 789:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(743);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 790:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(542);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 791:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(744);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 792:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(745);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 793:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(742);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 794:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(749);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 795:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(755);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 796:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(733);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 797:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(756);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 798:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(747);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 799:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(543);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 800:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(757);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 801:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(758);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 802:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(541);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 803:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(546);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 804:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(759);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 805:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(760);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 806:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(761);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 807:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(766);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 808:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(762);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 809:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(596);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 810:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 811:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'w') ADVANCE(551);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 812:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'x') ADVANCE(560);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 813:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(713);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 814:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(719);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 815:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(720);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 816:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(721);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 817:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(722);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 818:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(723);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 819:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(724);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 820:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'y') ADVANCE(725);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 821:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 0xfe0e) ADVANCE(2414);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 822:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(860);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 823:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(484);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 824:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(484);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 825:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 826:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(478);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 827:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(485);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 828:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(486);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 829:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(505);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 830:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(488);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 831:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(507);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 832:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(513);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 833:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(844);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 834:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(484);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 835:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        'C', 490,
        'c', 490,
        'D', 504,
        'd', 504,
        'F', 489,
        'f', 489,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 836:
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        'C', 490,
        'c', 490,
        'D', 508,
        'd', 508,
        'F', 489,
        'f', 489,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 837:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(828);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 838:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(832);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 839:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 840:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(477);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 841:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(493);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 842:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(491);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 843:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(498);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 844:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(496);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 845:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 846:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(839);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 847:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(840);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 848:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(351);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 849:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(841);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 850:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(842);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 851:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(484);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 852:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(432);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 853:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(434);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 854:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(435);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 855:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(436);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 856:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(438);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 857:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 858:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(448);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 859:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2426);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 860:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(859);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 861:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2426);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 862:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2421);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 863:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2422);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 864:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2524);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 865:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2441);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 866:
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 867:
      ADVANCE_MAP(
        '\n', 2380,
        '\r', 2375,
        '&', 11,
        '\t', 2374,
        0x0b, 2374,
        '\f', 2374,
        ' ', 2374,
        'A', 869,
        'B', 869,
        'a', 869,
        'b', 869,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(862);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 868:
      if (lookahead == '\n') ADVANCE(2380);
      if (lookahead == '\r') ADVANCE(2375);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2374);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(869);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 869:
      if (lookahead == '\n') ADVANCE(2380);
      if (lookahead == '\r') ADVANCE(2375);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2374);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2376);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 870:
      ADVANCE_MAP(
        '\n', 1190,
        '\r', 871,
        '&', 22,
        '\t', 870,
        0x0b, 870,
        '\f', 870,
        ' ', 870,
        '/', 874,
        0x2044, 874,
        0x2215, 874,
        0x27cb, 874,
        0x29f8, 874,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 871:
      if (lookahead == '\n') ADVANCE(1190);
      if (lookahead == '&') ADVANCE(1167);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1191);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1194);
      END_STATE();
    case 872:
      ADVANCE_MAP(
        '\n', 1137,
        '\r', 1138,
        '!', 2440,
        '$', 865,
        '&', 10,
        '(', 2363,
        '0', 867,
        ';', 2278,
        '<', 514,
        '=', 2435,
        '?', 2440,
        '@', 2416,
        'N', 2396,
        'P', 2409,
        'R', 2394,
        'T', 520,
        '[', 2289,
        'e', 2385,
        'p', 822,
        '{', 2367,
        0x221e, 2443,
        0x2659, 2412,
        0x265f, 821,
        0x2e40, 2434,
        'O', 35,
        'o', 35,
        'Z', 861,
        'z', 861,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 873,
        0x0b, 873,
        '\f', 873,
        ' ', 873,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2386);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2437);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2395);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 873:
      ADVANCE_MAP(
        '\n', 1137,
        '\r', 872,
        '!', 2440,
        '$', 865,
        '&', 10,
        '(', 2363,
        '0', 867,
        ';', 2278,
        '<', 514,
        '=', 2435,
        '?', 2440,
        '@', 2416,
        'N', 2396,
        'P', 2409,
        'R', 2394,
        'T', 520,
        '[', 2289,
        'e', 2385,
        'p', 822,
        '{', 2367,
        0x221e, 2443,
        0x2659, 2412,
        0x265f, 821,
        0x2e40, 2434,
        'O', 35,
        'o', 35,
        'Z', 861,
        'z', 861,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 873,
        0x0b, 873,
        '\f', 873,
        ' ', 873,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2386);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2437);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2395);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 874:
      ADVANCE_MAP(
        '\n', 1192,
        '\r', 875,
        '&', 14,
        '=', 2442,
        0x2e40, 2442,
        '\t', 874,
        0x0b, 874,
        '\f', 874,
        ' ', 874,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 875:
      if (lookahead == '\n') ADVANCE(1192);
      if (lookahead == '&') ADVANCE(1158);
      if (lookahead == '=' ||
          lookahead == 0x2e40) ADVANCE(2432);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1194);
      END_STATE();
    case 876:
      if (lookahead == '\n') ADVANCE(2286);
      END_STATE();
    case 877:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      END_STATE();
    case 878:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(877);
      END_STATE();
    case 879:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(878);
      END_STATE();
    case 880:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(879);
      END_STATE();
    case 881:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(880);
      END_STATE();
    case 882:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(881);
      END_STATE();
    case 883:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(882);
      END_STATE();
    case 884:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(883);
      END_STATE();
    case 885:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(884);
      END_STATE();
    case 886:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(885);
      END_STATE();
    case 887:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(886);
      END_STATE();
    case 888:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(887);
      END_STATE();
    case 889:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(888);
      END_STATE();
    case 890:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(889);
      END_STATE();
    case 891:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(890);
      END_STATE();
    case 892:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(891);
      END_STATE();
    case 893:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(892);
      END_STATE();
    case 894:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(893);
      END_STATE();
    case 895:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(894);
      END_STATE();
    case 896:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(895);
      END_STATE();
    case 897:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(896);
      END_STATE();
    case 898:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(897);
      END_STATE();
    case 899:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(898);
      END_STATE();
    case 900:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(899);
      END_STATE();
    case 901:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(900);
      END_STATE();
    case 902:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(901);
      END_STATE();
    case 903:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(902);
      END_STATE();
    case 904:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(903);
      END_STATE();
    case 905:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(904);
      END_STATE();
    case 906:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(905);
      END_STATE();
    case 907:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(906);
      END_STATE();
    case 908:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(907);
      END_STATE();
    case 909:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(908);
      END_STATE();
    case 910:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(909);
      END_STATE();
    case 911:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(910);
      END_STATE();
    case 912:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(911);
      END_STATE();
    case 913:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(912);
      END_STATE();
    case 914:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(913);
      END_STATE();
    case 915:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(914);
      END_STATE();
    case 916:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(915);
      END_STATE();
    case 917:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(916);
      END_STATE();
    case 918:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(917);
      END_STATE();
    case 919:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(918);
      END_STATE();
    case 920:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(919);
      END_STATE();
    case 921:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(920);
      END_STATE();
    case 922:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(921);
      END_STATE();
    case 923:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(922);
      END_STATE();
    case 924:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(923);
      END_STATE();
    case 925:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(924);
      END_STATE();
    case 926:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(925);
      END_STATE();
    case 927:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(926);
      END_STATE();
    case 928:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(927);
      END_STATE();
    case 929:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(928);
      END_STATE();
    case 930:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(929);
      END_STATE();
    case 931:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(930);
      END_STATE();
    case 932:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(931);
      END_STATE();
    case 933:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(932);
      END_STATE();
    case 934:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(933);
      END_STATE();
    case 935:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(934);
      END_STATE();
    case 936:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(935);
      END_STATE();
    case 937:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(936);
      END_STATE();
    case 938:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(937);
      END_STATE();
    case 939:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(938);
      END_STATE();
    case 940:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(939);
      END_STATE();
    case 941:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(940);
      END_STATE();
    case 942:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(941);
      END_STATE();
    case 943:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(942);
      END_STATE();
    case 944:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(943);
      END_STATE();
    case 945:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(944);
      END_STATE();
    case 946:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(945);
      END_STATE();
    case 947:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(946);
      END_STATE();
    case 948:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(947);
      END_STATE();
    case 949:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(948);
      END_STATE();
    case 950:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(949);
      END_STATE();
    case 951:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(950);
      END_STATE();
    case 952:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(951);
      END_STATE();
    case 953:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(952);
      END_STATE();
    case 954:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(953);
      END_STATE();
    case 955:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(954);
      END_STATE();
    case 956:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(955);
      END_STATE();
    case 957:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(956);
      END_STATE();
    case 958:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(957);
      END_STATE();
    case 959:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(958);
      END_STATE();
    case 960:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(959);
      END_STATE();
    case 961:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(960);
      END_STATE();
    case 962:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(961);
      END_STATE();
    case 963:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(962);
      END_STATE();
    case 964:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(963);
      END_STATE();
    case 965:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(964);
      END_STATE();
    case 966:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(965);
      END_STATE();
    case 967:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(966);
      END_STATE();
    case 968:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(967);
      END_STATE();
    case 969:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(968);
      END_STATE();
    case 970:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(969);
      END_STATE();
    case 971:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(970);
      END_STATE();
    case 972:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(971);
      END_STATE();
    case 973:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(972);
      END_STATE();
    case 974:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(973);
      END_STATE();
    case 975:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(974);
      END_STATE();
    case 976:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(975);
      END_STATE();
    case 977:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(976);
      END_STATE();
    case 978:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(977);
      END_STATE();
    case 979:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(978);
      END_STATE();
    case 980:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(979);
      END_STATE();
    case 981:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(980);
      END_STATE();
    case 982:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(981);
      END_STATE();
    case 983:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(982);
      END_STATE();
    case 984:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(983);
      END_STATE();
    case 985:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(984);
      END_STATE();
    case 986:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(985);
      END_STATE();
    case 987:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(986);
      END_STATE();
    case 988:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(987);
      END_STATE();
    case 989:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(988);
      END_STATE();
    case 990:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(989);
      END_STATE();
    case 991:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(990);
      END_STATE();
    case 992:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(991);
      END_STATE();
    case 993:
      if (lookahead == '\n') ADVANCE(2286);
      if (lookahead == '\r') ADVANCE(876);
      if (lookahead == '-') ADVANCE(992);
      END_STATE();
    case 994:
      if (lookahead == '\n') ADVANCE(2287);
      END_STATE();
    case 995:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1111);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 996:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(995);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 997:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 998:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(997);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 999:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(998);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1000:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(999);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1001:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1000);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1002:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1001);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1003:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1004:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1003);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1005:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1004);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1006:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1005);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1007:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1006);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1008:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1007);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1009:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1008);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1010:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1009);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1011:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1010);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1012:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1011);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1013:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1012);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1014:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1013);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1015:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1014);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1016:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1015);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1017:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1016);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1018:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1017);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1019:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1018);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1020:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1019);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1021:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1020);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1022:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1021);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1023:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1022);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1024:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1023);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1025:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1024);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1026:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1025);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1027:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1026);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1028:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1027);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1029:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1028);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1030:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1029);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1031:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1030);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1032:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1031);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1033:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1032);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1034:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1035:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1034);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1036:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1035);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1037:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1036);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1038:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1037);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1039:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1038);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1040:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1039);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1041:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1040);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1042:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1043:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1042);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1044:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1043);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1045:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1044);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1046:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1045);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1047:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1046);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1048:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1047);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1049:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1048);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1050:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1049);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1051:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1050);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1052:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1051);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1053:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1052);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1054:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1053);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1055:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1054);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1056:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1055);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1057:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1056);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1058:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1057);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1059:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1058);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1060:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1059);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1061:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1060);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1062:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1061);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1063:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1062);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1064:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1063);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1065:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1064);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1066:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1065);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1067:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1066);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1068:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1067);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1069:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1068);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1070:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1069);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1071:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1070);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1072:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1071);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1073:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1072);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1074:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1073);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1075:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1074);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1076:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1075);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1077:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1076);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1078:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1077);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1079:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1078);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1080:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1079);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1081:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1080);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1082:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1081);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1083:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1082);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1084:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1083);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1085:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1084);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1086:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1085);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1087:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1086);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1088:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1087);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1089:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1088);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1090:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1089);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1091:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1090);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1092:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1091);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1093:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1092);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1094:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1093);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1095:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1094);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1096:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1095);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1097:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1096);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1098:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1097);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1099:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1098);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1100:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1099);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1101:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1100);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1102:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1101);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1103:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1102);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1104:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1103);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1105:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1104);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1106:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1107:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1106);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1108:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1107);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1109:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1108);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1110:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead == '-') ADVANCE(1109);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1111:
      if (lookahead == '\n') ADVANCE(2287);
      if (lookahead == '\r') ADVANCE(994);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1112:
      ADVANCE_MAP(
        '\n', 1139,
        '\r', 1140,
        '!', 2440,
        '$', 865,
        '&', 27,
        '(', 2363,
        ')', 2365,
        '*', 2504,
        '0', 2478,
        '1', 2454,
        ';', 2278,
        '<', 514,
        '=', 2435,
        '?', 2440,
        '@', 2416,
        'N', 2396,
        'O', 2474,
        'P', 2409,
        'R', 2394,
        'T', 520,
        '[', 2289,
        'e', 2385,
        'o', 2483,
        'p', 822,
        '{', 2367,
        '}', 2369,
        0xbd, 2498,
        0x66d, 2520,
        0x204e, 2516,
        0x2217, 2508,
        0x221e, 2443,
        0x2659, 2412,
        0x265f, 821,
        0x2731, 2512,
        0x2e40, 2434,
        'Z', 861,
        'z', 861,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 1113,
        0x0b, 1113,
        '\f', 1113,
        ' ', 1113,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2386);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2437);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2395);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1113:
      ADVANCE_MAP(
        '\n', 1139,
        '\r', 1112,
        '!', 2440,
        '$', 865,
        '&', 27,
        '(', 2363,
        ')', 2365,
        '*', 2504,
        '0', 2478,
        '1', 2454,
        ';', 2278,
        '<', 514,
        '=', 2435,
        '?', 2440,
        '@', 2416,
        'N', 2396,
        'O', 2474,
        'P', 2409,
        'R', 2394,
        'T', 520,
        '[', 2289,
        'e', 2385,
        'o', 2483,
        'p', 822,
        '{', 2367,
        '}', 2369,
        0xbd, 2498,
        0x66d, 2520,
        0x204e, 2516,
        0x2217, 2508,
        0x221e, 2443,
        0x2659, 2412,
        0x265f, 821,
        0x2731, 2512,
        0x2e40, 2434,
        'Z', 861,
        'z', 861,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 1113,
        0x0b, 1113,
        '\f', 1113,
        ' ', 1113,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2386);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2437);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2395);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1114:
      ADVANCE_MAP(
        '\n', 1117,
        '\r', 1114,
        '!', 2451,
        '$', 2265,
        '&', 1159,
        '(', 2362,
        '*', 2503,
        '0', 2481,
        '1', 2455,
        ';', 2277,
        '<', 1847,
        '=', 2446,
        '?', 2451,
        '@', 2415,
        'N', 2398,
        'O', 2476,
        'P', 2410,
        'R', 2397,
        'T', 1853,
        '[', 2288,
        ']', 2291,
        'e', 2387,
        'o', 2485,
        'p', 2209,
        '{', 2366,
        0xbd, 2499,
        0x66d, 2519,
        0x204e, 2515,
        0x2217, 2507,
        0x221e, 2444,
        0x2659, 2411,
        0x265f, 2208,
        0x2731, 2511,
        0x2e40, 2445,
        'Z', 2261,
        'z', 2261,
        '+', 1195,
        0x16ed, 1195,
        0x2795, 1195,
        '\t', 1114,
        0x0b, 1114,
        '\f', 1114,
        ' ', 1114,
        '/', 1193,
        0x2044, 1193,
        0x2215, 1193,
        0x27cb, 1193,
        0x29f8, 1193,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2447);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2393);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2432);
      END_STATE();
    case 1115:
      ADVANCE_MAP(
        '\n', 1117,
        '\r', 1114,
        '!', 2451,
        '$', 2265,
        '&', 1159,
        '(', 2362,
        '*', 2503,
        '0', 2481,
        '1', 2455,
        ';', 2277,
        '<', 1847,
        '=', 2446,
        '?', 2451,
        '@', 2415,
        'O', 2476,
        'P', 2410,
        'R', 2397,
        'T', 1853,
        '[', 2288,
        ']', 2291,
        'e', 2387,
        'o', 2485,
        'p', 2209,
        '{', 2366,
        0xbd, 2499,
        0x66d, 2519,
        0x204e, 2515,
        0x2217, 2507,
        0x221e, 2444,
        0x2659, 2411,
        0x265f, 2208,
        0x2731, 2511,
        0x2e40, 2445,
        'Z', 2261,
        'z', 2261,
        '+', 1195,
        0x16ed, 1195,
        0x2795, 1195,
        '\t', 1114,
        0x0b, 1114,
        '\f', 1114,
        ' ', 1114,
        '/', 1193,
        0x2044, 1193,
        0x2215, 1193,
        0x27cb, 1193,
        0x29f8, 1193,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2447);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2393);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2432);
      END_STATE();
    case 1116:
      ADVANCE_MAP(
        '\n', 2275,
        '\r', 1114,
        '!', 2451,
        '$', 2265,
        '&', 1159,
        '(', 2362,
        '*', 2503,
        '0', 2481,
        '1', 2455,
        ';', 2277,
        '<', 1847,
        '=', 2446,
        '?', 2451,
        '@', 2415,
        'N', 2398,
        'O', 2476,
        'P', 2410,
        'R', 2397,
        'T', 1853,
        '[', 2288,
        ']', 2291,
        'e', 2387,
        'o', 2485,
        'p', 2209,
        '{', 2366,
        0xbd, 2499,
        0x66d, 2519,
        0x204e, 2515,
        0x2217, 2507,
        0x221e, 2444,
        0x2659, 2411,
        0x265f, 2208,
        0x2731, 2511,
        0x2e40, 2445,
        'Z', 2261,
        'z', 2261,
        '+', 1195,
        0x16ed, 1195,
        0x2795, 1195,
        '\t', 1114,
        0x0b, 1114,
        '\f', 1114,
        ' ', 1114,
        '/', 1193,
        0x2044, 1193,
        0x2215, 1193,
        0x27cb, 1193,
        0x29f8, 1193,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2447);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2393);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2432);
      END_STATE();
    case 1117:
      ADVANCE_MAP(
        '\n', 2275,
        '\r', 1116,
        '!', 2451,
        '$', 2265,
        '&', 1159,
        '(', 2362,
        '*', 2503,
        '0', 2481,
        '1', 2455,
        ';', 2277,
        '<', 1847,
        '=', 2446,
        '?', 2451,
        '@', 2415,
        'N', 2398,
        'O', 2476,
        'P', 2410,
        'R', 2397,
        'T', 1853,
        '[', 2288,
        ']', 2291,
        'e', 2387,
        'o', 2485,
        'p', 2209,
        '{', 2366,
        0xbd, 2499,
        0x66d, 2519,
        0x204e, 2515,
        0x2217, 2507,
        0x221e, 2444,
        0x2659, 2411,
        0x265f, 2208,
        0x2731, 2511,
        0x2e40, 2445,
        'Z', 2261,
        'z', 2261,
        '+', 1195,
        0x16ed, 1195,
        0x2795, 1195,
        '\t', 1114,
        0x0b, 1114,
        '\f', 1114,
        ' ', 1114,
        '/', 1193,
        0x2044, 1193,
        0x2215, 1193,
        0x27cb, 1193,
        0x29f8, 1193,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2447);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2393);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2432);
      END_STATE();
    case 1118:
      ADVANCE_MAP(
        '\n', 2280,
        '\r', 1118,
        '!', 2440,
        '$', 865,
        '&', 27,
        '(', 2363,
        ')', 2365,
        '*', 2504,
        '0', 2478,
        '1', 2454,
        ';', 2278,
        '<', 514,
        '=', 2435,
        '?', 2440,
        '@', 2416,
        'N', 2396,
        'O', 2474,
        'P', 2409,
        'R', 2394,
        'T', 520,
        '[', 2289,
        'e', 2385,
        'o', 2483,
        'p', 822,
        '{', 2367,
        '}', 2369,
        0xbd, 2498,
        0x66d, 2520,
        0x204e, 2516,
        0x2217, 2508,
        0x221e, 2443,
        0x2659, 2412,
        0x265f, 821,
        0x2731, 2512,
        0x2e40, 2434,
        'Z', 861,
        'z', 861,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 1118,
        0x0b, 1118,
        '\f', 1118,
        ' ', 1118,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2386);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2437);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2395);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1119:
      ADVANCE_MAP(
        '\n', 2276,
        '\r', 1122,
        '!', 2451,
        '$', 2265,
        '&', 1159,
        '(', 2362,
        '*', 2503,
        '0', 2481,
        '1', 2455,
        ';', 2277,
        '<', 1847,
        '=', 2446,
        '?', 2451,
        '@', 2415,
        'N', 2398,
        'O', 2476,
        'P', 2410,
        'R', 2397,
        'T', 1853,
        '[', 2288,
        'e', 2387,
        'o', 2485,
        'p', 2209,
        '{', 2366,
        0xbd, 2499,
        0x66d, 2519,
        0x204e, 2515,
        0x2217, 2507,
        0x221e, 2444,
        0x2659, 2411,
        0x265f, 2208,
        0x2731, 2511,
        0x2e40, 2445,
        'Z', 2261,
        'z', 2261,
        '+', 1195,
        0x16ed, 1195,
        0x2795, 1195,
        '\t', 1122,
        0x0b, 1122,
        '\f', 1122,
        ' ', 1122,
        '/', 1193,
        0x2044, 1193,
        0x2215, 1193,
        0x27cb, 1193,
        0x29f8, 1193,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2447);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2393);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2432);
      END_STATE();
    case 1120:
      ADVANCE_MAP(
        '\n', 2282,
        '\r', 1120,
        '!', 2451,
        '$', 2265,
        '&', 1159,
        '(', 2362,
        ')', 2364,
        '*', 2503,
        '0', 2481,
        '1', 2455,
        ';', 2277,
        '<', 1847,
        '=', 2446,
        '?', 2451,
        '@', 2415,
        'N', 2398,
        'O', 2476,
        'P', 2410,
        'R', 2397,
        'T', 1853,
        'e', 2387,
        'o', 2485,
        'p', 2209,
        '{', 2366,
        '}', 2368,
        0xbd, 2499,
        0x66d, 2519,
        0x204e, 2515,
        0x2217, 2507,
        0x221e, 2444,
        0x2659, 2411,
        0x265f, 2208,
        0x2731, 2511,
        0x2e40, 2445,
        'Z', 2261,
        'z', 2261,
        '+', 1195,
        0x16ed, 1195,
        0x2795, 1195,
        '\t', 1120,
        0x0b, 1120,
        '\f', 1120,
        ' ', 1120,
        '/', 1193,
        0x2044, 1193,
        0x2215, 1193,
        0x27cb, 1193,
        0x29f8, 1193,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2447);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2393);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2432);
      END_STATE();
    case 1121:
      ADVANCE_MAP(
        '\n', 2282,
        '\r', 1120,
        '!', 2451,
        '$', 2265,
        '&', 1159,
        '(', 2362,
        ')', 2364,
        '*', 2503,
        '0', 2481,
        '1', 2455,
        ';', 2277,
        '<', 1847,
        '=', 2446,
        '?', 2451,
        '@', 2415,
        'O', 2476,
        'P', 2410,
        'R', 2397,
        'T', 1853,
        'e', 2387,
        'o', 2485,
        'p', 2209,
        '{', 2366,
        '}', 2368,
        0xbd, 2499,
        0x66d, 2519,
        0x204e, 2515,
        0x2217, 2507,
        0x221e, 2444,
        0x2659, 2411,
        0x265f, 2208,
        0x2731, 2511,
        0x2e40, 2445,
        'Z', 2261,
        'z', 2261,
        '+', 1195,
        0x16ed, 1195,
        0x2795, 1195,
        '\t', 1120,
        0x0b, 1120,
        '\f', 1120,
        ' ', 1120,
        '/', 1193,
        0x2044, 1193,
        0x2215, 1193,
        0x27cb, 1193,
        0x29f8, 1193,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2447);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2393);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2432);
      END_STATE();
    case 1122:
      ADVANCE_MAP(
        '\n', 2281,
        '\r', 1122,
        '!', 2451,
        '$', 2265,
        '&', 1159,
        '(', 2362,
        '*', 2503,
        '0', 2481,
        '1', 2455,
        ';', 2277,
        '<', 1847,
        '=', 2446,
        '?', 2451,
        '@', 2415,
        'N', 2398,
        'O', 2476,
        'P', 2410,
        'R', 2397,
        'T', 1853,
        '[', 2288,
        'e', 2387,
        'o', 2485,
        'p', 2209,
        '{', 2366,
        0xbd, 2499,
        0x66d, 2519,
        0x204e, 2515,
        0x2217, 2507,
        0x221e, 2444,
        0x2659, 2411,
        0x265f, 2208,
        0x2731, 2511,
        0x2e40, 2445,
        'Z', 2261,
        'z', 2261,
        '+', 1195,
        0x16ed, 1195,
        0x2795, 1195,
        '\t', 1122,
        0x0b, 1122,
        '\f', 1122,
        ' ', 1122,
        '/', 1193,
        0x2044, 1193,
        0x2215, 1193,
        0x27cb, 1193,
        0x29f8, 1193,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2447);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2393);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2432);
      END_STATE();
    case 1123:
      ADVANCE_MAP(
        '\n', 2281,
        '\r', 1122,
        '!', 2451,
        '$', 2265,
        '&', 1159,
        '(', 2362,
        '*', 2503,
        '0', 2481,
        '1', 2455,
        ';', 2277,
        '<', 1847,
        '=', 2446,
        '?', 2451,
        '@', 2415,
        'O', 2476,
        'P', 2410,
        'R', 2397,
        'T', 1853,
        '[', 2288,
        'e', 2387,
        'o', 2485,
        'p', 2209,
        '{', 2366,
        0xbd, 2499,
        0x66d, 2519,
        0x204e, 2515,
        0x2217, 2507,
        0x221e, 2444,
        0x2659, 2411,
        0x265f, 2208,
        0x2731, 2511,
        0x2e40, 2445,
        'Z', 2261,
        'z', 2261,
        '+', 1195,
        0x16ed, 1195,
        0x2795, 1195,
        '\t', 1122,
        0x0b, 1122,
        '\f', 1122,
        ' ', 1122,
        '/', 1193,
        0x2044, 1193,
        0x2215, 1193,
        0x27cb, 1193,
        0x29f8, 1193,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2447);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2393);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2432);
      END_STATE();
    case 1124:
      ADVANCE_MAP(
        '\n', 2283,
        '\r', 1124,
        '!', 2440,
        '$', 865,
        '&', 10,
        '(', 2363,
        '0', 867,
        ';', 2278,
        '<', 514,
        '=', 2435,
        '?', 2440,
        '@', 2416,
        'N', 2396,
        'P', 2409,
        'R', 2394,
        'T', 520,
        '[', 2289,
        'e', 2385,
        'p', 822,
        '{', 2367,
        0x221e, 2443,
        0x2659, 2412,
        0x265f, 821,
        0x2e40, 2434,
        'O', 35,
        'o', 35,
        'Z', 861,
        'z', 861,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 1124,
        0x0b, 1124,
        '\f', 1124,
        ' ', 1124,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2386);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2437);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2395);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1125:
      ADVANCE_MAP(
        '\n', 2284,
        '\r', 1125,
        '!', 2451,
        '$', 2265,
        '&', 1174,
        '(', 2362,
        ')', 2364,
        '0', 1187,
        ';', 2277,
        '<', 1847,
        '=', 2446,
        '?', 2451,
        '@', 2415,
        'N', 2398,
        'P', 2410,
        'R', 2397,
        'T', 1853,
        'e', 2387,
        'p', 2209,
        '{', 2366,
        0x221e, 2444,
        0x2659, 2411,
        0x265f, 2208,
        0x2e40, 2445,
        'O', 1188,
        'o', 1188,
        'Z', 2261,
        'z', 2261,
        '+', 1195,
        0x16ed, 1195,
        0x2795, 1195,
        '\t', 1125,
        0x0b, 1125,
        '\f', 1125,
        ' ', 1125,
        '/', 1193,
        0x2044, 1193,
        0x2215, 1193,
        0x27cb, 1193,
        0x29f8, 1193,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2447);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2393);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2432);
      END_STATE();
    case 1126:
      ADVANCE_MAP(
        '\n', 2284,
        '\r', 1125,
        '!', 2451,
        '$', 2265,
        '&', 1174,
        '(', 2362,
        ')', 2364,
        '0', 1187,
        ';', 2277,
        '<', 1847,
        '=', 2446,
        '?', 2451,
        '@', 2415,
        'P', 2410,
        'R', 2397,
        'T', 1853,
        'e', 2387,
        'p', 2209,
        '{', 2366,
        0x221e, 2444,
        0x2659, 2411,
        0x265f, 2208,
        0x2e40, 2445,
        'O', 1188,
        'o', 1188,
        'Z', 2261,
        'z', 2261,
        '+', 1195,
        0x16ed, 1195,
        0x2795, 1195,
        '\t', 1125,
        0x0b, 1125,
        '\f', 1125,
        ' ', 1125,
        '/', 1193,
        0x2044, 1193,
        0x2215, 1193,
        0x27cb, 1193,
        0x29f8, 1193,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2447);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2393);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2432);
      END_STATE();
    case 1127:
      if (lookahead == ' ') ADVANCE(1352);
      END_STATE();
    case 1128:
      if (lookahead == ' ') ADVANCE(1189);
      END_STATE();
    case 1129:
      if (lookahead == ' ') ADVANCE(1202);
      END_STATE();
    case 1130:
      if (lookahead == ' ') SKIP(1130);
      if (lookahead == '[') ADVANCE(2290);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2321);
      if (lookahead != 0) ADVANCE(2323);
      END_STATE();
    case 1131:
      if (lookahead == ' ') SKIP(1131);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2322);
      if (lookahead != 0) ADVANCE(2323);
      END_STATE();
    case 1132:
      if (lookahead == ' ') ADVANCE(2262);
      END_STATE();
    case 1133:
      if (lookahead == ' ') ADVANCE(1504);
      END_STATE();
    case 1134:
      if (lookahead == ' ') ADVANCE(1374);
      END_STATE();
    case 1135:
      if (lookahead == ' ') ADVANCE(1487);
      END_STATE();
    case 1136:
      if (lookahead == ' ') ADVANCE(1205);
      END_STATE();
    case 1137:
      ADVANCE_MAP(
        '!', 2440,
        '$', 865,
        '&', 10,
        '(', 2363,
        '-', 2436,
        '0', 867,
        ';', 2278,
        '<', 514,
        '=', 2435,
        '?', 2440,
        '@', 2416,
        'N', 2396,
        'P', 2409,
        'R', 2394,
        'T', 520,
        '[', 2289,
        'e', 2385,
        'p', 822,
        '{', 2367,
        0x221e, 2443,
        0x2659, 2412,
        0x265f, 821,
        0x2e40, 2434,
        '\n', 1138,
        '\r', 1138,
        'O', 35,
        'o', 35,
        'Z', 861,
        'z', 861,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 873,
        0x0b, 873,
        '\f', 873,
        ' ', 873,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2386);
      if ((0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2437);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2395);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1138:
      ADVANCE_MAP(
        '!', 2440,
        '$', 865,
        '&', 10,
        '(', 2363,
        '0', 867,
        ';', 2278,
        '<', 514,
        '=', 2435,
        '?', 2440,
        '@', 2416,
        'N', 2396,
        'P', 2409,
        'R', 2394,
        'T', 520,
        '[', 2289,
        'e', 2385,
        'p', 822,
        '{', 2367,
        0x221e, 2443,
        0x2659, 2412,
        0x265f, 821,
        0x2e40, 2434,
        '\n', 1138,
        '\r', 1138,
        'O', 35,
        'o', 35,
        'Z', 861,
        'z', 861,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 873,
        0x0b, 873,
        '\f', 873,
        ' ', 873,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2386);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2437);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2395);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1139:
      ADVANCE_MAP(
        '!', 2440,
        '$', 865,
        '&', 27,
        '(', 2363,
        ')', 2365,
        '*', 2504,
        '-', 2436,
        '0', 2478,
        '1', 2454,
        ';', 2278,
        '<', 514,
        '=', 2435,
        '?', 2440,
        '@', 2416,
        'N', 2396,
        'O', 2474,
        'P', 2409,
        'R', 2394,
        'T', 520,
        '[', 2289,
        'e', 2385,
        'o', 2483,
        'p', 822,
        '{', 2367,
        '}', 2369,
        0xbd, 2498,
        0x66d, 2520,
        0x204e, 2516,
        0x2217, 2508,
        0x221e, 2443,
        0x2659, 2412,
        0x265f, 821,
        0x2731, 2512,
        0x2e40, 2434,
        '\n', 1140,
        '\r', 1140,
        'Z', 861,
        'z', 861,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 1113,
        0x0b, 1113,
        '\f', 1113,
        ' ', 1113,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2386);
      if ((0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2437);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2395);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1140:
      ADVANCE_MAP(
        '!', 2440,
        '$', 865,
        '&', 27,
        '(', 2363,
        ')', 2365,
        '*', 2504,
        '0', 2478,
        '1', 2454,
        ';', 2278,
        '<', 514,
        '=', 2435,
        '?', 2440,
        '@', 2416,
        'N', 2396,
        'O', 2474,
        'P', 2409,
        'R', 2394,
        'T', 520,
        '[', 2289,
        'e', 2385,
        'o', 2483,
        'p', 822,
        '{', 2367,
        '}', 2369,
        0xbd, 2498,
        0x66d, 2520,
        0x204e, 2516,
        0x2217, 2508,
        0x221e, 2443,
        0x2659, 2412,
        0x265f, 821,
        0x2731, 2512,
        0x2e40, 2434,
        '\n', 1140,
        '\r', 1140,
        'Z', 861,
        'z', 861,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 1113,
        0x0b, 1113,
        '\f', 1113,
        ' ', 1113,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2386);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2437);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2395);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 1141:
      ADVANCE_MAP(
        '!', 2451,
        '#', 2427,
        '$', 2265,
        '&', 1172,
        '(', 2362,
        ')', 2364,
        '0', 1187,
        ';', 2277,
        '<', 1847,
        '=', 2406,
        '?', 2451,
        '@', 2415,
        'P', 2410,
        'R', 2392,
        'T', 1853,
        'e', 2387,
        'p', 2209,
        '{', 2366,
        0x221e, 2444,
        0x2659, 2411,
        0x265f, 2208,
        0x2e40, 2405,
        'O', 1188,
        'o', 1188,
        'Z', 2261,
        'z', 2261,
        '+', 2431,
        0x16ed, 2431,
        0x2795, 2431,
        ':', 2399,
        'X', 2399,
        'x', 2399,
        '/', 1193,
        0x2044, 1193,
        0x2215, 1193,
        0x27cb, 1193,
        0x29f8, 1193,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1147);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2419);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2389);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2432);
      END_STATE();
    case 1142:
      ADVANCE_MAP(
        '!', 2451,
        '#', 2427,
        '$', 2265,
        '&', 1176,
        '(', 2362,
        ')', 2364,
        '0', 1187,
        ';', 2277,
        '<', 1847,
        '=', 2406,
        '?', 2451,
        '@', 2415,
        'P', 2410,
        'R', 2392,
        'T', 1853,
        'e', 2387,
        'p', 2209,
        '{', 2366,
        0x221e, 2444,
        0x2659, 2411,
        0x265f, 2208,
        0x2e40, 2405,
        'O', 1188,
        'o', 1188,
        'Z', 2261,
        'z', 2261,
        '+', 2431,
        0x16ed, 2431,
        0x2795, 2431,
        '/', 1193,
        0x2044, 1193,
        0x2215, 1193,
        0x27cb, 1193,
        0x29f8, 1193,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1147);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2447);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2389);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2432);
      END_STATE();
    case 1143:
      ADVANCE_MAP(
        '!', 2451,
        '#', 2427,
        '$', 2265,
        '&', 1179,
        '(', 2362,
        ')', 2364,
        '*', 2503,
        '0', 2481,
        '1', 2455,
        ';', 2277,
        '<', 1847,
        '=', 2446,
        '?', 2451,
        '@', 2415,
        'O', 2476,
        'P', 2410,
        'R', 2397,
        'T', 1853,
        'e', 2387,
        'o', 2485,
        'p', 2209,
        '{', 2366,
        '}', 2368,
        0xbd, 2499,
        0x66d, 2519,
        0x204e, 2515,
        0x2217, 2507,
        0x221e, 2444,
        0x2659, 2411,
        0x265f, 2208,
        0x2731, 2511,
        0x2e40, 2445,
        'Z', 2261,
        'z', 2261,
        '+', 2431,
        0x16ed, 2431,
        0x2795, 2431,
        ':', 2399,
        'X', 2399,
        'x', 2399,
        '/', 1193,
        0x2044, 1193,
        0x2215, 1193,
        0x27cb, 1193,
        0x29f8, 1193,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1146);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2447);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2393);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2432);
      END_STATE();
    case 1144:
      ADVANCE_MAP(
        '!', 2451,
        '#', 2427,
        '$', 2265,
        '&', 1182,
        '(', 2362,
        ')', 2364,
        '*', 2503,
        '0', 2481,
        '1', 2455,
        ';', 2277,
        '<', 1847,
        '=', 2406,
        '?', 2451,
        '@', 2415,
        'O', 2476,
        'P', 2410,
        'R', 2392,
        'T', 1853,
        'e', 2387,
        'o', 2485,
        'p', 2209,
        '{', 2366,
        '}', 2368,
        0xbd, 2499,
        0x66d, 2519,
        0x204e, 2515,
        0x2217, 2507,
        0x221e, 2444,
        0x2659, 2411,
        0x265f, 2208,
        0x2731, 2511,
        0x2e40, 2405,
        'Z', 2261,
        'z', 2261,
        '+', 2431,
        0x16ed, 2431,
        0x2795, 2431,
        ':', 2399,
        'X', 2399,
        'x', 2399,
        '/', 1193,
        0x2044, 1193,
        0x2215, 1193,
        0x27cb, 1193,
        0x29f8, 1193,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1146);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2419);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2389);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2432);
      END_STATE();
    case 1145:
      ADVANCE_MAP(
        '!', 2451,
        '#', 2427,
        '$', 2265,
        '&', 1184,
        '(', 2362,
        ')', 2364,
        '*', 2503,
        '0', 2481,
        '1', 2455,
        ';', 2277,
        '<', 1847,
        '=', 2406,
        '?', 2451,
        '@', 2415,
        'O', 2476,
        'P', 2410,
        'R', 2392,
        'T', 1853,
        'e', 2387,
        'o', 2485,
        'p', 2209,
        '{', 2366,
        '}', 2368,
        0xbd, 2499,
        0x66d, 2519,
        0x204e, 2515,
        0x2217, 2507,
        0x221e, 2444,
        0x2659, 2411,
        0x265f, 2208,
        0x2731, 2511,
        0x2e40, 2405,
        'Z', 2261,
        'z', 2261,
        '+', 2431,
        0x16ed, 2431,
        0x2795, 2431,
        '/', 1193,
        0x2044, 1193,
        0x2215, 1193,
        0x27cb, 1193,
        0x29f8, 1193,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1146);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2447);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2389);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2432);
      END_STATE();
    case 1146:
      ADVANCE_MAP(
        '!', 2451,
        '$', 2265,
        '&', 1159,
        '(', 2362,
        ')', 2364,
        '*', 2503,
        '0', 2481,
        '1', 2455,
        ';', 2277,
        '<', 1847,
        '=', 2446,
        '?', 2451,
        '@', 2415,
        'N', 2398,
        'O', 2476,
        'P', 2410,
        'R', 2397,
        'T', 1853,
        'e', 2387,
        'o', 2485,
        'p', 2209,
        '{', 2366,
        '}', 2368,
        0xbd, 2499,
        0x66d, 2519,
        0x204e, 2515,
        0x2217, 2507,
        0x221e, 2444,
        0x2659, 2411,
        0x265f, 2208,
        0x2731, 2511,
        0x2e40, 2445,
        'Z', 2261,
        'z', 2261,
        '+', 1195,
        0x16ed, 1195,
        0x2795, 1195,
        '/', 1193,
        0x2044, 1193,
        0x2215, 1193,
        0x27cb, 1193,
        0x29f8, 1193,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1146);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2447);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2393);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2432);
      END_STATE();
    case 1147:
      ADVANCE_MAP(
        '!', 2451,
        '$', 2265,
        '&', 1174,
        '(', 2362,
        ')', 2364,
        '0', 1187,
        ';', 2277,
        '<', 1847,
        '=', 2446,
        '?', 2451,
        '@', 2415,
        'N', 2398,
        'P', 2410,
        'R', 2397,
        'T', 1853,
        'e', 2387,
        'p', 2209,
        '{', 2366,
        0x221e, 2444,
        0x2659, 2411,
        0x265f, 2208,
        0x2e40, 2445,
        'O', 1188,
        'o', 1188,
        'Z', 2261,
        'z', 2261,
        '+', 1195,
        0x16ed, 1195,
        0x2795, 1195,
        '/', 1193,
        0x2044, 1193,
        0x2215, 1193,
        0x27cb, 1193,
        0x29f8, 1193,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1147);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2447);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2393);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2432);
      END_STATE();
    case 1148:
      ADVANCE_MAP(
        '!', 2451,
        '$', 2265,
        '&', 1175,
        '(', 2362,
        ')', 2364,
        '0', 1187,
        ';', 2277,
        '<', 1847,
        '=', 2446,
        '?', 2451,
        '@', 2415,
        'N', 2398,
        'P', 2410,
        'R', 2397,
        'T', 1853,
        '[', 2288,
        'e', 2387,
        'p', 2209,
        '{', 2366,
        0xbd, 2497,
        0x221e, 2444,
        0x2659, 2411,
        0x265f, 2208,
        0x2e40, 2445,
        'O', 1188,
        'o', 1188,
        'Z', 2261,
        'z', 2261,
        '+', 1195,
        0x16ed, 1195,
        0x2795, 1195,
        '/', 1193,
        0x2044, 1193,
        0x2215, 1193,
        0x27cb, 1193,
        0x29f8, 1193,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1148);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2447);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          lookahead == 'Q' ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2393);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2432);
      END_STATE();
    case 1149:
      ADVANCE_MAP(
        '"', 2293,
        '&', 2324,
        ']', 2292,
        0x2ba, 2313,
        0x2dd, 2311,
        0x2ee, 2317,
        0x2f6, 2315,
        0x5f2, 2319,
        0x5f4, 2309,
        0x201c, 2297,
        0x201d, 2299,
        0x201f, 2301,
        0x2033, 2303,
        0x2036, 2305,
        0x3003, 2307,
        0xff02, 2295,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1151);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2325);
      if (lookahead != 0) ADVANCE(2361);
      END_STATE();
    case 1150:
      ADVANCE_MAP(
        '"', 2293,
        '&', 2324,
        0x2ba, 2313,
        0x2dd, 2311,
        0x2ee, 2317,
        0x2f6, 2315,
        0x5f2, 2319,
        0x5f4, 2309,
        0x201c, 2297,
        0x201d, 2299,
        0x201f, 2301,
        0x2033, 2303,
        0x2036, 2305,
        0x3003, 2307,
        0xff02, 2295,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1152);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2326);
      if (lookahead != 0) ADVANCE(2361);
      END_STATE();
    case 1151:
      ADVANCE_MAP(
        '"', 2293,
        '&', 1166,
        ']', 2291,
        0x2ba, 2313,
        0x2dd, 2311,
        0x2ee, 2317,
        0x2f6, 2315,
        0x5f2, 2319,
        0x5f4, 2309,
        0x201c, 2297,
        0x201d, 2299,
        0x201f, 2301,
        0x2033, 2303,
        0x2036, 2305,
        0x3003, 2307,
        0xff02, 2295,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1151);
      END_STATE();
    case 1152:
      ADVANCE_MAP(
        '"', 2293,
        '&', 1166,
        0x2ba, 2313,
        0x2dd, 2311,
        0x2ee, 2317,
        0x2f6, 2315,
        0x5f2, 2319,
        0x5f4, 2309,
        0x201c, 2297,
        0x201d, 2299,
        0x201f, 2301,
        0x2033, 2303,
        0x2036, 2305,
        0x3003, 2307,
        0xff02, 2295,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1152);
      END_STATE();
    case 1153:
      ADVANCE_MAP(
        '#', 1349,
        'a', 2116,
        'd', 1862,
        'e', 2099,
        'f', 2103,
        'h', 1863,
        'l', 2065,
        'm', 1910,
        'n', 1909,
        'p', 2011,
        's', 2069,
      );
      END_STATE();
    case 1154:
      if (lookahead == '#') ADVANCE(1350);
      if (lookahead == 'd') ADVANCE(1882);
      if (lookahead == 'h') ADVANCE(2199);
      if (lookahead == 'm') ADVANCE(1914);
      if (lookahead == 'n') ADVANCE(1913);
      END_STATE();
    case 1155:
      if (lookahead == '#') ADVANCE(1388);
      if (lookahead == 'p') ADVANCE(2034);
      END_STATE();
    case 1156:
      ADVANCE_MAP(
        '#', 1351,
        'a', 2116,
        'd', 1885,
        'f', 2103,
        'h', 1864,
        'l', 2065,
        'm', 1923,
        'n', 1924,
        's', 2069,
      );
      END_STATE();
    case 1157:
      if (lookahead == '#') ADVANCE(1372);
      if (lookahead == 'f') ADVANCE(2114);
      if (lookahead == 'h') ADVANCE(1883);
      END_STATE();
    case 1158:
      if (lookahead == '#') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(2100);
      END_STATE();
    case 1159:
      ADVANCE_MAP(
        '#', 1355,
        'D', 1946,
        'L', 1871,
        'M', 2006,
        'O', 2124,
        'P', 2026,
        'R', 1872,
        'S', 1972,
        'U', 2079,
        'a', 2116,
        'b', 2002,
        'c', 2001,
        'd', 1891,
        'e', 2096,
        'f', 2103,
        'h', 1858,
        'i', 2038,
        'l', 1935,
        'm', 1875,
        'n', 1860,
        'o', 1912,
        'p', 1938,
        'q', 2172,
        'r', 1866,
        's', 2013,
        'u', 1867,
        'x', 2066,
      );
      END_STATE();
    case 1160:
      if (lookahead == '#') ADVANCE(1379);
      if (lookahead == 'p') ADVANCE(2035);
      if (lookahead == 's') ADVANCE(2074);
      END_STATE();
    case 1161:
      if (lookahead == '#') ADVANCE(1362);
      if (lookahead == 'd') ADVANCE(1892);
      if (lookahead == 'e') ADVANCE(2100);
      if (lookahead == 'h') ADVANCE(2203);
      if (lookahead == 'm') ADVANCE(1928);
      if (lookahead == 'n') ADVANCE(1927);
      if (lookahead == 's') ADVANCE(2075);
      END_STATE();
    case 1162:
      if (lookahead == '#') ADVANCE(1715);
      if (lookahead == 'i') ADVANCE(2064);
      END_STATE();
    case 1163:
      if (lookahead == '#') ADVANCE(1602);
      if (lookahead == 'e') ADVANCE(2198);
      if (lookahead == 'q') ADVANCE(2193);
      END_STATE();
    case 1164:
      if (lookahead == '#') ADVANCE(1690);
      if (lookahead == 'e') ADVANCE(2100);
      END_STATE();
    case 1165:
      if (lookahead == '#') ADVANCE(1378);
      if (lookahead == 'e') ADVANCE(2100);
      if (lookahead == 'p') ADVANCE(2035);
      if (lookahead == 's') ADVANCE(2074);
      END_STATE();
    case 1166:
      if (lookahead == '#') ADVANCE(1363);
      END_STATE();
    case 1167:
      if (lookahead == '#') ADVANCE(1376);
      if (lookahead == 's') ADVANCE(2072);
      END_STATE();
    case 1168:
      ADVANCE_MAP(
        '#', 1358,
        'D', 1946,
        'L', 1871,
        'M', 2006,
        'O', 2124,
        'P', 2026,
        'R', 1872,
        'S', 1972,
        'U', 2079,
        'b', 2002,
        'c', 2001,
        'd', 1891,
        'e', 2096,
        'f', 2115,
        'h', 1881,
        'i', 2038,
        'l', 1936,
        'm', 1876,
        'n', 1860,
        'o', 1912,
        'p', 1939,
        'q', 2172,
        'r', 1866,
        's', 2013,
        'u', 1867,
        'x', 2066,
      );
      END_STATE();
    case 1169:
      if (lookahead == '#') ADVANCE(1380);
      if (lookahead == 'd') ADVANCE(1893);
      if (lookahead == 'h') ADVANCE(2204);
      if (lookahead == 'm') ADVANCE(1930);
      if (lookahead == 'n') ADVANCE(1929);
      if (lookahead == 'p') ADVANCE(2035);
      if (lookahead == 's') ADVANCE(2076);
      END_STATE();
    case 1170:
      ADVANCE_MAP(
        '#', 1395,
        'd', 1892,
        'e', 2100,
        'h', 2203,
        'm', 1928,
        'n', 1927,
        'p', 2034,
        's', 2075,
      );
      END_STATE();
    case 1171:
      if (lookahead == '#') ADVANCE(1381);
      if (lookahead == 'd') ADVANCE(1894);
      if (lookahead == 'h') ADVANCE(2205);
      if (lookahead == 'm') ADVANCE(1932);
      if (lookahead == 'n') ADVANCE(1931);
      if (lookahead == 's') ADVANCE(2077);
      END_STATE();
    case 1172:
      ADVANCE_MAP(
        '#', 1360,
        'D', 1946,
        'L', 1871,
        'M', 2006,
        'O', 2124,
        'P', 2026,
        'R', 1872,
        'S', 1972,
        'U', 2079,
        'b', 2002,
        'c', 2001,
        'd', 1896,
        'e', 2097,
        'h', 1869,
        'i', 2038,
        'l', 1936,
        'm', 1878,
        'n', 1861,
        'o', 1912,
        'p', 1939,
        'q', 2172,
        'r', 1866,
        's', 2013,
        'u', 1867,
        'x', 2066,
      );
      END_STATE();
    case 1173:
      ADVANCE_MAP(
        '#', 1359,
        'a', 2116,
        'd', 1885,
        'f', 2103,
        'h', 1864,
        'l', 2065,
        'm', 1923,
        'n', 1924,
        's', 2069,
      );
      END_STATE();
    case 1174:
      ADVANCE_MAP(
        '#', 1470,
        'D', 1946,
        'L', 1871,
        'M', 2006,
        'O', 2124,
        'P', 2026,
        'R', 1872,
        'S', 1972,
        'U', 2079,
        'b', 2002,
        'c', 2001,
        'd', 1891,
        'e', 2096,
        'h', 1868,
        'i', 2038,
        'l', 1936,
        'm', 1876,
        'n', 1860,
        'o', 1912,
        'p', 1938,
        'q', 2172,
        'r', 1866,
        's', 2013,
        'u', 1867,
        'x', 2066,
      );
      END_STATE();
    case 1175:
      ADVANCE_MAP(
        '#', 1469,
        'D', 1946,
        'L', 1871,
        'M', 2006,
        'O', 2124,
        'P', 2026,
        'R', 1872,
        'S', 1972,
        'U', 2079,
        'b', 2002,
        'c', 2001,
        'd', 1891,
        'e', 2096,
        'f', 2115,
        'h', 1881,
        'i', 2038,
        'l', 1936,
        'm', 1876,
        'n', 1860,
        'o', 1912,
        'p', 1938,
        'q', 2172,
        'r', 1866,
        's', 2013,
        'u', 1867,
        'x', 2066,
      );
      END_STATE();
    case 1176:
      ADVANCE_MAP(
        '#', 1472,
        'D', 1946,
        'L', 1871,
        'M', 2006,
        'O', 2124,
        'P', 2026,
        'R', 1872,
        'S', 1972,
        'U', 2079,
        'b', 2002,
        'c', 2001,
        'd', 1891,
        'e', 2097,
        'h', 1868,
        'i', 2038,
        'l', 1936,
        'm', 1876,
        'n', 1860,
        'o', 1912,
        'p', 1939,
        'q', 2172,
        'r', 1866,
        's', 2013,
        'u', 1867,
        'x', 2066,
      );
      END_STATE();
    case 1177:
      if (lookahead == '#') ADVANCE(1460);
      if (lookahead == 'd') ADVANCE(1886);
      if (lookahead == 'h') ADVANCE(2200);
      if (lookahead == 'm') ADVANCE(1920);
      if (lookahead == 'n') ADVANCE(1919);
      END_STATE();
    case 1178:
      if (lookahead == '#') ADVANCE(1463);
      if (lookahead == 'p') ADVANCE(2035);
      END_STATE();
    case 1179:
      ADVANCE_MAP(
        '#', 1468,
        'D', 1946,
        'L', 1871,
        'M', 2006,
        'O', 2124,
        'P', 2026,
        'R', 1872,
        'S', 1972,
        'U', 2079,
        'a', 2116,
        'b', 2002,
        'c', 2001,
        'd', 1891,
        'e', 2096,
        'f', 2103,
        'h', 1858,
        'i', 2038,
        'l', 1935,
        'm', 1875,
        'n', 1860,
        'o', 1912,
        'p', 1939,
        'q', 2172,
        'r', 1866,
        's', 2013,
        'u', 1867,
        'x', 2066,
      );
      END_STATE();
    case 1180:
      if (lookahead == '#') ADVANCE(1462);
      if (lookahead == 's') ADVANCE(2078);
      END_STATE();
    case 1181:
      if (lookahead == '#') ADVANCE(1464);
      if (lookahead == 'd') ADVANCE(1887);
      if (lookahead == 'h') ADVANCE(2201);
      if (lookahead == 'm') ADVANCE(1922);
      if (lookahead == 'n') ADVANCE(1921);
      END_STATE();
    case 1182:
      ADVANCE_MAP(
        '#', 1471,
        'D', 1946,
        'L', 1871,
        'M', 2006,
        'O', 2124,
        'P', 2026,
        'R', 1872,
        'S', 1972,
        'U', 2079,
        'a', 2116,
        'b', 2002,
        'c', 2001,
        'd', 1896,
        'e', 2097,
        'f', 2103,
        'h', 1859,
        'i', 2038,
        'l', 1935,
        'm', 1877,
        'n', 1861,
        'o', 1912,
        'p', 1939,
        'q', 2172,
        'r', 1866,
        's', 2013,
        'u', 1867,
        'x', 2066,
      );
      END_STATE();
    case 1183:
      if (lookahead == '#') ADVANCE(1465);
      if (lookahead == 'd') ADVANCE(1890);
      if (lookahead == 'h') ADVANCE(2202);
      if (lookahead == 'm') ADVANCE(1926);
      if (lookahead == 'n') ADVANCE(1925);
      END_STATE();
    case 1184:
      ADVANCE_MAP(
        '#', 1473,
        'D', 1946,
        'L', 1871,
        'M', 2006,
        'O', 2124,
        'P', 2026,
        'R', 1872,
        'S', 1972,
        'U', 2079,
        'a', 2116,
        'b', 2002,
        'c', 2001,
        'd', 1891,
        'e', 2097,
        'f', 2103,
        'h', 1858,
        'i', 2038,
        'l', 1935,
        'm', 1875,
        'n', 1860,
        'o', 1912,
        'p', 1939,
        'q', 2172,
        'r', 1866,
        's', 2013,
        'u', 1867,
        'x', 2066,
      );
      END_STATE();
    case 1185:
      if (lookahead == '#') ADVANCE(1466);
      if (lookahead == 'd') ADVANCE(1892);
      if (lookahead == 'h') ADVANCE(2203);
      if (lookahead == 'm') ADVANCE(1928);
      if (lookahead == 'n') ADVANCE(1927);
      END_STATE();
    case 1186:
      if (lookahead == '#') ADVANCE(1467);
      if (lookahead == 'd') ADVANCE(1895);
      if (lookahead == 'h') ADVANCE(2206);
      if (lookahead == 'm') ADVANCE(1934);
      if (lookahead == 'n') ADVANCE(1933);
      END_STATE();
    case 1187:
      if (lookahead == '&') ADVANCE(1154);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(2264);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2382);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2259);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      END_STATE();
    case 1188:
      if (lookahead == '&') ADVANCE(1154);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2259);
      END_STATE();
    case 1189:
      if (lookahead == '&') ADVANCE(1157);
      if (lookahead == 0xbd) ADVANCE(2529);
      END_STATE();
    case 1190:
      if (lookahead == '&') ADVANCE(1167);
      if (lookahead == '-') ADVANCE(1208);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1194);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1191);
      END_STATE();
    case 1191:
      if (lookahead == '&') ADVANCE(1167);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1194);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1191);
      END_STATE();
    case 1192:
      if (lookahead == '&') ADVANCE(1158);
      if (lookahead == '-') ADVANCE(1208);
      if (lookahead == '=' ||
          lookahead == 0x2e40) ADVANCE(2432);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1194);
      END_STATE();
    case 1193:
      if (lookahead == '&') ADVANCE(1158);
      if (lookahead == '=' ||
          lookahead == 0x2e40) ADVANCE(2432);
      END_STATE();
    case 1194:
      if (lookahead == '&') ADVANCE(1158);
      if (lookahead == '=' ||
          lookahead == 0x2e40) ADVANCE(2432);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1194);
      END_STATE();
    case 1195:
      if (lookahead == '&') ADVANCE(1161);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1204);
      if (lookahead == '-' ||
          lookahead == '=' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796 ||
          lookahead == 0x2e40) ADVANCE(2432);
      END_STATE();
    case 1196:
      if (lookahead == '&') ADVANCE(1171);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1133);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1132);
      END_STATE();
    case 1197:
      if (lookahead == '&') ADVANCE(1162);
      if (lookahead == 0x221e) ADVANCE(2432);
      END_STATE();
    case 1198:
      ADVANCE_MAP(
        '&', 1173,
        ')', 2364,
        '*', 2503,
        '-', 2457,
        '/', 2486,
        '0', 2479,
        '1', 2456,
        '2', 2496,
        'O', 2475,
        'o', 2484,
        '}', 2368,
        0xbd, 2499,
        0x66d, 2519,
        0x2010, 2461,
        0x2011, 2463,
        0x2012, 2465,
        0x2013, 2467,
        0x2014, 2469,
        0x2044, 2490,
        0x204e, 2515,
        0x2212, 2459,
        0x2215, 2488,
        0x2217, 2507,
        0x2731, 2511,
        0x2796, 2471,
        0x27cb, 2492,
        0x29f8, 2494,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1198);
      END_STATE();
    case 1199:
      if (lookahead == '&') ADVANCE(1164);
      END_STATE();
    case 1200:
      if (lookahead == '&') ADVANCE(1177);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1127);
      END_STATE();
    case 1201:
      if (lookahead == '&') ADVANCE(1178);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(2432);
      END_STATE();
    case 1202:
      if (lookahead == '&') ADVANCE(1180);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1135);
      END_STATE();
    case 1203:
      if (lookahead == '&') ADVANCE(1181);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1128);
      END_STATE();
    case 1204:
      if (lookahead == '&') ADVANCE(1185);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2432);
      END_STATE();
    case 1205:
      if (lookahead == '&') ADVANCE(1186);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1134);
      END_STATE();
    case 1206:
      if (lookahead == '-') ADVANCE(993);
      END_STATE();
    case 1207:
      if (lookahead == '-') ADVANCE(1206);
      END_STATE();
    case 1208:
      if (lookahead == '-') ADVANCE(1207);
      END_STATE();
    case 1209:
      if (lookahead == '-') ADVANCE(1208);
      END_STATE();
    case 1210:
      if (lookahead == '.') ADVANCE(2432);
      END_STATE();
    case 1211:
      if (lookahead == '0') ADVANCE(1226);
      if (lookahead == '1') ADVANCE(1716);
      if (lookahead == '2') ADVANCE(1492);
      if (lookahead == '5') ADVANCE(1476);
      if (lookahead == '6') ADVANCE(1636);
      if (lookahead == '8') ADVANCE(1753);
      END_STATE();
    case 1212:
      if (lookahead == '0') ADVANCE(1717);
      if (lookahead == '1') ADVANCE(1245);
      if (lookahead == '2') ADVANCE(1261);
      if (lookahead == '4') ADVANCE(1574);
      if (lookahead == '6') ADVANCE(1262);
      if (lookahead == '7') ADVANCE(1263);
      END_STATE();
    case 1213:
      ADVANCE_MAP(
        '0', 1353,
        '2', 1389,
        '7', 1591,
        '9', 2249,
        'A', 1780,
        'a', 1780,
        'B', 1776,
        'b', 1776,
        'D', 1782,
        'd', 1782,
        'E', 1640,
        'e', 1640,
        'F', 1676,
        'f', 1676,
      );
      END_STATE();
    case 1214:
      if (lookahead == '0') ADVANCE(1373);
      END_STATE();
    case 1215:
      if (lookahead == '0') ADVANCE(1216);
      if (lookahead == '1') ADVANCE(1257);
      if (lookahead == '6') ADVANCE(1636);
      if (lookahead == '7') ADVANCE(1704);
      if (lookahead == '8') ADVANCE(1753);
      END_STATE();
    case 1216:
      if (lookahead == '0') ADVANCE(1315);
      if (lookahead == '1') ADVANCE(1595);
      if (lookahead == '2') ADVANCE(1422);
      if (lookahead == '7') ADVANCE(1645);
      if (lookahead == '8') ADVANCE(1687);
      END_STATE();
    case 1217:
      if (lookahead == '0') ADVANCE(1315);
      if (lookahead == '1') ADVANCE(1599);
      if (lookahead == '2') ADVANCE(1422);
      if (lookahead == '7') ADVANCE(1645);
      if (lookahead == '8') ADVANCE(1687);
      END_STATE();
    case 1218:
      if (lookahead == '0') ADVANCE(1315);
      if (lookahead == '1') ADVANCE(1608);
      if (lookahead == '2') ADVANCE(1422);
      if (lookahead == '7') ADVANCE(1645);
      if (lookahead == '8') ADVANCE(1687);
      END_STATE();
    case 1219:
      if (lookahead == '0') ADVANCE(1683);
      if (lookahead == '1') ADVANCE(1525);
      if (lookahead == '6') ADVANCE(1623);
      if (lookahead == '9') ADVANCE(1666);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1662);
      END_STATE();
    case 1220:
      if (lookahead == '0') ADVANCE(1683);
      if (lookahead == '1') ADVANCE(1526);
      if (lookahead == '6') ADVANCE(1623);
      if (lookahead == '9') ADVANCE(1666);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1662);
      END_STATE();
    case 1221:
      if (lookahead == '0') ADVANCE(1683);
      if (lookahead == '1') ADVANCE(1531);
      if (lookahead == '6') ADVANCE(1623);
      if (lookahead == '9') ADVANCE(1666);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1662);
      END_STATE();
    case 1222:
      if (lookahead == '0') ADVANCE(1683);
      if (lookahead == '1') ADVANCE(1532);
      if (lookahead == '6') ADVANCE(1623);
      if (lookahead == '9') ADVANCE(1666);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1662);
      END_STATE();
    case 1223:
      ADVANCE_MAP(
        '0', 1400,
        '2', 1779,
        'B', 2210,
        'b', 2210,
        'D', 2231,
        'd', 2231,
        'E', 2238,
        'e', 2238,
        'F', 1675,
        'f', 1675,
      );
      END_STATE();
    case 1224:
      if (lookahead == '0') ADVANCE(2477);
      if (lookahead == '@') ADVANCE(2415);
      if (lookahead == 'O') ADVANCE(2473);
      if (lookahead == 'o') ADVANCE(2482);
      if (lookahead == ':' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2399);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1225);
      if (('1' <= lookahead && lookahead <= '8')) ADVANCE(2388);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      END_STATE();
    case 1225:
      if (lookahead == '0') ADVANCE(2477);
      if (lookahead == '@') ADVANCE(2415);
      if (lookahead == 'O') ADVANCE(2473);
      if (lookahead == 'o') ADVANCE(2482);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1225);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      END_STATE();
    case 1226:
      if (lookahead == '0') ADVANCE(1594);
      if (lookahead == '1') ADVANCE(1568);
      if (lookahead == '7') ADVANCE(1635);
      END_STATE();
    case 1227:
      if (lookahead == '0') ADVANCE(1594);
      if (lookahead == '1') ADVANCE(1596);
      if (lookahead == '7') ADVANCE(1635);
      END_STATE();
    case 1228:
      ADVANCE_MAP(
        '0', 1405,
        '1', 1752,
        '2', 1219,
        '3', 1408,
        '5', 1356,
        '6', 1425,
        '7', 1416,
        '9', 2251,
        'A', 1241,
        'a', 1241,
        'B', 1370,
        'b', 1370,
        'D', 1827,
        'd', 1827,
        'E', 1642,
        'e', 1642,
        'F', 1826,
        'f', 1826,
      );
      END_STATE();
    case 1229:
      ADVANCE_MAP(
        '0', 1405,
        '1', 1752,
        '2', 1219,
        '3', 1408,
        '5', 1356,
        '6', 1425,
        '7', 1417,
        '9', 2251,
        'A', 1241,
        'a', 1241,
        'B', 1371,
        'b', 1371,
        'D', 1827,
        'd', 1827,
        'E', 1642,
        'e', 1642,
        'F', 1826,
        'f', 1826,
      );
      END_STATE();
    case 1230:
      ADVANCE_MAP(
        '0', 1405,
        '1', 1752,
        '2', 1219,
        '3', 1408,
        '5', 1356,
        '6', 1425,
        '7', 1417,
        '9', 2251,
        'A', 1241,
        'a', 1241,
        'B', 1371,
        'b', 1371,
        'D', 1827,
        'd', 1827,
        'E', 1647,
        'e', 1647,
        'F', 1826,
        'f', 1826,
      );
      END_STATE();
    case 1231:
      if (lookahead == '0') ADVANCE(1365);
      END_STATE();
    case 1232:
      if (lookahead == '0') ADVANCE(1255);
      if (lookahead == '1') ADVANCE(1257);
      if (lookahead == '7') ADVANCE(1704);
      if (lookahead == '8') ADVANCE(1759);
      END_STATE();
    case 1233:
      if (lookahead == '0') ADVANCE(1255);
      if (lookahead == '1') ADVANCE(1258);
      if (lookahead == '7') ADVANCE(1704);
      END_STATE();
    case 1234:
      if (lookahead == '0') ADVANCE(1364);
      END_STATE();
    case 1235:
      if (lookahead == '0') ADVANCE(1306);
      END_STATE();
    case 1236:
      if (lookahead == '0') ADVANCE(1306);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1774);
      END_STATE();
    case 1237:
      ADVANCE_MAP(
        '0', 1406,
        '1', 1752,
        '2', 1220,
        '3', 1408,
        '5', 1356,
        '6', 1425,
        '7', 1420,
        '9', 2251,
        'A', 1240,
        'a', 1240,
        'B', 1371,
        'b', 1371,
        'D', 1827,
        'd', 1827,
        'E', 1642,
        'e', 1642,
        'F', 1826,
        'f', 1826,
      );
      END_STATE();
    case 1238:
      ADVANCE_MAP(
        '0', 1406,
        '1', 1752,
        '2', 1220,
        '3', 1408,
        '5', 1356,
        '6', 1425,
        '7', 1420,
        '9', 2251,
        'A', 1240,
        'a', 1240,
        'B', 1371,
        'b', 1371,
        'D', 1827,
        'd', 1827,
        'E', 1647,
        'e', 1647,
        'F', 1826,
        'f', 1826,
      );
      END_STATE();
    case 1239:
      ADVANCE_MAP(
        '0', 1406,
        '1', 1752,
        '2', 1220,
        '3', 1408,
        '5', 1356,
        '6', 1425,
        '7', 1419,
        '9', 2251,
        'A', 1240,
        'a', 1240,
        'B', 1370,
        'b', 1370,
        'D', 1827,
        'd', 1827,
        'E', 1642,
        'e', 1642,
        'F', 1826,
        'f', 1826,
      );
      END_STATE();
    case 1240:
      if (lookahead == '0') ADVANCE(1275);
      if (lookahead == '7') ADVANCE(1385);
      END_STATE();
    case 1241:
      if (lookahead == '0') ADVANCE(1275);
      if (lookahead == '7') ADVANCE(1385);
      if (lookahead == ';') ADVANCE(2505);
      END_STATE();
    case 1242:
      if (lookahead == '0') ADVANCE(1393);
      if (lookahead == '1') ADVANCE(1744);
      END_STATE();
    case 1243:
      ADVANCE_MAP(
        '0', 1410,
        '2', 1357,
        '7', 1768,
        '9', 2253,
        'D', 1817,
        'd', 1817,
        'E', 1641,
        'e', 1641,
        'F', 1838,
        'f', 1838,
      );
      END_STATE();
    case 1244:
      ADVANCE_MAP(
        '0', 1410,
        '2', 1357,
        '7', 1766,
        '9', 2253,
        'B', 1773,
        'b', 1773,
        'D', 1817,
        'd', 1817,
        'E', 1641,
        'e', 1641,
        'F', 1838,
        'f', 1838,
      );
      END_STATE();
    case 1245:
      if (lookahead == '0') ADVANCE(1781);
      if (lookahead == '1') ADVANCE(1781);
      if (lookahead == '2') ADVANCE(1781);
      END_STATE();
    case 1246:
      ADVANCE_MAP(
        '0', 1781,
        '1', 1781,
        '2', 1781,
        '3', 1781,
        '4', 1781,
        'C', 1795,
        'c', 1795,
        'D', 1796,
        'd', 1796,
        'F', 1797,
        'f', 1797,
      );
      END_STATE();
    case 1247:
      if (lookahead == '0') ADVANCE(1436);
      END_STATE();
    case 1248:
      if (lookahead == '0') ADVANCE(1440);
      END_STATE();
    case 1249:
      ADVANCE_MAP(
        '0', 1433,
        '2', 1397,
        '7', 1592,
        '9', 2249,
        'A', 1780,
        'a', 1780,
        'D', 1790,
        'd', 1790,
        'F', 1783,
        'f', 1783,
      );
      END_STATE();
    case 1250:
      if (lookahead == '0') ADVANCE(1774);
      END_STATE();
    case 1251:
      if (lookahead == '0') ADVANCE(1354);
      if (lookahead == '2') ADVANCE(1402);
      if (lookahead == '7') ADVANCE(1750);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1777);
      END_STATE();
    case 1252:
      if (lookahead == '0') ADVANCE(1513);
      END_STATE();
    case 1253:
      if (lookahead == '0') ADVANCE(1788);
      if (lookahead == '8') ADVANCE(1789);
      END_STATE();
    case 1254:
      if (lookahead == '0') ADVANCE(1314);
      if (lookahead == '1') ADVANCE(1595);
      if (lookahead == '2') ADVANCE(1422);
      if (lookahead == '7') ADVANCE(1645);
      if (lookahead == '8') ADVANCE(1687);
      END_STATE();
    case 1255:
      if (lookahead == '0') ADVANCE(1314);
      if (lookahead == '1') ADVANCE(1599);
      if (lookahead == '2') ADVANCE(1422);
      if (lookahead == '7') ADVANCE(1645);
      if (lookahead == '8') ADVANCE(1687);
      END_STATE();
    case 1256:
      if (lookahead == '0') ADVANCE(1314);
      if (lookahead == '1') ADVANCE(1608);
      if (lookahead == '2') ADVANCE(1422);
      if (lookahead == '7') ADVANCE(1645);
      if (lookahead == '8') ADVANCE(1687);
      END_STATE();
    case 1257:
      if (lookahead == '0') ADVANCE(1484);
      if (lookahead == '8') ADVANCE(1642);
      END_STATE();
    case 1258:
      if (lookahead == '0') ADVANCE(1484);
      if (lookahead == '8') ADVANCE(1647);
      END_STATE();
    case 1259:
      if (lookahead == '0') ADVANCE(1777);
      if (lookahead == '1') ADVANCE(1777);
      if (lookahead == '2') ADVANCE(1777);
      END_STATE();
    case 1260:
      if (lookahead == '0') ADVANCE(1777);
      if (lookahead == '1') ADVANCE(1777);
      if (lookahead == '2') ADVANCE(1777);
      if (lookahead == '3') ADVANCE(1777);
      if (lookahead == '4') ADVANCE(1777);
      END_STATE();
    case 1261:
      if (lookahead == '0') ADVANCE(1795);
      if (lookahead == '1') ADVANCE(1796);
      if (lookahead == '3') ADVANCE(1797);
      END_STATE();
    case 1262:
      if (lookahead == '0') ADVANCE(1800);
      END_STATE();
    case 1263:
      if (lookahead == '0') ADVANCE(1801);
      END_STATE();
    case 1264:
      if (lookahead == '0') ADVANCE(1778);
      if (lookahead == '1') ADVANCE(1778);
      if (lookahead == '2') ADVANCE(1778);
      END_STATE();
    case 1265:
      if (lookahead == '0') ADVANCE(1778);
      if (lookahead == '1') ADVANCE(1778);
      if (lookahead == '2') ADVANCE(1778);
      if (lookahead == '3') ADVANCE(1778);
      if (lookahead == '4') ADVANCE(1778);
      END_STATE();
    case 1266:
      if (lookahead == '0') ADVANCE(1840);
      if (lookahead == '1') ADVANCE(1840);
      if (lookahead == '2') ADVANCE(1840);
      END_STATE();
    case 1267:
      if (lookahead == '0') ADVANCE(1840);
      if (lookahead == '1') ADVANCE(1840);
      if (lookahead == '2') ADVANCE(1840);
      if (lookahead == '3') ADVANCE(1840);
      if (lookahead == '4') ADVANCE(1840);
      END_STATE();
    case 1268:
      if (lookahead == '0') ADVANCE(1804);
      if (lookahead == '1') ADVANCE(1810);
      if (lookahead == '2') ADVANCE(1811);
      if (lookahead == '3') ADVANCE(1812);
      if (lookahead == '4') ADVANCE(1813);
      END_STATE();
    case 1269:
      ADVANCE_MAP(
        '0', 1804,
        '1', 1810,
        '2', 1811,
        '3', 1812,
        '4', 1813,
        'C', 1795,
        'c', 1795,
        'D', 1796,
        'd', 1796,
        'F', 1797,
        'f', 1797,
      );
      END_STATE();
    case 1270:
      if (lookahead == '0') ADVANCE(1839);
      if (lookahead == '1') ADVANCE(1839);
      if (lookahead == '2') ADVANCE(1839);
      END_STATE();
    case 1271:
      if (lookahead == '0') ADVANCE(1839);
      if (lookahead == '1') ADVANCE(1839);
      if (lookahead == '2') ADVANCE(1839);
      if (lookahead == '3') ADVANCE(1839);
      if (lookahead == '4') ADVANCE(1839);
      END_STATE();
    case 1272:
      if (lookahead == '0') ADVANCE(1811);
      if (lookahead == '1') ADVANCE(1812);
      if (lookahead == '2') ADVANCE(1813);
      END_STATE();
    case 1273:
      if (lookahead == '0') ADVANCE(1816);
      END_STATE();
    case 1274:
      if (lookahead == '0') ADVANCE(1817);
      END_STATE();
    case 1275:
      if (lookahead == '0') ADVANCE(1817);
      if (lookahead == '1') ADVANCE(1817);
      END_STATE();
    case 1276:
      if (lookahead == '0') ADVANCE(1817);
      if (lookahead == '1') ADVANCE(1817);
      if (lookahead == '2') ADVANCE(1817);
      END_STATE();
    case 1277:
      if (lookahead == '0') ADVANCE(1817);
      if (lookahead == '1') ADVANCE(1817);
      if (lookahead == '2') ADVANCE(1817);
      if (lookahead == '3') ADVANCE(1817);
      if (lookahead == '4') ADVANCE(1817);
      END_STATE();
    case 1278:
      if (lookahead == '0') ADVANCE(1817);
      if (lookahead == '3') ADVANCE(1817);
      END_STATE();
    case 1279:
      if (lookahead == '0') ADVANCE(1827);
      if (lookahead == '1') ADVANCE(1827);
      if (lookahead == '2') ADVANCE(1827);
      END_STATE();
    case 1280:
      if (lookahead == '0') ADVANCE(1827);
      if (lookahead == '1') ADVANCE(1827);
      if (lookahead == '2') ADVANCE(1827);
      if (lookahead == '3') ADVANCE(1827);
      if (lookahead == '4') ADVANCE(1827);
      END_STATE();
    case 1281:
      if (lookahead == '0') ADVANCE(1826);
      if (lookahead == '3') ADVANCE(1817);
      if (lookahead == '4') ADVANCE(1817);
      if (lookahead == '5') ADVANCE(1817);
      END_STATE();
    case 1282:
      if (lookahead == '0') ADVANCE(1832);
      if (lookahead == '1') ADVANCE(1841);
      if (lookahead == '3') ADVANCE(1831);
      END_STATE();
    case 1283:
      if (lookahead == '0') ADVANCE(1832);
      if (lookahead == '1') ADVANCE(1842);
      if (lookahead == '3') ADVANCE(1831);
      END_STATE();
    case 1284:
      if (lookahead == '0') ADVANCE(1828);
      END_STATE();
    case 1285:
      if (lookahead == '0') ADVANCE(1838);
      END_STATE();
    case 1286:
      if (lookahead == '0') ADVANCE(1829);
      if (lookahead == '1') ADVANCE(1829);
      if (lookahead == '2') ADVANCE(1829);
      END_STATE();
    case 1287:
      if (lookahead == '0') ADVANCE(1829);
      if (lookahead == '1') ADVANCE(1829);
      if (lookahead == '2') ADVANCE(1829);
      if (lookahead == '3') ADVANCE(1829);
      if (lookahead == '4') ADVANCE(1829);
      END_STATE();
    case 1288:
      if (lookahead == '0') ADVANCE(1830);
      END_STATE();
    case 1289:
      if (lookahead == '0') ADVANCE(1844);
      if (lookahead == '1') ADVANCE(1844);
      if (lookahead == '2') ADVANCE(1844);
      END_STATE();
    case 1290:
      if (lookahead == '0') ADVANCE(1844);
      if (lookahead == '1') ADVANCE(1844);
      if (lookahead == '2') ADVANCE(1844);
      if (lookahead == '3') ADVANCE(1844);
      if (lookahead == '4') ADVANCE(1844);
      END_STATE();
    case 1291:
      if (lookahead == '0') ADVANCE(1843);
      END_STATE();
    case 1292:
      if (lookahead == '0') ADVANCE(1823);
      END_STATE();
    case 1293:
      if (lookahead == '0') ADVANCE(1836);
      if (lookahead == '1') ADVANCE(1836);
      if (lookahead == '2') ADVANCE(1836);
      END_STATE();
    case 1294:
      if (lookahead == '0') ADVANCE(1836);
      if (lookahead == '1') ADVANCE(1836);
      if (lookahead == '2') ADVANCE(1836);
      if (lookahead == '3') ADVANCE(1836);
      if (lookahead == '4') ADVANCE(1836);
      END_STATE();
    case 1295:
      if (lookahead == '0') ADVANCE(1835);
      END_STATE();
    case 1296:
      if (lookahead == '0') ADVANCE(1227);
      if (lookahead == '2') ADVANCE(1492);
      if (lookahead == '5') ADVANCE(1476);
      if (lookahead == '6') ADVANCE(1636);
      if (lookahead == '8') ADVANCE(1753);
      END_STATE();
    case 1297:
      if (lookahead == '0') ADVANCE(1227);
      if (lookahead == '6') ADVANCE(1636);
      if (lookahead == '8') ADVANCE(1753);
      END_STATE();
    case 1298:
      if (lookahead == '0') ADVANCE(1720);
      if (lookahead == '1') ADVANCE(1259);
      END_STATE();
    case 1299:
      if (lookahead == '0') ADVANCE(1391);
      if (lookahead == '2') ADVANCE(1404);
      if (lookahead == '7') ADVANCE(1761);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1778);
      END_STATE();
    case 1300:
      if (lookahead == '0') ADVANCE(1845);
      if (lookahead == '1') ADVANCE(1845);
      if (lookahead == '2') ADVANCE(1845);
      END_STATE();
    case 1301:
      if (lookahead == '0') ADVANCE(1845);
      if (lookahead == '1') ADVANCE(1845);
      if (lookahead == '2') ADVANCE(1845);
      if (lookahead == '3') ADVANCE(1845);
      if (lookahead == '4') ADVANCE(1845);
      END_STATE();
    case 1302:
      if (lookahead == '0') ADVANCE(1846);
      END_STATE();
    case 1303:
      if (lookahead == '0') ADVANCE(1723);
      if (lookahead == '1') ADVANCE(1272);
      if (lookahead == '2') ADVANCE(1261);
      if (lookahead == '4') ADVANCE(1574);
      if (lookahead == '6') ADVANCE(1262);
      if (lookahead == '7') ADVANCE(1263);
      END_STATE();
    case 1304:
      if (lookahead == '0') ADVANCE(1723);
      if (lookahead == '1') ADVANCE(1272);
      if (lookahead == '6') ADVANCE(1262);
      if (lookahead == '7') ADVANCE(1263);
      END_STATE();
    case 1305:
      if (lookahead == '0') ADVANCE(1399);
      if (lookahead == '2') ADVANCE(1407);
      if (lookahead == '7') ADVANCE(1763);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1840);
      END_STATE();
    case 1306:
      if (lookahead == '0') ADVANCE(1576);
      END_STATE();
    case 1307:
      if (lookahead == '0') ADVANCE(1721);
      if (lookahead == '1') ADVANCE(1264);
      END_STATE();
    case 1308:
      if (lookahead == '0') ADVANCE(1403);
      if (lookahead == '2') ADVANCE(1412);
      if (lookahead == '7') ADVANCE(1764);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1839);
      END_STATE();
    case 1309:
      if (lookahead == '0') ADVANCE(1722);
      if (lookahead == '1') ADVANCE(1266);
      END_STATE();
    case 1310:
      if (lookahead == '0') ADVANCE(1409);
      if (lookahead == '2') ADVANCE(1424);
      if (lookahead == '7') ADVANCE(1767);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1817);
      END_STATE();
    case 1311:
      if (lookahead == '0') ADVANCE(1725);
      if (lookahead == '1') ADVANCE(1270);
      END_STATE();
    case 1312:
      if (lookahead == '0') ADVANCE(1729);
      if (lookahead == '1') ADVANCE(1279);
      if (lookahead == '5') ADVANCE(1518);
      if (lookahead == '6') ADVANCE(1281);
      END_STATE();
    case 1313:
      if (lookahead == '0') ADVANCE(1729);
      if (lookahead == '1') ADVANCE(1279);
      if (lookahead == '5') ADVANCE(1518);
      if (lookahead == '6') ADVANCE(1281);
      if (lookahead == '7') ADVANCE(1263);
      END_STATE();
    case 1314:
      if (lookahead == '0') ADVANCE(1662);
      END_STATE();
    case 1315:
      if (lookahead == '0') ADVANCE(1662);
      if (lookahead == '3') ADVANCE(1575);
      END_STATE();
    case 1316:
      if (lookahead == '0') ADVANCE(1728);
      if (lookahead == '1') ADVANCE(1276);
      END_STATE();
    case 1317:
      if (lookahead == '0') ADVANCE(1728);
      if (lookahead == '1') ADVANCE(1276);
      if (lookahead == '6') ADVANCE(1285);
      END_STATE();
    case 1318:
      if (lookahead == '0') ADVANCE(1733);
      if (lookahead == '1') ADVANCE(1286);
      if (lookahead == '6') ADVANCE(1288);
      END_STATE();
    case 1319:
      if (lookahead == '0') ADVANCE(1623);
      if (lookahead == '5') ADVANCE(1581);
      if (lookahead == '6') ADVANCE(1522);
      END_STATE();
    case 1320:
      if (lookahead == '0') ADVANCE(1735);
      if (lookahead == '1') ADVANCE(1289);
      if (lookahead == '6') ADVANCE(1291);
      END_STATE();
    case 1321:
      if (lookahead == '0') ADVANCE(1739);
      if (lookahead == '1') ADVANCE(1300);
      END_STATE();
    case 1322:
      if (lookahead == '0') ADVANCE(1737);
      if (lookahead == '1') ADVANCE(1293);
      if (lookahead == '5') ADVANCE(1518);
      if (lookahead == '6') ADVANCE(1281);
      END_STATE();
    case 1323:
      if (lookahead == '0') ADVANCE(1737);
      if (lookahead == '1') ADVANCE(1293);
      if (lookahead == '5') ADVANCE(1518);
      if (lookahead == '6') ADVANCE(1281);
      if (lookahead == '7') ADVANCE(1263);
      END_STATE();
    case 1324:
      ADVANCE_MAP(
        '0', 1390,
        '2', 1398,
        '7', 1592,
        '9', 2249,
        'A', 1780,
        'a', 1780,
        'B', 2210,
        'b', 2210,
        'D', 1791,
        'd', 1791,
        'E', 2238,
        'e', 2238,
        'F', 1676,
        'f', 1676,
      );
      END_STATE();
    case 1325:
      ADVANCE_MAP(
        '0', 1429,
        '1', 1752,
        '2', 1221,
        '3', 1408,
        '5', 1356,
        '6', 1425,
        '7', 1418,
        '9', 2251,
        'A', 1241,
        'a', 1241,
        'B', 1371,
        'b', 1371,
        'D', 1836,
        'd', 1836,
        'E', 1647,
        'e', 1647,
        'F', 1826,
        'f', 1826,
      );
      END_STATE();
    case 1326:
      if (lookahead == '0') ADVANCE(1644);
      if (lookahead == '2') ADVANCE(1413);
      if (lookahead == '7') ADVANCE(2227);
      if (lookahead == '9') ADVANCE(2250);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1816);
      END_STATE();
    case 1327:
      if (lookahead == '0') ADVANCE(1437);
      END_STATE();
    case 1328:
      ADVANCE_MAP(
        '0', 1430,
        '1', 1752,
        '2', 1222,
        '3', 1408,
        '5', 1356,
        '6', 1425,
        '7', 1421,
        '9', 2251,
        'A', 1240,
        'a', 1240,
        'B', 1371,
        'b', 1371,
        'D', 1836,
        'd', 1836,
        'E', 1647,
        'e', 1647,
        'F', 1826,
        'f', 1826,
      );
      END_STATE();
    case 1329:
      ADVANCE_MAP(
        '0', 1414,
        '2', 1392,
        '7', 1762,
        '9', 2254,
        'B', 1817,
        'b', 1817,
        'D', 1829,
        'd', 1829,
        'F', 1830,
        'f', 1830,
      );
      END_STATE();
    case 1330:
      if (lookahead == '0') ADVANCE(1427);
      if (lookahead == '2') ADVANCE(1428);
      if (lookahead == '7') ADVANCE(1772);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1845);
      END_STATE();
    case 1331:
      ADVANCE_MAP(
        '0', 1646,
        '2', 1426,
        '7', 1771,
        '9', 2252,
        'B', 1817,
        'b', 1817,
        'F', 1828,
        'f', 1828,
      );
      END_STATE();
    case 1332:
      if (lookahead == '0') ADVANCE(1445);
      END_STATE();
    case 1333:
      ADVANCE_MAP(
        '0', 1423,
        '2', 1401,
        '7', 1769,
        '9', 2255,
        'D', 1844,
        'd', 1844,
        'F', 1843,
        'f', 1843,
      );
      END_STATE();
    case 1334:
      if (lookahead == '0') ADVANCE(1450);
      END_STATE();
    case 1335:
      if (lookahead == '0') ADVANCE(1458);
      END_STATE();
    case 1336:
      if (lookahead == '0') ADVANCE(1459);
      END_STATE();
    case 1337:
      if (lookahead == '0') ADVANCE(1651);
      if (lookahead == '2') ADVANCE(1432);
      if (lookahead == '7') ADVANCE(2228);
      if (lookahead == '9') ADVANCE(2256);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1846);
      END_STATE();
    case 1338:
      if (lookahead == '0') ADVANCE(1438);
      END_STATE();
    case 1339:
      if (lookahead == '0') ADVANCE(1217);
      if (lookahead == '1') ADVANCE(1257);
      if (lookahead == '6') ADVANCE(1636);
      if (lookahead == '7') ADVANCE(1704);
      if (lookahead == '8') ADVANCE(1753);
      END_STATE();
    case 1340:
      if (lookahead == '0') ADVANCE(1217);
      if (lookahead == '1') ADVANCE(1258);
      if (lookahead == '6') ADVANCE(1636);
      if (lookahead == '7') ADVANCE(1704);
      if (lookahead == '8') ADVANCE(1753);
      END_STATE();
    case 1341:
      if (lookahead == '0') ADVANCE(1254);
      if (lookahead == '1') ADVANCE(1257);
      if (lookahead == '7') ADVANCE(1704);
      END_STATE();
    case 1342:
      if (lookahead == '0') ADVANCE(1254);
      if (lookahead == '1') ADVANCE(1257);
      if (lookahead == '7') ADVANCE(1704);
      if (lookahead == '8') ADVANCE(1759);
      END_STATE();
    case 1343:
      if (lookahead == '0') ADVANCE(1439);
      END_STATE();
    case 1344:
      if (lookahead == '0') ADVANCE(1444);
      END_STATE();
    case 1345:
      if (lookahead == '0') ADVANCE(1451);
      if (lookahead == '1') ADVANCE(1744);
      END_STATE();
    case 1346:
      if (lookahead == '0') ADVANCE(1218);
      if (lookahead == '1') ADVANCE(1258);
      if (lookahead == '6') ADVANCE(1636);
      if (lookahead == '7') ADVANCE(1704);
      if (lookahead == '8') ADVANCE(1753);
      END_STATE();
    case 1347:
      if (lookahead == '0') ADVANCE(1256);
      if (lookahead == '1') ADVANCE(1258);
      if (lookahead == '7') ADVANCE(1704);
      END_STATE();
    case 1348:
      if (lookahead == '1') ADVANCE(2453);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1348);
      END_STATE();
    case 1349:
      ADVANCE_MAP(
        '1', 1211,
        '3', 1613,
        '4', 1493,
        '5', 1714,
        '6', 1375,
        '7', 1567,
        '8', 1475,
        'X', 1361,
        'x', 1361,
      );
      END_STATE();
    case 1350:
      if (lookahead == '1') ADVANCE(1234);
      if (lookahead == '4') ADVANCE(1654);
      if (lookahead == '8') ADVANCE(1478);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1479);
      END_STATE();
    case 1351:
      ADVANCE_MAP(
        '1', 1296,
        '3', 1613,
        '4', 1497,
        '6', 1652,
        '7', 1567,
        '8', 1555,
        'X', 1498,
        'x', 1498,
      );
      END_STATE();
    case 1352:
      if (lookahead == '1') ADVANCE(2525);
      END_STATE();
    case 1353:
      if (lookahead == '1') ADVANCE(1246);
      if (lookahead == '3') ADVANCE(1574);
      if (lookahead == '4') ADVANCE(1616);
      END_STATE();
    case 1354:
      if (lookahead == '1') ADVANCE(1260);
      END_STATE();
    case 1355:
      ADVANCE_MAP(
        '1', 1215,
        '2', 1411,
        '3', 1583,
        '4', 1494,
        '5', 1745,
        '6', 1282,
        '8', 1481,
        '9', 1614,
        'X', 1441,
        'x', 1441,
      );
      END_STATE();
    case 1356:
      if (lookahead == '1') ADVANCE(1625);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1384);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2215);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2212);
      END_STATE();
    case 1357:
      if (lookahead == '1') ADVANCE(1519);
      END_STATE();
    case 1358:
      ADVANCE_MAP(
        '1', 1232,
        '2', 1411,
        '3', 1583,
        '4', 1588,
        '5', 1747,
        '6', 1282,
        '8', 1488,
        '9', 1614,
        'X', 1452,
        'x', 1452,
      );
      END_STATE();
    case 1359:
      if (lookahead == '1') ADVANCE(1297);
      if (lookahead == '4') ADVANCE(1497);
      if (lookahead == '8') ADVANCE(1490);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1491);
      END_STATE();
    case 1360:
      ADVANCE_MAP(
        '1', 1347,
        '2', 1411,
        '3', 1583,
        '4', 1589,
        '5', 1747,
        '6', 1283,
        '8', 1559,
        '9', 1614,
        'X', 1454,
        'x', 1454,
      );
      END_STATE();
    case 1361:
      ADVANCE_MAP(
        '1', 1674,
        '2', 1213,
        '3', 1236,
        '5', 2246,
        '6', 1686,
        'B', 2230,
        'b', 2230,
        'F', 2247,
        'f', 2247,
      );
      END_STATE();
    case 1362:
      if (lookahead == '1') ADVANCE(1242);
      if (lookahead == '4') ADVANCE(1665);
      if (lookahead == '6') ADVANCE(1384);
      if (lookahead == '8') ADVANCE(1482);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1483);
      END_STATE();
    case 1363:
      if (lookahead == '1') ADVANCE(1474);
      if (lookahead == '3') ADVANCE(1613);
      if (lookahead == '6') ADVANCE(1652);
      if (lookahead == '7') ADVANCE(1567);
      if (lookahead == '8') ADVANCE(1499);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1489);
      END_STATE();
    case 1364:
      if (lookahead == '1') ADVANCE(1593);
      END_STATE();
    case 1365:
      if (lookahead == '1') ADVANCE(1604);
      if (lookahead == '7') ADVANCE(1646);
      END_STATE();
    case 1366:
      if (lookahead == '1') ADVANCE(1275);
      if (lookahead == '2') ADVANCE(1523);
      if (lookahead == '3') ADVANCE(1632);
      END_STATE();
    case 1367:
      if (lookahead == '1') ADVANCE(1275);
      if (lookahead == '2') ADVANCE(1529);
      if (lookahead == '3') ADVANCE(1632);
      END_STATE();
    case 1368:
      if (lookahead == '1') ADVANCE(1275);
      if (lookahead == '2') ADVANCE(1524);
      if (lookahead == '3') ADVANCE(1632);
      END_STATE();
    case 1369:
      if (lookahead == '1') ADVANCE(1275);
      if (lookahead == '2') ADVANCE(1530);
      if (lookahead == '3') ADVANCE(1632);
      END_STATE();
    case 1370:
      if (lookahead == '1') ADVANCE(1518);
      if (lookahead == ';') ADVANCE(1195);
      END_STATE();
    case 1371:
      if (lookahead == '1') ADVANCE(1518);
      if (lookahead == ';') ADVANCE(2431);
      END_STATE();
    case 1372:
      if (lookahead == '1') ADVANCE(1741);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2222);
      END_STATE();
    case 1373:
      if (lookahead == '1') ADVANCE(1738);
      if (lookahead == '7') ADVANCE(1644);
      END_STATE();
    case 1374:
      if (lookahead == '1') ADVANCE(1129);
      END_STATE();
    case 1375:
      if (lookahead == '1') ADVANCE(1774);
      if (lookahead == '5') ADVANCE(1501);
      if (lookahead == '9') ADVANCE(1719);
      END_STATE();
    case 1376:
      if (lookahead == '1') ADVANCE(1214);
      if (lookahead == '4') ADVANCE(1703);
      if (lookahead == '8') ADVANCE(1505);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1480);
      END_STATE();
    case 1377:
      if (lookahead == '1') ADVANCE(1461);
      if (lookahead == '6') ADVANCE(1384);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1500);
      END_STATE();
    case 1378:
      if (lookahead == '1') ADVANCE(1231);
      if (lookahead == '4') ADVANCE(1582);
      if (lookahead == '5') ADVANCE(1746);
      if (lookahead == '6') ADVANCE(1384);
      if (lookahead == '8') ADVANCE(1560);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1447);
      END_STATE();
    case 1379:
      if (lookahead == '1') ADVANCE(1231);
      if (lookahead == '4') ADVANCE(1582);
      if (lookahead == '5') ADVANCE(1746);
      if (lookahead == '8') ADVANCE(1560);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1446);
      END_STATE();
    case 1380:
      if (lookahead == '1') ADVANCE(1248);
      if (lookahead == '4') ADVANCE(1580);
      if (lookahead == '5') ADVANCE(1746);
      if (lookahead == '8') ADVANCE(1558);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1448);
      END_STATE();
    case 1381:
      if (lookahead == '1') ADVANCE(1343);
      if (lookahead == '4') ADVANCE(1669);
      if (lookahead == '8') ADVANCE(1562);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1485);
      END_STATE();
    case 1382:
      if (lookahead == '1') ADVANCE(1805);
      END_STATE();
    case 1383:
      if (lookahead == '1') ADVANCE(1808);
      END_STATE();
    case 1384:
      if (lookahead == '1') ADVANCE(1817);
      END_STATE();
    case 1385:
      if (lookahead == '1') ADVANCE(1817);
      if (lookahead == '2') ADVANCE(1817);
      END_STATE();
    case 1386:
      if (lookahead == '1') ADVANCE(1817);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1785);
      END_STATE();
    case 1387:
      if (lookahead == '1') ADVANCE(1817);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1837);
      END_STATE();
    case 1388:
      if (lookahead == '1') ADVANCE(1247);
      if (lookahead == '4') ADVANCE(1571);
      if (lookahead == '5') ADVANCE(1743);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1434);
      END_STATE();
    case 1389:
      if (lookahead == '1') ADVANCE(1502);
      if (lookahead == ';') ADVANCE(2294);
      END_STATE();
    case 1390:
      if (lookahead == '1') ADVANCE(1269);
      if (lookahead == '3') ADVANCE(1574);
      if (lookahead == '4') ADVANCE(1616);
      END_STATE();
    case 1391:
      if (lookahead == '1') ADVANCE(1265);
      END_STATE();
    case 1392:
      if (lookahead == '1') ADVANCE(1527);
      END_STATE();
    case 1393:
      if (lookahead == '1') ADVANCE(1610);
      if (lookahead == '7') ADVANCE(1648);
      END_STATE();
    case 1394:
      if (lookahead == '1') ADVANCE(2239);
      END_STATE();
    case 1395:
      if (lookahead == '1') ADVANCE(1345);
      if (lookahead == '4') ADVANCE(1573);
      if (lookahead == '5') ADVANCE(1743);
      if (lookahead == '6') ADVANCE(1384);
      if (lookahead == '8') ADVANCE(1482);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1435);
      END_STATE();
    case 1396:
      if (lookahead == '1') ADVANCE(1506);
      END_STATE();
    case 1397:
      if (lookahead == '1') ADVANCE(1515);
      END_STATE();
    case 1398:
      if (lookahead == '1') ADVANCE(1515);
      if (lookahead == ';') ADVANCE(2294);
      END_STATE();
    case 1399:
      if (lookahead == '1') ADVANCE(1267);
      END_STATE();
    case 1400:
      if (lookahead == '1') ADVANCE(2223);
      if (lookahead == '3') ADVANCE(1574);
      END_STATE();
    case 1401:
      if (lookahead == '1') ADVANCE(1528);
      END_STATE();
    case 1402:
      if (lookahead == '1') ADVANCE(1508);
      END_STATE();
    case 1403:
      if (lookahead == '1') ADVANCE(1271);
      END_STATE();
    case 1404:
      if (lookahead == '1') ADVANCE(1511);
      END_STATE();
    case 1405:
      if (lookahead == '1') ADVANCE(1280);
      if (lookahead == '3') ADVANCE(2224);
      if (lookahead == '4') ADVANCE(1628);
      END_STATE();
    case 1406:
      if (lookahead == '1') ADVANCE(1280);
      if (lookahead == '3') ADVANCE(2224);
      if (lookahead == '4') ADVANCE(1627);
      END_STATE();
    case 1407:
      if (lookahead == '1') ADVANCE(1512);
      END_STATE();
    case 1408:
      if (lookahead == '1') ADVANCE(1577);
      END_STATE();
    case 1409:
      if (lookahead == '1') ADVANCE(1277);
      END_STATE();
    case 1410:
      if (lookahead == '1') ADVANCE(1277);
      if (lookahead == '4') ADVANCE(1630);
      END_STATE();
    case 1411:
      if (lookahead == '1') ADVANCE(1682);
      if (lookahead == '4') ADVANCE(1727);
      END_STATE();
    case 1412:
      if (lookahead == '1') ADVANCE(1514);
      END_STATE();
    case 1413:
      if (lookahead == '1') ADVANCE(1661);
      END_STATE();
    case 1414:
      if (lookahead == '1') ADVANCE(1287);
      if (lookahead == '4') ADVANCE(1631);
      END_STATE();
    case 1415:
      if (lookahead == '1') ADVANCE(1516);
      END_STATE();
    case 1416:
      ADVANCE_MAP(
        '1', 1662,
        '3', 1382,
        '9', 1667,
        'C', 2216,
        'c', 2216,
        'E', 2211,
        'e', 2211,
        'F', 1577,
        'f', 1577,
      );
      END_STATE();
    case 1417:
      ADVANCE_MAP(
        '1', 1662,
        '3', 1382,
        '9', 1670,
        'C', 2216,
        'c', 2216,
        'E', 2211,
        'e', 2211,
        'F', 1577,
        'f', 1577,
      );
      END_STATE();
    case 1418:
      ADVANCE_MAP(
        '1', 1662,
        '3', 1382,
        '9', 1671,
        'C', 2216,
        'c', 2216,
        'E', 2211,
        'e', 2211,
        'F', 1577,
        'f', 1577,
      );
      END_STATE();
    case 1419:
      ADVANCE_MAP(
        '1', 1662,
        '9', 1667,
        'C', 2216,
        'c', 2216,
        'E', 2211,
        'e', 2211,
        'F', 1577,
        'f', 1577,
      );
      END_STATE();
    case 1420:
      ADVANCE_MAP(
        '1', 1662,
        '9', 1670,
        'C', 2216,
        'c', 2216,
        'E', 2211,
        'e', 2211,
        'F', 1577,
        'f', 1577,
      );
      END_STATE();
    case 1421:
      ADVANCE_MAP(
        '1', 1662,
        '9', 1671,
        'C', 2216,
        'c', 2216,
        'E', 2211,
        'e', 2211,
        'F', 1577,
        'f', 1577,
      );
      END_STATE();
    case 1422:
      if (lookahead == '1') ADVANCE(1728);
      if (lookahead == '2') ADVANCE(1704);
      END_STATE();
    case 1423:
      if (lookahead == '1') ADVANCE(1290);
      if (lookahead == '4') ADVANCE(1634);
      END_STATE();
    case 1424:
      if (lookahead == '1') ADVANCE(1517);
      END_STATE();
    case 1425:
      if (lookahead == '1') ADVANCE(1517);
      if (lookahead == '4') ADVANCE(1517);
      END_STATE();
    case 1426:
      if (lookahead == '1') ADVANCE(1668);
      END_STATE();
    case 1427:
      if (lookahead == '1') ADVANCE(1301);
      END_STATE();
    case 1428:
      if (lookahead == '1') ADVANCE(1538);
      END_STATE();
    case 1429:
      if (lookahead == '1') ADVANCE(1294);
      if (lookahead == '3') ADVANCE(2224);
      if (lookahead == '4') ADVANCE(1628);
      END_STATE();
    case 1430:
      if (lookahead == '1') ADVANCE(1294);
      if (lookahead == '3') ADVANCE(2224);
      if (lookahead == '4') ADVANCE(1627);
      END_STATE();
    case 1431:
      if (lookahead == '1') ADVANCE(1533);
      END_STATE();
    case 1432:
      if (lookahead == '1') ADVANCE(1673);
      END_STATE();
    case 1433:
      if (lookahead == '1') ADVANCE(1268);
      if (lookahead == '4') ADVANCE(1616);
      END_STATE();
    case 1434:
      if (lookahead == '1') ADVANCE(1697);
      if (lookahead == '2') ADVANCE(1701);
      END_STATE();
    case 1435:
      if (lookahead == '1') ADVANCE(1697);
      if (lookahead == '2') ADVANCE(1244);
      if (lookahead == '3') ADVANCE(2235);
      END_STATE();
    case 1436:
      if (lookahead == '1') ADVANCE(1590);
      END_STATE();
    case 1437:
      if (lookahead == '1') ADVANCE(1598);
      END_STATE();
    case 1438:
      if (lookahead == '1') ADVANCE(1742);
      if (lookahead == '7') ADVANCE(1651);
      END_STATE();
    case 1439:
      if (lookahead == '1') ADVANCE(1611);
      if (lookahead == '7') ADVANCE(1650);
      END_STATE();
    case 1440:
      if (lookahead == '1') ADVANCE(1597);
      if (lookahead == '7') ADVANCE(1649);
      END_STATE();
    case 1441:
      ADVANCE_MAP(
        '1', 1698,
        '2', 1228,
        '3', 2225,
        '6', 1686,
        'B', 1386,
        'b', 1386,
        'D', 1727,
        'd', 1727,
        'F', 1727,
        'f', 1727,
      );
      END_STATE();
    case 1442:
      ADVANCE_MAP(
        '1', 1698,
        '2', 1239,
        '3', 2225,
        'B', 1387,
        'b', 1387,
        'D', 1727,
        'd', 1727,
        'F', 1727,
        'f', 1727,
      );
      END_STATE();
    case 1443:
      ADVANCE_MAP(
        '1', 1698,
        '2', 1239,
        '3', 2225,
        'B', 1384,
        'b', 1384,
        'D', 1727,
        'd', 1727,
        'F', 1727,
        'f', 1727,
      );
      END_STATE();
    case 1444:
      if (lookahead == '1') ADVANCE(1601);
      END_STATE();
    case 1445:
      if (lookahead == '1') ADVANCE(1600);
      END_STATE();
    case 1446:
      if (lookahead == '1') ADVANCE(1699);
      if (lookahead == '2') ADVANCE(1331);
      END_STATE();
    case 1447:
      if (lookahead == '1') ADVANCE(1699);
      if (lookahead == '2') ADVANCE(1331);
      if (lookahead == '3') ADVANCE(2235);
      END_STATE();
    case 1448:
      if (lookahead == '1') ADVANCE(1699);
      if (lookahead == '2') ADVANCE(1329);
      END_STATE();
    case 1449:
      if (lookahead == '1') ADVANCE(1699);
      if (lookahead == '2') ADVANCE(1712);
      END_STATE();
    case 1450:
      if (lookahead == '1') ADVANCE(1607);
      END_STATE();
    case 1451:
      if (lookahead == '1') ADVANCE(1606);
      if (lookahead == '7') ADVANCE(1648);
      END_STATE();
    case 1452:
      ADVANCE_MAP(
        '1', 1700,
        '2', 1237,
        '3', 2225,
        'B', 1387,
        'b', 1387,
        'D', 1727,
        'd', 1727,
        'F', 1727,
        'f', 1727,
      );
      END_STATE();
    case 1453:
      ADVANCE_MAP(
        '1', 1700,
        '2', 1229,
        '3', 2225,
        '6', 1686,
        'B', 1386,
        'b', 1386,
        'D', 1727,
        'd', 1727,
        'F', 1727,
        'f', 1727,
      );
      END_STATE();
    case 1454:
      ADVANCE_MAP(
        '1', 1700,
        '2', 1328,
        '3', 2226,
        'B', 1384,
        'b', 1384,
        'D', 1727,
        'd', 1727,
        'F', 1727,
        'f', 1727,
      );
      END_STATE();
    case 1455:
      ADVANCE_MAP(
        '1', 1700,
        '2', 1325,
        '3', 2226,
        '6', 1686,
        'B', 1386,
        'b', 1386,
        'D', 1727,
        'd', 1727,
        'F', 1727,
        'f', 1727,
      );
      END_STATE();
    case 1456:
      ADVANCE_MAP(
        '1', 1700,
        '2', 1238,
        '3', 2226,
        'B', 1384,
        'b', 1384,
        'D', 1727,
        'd', 1727,
        'F', 1727,
        'f', 1727,
      );
      END_STATE();
    case 1457:
      ADVANCE_MAP(
        '1', 1700,
        '2', 1230,
        '3', 2226,
        '6', 1686,
        'B', 1386,
        'b', 1386,
        'D', 1727,
        'd', 1727,
        'F', 1727,
        'f', 1727,
      );
      END_STATE();
    case 1458:
      if (lookahead == '1') ADVANCE(1609);
      END_STATE();
    case 1459:
      if (lookahead == '1') ADVANCE(1612);
      END_STATE();
    case 1460:
      if (lookahead == '1') ADVANCE(1327);
      if (lookahead == '4') ADVANCE(1658);
      if (lookahead == '8') ADVANCE(1556);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1535);
      END_STATE();
    case 1461:
      if (lookahead == '1') ADVANCE(1744);
      END_STATE();
    case 1462:
      if (lookahead == '1') ADVANCE(1338);
      if (lookahead == '4') ADVANCE(1710);
      if (lookahead == '8') ADVANCE(1563);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1536);
      END_STATE();
    case 1463:
      if (lookahead == '1') ADVANCE(1344);
      if (lookahead == '4') ADVANCE(1577);
      if (lookahead == '5') ADVANCE(1746);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1449);
      END_STATE();
    case 1464:
      if (lookahead == '1') ADVANCE(1332);
      if (lookahead == '4') ADVANCE(1659);
      if (lookahead == '8') ADVANCE(1561);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1540);
      END_STATE();
    case 1465:
      if (lookahead == '1') ADVANCE(1334);
      if (lookahead == '4') ADVANCE(1660);
      if (lookahead == '8') ADVANCE(1564);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1544);
      END_STATE();
    case 1466:
      if (lookahead == '1') ADVANCE(1335);
      if (lookahead == '4') ADVANCE(1662);
      if (lookahead == '8') ADVANCE(1565);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1546);
      END_STATE();
    case 1467:
      if (lookahead == '1') ADVANCE(1336);
      if (lookahead == '4') ADVANCE(1672);
      if (lookahead == '8') ADVANCE(1566);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1548);
      END_STATE();
    case 1468:
      ADVANCE_MAP(
        '1', 1339,
        '2', 1411,
        '3', 1583,
        '4', 1495,
        '5', 1747,
        '6', 1282,
        '8', 1481,
        '9', 1614,
        'X', 1453,
        'x', 1453,
      );
      END_STATE();
    case 1469:
      ADVANCE_MAP(
        '1', 1342,
        '2', 1411,
        '3', 1583,
        '4', 1585,
        '5', 1745,
        '6', 1282,
        '8', 1488,
        '9', 1614,
        'X', 1442,
        'x', 1442,
      );
      END_STATE();
    case 1470:
      ADVANCE_MAP(
        '1', 1341,
        '2', 1411,
        '3', 1583,
        '4', 1585,
        '5', 1745,
        '6', 1282,
        '8', 1488,
        '9', 1614,
        'X', 1443,
        'x', 1443,
      );
      END_STATE();
    case 1471:
      ADVANCE_MAP(
        '1', 1346,
        '2', 1411,
        '3', 1583,
        '4', 1496,
        '5', 1747,
        '6', 1283,
        '8', 1557,
        '9', 1614,
        'X', 1455,
        'x', 1455,
      );
      END_STATE();
    case 1472:
      ADVANCE_MAP(
        '1', 1233,
        '2', 1411,
        '3', 1583,
        '4', 1588,
        '5', 1747,
        '6', 1283,
        '8', 1488,
        '9', 1614,
        'X', 1456,
        'x', 1456,
      );
      END_STATE();
    case 1473:
      ADVANCE_MAP(
        '1', 1340,
        '2', 1411,
        '3', 1583,
        '4', 1495,
        '5', 1747,
        '6', 1283,
        '8', 1481,
        '9', 1614,
        'X', 1457,
        'x', 1457,
      );
      END_STATE();
    case 1474:
      if (lookahead == '2') ADVANCE(1492);
      if (lookahead == '5') ADVANCE(1476);
      END_STATE();
    case 1475:
      if (lookahead == '2') ADVANCE(1212);
      if (lookahead == '7') ADVANCE(1534);
      END_STATE();
    case 1476:
      if (lookahead == '2') ADVANCE(1510);
      END_STATE();
    case 1477:
      if (lookahead == '2') ADVANCE(1261);
      if (lookahead == '4') ADVANCE(1574);
      END_STATE();
    case 1478:
      if (lookahead == '2') ADVANCE(1298);
      if (lookahead == '7') ADVANCE(1543);
      END_STATE();
    case 1479:
      if (lookahead == '2') ADVANCE(1251);
      END_STATE();
    case 1480:
      if (lookahead == '2') ADVANCE(1326);
      END_STATE();
    case 1481:
      if (lookahead == '2') ADVANCE(1313);
      if (lookahead == '5') ADVANCE(1760);
      if (lookahead == '6') ADVANCE(1643);
      if (lookahead == '7') ADVANCE(1368);
      if (lookahead == '8') ADVANCE(1319);
      if (lookahead == '9') ADVANCE(1711);
      END_STATE();
    case 1482:
      if (lookahead == '2') ADVANCE(1317);
      if (lookahead == '7') ADVANCE(1486);
      END_STATE();
    case 1483:
      if (lookahead == '2') ADVANCE(1243);
      if (lookahead == '3') ADVANCE(2235);
      END_STATE();
    case 1484:
      if (lookahead == '2') ADVANCE(1683);
      END_STATE();
    case 1485:
      if (lookahead == '2') ADVANCE(1333);
      END_STATE();
    case 1486:
      if (lookahead == '2') ADVANCE(1519);
      END_STATE();
    case 1487:
      if (lookahead == '2') ADVANCE(2527);
      END_STATE();
    case 1488:
      if (lookahead == '2') ADVANCE(1312);
      if (lookahead == '5') ADVANCE(1760);
      if (lookahead == '6') ADVANCE(1643);
      if (lookahead == '7') ADVANCE(1366);
      if (lookahead == '8') ADVANCE(1319);
      if (lookahead == '9') ADVANCE(1711);
      END_STATE();
    case 1489:
      if (lookahead == '2') ADVANCE(1223);
      if (lookahead == '3') ADVANCE(1235);
      if (lookahead == '5') ADVANCE(2246);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2247);
      END_STATE();
    case 1490:
      if (lookahead == '2') ADVANCE(1304);
      if (lookahead == '7') ADVANCE(1539);
      END_STATE();
    case 1491:
      if (lookahead == '2') ADVANCE(1249);
      if (lookahead == '6') ADVANCE(1686);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2230);
      END_STATE();
    case 1492:
      if (lookahead == '2') ADVANCE(1751);
      END_STATE();
    case 1493:
      if (lookahead == '2') ADVANCE(1780);
      if (lookahead == '3') ADVANCE(1775);
      if (lookahead == '5') ADVANCE(1781);
      if (lookahead == '7') ADVANCE(1783);
      END_STATE();
    case 1494:
      if (lookahead == '2') ADVANCE(1780);
      if (lookahead == '3') ADVANCE(1824);
      if (lookahead == '5') ADVANCE(1827);
      if (lookahead == '7') ADVANCE(1826);
      END_STATE();
    case 1495:
      if (lookahead == '2') ADVANCE(1780);
      if (lookahead == '3') ADVANCE(1833);
      if (lookahead == '5') ADVANCE(1827);
      if (lookahead == '7') ADVANCE(1826);
      END_STATE();
    case 1496:
      if (lookahead == '2') ADVANCE(1780);
      if (lookahead == '3') ADVANCE(1833);
      if (lookahead == '5') ADVANCE(1836);
      if (lookahead == '7') ADVANCE(1826);
      END_STATE();
    case 1497:
      if (lookahead == '2') ADVANCE(1780);
      if (lookahead == '5') ADVANCE(1790);
      if (lookahead == '7') ADVANCE(1783);
      END_STATE();
    case 1498:
      ADVANCE_MAP(
        '2', 1324,
        '3', 1235,
        '5', 2246,
        '6', 1686,
        'B', 2230,
        'b', 2230,
        'F', 2247,
        'f', 2247,
      );
      END_STATE();
    case 1499:
      if (lookahead == '2') ADVANCE(1477);
      END_STATE();
    case 1500:
      if (lookahead == '2') ADVANCE(2245);
      if (lookahead == '3') ADVANCE(2235);
      END_STATE();
    case 1501:
      if (lookahead == '2') ADVANCE(1718);
      END_STATE();
    case 1502:
      if (lookahead == '2') ADVANCE(1781);
      if (lookahead == '5') ADVANCE(1802);
      if (lookahead == '7') ADVANCE(1803);
      END_STATE();
    case 1503:
      if (lookahead == '2') ADVANCE(1521);
      if (lookahead == '4') ADVANCE(1682);
      if (lookahead == '9') ADVANCE(1623);
      END_STATE();
    case 1504:
      if (lookahead == '2') ADVANCE(1136);
      END_STATE();
    case 1505:
      if (lookahead == '2') ADVANCE(1691);
      if (lookahead == '7') ADVANCE(1550);
      END_STATE();
    case 1506:
      if (lookahead == '2') ADVANCE(1785);
      END_STATE();
    case 1507:
      if (lookahead == '2') ADVANCE(1394);
      END_STATE();
    case 1508:
      if (lookahead == '2') ADVANCE(1777);
      END_STATE();
    case 1509:
      if (lookahead == '2') ADVANCE(1507);
      END_STATE();
    case 1510:
      if (lookahead == '2') ADVANCE(1792);
      if (lookahead == '4') ADVANCE(1793);
      END_STATE();
    case 1511:
      if (lookahead == '2') ADVANCE(1778);
      END_STATE();
    case 1512:
      if (lookahead == '2') ADVANCE(1840);
      END_STATE();
    case 1513:
      if (lookahead == '2') ADVANCE(1809);
      END_STATE();
    case 1514:
      if (lookahead == '2') ADVANCE(1839);
      END_STATE();
    case 1515:
      if (lookahead == '2') ADVANCE(1814);
      if (lookahead == '5') ADVANCE(1802);
      if (lookahead == '7') ADVANCE(1803);
      END_STATE();
    case 1516:
      if (lookahead == '2') ADVANCE(1784);
      END_STATE();
    case 1517:
      if (lookahead == '2') ADVANCE(1817);
      END_STATE();
    case 1518:
      if (lookahead == '2') ADVANCE(1817);
      if (lookahead == '3') ADVANCE(1817);
      END_STATE();
    case 1519:
      if (lookahead == '2') ADVANCE(1817);
      if (lookahead == '5') ADVANCE(1838);
      END_STATE();
    case 1520:
      if (lookahead == '2') ADVANCE(1817);
      if (lookahead == '6') ADVANCE(1817);
      END_STATE();
    case 1521:
      if (lookahead == '2') ADVANCE(1817);
      if (lookahead == '7') ADVANCE(1817);
      END_STATE();
    case 1522:
      if (lookahead == '2') ADVANCE(1817);
      if (lookahead == '9') ADVANCE(1817);
      END_STATE();
    case 1523:
      if (lookahead == '2') ADVANCE(1827);
      if (lookahead == '3') ADVANCE(1817);
      if (lookahead == '5') ADVANCE(1826);
      END_STATE();
    case 1524:
      if (lookahead == '2') ADVANCE(1827);
      if (lookahead == '3') ADVANCE(1817);
      if (lookahead == '5') ADVANCE(1826);
      if (lookahead == '7') ADVANCE(1803);
      END_STATE();
    case 1525:
      if (lookahead == '2') ADVANCE(1827);
      if (lookahead == '3') ADVANCE(1817);
      if (lookahead == '5') ADVANCE(1826);
      if (lookahead == '7') ADVANCE(1803);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1822);
      END_STATE();
    case 1526:
      if (lookahead == '2') ADVANCE(1827);
      if (lookahead == '3') ADVANCE(1817);
      if (lookahead == '5') ADVANCE(1826);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1822);
      END_STATE();
    case 1527:
      if (lookahead == '2') ADVANCE(1829);
      if (lookahead == '5') ADVANCE(1830);
      END_STATE();
    case 1528:
      if (lookahead == '2') ADVANCE(1844);
      if (lookahead == '5') ADVANCE(1843);
      END_STATE();
    case 1529:
      if (lookahead == '2') ADVANCE(1836);
      if (lookahead == '3') ADVANCE(1817);
      if (lookahead == '5') ADVANCE(1826);
      END_STATE();
    case 1530:
      if (lookahead == '2') ADVANCE(1836);
      if (lookahead == '3') ADVANCE(1817);
      if (lookahead == '5') ADVANCE(1826);
      if (lookahead == '7') ADVANCE(1803);
      END_STATE();
    case 1531:
      if (lookahead == '2') ADVANCE(1836);
      if (lookahead == '3') ADVANCE(1817);
      if (lookahead == '5') ADVANCE(1826);
      if (lookahead == '7') ADVANCE(1803);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1822);
      END_STATE();
    case 1532:
      if (lookahead == '2') ADVANCE(1836);
      if (lookahead == '3') ADVANCE(1817);
      if (lookahead == '5') ADVANCE(1826);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1822);
      END_STATE();
    case 1533:
      if (lookahead == '2') ADVANCE(1837);
      END_STATE();
    case 1534:
      if (lookahead == '2') ADVANCE(1502);
      END_STATE();
    case 1535:
      if (lookahead == '2') ADVANCE(1299);
      END_STATE();
    case 1536:
      if (lookahead == '2') ADVANCE(1337);
      END_STATE();
    case 1537:
      if (lookahead == '2') ADVANCE(1527);
      END_STATE();
    case 1538:
      if (lookahead == '2') ADVANCE(1845);
      END_STATE();
    case 1539:
      if (lookahead == '2') ADVANCE(1515);
      END_STATE();
    case 1540:
      if (lookahead == '2') ADVANCE(1305);
      END_STATE();
    case 1541:
      if (lookahead == '2') ADVANCE(1528);
      END_STATE();
    case 1542:
      if (lookahead == '2') ADVANCE(1384);
      if (lookahead == '3') ADVANCE(2248);
      END_STATE();
    case 1543:
      if (lookahead == '2') ADVANCE(1508);
      END_STATE();
    case 1544:
      if (lookahead == '2') ADVANCE(1308);
      END_STATE();
    case 1545:
      if (lookahead == '2') ADVANCE(1511);
      END_STATE();
    case 1546:
      if (lookahead == '2') ADVANCE(1310);
      END_STATE();
    case 1547:
      if (lookahead == '2') ADVANCE(1512);
      END_STATE();
    case 1548:
      if (lookahead == '2') ADVANCE(1330);
      END_STATE();
    case 1549:
      if (lookahead == '2') ADVANCE(1514);
      END_STATE();
    case 1550:
      if (lookahead == '2') ADVANCE(1661);
      END_STATE();
    case 1551:
      if (lookahead == '2') ADVANCE(1517);
      END_STATE();
    case 1552:
      if (lookahead == '2') ADVANCE(1668);
      END_STATE();
    case 1553:
      if (lookahead == '2') ADVANCE(1538);
      END_STATE();
    case 1554:
      if (lookahead == '2') ADVANCE(1673);
      END_STATE();
    case 1555:
      if (lookahead == '2') ADVANCE(1303);
      if (lookahead == '7') ADVANCE(1539);
      END_STATE();
    case 1556:
      if (lookahead == '2') ADVANCE(1307);
      if (lookahead == '7') ADVANCE(1545);
      END_STATE();
    case 1557:
      if (lookahead == '2') ADVANCE(1323);
      if (lookahead == '5') ADVANCE(1760);
      if (lookahead == '6') ADVANCE(1643);
      if (lookahead == '7') ADVANCE(1369);
      if (lookahead == '8') ADVANCE(1319);
      if (lookahead == '9') ADVANCE(1711);
      END_STATE();
    case 1558:
      if (lookahead == '2') ADVANCE(1318);
      if (lookahead == '7') ADVANCE(1537);
      END_STATE();
    case 1559:
      if (lookahead == '2') ADVANCE(1322);
      if (lookahead == '5') ADVANCE(1760);
      if (lookahead == '6') ADVANCE(1643);
      if (lookahead == '7') ADVANCE(1367);
      if (lookahead == '8') ADVANCE(1319);
      if (lookahead == '9') ADVANCE(1711);
      END_STATE();
    case 1560:
      if (lookahead == '2') ADVANCE(1695);
      if (lookahead == '7') ADVANCE(1552);
      END_STATE();
    case 1561:
      if (lookahead == '2') ADVANCE(1309);
      if (lookahead == '7') ADVANCE(1547);
      END_STATE();
    case 1562:
      if (lookahead == '2') ADVANCE(1320);
      if (lookahead == '7') ADVANCE(1541);
      END_STATE();
    case 1563:
      if (lookahead == '2') ADVANCE(1696);
      if (lookahead == '7') ADVANCE(1554);
      END_STATE();
    case 1564:
      if (lookahead == '2') ADVANCE(1311);
      if (lookahead == '7') ADVANCE(1549);
      END_STATE();
    case 1565:
      if (lookahead == '2') ADVANCE(1316);
      if (lookahead == '7') ADVANCE(1551);
      END_STATE();
    case 1566:
      if (lookahead == '2') ADVANCE(1321);
      if (lookahead == '7') ADVANCE(1553);
      END_STATE();
    case 1567:
      if (lookahead == '3') ADVANCE(1570);
      if (lookahead == '5') ADVANCE(1253);
      END_STATE();
    case 1568:
      if (lookahead == '3') ADVANCE(1569);
      if (lookahead == '8') ADVANCE(1702);
      END_STATE();
    case 1569:
      if (lookahead == '3') ADVANCE(1775);
      if (lookahead == '4') ADVANCE(1781);
      END_STATE();
    case 1570:
      if (lookahead == '3') ADVANCE(1787);
      END_STATE();
    case 1571:
      if (lookahead == '3') ADVANCE(1773);
      END_STATE();
    case 1572:
      if (lookahead == '3') ADVANCE(1773);
      if (lookahead == '4') ADVANCE(1817);
      END_STATE();
    case 1573:
      if (lookahead == '3') ADVANCE(1773);
      if (lookahead == '5') ADVANCE(1817);
      if (lookahead == '7') ADVANCE(1838);
      END_STATE();
    case 1574:
      if (lookahead == '3') ADVANCE(1798);
      if (lookahead == '6') ADVANCE(1799);
      END_STATE();
    case 1575:
      if (lookahead == '3') ADVANCE(1805);
      END_STATE();
    case 1576:
      if (lookahead == '3') ADVANCE(1808);
      END_STATE();
    case 1577:
      if (lookahead == '3') ADVANCE(1817);
      END_STATE();
    case 1578:
      if (lookahead == '3') ADVANCE(1817);
      if (lookahead == '4') ADVANCE(1817);
      END_STATE();
    case 1579:
      if (lookahead == '3') ADVANCE(1817);
      if (lookahead == '4') ADVANCE(1829);
      END_STATE();
    case 1580:
      if (lookahead == '3') ADVANCE(1817);
      if (lookahead == '5') ADVANCE(1829);
      if (lookahead == '7') ADVANCE(1830);
      END_STATE();
    case 1581:
      if (lookahead == '3') ADVANCE(1817);
      if (lookahead == '7') ADVANCE(1817);
      END_STATE();
    case 1582:
      if (lookahead == '3') ADVANCE(1817);
      if (lookahead == '7') ADVANCE(1828);
      END_STATE();
    case 1583:
      if (lookahead == '3') ADVANCE(1831);
      END_STATE();
    case 1584:
      if (lookahead == '3') ADVANCE(1824);
      if (lookahead == '4') ADVANCE(1827);
      END_STATE();
    case 1585:
      if (lookahead == '3') ADVANCE(1824);
      if (lookahead == '5') ADVANCE(1827);
      if (lookahead == '7') ADVANCE(1826);
      END_STATE();
    case 1586:
      if (lookahead == '3') ADVANCE(1833);
      if (lookahead == '4') ADVANCE(1827);
      END_STATE();
    case 1587:
      if (lookahead == '3') ADVANCE(1833);
      if (lookahead == '4') ADVANCE(1836);
      END_STATE();
    case 1588:
      if (lookahead == '3') ADVANCE(1833);
      if (lookahead == '5') ADVANCE(1827);
      if (lookahead == '7') ADVANCE(1826);
      END_STATE();
    case 1589:
      if (lookahead == '3') ADVANCE(1833);
      if (lookahead == '5') ADVANCE(1836);
      if (lookahead == '7') ADVANCE(1826);
      END_STATE();
    case 1590:
      if (lookahead == '3') ADVANCE(1571);
      END_STATE();
    case 1591:
      if (lookahead == '3') ADVANCE(1382);
      if (lookahead == '9') ADVANCE(1653);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2213);
      END_STATE();
    case 1592:
      if (lookahead == '3') ADVANCE(1382);
      if (lookahead == '9') ADVANCE(1681);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2213);
      END_STATE();
    case 1593:
      if (lookahead == '3') ADVANCE(1615);
      END_STATE();
    case 1594:
      if (lookahead == '3') ADVANCE(1575);
      END_STATE();
    case 1595:
      if (lookahead == '3') ADVANCE(1584);
      if (lookahead == '8') ADVANCE(1705);
      END_STATE();
    case 1596:
      if (lookahead == '3') ADVANCE(1621);
      if (lookahead == '8') ADVANCE(1702);
      END_STATE();
    case 1597:
      if (lookahead == '3') ADVANCE(1579);
      if (lookahead == '8') ADVANCE(1708);
      END_STATE();
    case 1598:
      if (lookahead == '3') ADVANCE(1617);
      END_STATE();
    case 1599:
      if (lookahead == '3') ADVANCE(1586);
      if (lookahead == '8') ADVANCE(1705);
      END_STATE();
    case 1600:
      if (lookahead == '3') ADVANCE(1618);
      END_STATE();
    case 1601:
      if (lookahead == '3') ADVANCE(1577);
      END_STATE();
    case 1602:
      if (lookahead == '3') ADVANCE(1577);
      if (lookahead == '6') ADVANCE(1577);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1542);
      END_STATE();
    case 1603:
      if (lookahead == '3') ADVANCE(1577);
      if (lookahead == '7') ADVANCE(1662);
      END_STATE();
    case 1604:
      if (lookahead == '3') ADVANCE(1577);
      if (lookahead == '8') ADVANCE(1706);
      END_STATE();
    case 1605:
      if (lookahead == '3') ADVANCE(2235);
      END_STATE();
    case 1606:
      if (lookahead == '3') ADVANCE(1572);
      if (lookahead == '8') ADVANCE(1707);
      END_STATE();
    case 1607:
      if (lookahead == '3') ADVANCE(1620);
      END_STATE();
    case 1608:
      if (lookahead == '3') ADVANCE(1587);
      if (lookahead == '8') ADVANCE(1705);
      END_STATE();
    case 1609:
      if (lookahead == '3') ADVANCE(1623);
      END_STATE();
    case 1610:
      if (lookahead == '3') ADVANCE(1623);
      if (lookahead == '8') ADVANCE(1707);
      END_STATE();
    case 1611:
      if (lookahead == '3') ADVANCE(1633);
      if (lookahead == '8') ADVANCE(1709);
      END_STATE();
    case 1612:
      if (lookahead == '3') ADVANCE(1637);
      END_STATE();
    case 1613:
      if (lookahead == '4') ADVANCE(1779);
      END_STATE();
    case 1614:
      if (lookahead == '4') ADVANCE(1748);
      if (lookahead == '6') ADVANCE(1603);
      if (lookahead == '7') ADVANCE(1503);
      END_STATE();
    case 1615:
      if (lookahead == '4') ADVANCE(1777);
      END_STATE();
    case 1616:
      if (lookahead == '4') ADVANCE(1800);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1801);
      END_STATE();
    case 1617:
      if (lookahead == '4') ADVANCE(1778);
      END_STATE();
    case 1618:
      if (lookahead == '4') ADVANCE(1840);
      END_STATE();
    case 1619:
      if (lookahead == '4') ADVANCE(1807);
      END_STATE();
    case 1620:
      if (lookahead == '4') ADVANCE(1839);
      END_STATE();
    case 1621:
      if (lookahead == '4') ADVANCE(1815);
      END_STATE();
    case 1622:
      if (lookahead == '4') ADVANCE(1816);
      END_STATE();
    case 1623:
      if (lookahead == '4') ADVANCE(1817);
      END_STATE();
    case 1624:
      if (lookahead == '4') ADVANCE(1817);
      if (lookahead == '7') ADVANCE(1817);
      END_STATE();
    case 1625:
      if (lookahead == '4') ADVANCE(1817);
      if (lookahead == '8') ADVANCE(1817);
      END_STATE();
    case 1626:
      if (lookahead == '4') ADVANCE(1826);
      END_STATE();
    case 1627:
      if (lookahead == '4') ADVANCE(1826);
      if (lookahead == '7') ADVANCE(1817);
      if (lookahead == '8') ADVANCE(1817);
      if (lookahead == '9') ADVANCE(1817);
      END_STATE();
    case 1628:
      if (lookahead == '4') ADVANCE(1826);
      if (lookahead == '7') ADVANCE(1817);
      if (lookahead == '8') ADVANCE(1817);
      if (lookahead == '9') ADVANCE(1817);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1801);
      END_STATE();
    case 1629:
      if (lookahead == '4') ADVANCE(1828);
      END_STATE();
    case 1630:
      if (lookahead == '4') ADVANCE(1838);
      END_STATE();
    case 1631:
      if (lookahead == '4') ADVANCE(1830);
      END_STATE();
    case 1632:
      if (lookahead == '4') ADVANCE(1822);
      END_STATE();
    case 1633:
      if (lookahead == '4') ADVANCE(1844);
      END_STATE();
    case 1634:
      if (lookahead == '4') ADVANCE(1843);
      END_STATE();
    case 1635:
      if (lookahead == '4') ADVANCE(1619);
      END_STATE();
    case 1636:
      if (lookahead == '4') ADVANCE(1657);
      END_STATE();
    case 1637:
      if (lookahead == '4') ADVANCE(1845);
      END_STATE();
    case 1638:
      if (lookahead == '4') ADVANCE(1846);
      END_STATE();
    case 1639:
      if (lookahead == '4') ADVANCE(1250);
      END_STATE();
    case 1640:
      if (lookahead == '4') ADVANCE(1250);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1788);
      END_STATE();
    case 1641:
      if (lookahead == '4') ADVANCE(1274);
      END_STATE();
    case 1642:
      if (lookahead == '4') ADVANCE(1292);
      END_STATE();
    case 1643:
      if (lookahead == '4') ADVANCE(1682);
      if (lookahead == '6') ADVANCE(1278);
      END_STATE();
    case 1644:
      if (lookahead == '4') ADVANCE(1622);
      END_STATE();
    case 1645:
      if (lookahead == '4') ADVANCE(1626);
      if (lookahead == '5') ADVANCE(1518);
      END_STATE();
    case 1646:
      if (lookahead == '4') ADVANCE(1629);
      END_STATE();
    case 1647:
      if (lookahead == '4') ADVANCE(1295);
      END_STATE();
    case 1648:
      if (lookahead == '4') ADVANCE(1630);
      END_STATE();
    case 1649:
      if (lookahead == '4') ADVANCE(1631);
      END_STATE();
    case 1650:
      if (lookahead == '4') ADVANCE(1634);
      END_STATE();
    case 1651:
      if (lookahead == '4') ADVANCE(1638);
      END_STATE();
    case 1652:
      if (lookahead == '5') ADVANCE(1501);
      if (lookahead == '9') ADVANCE(1719);
      END_STATE();
    case 1653:
      if (lookahead == '5') ADVANCE(1775);
      if (lookahead == '6') ADVANCE(1781);
      END_STATE();
    case 1654:
      if (lookahead == '5') ADVANCE(1777);
      END_STATE();
    case 1655:
      if (lookahead == '5') ADVANCE(1773);
      END_STATE();
    case 1656:
      if (lookahead == '5') ADVANCE(1773);
      if (lookahead == '6') ADVANCE(1817);
      END_STATE();
    case 1657:
      if (lookahead == '5') ADVANCE(1794);
      END_STATE();
    case 1658:
      if (lookahead == '5') ADVANCE(1778);
      END_STATE();
    case 1659:
      if (lookahead == '5') ADVANCE(1840);
      END_STATE();
    case 1660:
      if (lookahead == '5') ADVANCE(1839);
      END_STATE();
    case 1661:
      if (lookahead == '5') ADVANCE(1816);
      END_STATE();
    case 1662:
      if (lookahead == '5') ADVANCE(1817);
      END_STATE();
    case 1663:
      if (lookahead == '5') ADVANCE(1817);
      if (lookahead == '6') ADVANCE(1817);
      END_STATE();
    case 1664:
      if (lookahead == '5') ADVANCE(1817);
      if (lookahead == '6') ADVANCE(1829);
      END_STATE();
    case 1665:
      if (lookahead == '5') ADVANCE(1817);
      if (lookahead == '7') ADVANCE(1838);
      END_STATE();
    case 1666:
      if (lookahead == '5') ADVANCE(1817);
      if (lookahead == '9') ADVANCE(1817);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1817);
      END_STATE();
    case 1667:
      if (lookahead == '5') ADVANCE(1824);
      if (lookahead == '6') ADVANCE(1827);
      END_STATE();
    case 1668:
      if (lookahead == '5') ADVANCE(1828);
      END_STATE();
    case 1669:
      if (lookahead == '5') ADVANCE(1844);
      if (lookahead == '7') ADVANCE(1843);
      END_STATE();
    case 1670:
      if (lookahead == '5') ADVANCE(1833);
      if (lookahead == '6') ADVANCE(1827);
      END_STATE();
    case 1671:
      if (lookahead == '5') ADVANCE(1833);
      if (lookahead == '6') ADVANCE(1836);
      END_STATE();
    case 1672:
      if (lookahead == '5') ADVANCE(1845);
      END_STATE();
    case 1673:
      if (lookahead == '5') ADVANCE(1846);
      END_STATE();
    case 1674:
      if (lookahead == '6') ADVANCE(2240);
      END_STATE();
    case 1675:
      if (lookahead == '6') ADVANCE(1789);
      END_STATE();
    case 1676:
      if (lookahead == '6') ADVANCE(1789);
      if (lookahead == ';') ADVANCE(2487);
      END_STATE();
    case 1677:
      if (lookahead == '6') ADVANCE(1777);
      END_STATE();
    case 1678:
      if (lookahead == '6') ADVANCE(1778);
      END_STATE();
    case 1679:
      if (lookahead == '6') ADVANCE(1840);
      END_STATE();
    case 1680:
      if (lookahead == '6') ADVANCE(1839);
      END_STATE();
    case 1681:
      if (lookahead == '6') ADVANCE(1815);
      END_STATE();
    case 1682:
      if (lookahead == '6') ADVANCE(1817);
      END_STATE();
    case 1683:
      if (lookahead == '6') ADVANCE(1817);
      if (lookahead == '7') ADVANCE(1817);
      END_STATE();
    case 1684:
      if (lookahead == '6') ADVANCE(1844);
      END_STATE();
    case 1685:
      if (lookahead == '6') ADVANCE(1749);
      END_STATE();
    case 1686:
      if (lookahead == '6') ADVANCE(2233);
      END_STATE();
    case 1687:
      if (lookahead == '6') ADVANCE(1663);
      END_STATE();
    case 1688:
      if (lookahead == '6') ADVANCE(1845);
      END_STATE();
    case 1689:
      if (lookahead == '6') ADVANCE(1754);
      END_STATE();
    case 1690:
      if (lookahead == '6') ADVANCE(1384);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1605);
      END_STATE();
    case 1691:
      if (lookahead == '6') ADVANCE(1273);
      END_STATE();
    case 1692:
      if (lookahead == '6') ADVANCE(1757);
      END_STATE();
    case 1693:
      if (lookahead == '6') ADVANCE(1756);
      END_STATE();
    case 1694:
      if (lookahead == '6') ADVANCE(1758);
      END_STATE();
    case 1695:
      if (lookahead == '6') ADVANCE(1284);
      END_STATE();
    case 1696:
      if (lookahead == '6') ADVANCE(1302);
      END_STATE();
    case 1697:
      if (lookahead == '6') ADVANCE(2241);
      END_STATE();
    case 1698:
      if (lookahead == '6') ADVANCE(2243);
      END_STATE();
    case 1699:
      if (lookahead == '6') ADVANCE(2242);
      END_STATE();
    case 1700:
      if (lookahead == '6') ADVANCE(2244);
      END_STATE();
    case 1701:
      if (lookahead == '7') ADVANCE(1765);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1773);
      END_STATE();
    case 1702:
      if (lookahead == '7') ADVANCE(1806);
      END_STATE();
    case 1703:
      if (lookahead == '7') ADVANCE(1816);
      END_STATE();
    case 1704:
      if (lookahead == '7') ADVANCE(1817);
      END_STATE();
    case 1705:
      if (lookahead == '7') ADVANCE(1826);
      END_STATE();
    case 1706:
      if (lookahead == '7') ADVANCE(1828);
      END_STATE();
    case 1707:
      if (lookahead == '7') ADVANCE(1838);
      END_STATE();
    case 1708:
      if (lookahead == '7') ADVANCE(1830);
      END_STATE();
    case 1709:
      if (lookahead == '7') ADVANCE(1843);
      END_STATE();
    case 1710:
      if (lookahead == '7') ADVANCE(1846);
      END_STATE();
    case 1711:
      if (lookahead == '7') ADVANCE(1756);
      END_STATE();
    case 1712:
      if (lookahead == '7') ADVANCE(1770);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1817);
      END_STATE();
    case 1713:
      if (lookahead == '7') ADVANCE(1609);
      END_STATE();
    case 1714:
      if (lookahead == '8') ADVANCE(1685);
      END_STATE();
    case 1715:
      if (lookahead == '8') ADVANCE(1713);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1509);
      END_STATE();
    case 1716:
      if (lookahead == '8') ADVANCE(1639);
      END_STATE();
    case 1717:
      if (lookahead == '8') ADVANCE(1781);
      if (lookahead == '9') ADVANCE(1781);
      END_STATE();
    case 1718:
      if (lookahead == '8') ADVANCE(1513);
      END_STATE();
    case 1719:
      if (lookahead == '8') ADVANCE(1786);
      END_STATE();
    case 1720:
      if (lookahead == '8') ADVANCE(1777);
      if (lookahead == '9') ADVANCE(1777);
      END_STATE();
    case 1721:
      if (lookahead == '8') ADVANCE(1778);
      if (lookahead == '9') ADVANCE(1778);
      END_STATE();
    case 1722:
      if (lookahead == '8') ADVANCE(1840);
      if (lookahead == '9') ADVANCE(1840);
      END_STATE();
    case 1723:
      if (lookahead == '8') ADVANCE(1804);
      if (lookahead == '9') ADVANCE(1810);
      END_STATE();
    case 1724:
      if (lookahead == '8') ADVANCE(1807);
      END_STATE();
    case 1725:
      if (lookahead == '8') ADVANCE(1839);
      if (lookahead == '9') ADVANCE(1839);
      END_STATE();
    case 1726:
      if (lookahead == '8') ADVANCE(1816);
      END_STATE();
    case 1727:
      if (lookahead == '8') ADVANCE(1817);
      END_STATE();
    case 1728:
      if (lookahead == '8') ADVANCE(1817);
      if (lookahead == '9') ADVANCE(1817);
      END_STATE();
    case 1729:
      if (lookahead == '8') ADVANCE(1827);
      if (lookahead == '9') ADVANCE(1827);
      END_STATE();
    case 1730:
      if (lookahead == '8') ADVANCE(1826);
      END_STATE();
    case 1731:
      if (lookahead == '8') ADVANCE(1828);
      END_STATE();
    case 1732:
      if (lookahead == '8') ADVANCE(1838);
      END_STATE();
    case 1733:
      if (lookahead == '8') ADVANCE(1829);
      if (lookahead == '9') ADVANCE(1829);
      END_STATE();
    case 1734:
      if (lookahead == '8') ADVANCE(1830);
      END_STATE();
    case 1735:
      if (lookahead == '8') ADVANCE(1844);
      if (lookahead == '9') ADVANCE(1844);
      END_STATE();
    case 1736:
      if (lookahead == '8') ADVANCE(1843);
      END_STATE();
    case 1737:
      if (lookahead == '8') ADVANCE(1836);
      if (lookahead == '9') ADVANCE(1836);
      END_STATE();
    case 1738:
      if (lookahead == '8') ADVANCE(1703);
      END_STATE();
    case 1739:
      if (lookahead == '8') ADVANCE(1845);
      if (lookahead == '9') ADVANCE(1845);
      END_STATE();
    case 1740:
      if (lookahead == '8') ADVANCE(1846);
      END_STATE();
    case 1741:
      if (lookahead == '8') ADVANCE(1755);
      END_STATE();
    case 1742:
      if (lookahead == '8') ADVANCE(1710);
      END_STATE();
    case 1743:
      if (lookahead == '8') ADVANCE(1689);
      END_STATE();
    case 1744:
      if (lookahead == '8') ADVANCE(1641);
      END_STATE();
    case 1745:
      if (lookahead == '8') ADVANCE(1692);
      END_STATE();
    case 1746:
      if (lookahead == '8') ADVANCE(1693);
      END_STATE();
    case 1747:
      if (lookahead == '8') ADVANCE(1694);
      END_STATE();
    case 1748:
      if (lookahead == '9') ADVANCE(1520);
      END_STATE();
    case 1749:
      if (lookahead == '9') ADVANCE(1775);
      END_STATE();
    case 1750:
      if (lookahead == '9') ADVANCE(1677);
      END_STATE();
    case 1751:
      if (lookahead == '9') ADVANCE(1383);
      END_STATE();
    case 1752:
      if (lookahead == '9') ADVANCE(1385);
      if (lookahead == ';') ADVANCE(2448);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1682);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1624);
      END_STATE();
    case 1753:
      if (lookahead == '9') ADVANCE(1785);
      END_STATE();
    case 1754:
      if (lookahead == '9') ADVANCE(1773);
      END_STATE();
    case 1755:
      if (lookahead == '9') ADVANCE(1784);
      END_STATE();
    case 1756:
      if (lookahead == '9') ADVANCE(1817);
      END_STATE();
    case 1757:
      if (lookahead == '9') ADVANCE(1824);
      END_STATE();
    case 1758:
      if (lookahead == '9') ADVANCE(1833);
      END_STATE();
    case 1759:
      if (lookahead == '9') ADVANCE(1837);
      END_STATE();
    case 1760:
      if (lookahead == '9') ADVANCE(1578);
      END_STATE();
    case 1761:
      if (lookahead == '9') ADVANCE(1678);
      END_STATE();
    case 1762:
      if (lookahead == '9') ADVANCE(1664);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2219);
      END_STATE();
    case 1763:
      if (lookahead == '9') ADVANCE(1679);
      END_STATE();
    case 1764:
      if (lookahead == '9') ADVANCE(1680);
      END_STATE();
    case 1765:
      if (lookahead == '9') ADVANCE(1655);
      END_STATE();
    case 1766:
      if (lookahead == '9') ADVANCE(1656);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2218);
      END_STATE();
    case 1767:
      if (lookahead == '9') ADVANCE(1682);
      END_STATE();
    case 1768:
      if (lookahead == '9') ADVANCE(1682);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2218);
      END_STATE();
    case 1769:
      if (lookahead == '9') ADVANCE(1684);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2220);
      END_STATE();
    case 1770:
      if (lookahead == '9') ADVANCE(1662);
      END_STATE();
    case 1771:
      if (lookahead == '9') ADVANCE(1662);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2217);
      END_STATE();
    case 1772:
      if (lookahead == '9') ADVANCE(1688);
      END_STATE();
    case 1773:
      if (lookahead == ';') ADVANCE(2427);
      END_STATE();
    case 1774:
      if (lookahead == ';') ADVANCE(2401);
      END_STATE();
    case 1775:
      if (lookahead == ';') ADVANCE(2430);
      END_STATE();
    case 1776:
      if (lookahead == ';') ADVANCE(2430);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1786);
      END_STATE();
    case 1777:
      if (lookahead == ';') ADVANCE(2259);
      END_STATE();
    case 1778:
      if (lookahead == ';') ADVANCE(1127);
      END_STATE();
    case 1779:
      if (lookahead == ';') ADVANCE(2294);
      END_STATE();
    case 1780:
      if (lookahead == ';') ADVANCE(2505);
      END_STATE();
    case 1781:
      if (lookahead == ';') ADVANCE(2417);
      END_STATE();
    case 1782:
      if (lookahead == ';') ADVANCE(2417);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1787);
      END_STATE();
    case 1783:
      if (lookahead == ';') ADVANCE(2487);
      END_STATE();
    case 1784:
      if (lookahead == ';') ADVANCE(2529);
      END_STATE();
    case 1785:
      if (lookahead == ';') ADVANCE(2502);
      END_STATE();
    case 1786:
      if (lookahead == ';') ADVANCE(2314);
      END_STATE();
    case 1787:
      if (lookahead == ';') ADVANCE(2312);
      END_STATE();
    case 1788:
      if (lookahead == ';') ADVANCE(2318);
      END_STATE();
    case 1789:
      if (lookahead == ';') ADVANCE(2316);
      END_STATE();
    case 1790:
      if (lookahead == ';') ADVANCE(2458);
      END_STATE();
    case 1791:
      if (lookahead == ';') ADVANCE(2458);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1787);
      END_STATE();
    case 1792:
      if (lookahead == ';') ADVANCE(2320);
      END_STATE();
    case 1793:
      if (lookahead == ';') ADVANCE(2310);
      END_STATE();
    case 1794:
      if (lookahead == ';') ADVANCE(2521);
      END_STATE();
    case 1795:
      if (lookahead == ';') ADVANCE(2298);
      END_STATE();
    case 1796:
      if (lookahead == ';') ADVANCE(2300);
      END_STATE();
    case 1797:
      if (lookahead == ';') ADVANCE(2302);
      END_STATE();
    case 1798:
      if (lookahead == ';') ADVANCE(2304);
      END_STATE();
    case 1799:
      if (lookahead == ';') ADVANCE(2306);
      END_STATE();
    case 1800:
      if (lookahead == ';') ADVANCE(2491);
      END_STATE();
    case 1801:
      if (lookahead == ';') ADVANCE(2517);
      END_STATE();
    case 1802:
      if (lookahead == ';') ADVANCE(2489);
      END_STATE();
    case 1803:
      if (lookahead == ';') ADVANCE(2509);
      END_STATE();
    case 1804:
      if (lookahead == ';') ADVANCE(2462);
      END_STATE();
    case 1805:
      if (lookahead == ';') ADVANCE(2513);
      END_STATE();
    case 1806:
      if (lookahead == ';') ADVANCE(2493);
      END_STATE();
    case 1807:
      if (lookahead == ';') ADVANCE(2495);
      END_STATE();
    case 1808:
      if (lookahead == ';') ADVANCE(2308);
      END_STATE();
    case 1809:
      if (lookahead == ';') ADVANCE(2296);
      END_STATE();
    case 1810:
      if (lookahead == ';') ADVANCE(2464);
      END_STATE();
    case 1811:
      if (lookahead == ';') ADVANCE(2466);
      END_STATE();
    case 1812:
      if (lookahead == ';') ADVANCE(2468);
      END_STATE();
    case 1813:
      if (lookahead == ';') ADVANCE(2470);
      END_STATE();
    case 1814:
      if (lookahead == ';') ADVANCE(2460);
      END_STATE();
    case 1815:
      if (lookahead == ';') ADVANCE(2472);
      END_STATE();
    case 1816:
      if (lookahead == ';') ADVANCE(1194);
      END_STATE();
    case 1817:
      if (lookahead == ';') ADVANCE(2432);
      END_STATE();
    case 1818:
      if (lookahead == ';') ADVANCE(2432);
      if (lookahead == 'a') ADVANCE(2108);
      END_STATE();
    case 1819:
      if (lookahead == ';') ADVANCE(2432);
      if (lookahead == 'f') ADVANCE(2159);
      if (lookahead == 'q') ADVANCE(1817);
      END_STATE();
    case 1820:
      if (lookahead == ';') ADVANCE(2432);
      if (lookahead == 'o') ADVANCE(2197);
      END_STATE();
    case 1821:
      if (lookahead == ';') ADVANCE(2432);
      if (lookahead == 't') ADVANCE(2067);
      END_STATE();
    case 1822:
      if (lookahead == ';') ADVANCE(2444);
      END_STATE();
    case 1823:
      if (lookahead == ';') ADVANCE(2445);
      END_STATE();
    case 1824:
      if (lookahead == ';') ADVANCE(1195);
      END_STATE();
    case 1825:
      if (lookahead == ';') ADVANCE(1195);
      if (lookahead == 'b') ADVANCE(1817);
      if (lookahead == 'e') ADVANCE(1817);
      if (lookahead == 'm') ADVANCE(2046);
      END_STATE();
    case 1826:
      if (lookahead == ';') ADVANCE(1193);
      END_STATE();
    case 1827:
      if (lookahead == ';') ADVANCE(2447);
      END_STATE();
    case 1828:
      if (lookahead == ';') ADVANCE(1197);
      END_STATE();
    case 1829:
      if (lookahead == ';') ADVANCE(2424);
      END_STATE();
    case 1830:
      if (lookahead == ';') ADVANCE(1201);
      END_STATE();
    case 1831:
      if (lookahead == ';') ADVANCE(2448);
      END_STATE();
    case 1832:
      if (lookahead == ';') ADVANCE(1199);
      END_STATE();
    case 1833:
      if (lookahead == ';') ADVANCE(2431);
      END_STATE();
    case 1834:
      if (lookahead == ';') ADVANCE(2431);
      if (lookahead == 'b') ADVANCE(1817);
      if (lookahead == 'e') ADVANCE(1817);
      if (lookahead == 'm') ADVANCE(2046);
      END_STATE();
    case 1835:
      if (lookahead == ';') ADVANCE(2405);
      END_STATE();
    case 1836:
      if (lookahead == ';') ADVANCE(2419);
      END_STATE();
    case 1837:
      if (lookahead == ';') ADVANCE(2500);
      END_STATE();
    case 1838:
      if (lookahead == ';') ADVANCE(1204);
      END_STATE();
    case 1839:
      if (lookahead == ';') ADVANCE(2260);
      END_STATE();
    case 1840:
      if (lookahead == ';') ADVANCE(1128);
      END_STATE();
    case 1841:
      if (lookahead == ';') ADVANCE(2449);
      END_STATE();
    case 1842:
      if (lookahead == ';') ADVANCE(2407);
      END_STATE();
    case 1843:
      if (lookahead == ';') ADVANCE(1133);
      END_STATE();
    case 1844:
      if (lookahead == ';') ADVANCE(1132);
      END_STATE();
    case 1845:
      if (lookahead == ';') ADVANCE(1134);
      END_STATE();
    case 1846:
      if (lookahead == ';') ADVANCE(1135);
      END_STATE();
    case 1847:
      if (lookahead == '=') ADVANCE(2432);
      END_STATE();
    case 1848:
      if (lookahead == 'A') ADVANCE(2109);
      END_STATE();
    case 1849:
      if (lookahead == 'A') ADVANCE(2109);
      if (lookahead == 'R') ADVANCE(2000);
      END_STATE();
    case 1850:
      if (lookahead == 'A') ADVANCE(2109);
      if (lookahead == 'T') ADVANCE(1940);
      if (lookahead == 'p') ADVANCE(1941);
      END_STATE();
    case 1851:
      if (lookahead == 'L') ADVANCE(1943);
      if (lookahead == 'R') ADVANCE(2000);
      if (lookahead == 'U') ADVANCE(2083);
      END_STATE();
    case 1852:
      if (lookahead == 'M') ADVANCE(2008);
      END_STATE();
    case 1853:
      if (lookahead == 'N') ADVANCE(2432);
      END_STATE();
    case 1854:
      if (lookahead == 'P') ADVANCE(2035);
      END_STATE();
    case 1855:
      if (lookahead == 'R') ADVANCE(2000);
      END_STATE();
    case 1856:
      if (lookahead == 'a') ADVANCE(2116);
      END_STATE();
    case 1857:
      if (lookahead == 'a') ADVANCE(1904);
      END_STATE();
    case 1858:
      if (lookahead == 'a') ADVANCE(2010);
      if (lookahead == 'y') ADVANCE(2089);
      END_STATE();
    case 1859:
      if (lookahead == 'a') ADVANCE(2010);
      if (lookahead == 'y') ADVANCE(2094);
      END_STATE();
    case 1860:
      if (lookahead == 'a') ADVANCE(1903);
      if (lookahead == 'd') ADVANCE(1891);
      if (lookahead == 'e') ADVANCE(1884);
      if (lookahead == 'v') ADVANCE(2028);
      END_STATE();
    case 1861:
      if (lookahead == 'a') ADVANCE(1903);
      if (lookahead == 'd') ADVANCE(1896);
      if (lookahead == 'e') ADVANCE(1884);
      if (lookahead == 'v') ADVANCE(2028);
      END_STATE();
    case 1862:
      if (lookahead == 'a') ADVANCE(2117);
      END_STATE();
    case 1863:
      if (lookahead == 'a') ADVANCE(2009);
      if (lookahead == 'y') ADVANCE(2081);
      END_STATE();
    case 1864:
      if (lookahead == 'a') ADVANCE(2009);
      if (lookahead == 'y') ADVANCE(2085);
      END_STATE();
    case 1865:
      if (lookahead == 'a') ADVANCE(2104);
      END_STATE();
    case 1866:
      if (lookahead == 'a') ADVANCE(2104);
      if (lookahead == 'i') ADVANCE(1970);
      END_STATE();
    case 1867:
      if (lookahead == 'a') ADVANCE(2104);
      if (lookahead == 'p') ADVANCE(1873);
      END_STATE();
    case 1868:
      if (lookahead == 'a') ADVANCE(2104);
      if (lookahead == 'y') ADVANCE(2089);
      END_STATE();
    case 1869:
      if (lookahead == 'a') ADVANCE(2104);
      if (lookahead == 'y') ADVANCE(2094);
      END_STATE();
    case 1870:
      if (lookahead == 'a') ADVANCE(2030);
      END_STATE();
    case 1871:
      if (lookahead == 'a') ADVANCE(2039);
      if (lookahead == 'e') ADVANCE(1958);
      END_STATE();
    case 1872:
      if (lookahead == 'a') ADVANCE(2039);
      if (lookahead == 'i') ADVANCE(1968);
      END_STATE();
    case 1873:
      if (lookahead == 'a') ADVANCE(2109);
      END_STATE();
    case 1874:
      if (lookahead == 'a') ADVANCE(2109);
      if (lookahead == 'r') ADVANCE(2007);
      END_STATE();
    case 1875:
      if (lookahead == 'a') ADVANCE(2014);
      if (lookahead == 'd') ADVANCE(1891);
      if (lookahead == 'i') ADVANCE(1917);
      if (lookahead == 'n') ADVANCE(2095);
      if (lookahead == 'p') ADVANCE(1817);
      END_STATE();
    case 1876:
      if (lookahead == 'a') ADVANCE(2014);
      if (lookahead == 'd') ADVANCE(1891);
      if (lookahead == 'i') ADVANCE(2059);
      if (lookahead == 'n') ADVANCE(2095);
      if (lookahead == 'p') ADVANCE(1817);
      END_STATE();
    case 1877:
      if (lookahead == 'a') ADVANCE(2014);
      if (lookahead == 'd') ADVANCE(1896);
      if (lookahead == 'i') ADVANCE(1918);
      if (lookahead == 'n') ADVANCE(2095);
      if (lookahead == 'p') ADVANCE(1817);
      END_STATE();
    case 1878:
      if (lookahead == 'a') ADVANCE(2014);
      if (lookahead == 'd') ADVANCE(1896);
      if (lookahead == 'i') ADVANCE(2063);
      if (lookahead == 'n') ADVANCE(2095);
      if (lookahead == 'p') ADVANCE(1817);
      END_STATE();
    case 1879:
      if (lookahead == 'a') ADVANCE(2108);
      END_STATE();
    case 1880:
      if (lookahead == 'a') ADVANCE(1817);
      END_STATE();
    case 1881:
      if (lookahead == 'a') ADVANCE(2029);
      if (lookahead == 'y') ADVANCE(2089);
      END_STATE();
    case 1882:
      if (lookahead == 'a') ADVANCE(2141);
      END_STATE();
    case 1883:
      if (lookahead == 'a') ADVANCE(2025);
      END_STATE();
    case 1884:
      if (lookahead == 'a') ADVANCE(2110);
      END_STATE();
    case 1885:
      if (lookahead == 'a') ADVANCE(2143);
      END_STATE();
    case 1886:
      if (lookahead == 'a') ADVANCE(2145);
      END_STATE();
    case 1887:
      if (lookahead == 'a') ADVANCE(2147);
      END_STATE();
    case 1888:
      if (lookahead == 'a') ADVANCE(2148);
      END_STATE();
    case 1889:
      if (lookahead == 'a') ADVANCE(2149);
      END_STATE();
    case 1890:
      if (lookahead == 'a') ADVANCE(2150);
      END_STATE();
    case 1891:
      if (lookahead == 'a') ADVANCE(2151);
      END_STATE();
    case 1892:
      if (lookahead == 'a') ADVANCE(2152);
      END_STATE();
    case 1893:
      if (lookahead == 'a') ADVANCE(2153);
      END_STATE();
    case 1894:
      if (lookahead == 'a') ADVANCE(2154);
      END_STATE();
    case 1895:
      if (lookahead == 'a') ADVANCE(2155);
      END_STATE();
    case 1896:
      if (lookahead == 'a') ADVANCE(2156);
      END_STATE();
    case 1897:
      if (lookahead == 'a') ADVANCE(2140);
      END_STATE();
    case 1898:
      if (lookahead == 'a') ADVANCE(2031);
      END_STATE();
    case 1899:
      if (lookahead == 'a') ADVANCE(2032);
      END_STATE();
    case 1900:
      if (lookahead == 'a') ADVANCE(2033);
      END_STATE();
    case 1901:
      if (lookahead == 'a') ADVANCE(1907);
      END_STATE();
    case 1902:
      if (lookahead == 'a') ADVANCE(1908);
      END_STATE();
    case 1903:
      if (lookahead == 'b') ADVANCE(2015);
      END_STATE();
    case 1904:
      if (lookahead == 'c') ADVANCE(1396);
      END_STATE();
    case 1905:
      if (lookahead == 'c') ADVANCE(2017);
      END_STATE();
    case 1906:
      if (lookahead == 'c') ADVANCE(2019);
      END_STATE();
    case 1907:
      if (lookahead == 'c') ADVANCE(1415);
      END_STATE();
    case 1908:
      if (lookahead == 'c') ADVANCE(1431);
      END_STATE();
    case 1909:
      if (lookahead == 'd') ADVANCE(1862);
      END_STATE();
    case 1910:
      if (lookahead == 'd') ADVANCE(1862);
      if (lookahead == 'i') ADVANCE(1915);
      END_STATE();
    case 1911:
      if (lookahead == 'd') ADVANCE(2073);
      if (lookahead == 'p') ADVANCE(2035);
      END_STATE();
    case 1912:
      if (lookahead == 'd') ADVANCE(2073);
      if (lookahead == 'p') ADVANCE(2035);
      if (lookahead == 's') ADVANCE(2036);
      END_STATE();
    case 1913:
      if (lookahead == 'd') ADVANCE(1882);
      END_STATE();
    case 1914:
      if (lookahead == 'd') ADVANCE(1882);
      if (lookahead == 'i') ADVANCE(2054);
      END_STATE();
    case 1915:
      if (lookahead == 'd') ADVANCE(1856);
      if (lookahead == 'n') ADVANCE(2179);
      END_STATE();
    case 1916:
      if (lookahead == 'd') ADVANCE(1856);
      if (lookahead == 'n') ADVANCE(2182);
      END_STATE();
    case 1917:
      if (lookahead == 'd') ADVANCE(1856);
      if (lookahead == 'n') ADVANCE(2187);
      END_STATE();
    case 1918:
      if (lookahead == 'd') ADVANCE(1856);
      if (lookahead == 'n') ADVANCE(2191);
      END_STATE();
    case 1919:
      if (lookahead == 'd') ADVANCE(1886);
      END_STATE();
    case 1920:
      if (lookahead == 'd') ADVANCE(1886);
      if (lookahead == 'i') ADVANCE(2055);
      END_STATE();
    case 1921:
      if (lookahead == 'd') ADVANCE(1887);
      END_STATE();
    case 1922:
      if (lookahead == 'd') ADVANCE(1887);
      if (lookahead == 'i') ADVANCE(2056);
      END_STATE();
    case 1923:
      if (lookahead == 'd') ADVANCE(1888);
      if (lookahead == 'i') ADVANCE(1916);
      END_STATE();
    case 1924:
      if (lookahead == 'd') ADVANCE(1889);
      END_STATE();
    case 1925:
      if (lookahead == 'd') ADVANCE(1890);
      END_STATE();
    case 1926:
      if (lookahead == 'd') ADVANCE(1890);
      if (lookahead == 'i') ADVANCE(2057);
      END_STATE();
    case 1927:
      if (lookahead == 'd') ADVANCE(1892);
      END_STATE();
    case 1928:
      if (lookahead == 'd') ADVANCE(1892);
      if (lookahead == 'i') ADVANCE(2058);
      END_STATE();
    case 1929:
      if (lookahead == 'd') ADVANCE(1893);
      END_STATE();
    case 1930:
      if (lookahead == 'd') ADVANCE(1893);
      if (lookahead == 'i') ADVANCE(2060);
      END_STATE();
    case 1931:
      if (lookahead == 'd') ADVANCE(1894);
      END_STATE();
    case 1932:
      if (lookahead == 'd') ADVANCE(1894);
      if (lookahead == 'i') ADVANCE(2061);
      END_STATE();
    case 1933:
      if (lookahead == 'd') ADVANCE(1895);
      END_STATE();
    case 1934:
      if (lookahead == 'd') ADVANCE(1895);
      if (lookahead == 'i') ADVANCE(2062);
      END_STATE();
    case 1935:
      if (lookahead == 'e') ADVANCE(1819);
      if (lookahead == 'l') ADVANCE(2163);
      if (lookahead == 'o') ADVANCE(2196);
      if (lookahead == 'r') ADVANCE(1865);
      END_STATE();
    case 1936:
      if (lookahead == 'e') ADVANCE(1819);
      if (lookahead == 'l') ADVANCE(2163);
      if (lookahead == 'r') ADVANCE(1865);
      END_STATE();
    case 1937:
      if (lookahead == 'e') ADVANCE(2040);
      END_STATE();
    case 1938:
      if (lookahead == 'e') ADVANCE(2106);
      if (lookahead == 'l') ADVANCE(2174);
      if (lookahead == 'm') ADVANCE(1817);
      if (lookahead == 'r') ADVANCE(2070);
      END_STATE();
    case 1939:
      if (lookahead == 'e') ADVANCE(2106);
      if (lookahead == 'l') ADVANCE(2177);
      if (lookahead == 'm') ADVANCE(1817);
      if (lookahead == 'r') ADVANCE(2070);
      END_STATE();
    case 1940:
      if (lookahead == 'e') ADVANCE(1942);
      END_STATE();
    case 1941:
      if (lookahead == 'e') ADVANCE(2101);
      END_STATE();
    case 1942:
      if (lookahead == 'e') ADVANCE(1817);
      END_STATE();
    case 1943:
      if (lookahead == 'e') ADVANCE(1960);
      END_STATE();
    case 1944:
      if (lookahead == 'e') ADVANCE(2041);
      END_STATE();
    case 1945:
      if (lookahead == 'e') ADVANCE(2044);
      END_STATE();
    case 1946:
      if (lookahead == 'e') ADVANCE(2017);
      END_STATE();
    case 1947:
      if (lookahead == 'e') ADVANCE(2042);
      END_STATE();
    case 1948:
      if (lookahead == 'e') ADVANCE(2043);
      END_STATE();
    case 1949:
      if (lookahead == 'e') ADVANCE(2045);
      END_STATE();
    case 1950:
      if (lookahead == 'e') ADVANCE(2047);
      END_STATE();
    case 1951:
      if (lookahead == 'e') ADVANCE(2046);
      END_STATE();
    case 1952:
      if (lookahead == 'e') ADVANCE(2048);
      END_STATE();
    case 1953:
      if (lookahead == 'e') ADVANCE(2050);
      END_STATE();
    case 1954:
      if (lookahead == 'e') ADVANCE(2052);
      END_STATE();
    case 1955:
      if (lookahead == 'e') ADVANCE(2051);
      END_STATE();
    case 1956:
      if (lookahead == 'e') ADVANCE(2146);
      END_STATE();
    case 1957:
      if (lookahead == 'e') ADVANCE(2144);
      END_STATE();
    case 1958:
      if (lookahead == 'f') ADVANCE(2158);
      END_STATE();
    case 1959:
      if (lookahead == 'f') ADVANCE(2004);
      END_STATE();
    case 1960:
      if (lookahead == 'f') ADVANCE(2160);
      END_STATE();
    case 1961:
      if (lookahead == 'f') ADVANCE(1785);
      END_STATE();
    case 1962:
      if (lookahead == 'f') ADVANCE(2125);
      END_STATE();
    case 1963:
      if (lookahead == 'f') ADVANCE(1784);
      END_STATE();
    case 1964:
      if (lookahead == 'f') ADVANCE(1817);
      END_STATE();
    case 1965:
      if (lookahead == 'f') ADVANCE(1837);
      END_STATE();
    case 1966:
      if (lookahead == 'f') ADVANCE(2005);
      END_STATE();
    case 1967:
      if (lookahead == 'g') ADVANCE(2066);
      END_STATE();
    case 1968:
      if (lookahead == 'g') ADVANCE(1974);
      END_STATE();
    case 1969:
      if (lookahead == 'g') ADVANCE(1817);
      END_STATE();
    case 1970:
      if (lookahead == 'g') ADVANCE(1975);
      END_STATE();
    case 1971:
      if (lookahead == 'h') ADVANCE(1937);
      END_STATE();
    case 1972:
      if (lookahead == 'h') ADVANCE(2071);
      if (lookahead == 'q') ADVANCE(2176);
      END_STATE();
    case 1973:
      if (lookahead == 'h') ADVANCE(1781);
      END_STATE();
    case 1974:
      if (lookahead == 'h') ADVANCE(2160);
      END_STATE();
    case 1975:
      if (lookahead == 'h') ADVANCE(2168);
      END_STATE();
    case 1976:
      if (lookahead == 'h') ADVANCE(1777);
      END_STATE();
    case 1977:
      if (lookahead == 'h') ADVANCE(1778);
      END_STATE();
    case 1978:
      if (lookahead == 'h') ADVANCE(1840);
      END_STATE();
    case 1979:
      if (lookahead == 'h') ADVANCE(1804);
      END_STATE();
    case 1980:
      if (lookahead == 'h') ADVANCE(1839);
      END_STATE();
    case 1981:
      if (lookahead == 'h') ADVANCE(1812);
      END_STATE();
    case 1982:
      if (lookahead == 'h') ADVANCE(1813);
      END_STATE();
    case 1983:
      if (lookahead == 'h') ADVANCE(1817);
      END_STATE();
    case 1984:
      if (lookahead == 'h') ADVANCE(1827);
      END_STATE();
    case 1985:
      if (lookahead == 'h') ADVANCE(1829);
      END_STATE();
    case 1986:
      if (lookahead == 'h') ADVANCE(1844);
      END_STATE();
    case 1987:
      if (lookahead == 'h') ADVANCE(1836);
      END_STATE();
    case 1988:
      if (lookahead == 'h') ADVANCE(1845);
      END_STATE();
    case 1989:
      if (lookahead == 'h') ADVANCE(1944);
      END_STATE();
    case 1990:
      if (lookahead == 'h') ADVANCE(1945);
      END_STATE();
    case 1991:
      if (lookahead == 'h') ADVANCE(1947);
      END_STATE();
    case 1992:
      if (lookahead == 'h') ADVANCE(1948);
      END_STATE();
    case 1993:
      if (lookahead == 'h') ADVANCE(1949);
      END_STATE();
    case 1994:
      if (lookahead == 'h') ADVANCE(1950);
      END_STATE();
    case 1995:
      if (lookahead == 'h') ADVANCE(1951);
      END_STATE();
    case 1996:
      if (lookahead == 'h') ADVANCE(1952);
      END_STATE();
    case 1997:
      if (lookahead == 'h') ADVANCE(1953);
      END_STATE();
    case 1998:
      if (lookahead == 'h') ADVANCE(1954);
      END_STATE();
    case 1999:
      if (lookahead == 'h') ADVANCE(1955);
      END_STATE();
    case 2000:
      if (lookahead == 'i') ADVANCE(1968);
      END_STATE();
    case 2001:
      if (lookahead == 'i') ADVANCE(2111);
      END_STATE();
    case 2002:
      if (lookahead == 'i') ADVANCE(1967);
      if (lookahead == 'o') ADVANCE(2157);
      END_STATE();
    case 2003:
      if (lookahead == 'i') ADVANCE(1817);
      END_STATE();
    case 2004:
      if (lookahead == 'i') ADVANCE(2049);
      END_STATE();
    case 2005:
      if (lookahead == 'i') ADVANCE(2046);
      END_STATE();
    case 2006:
      if (lookahead == 'i') ADVANCE(2053);
      END_STATE();
    case 2007:
      if (lookahead == 'i') ADVANCE(1970);
      END_STATE();
    case 2008:
      if (lookahead == 'i') ADVANCE(2058);
      END_STATE();
    case 2009:
      if (lookahead == 'l') ADVANCE(1961);
      END_STATE();
    case 2010:
      if (lookahead == 'l') ADVANCE(1961);
      if (lookahead == 'r') ADVANCE(2111);
      END_STATE();
    case 2011:
      if (lookahead == 'l') ADVANCE(2170);
      END_STATE();
    case 2012:
      if (lookahead == 'l') ADVANCE(1783);
      END_STATE();
    case 2013:
      if (lookahead == 'l') ADVANCE(1865);
      if (lookahead == 'o') ADVANCE(2020);
      if (lookahead == 'q') ADVANCE(2169);
      if (lookahead == 'r') ADVANCE(1865);
      END_STATE();
    case 2014:
      if (lookahead == 'l') ADVANCE(1942);
      END_STATE();
    case 2015:
      if (lookahead == 'l') ADVANCE(1880);
      END_STATE();
    case 2016:
      if (lookahead == 'l') ADVANCE(1816);
      END_STATE();
    case 2017:
      if (lookahead == 'l') ADVANCE(1817);
      END_STATE();
    case 2018:
      if (lookahead == 'l') ADVANCE(1817);
      if (lookahead == 'r') ADVANCE(1817);
      END_STATE();
    case 2019:
      if (lookahead == 'l') ADVANCE(1831);
      END_STATE();
    case 2020:
      if (lookahead == 'l') ADVANCE(1826);
      END_STATE();
    case 2021:
      if (lookahead == 'l') ADVANCE(1828);
      END_STATE();
    case 2022:
      if (lookahead == 'l') ADVANCE(1838);
      END_STATE();
    case 2023:
      if (lookahead == 'l') ADVANCE(1830);
      END_STATE();
    case 2024:
      if (lookahead == 'l') ADVANCE(1843);
      END_STATE();
    case 2025:
      if (lookahead == 'l') ADVANCE(1963);
      END_STATE();
    case 2026:
      if (lookahead == 'l') ADVANCE(2173);
      END_STATE();
    case 2027:
      if (lookahead == 'l') ADVANCE(1846);
      END_STATE();
    case 2028:
      if (lookahead == 'l') ADVANCE(2167);
      END_STATE();
    case 2029:
      if (lookahead == 'l') ADVANCE(1965);
      if (lookahead == 'r') ADVANCE(2111);
      END_STATE();
    case 2030:
      if (lookahead == 'l') ADVANCE(2126);
      END_STATE();
    case 2031:
      if (lookahead == 'l') ADVANCE(2133);
      END_STATE();
    case 2032:
      if (lookahead == 'l') ADVANCE(2135);
      END_STATE();
    case 2033:
      if (lookahead == 'l') ADVANCE(2139);
      END_STATE();
    case 2034:
      if (lookahead == 'l') ADVANCE(2180);
      END_STATE();
    case 2035:
      if (lookahead == 'l') ADVANCE(2186);
      END_STATE();
    case 2036:
      if (lookahead == 'l') ADVANCE(1892);
      END_STATE();
    case 2037:
      if (lookahead == 'm') ADVANCE(1817);
      END_STATE();
    case 2038:
      if (lookahead == 'n') ADVANCE(1959);
      END_STATE();
    case 2039:
      if (lookahead == 'n') ADVANCE(1969);
      END_STATE();
    case 2040:
      if (lookahead == 'n') ADVANCE(1781);
      END_STATE();
    case 2041:
      if (lookahead == 'n') ADVANCE(1777);
      END_STATE();
    case 2042:
      if (lookahead == 'n') ADVANCE(1778);
      END_STATE();
    case 2043:
      if (lookahead == 'n') ADVANCE(1840);
      END_STATE();
    case 2044:
      if (lookahead == 'n') ADVANCE(1804);
      END_STATE();
    case 2045:
      if (lookahead == 'n') ADVANCE(1839);
      END_STATE();
    case 2046:
      if (lookahead == 'n') ADVANCE(1817);
      END_STATE();
    case 2047:
      if (lookahead == 'n') ADVANCE(1827);
      END_STATE();
    case 2048:
      if (lookahead == 'n') ADVANCE(1829);
      END_STATE();
    case 2049:
      if (lookahead == 'n') ADVANCE(1822);
      END_STATE();
    case 2050:
      if (lookahead == 'n') ADVANCE(1844);
      END_STATE();
    case 2051:
      if (lookahead == 'n') ADVANCE(1836);
      END_STATE();
    case 2052:
      if (lookahead == 'n') ADVANCE(1845);
      END_STATE();
    case 2053:
      if (lookahead == 'n') ADVANCE(2175);
      END_STATE();
    case 2054:
      if (lookahead == 'n') ADVANCE(2181);
      END_STATE();
    case 2055:
      if (lookahead == 'n') ADVANCE(2183);
      END_STATE();
    case 2056:
      if (lookahead == 'n') ADVANCE(2184);
      END_STATE();
    case 2057:
      if (lookahead == 'n') ADVANCE(2185);
      END_STATE();
    case 2058:
      if (lookahead == 'n') ADVANCE(2186);
      END_STATE();
    case 2059:
      if (lookahead == 'n') ADVANCE(2187);
      END_STATE();
    case 2060:
      if (lookahead == 'n') ADVANCE(2188);
      END_STATE();
    case 2061:
      if (lookahead == 'n') ADVANCE(2189);
      END_STATE();
    case 2062:
      if (lookahead == 'n') ADVANCE(2190);
      END_STATE();
    case 2063:
      if (lookahead == 'n') ADVANCE(2191);
      END_STATE();
    case 2064:
      if (lookahead == 'n') ADVANCE(1966);
      END_STATE();
    case 2065:
      if (lookahead == 'o') ADVANCE(2196);
      END_STATE();
    case 2066:
      if (lookahead == 'o') ADVANCE(1911);
      END_STATE();
    case 2067:
      if (lookahead == 'o') ADVANCE(2037);
      END_STATE();
    case 2068:
      if (lookahead == 'o') ADVANCE(2197);
      END_STATE();
    case 2069:
      if (lookahead == 'o') ADVANCE(2012);
      END_STATE();
    case 2070:
      if (lookahead == 'o') ADVANCE(1962);
      END_STATE();
    case 2071:
      if (lookahead == 'o') ADVANCE(2107);
      END_STATE();
    case 2072:
      if (lookahead == 'o') ADVANCE(2016);
      END_STATE();
    case 2073:
      if (lookahead == 'o') ADVANCE(2165);
      END_STATE();
    case 2074:
      if (lookahead == 'o') ADVANCE(2021);
      END_STATE();
    case 2075:
      if (lookahead == 'o') ADVANCE(2022);
      END_STATE();
    case 2076:
      if (lookahead == 'o') ADVANCE(2023);
      END_STATE();
    case 2077:
      if (lookahead == 'o') ADVANCE(2024);
      END_STATE();
    case 2078:
      if (lookahead == 'o') ADVANCE(2027);
      END_STATE();
    case 2079:
      if (lookahead == 'p') ADVANCE(1850);
      END_STATE();
    case 2080:
      if (lookahead == 'p') ADVANCE(1210);
      END_STATE();
    case 2081:
      if (lookahead == 'p') ADVANCE(1971);
      END_STATE();
    case 2082:
      if (lookahead == 'p') ADVANCE(1817);
      END_STATE();
    case 2083:
      if (lookahead == 'p') ADVANCE(1873);
      END_STATE();
    case 2084:
      if (lookahead == 'p') ADVANCE(1989);
      END_STATE();
    case 2085:
      if (lookahead == 'p') ADVANCE(1990);
      END_STATE();
    case 2086:
      if (lookahead == 'p') ADVANCE(1991);
      END_STATE();
    case 2087:
      if (lookahead == 'p') ADVANCE(1992);
      END_STATE();
    case 2088:
      if (lookahead == 'p') ADVANCE(1993);
      END_STATE();
    case 2089:
      if (lookahead == 'p') ADVANCE(1994);
      END_STATE();
    case 2090:
      if (lookahead == 'p') ADVANCE(1995);
      END_STATE();
    case 2091:
      if (lookahead == 'p') ADVANCE(1996);
      END_STATE();
    case 2092:
      if (lookahead == 'p') ADVANCE(1997);
      END_STATE();
    case 2093:
      if (lookahead == 'p') ADVANCE(1998);
      END_STATE();
    case 2094:
      if (lookahead == 'p') ADVANCE(1999);
      END_STATE();
    case 2095:
      if (lookahead == 'p') ADVANCE(2035);
      END_STATE();
    case 2096:
      if (lookahead == 'p') ADVANCE(2035);
      if (lookahead == 'q') ADVANCE(2194);
      if (lookahead == 'x') ADVANCE(1906);
      END_STATE();
    case 2097:
      if (lookahead == 'p') ADVANCE(2035);
      if (lookahead == 'q') ADVANCE(2195);
      if (lookahead == 'x') ADVANCE(1906);
      END_STATE();
    case 2098:
      if (lookahead == 'p') ADVANCE(2035);
      if (lookahead == 'u') ADVANCE(2018);
      END_STATE();
    case 2099:
      if (lookahead == 'q') ADVANCE(2171);
      END_STATE();
    case 2100:
      if (lookahead == 'q') ADVANCE(2192);
      END_STATE();
    case 2101:
      if (lookahead == 'r') ADVANCE(1855);
      END_STATE();
    case 2102:
      if (lookahead == 'r') ADVANCE(1820);
      END_STATE();
    case 2103:
      if (lookahead == 'r') ADVANCE(1857);
      END_STATE();
    case 2104:
      if (lookahead == 'r') ADVANCE(2111);
      END_STATE();
    case 2105:
      if (lookahead == 'r') ADVANCE(2003);
      END_STATE();
    case 2106:
      if (lookahead == 'r') ADVANCE(2082);
      END_STATE();
    case 2107:
      if (lookahead == 'r') ADVANCE(2161);
      END_STATE();
    case 2108:
      if (lookahead == 'r') ADVANCE(1942);
      END_STATE();
    case 2109:
      if (lookahead == 'r') ADVANCE(2112);
      END_STATE();
    case 2110:
      if (lookahead == 'r') ADVANCE(2102);
      END_STATE();
    case 2111:
      if (lookahead == 'r') ADVANCE(1817);
      END_STATE();
    case 2112:
      if (lookahead == 'r') ADVANCE(2068);
      END_STATE();
    case 2113:
      if (lookahead == 'r') ADVANCE(1964);
      END_STATE();
    case 2114:
      if (lookahead == 'r') ADVANCE(1901);
      END_STATE();
    case 2115:
      if (lookahead == 'r') ADVANCE(1902);
      END_STATE();
    case 2116:
      if (lookahead == 's') ADVANCE(2162);
      END_STATE();
    case 2117:
      if (lookahead == 's') ADVANCE(1973);
      END_STATE();
    case 2118:
      if (lookahead == 's') ADVANCE(1852);
      END_STATE();
    case 2119:
      if (lookahead == 's') ADVANCE(1825);
      END_STATE();
    case 2120:
      if (lookahead == 's') ADVANCE(1854);
      END_STATE();
    case 2121:
      if (lookahead == 's') ADVANCE(1834);
      END_STATE();
    case 2122:
      if (lookahead == 's') ADVANCE(1775);
      END_STATE();
    case 2123:
      if (lookahead == 's') ADVANCE(1781);
      END_STATE();
    case 2124:
      if (lookahead == 's') ADVANCE(2036);
      END_STATE();
    case 2125:
      if (lookahead == 's') ADVANCE(2178);
      END_STATE();
    case 2126:
      if (lookahead == 's') ADVANCE(1774);
      END_STATE();
    case 2127:
      if (lookahead == 's') ADVANCE(1777);
      END_STATE();
    case 2128:
      if (lookahead == 's') ADVANCE(1773);
      END_STATE();
    case 2129:
      if (lookahead == 's') ADVANCE(1778);
      END_STATE();
    case 2130:
      if (lookahead == 's') ADVANCE(1840);
      END_STATE();
    case 2131:
      if (lookahead == 's') ADVANCE(1839);
      END_STATE();
    case 2132:
      if (lookahead == 's') ADVANCE(1814);
      END_STATE();
    case 2133:
      if (lookahead == 's') ADVANCE(1817);
      END_STATE();
    case 2134:
      if (lookahead == 's') ADVANCE(1827);
      END_STATE();
    case 2135:
      if (lookahead == 's') ADVANCE(1841);
      END_STATE();
    case 2136:
      if (lookahead == 's') ADVANCE(1829);
      END_STATE();
    case 2137:
      if (lookahead == 's') ADVANCE(1844);
      END_STATE();
    case 2138:
      if (lookahead == 's') ADVANCE(1836);
      END_STATE();
    case 2139:
      if (lookahead == 's') ADVANCE(1842);
      END_STATE();
    case 2140:
      if (lookahead == 's') ADVANCE(2164);
      END_STATE();
    case 2141:
      if (lookahead == 's') ADVANCE(1976);
      END_STATE();
    case 2142:
      if (lookahead == 's') ADVANCE(1845);
      END_STATE();
    case 2143:
      if (lookahead == 's') ADVANCE(1979);
      END_STATE();
    case 2144:
      if (lookahead == 's') ADVANCE(2165);
      END_STATE();
    case 2145:
      if (lookahead == 's') ADVANCE(1977);
      END_STATE();
    case 2146:
      if (lookahead == 's') ADVANCE(2166);
      END_STATE();
    case 2147:
      if (lookahead == 's') ADVANCE(1978);
      END_STATE();
    case 2148:
      if (lookahead == 's') ADVANCE(1982);
      END_STATE();
    case 2149:
      if (lookahead == 's') ADVANCE(1981);
      END_STATE();
    case 2150:
      if (lookahead == 's') ADVANCE(1980);
      END_STATE();
    case 2151:
      if (lookahead == 's') ADVANCE(1984);
      END_STATE();
    case 2152:
      if (lookahead == 's') ADVANCE(1983);
      END_STATE();
    case 2153:
      if (lookahead == 's') ADVANCE(1985);
      END_STATE();
    case 2154:
      if (lookahead == 's') ADVANCE(1986);
      END_STATE();
    case 2155:
      if (lookahead == 's') ADVANCE(1988);
      END_STATE();
    case 2156:
      if (lookahead == 's') ADVANCE(1987);
      END_STATE();
    case 2157:
      if (lookahead == 't') ADVANCE(1821);
      if (lookahead == 'x') ADVANCE(2098);
      END_STATE();
    case 2158:
      if (lookahead == 't') ADVANCE(1849);
      END_STATE();
    case 2159:
      if (lookahead == 't') ADVANCE(1874);
      END_STATE();
    case 2160:
      if (lookahead == 't') ADVANCE(1848);
      END_STATE();
    case 2161:
      if (lookahead == 't') ADVANCE(1851);
      END_STATE();
    case 2162:
      if (lookahead == 't') ADVANCE(1780);
      END_STATE();
    case 2163:
      if (lookahead == 't') ADVANCE(2105);
      END_STATE();
    case 2164:
      if (lookahead == 't') ADVANCE(1803);
      END_STATE();
    case 2165:
      if (lookahead == 't') ADVANCE(1817);
      END_STATE();
    case 2166:
      if (lookahead == 't') ADVANCE(1831);
      END_STATE();
    case 2167:
      if (lookahead == 't') ADVANCE(1832);
      END_STATE();
    case 2168:
      if (lookahead == 't') ADVANCE(1873);
      END_STATE();
    case 2169:
      if (lookahead == 'u') ADVANCE(1818);
      END_STATE();
    case 2170:
      if (lookahead == 'u') ADVANCE(2122);
      END_STATE();
    case 2171:
      if (lookahead == 'u') ADVANCE(1870);
      END_STATE();
    case 2172:
      if (lookahead == 'u') ADVANCE(1956);
      END_STATE();
    case 2173:
      if (lookahead == 'u') ADVANCE(2118);
      END_STATE();
    case 2174:
      if (lookahead == 'u') ADVANCE(2119);
      END_STATE();
    case 2175:
      if (lookahead == 'u') ADVANCE(2120);
      END_STATE();
    case 2176:
      if (lookahead == 'u') ADVANCE(1879);
      END_STATE();
    case 2177:
      if (lookahead == 'u') ADVANCE(2121);
      END_STATE();
    case 2178:
      if (lookahead == 'u') ADVANCE(2113);
      END_STATE();
    case 2179:
      if (lookahead == 'u') ADVANCE(2123);
      END_STATE();
    case 2180:
      if (lookahead == 'u') ADVANCE(2128);
      END_STATE();
    case 2181:
      if (lookahead == 'u') ADVANCE(2127);
      END_STATE();
    case 2182:
      if (lookahead == 'u') ADVANCE(2132);
      END_STATE();
    case 2183:
      if (lookahead == 'u') ADVANCE(2129);
      END_STATE();
    case 2184:
      if (lookahead == 'u') ADVANCE(2130);
      END_STATE();
    case 2185:
      if (lookahead == 'u') ADVANCE(2131);
      END_STATE();
    case 2186:
      if (lookahead == 'u') ADVANCE(2133);
      END_STATE();
    case 2187:
      if (lookahead == 'u') ADVANCE(2134);
      END_STATE();
    case 2188:
      if (lookahead == 'u') ADVANCE(2136);
      END_STATE();
    case 2189:
      if (lookahead == 'u') ADVANCE(2137);
      END_STATE();
    case 2190:
      if (lookahead == 'u') ADVANCE(2142);
      END_STATE();
    case 2191:
      if (lookahead == 'u') ADVANCE(2138);
      END_STATE();
    case 2192:
      if (lookahead == 'u') ADVANCE(1898);
      END_STATE();
    case 2193:
      if (lookahead == 'u') ADVANCE(1957);
      END_STATE();
    case 2194:
      if (lookahead == 'u') ADVANCE(1899);
      END_STATE();
    case 2195:
      if (lookahead == 'u') ADVANCE(1900);
      END_STATE();
    case 2196:
      if (lookahead == 'w') ADVANCE(1897);
      END_STATE();
    case 2197:
      if (lookahead == 'w') ADVANCE(1817);
      END_STATE();
    case 2198:
      if (lookahead == 'x') ADVANCE(1905);
      END_STATE();
    case 2199:
      if (lookahead == 'y') ADVANCE(2084);
      END_STATE();
    case 2200:
      if (lookahead == 'y') ADVANCE(2086);
      END_STATE();
    case 2201:
      if (lookahead == 'y') ADVANCE(2087);
      END_STATE();
    case 2202:
      if (lookahead == 'y') ADVANCE(2088);
      END_STATE();
    case 2203:
      if (lookahead == 'y') ADVANCE(2090);
      END_STATE();
    case 2204:
      if (lookahead == 'y') ADVANCE(2091);
      END_STATE();
    case 2205:
      if (lookahead == 'y') ADVANCE(2092);
      END_STATE();
    case 2206:
      if (lookahead == 'y') ADVANCE(2093);
      END_STATE();
    case 2207:
      if (lookahead == '{') ADVANCE(2366);
      if (lookahead == '}') ADVANCE(2368);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2370);
      if (lookahead != 0) ADVANCE(2371);
      END_STATE();
    case 2208:
      if (lookahead == 0xfe0e) ADVANCE(2413);
      END_STATE();
    case 2209:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2258);
      END_STATE();
    case 2210:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1786);
      END_STATE();
    case 2211:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1817);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1817);
      END_STATE();
    case 2212:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1817);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1817);
      END_STATE();
    case 2213:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1806);
      END_STATE();
    case 2214:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1816);
      END_STATE();
    case 2215:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1817);
      END_STATE();
    case 2216:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1826);
      END_STATE();
    case 2217:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1828);
      END_STATE();
    case 2218:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1838);
      END_STATE();
    case 2219:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1830);
      END_STATE();
    case 2220:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1843);
      END_STATE();
    case 2221:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1846);
      END_STATE();
    case 2222:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2234);
      END_STATE();
    case 2223:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1795);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1796);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1797);
      END_STATE();
    case 2224:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1817);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1817);
      END_STATE();
    case 2225:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1832);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1841);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1831);
      END_STATE();
    case 2226:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1832);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1842);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1831);
      END_STATE();
    case 2227:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2214);
      END_STATE();
    case 2228:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2221);
      END_STATE();
    case 2229:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1775);
      END_STATE();
    case 2230:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1785);
      END_STATE();
    case 2231:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1787);
      END_STATE();
    case 2232:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1773);
      END_STATE();
    case 2233:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1794);
      END_STATE();
    case 2234:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1784);
      END_STATE();
    case 2235:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1817);
      END_STATE();
    case 2236:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1824);
      END_STATE();
    case 2237:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1833);
      END_STATE();
    case 2238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1788);
      END_STATE();
    case 2239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1817);
      END_STATE();
    case 2240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2229);
      END_STATE();
    case 2241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2232);
      END_STATE();
    case 2242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2235);
      END_STATE();
    case 2243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2236);
      END_STATE();
    case 2244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2237);
      END_STATE();
    case 2245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1641);
      END_STATE();
    case 2246:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1510);
      END_STATE();
    case 2247:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1252);
      END_STATE();
    case 2248:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1817);
      END_STATE();
    case 2249:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1724);
      END_STATE();
    case 2250:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1726);
      END_STATE();
    case 2251:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1730);
      END_STATE();
    case 2252:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1731);
      END_STATE();
    case 2253:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1732);
      END_STATE();
    case 2254:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1734);
      END_STATE();
    case 2255:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1736);
      END_STATE();
    case 2256:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1740);
      END_STATE();
    case 2257:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2424);
      END_STATE();
    case 2258:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2257);
      END_STATE();
    case 2259:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2423);
      END_STATE();
    case 2260:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2420);
      END_STATE();
    case 2261:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2424);
      END_STATE();
    case 2262:
      if (lookahead == '0' ||
          lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2523);
      END_STATE();
    case 2263:
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(2264);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2382);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      END_STATE();
    case 2264:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2382);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2383);
      END_STATE();
    case 2265:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2452);
      END_STATE();
    case 2266:
      if (eof) ADVANCE(2274);
      ADVANCE_MAP(
        '\n', 2280,
        '\r', 1118,
        '!', 2440,
        '$', 865,
        '&', 27,
        '(', 2363,
        ')', 2365,
        '*', 2504,
        '0', 2478,
        '1', 2454,
        ';', 2278,
        '<', 514,
        '=', 2435,
        '?', 2440,
        '@', 2416,
        'O', 2474,
        'P', 2409,
        'R', 2394,
        'T', 520,
        '[', 2289,
        'e', 2385,
        'o', 2483,
        'p', 822,
        '{', 2367,
        '}', 2369,
        0xbd, 2498,
        0x66d, 2520,
        0x204e, 2516,
        0x2217, 2508,
        0x221e, 2443,
        0x2659, 2412,
        0x265f, 821,
        0x2731, 2512,
        0x2e40, 2434,
        'Z', 861,
        'z', 861,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 1118,
        0x0b, 1118,
        '\f', 1118,
        ' ', 1118,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2386);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2437);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2395);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2267:
      if (eof) ADVANCE(2274);
      ADVANCE_MAP(
        '\n', 2283,
        '\r', 1124,
        '!', 2440,
        '$', 865,
        '&', 10,
        '(', 2363,
        '0', 867,
        ';', 2278,
        '<', 514,
        '=', 2435,
        '?', 2440,
        '@', 2416,
        'P', 2409,
        'R', 2394,
        'T', 520,
        '[', 2289,
        'e', 2385,
        'p', 822,
        '{', 2367,
        0x221e, 2443,
        0x2659, 2412,
        0x265f, 821,
        0x2e40, 2434,
        'O', 35,
        'o', 35,
        'Z', 861,
        'z', 861,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 1124,
        0x0b, 1124,
        '\f', 1124,
        ' ', 1124,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2386);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2437);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2395);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2268:
      if (eof) ADVANCE(2274);
      ADVANCE_MAP(
        '!', 2440,
        '#', 2429,
        '$', 865,
        '&', 21,
        '(', 2363,
        ')', 2365,
        '*', 2504,
        '0', 2478,
        '1', 2454,
        ';', 2278,
        '<', 514,
        '=', 2435,
        '?', 2440,
        '@', 2416,
        'O', 2474,
        'P', 2409,
        'R', 2394,
        'T', 520,
        '[', 2289,
        'e', 2385,
        'o', 2483,
        'p', 822,
        '{', 2367,
        '}', 2369,
        0xbd, 2498,
        0x66d, 2520,
        0x204e, 2516,
        0x2217, 2508,
        0x221e, 2443,
        0x2659, 2412,
        0x265f, 821,
        0x2731, 2512,
        0x2e40, 2434,
        '\n', 1140,
        '\r', 1140,
        'Z', 861,
        'z', 861,
        '+', 2428,
        0x16ed, 2428,
        0x2795, 2428,
        ':', 2400,
        'X', 2400,
        'x', 2400,
        '\t', 1113,
        0x0b, 1113,
        '\f', 1113,
        ' ', 1113,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2386);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2437);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2395);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2269:
      if (eof) ADVANCE(2274);
      ADVANCE_MAP(
        '!', 2440,
        '#', 2429,
        '$', 865,
        '&', 28,
        '(', 2363,
        ')', 2365,
        '*', 2504,
        '0', 2478,
        '1', 2454,
        ';', 2278,
        '<', 514,
        '=', 2403,
        '?', 2440,
        '@', 2416,
        'O', 2474,
        'P', 2409,
        'R', 2390,
        'T', 520,
        '[', 2289,
        'e', 2385,
        'o', 2483,
        'p', 822,
        '{', 2367,
        '}', 2369,
        0xbd, 2498,
        0x66d, 2520,
        0x204e, 2516,
        0x2217, 2508,
        0x221e, 2443,
        0x2659, 2412,
        0x265f, 821,
        0x2731, 2512,
        0x2e40, 2402,
        '\n', 1140,
        '\r', 1140,
        'Z', 861,
        'z', 861,
        '+', 2428,
        0x16ed, 2428,
        0x2795, 2428,
        ':', 2400,
        'X', 2400,
        'x', 2400,
        '\t', 1113,
        0x0b, 1113,
        '\f', 1113,
        ' ', 1113,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2386);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2418);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2391);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2270:
      if (eof) ADVANCE(2274);
      ADVANCE_MAP(
        '!', 2440,
        '#', 2429,
        '$', 865,
        '&', 29,
        '(', 2363,
        ')', 2365,
        '*', 2504,
        '0', 2478,
        '1', 2454,
        ';', 2278,
        '<', 514,
        '=', 2403,
        '?', 2440,
        '@', 2416,
        'O', 2474,
        'P', 2409,
        'R', 2390,
        'T', 520,
        '[', 2289,
        'e', 2385,
        'o', 2483,
        'p', 822,
        '{', 2367,
        '}', 2369,
        0xbd, 2498,
        0x66d, 2520,
        0x204e, 2516,
        0x2217, 2508,
        0x221e, 2443,
        0x2659, 2412,
        0x265f, 821,
        0x2731, 2512,
        0x2e40, 2402,
        '\n', 1140,
        '\r', 1140,
        'Z', 861,
        'z', 861,
        '+', 2428,
        0x16ed, 2428,
        0x2795, 2428,
        '\t', 1113,
        0x0b, 1113,
        '\f', 1113,
        ' ', 1113,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2386);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2437);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2391);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2271:
      if (eof) ADVANCE(2274);
      ADVANCE_MAP(
        '!', 2440,
        '$', 865,
        '&', 10,
        '(', 2363,
        '0', 867,
        ';', 2278,
        '<', 514,
        '=', 2435,
        '?', 2440,
        '@', 2416,
        'P', 2409,
        'R', 2394,
        'T', 520,
        '[', 2289,
        'e', 2385,
        'p', 822,
        '{', 2367,
        0x221e, 2443,
        0x2659, 2412,
        0x265f, 821,
        0x2e40, 2434,
        '\n', 1138,
        '\r', 1138,
        'O', 35,
        'o', 35,
        'Z', 861,
        'z', 861,
        '+', 36,
        0x16ed, 36,
        0x2795, 36,
        '\t', 873,
        0x0b, 873,
        '\f', 873,
        ' ', 873,
        '/', 37,
        0x2044, 37,
        0x2215, 37,
        0x27cb, 37,
        0x29f8, 37,
      );
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2386);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2437);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2395);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2272:
      if (eof) ADVANCE(2274);
      ADVANCE_MAP(
        '!', 2451,
        '#', 2427,
        '$', 2265,
        '&', 1168,
        '(', 2362,
        ')', 2364,
        '0', 1187,
        ';', 2277,
        '<', 1847,
        '=', 2446,
        '?', 2451,
        '@', 2415,
        'P', 2410,
        'R', 2397,
        'T', 1853,
        '[', 2288,
        'e', 2387,
        'p', 2209,
        '{', 2366,
        0xbd, 2497,
        0x221e, 2444,
        0x2659, 2411,
        0x265f, 2208,
        0x2e40, 2445,
        'O', 1188,
        'o', 1188,
        'Z', 2261,
        'z', 2261,
        '+', 2431,
        0x16ed, 2431,
        0x2795, 2431,
        ':', 2399,
        'X', 2399,
        'x', 2399,
        '/', 1193,
        0x2044, 1193,
        0x2215, 1193,
        0x27cb, 1193,
        0x29f8, 1193,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1148);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2447);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'Q') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2393);
      if (set_contains(sym_annotation_character_set_6, 53, lookahead)) ADVANCE(2432);
      END_STATE();
    case 2273:
      if (eof) ADVANCE(2274);
      ADVANCE_MAP(
        '"', 2293,
        '%', 2279,
        '&', 1156,
        '(', 2362,
        ')', 2364,
        '*', 2503,
        '-', 2457,
        '/', 2486,
        '0', 2480,
        '1', 2453,
        '2', 2496,
        ';', 2277,
        '@', 2415,
        'O', 2476,
        'P', 2408,
        '[', 2288,
        ']', 2291,
        'o', 2485,
        '{', 2366,
        '}', 2368,
        0xbd, 2499,
        0x2ba, 2313,
        0x2dd, 2311,
        0x2ee, 2317,
        0x2f6, 2315,
        0x5f2, 2319,
        0x5f4, 2309,
        0x66d, 2519,
        0x2010, 2461,
        0x2011, 2463,
        0x2012, 2465,
        0x2013, 2467,
        0x2014, 2469,
        0x201c, 2297,
        0x201d, 2299,
        0x201f, 2301,
        0x2033, 2303,
        0x2036, 2305,
        0x2044, 2490,
        0x204e, 2515,
        0x2212, 2459,
        0x2215, 2488,
        0x2217, 2507,
        0x2659, 2411,
        0x265f, 2208,
        0x2731, 2511,
        0x2796, 2471,
        0x27cb, 2492,
        0x29f8, 2494,
        0x3003, 2307,
        0xff02, 2295,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2273);
      if (('a' <= lookahead && lookahead <= 'h')) ADVANCE(2384);
      if (lookahead == 'B' ||
          lookahead == 'K' ||
          ('N' <= lookahead && lookahead <= 'R') ||
          (0x2654 <= lookahead && lookahead <= 0x265e)) ADVANCE(2393);
      END_STATE();
    case 2274:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2275:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(2275);
      if (lookahead == '\r') ADVANCE(1116);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1114);
      END_STATE();
    case 2276:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead == '\n') ADVANCE(2276);
      if (lookahead == '\r') ADVANCE(1119);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1122);
      END_STATE();
    case 2277:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 2278:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2279:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 2280:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2280);
      if (lookahead == '\r') ADVANCE(1118);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1118);
      END_STATE();
    case 2281:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2276);
      if (lookahead == '\r') ADVANCE(1119);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1122);
      END_STATE();
    case 2282:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2282);
      if (lookahead == '\r') ADVANCE(1120);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1120);
      END_STATE();
    case 2283:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2283);
      if (lookahead == '\r') ADVANCE(1124);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1124);
      END_STATE();
    case 2284:
      ACCEPT_TOKEN(aux_sym_rest_of_line_comment_token1);
      if (lookahead == '\n') ADVANCE(2284);
      if (lookahead == '\r') ADVANCE(1125);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1125);
      END_STATE();
    case 2285:
      ACCEPT_TOKEN(sym_rest_of_line_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2285);
      END_STATE();
    case 2286:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      END_STATE();
    case 2287:
      ACCEPT_TOKEN(sym_old_style_twic_section_comment);
      if (lookahead == '-') ADVANCE(1208);
      END_STATE();
    case 2288:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 2289:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2290:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(2323);
      END_STATE();
    case 2291:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 2292:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2293:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 2294:
      ACCEPT_TOKEN(aux_sym_double_quote_token1);
      END_STATE();
    case 2295:
      ACCEPT_TOKEN(anon_sym_uff02);
      END_STATE();
    case 2296:
      ACCEPT_TOKEN(aux_sym_double_quote_token2);
      END_STATE();
    case 2297:
      ACCEPT_TOKEN(anon_sym_u201c);
      END_STATE();
    case 2298:
      ACCEPT_TOKEN(aux_sym_double_quote_token3);
      END_STATE();
    case 2299:
      ACCEPT_TOKEN(anon_sym_u201d);
      END_STATE();
    case 2300:
      ACCEPT_TOKEN(aux_sym_double_quote_token4);
      END_STATE();
    case 2301:
      ACCEPT_TOKEN(anon_sym_u201f);
      END_STATE();
    case 2302:
      ACCEPT_TOKEN(aux_sym_double_quote_token5);
      END_STATE();
    case 2303:
      ACCEPT_TOKEN(anon_sym_u2033);
      END_STATE();
    case 2304:
      ACCEPT_TOKEN(aux_sym_double_quote_token6);
      END_STATE();
    case 2305:
      ACCEPT_TOKEN(anon_sym_u2036);
      END_STATE();
    case 2306:
      ACCEPT_TOKEN(aux_sym_double_quote_token7);
      END_STATE();
    case 2307:
      ACCEPT_TOKEN(anon_sym_u3003);
      END_STATE();
    case 2308:
      ACCEPT_TOKEN(aux_sym_double_quote_token8);
      END_STATE();
    case 2309:
      ACCEPT_TOKEN(anon_sym_u05f4);
      END_STATE();
    case 2310:
      ACCEPT_TOKEN(aux_sym_double_quote_token9);
      END_STATE();
    case 2311:
      ACCEPT_TOKEN(anon_sym_u02dd);
      END_STATE();
    case 2312:
      ACCEPT_TOKEN(aux_sym_double_quote_token10);
      END_STATE();
    case 2313:
      ACCEPT_TOKEN(anon_sym_u02ba);
      END_STATE();
    case 2314:
      ACCEPT_TOKEN(aux_sym_double_quote_token11);
      END_STATE();
    case 2315:
      ACCEPT_TOKEN(anon_sym_u02f6);
      END_STATE();
    case 2316:
      ACCEPT_TOKEN(aux_sym_double_quote_token12);
      END_STATE();
    case 2317:
      ACCEPT_TOKEN(anon_sym_u02ee);
      END_STATE();
    case 2318:
      ACCEPT_TOKEN(aux_sym_double_quote_token13);
      END_STATE();
    case 2319:
      ACCEPT_TOKEN(anon_sym_u05f2);
      END_STATE();
    case 2320:
      ACCEPT_TOKEN(aux_sym_double_quote_token14);
      END_STATE();
    case 2321:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead == '[') ADVANCE(2290);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2321);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(2323);
      END_STATE();
    case 2322:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2322);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(2323);
      END_STATE();
    case 2323:
      ACCEPT_TOKEN(sym_tagpair_key);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(2323);
      END_STATE();
    case 2324:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '#') ADVANCE(2333);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2325:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '&') ADVANCE(2324);
      if (lookahead == ']') ADVANCE(2292);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(2325);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2326:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '&') ADVANCE(2324);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(2326);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2327:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2354);
      if (lookahead == '1') ADVANCE(2354);
      if (lookahead == '3') ADVANCE(2354);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2328:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2354);
      if (lookahead == '8') ADVANCE(2354);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2329:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2346);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2330:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      ADVANCE_MAP(
        '0', 2335,
        '2', 2354,
        'B', 2355,
        'b', 2355,
        'D', 2357,
        'd', 2357,
        'E', 2358,
        'e', 2358,
        'F', 2350,
        'f', 2350,
      );
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2331:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2329);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2332:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '0') ADVANCE(2337);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2333:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '1') ADVANCE(2342);
      if (lookahead == '3') ADVANCE(2348);
      if (lookahead == '6') ADVANCE(2349);
      if (lookahead == '7') ADVANCE(2347);
      if (lookahead == '8') ADVANCE(2338);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(2339);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2334:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '1') ADVANCE(2354);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2335:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '1') ADVANCE(2356);
      if (lookahead == '3') ADVANCE(2345);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2336:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2354);
      if (lookahead == '4') ADVANCE(2354);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2337:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2354);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2338:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2341);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2339:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2330);
      if (lookahead == '3') ADVANCE(2331);
      if (lookahead == '5') ADVANCE(2359);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2360);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2340:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2353);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2341:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2327);
      if (lookahead == '4') ADVANCE(2345);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2342:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2340);
      if (lookahead == '5') ADVANCE(2344);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2343:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2352);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2344:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '2') ADVANCE(2336);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2345:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '3') ADVANCE(2354);
      if (lookahead == '6') ADVANCE(2354);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2346:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '3') ADVANCE(2354);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2347:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '3') ADVANCE(2346);
      if (lookahead == '5') ADVANCE(2328);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2348:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '4') ADVANCE(2354);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2349:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '5') ADVANCE(2343);
      if (lookahead == '9') ADVANCE(2351);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2350:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '6') ADVANCE(2354);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2351:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '8') ADVANCE(2354);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2352:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '8') ADVANCE(2337);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2353:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == '9') ADVANCE(2334);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2354:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == ';') ADVANCE(2361);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2355:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2354);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2356:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2354);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2354);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2354);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2357:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2354);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2358:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2354);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2359:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2336);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2360:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2332);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2361:
      ACCEPT_TOKEN(aux_sym_tagpair_value_contents_token1);
      if ((!eof && set_contains(aux_sym_tagpair_value_contents_token1_character_set_1, 16, lookahead))) ADVANCE(2361);
      END_STATE();
    case 2362:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      END_STATE();
    case 2363:
      ACCEPT_TOKEN(sym_variation_delimiter_open);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2364:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 2365:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2366:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 2367:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2368:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 2369:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2370:
      ACCEPT_TOKEN(aux_sym_inline_comment_text_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2370);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(2371);
      END_STATE();
    case 2371:
      ACCEPT_TOKEN(aux_sym_inline_comment_text_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(2371);
      END_STATE();
    case 2372:
      ACCEPT_TOKEN(sym_move_number);
      ADVANCE_MAP(
        '\n', 2380,
        '\r', 2375,
        '&', 25,
        '\t', 2374,
        0x0b, 2374,
        '\f', 2374,
        ' ', 2374,
        '/', 5,
        0x2044, 5,
        0x2215, 5,
        0x27cb, 5,
        0x29f8, 5,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(4);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2376);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2373:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2380);
      if (lookahead == '\r') ADVANCE(2375);
      if (lookahead == '&') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2374);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(6);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2376);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2374:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2380);
      if (lookahead == '\r') ADVANCE(2375);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2374);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2376);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2375:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2380);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2382);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2383);
      END_STATE();
    case 2376:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2381);
      if (lookahead == '\r') ADVANCE(2377);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2376);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2377:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '\n') ADVANCE(2381);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2383);
      END_STATE();
    case 2378:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '&') ADVANCE(1171);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2382);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1132);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2383);
      END_STATE();
    case 2379:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '&') ADVANCE(1177);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2382);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(1127);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2383);
      END_STATE();
    case 2380:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '-') ADVANCE(1208);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2382);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2383);
      END_STATE();
    case 2381:
      ACCEPT_TOKEN(sym_move_number);
      if (lookahead == '-') ADVANCE(1208);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2383);
      END_STATE();
    case 2382:
      ACCEPT_TOKEN(sym_move_number);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2382);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2383);
      END_STATE();
    case 2383:
      ACCEPT_TOKEN(sym_move_number);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2383);
      END_STATE();
    case 2384:
      ACCEPT_TOKEN(sym__san_file);
      END_STATE();
    case 2385:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(711);
      if (lookahead == 'p') ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2386:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2387:
      ACCEPT_TOKEN(sym__san_file);
      if (lookahead == '.') ADVANCE(2080);
      if (lookahead == 'p') ADVANCE(2432);
      END_STATE();
    case 2388:
      ACCEPT_TOKEN(sym__san_rank);
      END_STATE();
    case 2389:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      END_STATE();
    case 2390:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2391:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2392:
      ACCEPT_TOKEN(sym__san_promotable_piece);
      if (lookahead == 'R') ADVANCE(2432);
      END_STATE();
    case 2393:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      END_STATE();
    case 2394:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'R') ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2395:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2396:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == '\n') ADVANCE(2450);
      if (lookahead == '\r') ADVANCE(2433);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2397:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (lookahead == 'R') ADVANCE(2432);
      END_STATE();
    case 2398:
      ACCEPT_TOKEN(sym__san_major_or_minor_piece);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2432);
      END_STATE();
    case 2399:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      END_STATE();
    case 2400:
      ACCEPT_TOKEN(sym__san_capture_symbol);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2401:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      END_STATE();
    case 2402:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '&', 12,
        '+', 2442,
        0x16ed, 2442,
        0x2795, 2442,
        '/', 38,
        0x2044, 38,
        0x2215, 38,
        0x27cb, 38,
        0x29f8, 38,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2403:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '&', 12,
        '+', 2442,
        '=', 2442,
        0x16ed, 2442,
        0x2795, 2442,
        '/', 38,
        0x2044, 38,
        0x2215, 38,
        0x27cb, 38,
        0x29f8, 38,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2404:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '&', 19,
        '+', 2442,
        0x16ed, 2442,
        0x2795, 2442,
        '/', 38,
        0x2044, 38,
        0x2215, 38,
        0x27cb, 38,
        0x29f8, 38,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2405:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      ADVANCE_MAP(
        '&', 1160,
        '+', 2432,
        0x16ed, 2432,
        0x2795, 2432,
        '/', 1197,
        0x2044, 1197,
        0x2215, 1197,
        0x27cb, 1197,
        0x29f8, 1197,
      );
      END_STATE();
    case 2406:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      ADVANCE_MAP(
        '&', 1160,
        '+', 2432,
        '=', 2432,
        0x16ed, 2432,
        0x2795, 2432,
        '/', 1197,
        0x2044, 1197,
        0x2215, 1197,
        0x27cb, 1197,
        0x29f8, 1197,
      );
      END_STATE();
    case 2407:
      ACCEPT_TOKEN(sym__san_promotion_symbol);
      ADVANCE_MAP(
        '&', 1165,
        '+', 2432,
        0x16ed, 2432,
        0x2795, 2432,
        '/', 1197,
        0x2044, 1197,
        0x2215, 1197,
        0x27cb, 1197,
        0x29f8, 1197,
      );
      END_STATE();
    case 2408:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 2409:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(860);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2410:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2258);
      END_STATE();
    case 2411:
      ACCEPT_TOKEN(anon_sym_u2659);
      END_STATE();
    case 2412:
      ACCEPT_TOKEN(anon_sym_u2659);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2413:
      ACCEPT_TOKEN(anon_sym_u265fufe0e);
      END_STATE();
    case 2414:
      ACCEPT_TOKEN(anon_sym_u265fufe0e);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2415:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 2416:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2417:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      END_STATE();
    case 2418:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '&', 23,
        '+', 2442,
        0x16ed, 2442,
        0x2795, 2442,
        '/', 39,
        0x2044, 39,
        0x2215, 39,
        0x27cb, 39,
        0x29f8, 39,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2426);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2419:
      ACCEPT_TOKEN(aux_sym__lan_move_by_coordinates_token1);
      ADVANCE_MAP(
        '&', 1169,
        '+', 2432,
        0x16ed, 2432,
        0x2795, 2432,
        '/', 1201,
        0x2044, 1201,
        0x2215, 1201,
        0x27cb, 1201,
        0x29f8, 1201,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2424);
      END_STATE();
    case 2420:
      ACCEPT_TOKEN(sym__san_move_castle);
      END_STATE();
    case 2421:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(30);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(863);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2422:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2423:
      ACCEPT_TOKEN(sym__san_move_castle);
      if (lookahead == '&') ADVANCE(1183);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2260);
      END_STATE();
    case 2424:
      ACCEPT_TOKEN(sym__san_null_move);
      END_STATE();
    case 2425:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2426:
      ACCEPT_TOKEN(sym__san_null_move);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2427:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      END_STATE();
    case 2428:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '&', 24,
        '+', 2429,
        0x16ed, 2429,
        0x2795, 2429,
        '/', 42,
        0x2044, 42,
        0x2215, 42,
        0x27cb, 42,
        0x29f8, 42,
      );
      if (lookahead == '-' ||
          lookahead == '=' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796 ||
          lookahead == 0x2e40) ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2429:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2430:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      if (lookahead == '&') ADVANCE(1155);
      if (lookahead == '+' ||
          lookahead == 0x16ed ||
          lookahead == 0x2795) ADVANCE(2427);
      END_STATE();
    case 2431:
      ACCEPT_TOKEN(sym_check_or_mate_condition);
      ADVANCE_MAP(
        '&', 1170,
        '+', 2427,
        0x16ed, 2427,
        0x2795, 2427,
        '/', 1204,
        0x2044, 1204,
        0x2215, 1204,
        0x27cb, 1204,
        0x29f8, 1204,
      );
      if (lookahead == '-' ||
          lookahead == '=' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796 ||
          lookahead == 0x2e40) ADVANCE(2432);
      END_STATE();
    case 2432:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 2433:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1209);
      END_STATE();
    case 2434:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '&', 12,
        '+', 2442,
        0x16ed, 2442,
        0x2795, 2442,
        '/', 38,
        0x2044, 38,
        0x2215, 38,
        0x27cb, 38,
        0x29f8, 38,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2435:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '&', 12,
        '+', 2442,
        '=', 2442,
        0x16ed, 2442,
        0x2795, 2442,
        '/', 38,
        0x2044, 38,
        0x2215, 38,
        0x27cb, 38,
        0x29f8, 38,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2436:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '&', 23,
        '-', 2425,
        '+', 2442,
        0x16ed, 2442,
        0x2795, 2442,
        '/', 39,
        0x2044, 39,
        0x2215, 39,
        0x27cb, 39,
        0x29f8, 39,
      );
      if ((0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2426);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2437:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '&', 23,
        '+', 2442,
        0x16ed, 2442,
        0x2795, 2442,
        '/', 39,
        0x2044, 39,
        0x2215, 39,
        0x27cb, 39,
        0x29f8, 39,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2426);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2438:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(17);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2439:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1209,
        '\r', 1,
        '&', 19,
        '+', 2442,
        0x16ed, 2442,
        0x2795, 2442,
        '/', 38,
        0x2044, 38,
        0x2215, 38,
        0x27cb, 38,
        0x29f8, 38,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2440:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(2442);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2441:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2441);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2442:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2443:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '\n', 1190,
        '\r', 871,
        '&', 22,
        '\t', 870,
        0x0b, 870,
        '\f', 870,
        ' ', 870,
        '/', 874,
        0x2044, 874,
        0x2215, 874,
        0x27cb, 874,
        0x29f8, 874,
      );
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2444:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(1167);
      if (lookahead == '/' ||
          lookahead == 0x2044 ||
          lookahead == 0x2215 ||
          lookahead == 0x27cb ||
          lookahead == 0x29f8) ADVANCE(1194);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1191);
      END_STATE();
    case 2445:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '&', 1160,
        '+', 2432,
        0x16ed, 2432,
        0x2795, 2432,
        '/', 1197,
        0x2044, 1197,
        0x2215, 1197,
        0x27cb, 1197,
        0x29f8, 1197,
      );
      END_STATE();
    case 2446:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '&', 1160,
        '+', 2432,
        '=', 2432,
        0x16ed, 2432,
        0x2795, 2432,
        '/', 1197,
        0x2044, 1197,
        0x2215, 1197,
        0x27cb, 1197,
        0x29f8, 1197,
      );
      END_STATE();
    case 2447:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '&', 1169,
        '+', 2432,
        0x16ed, 2432,
        0x2795, 2432,
        '/', 1201,
        0x2044, 1201,
        0x2215, 1201,
        0x27cb, 1201,
        0x29f8, 1201,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2424);
      END_STATE();
    case 2448:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '&') ADVANCE(1163);
      END_STATE();
    case 2449:
      ACCEPT_TOKEN(sym_annotation);
      ADVANCE_MAP(
        '&', 1165,
        '+', 2432,
        0x16ed, 2432,
        0x2795, 2432,
        '/', 1197,
        0x2044, 1197,
        0x2215, 1197,
        0x27cb, 1197,
        0x29f8, 1197,
      );
      END_STATE();
    case 2450:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '-') ADVANCE(1208);
      END_STATE();
    case 2451:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(2432);
      END_STATE();
    case 2452:
      ACCEPT_TOKEN(sym_annotation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2452);
      END_STATE();
    case 2453:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 2454:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '\n') ADVANCE(2380);
      if (lookahead == '\r') ADVANCE(2375);
      if (lookahead == ' ') ADVANCE(2372);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(2374);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(869);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2455:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == ' ') ADVANCE(2378);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(2264);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2382);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      END_STATE();
    case 2456:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == ' ') ADVANCE(1196);
      END_STATE();
    case 2457:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 2458:
      ACCEPT_TOKEN(aux_sym_result_code_token1);
      END_STATE();
    case 2459:
      ACCEPT_TOKEN(anon_sym_u2212);
      END_STATE();
    case 2460:
      ACCEPT_TOKEN(aux_sym_result_code_token2);
      END_STATE();
    case 2461:
      ACCEPT_TOKEN(anon_sym_u2010);
      END_STATE();
    case 2462:
      ACCEPT_TOKEN(aux_sym_result_code_token3);
      END_STATE();
    case 2463:
      ACCEPT_TOKEN(anon_sym_u2011);
      END_STATE();
    case 2464:
      ACCEPT_TOKEN(aux_sym_result_code_token4);
      END_STATE();
    case 2465:
      ACCEPT_TOKEN(anon_sym_u2012);
      END_STATE();
    case 2466:
      ACCEPT_TOKEN(aux_sym_result_code_token5);
      END_STATE();
    case 2467:
      ACCEPT_TOKEN(anon_sym_u2013);
      END_STATE();
    case 2468:
      ACCEPT_TOKEN(aux_sym_result_code_token6);
      END_STATE();
    case 2469:
      ACCEPT_TOKEN(anon_sym_u2014);
      END_STATE();
    case 2470:
      ACCEPT_TOKEN(aux_sym_result_code_token7);
      END_STATE();
    case 2471:
      ACCEPT_TOKEN(anon_sym_u2796);
      END_STATE();
    case 2472:
      ACCEPT_TOKEN(aux_sym_result_code_token8);
      END_STATE();
    case 2473:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 2474:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(862);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2475:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == ' ') ADVANCE(1200);
      END_STATE();
    case 2476:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == ' ') ADVANCE(1200);
      if (lookahead == '&') ADVANCE(1154);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2259);
      END_STATE();
    case 2477:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 2478:
      ACCEPT_TOKEN(anon_sym_0);
      ADVANCE_MAP(
        '\n', 2380,
        '\r', 2375,
        ' ', 2373,
        '&', 11,
        '\t', 2374,
        0x0b, 2374,
        '\f', 2374,
        'A', 869,
        'B', 869,
        'a', 869,
        'b', 869,
      );
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(862);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2479:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == ' ') ADVANCE(1200);
      END_STATE();
    case 2480:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == ' ') ADVANCE(1200);
      if (lookahead == '&') ADVANCE(1154);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2259);
      END_STATE();
    case 2481:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == ' ') ADVANCE(2379);
      if (lookahead == '&') ADVANCE(1154);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(2264);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2382);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2259);
      if (set_contains(sym_move_number_character_set_2, 11, lookahead)) ADVANCE(2383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2263);
      END_STATE();
    case 2482:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 2483:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(862);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2484:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == ' ') ADVANCE(1200);
      END_STATE();
    case 2485:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == ' ') ADVANCE(1200);
      if (lookahead == '&') ADVANCE(1154);
      if (lookahead == '-' ||
          (0x2010 <= lookahead && lookahead <= 0x2014) ||
          lookahead == 0x2212 ||
          lookahead == 0x2796) ADVANCE(2259);
      END_STATE();
    case 2486:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 2487:
      ACCEPT_TOKEN(aux_sym_result_code_token9);
      END_STATE();
    case 2488:
      ACCEPT_TOKEN(anon_sym_u2215);
      END_STATE();
    case 2489:
      ACCEPT_TOKEN(aux_sym_result_code_token10);
      END_STATE();
    case 2490:
      ACCEPT_TOKEN(anon_sym_u2044);
      END_STATE();
    case 2491:
      ACCEPT_TOKEN(aux_sym_result_code_token11);
      END_STATE();
    case 2492:
      ACCEPT_TOKEN(anon_sym_u27cb);
      END_STATE();
    case 2493:
      ACCEPT_TOKEN(aux_sym_result_code_token12);
      END_STATE();
    case 2494:
      ACCEPT_TOKEN(anon_sym_u29f8);
      END_STATE();
    case 2495:
      ACCEPT_TOKEN(aux_sym_result_code_token13);
      END_STATE();
    case 2496:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 2497:
      ACCEPT_TOKEN(anon_sym_u00bd);
      END_STATE();
    case 2498:
      ACCEPT_TOKEN(anon_sym_u00bd);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2499:
      ACCEPT_TOKEN(anon_sym_u00bd);
      if (lookahead == ' ') ADVANCE(1203);
      END_STATE();
    case 2500:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      END_STATE();
    case 2501:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2502:
      ACCEPT_TOKEN(aux_sym_result_code_token14);
      if (lookahead == ' ') ADVANCE(1203);
      END_STATE();
    case 2503:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 2504:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2505:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      END_STATE();
    case 2506:
      ACCEPT_TOKEN(aux_sym_result_code_token15);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2507:
      ACCEPT_TOKEN(anon_sym_u2217);
      END_STATE();
    case 2508:
      ACCEPT_TOKEN(anon_sym_u2217);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2509:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      END_STATE();
    case 2510:
      ACCEPT_TOKEN(aux_sym_result_code_token16);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2511:
      ACCEPT_TOKEN(anon_sym_u2731);
      END_STATE();
    case 2512:
      ACCEPT_TOKEN(anon_sym_u2731);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2513:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      END_STATE();
    case 2514:
      ACCEPT_TOKEN(aux_sym_result_code_token17);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2515:
      ACCEPT_TOKEN(anon_sym_u204e);
      END_STATE();
    case 2516:
      ACCEPT_TOKEN(anon_sym_u204e);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2517:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      END_STATE();
    case 2518:
      ACCEPT_TOKEN(aux_sym_result_code_token18);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2519:
      ACCEPT_TOKEN(anon_sym_u066d);
      END_STATE();
    case 2520:
      ACCEPT_TOKEN(anon_sym_u066d);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2521:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      END_STATE();
    case 2522:
      ACCEPT_TOKEN(aux_sym_result_code_token19);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2523:
      ACCEPT_TOKEN(aux_sym_result_code_token20);
      END_STATE();
    case 2524:
      ACCEPT_TOKEN(aux_sym_result_code_token20);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2525:
      ACCEPT_TOKEN(aux_sym_result_code_token21);
      END_STATE();
    case 2526:
      ACCEPT_TOKEN(aux_sym_result_code_token21);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2527:
      ACCEPT_TOKEN(aux_sym_result_code_token22);
      END_STATE();
    case 2528:
      ACCEPT_TOKEN(aux_sym_result_code_token22);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    case 2529:
      ACCEPT_TOKEN(aux_sym_result_code_token23);
      END_STATE();
    case 2530:
      ACCEPT_TOKEN(aux_sym_result_code_token23);
      if (lookahead == '\n') ADVANCE(1209);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(866);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 2271, .external_lex_state = 1},
  [2] = {.lex_state = 2268, .external_lex_state = 1},
  [3] = {.lex_state = 2268, .external_lex_state = 1},
  [4] = {.lex_state = 1115, .external_lex_state = 1},
  [5] = {.lex_state = 1143, .external_lex_state = 1},
  [6] = {.lex_state = 1143, .external_lex_state = 1},
  [7] = {.lex_state = 1143, .external_lex_state = 1},
  [8] = {.lex_state = 2269, .external_lex_state = 1},
  [9] = {.lex_state = 1115, .external_lex_state = 1},
  [10] = {.lex_state = 1115, .external_lex_state = 1},
  [11] = {.lex_state = 1115, .external_lex_state = 1},
  [12] = {.lex_state = 2269, .external_lex_state = 1},
  [13] = {.lex_state = 2270, .external_lex_state = 1},
  [14] = {.lex_state = 2270, .external_lex_state = 1},
  [15] = {.lex_state = 2270, .external_lex_state = 1},
  [16] = {.lex_state = 2270, .external_lex_state = 1},
  [17] = {.lex_state = 1144, .external_lex_state = 1},
  [18] = {.lex_state = 2268, .external_lex_state = 1},
  [19] = {.lex_state = 2268, .external_lex_state = 1},
  [20] = {.lex_state = 2271, .external_lex_state = 1},
  [21] = {.lex_state = 2271, .external_lex_state = 1},
  [22] = {.lex_state = 2268, .external_lex_state = 1},
  [23] = {.lex_state = 1144, .external_lex_state = 1},
  [24] = {.lex_state = 2268, .external_lex_state = 1},
  [25] = {.lex_state = 1145, .external_lex_state = 1},
  [26] = {.lex_state = 1145, .external_lex_state = 1},
  [27] = {.lex_state = 2268, .external_lex_state = 1},
  [28] = {.lex_state = 2268, .external_lex_state = 1},
  [29] = {.lex_state = 1145, .external_lex_state = 1},
  [30] = {.lex_state = 2268, .external_lex_state = 1},
  [31] = {.lex_state = 2266, .external_lex_state = 1},
  [32] = {.lex_state = 2268, .external_lex_state = 1},
  [33] = {.lex_state = 2268, .external_lex_state = 1},
  [34] = {.lex_state = 2268, .external_lex_state = 1},
  [35] = {.lex_state = 2268, .external_lex_state = 1},
  [36] = {.lex_state = 2268, .external_lex_state = 1},
  [37] = {.lex_state = 2268, .external_lex_state = 1},
  [38] = {.lex_state = 2268, .external_lex_state = 1},
  [39] = {.lex_state = 2268, .external_lex_state = 1},
  [40] = {.lex_state = 2268, .external_lex_state = 1},
  [41] = {.lex_state = 2268, .external_lex_state = 1},
  [42] = {.lex_state = 2268, .external_lex_state = 1},
  [43] = {.lex_state = 2268, .external_lex_state = 1},
  [44] = {.lex_state = 2268, .external_lex_state = 1},
  [45] = {.lex_state = 2268, .external_lex_state = 1},
  [46] = {.lex_state = 1145, .external_lex_state = 1},
  [47] = {.lex_state = 2268, .external_lex_state = 1},
  [48] = {.lex_state = 2268, .external_lex_state = 1},
  [49] = {.lex_state = 2268, .external_lex_state = 1},
  [50] = {.lex_state = 2268, .external_lex_state = 1},
  [51] = {.lex_state = 2268, .external_lex_state = 1},
  [52] = {.lex_state = 2266, .external_lex_state = 1},
  [53] = {.lex_state = 2268, .external_lex_state = 1},
  [54] = {.lex_state = 2268, .external_lex_state = 1},
  [55] = {.lex_state = 2268, .external_lex_state = 1},
  [56] = {.lex_state = 1143, .external_lex_state = 1},
  [57] = {.lex_state = 2268, .external_lex_state = 1},
  [58] = {.lex_state = 2268, .external_lex_state = 1},
  [59] = {.lex_state = 2268, .external_lex_state = 1},
  [60] = {.lex_state = 2268, .external_lex_state = 1},
  [61] = {.lex_state = 2268, .external_lex_state = 1},
  [62] = {.lex_state = 2268, .external_lex_state = 1},
  [63] = {.lex_state = 2268, .external_lex_state = 1},
  [64] = {.lex_state = 1115, .external_lex_state = 1},
  [65] = {.lex_state = 2272, .external_lex_state = 1},
  [66] = {.lex_state = 2268, .external_lex_state = 1},
  [67] = {.lex_state = 1115, .external_lex_state = 1},
  [68] = {.lex_state = 2268, .external_lex_state = 1},
  [69] = {.lex_state = 2272, .external_lex_state = 1},
  [70] = {.lex_state = 2268, .external_lex_state = 1},
  [71] = {.lex_state = 1143, .external_lex_state = 1},
  [72] = {.lex_state = 1143, .external_lex_state = 1},
  [73] = {.lex_state = 1143, .external_lex_state = 1},
  [74] = {.lex_state = 1143, .external_lex_state = 1},
  [75] = {.lex_state = 2272, .external_lex_state = 1},
  [76] = {.lex_state = 1143, .external_lex_state = 1},
  [77] = {.lex_state = 1143, .external_lex_state = 1},
  [78] = {.lex_state = 1143, .external_lex_state = 1},
  [79] = {.lex_state = 1121, .external_lex_state = 1},
  [80] = {.lex_state = 1143, .external_lex_state = 1},
  [81] = {.lex_state = 1143, .external_lex_state = 1},
  [82] = {.lex_state = 1123, .external_lex_state = 1},
  [83] = {.lex_state = 1143, .external_lex_state = 1},
  [84] = {.lex_state = 1143, .external_lex_state = 1},
  [85] = {.lex_state = 1143, .external_lex_state = 1},
  [86] = {.lex_state = 1143, .external_lex_state = 1},
  [87] = {.lex_state = 1143, .external_lex_state = 1},
  [88] = {.lex_state = 1143, .external_lex_state = 1},
  [89] = {.lex_state = 1115, .external_lex_state = 1},
  [90] = {.lex_state = 1143, .external_lex_state = 1},
  [91] = {.lex_state = 1143, .external_lex_state = 1},
  [92] = {.lex_state = 1143, .external_lex_state = 1},
  [93] = {.lex_state = 1115, .external_lex_state = 1},
  [94] = {.lex_state = 1115, .external_lex_state = 1},
  [95] = {.lex_state = 1115, .external_lex_state = 1},
  [96] = {.lex_state = 1143, .external_lex_state = 1},
  [97] = {.lex_state = 1115, .external_lex_state = 1},
  [98] = {.lex_state = 1115, .external_lex_state = 1},
  [99] = {.lex_state = 1143, .external_lex_state = 1},
  [100] = {.lex_state = 1115, .external_lex_state = 1},
  [101] = {.lex_state = 1143, .external_lex_state = 1},
  [102] = {.lex_state = 1143, .external_lex_state = 1},
  [103] = {.lex_state = 1143, .external_lex_state = 1},
  [104] = {.lex_state = 1143, .external_lex_state = 1},
  [105] = {.lex_state = 1143, .external_lex_state = 1},
  [106] = {.lex_state = 1143, .external_lex_state = 1},
  [107] = {.lex_state = 1143, .external_lex_state = 1},
  [108] = {.lex_state = 1143, .external_lex_state = 1},
  [109] = {.lex_state = 1143, .external_lex_state = 1},
  [110] = {.lex_state = 1143, .external_lex_state = 1},
  [111] = {.lex_state = 2272, .external_lex_state = 1},
  [112] = {.lex_state = 2272, .external_lex_state = 1},
  [113] = {.lex_state = 2272, .external_lex_state = 1},
  [114] = {.lex_state = 1150},
  [115] = {.lex_state = 2272, .external_lex_state = 1},
  [116] = {.lex_state = 2272, .external_lex_state = 1},
  [117] = {.lex_state = 1149},
  [118] = {.lex_state = 1150},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1150},
  [121] = {.lex_state = 1150},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1198},
  [124] = {.lex_state = 1198},
  [125] = {.lex_state = 1198},
  [126] = {.lex_state = 1198},
  [127] = {.lex_state = 2271, .external_lex_state = 1},
  [128] = {.lex_state = 2271, .external_lex_state = 1},
  [129] = {.lex_state = 2271, .external_lex_state = 1},
  [130] = {.lex_state = 1198},
  [131] = {.lex_state = 1198},
  [132] = {.lex_state = 1141, .external_lex_state = 1},
  [133] = {.lex_state = 1198},
  [134] = {.lex_state = 2271, .external_lex_state = 1},
  [135] = {.lex_state = 1141, .external_lex_state = 1},
  [136] = {.lex_state = 1142, .external_lex_state = 1},
  [137] = {.lex_state = 1142, .external_lex_state = 1},
  [138] = {.lex_state = 1142, .external_lex_state = 1},
  [139] = {.lex_state = 2272, .external_lex_state = 1},
  [140] = {.lex_state = 2267, .external_lex_state = 1},
  [141] = {.lex_state = 1142, .external_lex_state = 1},
  [142] = {.lex_state = 2271, .external_lex_state = 1},
  [143] = {.lex_state = 2271, .external_lex_state = 1},
  [144] = {.lex_state = 2271, .external_lex_state = 1},
  [145] = {.lex_state = 2271, .external_lex_state = 1},
  [146] = {.lex_state = 2271, .external_lex_state = 1},
  [147] = {.lex_state = 2271, .external_lex_state = 1},
  [148] = {.lex_state = 2271, .external_lex_state = 1},
  [149] = {.lex_state = 2271, .external_lex_state = 1},
  [150] = {.lex_state = 2271, .external_lex_state = 1},
  [151] = {.lex_state = 2271, .external_lex_state = 1},
  [152] = {.lex_state = 2271, .external_lex_state = 1},
  [153] = {.lex_state = 2271, .external_lex_state = 1},
  [154] = {.lex_state = 2271, .external_lex_state = 1},
  [155] = {.lex_state = 2267, .external_lex_state = 1},
  [156] = {.lex_state = 2271, .external_lex_state = 1},
  [157] = {.lex_state = 2271, .external_lex_state = 1},
  [158] = {.lex_state = 2271, .external_lex_state = 1},
  [159] = {.lex_state = 2271, .external_lex_state = 1},
  [160] = {.lex_state = 2272, .external_lex_state = 1},
  [161] = {.lex_state = 2272, .external_lex_state = 1},
  [162] = {.lex_state = 2272, .external_lex_state = 1},
  [163] = {.lex_state = 2271, .external_lex_state = 1},
  [164] = {.lex_state = 2272, .external_lex_state = 1},
  [165] = {.lex_state = 2271, .external_lex_state = 1},
  [166] = {.lex_state = 1126, .external_lex_state = 1},
  [167] = {.lex_state = 1198},
  [168] = {.lex_state = 2272, .external_lex_state = 1},
  [169] = {.lex_state = 2271, .external_lex_state = 1},
  [170] = {.lex_state = 2272, .external_lex_state = 1},
  [171] = {.lex_state = 2272, .external_lex_state = 1},
  [172] = {.lex_state = 2272, .external_lex_state = 1},
  [173] = {.lex_state = 1198},
  [174] = {.lex_state = 2271, .external_lex_state = 1},
  [175] = {.lex_state = 2272, .external_lex_state = 1},
  [176] = {.lex_state = 1198},
  [177] = {.lex_state = 2272, .external_lex_state = 1},
  [178] = {.lex_state = 2272, .external_lex_state = 1},
  [179] = {.lex_state = 2272, .external_lex_state = 1},
  [180] = {.lex_state = 2272, .external_lex_state = 1},
  [181] = {.lex_state = 2272, .external_lex_state = 1},
  [182] = {.lex_state = 2272, .external_lex_state = 1},
  [183] = {.lex_state = 2272, .external_lex_state = 1},
  [184] = {.lex_state = 2272, .external_lex_state = 1},
  [185] = {.lex_state = 2272, .external_lex_state = 1},
  [186] = {.lex_state = 2272, .external_lex_state = 1},
  [187] = {.lex_state = 2272, .external_lex_state = 1},
  [188] = {.lex_state = 2272, .external_lex_state = 1},
  [189] = {.lex_state = 2272, .external_lex_state = 1},
  [190] = {.lex_state = 2272, .external_lex_state = 1},
  [191] = {.lex_state = 2272, .external_lex_state = 1},
  [192] = {.lex_state = 2272, .external_lex_state = 1},
  [193] = {.lex_state = 2272, .external_lex_state = 1},
  [194] = {.lex_state = 2272, .external_lex_state = 1},
  [195] = {.lex_state = 2272, .external_lex_state = 1},
  [196] = {.lex_state = 2272, .external_lex_state = 1},
  [197] = {.lex_state = 2272, .external_lex_state = 1},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 2207},
  [200] = {.lex_state = 2207},
  [201] = {.lex_state = 2207},
  [202] = {.lex_state = 2207},
  [203] = {.lex_state = 2207},
  [204] = {.lex_state = 2207},
  [205] = {.lex_state = 2207},
  [206] = {.lex_state = 2207},
  [207] = {.lex_state = 2207},
  [208] = {.lex_state = 2207},
  [209] = {.lex_state = 2207},
  [210] = {.lex_state = 2207},
  [211] = {.lex_state = 1224},
  [212] = {.lex_state = 1224},
  [213] = {.lex_state = 1224},
  [214] = {.lex_state = 1224},
  [215] = {.lex_state = 1224},
  [216] = {.lex_state = 1224},
  [217] = {.lex_state = 1224},
  [218] = {.lex_state = 1224},
  [219] = {.lex_state = 1224},
  [220] = {.lex_state = 1130},
  [221] = {.lex_state = 1224},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 1130},
  [224] = {.lex_state = 2207},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 2207},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 2207},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 2272},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 1348},
  [269] = {.lex_state = 1224},
  [270] = {.lex_state = 2285},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 1224},
  [273] = {.lex_state = 2285},
  [274] = {.lex_state = 1348},
  [275] = {.lex_state = 1198},
  [276] = {.lex_state = 1198},
  [277] = {.lex_state = 2285},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 1224},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 2285},
  [283] = {.lex_state = 2285},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 1224},
  [286] = {.lex_state = 2285},
  [287] = {.lex_state = 1131},
  [288] = {.lex_state = 1224},
  [289] = {.lex_state = 2285},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 1224},
  [292] = {.lex_state = 2285},
  [293] = {.lex_state = 2285},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_double_quote_token1] = ACTIONS(1),
    [anon_sym_uff02] = ACTIONS(1),
    [aux_sym_double_quote_token2] = ACTIONS(1),
    [anon_sym_u201c] = ACTIONS(1),
    [aux_sym_double_quote_token3] = ACTIONS(1),
    [anon_sym_u201d] = ACTIONS(1),
    [aux_sym_double_quote_token4] = ACTIONS(1),
    [anon_sym_u201f] = ACTIONS(1),
    [aux_sym_double_quote_token5] = ACTIONS(1),
    [anon_sym_u2033] = ACTIONS(1),
    [aux_sym_double_quote_token6] = ACTIONS(1),
    [anon_sym_u2036] = ACTIONS(1),
    [aux_sym_double_quote_token7] = ACTIONS(1),
    [anon_sym_u3003] = ACTIONS(1),
    [aux_sym_double_quote_token8] = ACTIONS(1),
    [anon_sym_u05f4] = ACTIONS(1),
    [aux_sym_double_quote_token9] = ACTIONS(1),
    [anon_sym_u02dd] = ACTIONS(1),
    [aux_sym_double_quote_token10] = ACTIONS(1),
    [anon_sym_u02ba] = ACTIONS(1),
    [aux_sym_double_quote_token11] = ACTIONS(1),
    [anon_sym_u02f6] = ACTIONS(1),
    [aux_sym_double_quote_token12] = ACTIONS(1),
    [anon_sym_u02ee] = ACTIONS(1),
    [aux_sym_double_quote_token13] = ACTIONS(1),
    [anon_sym_u05f2] = ACTIONS(1),
    [aux_sym_double_quote_token14] = ACTIONS(1),
    [sym_variation_delimiter_open] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__san_file] = ACTIONS(1),
    [sym__san_rank] = ACTIONS(1),
    [sym__san_promotable_piece] = ACTIONS(1),
    [sym__san_major_or_minor_piece] = ACTIONS(1),
    [sym__san_capture_symbol] = ACTIONS(1),
    [sym__san_promotion_symbol] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_u2659] = ACTIONS(1),
    [anon_sym_u265fufe0e] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__lan_move_by_coordinates_token1] = ACTIONS(1),
    [sym__san_move_castle] = ACTIONS(1),
    [sym_check_or_mate_condition] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_result_code_token1] = ACTIONS(1),
    [anon_sym_u2212] = ACTIONS(1),
    [aux_sym_result_code_token2] = ACTIONS(1),
    [anon_sym_u2010] = ACTIONS(1),
    [aux_sym_result_code_token3] = ACTIONS(1),
    [anon_sym_u2011] = ACTIONS(1),
    [aux_sym_result_code_token4] = ACTIONS(1),
    [anon_sym_u2012] = ACTIONS(1),
    [aux_sym_result_code_token5] = ACTIONS(1),
    [anon_sym_u2013] = ACTIONS(1),
    [aux_sym_result_code_token6] = ACTIONS(1),
    [anon_sym_u2014] = ACTIONS(1),
    [aux_sym_result_code_token7] = ACTIONS(1),
    [anon_sym_u2796] = ACTIONS(1),
    [aux_sym_result_code_token8] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_result_code_token9] = ACTIONS(1),
    [anon_sym_u2215] = ACTIONS(1),
    [aux_sym_result_code_token10] = ACTIONS(1),
    [anon_sym_u2044] = ACTIONS(1),
    [aux_sym_result_code_token11] = ACTIONS(1),
    [anon_sym_u27cb] = ACTIONS(1),
    [aux_sym_result_code_token12] = ACTIONS(1),
    [anon_sym_u29f8] = ACTIONS(1),
    [aux_sym_result_code_token13] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_u00bd] = ACTIONS(1),
    [aux_sym_result_code_token14] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym_result_code_token15] = ACTIONS(1),
    [anon_sym_u2217] = ACTIONS(1),
    [aux_sym_result_code_token16] = ACTIONS(1),
    [anon_sym_u2731] = ACTIONS(1),
    [aux_sym_result_code_token17] = ACTIONS(1),
    [anon_sym_u204e] = ACTIONS(1),
    [aux_sym_result_code_token18] = ACTIONS(1),
    [anon_sym_u066d] = ACTIONS(1),
    [aux_sym_result_code_token19] = ACTIONS(1),
    [aux_sym_result_code_token21] = ACTIONS(1),
    [aux_sym_result_code_token23] = ACTIONS(1),
    [sym__full_line_comment_delimiter_bol_assertion] = ACTIONS(1),
  },
  [1] = {
    [sym_series_of_games] = STATE(281),
    [sym_game] = STATE(149),
    [sym_freestanding_comment] = STATE(69),
    [sym_rest_of_line_comment_delimiter_open] = STATE(282),
    [sym_rest_of_line_comment] = STATE(53),
    [sym_header] = STATE(4),
    [sym_tagpair_delimiter_open] = STATE(287),
    [sym_tagpair] = STATE(10),
    [sym_movetext] = STATE(124),
    [sym_inline_comment_delimiter_open] = STATE(203),
    [sym__movetext_element] = STATE(103),
    [sym_variation] = STATE(103),
    [sym_inline_comment] = STATE(53),
    [sym_san_move] = STATE(106),
    [sym__san_move_piece] = STATE(73),
    [sym_lan_move] = STATE(109),
    [sym__san_square] = STATE(17),
    [sym__san_move_pawn] = STATE(73),
    [sym__san_drop_pawn] = STATE(73),
    [sym__san_move_major_or_minor_piece] = STATE(73),
    [sym__san_drop_major_or_minor_piece] = STATE(73),
    [sym__lan_move_by_coordinates] = STATE(85),
    [aux_sym_series_of_games_repeat1] = STATE(21),
    [aux_sym_freestanding_comment_repeat1] = STATE(128),
    [aux_sym_tagpair_delimiter_open_repeat1] = STATE(220),
    [aux_sym_movetext_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [sym_old_style_twic_section_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_variation_delimiter_open] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_move_number] = ACTIONS(15),
    [sym__san_file] = ACTIONS(17),
    [sym__san_major_or_minor_piece] = ACTIONS(19),
    [anon_sym_P] = ACTIONS(21),
    [anon_sym_u2659] = ACTIONS(21),
    [anon_sym_u265fufe0e] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(23),
    [sym__san_move_castle] = ACTIONS(25),
    [sym__san_null_move] = ACTIONS(25),
    [sym_annotation] = ACTIONS(27),
    [sym__full_line_comment_delimiter_bol_assertion] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(33), 1,
      anon_sym_SEMI,
    ACTIONS(38), 1,
      sym_variation_delimiter_open,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      sym_move_number,
    ACTIONS(47), 1,
      sym__san_file,
    ACTIONS(50), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(56), 1,
      anon_sym_AT,
    ACTIONS(62), 1,
      sym_annotation,
    ACTIONS(65), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(2), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(38), 1,
      sym__lan_move_by_coordinates,
    STATE(43), 1,
      sym_san_move,
    STATE(55), 1,
      sym_lan_move,
    STATE(203), 1,
      sym_inline_comment_delimiter_open,
    STATE(282), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(59), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(50), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(59), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(53), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(42), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(36), 23,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [102] = 23,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(72), 1,
      sym_variation_delimiter_open,
    ACTIONS(74), 1,
      sym_move_number,
    ACTIONS(76), 1,
      sym__san_file,
    ACTIONS(78), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(82), 1,
      anon_sym_AT,
    ACTIONS(86), 1,
      sym_annotation,
    STATE(2), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(38), 1,
      sym__lan_move_by_coordinates,
    STATE(43), 1,
      sym_san_move,
    STATE(55), 1,
      sym_lan_move,
    STATE(203), 1,
      sym_inline_comment_delimiter_open,
    STATE(282), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(84), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(50), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(59), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(80), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(42), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(70), 23,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [204] = 28,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(72), 1,
      sym_variation_delimiter_open,
    ACTIONS(74), 1,
      sym_move_number,
    ACTIONS(76), 1,
      sym__san_file,
    ACTIONS(78), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(82), 1,
      anon_sym_AT,
    ACTIONS(86), 1,
      sym_annotation,
    ACTIONS(88), 1,
      sym__empty_line,
    ACTIONS(90), 1,
      anon_sym_1,
    STATE(3), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(18), 1,
      sym_movetext,
    STATE(38), 1,
      sym__lan_move_by_coordinates,
    STATE(43), 1,
      sym_san_move,
    STATE(55), 1,
      sym_lan_move,
    STATE(152), 1,
      sym_result_code,
    STATE(203), 1,
      sym_inline_comment_delimiter_open,
    STATE(282), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(84), 2,
      sym__san_move_castle,
      sym__san_null_move,
    ACTIONS(94), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    STATE(50), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(59), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(80), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(92), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(42), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(96), 14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [314] = 24,
    ACTIONS(65), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(98), 1,
      anon_sym_SEMI,
    ACTIONS(101), 1,
      sym_variation_delimiter_open,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(107), 1,
      sym_move_number,
    ACTIONS(110), 1,
      sym__san_file,
    ACTIONS(113), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(116), 1,
      anon_sym_P,
    ACTIONS(122), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      sym_annotation,
    STATE(5), 1,
      aux_sym_movetext_repeat1,
    STATE(17), 1,
      sym__san_square,
    STATE(85), 1,
      sym__lan_move_by_coordinates,
    STATE(106), 1,
      sym_san_move,
    STATE(109), 1,
      sym_lan_move,
    STATE(202), 1,
      sym_inline_comment_delimiter_open,
    STATE(270), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(119), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(125), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(92), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(103), 2,
      sym__movetext_element,
      sym_variation,
    STATE(73), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(36), 6,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(31), 16,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [415] = 24,
    ACTIONS(15), 1,
      sym_move_number,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(27), 1,
      sym_annotation,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(133), 1,
      sym_variation_delimiter_open,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      anon_sym_AT,
    STATE(5), 1,
      aux_sym_movetext_repeat1,
    STATE(17), 1,
      sym__san_square,
    STATE(85), 1,
      sym__lan_move_by_coordinates,
    STATE(106), 1,
      sym_san_move,
    STATE(109), 1,
      sym_lan_move,
    STATE(202), 1,
      sym_inline_comment_delimiter_open,
    STATE(270), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(137), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(141), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(92), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(103), 2,
      sym__movetext_element,
      sym_variation,
    STATE(73), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(70), 6,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(68), 16,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [516] = 28,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(74), 1,
      sym_move_number,
    ACTIONS(76), 1,
      sym__san_file,
    ACTIONS(78), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(80), 1,
      anon_sym_P,
    ACTIONS(86), 1,
      sym_annotation,
    ACTIONS(90), 1,
      anon_sym_1,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      sym_variation_delimiter_open,
    ACTIONS(147), 1,
      anon_sym_AT,
    STATE(3), 1,
      aux_sym_movetext_repeat1,
    STATE(8), 1,
      sym__san_square,
    STATE(19), 1,
      sym_movetext,
    STATE(38), 1,
      sym__lan_move_by_coordinates,
    STATE(43), 1,
      sym_san_move,
    STATE(55), 1,
      sym_lan_move,
    STATE(150), 1,
      sym_result_code,
    STATE(203), 1,
      sym_inline_comment_delimiter_open,
    STATE(282), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(94), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(145), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(149), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(50), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(59), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(92), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    STATE(42), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
    ACTIONS(151), 14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [625] = 6,
    ACTIONS(157), 1,
      sym__san_promotable_piece,
    ACTIONS(161), 1,
      sym__san_promotion_symbol,
    STATE(37), 1,
      sym__san_promotion,
    ACTIONS(159), 2,
      sym__san_capture_symbol,
      aux_sym__lan_move_by_coordinates_token1,
    ACTIONS(153), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(155), 37,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [683] = 13,
    ACTIONS(163), 1,
      sym__empty_line,
    ACTIONS(166), 1,
      anon_sym_SEMI,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(9), 1,
      aux_sym_header_repeat1,
    STATE(94), 1,
      sym_tagpair,
    STATE(204), 1,
      sym_inline_comment_delimiter_open,
    STATE(220), 1,
      aux_sym_tagpair_delimiter_open_repeat1,
    STATE(283), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(287), 1,
      sym_tagpair_delimiter_open,
    STATE(93), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    ACTIONS(172), 31,
      sym_variation_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [754] = 13,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(180), 1,
      sym__empty_line,
    STATE(11), 1,
      aux_sym_header_repeat1,
    STATE(94), 1,
      sym_tagpair,
    STATE(204), 1,
      sym_inline_comment_delimiter_open,
    STATE(220), 1,
      aux_sym_tagpair_delimiter_open_repeat1,
    STATE(283), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(287), 1,
      sym_tagpair_delimiter_open,
    STATE(93), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    ACTIONS(182), 31,
      sym_variation_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [825] = 13,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(184), 1,
      sym__empty_line,
    STATE(9), 1,
      aux_sym_header_repeat1,
    STATE(94), 1,
      sym_tagpair,
    STATE(204), 1,
      sym_inline_comment_delimiter_open,
    STATE(220), 1,
      aux_sym_tagpair_delimiter_open_repeat1,
    STATE(283), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(287), 1,
      sym_tagpair_delimiter_open,
    STATE(93), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    ACTIONS(186), 31,
      sym_variation_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [896] = 2,
    ACTIONS(188), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(190), 41,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_capture_symbol,
      sym__san_promotion_symbol,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      aux_sym__lan_move_by_coordinates_token1,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [945] = 5,
    ACTIONS(161), 1,
      sym__san_promotion_symbol,
    ACTIONS(196), 1,
      sym__san_promotable_piece,
    STATE(28), 1,
      sym__san_promotion,
    ACTIONS(192), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(194), 37,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [999] = 5,
    ACTIONS(161), 1,
      sym__san_promotion_symbol,
    ACTIONS(202), 1,
      sym__san_promotable_piece,
    STATE(35), 1,
      sym__san_promotion,
    ACTIONS(198), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(200), 37,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1053] = 5,
    ACTIONS(161), 1,
      sym__san_promotion_symbol,
    ACTIONS(208), 1,
      sym__san_promotable_piece,
    STATE(33), 1,
      sym__san_promotion,
    ACTIONS(204), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(206), 37,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1107] = 2,
    ACTIONS(188), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(190), 39,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_promotion_symbol,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1154] = 7,
    ACTIONS(210), 1,
      sym__san_promotable_piece,
    ACTIONS(212), 1,
      sym__san_capture_symbol,
    ACTIONS(214), 1,
      sym__san_promotion_symbol,
    ACTIONS(216), 1,
      aux_sym__lan_move_by_coordinates_token1,
    STATE(80), 1,
      sym__san_promotion,
    ACTIONS(155), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(153), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1211] = 10,
    ACTIONS(90), 1,
      anon_sym_1,
    STATE(126), 1,
      aux_sym_trailing_garbage_repeat1,
    STATE(130), 1,
      sym_trailing_garbage,
    STATE(159), 1,
      sym_result_code,
    ACTIONS(94), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(222), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(92), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(218), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(96), 14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
    ACTIONS(220), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [1274] = 10,
    ACTIONS(90), 1,
      anon_sym_1,
    STATE(126), 1,
      aux_sym_trailing_garbage_repeat1,
    STATE(131), 1,
      sym_trailing_garbage,
    STATE(142), 1,
      sym_result_code,
    ACTIONS(94), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(222), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(92), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(224), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(96), 14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
    ACTIONS(226), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [1337] = 33,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(233), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      sym_variation_delimiter_open,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(245), 1,
      sym_move_number,
    ACTIONS(248), 1,
      sym__san_file,
    ACTIONS(251), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(257), 1,
      anon_sym_AT,
    ACTIONS(263), 1,
      sym_annotation,
    ACTIONS(266), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(4), 1,
      sym_header,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(10), 1,
      sym_tagpair,
    STATE(17), 1,
      sym__san_square,
    STATE(20), 1,
      aux_sym_series_of_games_repeat1,
    STATE(75), 1,
      sym_freestanding_comment,
    STATE(85), 1,
      sym__lan_move_by_coordinates,
    STATE(106), 1,
      sym_san_move,
    STATE(109), 1,
      sym_lan_move,
    STATE(124), 1,
      sym_movetext,
    STATE(134), 1,
      aux_sym_freestanding_comment_repeat1,
    STATE(149), 1,
      sym_game,
    STATE(199), 1,
      sym_inline_comment_delimiter_open,
    STATE(220), 1,
      aux_sym_tagpair_delimiter_open_repeat1,
    STATE(287), 1,
      sym_tagpair_delimiter_open,
    STATE(289), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(260), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(62), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(103), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(254), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(73), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1446] = 33,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_variation_delimiter_open,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_move_number,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      sym_annotation,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(10), 1,
      sym_tagpair,
    STATE(17), 1,
      sym__san_square,
    STATE(20), 1,
      aux_sym_series_of_games_repeat1,
    STATE(65), 1,
      sym_freestanding_comment,
    STATE(85), 1,
      sym__lan_move_by_coordinates,
    STATE(106), 1,
      sym_san_move,
    STATE(109), 1,
      sym_lan_move,
    STATE(124), 1,
      sym_movetext,
    STATE(128), 1,
      aux_sym_freestanding_comment_repeat1,
    STATE(149), 1,
      sym_game,
    STATE(203), 1,
      sym_inline_comment_delimiter_open,
    STATE(220), 1,
      aux_sym_tagpair_delimiter_open_repeat1,
    STATE(282), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(287), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(25), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(53), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(103), 2,
      sym__movetext_element,
      sym_variation,
    ACTIONS(21), 3,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    STATE(73), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [1555] = 4,
    ACTIONS(271), 1,
      sym__san_capture_symbol,
    STATE(27), 1,
      sym__san_square,
    ACTIONS(188), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(190), 37,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1606] = 2,
    ACTIONS(190), 15,
      sym_move_number,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_promotion_symbol,
      anon_sym_P,
      aux_sym__lan_move_by_coordinates_token1,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(188), 26,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__san_capture_symbol,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1652] = 2,
    ACTIONS(273), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(275), 37,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1697] = 5,
    ACTIONS(214), 1,
      sym__san_promotion_symbol,
    ACTIONS(277), 1,
      sym__san_promotable_piece,
    STATE(74), 1,
      sym__san_promotion,
    ACTIONS(200), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(198), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1748] = 5,
    ACTIONS(214), 1,
      sym__san_promotion_symbol,
    ACTIONS(279), 1,
      sym__san_promotable_piece,
    STATE(87), 1,
      sym__san_promotion,
    ACTIONS(194), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(192), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1799] = 2,
    ACTIONS(281), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(283), 37,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1844] = 2,
    ACTIONS(285), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(287), 37,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1889] = 5,
    ACTIONS(214), 1,
      sym__san_promotion_symbol,
    ACTIONS(289), 1,
      sym__san_promotable_piece,
    STATE(71), 1,
      sym__san_promotion,
    ACTIONS(206), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(204), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1940] = 2,
    ACTIONS(291), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(293), 37,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [1985] = 3,
    ACTIONS(299), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(295), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
    ACTIONS(297), 37,
      anon_sym_SEMI,
      sym_old_style_twic_section_comment,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2032] = 2,
    ACTIONS(301), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(303), 37,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2077] = 2,
    ACTIONS(305), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(307), 37,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2122] = 2,
    ACTIONS(309), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(311), 37,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2167] = 2,
    ACTIONS(192), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(194), 37,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2212] = 2,
    ACTIONS(313), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(315), 37,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2257] = 2,
    ACTIONS(198), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(200), 37,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2302] = 3,
    ACTIONS(321), 1,
      sym_check_or_mate_condition,
    ACTIONS(317), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(319), 36,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2349] = 2,
    ACTIONS(188), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(190), 37,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2394] = 2,
    ACTIONS(323), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(325), 37,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2439] = 2,
    ACTIONS(327), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(329), 37,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2484] = 3,
    ACTIONS(335), 1,
      sym_check_or_mate_condition,
    ACTIONS(331), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(333), 36,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2531] = 2,
    ACTIONS(337), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(339), 36,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2575] = 2,
    ACTIONS(341), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(343), 36,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2619] = 2,
    ACTIONS(345), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(347), 36,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2663] = 2,
    ACTIONS(190), 14,
      sym_move_number,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_promotion_symbol,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(188), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2707] = 2,
    ACTIONS(349), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(351), 36,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2751] = 2,
    ACTIONS(353), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(355), 36,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2795] = 2,
    ACTIONS(357), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(359), 36,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2839] = 2,
    ACTIONS(361), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(363), 36,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2883] = 2,
    ACTIONS(365), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(367), 36,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2927] = 3,
    ACTIONS(295), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(369), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(297), 37,
      anon_sym_SEMI,
      sym_old_style_twic_section_comment,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [2973] = 5,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(378), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(371), 2,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(373), 13,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
    ACTIONS(363), 22,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3023] = 2,
    ACTIONS(381), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(383), 36,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3067] = 2,
    ACTIONS(385), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(387), 36,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3111] = 4,
    ACTIONS(389), 1,
      sym__san_capture_symbol,
    STATE(84), 1,
      sym__san_square,
    ACTIONS(190), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(188), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3159] = 2,
    ACTIONS(391), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(393), 36,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3203] = 2,
    ACTIONS(395), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(397), 36,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3247] = 2,
    ACTIONS(399), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(401), 36,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3291] = 2,
    ACTIONS(403), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(405), 36,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3335] = 2,
    ACTIONS(407), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(409), 36,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3379] = 5,
    ACTIONS(371), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(378), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(373), 13,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
    ACTIONS(363), 22,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3428] = 2,
    ACTIONS(357), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym_old_style_twic_section_comment,
    ACTIONS(359), 36,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3471] = 4,
    ACTIONS(415), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_tagpair_delimiter_close_repeat1,
    ACTIONS(411), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(413), 34,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3518] = 30,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(27), 1,
      sym_annotation,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(133), 1,
      sym_variation_delimiter_open,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      anon_sym_AT,
    ACTIONS(418), 1,
      ts_builtin_sym_end,
    ACTIONS(420), 1,
      anon_sym_LBRACK,
    ACTIONS(422), 1,
      sym_move_number,
    STATE(4), 1,
      sym_header,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(10), 1,
      sym_tagpair,
    STATE(17), 1,
      sym__san_square,
    STATE(85), 1,
      sym__lan_move_by_coordinates,
    STATE(106), 1,
      sym_san_move,
    STATE(109), 1,
      sym_lan_move,
    STATE(124), 1,
      sym_movetext,
    STATE(158), 1,
      sym_game,
    STATE(202), 1,
      sym_inline_comment_delimiter_open,
    STATE(220), 1,
      aux_sym_tagpair_delimiter_open_repeat1,
    STATE(270), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(287), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(137), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(141), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(92), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(103), 2,
      sym__movetext_element,
      sym_variation,
    STATE(73), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [3617] = 2,
    ACTIONS(345), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym_old_style_twic_section_comment,
    ACTIONS(347), 36,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3660] = 4,
    ACTIONS(428), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_tagpair_delimiter_close_repeat1,
    ACTIONS(424), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(426), 34,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3707] = 2,
    ACTIONS(395), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym_old_style_twic_section_comment,
    ACTIONS(397), 36,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3750] = 30,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(27), 1,
      sym_annotation,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(133), 1,
      sym_variation_delimiter_open,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      anon_sym_AT,
    ACTIONS(420), 1,
      anon_sym_LBRACK,
    ACTIONS(422), 1,
      sym_move_number,
    ACTIONS(430), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_header,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(10), 1,
      sym_tagpair,
    STATE(17), 1,
      sym__san_square,
    STATE(85), 1,
      sym__lan_move_by_coordinates,
    STATE(106), 1,
      sym_san_move,
    STATE(109), 1,
      sym_lan_move,
    STATE(124), 1,
      sym_movetext,
    STATE(158), 1,
      sym_game,
    STATE(202), 1,
      sym_inline_comment_delimiter_open,
    STATE(220), 1,
      aux_sym_tagpair_delimiter_open_repeat1,
    STATE(270), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(287), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(137), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(141), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(92), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(103), 2,
      sym__movetext_element,
      sym_variation,
    STATE(73), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [3849] = 2,
    ACTIONS(381), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym_old_style_twic_section_comment,
    ACTIONS(383), 36,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3892] = 2,
    ACTIONS(307), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(305), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3934] = 2,
    ACTIONS(275), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(273), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [3976] = 3,
    ACTIONS(432), 1,
      sym_check_or_mate_condition,
    ACTIONS(333), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(331), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4020] = 2,
    ACTIONS(194), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(192), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4062] = 29,
    ACTIONS(17), 1,
      sym__san_file,
    ACTIONS(19), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(21), 1,
      anon_sym_P,
    ACTIONS(27), 1,
      sym_annotation,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(133), 1,
      sym_variation_delimiter_open,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      anon_sym_AT,
    ACTIONS(420), 1,
      anon_sym_LBRACK,
    ACTIONS(422), 1,
      sym_move_number,
    STATE(4), 1,
      sym_header,
    STATE(6), 1,
      aux_sym_movetext_repeat1,
    STATE(10), 1,
      sym_tagpair,
    STATE(17), 1,
      sym__san_square,
    STATE(85), 1,
      sym__lan_move_by_coordinates,
    STATE(106), 1,
      sym_san_move,
    STATE(109), 1,
      sym_lan_move,
    STATE(124), 1,
      sym_movetext,
    STATE(158), 1,
      sym_game,
    STATE(202), 1,
      sym_inline_comment_delimiter_open,
    STATE(220), 1,
      aux_sym_tagpair_delimiter_open_repeat1,
    STATE(270), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(287), 1,
      sym_tagpair_delimiter_open,
    ACTIONS(137), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(141), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(92), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(103), 2,
      sym__movetext_element,
      sym_variation,
    STATE(73), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [4158] = 2,
    ACTIONS(311), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(309), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4200] = 2,
    ACTIONS(303), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(301), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4242] = 2,
    ACTIONS(293), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(291), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4284] = 3,
    ACTIONS(295), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(434), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(297), 35,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4328] = 2,
    ACTIONS(200), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(198), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4370] = 2,
    ACTIONS(315), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(313), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4412] = 3,
    ACTIONS(295), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(436), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(297), 35,
      sym__empty_line,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4456] = 2,
    ACTIONS(190), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(188), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4498] = 2,
    ACTIONS(283), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(281), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4540] = 3,
    ACTIONS(438), 1,
      sym_check_or_mate_condition,
    ACTIONS(319), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(317), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4584] = 2,
    ACTIONS(325), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(323), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4626] = 2,
    ACTIONS(287), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(285), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4668] = 2,
    ACTIONS(329), 12,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(327), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4710] = 2,
    ACTIONS(357), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(359), 34,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4751] = 2,
    ACTIONS(359), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(357), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4792] = 2,
    ACTIONS(405), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(403), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4833] = 2,
    ACTIONS(363), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(361), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4874] = 2,
    ACTIONS(440), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(442), 34,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4915] = 2,
    ACTIONS(444), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(446), 34,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4956] = 2,
    ACTIONS(381), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(383), 34,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [4997] = 2,
    ACTIONS(393), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(391), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5038] = 2,
    ACTIONS(395), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(397), 34,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5079] = 2,
    ACTIONS(345), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(347), 34,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5120] = 2,
    ACTIONS(343), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(341), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5161] = 2,
    ACTIONS(448), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym__empty_line,
    ACTIONS(450), 34,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5202] = 2,
    ACTIONS(409), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(407), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5243] = 2,
    ACTIONS(367), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(365), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5284] = 2,
    ACTIONS(401), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(399), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5325] = 2,
    ACTIONS(355), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(353), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5366] = 2,
    ACTIONS(347), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(345), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5407] = 2,
    ACTIONS(339), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(337), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5448] = 2,
    ACTIONS(383), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(381), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5489] = 2,
    ACTIONS(397), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(395), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5530] = 2,
    ACTIONS(387), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(385), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5571] = 2,
    ACTIONS(351), 11,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(349), 25,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [5612] = 25,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(452), 1,
      sym_variation_delimiter_open,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    ACTIONS(456), 1,
      sym_move_number,
    ACTIONS(458), 1,
      sym__san_file,
    ACTIONS(460), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(462), 1,
      anon_sym_P,
    ACTIONS(466), 1,
      anon_sym_AT,
    ACTIONS(470), 1,
      sym_annotation,
    STATE(51), 1,
      sym_variation_delimiter_close,
    STATE(116), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(132), 1,
      sym__san_square,
    STATE(162), 1,
      sym__lan_move_by_coordinates,
    STATE(195), 1,
      sym_lan_move,
    STATE(196), 1,
      sym_san_move,
    STATE(200), 1,
      sym_inline_comment_delimiter_open,
    STATE(251), 1,
      sym_variation_movetext,
    STATE(273), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(464), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(468), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(191), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(197), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(171), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [5696] = 25,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(452), 1,
      sym_variation_delimiter_open,
    ACTIONS(456), 1,
      sym_move_number,
    ACTIONS(458), 1,
      sym__san_file,
    ACTIONS(460), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(462), 1,
      anon_sym_P,
    ACTIONS(466), 1,
      anon_sym_AT,
    ACTIONS(470), 1,
      sym_annotation,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(132), 1,
      sym__san_square,
    STATE(162), 1,
      sym__lan_move_by_coordinates,
    STATE(185), 1,
      sym_variation_delimiter_close,
    STATE(195), 1,
      sym_lan_move,
    STATE(196), 1,
      sym_san_move,
    STATE(200), 1,
      sym_inline_comment_delimiter_open,
    STATE(238), 1,
      sym_variation_movetext,
    STATE(273), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(464), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(468), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(191), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(197), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(171), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [5780] = 25,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(452), 1,
      sym_variation_delimiter_open,
    ACTIONS(456), 1,
      sym_move_number,
    ACTIONS(458), 1,
      sym__san_file,
    ACTIONS(460), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(462), 1,
      anon_sym_P,
    ACTIONS(466), 1,
      anon_sym_AT,
    ACTIONS(470), 1,
      sym_annotation,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_variation_delimiter_close,
    STATE(116), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(132), 1,
      sym__san_square,
    STATE(162), 1,
      sym__lan_move_by_coordinates,
    STATE(195), 1,
      sym_lan_move,
    STATE(196), 1,
      sym_san_move,
    STATE(200), 1,
      sym_inline_comment_delimiter_open,
    STATE(236), 1,
      sym_variation_movetext,
    STATE(273), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(464), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(468), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(191), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(197), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(171), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [5864] = 5,
    ACTIONS(478), 1,
      aux_sym_tagpair_value_contents_token1,
    STATE(120), 1,
      aux_sym_tagpair_value_contents_repeat1,
    STATE(122), 1,
      sym_tagpair_value_contents,
    STATE(267), 1,
      sym_double_quote,
    ACTIONS(476), 28,
      anon_sym_DQUOTE,
      aux_sym_double_quote_token1,
      anon_sym_uff02,
      aux_sym_double_quote_token2,
      anon_sym_u201c,
      aux_sym_double_quote_token3,
      anon_sym_u201d,
      aux_sym_double_quote_token4,
      anon_sym_u201f,
      aux_sym_double_quote_token5,
      anon_sym_u2033,
      aux_sym_double_quote_token6,
      anon_sym_u2036,
      aux_sym_double_quote_token7,
      anon_sym_u3003,
      aux_sym_double_quote_token8,
      anon_sym_u05f4,
      aux_sym_double_quote_token9,
      anon_sym_u02dd,
      aux_sym_double_quote_token10,
      anon_sym_u02ba,
      aux_sym_double_quote_token11,
      anon_sym_u02f6,
      aux_sym_double_quote_token12,
      anon_sym_u02ee,
      aux_sym_double_quote_token13,
      anon_sym_u05f2,
      aux_sym_double_quote_token14,
  [5907] = 23,
    ACTIONS(480), 1,
      anon_sym_SEMI,
    ACTIONS(483), 1,
      sym_variation_delimiter_open,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    ACTIONS(491), 1,
      sym_move_number,
    ACTIONS(494), 1,
      sym__san_file,
    ACTIONS(497), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(500), 1,
      anon_sym_P,
    ACTIONS(506), 1,
      anon_sym_AT,
    ACTIONS(512), 1,
      sym_annotation,
    ACTIONS(515), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(115), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(132), 1,
      sym__san_square,
    STATE(162), 1,
      sym__lan_move_by_coordinates,
    STATE(195), 1,
      sym_lan_move,
    STATE(196), 1,
      sym_san_move,
    STATE(200), 1,
      sym_inline_comment_delimiter_open,
    STATE(273), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(503), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(509), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(191), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(197), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(171), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [5985] = 23,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(452), 1,
      sym_variation_delimiter_open,
    ACTIONS(456), 1,
      sym_move_number,
    ACTIONS(458), 1,
      sym__san_file,
    ACTIONS(460), 1,
      sym__san_major_or_minor_piece,
    ACTIONS(462), 1,
      anon_sym_P,
    ACTIONS(466), 1,
      anon_sym_AT,
    ACTIONS(470), 1,
      sym_annotation,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_variation_movetext_repeat1,
    STATE(132), 1,
      sym__san_square,
    STATE(162), 1,
      sym__lan_move_by_coordinates,
    STATE(195), 1,
      sym_lan_move,
    STATE(196), 1,
      sym_san_move,
    STATE(200), 1,
      sym_inline_comment_delimiter_open,
    STATE(273), 1,
      sym_rest_of_line_comment_delimiter_open,
    ACTIONS(464), 2,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
    ACTIONS(468), 2,
      sym__san_move_castle,
      sym__san_null_move,
    STATE(191), 2,
      sym_rest_of_line_comment,
      sym_inline_comment,
    STATE(197), 2,
      sym__variation_movetext_element,
      sym_recursive_variation,
    STATE(171), 5,
      sym__san_move_piece,
      sym__san_move_pawn,
      sym__san_drop_pawn,
      sym__san_move_major_or_minor_piece,
      sym__san_drop_major_or_minor_piece,
  [6063] = 2,
    ACTIONS(520), 1,
      anon_sym_RBRACK,
    ACTIONS(522), 29,
      anon_sym_DQUOTE,
      aux_sym_double_quote_token1,
      anon_sym_uff02,
      aux_sym_double_quote_token2,
      anon_sym_u201c,
      aux_sym_double_quote_token3,
      anon_sym_u201d,
      aux_sym_double_quote_token4,
      anon_sym_u201f,
      aux_sym_double_quote_token5,
      anon_sym_u2033,
      aux_sym_double_quote_token6,
      anon_sym_u2036,
      aux_sym_double_quote_token7,
      anon_sym_u3003,
      aux_sym_double_quote_token8,
      anon_sym_u05f4,
      aux_sym_double_quote_token9,
      anon_sym_u02dd,
      aux_sym_double_quote_token10,
      anon_sym_u02ba,
      aux_sym_double_quote_token11,
      anon_sym_u02f6,
      aux_sym_double_quote_token12,
      anon_sym_u02ee,
      aux_sym_double_quote_token13,
      anon_sym_u05f2,
      aux_sym_double_quote_token14,
      aux_sym_tagpair_value_contents_token1,
  [6098] = 3,
    ACTIONS(527), 1,
      aux_sym_tagpair_value_contents_token1,
    STATE(118), 1,
      aux_sym_tagpair_value_contents_repeat1,
    ACTIONS(524), 28,
      anon_sym_DQUOTE,
      aux_sym_double_quote_token1,
      anon_sym_uff02,
      aux_sym_double_quote_token2,
      anon_sym_u201c,
      aux_sym_double_quote_token3,
      anon_sym_u201d,
      aux_sym_double_quote_token4,
      anon_sym_u201f,
      aux_sym_double_quote_token5,
      anon_sym_u2033,
      aux_sym_double_quote_token6,
      anon_sym_u2036,
      aux_sym_double_quote_token7,
      anon_sym_u3003,
      aux_sym_double_quote_token8,
      anon_sym_u05f4,
      aux_sym_double_quote_token9,
      anon_sym_u02dd,
      aux_sym_double_quote_token10,
      anon_sym_u02ba,
      aux_sym_double_quote_token11,
      anon_sym_u02f6,
      aux_sym_double_quote_token12,
      anon_sym_u02ee,
      aux_sym_double_quote_token13,
      anon_sym_u05f2,
      aux_sym_double_quote_token14,
  [6135] = 3,
    STATE(114), 1,
      sym_double_quote,
    STATE(226), 1,
      sym__tagpair_value,
    ACTIONS(530), 28,
      anon_sym_DQUOTE,
      aux_sym_double_quote_token1,
      anon_sym_uff02,
      aux_sym_double_quote_token2,
      anon_sym_u201c,
      aux_sym_double_quote_token3,
      anon_sym_u201d,
      aux_sym_double_quote_token4,
      anon_sym_u201f,
      aux_sym_double_quote_token5,
      anon_sym_u2033,
      aux_sym_double_quote_token6,
      anon_sym_u2036,
      aux_sym_double_quote_token7,
      anon_sym_u3003,
      aux_sym_double_quote_token8,
      anon_sym_u05f4,
      aux_sym_double_quote_token9,
      anon_sym_u02dd,
      aux_sym_double_quote_token10,
      anon_sym_u02ba,
      aux_sym_double_quote_token11,
      anon_sym_u02f6,
      aux_sym_double_quote_token12,
      anon_sym_u02ee,
      aux_sym_double_quote_token13,
      anon_sym_u05f2,
      aux_sym_double_quote_token14,
  [6172] = 3,
    ACTIONS(535), 1,
      aux_sym_tagpair_value_contents_token1,
    STATE(118), 1,
      aux_sym_tagpair_value_contents_repeat1,
    ACTIONS(532), 28,
      anon_sym_DQUOTE,
      aux_sym_double_quote_token1,
      anon_sym_uff02,
      aux_sym_double_quote_token2,
      anon_sym_u201c,
      aux_sym_double_quote_token3,
      anon_sym_u201d,
      aux_sym_double_quote_token4,
      anon_sym_u201f,
      aux_sym_double_quote_token5,
      anon_sym_u2033,
      aux_sym_double_quote_token6,
      anon_sym_u2036,
      aux_sym_double_quote_token7,
      anon_sym_u3003,
      aux_sym_double_quote_token8,
      anon_sym_u05f4,
      aux_sym_double_quote_token9,
      anon_sym_u02dd,
      aux_sym_double_quote_token10,
      anon_sym_u02ba,
      aux_sym_double_quote_token11,
      anon_sym_u02f6,
      aux_sym_double_quote_token12,
      anon_sym_u02ee,
      aux_sym_double_quote_token13,
      anon_sym_u05f2,
      aux_sym_double_quote_token14,
  [6209] = 2,
    ACTIONS(537), 1,
      aux_sym_tagpair_value_contents_token1,
    ACTIONS(520), 28,
      anon_sym_DQUOTE,
      aux_sym_double_quote_token1,
      anon_sym_uff02,
      aux_sym_double_quote_token2,
      anon_sym_u201c,
      aux_sym_double_quote_token3,
      anon_sym_u201d,
      aux_sym_double_quote_token4,
      anon_sym_u201f,
      aux_sym_double_quote_token5,
      anon_sym_u2033,
      aux_sym_double_quote_token6,
      anon_sym_u2036,
      aux_sym_double_quote_token7,
      anon_sym_u3003,
      aux_sym_double_quote_token8,
      anon_sym_u05f4,
      aux_sym_double_quote_token9,
      anon_sym_u02dd,
      aux_sym_double_quote_token10,
      anon_sym_u02ba,
      aux_sym_double_quote_token11,
      anon_sym_u02f6,
      aux_sym_double_quote_token12,
      anon_sym_u02ee,
      aux_sym_double_quote_token13,
      anon_sym_u05f2,
      aux_sym_double_quote_token14,
  [6243] = 2,
    STATE(271), 1,
      sym_double_quote,
    ACTIONS(539), 28,
      anon_sym_DQUOTE,
      aux_sym_double_quote_token1,
      anon_sym_uff02,
      aux_sym_double_quote_token2,
      anon_sym_u201c,
      aux_sym_double_quote_token3,
      anon_sym_u201d,
      aux_sym_double_quote_token4,
      anon_sym_u201f,
      aux_sym_double_quote_token5,
      anon_sym_u2033,
      aux_sym_double_quote_token6,
      anon_sym_u2036,
      aux_sym_double_quote_token7,
      anon_sym_u3003,
      aux_sym_double_quote_token8,
      anon_sym_u05f4,
      aux_sym_double_quote_token9,
      anon_sym_u02dd,
      aux_sym_double_quote_token10,
      anon_sym_u02ba,
      aux_sym_double_quote_token11,
      anon_sym_u02f6,
      aux_sym_double_quote_token12,
      anon_sym_u02ee,
      aux_sym_double_quote_token13,
      anon_sym_u05f2,
      aux_sym_double_quote_token14,
  [6277] = 2,
    ACTIONS(543), 10,
      anon_sym_SLASH,
      aux_sym_result_code_token9,
      anon_sym_u2215,
      aux_sym_result_code_token10,
      anon_sym_u2044,
      aux_sym_result_code_token11,
      anon_sym_u27cb,
      aux_sym_result_code_token12,
      anon_sym_u29f8,
      aux_sym_result_code_token13,
    ACTIONS(541), 16,
      anon_sym_DASH,
      aux_sym_result_code_token1,
      anon_sym_u2212,
      aux_sym_result_code_token2,
      anon_sym_u2010,
      aux_sym_result_code_token3,
      anon_sym_u2011,
      aux_sym_result_code_token4,
      anon_sym_u2012,
      aux_sym_result_code_token5,
      anon_sym_u2013,
      aux_sym_result_code_token6,
      anon_sym_u2014,
      aux_sym_result_code_token7,
      anon_sym_u2796,
      aux_sym_result_code_token8,
  [6308] = 8,
    ACTIONS(90), 1,
      anon_sym_1,
    STATE(126), 1,
      aux_sym_trailing_garbage_repeat1,
    STATE(133), 1,
      sym_trailing_garbage,
    STATE(143), 1,
      sym_result_code,
    ACTIONS(94), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(545), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(92), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(151), 14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [6350] = 4,
    STATE(125), 1,
      aux_sym_trailing_garbage_repeat1,
    ACTIONS(547), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(550), 6,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(552), 14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [6382] = 4,
    STATE(125), 1,
      aux_sym_trailing_garbage_repeat1,
    ACTIONS(554), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(556), 6,
      anon_sym_1,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(558), 14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [6414] = 9,
    ACTIONS(560), 1,
      ts_builtin_sym_end,
    ACTIONS(562), 1,
      anon_sym_SEMI,
    ACTIONS(565), 1,
      sym_old_style_twic_section_comment,
    ACTIONS(570), 1,
      anon_sym_LBRACE,
    ACTIONS(573), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    STATE(205), 1,
      sym_inline_comment_delimiter_open,
    STATE(286), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(127), 3,
      sym_rest_of_line_comment,
      sym_inline_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(568), 12,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [6455] = 9,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(576), 1,
      ts_builtin_sym_end,
    ACTIONS(578), 1,
      sym_old_style_twic_section_comment,
    STATE(205), 1,
      sym_inline_comment_delimiter_open,
    STATE(286), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(127), 3,
      sym_rest_of_line_comment,
      sym_inline_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(580), 12,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [6496] = 8,
    ACTIONS(562), 1,
      anon_sym_SEMI,
    ACTIONS(570), 1,
      anon_sym_LBRACE,
    ACTIONS(573), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(582), 1,
      sym_old_style_twic_section_comment,
    STATE(201), 1,
      sym_inline_comment_delimiter_open,
    STATE(292), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(129), 3,
      sym_rest_of_line_comment,
      sym_inline_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(568), 12,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [6534] = 5,
    ACTIONS(90), 1,
      anon_sym_1,
    STATE(157), 1,
      sym_result_code,
    ACTIONS(94), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(92), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(151), 14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [6566] = 5,
    ACTIONS(90), 1,
      anon_sym_1,
    STATE(146), 1,
      sym_result_code,
    ACTIONS(94), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(92), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(151), 14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [6598] = 7,
    ACTIONS(585), 1,
      sym__san_promotable_piece,
    ACTIONS(587), 1,
      sym__san_capture_symbol,
    ACTIONS(589), 1,
      sym__san_promotion_symbol,
    ACTIONS(591), 1,
      aux_sym__lan_move_by_coordinates_token1,
    STATE(161), 1,
      sym__san_promotion,
    ACTIONS(155), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(153), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6634] = 5,
    ACTIONS(90), 1,
      anon_sym_1,
    STATE(156), 1,
      sym_result_code,
    ACTIONS(94), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
    ACTIONS(92), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
    ACTIONS(151), 14,
      anon_sym_STAR,
      aux_sym_result_code_token15,
      anon_sym_u2217,
      aux_sym_result_code_token16,
      anon_sym_u2731,
      aux_sym_result_code_token17,
      anon_sym_u204e,
      aux_sym_result_code_token18,
      anon_sym_u066d,
      aux_sym_result_code_token19,
      aux_sym_result_code_token20,
      aux_sym_result_code_token21,
      aux_sym_result_code_token22,
      aux_sym_result_code_token23,
  [6666] = 8,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(593), 1,
      sym_old_style_twic_section_comment,
    STATE(201), 1,
      sym_inline_comment_delimiter_open,
    STATE(292), 1,
      sym_rest_of_line_comment_delimiter_open,
    STATE(129), 3,
      sym_rest_of_line_comment,
      sym_inline_comment,
      aux_sym_freestanding_comment_repeat1,
    ACTIONS(580), 12,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [6704] = 2,
    ACTIONS(190), 8,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_promotion_symbol,
      anon_sym_P,
      aux_sym__lan_move_by_coordinates_token1,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(188), 12,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_capture_symbol,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6729] = 5,
    ACTIONS(589), 1,
      sym__san_promotion_symbol,
    ACTIONS(595), 1,
      sym__san_promotable_piece,
    STATE(177), 1,
      sym__san_promotion,
    ACTIONS(200), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(198), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6759] = 5,
    ACTIONS(589), 1,
      sym__san_promotion_symbol,
    ACTIONS(597), 1,
      sym__san_promotable_piece,
    STATE(175), 1,
      sym__san_promotion,
    ACTIONS(194), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(192), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6789] = 5,
    ACTIONS(589), 1,
      sym__san_promotion_symbol,
    ACTIONS(599), 1,
      sym__san_promotable_piece,
    STATE(170), 1,
      sym__san_promotion,
    ACTIONS(206), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(204), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6819] = 4,
    ACTIONS(601), 1,
      sym__san_capture_symbol,
    STATE(172), 1,
      sym__san_square,
    ACTIONS(190), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(188), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6846] = 3,
    ACTIONS(603), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(295), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
    ACTIONS(297), 15,
      anon_sym_SEMI,
      sym_old_style_twic_section_comment,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [6871] = 2,
    ACTIONS(190), 7,
      sym__san_file,
      sym__san_promotable_piece,
      sym__san_major_or_minor_piece,
      sym__san_promotion_symbol,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(188), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [6894] = 2,
    ACTIONS(605), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(607), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [6916] = 2,
    ACTIONS(609), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(611), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [6938] = 2,
    ACTIONS(381), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(383), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [6960] = 2,
    ACTIONS(395), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(397), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [6982] = 2,
    ACTIONS(613), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(615), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7004] = 2,
    ACTIONS(345), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(347), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7026] = 2,
    ACTIONS(357), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(359), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7048] = 2,
    ACTIONS(617), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(619), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7070] = 2,
    ACTIONS(621), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(623), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7092] = 2,
    ACTIONS(625), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(627), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7114] = 2,
    ACTIONS(629), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(631), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7136] = 2,
    ACTIONS(633), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(635), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7158] = 2,
    ACTIONS(637), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(639), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7180] = 3,
    ACTIONS(295), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(641), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(297), 15,
      anon_sym_SEMI,
      sym_old_style_twic_section_comment,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7204] = 2,
    ACTIONS(643), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(645), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7226] = 2,
    ACTIONS(647), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(649), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7248] = 2,
    ACTIONS(651), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(653), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7270] = 2,
    ACTIONS(655), 3,
      sym__full_line_comment_delimiter_bol_assertion,
      ts_builtin_sym_end,
      sym_old_style_twic_section_comment,
    ACTIONS(657), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7292] = 2,
    ACTIONS(329), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(327), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7313] = 2,
    ACTIONS(200), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(198), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7334] = 3,
    ACTIONS(659), 1,
      sym_check_or_mate_condition,
    ACTIONS(319), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(317), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7357] = 2,
    ACTIONS(357), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym_old_style_twic_section_comment,
    ACTIONS(359), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7378] = 2,
    ACTIONS(325), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(323), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7399] = 2,
    ACTIONS(381), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym_old_style_twic_section_comment,
    ACTIONS(383), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7420] = 3,
    ACTIONS(295), 1,
      sym__full_line_comment_delimiter_bol_assertion,
    ACTIONS(661), 1,
      aux_sym_rest_of_line_comment_token1,
    ACTIONS(297), 14,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7443] = 1,
    ACTIONS(663), 16,
      anon_sym_DASH,
      aux_sym_result_code_token1,
      anon_sym_u2212,
      aux_sym_result_code_token2,
      anon_sym_u2010,
      aux_sym_result_code_token3,
      anon_sym_u2011,
      aux_sym_result_code_token4,
      anon_sym_u2012,
      aux_sym_result_code_token5,
      anon_sym_u2013,
      aux_sym_result_code_token6,
      anon_sym_u2014,
      aux_sym_result_code_token7,
      anon_sym_u2796,
      aux_sym_result_code_token8,
  [7462] = 2,
    ACTIONS(315), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(313), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7483] = 2,
    ACTIONS(395), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym_old_style_twic_section_comment,
    ACTIONS(397), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7504] = 2,
    ACTIONS(307), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(305), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7525] = 3,
    ACTIONS(665), 1,
      sym_check_or_mate_condition,
    ACTIONS(333), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(331), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7548] = 2,
    ACTIONS(283), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(281), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7569] = 1,
    ACTIONS(667), 16,
      anon_sym_DASH,
      aux_sym_result_code_token1,
      anon_sym_u2212,
      aux_sym_result_code_token2,
      anon_sym_u2010,
      aux_sym_result_code_token3,
      anon_sym_u2011,
      aux_sym_result_code_token4,
      anon_sym_u2012,
      aux_sym_result_code_token5,
      anon_sym_u2013,
      aux_sym_result_code_token6,
      anon_sym_u2014,
      aux_sym_result_code_token7,
      anon_sym_u2796,
      aux_sym_result_code_token8,
  [7588] = 2,
    ACTIONS(345), 2,
      sym__full_line_comment_delimiter_bol_assertion,
      sym_old_style_twic_section_comment,
    ACTIONS(347), 14,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_variation_delimiter_open,
      anon_sym_LBRACE,
      sym_move_number,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
      sym_annotation,
  [7609] = 2,
    ACTIONS(287), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(285), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7630] = 1,
    ACTIONS(669), 16,
      anon_sym_DASH,
      aux_sym_result_code_token1,
      anon_sym_u2212,
      aux_sym_result_code_token2,
      anon_sym_u2010,
      aux_sym_result_code_token3,
      anon_sym_u2011,
      aux_sym_result_code_token4,
      anon_sym_u2012,
      aux_sym_result_code_token5,
      anon_sym_u2013,
      aux_sym_result_code_token6,
      anon_sym_u2014,
      aux_sym_result_code_token7,
      anon_sym_u2796,
      aux_sym_result_code_token8,
  [7649] = 2,
    ACTIONS(194), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(192), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7670] = 2,
    ACTIONS(190), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(188), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7691] = 2,
    ACTIONS(311), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(309), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7712] = 2,
    ACTIONS(303), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(301), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7733] = 2,
    ACTIONS(293), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(291), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7754] = 2,
    ACTIONS(275), 5,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_check_or_mate_condition,
      sym_annotation,
    ACTIONS(273), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7775] = 2,
    ACTIONS(383), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(381), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7795] = 2,
    ACTIONS(673), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(671), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7815] = 2,
    ACTIONS(677), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(675), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7835] = 2,
    ACTIONS(351), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(349), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7855] = 2,
    ACTIONS(397), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(395), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7875] = 2,
    ACTIONS(681), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(679), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7895] = 2,
    ACTIONS(343), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(341), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7915] = 2,
    ACTIONS(393), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(391), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7935] = 2,
    ACTIONS(685), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(683), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7955] = 2,
    ACTIONS(689), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(687), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7975] = 2,
    ACTIONS(347), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(345), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [7995] = 2,
    ACTIONS(359), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(357), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [8015] = 2,
    ACTIONS(693), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(691), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [8035] = 2,
    ACTIONS(697), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(695), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [8055] = 2,
    ACTIONS(701), 4,
      sym__san_file,
      sym__san_major_or_minor_piece,
      anon_sym_P,
      sym_annotation,
    ACTIONS(699), 11,
      sym__full_line_comment_delimiter_bol_assertion,
      anon_sym_SEMI,
      sym_variation_delimiter_open,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_move_number,
      anon_sym_u2659,
      anon_sym_u265fufe0e,
      anon_sym_AT,
      sym__san_move_castle,
      sym__san_null_move,
  [8075] = 1,
    ACTIONS(703), 10,
      anon_sym_SLASH,
      aux_sym_result_code_token9,
      anon_sym_u2215,
      aux_sym_result_code_token10,
      anon_sym_u2044,
      aux_sym_result_code_token11,
      anon_sym_u27cb,
      aux_sym_result_code_token12,
      anon_sym_u29f8,
      aux_sym_result_code_token13,
  [8088] = 7,
    ACTIONS(705), 1,
      anon_sym_LBRACE,
    ACTIONS(707), 1,
      anon_sym_RBRACE,
    ACTIONS(709), 1,
      aux_sym_inline_comment_text_token1,
    STATE(66), 1,
      sym_inline_comment_delimiter_close,
    STATE(207), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(234), 1,
      sym_inline_comment_text,
    STATE(210), 2,
      sym__recursive_inline_comment,
      aux_sym_inline_comment_text_repeat1,
  [8111] = 7,
    ACTIONS(705), 1,
      anon_sym_LBRACE,
    ACTIONS(709), 1,
      aux_sym_inline_comment_text_token1,
    ACTIONS(711), 1,
      anon_sym_RBRACE,
    STATE(193), 1,
      sym_inline_comment_delimiter_close,
    STATE(207), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(247), 1,
      sym_inline_comment_text,
    STATE(210), 2,
      sym__recursive_inline_comment,
      aux_sym_inline_comment_text_repeat1,
  [8134] = 7,
    ACTIONS(705), 1,
      anon_sym_LBRACE,
    ACTIONS(709), 1,
      aux_sym_inline_comment_text_token1,
    ACTIONS(713), 1,
      anon_sym_RBRACE,
    STATE(174), 1,
      sym_inline_comment_delimiter_close,
    STATE(207), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(245), 1,
      sym_inline_comment_text,
    STATE(210), 2,
      sym__recursive_inline_comment,
      aux_sym_inline_comment_text_repeat1,
  [8157] = 7,
    ACTIONS(705), 1,
      anon_sym_LBRACE,
    ACTIONS(709), 1,
      aux_sym_inline_comment_text_token1,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      sym_inline_comment_delimiter_close,
    STATE(207), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(235), 1,
      sym_inline_comment_text,
    STATE(210), 2,
      sym__recursive_inline_comment,
      aux_sym_inline_comment_text_repeat1,
  [8180] = 7,
    ACTIONS(705), 1,
      anon_sym_LBRACE,
    ACTIONS(709), 1,
      aux_sym_inline_comment_text_token1,
    ACTIONS(717), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_inline_comment_delimiter_close,
    STATE(207), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(242), 1,
      sym_inline_comment_text,
    STATE(210), 2,
      sym__recursive_inline_comment,
      aux_sym_inline_comment_text_repeat1,
  [8203] = 7,
    ACTIONS(705), 1,
      anon_sym_LBRACE,
    ACTIONS(709), 1,
      aux_sym_inline_comment_text_token1,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_inline_comment_delimiter_close,
    STATE(207), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(232), 1,
      sym_inline_comment_text,
    STATE(210), 2,
      sym__recursive_inline_comment,
      aux_sym_inline_comment_text_repeat1,
  [8226] = 7,
    ACTIONS(705), 1,
      anon_sym_LBRACE,
    ACTIONS(709), 1,
      aux_sym_inline_comment_text_token1,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      sym_inline_comment_delimiter_close,
    STATE(207), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(263), 1,
      sym_inline_comment_text,
    STATE(210), 2,
      sym__recursive_inline_comment,
      aux_sym_inline_comment_text_repeat1,
  [8249] = 6,
    ACTIONS(705), 1,
      anon_sym_LBRACE,
    ACTIONS(723), 1,
      anon_sym_RBRACE,
    ACTIONS(725), 1,
      aux_sym_inline_comment_text_token1,
    STATE(207), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(224), 1,
      sym__recursive_inline_comment_delimiter_close,
    STATE(209), 2,
      sym__recursive_inline_comment,
      aux_sym__recursive_inline_comment_text,
  [8269] = 6,
    ACTIONS(705), 1,
      anon_sym_LBRACE,
    ACTIONS(727), 1,
      anon_sym_RBRACE,
    ACTIONS(729), 1,
      aux_sym_inline_comment_text_token1,
    STATE(207), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(227), 1,
      sym__recursive_inline_comment_delimiter_close,
    STATE(206), 2,
      sym__recursive_inline_comment,
      aux_sym__recursive_inline_comment_text,
  [8289] = 5,
    ACTIONS(731), 1,
      anon_sym_LBRACE,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
    ACTIONS(736), 1,
      aux_sym_inline_comment_text_token1,
    STATE(207), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(208), 2,
      sym__recursive_inline_comment,
      aux_sym_inline_comment_text_repeat1,
  [8306] = 5,
    ACTIONS(739), 1,
      anon_sym_LBRACE,
    ACTIONS(742), 1,
      anon_sym_RBRACE,
    ACTIONS(744), 1,
      aux_sym_inline_comment_text_token1,
    STATE(207), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(209), 2,
      sym__recursive_inline_comment,
      aux_sym__recursive_inline_comment_text,
  [8323] = 5,
    ACTIONS(705), 1,
      anon_sym_LBRACE,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
    ACTIONS(749), 1,
      aux_sym_inline_comment_text_token1,
    STATE(207), 1,
      sym__recursive_inline_comment_delimiter_open,
    STATE(208), 2,
      sym__recursive_inline_comment,
      aux_sym_inline_comment_text_repeat1,
  [8340] = 5,
    ACTIONS(751), 1,
      sym__san_file,
    ACTIONS(753), 1,
      sym__san_rank,
    ACTIONS(755), 1,
      sym__san_capture_symbol,
    ACTIONS(757), 1,
      anon_sym_AT,
    STATE(88), 1,
      sym__san_square,
  [8356] = 5,
    ACTIONS(759), 1,
      sym__san_file,
    ACTIONS(761), 1,
      sym__san_rank,
    ACTIONS(763), 1,
      sym__san_capture_symbol,
    ACTIONS(765), 1,
      anon_sym_AT,
    STATE(160), 1,
      sym__san_square,
  [8372] = 5,
    ACTIONS(767), 1,
      sym__san_file,
    ACTIONS(769), 1,
      sym__san_rank,
    ACTIONS(771), 1,
      sym__san_capture_symbol,
    ACTIONS(773), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__san_square,
  [8388] = 4,
    ACTIONS(775), 1,
      sym__san_file,
    ACTIONS(777), 1,
      sym__san_rank,
    ACTIONS(779), 1,
      sym__san_capture_symbol,
    STATE(25), 1,
      sym__san_square,
  [8401] = 4,
    ACTIONS(781), 1,
      sym__san_file,
    ACTIONS(783), 1,
      sym__san_rank,
    ACTIONS(785), 1,
      sym__san_capture_symbol,
    STATE(136), 1,
      sym__san_square,
  [8414] = 4,
    ACTIONS(787), 1,
      sym__san_file,
    ACTIONS(789), 1,
      sym__san_rank,
    ACTIONS(791), 1,
      sym__san_capture_symbol,
    STATE(14), 1,
      sym__san_square,
  [8427] = 4,
    ACTIONS(793), 1,
      sym__san_file,
    ACTIONS(795), 1,
      sym__san_rank,
    ACTIONS(797), 1,
      sym__san_capture_symbol,
    STATE(76), 1,
      sym__san_square,
  [8440] = 4,
    ACTIONS(799), 1,
      sym__san_file,
    ACTIONS(801), 1,
      sym__san_rank,
    ACTIONS(803), 1,
      sym__san_capture_symbol,
    STATE(34), 1,
      sym__san_square,
  [8453] = 4,
    ACTIONS(805), 1,
      sym__san_file,
    ACTIONS(807), 1,
      sym__san_rank,
    ACTIONS(809), 1,
      sym__san_capture_symbol,
    STATE(179), 1,
      sym__san_square,
  [8466] = 3,
    ACTIONS(811), 1,
      anon_sym_LBRACK,
    ACTIONS(813), 1,
      sym_tagpair_key,
    STATE(223), 1,
      aux_sym_tagpair_delimiter_open_repeat1,
  [8476] = 1,
    ACTIONS(815), 3,
      anon_sym_O,
      anon_sym_0,
      anon_sym_o,
  [8482] = 3,
    ACTIONS(799), 1,
      sym__san_file,
    ACTIONS(803), 1,
      sym__san_capture_symbol,
    STATE(34), 1,
      sym__san_square,
  [8492] = 3,
    ACTIONS(817), 1,
      anon_sym_LBRACK,
    ACTIONS(820), 1,
      sym_tagpair_key,
    STATE(223), 1,
      aux_sym_tagpair_delimiter_open_repeat1,
  [8502] = 2,
    ACTIONS(824), 1,
      aux_sym_inline_comment_text_token1,
    ACTIONS(822), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [8510] = 3,
    ACTIONS(805), 1,
      sym__san_file,
    ACTIONS(809), 1,
      sym__san_capture_symbol,
    STATE(179), 1,
      sym__san_square,
  [8520] = 3,
    ACTIONS(826), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_tagpair_delimiter_close_repeat1,
    STATE(100), 1,
      sym_tagpair_delimiter_close,
  [8530] = 2,
    ACTIONS(830), 1,
      aux_sym_inline_comment_text_token1,
    ACTIONS(828), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [8538] = 3,
    ACTIONS(793), 1,
      sym__san_file,
    ACTIONS(797), 1,
      sym__san_capture_symbol,
    STATE(76), 1,
      sym__san_square,
  [8548] = 2,
    ACTIONS(834), 1,
      aux_sym_inline_comment_text_token1,
    ACTIONS(832), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [8556] = 2,
    ACTIONS(775), 1,
      sym__san_file,
    STATE(26), 1,
      sym__san_square,
  [8563] = 2,
    ACTIONS(781), 1,
      sym__san_file,
    STATE(138), 1,
      sym__san_square,
  [8570] = 2,
    ACTIONS(836), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_inline_comment_delimiter_close,
  [8577] = 2,
    ACTIONS(793), 1,
      sym__san_file,
    STATE(86), 1,
      sym__san_square,
  [8584] = 2,
    ACTIONS(838), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_inline_comment_delimiter_close,
  [8591] = 2,
    ACTIONS(840), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      sym_inline_comment_delimiter_close,
  [8598] = 2,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      sym_variation_delimiter_close,
  [8605] = 2,
    ACTIONS(775), 1,
      sym__san_file,
    STATE(29), 1,
      sym__san_square,
  [8612] = 2,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      sym_variation_delimiter_close,
  [8619] = 2,
    ACTIONS(793), 1,
      sym__san_file,
    STATE(84), 1,
      sym__san_square,
  [8626] = 2,
    ACTIONS(799), 1,
      sym__san_file,
    STATE(36), 1,
      sym__san_square,
  [8633] = 2,
    ACTIONS(799), 1,
      sym__san_file,
    STATE(27), 1,
      sym__san_square,
  [8640] = 2,
    ACTIONS(842), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_inline_comment_delimiter_close,
  [8647] = 2,
    ACTIONS(787), 1,
      sym__san_file,
    STATE(15), 1,
      sym__san_square,
  [8654] = 2,
    ACTIONS(799), 1,
      sym__san_file,
    STATE(30), 1,
      sym__san_square,
  [8661] = 2,
    ACTIONS(844), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      sym_inline_comment_delimiter_close,
  [8668] = 2,
    ACTIONS(793), 1,
      sym__san_file,
    STATE(76), 1,
      sym__san_square,
  [8675] = 2,
    ACTIONS(846), 1,
      anon_sym_RBRACE,
    STATE(183), 1,
      sym_inline_comment_delimiter_close,
  [8682] = 2,
    ACTIONS(793), 1,
      sym__san_file,
    STATE(77), 1,
      sym__san_square,
  [8689] = 2,
    ACTIONS(799), 1,
      sym__san_file,
    STATE(32), 1,
      sym__san_square,
  [8696] = 2,
    ACTIONS(793), 1,
      sym__san_file,
    STATE(78), 1,
      sym__san_square,
  [8703] = 2,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_variation_delimiter_close,
  [8710] = 2,
    ACTIONS(799), 1,
      sym__san_file,
    STATE(34), 1,
      sym__san_square,
  [8717] = 2,
    ACTIONS(805), 1,
      sym__san_file,
    STATE(164), 1,
      sym__san_square,
  [8724] = 2,
    ACTIONS(787), 1,
      sym__san_file,
    STATE(13), 1,
      sym__san_square,
  [8731] = 1,
    ACTIONS(815), 2,
      anon_sym_u00bd,
      aux_sym_result_code_token14,
  [8736] = 2,
    ACTIONS(799), 1,
      sym__san_file,
    STATE(40), 1,
      sym__san_square,
  [8743] = 2,
    ACTIONS(781), 1,
      sym__san_file,
    STATE(137), 1,
      sym__san_square,
  [8750] = 2,
    ACTIONS(793), 1,
      sym__san_file,
    STATE(81), 1,
      sym__san_square,
  [8757] = 2,
    ACTIONS(805), 1,
      sym__san_file,
    STATE(168), 1,
      sym__san_square,
  [8764] = 2,
    ACTIONS(805), 1,
      sym__san_file,
    STATE(179), 1,
      sym__san_square,
  [8771] = 2,
    ACTIONS(805), 1,
      sym__san_file,
    STATE(180), 1,
      sym__san_square,
  [8778] = 2,
    ACTIONS(805), 1,
      sym__san_file,
    STATE(181), 1,
      sym__san_square,
  [8785] = 2,
    ACTIONS(848), 1,
      anon_sym_RBRACE,
    STATE(144), 1,
      sym_inline_comment_delimiter_close,
  [8792] = 2,
    ACTIONS(805), 1,
      sym__san_file,
    STATE(172), 1,
      sym__san_square,
  [8799] = 1,
    ACTIONS(850), 1,
      sym__san_promotable_piece,
  [8803] = 1,
    ACTIONS(852), 1,
      anon_sym_PERCENT,
  [8807] = 1,
    ACTIONS(854), 1,
      anon_sym_RBRACK,
  [8811] = 1,
    ACTIONS(856), 1,
      anon_sym_1,
  [8815] = 1,
    ACTIONS(858), 1,
      sym__san_rank,
  [8819] = 1,
    ACTIONS(860), 1,
      sym_rest_of_line_comment_text,
  [8823] = 1,
    ACTIONS(862), 1,
      anon_sym_RBRACK,
  [8827] = 1,
    ACTIONS(864), 1,
      sym__san_rank,
  [8831] = 1,
    ACTIONS(866), 1,
      sym_rest_of_line_comment_text,
  [8835] = 1,
    ACTIONS(815), 1,
      anon_sym_1,
  [8839] = 1,
    ACTIONS(868), 1,
      anon_sym_2,
  [8843] = 1,
    ACTIONS(870), 1,
      anon_sym_2,
  [8847] = 1,
    ACTIONS(872), 1,
      sym_rest_of_line_comment_text,
  [8851] = 1,
    ACTIONS(537), 1,
      anon_sym_RBRACK,
  [8855] = 1,
    ACTIONS(874), 1,
      sym__san_rank,
  [8859] = 1,
    ACTIONS(876), 1,
      sym__san_promotable_piece,
  [8863] = 1,
    ACTIONS(878), 1,
      ts_builtin_sym_end,
  [8867] = 1,
    ACTIONS(880), 1,
      sym_rest_of_line_comment_text,
  [8871] = 1,
    ACTIONS(882), 1,
      sym_rest_of_line_comment_text,
  [8875] = 1,
    ACTIONS(884), 1,
      anon_sym_AT,
  [8879] = 1,
    ACTIONS(886), 1,
      sym__san_rank,
  [8883] = 1,
    ACTIONS(888), 1,
      sym_rest_of_line_comment_text,
  [8887] = 1,
    ACTIONS(890), 1,
      sym_tagpair_key,
  [8891] = 1,
    ACTIONS(892), 1,
      sym__san_rank,
  [8895] = 1,
    ACTIONS(894), 1,
      sym_rest_of_line_comment_text,
  [8899] = 1,
    ACTIONS(896), 1,
      sym__san_promotable_piece,
  [8903] = 1,
    ACTIONS(898), 1,
      sym__san_rank,
  [8907] = 1,
    ACTIONS(900), 1,
      sym_rest_of_line_comment_text,
  [8911] = 1,
    ACTIONS(902), 1,
      sym_rest_of_line_comment_text,
  [8915] = 1,
    ACTIONS(904), 1,
      anon_sym_AT,
  [8919] = 1,
    ACTIONS(906), 1,
      anon_sym_AT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 102,
  [SMALL_STATE(4)] = 204,
  [SMALL_STATE(5)] = 314,
  [SMALL_STATE(6)] = 415,
  [SMALL_STATE(7)] = 516,
  [SMALL_STATE(8)] = 625,
  [SMALL_STATE(9)] = 683,
  [SMALL_STATE(10)] = 754,
  [SMALL_STATE(11)] = 825,
  [SMALL_STATE(12)] = 896,
  [SMALL_STATE(13)] = 945,
  [SMALL_STATE(14)] = 999,
  [SMALL_STATE(15)] = 1053,
  [SMALL_STATE(16)] = 1107,
  [SMALL_STATE(17)] = 1154,
  [SMALL_STATE(18)] = 1211,
  [SMALL_STATE(19)] = 1274,
  [SMALL_STATE(20)] = 1337,
  [SMALL_STATE(21)] = 1446,
  [SMALL_STATE(22)] = 1555,
  [SMALL_STATE(23)] = 1606,
  [SMALL_STATE(24)] = 1652,
  [SMALL_STATE(25)] = 1697,
  [SMALL_STATE(26)] = 1748,
  [SMALL_STATE(27)] = 1799,
  [SMALL_STATE(28)] = 1844,
  [SMALL_STATE(29)] = 1889,
  [SMALL_STATE(30)] = 1940,
  [SMALL_STATE(31)] = 1985,
  [SMALL_STATE(32)] = 2032,
  [SMALL_STATE(33)] = 2077,
  [SMALL_STATE(34)] = 2122,
  [SMALL_STATE(35)] = 2167,
  [SMALL_STATE(36)] = 2212,
  [SMALL_STATE(37)] = 2257,
  [SMALL_STATE(38)] = 2302,
  [SMALL_STATE(39)] = 2349,
  [SMALL_STATE(40)] = 2394,
  [SMALL_STATE(41)] = 2439,
  [SMALL_STATE(42)] = 2484,
  [SMALL_STATE(43)] = 2531,
  [SMALL_STATE(44)] = 2575,
  [SMALL_STATE(45)] = 2619,
  [SMALL_STATE(46)] = 2663,
  [SMALL_STATE(47)] = 2707,
  [SMALL_STATE(48)] = 2751,
  [SMALL_STATE(49)] = 2795,
  [SMALL_STATE(50)] = 2839,
  [SMALL_STATE(51)] = 2883,
  [SMALL_STATE(52)] = 2927,
  [SMALL_STATE(53)] = 2973,
  [SMALL_STATE(54)] = 3023,
  [SMALL_STATE(55)] = 3067,
  [SMALL_STATE(56)] = 3111,
  [SMALL_STATE(57)] = 3159,
  [SMALL_STATE(58)] = 3203,
  [SMALL_STATE(59)] = 3247,
  [SMALL_STATE(60)] = 3291,
  [SMALL_STATE(61)] = 3335,
  [SMALL_STATE(62)] = 3379,
  [SMALL_STATE(63)] = 3428,
  [SMALL_STATE(64)] = 3471,
  [SMALL_STATE(65)] = 3518,
  [SMALL_STATE(66)] = 3617,
  [SMALL_STATE(67)] = 3660,
  [SMALL_STATE(68)] = 3707,
  [SMALL_STATE(69)] = 3750,
  [SMALL_STATE(70)] = 3849,
  [SMALL_STATE(71)] = 3892,
  [SMALL_STATE(72)] = 3934,
  [SMALL_STATE(73)] = 3976,
  [SMALL_STATE(74)] = 4020,
  [SMALL_STATE(75)] = 4062,
  [SMALL_STATE(76)] = 4158,
  [SMALL_STATE(77)] = 4200,
  [SMALL_STATE(78)] = 4242,
  [SMALL_STATE(79)] = 4284,
  [SMALL_STATE(80)] = 4328,
  [SMALL_STATE(81)] = 4370,
  [SMALL_STATE(82)] = 4412,
  [SMALL_STATE(83)] = 4456,
  [SMALL_STATE(84)] = 4498,
  [SMALL_STATE(85)] = 4540,
  [SMALL_STATE(86)] = 4584,
  [SMALL_STATE(87)] = 4626,
  [SMALL_STATE(88)] = 4668,
  [SMALL_STATE(89)] = 4710,
  [SMALL_STATE(90)] = 4751,
  [SMALL_STATE(91)] = 4792,
  [SMALL_STATE(92)] = 4833,
  [SMALL_STATE(93)] = 4874,
  [SMALL_STATE(94)] = 4915,
  [SMALL_STATE(95)] = 4956,
  [SMALL_STATE(96)] = 4997,
  [SMALL_STATE(97)] = 5038,
  [SMALL_STATE(98)] = 5079,
  [SMALL_STATE(99)] = 5120,
  [SMALL_STATE(100)] = 5161,
  [SMALL_STATE(101)] = 5202,
  [SMALL_STATE(102)] = 5243,
  [SMALL_STATE(103)] = 5284,
  [SMALL_STATE(104)] = 5325,
  [SMALL_STATE(105)] = 5366,
  [SMALL_STATE(106)] = 5407,
  [SMALL_STATE(107)] = 5448,
  [SMALL_STATE(108)] = 5489,
  [SMALL_STATE(109)] = 5530,
  [SMALL_STATE(110)] = 5571,
  [SMALL_STATE(111)] = 5612,
  [SMALL_STATE(112)] = 5696,
  [SMALL_STATE(113)] = 5780,
  [SMALL_STATE(114)] = 5864,
  [SMALL_STATE(115)] = 5907,
  [SMALL_STATE(116)] = 5985,
  [SMALL_STATE(117)] = 6063,
  [SMALL_STATE(118)] = 6098,
  [SMALL_STATE(119)] = 6135,
  [SMALL_STATE(120)] = 6172,
  [SMALL_STATE(121)] = 6209,
  [SMALL_STATE(122)] = 6243,
  [SMALL_STATE(123)] = 6277,
  [SMALL_STATE(124)] = 6308,
  [SMALL_STATE(125)] = 6350,
  [SMALL_STATE(126)] = 6382,
  [SMALL_STATE(127)] = 6414,
  [SMALL_STATE(128)] = 6455,
  [SMALL_STATE(129)] = 6496,
  [SMALL_STATE(130)] = 6534,
  [SMALL_STATE(131)] = 6566,
  [SMALL_STATE(132)] = 6598,
  [SMALL_STATE(133)] = 6634,
  [SMALL_STATE(134)] = 6666,
  [SMALL_STATE(135)] = 6704,
  [SMALL_STATE(136)] = 6729,
  [SMALL_STATE(137)] = 6759,
  [SMALL_STATE(138)] = 6789,
  [SMALL_STATE(139)] = 6819,
  [SMALL_STATE(140)] = 6846,
  [SMALL_STATE(141)] = 6871,
  [SMALL_STATE(142)] = 6894,
  [SMALL_STATE(143)] = 6916,
  [SMALL_STATE(144)] = 6938,
  [SMALL_STATE(145)] = 6960,
  [SMALL_STATE(146)] = 6982,
  [SMALL_STATE(147)] = 7004,
  [SMALL_STATE(148)] = 7026,
  [SMALL_STATE(149)] = 7048,
  [SMALL_STATE(150)] = 7070,
  [SMALL_STATE(151)] = 7092,
  [SMALL_STATE(152)] = 7114,
  [SMALL_STATE(153)] = 7136,
  [SMALL_STATE(154)] = 7158,
  [SMALL_STATE(155)] = 7180,
  [SMALL_STATE(156)] = 7204,
  [SMALL_STATE(157)] = 7226,
  [SMALL_STATE(158)] = 7248,
  [SMALL_STATE(159)] = 7270,
  [SMALL_STATE(160)] = 7292,
  [SMALL_STATE(161)] = 7313,
  [SMALL_STATE(162)] = 7334,
  [SMALL_STATE(163)] = 7357,
  [SMALL_STATE(164)] = 7378,
  [SMALL_STATE(165)] = 7399,
  [SMALL_STATE(166)] = 7420,
  [SMALL_STATE(167)] = 7443,
  [SMALL_STATE(168)] = 7462,
  [SMALL_STATE(169)] = 7483,
  [SMALL_STATE(170)] = 7504,
  [SMALL_STATE(171)] = 7525,
  [SMALL_STATE(172)] = 7548,
  [SMALL_STATE(173)] = 7569,
  [SMALL_STATE(174)] = 7588,
  [SMALL_STATE(175)] = 7609,
  [SMALL_STATE(176)] = 7630,
  [SMALL_STATE(177)] = 7649,
  [SMALL_STATE(178)] = 7670,
  [SMALL_STATE(179)] = 7691,
  [SMALL_STATE(180)] = 7712,
  [SMALL_STATE(181)] = 7733,
  [SMALL_STATE(182)] = 7754,
  [SMALL_STATE(183)] = 7775,
  [SMALL_STATE(184)] = 7795,
  [SMALL_STATE(185)] = 7815,
  [SMALL_STATE(186)] = 7835,
  [SMALL_STATE(187)] = 7855,
  [SMALL_STATE(188)] = 7875,
  [SMALL_STATE(189)] = 7895,
  [SMALL_STATE(190)] = 7915,
  [SMALL_STATE(191)] = 7935,
  [SMALL_STATE(192)] = 7955,
  [SMALL_STATE(193)] = 7975,
  [SMALL_STATE(194)] = 7995,
  [SMALL_STATE(195)] = 8015,
  [SMALL_STATE(196)] = 8035,
  [SMALL_STATE(197)] = 8055,
  [SMALL_STATE(198)] = 8075,
  [SMALL_STATE(199)] = 8088,
  [SMALL_STATE(200)] = 8111,
  [SMALL_STATE(201)] = 8134,
  [SMALL_STATE(202)] = 8157,
  [SMALL_STATE(203)] = 8180,
  [SMALL_STATE(204)] = 8203,
  [SMALL_STATE(205)] = 8226,
  [SMALL_STATE(206)] = 8249,
  [SMALL_STATE(207)] = 8269,
  [SMALL_STATE(208)] = 8289,
  [SMALL_STATE(209)] = 8306,
  [SMALL_STATE(210)] = 8323,
  [SMALL_STATE(211)] = 8340,
  [SMALL_STATE(212)] = 8356,
  [SMALL_STATE(213)] = 8372,
  [SMALL_STATE(214)] = 8388,
  [SMALL_STATE(215)] = 8401,
  [SMALL_STATE(216)] = 8414,
  [SMALL_STATE(217)] = 8427,
  [SMALL_STATE(218)] = 8440,
  [SMALL_STATE(219)] = 8453,
  [SMALL_STATE(220)] = 8466,
  [SMALL_STATE(221)] = 8476,
  [SMALL_STATE(222)] = 8482,
  [SMALL_STATE(223)] = 8492,
  [SMALL_STATE(224)] = 8502,
  [SMALL_STATE(225)] = 8510,
  [SMALL_STATE(226)] = 8520,
  [SMALL_STATE(227)] = 8530,
  [SMALL_STATE(228)] = 8538,
  [SMALL_STATE(229)] = 8548,
  [SMALL_STATE(230)] = 8556,
  [SMALL_STATE(231)] = 8563,
  [SMALL_STATE(232)] = 8570,
  [SMALL_STATE(233)] = 8577,
  [SMALL_STATE(234)] = 8584,
  [SMALL_STATE(235)] = 8591,
  [SMALL_STATE(236)] = 8598,
  [SMALL_STATE(237)] = 8605,
  [SMALL_STATE(238)] = 8612,
  [SMALL_STATE(239)] = 8619,
  [SMALL_STATE(240)] = 8626,
  [SMALL_STATE(241)] = 8633,
  [SMALL_STATE(242)] = 8640,
  [SMALL_STATE(243)] = 8647,
  [SMALL_STATE(244)] = 8654,
  [SMALL_STATE(245)] = 8661,
  [SMALL_STATE(246)] = 8668,
  [SMALL_STATE(247)] = 8675,
  [SMALL_STATE(248)] = 8682,
  [SMALL_STATE(249)] = 8689,
  [SMALL_STATE(250)] = 8696,
  [SMALL_STATE(251)] = 8703,
  [SMALL_STATE(252)] = 8710,
  [SMALL_STATE(253)] = 8717,
  [SMALL_STATE(254)] = 8724,
  [SMALL_STATE(255)] = 8731,
  [SMALL_STATE(256)] = 8736,
  [SMALL_STATE(257)] = 8743,
  [SMALL_STATE(258)] = 8750,
  [SMALL_STATE(259)] = 8757,
  [SMALL_STATE(260)] = 8764,
  [SMALL_STATE(261)] = 8771,
  [SMALL_STATE(262)] = 8778,
  [SMALL_STATE(263)] = 8785,
  [SMALL_STATE(264)] = 8792,
  [SMALL_STATE(265)] = 8799,
  [SMALL_STATE(266)] = 8803,
  [SMALL_STATE(267)] = 8807,
  [SMALL_STATE(268)] = 8811,
  [SMALL_STATE(269)] = 8815,
  [SMALL_STATE(270)] = 8819,
  [SMALL_STATE(271)] = 8823,
  [SMALL_STATE(272)] = 8827,
  [SMALL_STATE(273)] = 8831,
  [SMALL_STATE(274)] = 8835,
  [SMALL_STATE(275)] = 8839,
  [SMALL_STATE(276)] = 8843,
  [SMALL_STATE(277)] = 8847,
  [SMALL_STATE(278)] = 8851,
  [SMALL_STATE(279)] = 8855,
  [SMALL_STATE(280)] = 8859,
  [SMALL_STATE(281)] = 8863,
  [SMALL_STATE(282)] = 8867,
  [SMALL_STATE(283)] = 8871,
  [SMALL_STATE(284)] = 8875,
  [SMALL_STATE(285)] = 8879,
  [SMALL_STATE(286)] = 8883,
  [SMALL_STATE(287)] = 8887,
  [SMALL_STATE(288)] = 8891,
  [SMALL_STATE(289)] = 8895,
  [SMALL_STATE(290)] = 8899,
  [SMALL_STATE(291)] = 8903,
  [SMALL_STATE(292)] = 8907,
  [SMALL_STATE(293)] = 8911,
  [SMALL_STATE(294)] = 8915,
  [SMALL_STATE(295)] = 8919,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27), SHIFT_REPEAT(277),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27), SHIFT_REPEAT(111),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27), SHIFT_REPEAT(229),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27), SHIFT_REPEAT(60),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27), SHIFT_REPEAT(216),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27), SHIFT_REPEAT(213),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27), SHIFT_REPEAT(295),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27), SHIFT_REPEAT(256),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27), SHIFT_REPEAT(42),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27), SHIFT_REPEAT(61),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27), SHIFT_REPEAT(266),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movetext, 1, 0, 7),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_movetext, 1, 0, 7),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27), SHIFT_REPEAT(277),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27), SHIFT_REPEAT(113),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27), SHIFT_REPEAT(229),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27), SHIFT_REPEAT(91),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27), SHIFT_REPEAT(214),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27), SHIFT_REPEAT(211),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27), SHIFT_REPEAT(284),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27), SHIFT_REPEAT(284),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27), SHIFT_REPEAT(233),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27), SHIFT_REPEAT(73),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 2, 0, 27), SHIFT_REPEAT(101),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 34), SHIFT_REPEAT(9),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 34), SHIFT_REPEAT(277),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 34), SHIFT_REPEAT(220),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 34),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 34), SHIFT_REPEAT(229),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 34), SHIFT_REPEAT(266),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 1, 0, 6),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2, 0, 22),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_square, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_square, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move_by_coordinates, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move_by_coordinates, 3, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, 0, 20),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, 0, 20),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 31),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 31),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 26),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 26), SHIFT_REPEAT(277),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 26), SHIFT_REPEAT(134),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 26), SHIFT_REPEAT(220),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 26), SHIFT_REPEAT(113),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 26), SHIFT_REPEAT(229),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 26), SHIFT_REPEAT(91),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 26), SHIFT_REPEAT(214),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 26), SHIFT_REPEAT(211),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 26), SHIFT_REPEAT(284),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 26), SHIFT_REPEAT(233),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 26), SHIFT_REPEAT(73),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 26), SHIFT_REPEAT(101),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 26), SHIFT_REPEAT(266),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, 0, 10),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_promotion, 2, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_promotion, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 4, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 4, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_pawn, 4, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_pawn, 4, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 3, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 3, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 2, 0, 19),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 2, 0, 19),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_major_or_minor_piece, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_major_or_minor_piece, 3, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lan_move_by_coordinates, 4, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lan_move_by_coordinates, 4, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 3, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 5, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 5, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lan_move, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lan_move, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_drop_pawn, 2, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_drop_pawn, 2, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__san_move_major_or_minor_piece, 2, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__san_move_major_or_minor_piece, 2, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 1, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 8),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 8),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lan_move, 2, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lan_move, 2, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 2, 0, 24),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 2, 0, 24),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation_delimiter_close, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation_delimiter_close, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 3, 0, 29),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 3, 0, 29),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment_delimiter_close, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment_delimiter_close, 1, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 5),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 5),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation, 2, 0, 14),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variation, 2, 0, 14),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 5), REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 5), REDUCE(aux_sym_freestanding_comment_repeat1, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 3, 0, 36),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 3, 0, 36),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 9),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 9),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_san_move, 2, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_san_move, 2, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment, 3, 0, 19),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rest_of_line_comment, 3, 0, 19),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movetext_repeat1, 1, 0, 7),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movetext_repeat1, 1, 0, 7),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movetext_element, 1, 0, 2),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movetext_element, 1, 0, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tagpair_delimiter_close_repeat1, 2, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tagpair_delimiter_close_repeat1, 2, 0, 0),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tagpair_delimiter_close_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 2, 0, 25),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tagpair_delimiter_close, 1, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair_delimiter_close, 1, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series_of_games, 1, 0, 4),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, 0, 5),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, 0, 5),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 1, 0, 6),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 1, 0, 6),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tagpair, 4, 0, 41),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair, 4, 0, 41),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 30), SHIFT_REPEAT(277),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 30), SHIFT_REPEAT(112),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 30),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 30), SHIFT_REPEAT(229),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 30), SHIFT_REPEAT(188),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 30), SHIFT_REPEAT(215),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 30), SHIFT_REPEAT(212),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 30), SHIFT_REPEAT(294),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 30), SHIFT_REPEAT(294),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 30), SHIFT_REPEAT(253),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 30), SHIFT_REPEAT(171),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 30), SHIFT_REPEAT(184),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 2, 0, 30), SHIFT_REPEAT(266),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variation_movetext, 1, 0, 15),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote, 1, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 1, 0, 0),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tagpair_value_contents_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_tagpair_value_contents, 1, 0, 0), SHIFT(118),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote, 1, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trailing_garbage_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_trailing_garbage_repeat1, 2, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trailing_garbage_repeat1, 2, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trailing_garbage, 1, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trailing_garbage, 1, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_freestanding_comment, 1, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_freestanding_comment, 1, 0, 0),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_freestanding_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, 0, 38),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, 0, 38),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, 0, 23),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, 0, 23),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 5, 0, 42),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 5, 0, 42),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 1, 0, 3),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 1, 0, 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 32),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 32),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 7, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 7, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 2, 0, 21),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 2, 0, 21),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 1, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 1, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_code, 3, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_code, 3, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 35),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 35),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4, 0, 39),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 4, 0, 39),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 18),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_series_of_games_repeat1, 2, 0, 18),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 3, 0, 33),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_game, 3, 0, 33),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 12),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 12),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_variation, 2, 0, 28),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_variation, 2, 0, 28),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 11),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 11),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 13),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 13),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_variation, 3, 0, 37),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_variation, 3, 0, 37),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 17),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 17),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variation_movetext_element, 1, 0, 16),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variation_movetext_element, 1, 0, 16),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, 0, 15),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variation_movetext_repeat1, 1, 0, 15),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [731] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_comment_text_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_comment_text_repeat1, 2, 0, 0),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_comment_text_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [739] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__recursive_inline_comment_text, 2, 0, 0), SHIFT_REPEAT(207),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__recursive_inline_comment_text, 2, 0, 0),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__recursive_inline_comment_text, 2, 0, 0), SHIFT_REPEAT(209),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment_text, 1, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagpair_delimiter_open, 1, 0, 0),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [817] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tagpair_delimiter_open_repeat1, 2, 0, 0), SHIFT_REPEAT(223),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tagpair_delimiter_open_repeat1, 2, 0, 0),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__recursive_inline_comment, 3, 0, 0),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recursive_inline_comment, 3, 0, 0),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__recursive_inline_comment, 2, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recursive_inline_comment, 2, 0, 0),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment_delimiter_open, 1, 0, 0),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment_delimiter_open, 1, 0, 0),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 2, 0, 40),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagpair_value, 3, 0, 43),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment_delimiter_open, 1, 0, 0),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [878] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_comment_delimiter_open, 2, 0, 0),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__full_line_comment_delimiter_bol_assertion = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__full_line_comment_delimiter_bol_assertion] = sym__full_line_comment_delimiter_bol_assertion,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__full_line_comment_delimiter_bol_assertion] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_pgn_external_scanner_create(void);
void tree_sitter_pgn_external_scanner_destroy(void *);
bool tree_sitter_pgn_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_pgn_external_scanner_serialize(void *, char *);
void tree_sitter_pgn_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_pgn(void) {
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
      tree_sitter_pgn_external_scanner_create,
      tree_sitter_pgn_external_scanner_destroy,
      tree_sitter_pgn_external_scanner_scan,
      tree_sitter_pgn_external_scanner_serialize,
      tree_sitter_pgn_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

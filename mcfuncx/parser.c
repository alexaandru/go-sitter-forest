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
#define STATE_COUNT 232
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 166
#define ALIAS_COUNT 1
#define TOKEN_COUNT 109
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 22

enum ts_symbol_identifiers {
  aux_sym_root_token1 = 1,
  anon_sym_SLASH = 2,
  anon_sym_SPACE = 3,
  anon_sym_run = 4,
  anon_sym_DOLLAR = 5,
  aux_sym_command_name_token1 = 6,
  anon_sym_STAR = 7,
  aux_sym__identifier_plain_token1 = 8,
  sym__identifier_uuid = 9,
  anon_sym_DOT = 10,
  anon_sym_DASH = 11,
  anon_sym_COLON = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  sym__escape_sequence_backslash = 15,
  sym__escape_sequence_section = 16,
  sym__escape_sequence_percent = 17,
  anon_sym_DQUOTE = 18,
  aux_sym__string_token1 = 19,
  anon_sym_SQUOTE = 20,
  aux_sym__string_token2 = 21,
  sym__integer = 22,
  sym__float = 23,
  anon_sym_DOT_DOT = 24,
  anon_sym_true = 25,
  anon_sym_false = 26,
  anon_sym_TILDE = 27,
  anon_sym_CARET = 28,
  anon_sym_EQ = 29,
  anon_sym_EQ_BANG = 30,
  anon_sym_COMMA = 31,
  anon_sym_LBRACK = 32,
  anon_sym_RBRACK = 33,
  anon_sym_PLUS_EQ = 34,
  anon_sym_DASH_EQ = 35,
  anon_sym_STAR_EQ = 36,
  anon_sym_SLASH_EQ = 37,
  anon_sym_PERCENT_EQ = 38,
  anon_sym_GT_LT = 39,
  anon_sym_GT = 40,
  anon_sym_LT = 41,
  anon_sym_GT_EQ = 42,
  anon_sym_LT_EQ = 43,
  anon_sym_b = 44,
  anon_sym_B = 45,
  anon_sym_l = 46,
  anon_sym_L = 47,
  anon_sym_s = 48,
  anon_sym_S = 49,
  anon_sym_f = 50,
  anon_sym_F = 51,
  anon_sym_d = 52,
  anon_sym_D = 53,
  anon_sym_SEMI = 54,
  anon_sym_I = 55,
  sym_comment = 56,
  anon_sym_detect = 57,
  anon_sym_align = 58,
  anon_sym_anchored = 59,
  anon_sym_as = 60,
  anon_sym_at = 61,
  anon_sym_facing = 62,
  anon_sym_in = 63,
  anon_sym_on = 64,
  anon_sym_positioned = 65,
  anon_sym_rotated = 66,
  anon_sym_store = 67,
  anon_sym_block = 68,
  anon_sym_bossbar = 69,
  anon_sym_entity = 70,
  anon_sym_score = 71,
  anon_sym_storage = 72,
  anon_sym_summon = 73,
  anon_sym_if = 74,
  anon_sym_unless = 75,
  anon_sym_biome = 76,
  anon_sym_blocks = 77,
  anon_sym_data = 78,
  anon_sym_dimension = 79,
  anon_sym_function = 80,
  anon_sym_loaded = 81,
  anon_sym_predicate = 82,
  anon_sym_matches = 83,
  anon_sym_structure = 84,
  anon_sym_poi = 85,
  anon_sym_objectives = 86,
  anon_sym_list = 87,
  anon_sym_add = 88,
  anon_sym_remove = 89,
  anon_sym_setdisplay = 90,
  anon_sym_modify = 91,
  anon_sym_players = 92,
  anon_sym_get = 93,
  anon_sym_set = 94,
  anon_sym_random = 95,
  anon_sym_reset = 96,
  anon_sym_display = 97,
  anon_sym_test = 98,
  anon_sym_enable = 99,
  anon_sym_disable = 100,
  anon_sym_operation = 101,
  anon_sym_stop = 102,
  anon_sym_dummy = 103,
  anon_sym_sidebar = 104,
  anon_sym_belowname = 105,
  anon_sym_result = 106,
  anon_sym_success = 107,
  anon_sym_with = 108,
  sym_root = 109,
  sym_command = 110,
  sym__command_params = 111,
  sym_command_name = 112,
  sym__C_identifier = 113,
  sym_identifier = 114,
  sym__identifier_plain = 115,
  sym__identifier_chain = 116,
  sym__identifier_path = 117,
  sym__identifier_namespaced = 118,
  sym__identifier_macro = 119,
  sym_identifier_composite = 120,
  sym_escape_sequence = 121,
  sym__string = 122,
  sym_string = 123,
  sym_integer = 124,
  sym_float = 125,
  sym__C_number = 126,
  sym_range = 127,
  sym_boolean = 128,
  sym_axis = 129,
  sym__keyable = 130,
  sym__valuable = 131,
  sym__equal_ky = 132,
  sym__colon_ky = 133,
  sym_object_like = 134,
  sym__itemable = 135,
  sym_array_like = 136,
  sym_operator = 137,
  sym__C_nbt_number = 138,
  sym_nbt_byte = 139,
  sym_nbt_long = 140,
  sym_nbt_short = 141,
  sym_nbt_float = 142,
  sym_nbt_double = 143,
  sym__C_nbt_array = 144,
  sym_nbt_long_array = 145,
  sym_nbt_integer_array = 146,
  sym_nbt_byte_array = 147,
  sym_nbt_path = 148,
  sym_subcommand_keyword = 149,
  aux_sym_root_repeat1 = 150,
  aux_sym_command_repeat1 = 151,
  aux_sym_command_name_repeat1 = 152,
  aux_sym__identifier_plain_repeat1 = 153,
  aux_sym__identifier_chain_repeat1 = 154,
  aux_sym__identifier_path_repeat1 = 155,
  aux_sym_identifier_composite_repeat1 = 156,
  aux_sym__string_repeat1 = 157,
  aux_sym__string_repeat2 = 158,
  aux_sym__equal_ky_repeat1 = 159,
  aux_sym__colon_ky_repeat1 = 160,
  aux_sym_array_like_repeat1 = 161,
  aux_sym_nbt_long_array_repeat1 = 162,
  aux_sym_nbt_integer_array_repeat1 = 163,
  aux_sym_nbt_byte_array_repeat1 = 164,
  aux_sym_nbt_path_repeat1 = 165,
  alias_sym_macro_key = 166,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_root_token1] = "root_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_SPACE] = " ",
  [anon_sym_run] = "subcommand_keyword",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_command_name_token1] = "command_name_token1",
  [anon_sym_STAR] = "*",
  [aux_sym__identifier_plain_token1] = "_identifier_plain_token1",
  [sym__identifier_uuid] = "_identifier_uuid",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH] = "-",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__escape_sequence_backslash] = "_escape_sequence_backslash",
  [sym__escape_sequence_section] = "_escape_sequence_section",
  [sym__escape_sequence_percent] = "_escape_sequence_percent",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_token1] = "_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__string_token2] = "_string_token2",
  [sym__integer] = "_integer",
  [sym__float] = "_float",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_TILDE] = "~",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_BANG] = "=!",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_GT_LT] = "><",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_b] = "b",
  [anon_sym_B] = "B",
  [anon_sym_l] = "l",
  [anon_sym_L] = "L",
  [anon_sym_s] = "s",
  [anon_sym_S] = "S",
  [anon_sym_f] = "f",
  [anon_sym_F] = "F",
  [anon_sym_d] = "d",
  [anon_sym_D] = "D",
  [anon_sym_SEMI] = ";",
  [anon_sym_I] = "I",
  [sym_comment] = "comment",
  [anon_sym_detect] = "detect",
  [anon_sym_align] = "align",
  [anon_sym_anchored] = "anchored",
  [anon_sym_as] = "as",
  [anon_sym_at] = "at",
  [anon_sym_facing] = "facing",
  [anon_sym_in] = "in",
  [anon_sym_on] = "on",
  [anon_sym_positioned] = "positioned",
  [anon_sym_rotated] = "rotated",
  [anon_sym_store] = "store",
  [anon_sym_block] = "block",
  [anon_sym_bossbar] = "bossbar",
  [anon_sym_entity] = "entity",
  [anon_sym_score] = "score",
  [anon_sym_storage] = "storage",
  [anon_sym_summon] = "summon",
  [anon_sym_if] = "if",
  [anon_sym_unless] = "unless",
  [anon_sym_biome] = "biome",
  [anon_sym_blocks] = "blocks",
  [anon_sym_data] = "data",
  [anon_sym_dimension] = "dimension",
  [anon_sym_function] = "function",
  [anon_sym_loaded] = "loaded",
  [anon_sym_predicate] = "predicate",
  [anon_sym_matches] = "matches",
  [anon_sym_structure] = "structure",
  [anon_sym_poi] = "poi",
  [anon_sym_objectives] = "objectives",
  [anon_sym_list] = "list",
  [anon_sym_add] = "add",
  [anon_sym_remove] = "remove",
  [anon_sym_setdisplay] = "setdisplay",
  [anon_sym_modify] = "modify",
  [anon_sym_players] = "players",
  [anon_sym_get] = "get",
  [anon_sym_set] = "set",
  [anon_sym_random] = "random",
  [anon_sym_reset] = "reset",
  [anon_sym_display] = "display",
  [anon_sym_test] = "test",
  [anon_sym_enable] = "enable",
  [anon_sym_disable] = "disable",
  [anon_sym_operation] = "operation",
  [anon_sym_stop] = "stop",
  [anon_sym_dummy] = "dummy",
  [anon_sym_sidebar] = "sidebar",
  [anon_sym_belowname] = "belowname",
  [anon_sym_result] = "result",
  [anon_sym_success] = "success",
  [anon_sym_with] = "with",
  [sym_root] = "root",
  [sym_command] = "command",
  [sym__command_params] = "_command_params",
  [sym_command_name] = "command_name",
  [sym__C_identifier] = "_C_identifier",
  [sym_identifier] = "identifier",
  [sym__identifier_plain] = "_identifier_plain",
  [sym__identifier_chain] = "_identifier_chain",
  [sym__identifier_path] = "_identifier_path",
  [sym__identifier_namespaced] = "_identifier_namespaced",
  [sym__identifier_macro] = "_identifier_macro",
  [sym_identifier_composite] = "identifier_composite",
  [sym_escape_sequence] = "escape_sequence",
  [sym__string] = "_string",
  [sym_string] = "string",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym__C_number] = "_C_number",
  [sym_range] = "range",
  [sym_boolean] = "boolean",
  [sym_axis] = "axis",
  [sym__keyable] = "_keyable",
  [sym__valuable] = "_valuable",
  [sym__equal_ky] = "_equal_ky",
  [sym__colon_ky] = "_colon_ky",
  [sym_object_like] = "object_like",
  [sym__itemable] = "_itemable",
  [sym_array_like] = "array_like",
  [sym_operator] = "operator",
  [sym__C_nbt_number] = "_C_nbt_number",
  [sym_nbt_byte] = "nbt_byte",
  [sym_nbt_long] = "nbt_long",
  [sym_nbt_short] = "nbt_short",
  [sym_nbt_float] = "nbt_float",
  [sym_nbt_double] = "nbt_double",
  [sym__C_nbt_array] = "_C_nbt_array",
  [sym_nbt_long_array] = "nbt_long_array",
  [sym_nbt_integer_array] = "nbt_integer_array",
  [sym_nbt_byte_array] = "nbt_byte_array",
  [sym_nbt_path] = "nbt_path",
  [sym_subcommand_keyword] = "subcommand_keyword",
  [aux_sym_root_repeat1] = "root_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_command_name_repeat1] = "command_name_repeat1",
  [aux_sym__identifier_plain_repeat1] = "_identifier_plain_repeat1",
  [aux_sym__identifier_chain_repeat1] = "_identifier_chain_repeat1",
  [aux_sym__identifier_path_repeat1] = "_identifier_path_repeat1",
  [aux_sym_identifier_composite_repeat1] = "identifier_composite_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
  [aux_sym__string_repeat2] = "_string_repeat2",
  [aux_sym__equal_ky_repeat1] = "_equal_ky_repeat1",
  [aux_sym__colon_ky_repeat1] = "_colon_ky_repeat1",
  [aux_sym_array_like_repeat1] = "array_like_repeat1",
  [aux_sym_nbt_long_array_repeat1] = "nbt_long_array_repeat1",
  [aux_sym_nbt_integer_array_repeat1] = "nbt_integer_array_repeat1",
  [aux_sym_nbt_byte_array_repeat1] = "nbt_byte_array_repeat1",
  [aux_sym_nbt_path_repeat1] = "nbt_path_repeat1",
  [alias_sym_macro_key] = "macro_key",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_root_token1] = aux_sym_root_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_run] = sym_subcommand_keyword,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_command_name_token1] = aux_sym_command_name_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym__identifier_plain_token1] = aux_sym__identifier_plain_token1,
  [sym__identifier_uuid] = sym__identifier_uuid,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__escape_sequence_backslash] = sym__escape_sequence_backslash,
  [sym__escape_sequence_section] = sym__escape_sequence_section,
  [sym__escape_sequence_percent] = sym__escape_sequence_percent,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_token1] = aux_sym__string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__string_token2] = aux_sym__string_token2,
  [sym__integer] = sym__integer,
  [sym__float] = sym__float,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_BANG] = anon_sym_EQ_BANG,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_GT_LT] = anon_sym_GT_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_B] = anon_sym_B,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_L] = anon_sym_L,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_S] = anon_sym_S,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_F] = anon_sym_F,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_I] = anon_sym_I,
  [sym_comment] = sym_comment,
  [anon_sym_detect] = anon_sym_detect,
  [anon_sym_align] = anon_sym_align,
  [anon_sym_anchored] = anon_sym_anchored,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_at] = anon_sym_at,
  [anon_sym_facing] = anon_sym_facing,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_positioned] = anon_sym_positioned,
  [anon_sym_rotated] = anon_sym_rotated,
  [anon_sym_store] = anon_sym_store,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_bossbar] = anon_sym_bossbar,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_score] = anon_sym_score,
  [anon_sym_storage] = anon_sym_storage,
  [anon_sym_summon] = anon_sym_summon,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_biome] = anon_sym_biome,
  [anon_sym_blocks] = anon_sym_blocks,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_dimension] = anon_sym_dimension,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_loaded] = anon_sym_loaded,
  [anon_sym_predicate] = anon_sym_predicate,
  [anon_sym_matches] = anon_sym_matches,
  [anon_sym_structure] = anon_sym_structure,
  [anon_sym_poi] = anon_sym_poi,
  [anon_sym_objectives] = anon_sym_objectives,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_remove] = anon_sym_remove,
  [anon_sym_setdisplay] = anon_sym_setdisplay,
  [anon_sym_modify] = anon_sym_modify,
  [anon_sym_players] = anon_sym_players,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_random] = anon_sym_random,
  [anon_sym_reset] = anon_sym_reset,
  [anon_sym_display] = anon_sym_display,
  [anon_sym_test] = anon_sym_test,
  [anon_sym_enable] = anon_sym_enable,
  [anon_sym_disable] = anon_sym_disable,
  [anon_sym_operation] = anon_sym_operation,
  [anon_sym_stop] = anon_sym_stop,
  [anon_sym_dummy] = anon_sym_dummy,
  [anon_sym_sidebar] = anon_sym_sidebar,
  [anon_sym_belowname] = anon_sym_belowname,
  [anon_sym_result] = anon_sym_result,
  [anon_sym_success] = anon_sym_success,
  [anon_sym_with] = anon_sym_with,
  [sym_root] = sym_root,
  [sym_command] = sym_command,
  [sym__command_params] = sym__command_params,
  [sym_command_name] = sym_command_name,
  [sym__C_identifier] = sym__C_identifier,
  [sym_identifier] = sym_identifier,
  [sym__identifier_plain] = sym__identifier_plain,
  [sym__identifier_chain] = sym__identifier_chain,
  [sym__identifier_path] = sym__identifier_path,
  [sym__identifier_namespaced] = sym__identifier_namespaced,
  [sym__identifier_macro] = sym__identifier_macro,
  [sym_identifier_composite] = sym_identifier_composite,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__string] = sym__string,
  [sym_string] = sym_string,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym__C_number] = sym__C_number,
  [sym_range] = sym_range,
  [sym_boolean] = sym_boolean,
  [sym_axis] = sym_axis,
  [sym__keyable] = sym__keyable,
  [sym__valuable] = sym__valuable,
  [sym__equal_ky] = sym__equal_ky,
  [sym__colon_ky] = sym__colon_ky,
  [sym_object_like] = sym_object_like,
  [sym__itemable] = sym__itemable,
  [sym_array_like] = sym_array_like,
  [sym_operator] = sym_operator,
  [sym__C_nbt_number] = sym__C_nbt_number,
  [sym_nbt_byte] = sym_nbt_byte,
  [sym_nbt_long] = sym_nbt_long,
  [sym_nbt_short] = sym_nbt_short,
  [sym_nbt_float] = sym_nbt_float,
  [sym_nbt_double] = sym_nbt_double,
  [sym__C_nbt_array] = sym__C_nbt_array,
  [sym_nbt_long_array] = sym_nbt_long_array,
  [sym_nbt_integer_array] = sym_nbt_integer_array,
  [sym_nbt_byte_array] = sym_nbt_byte_array,
  [sym_nbt_path] = sym_nbt_path,
  [sym_subcommand_keyword] = sym_subcommand_keyword,
  [aux_sym_root_repeat1] = aux_sym_root_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_command_name_repeat1] = aux_sym_command_name_repeat1,
  [aux_sym__identifier_plain_repeat1] = aux_sym__identifier_plain_repeat1,
  [aux_sym__identifier_chain_repeat1] = aux_sym__identifier_chain_repeat1,
  [aux_sym__identifier_path_repeat1] = aux_sym__identifier_path_repeat1,
  [aux_sym_identifier_composite_repeat1] = aux_sym_identifier_composite_repeat1,
  [aux_sym__string_repeat1] = aux_sym__string_repeat1,
  [aux_sym__string_repeat2] = aux_sym__string_repeat2,
  [aux_sym__equal_ky_repeat1] = aux_sym__equal_ky_repeat1,
  [aux_sym__colon_ky_repeat1] = aux_sym__colon_ky_repeat1,
  [aux_sym_array_like_repeat1] = aux_sym_array_like_repeat1,
  [aux_sym_nbt_long_array_repeat1] = aux_sym_nbt_long_array_repeat1,
  [aux_sym_nbt_integer_array_repeat1] = aux_sym_nbt_integer_array_repeat1,
  [aux_sym_nbt_byte_array_repeat1] = aux_sym_nbt_byte_array_repeat1,
  [aux_sym_nbt_path_repeat1] = aux_sym_nbt_path_repeat1,
  [alias_sym_macro_key] = alias_sym_macro_key,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_root_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_run] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_command_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__identifier_plain_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__identifier_uuid] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [sym__escape_sequence_backslash] = {
    .visible = false,
    .named = true,
  },
  [sym__escape_sequence_section] = {
    .visible = false,
    .named = true,
  },
  [sym__escape_sequence_percent] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__integer] = {
    .visible = false,
    .named = true,
  },
  [sym__float] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT_DOT] = {
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
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_LT] = {
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
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_B] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_L] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_S] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_F] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_detect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anchored] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_at] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_facing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_positioned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rotated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_store] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bossbar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_score] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_storage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_summon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_biome] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blocks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dimension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loaded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_predicate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_matches] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_structure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_poi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_objectives] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_remove] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setdisplay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_players] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_random] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_display] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_operation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dummy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sidebar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_belowname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_result] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_success] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [sym_root] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym__command_params] = {
    .visible = false,
    .named = true,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
  },
  [sym__C_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier_plain] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier_chain] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier_path] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier_namespaced] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier_macro] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier_composite] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym__C_number] = {
    .visible = false,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_axis] = {
    .visible = true,
    .named = true,
  },
  [sym__keyable] = {
    .visible = false,
    .named = true,
  },
  [sym__valuable] = {
    .visible = false,
    .named = true,
  },
  [sym__equal_ky] = {
    .visible = false,
    .named = true,
  },
  [sym__colon_ky] = {
    .visible = false,
    .named = true,
  },
  [sym_object_like] = {
    .visible = true,
    .named = true,
  },
  [sym__itemable] = {
    .visible = false,
    .named = true,
  },
  [sym_array_like] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__C_nbt_number] = {
    .visible = false,
    .named = true,
  },
  [sym_nbt_byte] = {
    .visible = true,
    .named = true,
  },
  [sym_nbt_long] = {
    .visible = true,
    .named = true,
  },
  [sym_nbt_short] = {
    .visible = true,
    .named = true,
  },
  [sym_nbt_float] = {
    .visible = true,
    .named = true,
  },
  [sym_nbt_double] = {
    .visible = true,
    .named = true,
  },
  [sym__C_nbt_array] = {
    .visible = false,
    .named = true,
  },
  [sym_nbt_long_array] = {
    .visible = true,
    .named = true,
  },
  [sym_nbt_integer_array] = {
    .visible = true,
    .named = true,
  },
  [sym_nbt_byte_array] = {
    .visible = true,
    .named = true,
  },
  [sym_nbt_path] = {
    .visible = true,
    .named = true,
  },
  [sym_subcommand_keyword] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_root_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_plain_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_chain_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_composite_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__equal_ky_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__colon_ky_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_like_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nbt_long_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nbt_integer_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nbt_byte_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nbt_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_macro_key] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_flag = 1,
  field_item = 2,
  field_key = 3,
  field_namespace = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_flag] = "flag",
  [field_item] = "item",
  [field_key] = "key",
  [field_namespace] = "namespace",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 0, .length = 1},
  [5] = {.index = 1, .length = 1},
  [6] = {.index = 2, .length = 2},
  [7] = {.index = 4, .length = 1},
  [9] = {.index = 5, .length = 1},
  [11] = {.index = 6, .length = 2},
  [12] = {.index = 8, .length = 3},
  [13] = {.index = 11, .length = 2},
  [14] = {.index = 13, .length = 2},
  [15] = {.index = 15, .length = 4},
  [16] = {.index = 19, .length = 4},
  [17] = {.index = 23, .length = 1},
  [18] = {.index = 24, .length = 2},
  [19] = {.index = 26, .length = 1},
  [20] = {.index = 27, .length = 2},
  [21] = {.index = 29, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_namespace, 0, .inherited = true},
  [1] =
    {field_key, 0},
  [2] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [4] =
    {field_item, 1},
  [5] =
    {field_namespace, 0},
  [6] =
    {field_key, 0},
    {field_value, 2},
  [8] =
    {field_key, 0},
    {field_key, 2, .inherited = true},
    {field_value, 2, .inherited = true},
  [11] =
    {field_item, 1},
    {field_item, 2, .inherited = true},
  [13] =
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
  [15] =
    {field_key, 0},
    {field_key, 3, .inherited = true},
    {field_value, 2},
    {field_value, 3, .inherited = true},
  [19] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [23] =
    {field_key, 1},
  [24] =
    {field_key, 1},
    {field_value, 3},
  [26] =
    {field_flag, 1},
  [27] =
    {field_flag, 1},
    {field_item, 3},
  [29] =
    {field_flag, 1},
    {field_item, 3},
    {field_item, 4, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_escape_sequence,
  },
  [3] = {
    [0] = sym_identifier,
  },
  [4] = {
    [0] = sym_identifier,
  },
  [8] = {
    [1] = sym_identifier,
  },
  [9] = {
    [0] = sym_identifier,
  },
  [10] = {
    [2] = alias_sym_macro_key,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__identifier_plain, 3,
    sym__identifier_plain,
    alias_sym_macro_key,
    sym_identifier,
  sym__identifier_chain, 2,
    sym__identifier_chain,
    sym_identifier,
  sym__identifier_namespaced, 2,
    sym__identifier_namespaced,
    sym_identifier,
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
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 11,
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
  [28] = 22,
  [29] = 18,
  [30] = 30,
  [31] = 31,
  [32] = 17,
  [33] = 16,
  [34] = 21,
  [35] = 35,
  [36] = 36,
  [37] = 24,
  [38] = 38,
  [39] = 39,
  [40] = 25,
  [41] = 26,
  [42] = 42,
  [43] = 43,
  [44] = 43,
  [45] = 31,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 46,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 51,
  [60] = 57,
  [61] = 48,
  [62] = 62,
  [63] = 58,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 62,
  [68] = 68,
  [69] = 68,
  [70] = 70,
  [71] = 70,
  [72] = 35,
  [73] = 47,
  [74] = 74,
  [75] = 66,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 38,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 49,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 93,
  [96] = 92,
  [97] = 84,
  [98] = 91,
  [99] = 94,
  [100] = 49,
  [101] = 101,
  [102] = 85,
  [103] = 90,
  [104] = 89,
  [105] = 88,
  [106] = 106,
  [107] = 107,
  [108] = 87,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 54,
  [114] = 53,
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
  [127] = 56,
  [128] = 128,
  [129] = 129,
  [130] = 126,
  [131] = 117,
  [132] = 132,
  [133] = 133,
  [134] = 112,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
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
  [150] = 150,
  [151] = 145,
  [152] = 152,
  [153] = 153,
  [154] = 80,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 79,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 140,
  [171] = 171,
  [172] = 64,
  [173] = 139,
  [174] = 142,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 76,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 83,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 175,
  [196] = 196,
  [197] = 197,
  [198] = 187,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 157,
  [204] = 188,
  [205] = 205,
  [206] = 82,
  [207] = 77,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 215,
  [226] = 213,
  [227] = 221,
  [228] = 223,
  [229] = 222,
  [230] = 230,
  [231] = 224,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(299);
      ADVANCE_MAP(
        '"', 344,
        '#', 313,
        '$', 309,
        '%', 58,
        '\'', 347,
        '*', 312,
        '+', 69,
        ',', 377,
        '-', 337,
        '.', 335,
        '/', 304,
        ':', 338,
        ';', 401,
        '<', 387,
        '=', 375,
        '>', 386,
        '@', 313,
        'B', 391,
        'D', 400,
        'F', 398,
        'I', 402,
        'L', 394,
        'S', 396,
        '[', 378,
        '\\', 3,
        ']', 379,
        '^', 373,
        'b', 390,
        'd', 399,
        'f', 397,
        'l', 393,
        's', 395,
        '{', 339,
        '}', 340,
        '~', 372,
        0xa7, 291,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(41);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(41);
      if (lookahead == '\r') SKIP(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(41);
      if (lookahead == '\r') SKIP(1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'n') ADVANCE(341);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(43);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(43);
      if (lookahead == '\r') SKIP(4);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(45);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(45);
      if (lookahead == '\r') SKIP(6);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(47);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(47);
      if (lookahead == '\r') SKIP(8);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(52);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(52);
      if (lookahead == '\r') SKIP(10);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(49);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(49);
      if (lookahead == '\r') SKIP(12);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 300,
        '\r', 15,
        ' ', 305,
        '#', 403,
        '-', 336,
        '.', 334,
        '/', 303,
        ':', 338,
        '[', 378,
      );
      if (lookahead == '\\') SKIP(17);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == 0xa7) ADVANCE(291);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '\n', 300,
        '\r', 15,
        ' ', 305,
        '#', 403,
        '-', 336,
        '.', 334,
        '/', 303,
        ':', 338,
        '[', 378,
      );
      if (lookahead == '\\') SKIP(17);
      if (lookahead == '{') ADVANCE(339);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(15);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '\r') SKIP(16);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(51);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(51);
      if (lookahead == '\r') SKIP(18);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(55);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(55);
      if (lookahead == '\r') SKIP(20);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(54);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(54);
      if (lookahead == '\r') SKIP(22);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(54);
      if (lookahead == '\r') SKIP(22);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'n') ADVANCE(341);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(54);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == 0xa7) ADVANCE(291);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(39);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(39);
      if (lookahead == '\r') SKIP(26);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(53);
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(53);
      if (lookahead == '\r') SKIP(28);
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(53);
      if (lookahead == '\r') SKIP(28);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'n') ADVANCE(341);
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(53);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == 0xa7) ADVANCE(291);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(56);
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(56);
      if (lookahead == '\r') SKIP(32);
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(36);
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(36);
      if (lookahead == '\r') SKIP(34);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(301);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == '\\') SKIP(35);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(36);
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(40);
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(40);
      if (lookahead == '\r') SKIP(37);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(302);
      if (lookahead == '\r') ADVANCE(39);
      if (lookahead == ' ') ADVANCE(306);
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '\\') SKIP(27);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(307);
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == '\\') SKIP(38);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(40);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        '"', 344,
        '#', 313,
        '$', 309,
        '%', 68,
        '\'', 347,
        '*', 312,
        '+', 69,
        ',', 377,
        '-', 337,
        '.', 335,
        '/', 304,
        ':', 338,
        ';', 401,
        '<', 387,
        '=', 375,
        '>', 386,
        '@', 313,
        'B', 391,
        'D', 400,
        'F', 398,
        'I', 402,
        'L', 394,
        'S', 396,
        '[', 378,
      );
      if (lookahead == '\\') SKIP(2);
      if (lookahead == ']') ADVANCE(379);
      if (lookahead == '^') ADVANCE(373);
      if (lookahead == 'b') ADVANCE(390);
      if (lookahead == 'd') ADVANCE(399);
      if (lookahead == 'f') ADVANCE(397);
      if (lookahead == 'l') ADVANCE(393);
      if (lookahead == 's') ADVANCE(395);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '}') ADVANCE(340);
      if (lookahead == '~') ADVANCE(372);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 42:
      ADVANCE_MAP(
        '"', 344,
        '#', 313,
        '$', 309,
        '%', 68,
        '\'', 347,
        '*', 312,
        '+', 65,
        '-', 66,
        '.', 64,
        '/', 70,
        '<', 387,
        '=', 374,
        '>', 386,
        '[', 378,
      );
      if (lookahead == '\\') SKIP(5);
      if (lookahead == '^') ADVANCE(373);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(322);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == 'f') ADVANCE(315);
      if (lookahead == 'g') ADVANCE(323);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'l') ADVANCE(326);
      if (lookahead == 'm') ADVANCE(318);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == 'p') ADVANCE(328);
      if (lookahead == 'r') ADVANCE(317);
      if (lookahead == 's') ADVANCE(320);
      if (lookahead == 't') ADVANCE(324);
      if (lookahead == 'u') ADVANCE(330);
      if (lookahead == 'w') ADVANCE(327);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '~') ADVANCE(372);
      if (lookahead == 0xa7) ADVANCE(291);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'c') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 43:
      ADVANCE_MAP(
        '"', 344,
        '#', 313,
        '$', 309,
        '%', 68,
        '\'', 347,
        '*', 312,
        '+', 65,
        '-', 66,
        '.', 64,
        '/', 70,
        '<', 387,
        '=', 374,
        '>', 386,
        '[', 378,
      );
      if (lookahead == '\\') SKIP(5);
      if (lookahead == '^') ADVANCE(373);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(322);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == 'f') ADVANCE(315);
      if (lookahead == 'g') ADVANCE(323);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'l') ADVANCE(326);
      if (lookahead == 'm') ADVANCE(318);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == 'p') ADVANCE(328);
      if (lookahead == 'r') ADVANCE(317);
      if (lookahead == 's') ADVANCE(320);
      if (lookahead == 't') ADVANCE(324);
      if (lookahead == 'u') ADVANCE(330);
      if (lookahead == 'w') ADVANCE(327);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '~') ADVANCE(372);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'c') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 44:
      ADVANCE_MAP(
        '"', 344,
        '#', 313,
        '$', 309,
        '\'', 347,
        '*', 311,
        ',', 377,
        '.', 64,
        '[', 378,
      );
      if (lookahead == '\\') SKIP(7);
      if (lookahead == ']') ADVANCE(379);
      if (lookahead == '^') ADVANCE(373);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead == 't') ADVANCE(331);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '}') ADVANCE(340);
      if (lookahead == '~') ADVANCE(372);
      if (lookahead == 0xa7) ADVANCE(291);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(332);
      if (('@' <= lookahead && lookahead <= '_') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 45:
      ADVANCE_MAP(
        '"', 344,
        '#', 313,
        '$', 309,
        '\'', 347,
        '*', 311,
        ',', 377,
        '.', 64,
        '[', 378,
      );
      if (lookahead == '\\') SKIP(7);
      if (lookahead == ']') ADVANCE(379);
      if (lookahead == '^') ADVANCE(373);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead == 't') ADVANCE(331);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '}') ADVANCE(340);
      if (lookahead == '~') ADVANCE(372);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(332);
      if (('@' <= lookahead && lookahead <= '_') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 46:
      ADVANCE_MAP(
        '"', 344,
        '#', 313,
        '$', 309,
        '\'', 347,
        '*', 311,
        '.', 258,
        'B', 392,
        'I', 402,
        'L', 394,
        '[', 378,
      );
      if (lookahead == '\\') SKIP(9);
      if (lookahead == ']') ADVANCE(379);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead == 't') ADVANCE(331);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == 0xa7) ADVANCE(291);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 47:
      ADVANCE_MAP(
        '"', 344,
        '#', 313,
        '$', 309,
        '\'', 347,
        '*', 311,
        '.', 258,
        'B', 392,
        'I', 402,
        'L', 394,
        '[', 378,
      );
      if (lookahead == '\\') SKIP(9);
      if (lookahead == ']') ADVANCE(379);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead == 't') ADVANCE(331);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == '*') ADVANCE(311);
      if (lookahead == '\\') SKIP(13);
      if (lookahead == ']') ADVANCE(379);
      if (lookahead == '}') ADVANCE(340);
      if (lookahead == 0xa7) ADVANCE(291);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(332);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == '*') ADVANCE(311);
      if (lookahead == '\\') SKIP(13);
      if (lookahead == ']') ADVANCE(379);
      if (lookahead == '}') ADVANCE(340);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(332);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == '\\') SKIP(19);
      if (lookahead == 0xa7) ADVANCE(291);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == '\\') SKIP(19);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 52:
      ADVANCE_MAP(
        '"', 344,
        '#', 403,
        '\'', 347,
        ',', 377,
        '.', 64,
        ':', 338,
        '=', 375,
        'B', 391,
        'L', 394,
        'S', 396,
        '[', 378,
      );
      if (lookahead == '\\') SKIP(11);
      if (lookahead == ']') ADVANCE(379);
      if (lookahead == 'b') ADVANCE(390);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(393);
      if (lookahead == 's') ADVANCE(395);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '}') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == '\\') SKIP(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == '\\') SKIP(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == ',') ADVANCE(377);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'D') ADVANCE(400);
      if (lookahead == 'F') ADVANCE(398);
      if (lookahead == '\\') SKIP(21);
      if (lookahead == ']') ADVANCE(379);
      if (lookahead == 'd') ADVANCE(399);
      if (lookahead == 'f') ADVANCE(397);
      if (lookahead == '}') ADVANCE(340);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(403);
      if (lookahead == '\\') SKIP(33);
      if (lookahead == ']') ADVANCE(379);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 57:
      if (lookahead == '%') ADVANCE(260);
      END_STATE();
    case 58:
      if (lookahead == '%') ADVANCE(260);
      if (lookahead == '=') ADVANCE(384);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(273);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(279);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(290);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(284);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(369);
      END_STATE();
    case 64:
      if (lookahead == '.') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == '=') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == '=') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 67:
      if (lookahead == '.') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 68:
      if (lookahead == '=') ADVANCE(384);
      END_STATE();
    case 69:
      if (lookahead == '=') ADVANCE(380);
      END_STATE();
    case 70:
      if (lookahead == '=') ADVANCE(383);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'p') ADVANCE(163);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 86:
      if (lookahead == 'b') ADVANCE(76);
      END_STATE();
    case 87:
      if (lookahead == 'b') ADVANCE(77);
      END_STATE();
    case 88:
      if (lookahead == 'b') ADVANCE(166);
      END_STATE();
    case 89:
      if (lookahead == 'b') ADVANCE(168);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'l') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(174);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(240);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(236);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(413);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(406);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(412);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 138:
      if (lookahead == 'f') ADVANCE(254);
      END_STATE();
    case 139:
      if (lookahead == 'g') ADVANCE(409);
      END_STATE();
    case 140:
      if (lookahead == 'g') ADVANCE(178);
      END_STATE();
    case 141:
      if (lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 142:
      if (lookahead == 'h') ADVANCE(455);
      END_STATE();
    case 143:
      if (lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 144:
      if (lookahead == 'h') ADVANCE(201);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 158:
      if (lookahead == 'j') ADVANCE(137);
      END_STATE();
    case 159:
      if (lookahead == 'k') ADVANCE(415);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(442);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(252);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(191);
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(196);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(405);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(420);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(427);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 202:
      if (lookahead == 'p') ADVANCE(449);
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 203:
      if (lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(422);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(430);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(433);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(404);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(453);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 247:
      if (lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 248:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 249:
      if (lookahead == 'v') ADVANCE(117);
      END_STATE();
    case 250:
      if (lookahead == 'v') ADVANCE(131);
      END_STATE();
    case 251:
      if (lookahead == 'w') ADVANCE(187);
      END_STATE();
    case 252:
      if (lookahead == 'y') ADVANCE(450);
      END_STATE();
    case 253:
      if (lookahead == 'y') ADVANCE(417);
      END_STATE();
    case 254:
      if (lookahead == 'y') ADVANCE(438);
      END_STATE();
    case 255:
      if (lookahead == 'y') ADVANCE(444);
      END_STATE();
    case 256:
      if (lookahead == 'y') ADVANCE(437);
      END_STATE();
    case 257:
      if (lookahead == 'y') ADVANCE(123);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 259:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 's') ADVANCE(343);
      END_STATE();
    case 261:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 262:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(333);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 265:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      END_STATE();
    case 266:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      END_STATE();
    case 267:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      END_STATE();
    case 268:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 269:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 270:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 271:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      END_STATE();
    case 272:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      END_STATE();
    case 273:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      END_STATE();
    case 274:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 275:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 276:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 277:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 278:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 279:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 280:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 281:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 282:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(281);
      END_STATE();
    case 283:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 284:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(283);
      END_STATE();
    case 285:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 286:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      END_STATE();
    case 287:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 288:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 289:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 290:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 291:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(342);
      END_STATE();
    case 292:
      if (eof) ADVANCE(299);
      if (lookahead == '\n') SKIP(296);
      END_STATE();
    case 293:
      if (eof) ADVANCE(299);
      if (lookahead == '\n') SKIP(296);
      if (lookahead == '\r') SKIP(292);
      END_STATE();
    case 294:
      if (eof) ADVANCE(299);
      if (lookahead == '\n') SKIP(298);
      END_STATE();
    case 295:
      if (eof) ADVANCE(299);
      if (lookahead == '\n') SKIP(298);
      if (lookahead == '\r') SKIP(294);
      END_STATE();
    case 296:
      if (eof) ADVANCE(299);
      ADVANCE_MAP(
        '"', 344,
        '#', 313,
        '$', 309,
        '%', 68,
        '\'', 347,
        '*', 312,
        '+', 69,
        ',', 377,
        '-', 337,
        '.', 335,
        '/', 304,
        ':', 338,
        ';', 401,
        '<', 387,
        '=', 375,
        '>', 386,
        '@', 313,
        'B', 391,
        'D', 400,
        'F', 398,
        'I', 402,
        'L', 394,
        'S', 396,
        '[', 378,
      );
      if (lookahead == '\\') SKIP(293);
      if (lookahead == ']') ADVANCE(379);
      if (lookahead == '^') ADVANCE(373);
      if (lookahead == 'b') ADVANCE(390);
      if (lookahead == 'd') ADVANCE(399);
      if (lookahead == 'f') ADVANCE(397);
      if (lookahead == 'l') ADVANCE(393);
      if (lookahead == 's') ADVANCE(395);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '}') ADVANCE(340);
      if (lookahead == '~') ADVANCE(372);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 297:
      if (eof) ADVANCE(299);
      ADVANCE_MAP(
        '#', 403,
        '$', 309,
        ',', 377,
        '-', 336,
        '.', 334,
        '/', 303,
        ':', 338,
        ';', 401,
        '=', 375,
        '[', 378,
      );
      if (lookahead == '\\') SKIP(295);
      if (lookahead == ']') ADVANCE(379);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '}') ADVANCE(340);
      if (lookahead == 0xa7) ADVANCE(291);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 298:
      if (eof) ADVANCE(299);
      ADVANCE_MAP(
        '#', 403,
        '$', 309,
        ',', 377,
        '-', 336,
        '.', 334,
        '/', 303,
        ':', 338,
        ';', 401,
        '=', 375,
        '[', 378,
      );
      if (lookahead == '\\') SKIP(295);
      if (lookahead == ']') ADVANCE(379);
      if (lookahead == '{') ADVANCE(339);
      if (lookahead == '}') ADVANCE(340);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_root_token1);
      if (lookahead == '\n') ADVANCE(300);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(305);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_root_token1);
      if (lookahead == '\n') ADVANCE(301);
      if (lookahead == '\r') ADVANCE(36);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_root_token1);
      if (lookahead == '\n') ADVANCE(302);
      if (lookahead == '\r') ADVANCE(39);
      if (lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(383);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(300);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(302);
      if (lookahead == '\r') ADVANCE(39);
      if (lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_command_name_token1);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(382);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__identifier_plain_token1);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__identifier_plain_token1);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'u') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__identifier_plain_token1);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__identifier_plain_token1);
      if (lookahead == 'a') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__identifier_plain_token1);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__identifier_plain_token1);
      if (lookahead == 'a') ADVANCE(243);
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__identifier_plain_token1);
      if (lookahead == 'b') ADVANCE(158);
      if (lookahead == 'n') ADVANCE(411);
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__identifier_plain_token1);
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__identifier_plain_token1);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead == 't') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__identifier_plain_token1);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'l') ADVANCE(192);
      if (lookahead == 'o') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__identifier_plain_token1);
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__identifier_plain_token1);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__identifier_plain_token1);
      if (lookahead == 'f') ADVANCE(421);
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__identifier_plain_token1);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__identifier_plain_token1);
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__identifier_plain_token1);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__identifier_plain_token1);
      if (lookahead == 'n') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__identifier_plain_token1);
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__identifier_plain_token1);
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__identifier_plain_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__identifier_uuid);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(369);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(381);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__escape_sequence_backslash);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__escape_sequence_section);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__escape_sequence_percent);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != 0xa7) ADVANCE(346);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != 0xa7) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != 0xa7) ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != 0xa7) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '.') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '-') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '!') ADVANCE(376);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_EQ_BANG);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_GT_LT);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '<') ADVANCE(385);
      if (lookahead == '=') ADVANCE(388);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(389);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_B);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_L);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_F);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_detect);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_anchored);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_facing);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_positioned);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_rotated);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_store);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == 's') ADVANCE(424);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_bossbar);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_score);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_storage);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_summon);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_biome);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_blocks);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_dimension);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_loaded);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_predicate);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_structure);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_poi);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_objectives);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_add);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_remove);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_setdisplay);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_modify);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_players);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_random);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_display);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_enable);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_disable);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_operation);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_dummy);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_sidebar);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_belowname);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_result);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_success);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 297},
  [2] = {.lex_state = 42},
  [3] = {.lex_state = 44},
  [4] = {.lex_state = 44},
  [5] = {.lex_state = 44},
  [6] = {.lex_state = 44},
  [7] = {.lex_state = 46},
  [8] = {.lex_state = 44},
  [9] = {.lex_state = 44},
  [10] = {.lex_state = 52},
  [11] = {.lex_state = 48},
  [12] = {.lex_state = 48},
  [13] = {.lex_state = 48},
  [14] = {.lex_state = 48},
  [15] = {.lex_state = 48},
  [16] = {.lex_state = 297},
  [17] = {.lex_state = 297},
  [18] = {.lex_state = 297},
  [19] = {.lex_state = 297},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 297},
  [22] = {.lex_state = 297},
  [23] = {.lex_state = 52},
  [24] = {.lex_state = 297},
  [25] = {.lex_state = 297},
  [26] = {.lex_state = 297},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 297},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 297},
  [36] = {.lex_state = 50},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 297},
  [39] = {.lex_state = 50},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 55},
  [43] = {.lex_state = 297},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 52},
  [48] = {.lex_state = 297},
  [49] = {.lex_state = 297},
  [50] = {.lex_state = 297},
  [51] = {.lex_state = 297},
  [52] = {.lex_state = 297},
  [53] = {.lex_state = 297},
  [54] = {.lex_state = 297},
  [55] = {.lex_state = 297},
  [56] = {.lex_state = 297},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 52},
  [59] = {.lex_state = 297},
  [60] = {.lex_state = 297},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 25},
  [63] = {.lex_state = 39},
  [64] = {.lex_state = 297},
  [65] = {.lex_state = 25},
  [66] = {.lex_state = 31},
  [67] = {.lex_state = 25},
  [68] = {.lex_state = 31},
  [69] = {.lex_state = 31},
  [70] = {.lex_state = 25},
  [71] = {.lex_state = 25},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 39},
  [74] = {.lex_state = 31},
  [75] = {.lex_state = 31},
  [76] = {.lex_state = 297},
  [77] = {.lex_state = 297},
  [78] = {.lex_state = 56},
  [79] = {.lex_state = 297},
  [80] = {.lex_state = 297},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 297},
  [83] = {.lex_state = 297},
  [84] = {.lex_state = 25},
  [85] = {.lex_state = 52},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 297},
  [88] = {.lex_state = 297},
  [89] = {.lex_state = 297},
  [90] = {.lex_state = 297},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 297},
  [93] = {.lex_state = 297},
  [94] = {.lex_state = 297},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 31},
  [98] = {.lex_state = 297},
  [99] = {.lex_state = 14},
  [100] = {.lex_state = 297},
  [101] = {.lex_state = 297},
  [102] = {.lex_state = 52},
  [103] = {.lex_state = 14},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 14},
  [106] = {.lex_state = 297},
  [107] = {.lex_state = 56},
  [108] = {.lex_state = 14},
  [109] = {.lex_state = 297},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 14},
  [112] = {.lex_state = 50},
  [113] = {.lex_state = 14},
  [114] = {.lex_state = 14},
  [115] = {.lex_state = 14},
  [116] = {.lex_state = 297},
  [117] = {.lex_state = 50},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 297},
  [120] = {.lex_state = 52},
  [121] = {.lex_state = 297},
  [122] = {.lex_state = 297},
  [123] = {.lex_state = 14},
  [124] = {.lex_state = 297},
  [125] = {.lex_state = 297},
  [126] = {.lex_state = 50},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 14},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 50},
  [131] = {.lex_state = 50},
  [132] = {.lex_state = 297},
  [133] = {.lex_state = 297},
  [134] = {.lex_state = 50},
  [135] = {.lex_state = 297},
  [136] = {.lex_state = 297},
  [137] = {.lex_state = 297},
  [138] = {.lex_state = 14},
  [139] = {.lex_state = 39},
  [140] = {.lex_state = 50},
  [141] = {.lex_state = 297},
  [142] = {.lex_state = 297},
  [143] = {.lex_state = 297},
  [144] = {.lex_state = 297},
  [145] = {.lex_state = 297},
  [146] = {.lex_state = 297},
  [147] = {.lex_state = 297},
  [148] = {.lex_state = 297},
  [149] = {.lex_state = 297},
  [150] = {.lex_state = 297},
  [151] = {.lex_state = 297},
  [152] = {.lex_state = 297},
  [153] = {.lex_state = 297},
  [154] = {.lex_state = 39},
  [155] = {.lex_state = 297},
  [156] = {.lex_state = 297},
  [157] = {.lex_state = 297},
  [158] = {.lex_state = 297},
  [159] = {.lex_state = 297},
  [160] = {.lex_state = 14},
  [161] = {.lex_state = 297},
  [162] = {.lex_state = 297},
  [163] = {.lex_state = 39},
  [164] = {.lex_state = 297},
  [165] = {.lex_state = 297},
  [166] = {.lex_state = 14},
  [167] = {.lex_state = 297},
  [168] = {.lex_state = 297},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 50},
  [171] = {.lex_state = 14},
  [172] = {.lex_state = 14},
  [173] = {.lex_state = 297},
  [174] = {.lex_state = 297},
  [175] = {.lex_state = 297},
  [176] = {.lex_state = 297},
  [177] = {.lex_state = 297},
  [178] = {.lex_state = 297},
  [179] = {.lex_state = 297},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 297},
  [183] = {.lex_state = 14},
  [184] = {.lex_state = 55},
  [185] = {.lex_state = 55},
  [186] = {.lex_state = 297},
  [187] = {.lex_state = 297},
  [188] = {.lex_state = 297},
  [189] = {.lex_state = 14},
  [190] = {.lex_state = 297},
  [191] = {.lex_state = 297},
  [192] = {.lex_state = 297},
  [193] = {.lex_state = 52},
  [194] = {.lex_state = 52},
  [195] = {.lex_state = 14},
  [196] = {.lex_state = 297},
  [197] = {.lex_state = 14},
  [198] = {.lex_state = 14},
  [199] = {.lex_state = 297},
  [200] = {.lex_state = 14},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 14},
  [203] = {.lex_state = 14},
  [204] = {.lex_state = 14},
  [205] = {.lex_state = 297},
  [206] = {.lex_state = 14},
  [207] = {.lex_state = 14},
  [208] = {.lex_state = 55},
  [209] = {.lex_state = 297},
  [210] = {.lex_state = 55},
  [211] = {.lex_state = 297},
  [212] = {.lex_state = 297},
  [213] = {.lex_state = 297},
  [214] = {.lex_state = 36},
  [215] = {.lex_state = 297},
  [216] = {.lex_state = 297},
  [217] = {.lex_state = 297},
  [218] = {.lex_state = 297},
  [219] = {.lex_state = 297},
  [220] = {.lex_state = 297},
  [221] = {.lex_state = 297},
  [222] = {.lex_state = 297},
  [223] = {.lex_state = 297},
  [224] = {.lex_state = 297},
  [225] = {.lex_state = 297},
  [226] = {.lex_state = 297},
  [227] = {.lex_state = 297},
  [228] = {.lex_state = 297},
  [229] = {.lex_state = 297},
  [230] = {.lex_state = 40},
  [231] = {.lex_state = 297},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_command_name_token1] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym__identifier_plain_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__escape_sequence_backslash] = ACTIONS(1),
    [sym__escape_sequence_section] = ACTIONS(1),
    [sym__escape_sequence_percent] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_BANG] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_GT_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_B] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_L] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_S] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_F] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_I] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_root] = STATE(217),
    [sym_command] = STATE(214),
    [sym_command_name] = STATE(169),
    [aux_sym_root_repeat1] = STATE(55),
    [aux_sym_command_name_repeat1] = STATE(123),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [aux_sym_command_name_token1] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [2] = {
    [sym__command_params] = STATE(202),
    [sym__C_identifier] = STATE(202),
    [sym_identifier] = STATE(202),
    [sym__identifier_plain] = STATE(20),
    [sym__identifier_chain] = STATE(86),
    [sym__identifier_path] = STATE(207),
    [sym__identifier_namespaced] = STATE(61),
    [sym__identifier_macro] = STATE(207),
    [sym_identifier_composite] = STATE(118),
    [sym__string] = STATE(160),
    [sym_string] = STATE(202),
    [sym_integer] = STATE(163),
    [sym_float] = STATE(163),
    [sym__C_number] = STATE(163),
    [sym_range] = STATE(202),
    [sym_boolean] = STATE(202),
    [sym_axis] = STATE(202),
    [sym_object_like] = STATE(202),
    [sym_array_like] = STATE(202),
    [sym_operator] = STATE(202),
    [sym_nbt_path] = STATE(202),
    [sym_subcommand_keyword] = STATE(202),
    [anon_sym_run] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [aux_sym__identifier_plain_token1] = ACTIONS(21),
    [sym__identifier_uuid] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym__escape_sequence_section] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym__integer] = ACTIONS(33),
    [sym__float] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [anon_sym_CARET] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_PLUS_EQ] = ACTIONS(43),
    [anon_sym_DASH_EQ] = ACTIONS(43),
    [anon_sym_STAR_EQ] = ACTIONS(43),
    [anon_sym_SLASH_EQ] = ACTIONS(43),
    [anon_sym_PERCENT_EQ] = ACTIONS(43),
    [anon_sym_GT_LT] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [anon_sym_detect] = ACTIONS(49),
    [anon_sym_align] = ACTIONS(49),
    [anon_sym_anchored] = ACTIONS(49),
    [anon_sym_as] = ACTIONS(49),
    [anon_sym_at] = ACTIONS(49),
    [anon_sym_facing] = ACTIONS(49),
    [anon_sym_in] = ACTIONS(49),
    [anon_sym_on] = ACTIONS(49),
    [anon_sym_positioned] = ACTIONS(49),
    [anon_sym_rotated] = ACTIONS(49),
    [anon_sym_store] = ACTIONS(49),
    [anon_sym_block] = ACTIONS(51),
    [anon_sym_bossbar] = ACTIONS(49),
    [anon_sym_entity] = ACTIONS(49),
    [anon_sym_score] = ACTIONS(49),
    [anon_sym_storage] = ACTIONS(49),
    [anon_sym_summon] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(49),
    [anon_sym_unless] = ACTIONS(49),
    [anon_sym_biome] = ACTIONS(49),
    [anon_sym_blocks] = ACTIONS(49),
    [anon_sym_data] = ACTIONS(49),
    [anon_sym_dimension] = ACTIONS(49),
    [anon_sym_function] = ACTIONS(49),
    [anon_sym_loaded] = ACTIONS(49),
    [anon_sym_predicate] = ACTIONS(49),
    [anon_sym_matches] = ACTIONS(49),
    [anon_sym_structure] = ACTIONS(49),
    [anon_sym_poi] = ACTIONS(49),
    [anon_sym_objectives] = ACTIONS(49),
    [anon_sym_list] = ACTIONS(49),
    [anon_sym_add] = ACTIONS(51),
    [anon_sym_remove] = ACTIONS(49),
    [anon_sym_setdisplay] = ACTIONS(49),
    [anon_sym_modify] = ACTIONS(49),
    [anon_sym_players] = ACTIONS(49),
    [anon_sym_get] = ACTIONS(49),
    [anon_sym_set] = ACTIONS(51),
    [anon_sym_random] = ACTIONS(49),
    [anon_sym_reset] = ACTIONS(49),
    [anon_sym_display] = ACTIONS(49),
    [anon_sym_test] = ACTIONS(49),
    [anon_sym_enable] = ACTIONS(49),
    [anon_sym_disable] = ACTIONS(49),
    [anon_sym_operation] = ACTIONS(49),
    [anon_sym_stop] = ACTIONS(49),
    [anon_sym_dummy] = ACTIONS(49),
    [anon_sym_sidebar] = ACTIONS(49),
    [anon_sym_belowname] = ACTIONS(49),
    [anon_sym_result] = ACTIONS(49),
    [anon_sym_success] = ACTIONS(49),
    [anon_sym_with] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym__identifier_plain_token1,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym__escape_sequence_section,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      sym__integer,
    ACTIONS(71), 1,
      sym__float,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym__identifier_plain,
    STATE(48), 1,
      sym__identifier_namespaced,
    STATE(49), 1,
      sym__identifier_chain,
    STATE(79), 1,
      sym__string,
    STATE(122), 1,
      aux_sym__colon_ky_repeat1,
    ACTIONS(55), 2,
      anon_sym_STAR,
      sym__identifier_uuid,
    ACTIONS(61), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(77), 2,
      anon_sym_TILDE,
      anon_sym_CARET,
    STATE(77), 2,
      sym__identifier_path,
      sym__identifier_macro,
    STATE(120), 3,
      sym_integer,
      sym_float,
      sym__C_number,
    STATE(121), 20,
      sym__C_identifier,
      sym_identifier,
      sym_identifier_composite,
      sym_string,
      sym_range,
      sym_boolean,
      sym_axis,
      sym__valuable,
      sym_object_like,
      sym_array_like,
      sym__C_nbt_number,
      sym_nbt_byte,
      sym_nbt_long,
      sym_nbt_short,
      sym_nbt_float,
      sym_nbt_double,
      sym__C_nbt_array,
      sym_nbt_long_array,
      sym_nbt_integer_array,
      sym_nbt_byte_array,
  [99] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym__identifier_plain_token1,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym__escape_sequence_section,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      sym__integer,
    ACTIONS(71), 1,
      sym__float,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      sym__identifier_plain,
    STATE(48), 1,
      sym__identifier_namespaced,
    STATE(49), 1,
      sym__identifier_chain,
    STATE(79), 1,
      sym__string,
    STATE(125), 1,
      aux_sym__equal_ky_repeat1,
    ACTIONS(55), 2,
      anon_sym_STAR,
      sym__identifier_uuid,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(77), 2,
      anon_sym_TILDE,
      anon_sym_CARET,
    ACTIONS(83), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    STATE(77), 2,
      sym__identifier_path,
      sym__identifier_macro,
    STATE(120), 3,
      sym_integer,
      sym_float,
      sym__C_number,
    STATE(124), 20,
      sym__C_identifier,
      sym_identifier,
      sym_identifier_composite,
      sym_string,
      sym_range,
      sym_boolean,
      sym_axis,
      sym__valuable,
      sym_object_like,
      sym_array_like,
      sym__C_nbt_number,
      sym_nbt_byte,
      sym_nbt_long,
      sym_nbt_short,
      sym_nbt_float,
      sym_nbt_double,
      sym__C_nbt_array,
      sym_nbt_long_array,
      sym_nbt_integer_array,
      sym_nbt_byte_array,
  [198] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym__identifier_plain_token1,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym__escape_sequence_section,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      sym__integer,
    ACTIONS(71), 1,
      sym__float,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym__identifier_plain,
    STATE(48), 1,
      sym__identifier_namespaced,
    STATE(49), 1,
      sym__identifier_chain,
    STATE(79), 1,
      sym__string,
    ACTIONS(55), 2,
      anon_sym_STAR,
      sym__identifier_uuid,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(77), 2,
      anon_sym_TILDE,
      anon_sym_CARET,
    STATE(77), 2,
      sym__identifier_path,
      sym__identifier_macro,
    ACTIONS(87), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(120), 3,
      sym_integer,
      sym_float,
      sym__C_number,
    STATE(150), 20,
      sym__C_identifier,
      sym_identifier,
      sym_identifier_composite,
      sym_string,
      sym_range,
      sym_boolean,
      sym_axis,
      sym__valuable,
      sym_object_like,
      sym_array_like,
      sym__C_nbt_number,
      sym_nbt_byte,
      sym_nbt_long,
      sym_nbt_short,
      sym_nbt_float,
      sym_nbt_double,
      sym__C_nbt_array,
      sym_nbt_long_array,
      sym_nbt_integer_array,
      sym_nbt_byte_array,
  [292] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym__identifier_plain_token1,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym__escape_sequence_section,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      sym__integer,
    ACTIONS(71), 1,
      sym__float,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym__identifier_plain,
    STATE(48), 1,
      sym__identifier_namespaced,
    STATE(49), 1,
      sym__identifier_chain,
    STATE(79), 1,
      sym__string,
    ACTIONS(55), 2,
      anon_sym_STAR,
      sym__identifier_uuid,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(77), 2,
      anon_sym_TILDE,
      anon_sym_CARET,
    STATE(77), 2,
      sym__identifier_path,
      sym__identifier_macro,
    ACTIONS(89), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(120), 3,
      sym_integer,
      sym_float,
      sym__C_number,
    STATE(141), 20,
      sym__C_identifier,
      sym_identifier,
      sym_identifier_composite,
      sym_string,
      sym_range,
      sym_boolean,
      sym_axis,
      sym__valuable,
      sym_object_like,
      sym_array_like,
      sym__C_nbt_number,
      sym_nbt_byte,
      sym_nbt_long,
      sym_nbt_short,
      sym_nbt_float,
      sym_nbt_double,
      sym__C_nbt_array,
      sym_nbt_long_array,
      sym_nbt_integer_array,
      sym_nbt_byte_array,
  [386] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym__identifier_plain_token1,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym__escape_sequence_section,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      sym__integer,
    ACTIONS(71), 1,
      sym__float,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    ACTIONS(95), 1,
      anon_sym_B,
    ACTIONS(97), 1,
      anon_sym_L,
    ACTIONS(99), 1,
      anon_sym_I,
    STATE(59), 1,
      sym__identifier_plain,
    STATE(79), 1,
      sym__string,
    STATE(100), 1,
      sym__identifier_chain,
    STATE(101), 1,
      sym_string,
    STATE(106), 1,
      sym_integer,
    STATE(190), 1,
      sym__identifier_namespaced,
    STATE(225), 1,
      sym__equal_ky,
    STATE(226), 1,
      sym__colon_ky,
    ACTIONS(55), 2,
      anon_sym_STAR,
      sym__identifier_uuid,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(77), 2,
      sym__identifier_path,
      sym__identifier_macro,
    STATE(191), 2,
      sym_identifier,
      sym__keyable,
    STATE(145), 11,
      sym_float,
      sym__C_number,
      sym_boolean,
      sym_object_like,
      sym__itemable,
      sym__C_nbt_number,
      sym_nbt_byte,
      sym_nbt_long,
      sym_nbt_short,
      sym_nbt_float,
      sym_nbt_double,
  [482] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym__identifier_plain_token1,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym__escape_sequence_section,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      sym__integer,
    ACTIONS(71), 1,
      sym__float,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      sym__identifier_plain,
    STATE(79), 1,
      sym__string,
    STATE(100), 1,
      sym__identifier_chain,
    STATE(101), 1,
      sym_string,
    STATE(106), 1,
      sym_integer,
    STATE(190), 1,
      sym__identifier_namespaced,
    STATE(225), 1,
      sym__equal_ky,
    STATE(226), 1,
      sym__colon_ky,
    ACTIONS(55), 2,
      anon_sym_STAR,
      sym__identifier_uuid,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(77), 2,
      sym__identifier_path,
      sym__identifier_macro,
    STATE(191), 2,
      sym_identifier,
      sym__keyable,
    STATE(145), 11,
      sym_float,
      sym__C_number,
      sym_boolean,
      sym_object_like,
      sym__itemable,
      sym__C_nbt_number,
      sym_nbt_byte,
      sym_nbt_long,
      sym_nbt_short,
      sym_nbt_float,
      sym_nbt_double,
  [569] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym__identifier_plain_token1,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym__escape_sequence_section,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      sym__integer,
    ACTIONS(71), 1,
      sym__float,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      sym__identifier_plain,
    STATE(79), 1,
      sym__string,
    STATE(100), 1,
      sym__identifier_chain,
    STATE(101), 1,
      sym_string,
    STATE(106), 1,
      sym_integer,
    STATE(190), 1,
      sym__identifier_namespaced,
    STATE(213), 1,
      sym__colon_ky,
    STATE(215), 1,
      sym__equal_ky,
    ACTIONS(55), 2,
      anon_sym_STAR,
      sym__identifier_uuid,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(77), 2,
      sym__identifier_path,
      sym__identifier_macro,
    STATE(191), 2,
      sym_identifier,
      sym__keyable,
    STATE(151), 11,
      sym_float,
      sym__C_number,
      sym_boolean,
      sym_object_like,
      sym__itemable,
      sym__C_nbt_number,
      sym_nbt_byte,
      sym_nbt_long,
      sym_nbt_short,
      sym_nbt_float,
      sym_nbt_double,
  [656] = 10,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      sym__integer,
    ACTIONS(71), 1,
      sym__float,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    STATE(79), 1,
      sym__string,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(205), 13,
      sym_string,
      sym_integer,
      sym_float,
      sym__C_number,
      sym_boolean,
      sym_object_like,
      sym__itemable,
      sym__C_nbt_number,
      sym_nbt_byte,
      sym_nbt_long,
      sym_nbt_short,
      sym_nbt_float,
      sym_nbt_double,
  [700] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym__identifier_plain_token1,
    ACTIONS(63), 1,
      sym__escape_sequence_section,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      sym__integer,
    STATE(59), 1,
      sym__identifier_plain,
    STATE(79), 1,
      sym__string,
    STATE(100), 1,
      sym__identifier_chain,
    STATE(190), 1,
      sym__identifier_namespaced,
    STATE(221), 1,
      sym__equal_ky,
    STATE(222), 1,
      sym__colon_ky,
    ACTIONS(55), 2,
      anon_sym_STAR,
      sym__identifier_uuid,
    STATE(77), 2,
      sym__identifier_path,
      sym__identifier_macro,
    STATE(191), 4,
      sym_identifier,
      sym_string,
      sym_integer,
      sym__keyable,
  [757] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym__identifier_plain_token1,
    ACTIONS(63), 1,
      sym__escape_sequence_section,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    ACTIONS(105), 1,
      sym__integer,
    STATE(59), 1,
      sym__identifier_plain,
    STATE(79), 1,
      sym__string,
    STATE(100), 1,
      sym__identifier_chain,
    STATE(190), 1,
      sym__identifier_namespaced,
    STATE(225), 1,
      sym__equal_ky,
    STATE(226), 1,
      sym__colon_ky,
    ACTIONS(55), 2,
      anon_sym_STAR,
      sym__identifier_uuid,
    STATE(77), 2,
      sym__identifier_path,
      sym__identifier_macro,
    STATE(191), 4,
      sym_identifier,
      sym_string,
      sym_integer,
      sym__keyable,
  [814] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym__identifier_plain_token1,
    ACTIONS(63), 1,
      sym__escape_sequence_section,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__integer,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym__identifier_plain,
    STATE(79), 1,
      sym__string,
    STATE(100), 1,
      sym__identifier_chain,
    STATE(190), 1,
      sym__identifier_namespaced,
    STATE(227), 1,
      sym__equal_ky,
    STATE(229), 1,
      sym__colon_ky,
    ACTIONS(55), 2,
      anon_sym_STAR,
      sym__identifier_uuid,
    STATE(77), 2,
      sym__identifier_path,
      sym__identifier_macro,
    STATE(191), 4,
      sym_identifier,
      sym_string,
      sym_integer,
      sym__keyable,
  [871] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym__identifier_plain_token1,
    ACTIONS(63), 1,
      sym__escape_sequence_section,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__integer,
    STATE(59), 1,
      sym__identifier_plain,
    STATE(79), 1,
      sym__string,
    STATE(100), 1,
      sym__identifier_chain,
    STATE(190), 1,
      sym__identifier_namespaced,
    ACTIONS(55), 2,
      anon_sym_STAR,
      sym__identifier_uuid,
    STATE(77), 2,
      sym__identifier_path,
      sym__identifier_macro,
    STATE(218), 4,
      sym_identifier,
      sym_string,
      sym_integer,
      sym__keyable,
  [919] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOLLAR,
    ACTIONS(57), 1,
      aux_sym__identifier_plain_token1,
    ACTIONS(63), 1,
      sym__escape_sequence_section,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__integer,
    STATE(49), 1,
      sym__identifier_chain,
    STATE(51), 1,
      sym__identifier_plain,
    STATE(79), 1,
      sym__string,
    STATE(190), 1,
      sym__identifier_namespaced,
    ACTIONS(55), 2,
      anon_sym_STAR,
      sym__identifier_uuid,
    STATE(77), 2,
      sym__identifier_path,
      sym__identifier_macro,
    STATE(196), 4,
      sym_identifier,
      sym_string,
      sym_integer,
      sym__keyable,
  [967] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym_command_name_token1,
    ACTIONS(113), 1,
      sym__escape_sequence_section,
    ACTIONS(115), 1,
      anon_sym_EQ,
    STATE(21), 1,
      aux_sym__identifier_plain_repeat1,
    ACTIONS(109), 10,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [995] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym__escape_sequence_section,
    ACTIONS(119), 1,
      aux_sym_command_name_token1,
    ACTIONS(121), 1,
      anon_sym_EQ,
    STATE(16), 1,
      aux_sym__identifier_plain_repeat1,
    ACTIONS(117), 10,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1023] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym__escape_sequence_section,
    ACTIONS(125), 1,
      aux_sym_command_name_token1,
    ACTIONS(127), 1,
      anon_sym_EQ,
    STATE(22), 1,
      aux_sym__identifier_plain_repeat1,
    ACTIONS(123), 10,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1051] = 10,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      anon_sym_SLASH,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      aux_sym__identifier_chain_repeat1,
    STATE(56), 1,
      aux_sym__identifier_path_repeat1,
    ACTIONS(131), 2,
      anon_sym_DOT,
      anon_sym_DASH,
    ACTIONS(135), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(43), 3,
      sym_object_like,
      sym_array_like,
      aux_sym_identifier_composite_repeat1,
  [1087] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    ACTIONS(143), 1,
      anon_sym_DOT,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_COLON,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    STATE(40), 1,
      aux_sym__identifier_chain_repeat1,
    STATE(127), 1,
      aux_sym__identifier_path_repeat1,
    STATE(128), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(139), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
    STATE(44), 3,
      sym_object_like,
      sym_array_like,
      aux_sym_identifier_composite_repeat1,
  [1127] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_command_name_token1,
    ACTIONS(158), 1,
      sym__escape_sequence_section,
    ACTIONS(161), 1,
      anon_sym_EQ,
    STATE(21), 1,
      aux_sym__identifier_plain_repeat1,
    ACTIONS(153), 10,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1155] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym_command_name_token1,
    ACTIONS(113), 1,
      sym__escape_sequence_section,
    ACTIONS(165), 1,
      anon_sym_EQ,
    STATE(21), 1,
      aux_sym__identifier_plain_repeat1,
    ACTIONS(163), 10,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1183] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_EQ,
    ACTIONS(171), 2,
      anon_sym_b,
      anon_sym_B,
    ACTIONS(173), 2,
      anon_sym_l,
      anon_sym_L,
    ACTIONS(175), 2,
      anon_sym_s,
      anon_sym_S,
    ACTIONS(167), 6,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1210] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(177), 12,
      anon_sym_SLASH,
      aux_sym_command_name_token1,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__escape_sequence_section,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1231] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_EQ,
    STATE(26), 1,
      aux_sym__identifier_chain_repeat1,
    ACTIONS(131), 2,
      anon_sym_DOT,
      anon_sym_DASH,
    ACTIONS(181), 8,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1255] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_EQ,
    STATE(26), 1,
      aux_sym__identifier_chain_repeat1,
    ACTIONS(187), 2,
      anon_sym_DOT,
      anon_sym_DASH,
    ACTIONS(185), 8,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1279] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      aux_sym__identifier_chain_repeat1,
    STATE(44), 3,
      sym_object_like,
      sym_array_like,
      aux_sym_identifier_composite_repeat1,
    ACTIONS(190), 6,
      aux_sym_root_token1,
      anon_sym_SLASH,
      anon_sym_SPACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COLON,
  [1305] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      aux_sym_command_name_token1,
    ACTIONS(194), 1,
      sym__escape_sequence_section,
    STATE(34), 1,
      aux_sym__identifier_plain_repeat1,
    ACTIONS(165), 8,
      aux_sym_root_token1,
      anon_sym_SLASH,
      anon_sym_SPACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [1328] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym__escape_sequence_section,
    ACTIONS(196), 1,
      aux_sym_command_name_token1,
    STATE(28), 1,
      aux_sym__identifier_plain_repeat1,
    ACTIONS(127), 8,
      aux_sym_root_token1,
      anon_sym_SLASH,
      anon_sym_SPACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [1351] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_DOT,
    ACTIONS(203), 1,
      anon_sym_DASH,
    ACTIONS(205), 1,
      anon_sym_COLON,
    STATE(25), 1,
      aux_sym__identifier_chain_repeat1,
    ACTIONS(198), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
    STATE(44), 3,
      sym_object_like,
      sym_array_like,
      aux_sym_identifier_composite_repeat1,
  [1382] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_EQ,
    ACTIONS(185), 10,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1401] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym__escape_sequence_section,
    ACTIONS(207), 1,
      aux_sym_command_name_token1,
    STATE(33), 1,
      aux_sym__identifier_plain_repeat1,
    ACTIONS(121), 8,
      aux_sym_root_token1,
      anon_sym_SLASH,
      anon_sym_SPACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [1424] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      aux_sym_command_name_token1,
    ACTIONS(194), 1,
      sym__escape_sequence_section,
    STATE(34), 1,
      aux_sym__identifier_plain_repeat1,
    ACTIONS(115), 8,
      aux_sym_root_token1,
      anon_sym_SLASH,
      anon_sym_SPACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [1447] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      aux_sym_command_name_token1,
    ACTIONS(212), 1,
      sym__escape_sequence_section,
    STATE(34), 1,
      aux_sym__identifier_plain_repeat1,
    ACTIONS(161), 8,
      aux_sym_root_token1,
      anon_sym_SLASH,
      anon_sym_SPACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [1470] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_EQ,
    STATE(25), 1,
      aux_sym__identifier_chain_repeat1,
    ACTIONS(131), 2,
      anon_sym_DOT,
      anon_sym_DASH,
    ACTIONS(215), 7,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1493] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__escape_sequence_section,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym__identifier_plain_token1,
    ACTIONS(221), 1,
      sym__integer,
    STATE(27), 1,
      sym__identifier_plain,
    STATE(109), 1,
      sym__identifier_namespaced,
    STATE(160), 1,
      sym__string,
    STATE(216), 1,
      sym__identifier_chain,
    STATE(171), 2,
      sym_identifier_composite,
      sym_string,
  [1528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym__escape_sequence_section,
    ACTIONS(179), 9,
      aux_sym_root_token1,
      anon_sym_SLASH,
      anon_sym_SPACE,
      aux_sym_command_name_token1,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [1546] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_EQ,
    STATE(25), 1,
      aux_sym__identifier_chain_repeat1,
    ACTIONS(131), 2,
      anon_sym_DOT,
      anon_sym_DASH,
    ACTIONS(223), 6,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1568] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__escape_sequence_section,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym__identifier_plain_token1,
    STATE(30), 1,
      sym__identifier_plain,
    STATE(109), 1,
      sym__identifier_namespaced,
    STATE(160), 1,
      sym__string,
    STATE(216), 1,
      sym__identifier_chain,
    STATE(171), 2,
      sym_identifier_composite,
      sym_string,
  [1600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym__identifier_chain_repeat1,
    ACTIONS(145), 2,
      anon_sym_DOT,
      anon_sym_DASH,
    ACTIONS(183), 6,
      aux_sym_root_token1,
      anon_sym_SLASH,
      anon_sym_SPACE,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [1619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym__identifier_chain_repeat1,
    ACTIONS(227), 2,
      anon_sym_DOT,
      anon_sym_DASH,
    ACTIONS(190), 6,
      aux_sym_root_token1,
      anon_sym_SLASH,
      anon_sym_SPACE,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [1638] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(232), 2,
      anon_sym_f,
      anon_sym_F,
    ACTIONS(234), 2,
      anon_sym_d,
      anon_sym_D,
    ACTIONS(230), 4,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1656] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(52), 3,
      sym_object_like,
      sym_array_like,
      aux_sym_identifier_composite_repeat1,
  [1676] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 3,
      aux_sym_root_token1,
      anon_sym_SPACE,
      anon_sym_DOT,
    STATE(46), 3,
      sym_object_like,
      sym_array_like,
      aux_sym_identifier_composite_repeat1,
  [1696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 8,
      aux_sym_root_token1,
      anon_sym_SLASH,
      anon_sym_SPACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [1710] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(240), 3,
      aux_sym_root_token1,
      anon_sym_SPACE,
      anon_sym_DOT,
    STATE(46), 3,
      sym_object_like,
      sym_array_like,
      aux_sym_identifier_composite_repeat1,
  [1730] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym__integer,
    ACTIONS(250), 1,
      sym__float,
    ACTIONS(248), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(188), 3,
      sym_integer,
      sym_float,
      sym__C_number,
  [1750] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(252), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(60), 3,
      sym_object_like,
      sym_array_like,
      aux_sym_identifier_composite_repeat1,
  [1770] = 6,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_SLASH,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(139), 1,
      anon_sym_EQ,
    STATE(56), 1,
      aux_sym__identifier_path_repeat1,
    ACTIONS(135), 4,
      anon_sym_RBRACE,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1792] = 9,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_DOLLAR,
    ACTIONS(262), 1,
      aux_sym_command_name_token1,
    STATE(50), 1,
      aux_sym_root_repeat1,
    STATE(123), 1,
      aux_sym_command_name_repeat1,
    STATE(169), 1,
      sym_command_name,
    STATE(214), 1,
      sym_command,
  [1820] = 8,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_SLASH,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(135), 1,
      anon_sym_EQ_BANG,
    ACTIONS(139), 1,
      anon_sym_EQ,
    STATE(25), 1,
      aux_sym__identifier_chain_repeat1,
    STATE(56), 1,
      aux_sym__identifier_path_repeat1,
    ACTIONS(131), 2,
      anon_sym_DOT,
      anon_sym_DASH,
  [1846] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(268), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(52), 3,
      sym_object_like,
      sym_array_like,
      aux_sym_identifier_composite_repeat1,
  [1866] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_EQ,
    ACTIONS(273), 1,
      anon_sym_SLASH,
    STATE(53), 1,
      aux_sym__identifier_path_repeat1,
    ACTIONS(223), 5,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1886] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_EQ,
    ACTIONS(215), 7,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1902] = 9,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      aux_sym_root_repeat1,
    STATE(123), 1,
      aux_sym_command_name_repeat1,
    STATE(169), 1,
      sym_command_name,
    STATE(214), 1,
      sym_command,
  [1930] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_SLASH,
    ACTIONS(280), 1,
      anon_sym_EQ,
    STATE(53), 1,
      aux_sym__identifier_path_repeat1,
    ACTIONS(278), 5,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1950] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 3,
      aux_sym_root_token1,
      anon_sym_SPACE,
      anon_sym_DOT,
    STATE(46), 3,
      sym_object_like,
      sym_array_like,
      aux_sym_identifier_composite_repeat1,
  [1970] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym__integer,
    ACTIONS(250), 1,
      sym__float,
    ACTIONS(284), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(157), 3,
      sym_integer,
      sym_float,
      sym__C_number,
  [1990] = 7,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_SLASH,
    ACTIONS(139), 1,
      anon_sym_EQ,
    STATE(25), 1,
      aux_sym__identifier_chain_repeat1,
    STATE(56), 1,
      aux_sym__identifier_path_repeat1,
    ACTIONS(131), 2,
      anon_sym_DOT,
      anon_sym_DASH,
    ACTIONS(135), 2,
      anon_sym_COLON,
      anon_sym_EQ_BANG,
  [2014] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(286), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(52), 3,
      sym_object_like,
      sym_array_like,
      aux_sym_identifier_composite_repeat1,
  [2034] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(288), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
    STATE(57), 3,
      sym_object_like,
      sym_array_like,
      aux_sym_identifier_composite_repeat1,
  [2053] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    ACTIONS(294), 1,
      aux_sym__string_token2,
    STATE(65), 2,
      sym_escape_sequence,
      aux_sym__string_repeat2,
    ACTIONS(290), 3,
      sym__escape_sequence_backslash,
      sym__escape_sequence_section,
      sym__escape_sequence_percent,
  [2072] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__integer,
    ACTIONS(298), 1,
      sym__float,
    ACTIONS(296), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
    STATE(203), 3,
      sym_integer,
      sym_float,
      sym__C_number,
  [2091] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_EQ,
    ACTIONS(223), 6,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2106] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_SQUOTE,
    ACTIONS(305), 1,
      aux_sym__string_token2,
    STATE(65), 2,
      sym_escape_sequence,
      aux_sym__string_repeat2,
    ACTIONS(300), 3,
      sym__escape_sequence_backslash,
      sym__escape_sequence_section,
      sym__escape_sequence_percent,
  [2125] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(312), 1,
      aux_sym__string_token1,
    STATE(74), 2,
      sym_escape_sequence,
      aux_sym__string_repeat1,
    ACTIONS(308), 3,
      sym__escape_sequence_backslash,
      sym__escape_sequence_section,
      sym__escape_sequence_percent,
  [2144] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym__string_token2,
    ACTIONS(310), 1,
      anon_sym_SQUOTE,
    STATE(65), 2,
      sym_escape_sequence,
      aux_sym__string_repeat2,
    ACTIONS(290), 3,
      sym__escape_sequence_backslash,
      sym__escape_sequence_section,
      sym__escape_sequence_percent,
  [2163] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DQUOTE,
    ACTIONS(316), 1,
      aux_sym__string_token1,
    STATE(66), 2,
      sym_escape_sequence,
      aux_sym__string_repeat1,
    ACTIONS(308), 3,
      sym__escape_sequence_backslash,
      sym__escape_sequence_section,
      sym__escape_sequence_percent,
  [2182] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    ACTIONS(320), 1,
      aux_sym__string_token1,
    STATE(75), 2,
      sym_escape_sequence,
      aux_sym__string_repeat1,
    ACTIONS(308), 3,
      sym__escape_sequence_backslash,
      sym__escape_sequence_section,
      sym__escape_sequence_percent,
  [2201] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      aux_sym__string_token2,
    STATE(67), 2,
      sym_escape_sequence,
      aux_sym__string_repeat2,
    ACTIONS(290), 3,
      sym__escape_sequence_backslash,
      sym__escape_sequence_section,
      sym__escape_sequence_percent,
  [2220] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SQUOTE,
    ACTIONS(324), 1,
      aux_sym__string_token2,
    STATE(62), 2,
      sym_escape_sequence,
      aux_sym__string_repeat2,
    ACTIONS(290), 3,
      sym__escape_sequence_backslash,
      sym__escape_sequence_section,
      sym__escape_sequence_percent,
  [2239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym__identifier_chain_repeat1,
    ACTIONS(145), 2,
      anon_sym_DOT,
      anon_sym_DASH,
    ACTIONS(217), 4,
      aux_sym_root_token1,
      anon_sym_SPACE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2256] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__integer,
    ACTIONS(298), 1,
      sym__float,
    ACTIONS(326), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
    STATE(204), 3,
      sym_integer,
      sym_float,
      sym__C_number,
  [2275] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      aux_sym__string_token1,
    STATE(74), 2,
      sym_escape_sequence,
      aux_sym__string_repeat1,
    ACTIONS(328), 3,
      sym__escape_sequence_backslash,
      sym__escape_sequence_section,
      sym__escape_sequence_percent,
  [2294] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(312), 1,
      aux_sym__string_token1,
    STATE(74), 2,
      sym_escape_sequence,
      aux_sym__string_repeat1,
    ACTIONS(308), 3,
      sym__escape_sequence_backslash,
      sym__escape_sequence_section,
      sym__escape_sequence_percent,
  [2313] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_EQ,
    ACTIONS(336), 5,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2327] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_EQ,
    ACTIONS(135), 5,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2341] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__integer,
    ACTIONS(342), 1,
      anon_sym_RBRACK,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(144), 2,
      sym_boolean,
      sym_nbt_byte,
  [2359] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(344), 5,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2373] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_EQ,
    ACTIONS(167), 5,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym__identifier_chain_repeat1,
    ACTIONS(145), 2,
      anon_sym_DOT,
      anon_sym_DASH,
    ACTIONS(225), 3,
      aux_sym_root_token1,
      anon_sym_SLASH,
      anon_sym_SPACE,
  [2403] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_EQ,
    ACTIONS(348), 5,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2417] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_EQ,
    ACTIONS(352), 5,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ_BANG,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_SQUOTE,
    ACTIONS(356), 4,
      sym__escape_sequence_backslash,
      sym__escape_sequence_section,
      sym__escape_sequence_percent,
      aux_sym__string_token2,
  [2444] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__integer,
    ACTIONS(35), 1,
      sym__float,
    STATE(198), 3,
      sym_integer,
      sym_float,
      sym__C_number,
  [2459] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    ACTIONS(147), 1,
      anon_sym_COLON,
    STATE(127), 1,
      aux_sym__identifier_path_repeat1,
    ACTIONS(139), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
  [2476] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(360), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [2487] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(362), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [2498] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(364), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [2509] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(364), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [2520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 5,
      aux_sym_root_token1,
      anon_sym_SPACE,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2531] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(364), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [2542] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(364), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [2553] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(368), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [2564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 5,
      aux_sym_root_token1,
      anon_sym_SPACE,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 5,
      aux_sym_root_token1,
      anon_sym_SPACE,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
    ACTIONS(356), 4,
      sym__escape_sequence_backslash,
      sym__escape_sequence_section,
      sym__escape_sequence_percent,
      aux_sym__string_token1,
  [2599] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(368), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [2610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 5,
      aux_sym_root_token1,
      anon_sym_SPACE,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2621] = 5,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_SLASH,
    ACTIONS(139), 1,
      anon_sym_EQ,
    STATE(56), 1,
      aux_sym__identifier_path_repeat1,
    ACTIONS(135), 2,
      anon_sym_COLON,
      anon_sym_EQ_BANG,
  [2638] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_EQ,
    ACTIONS(372), 2,
      anon_sym_COLON,
      anon_sym_EQ_BANG,
    ACTIONS(376), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2653] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym__integer,
    ACTIONS(250), 1,
      sym__float,
    STATE(187), 3,
      sym_integer,
      sym_float,
      sym__C_number,
  [2668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 5,
      aux_sym_root_token1,
      anon_sym_SPACE,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 5,
      aux_sym_root_token1,
      anon_sym_SPACE,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 5,
      aux_sym_root_token1,
      anon_sym_SPACE,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2701] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_EQ,
    ACTIONS(372), 2,
      anon_sym_COLON,
      anon_sym_EQ_BANG,
    ACTIONS(380), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2716] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__integer,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(192), 2,
      sym_boolean,
      sym_nbt_byte,
  [2731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 5,
      aux_sym_root_token1,
      anon_sym_SPACE,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2742] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    STATE(57), 3,
      sym_object_like,
      sym_array_like,
      aux_sym_identifier_composite_repeat1,
  [2757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      aux_sym_command_name_token1,
    STATE(111), 1,
      aux_sym_command_name_repeat1,
    ACTIONS(384), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
  [2771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      aux_sym_command_name_token1,
    STATE(111), 1,
      aux_sym_command_name_repeat1,
    ACTIONS(388), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
  [2785] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__escape_sequence_section,
    ACTIONS(219), 1,
      aux_sym__identifier_plain_token1,
    STATE(81), 1,
      sym__identifier_plain,
    STATE(172), 1,
      sym__identifier_chain,
  [2801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 4,
      aux_sym_root_token1,
      anon_sym_SPACE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_SLASH,
    STATE(114), 1,
      aux_sym__identifier_path_repeat1,
    ACTIONS(225), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
  [2825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_DOT,
    STATE(115), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(396), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
  [2839] = 5,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(13), 1,
      sym_comment,
    STATE(123), 1,
      aux_sym_command_name_repeat1,
    STATE(180), 1,
      sym_command_name,
  [2855] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__escape_sequence_section,
    ACTIONS(219), 1,
      aux_sym__identifier_plain_token1,
    ACTIONS(221), 1,
      sym__integer,
    STATE(45), 1,
      sym__identifier_plain,
  [2871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_DOT,
    STATE(129), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(401), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
  [2885] = 5,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      aux_sym_command_name_token1,
    ACTIONS(13), 1,
      sym_comment,
    STATE(123), 1,
      aux_sym_command_name_repeat1,
    STATE(200), 1,
      sym_command_name,
  [2901] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_DOT_DOT,
    ACTIONS(405), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2913] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym__colon_ky_repeat1,
    ACTIONS(409), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2927] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym__colon_ky_repeat1,
    ACTIONS(411), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2941] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      aux_sym_command_name_token1,
    STATE(111), 1,
      aux_sym_command_name_repeat1,
    ACTIONS(413), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
  [2955] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym__equal_ky_repeat1,
    ACTIONS(415), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2969] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      aux_sym__equal_ky_repeat1,
    ACTIONS(417), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2983] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__escape_sequence_section,
    ACTIONS(219), 1,
      aux_sym__identifier_plain_token1,
    STATE(72), 1,
      sym__identifier_plain,
    STATE(113), 1,
      sym__identifier_chain,
  [2999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    STATE(114), 1,
      aux_sym__identifier_path_repeat1,
    ACTIONS(280), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
  [3013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_DOT,
    STATE(115), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(419), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
  [3027] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_DOT,
    STATE(115), 1,
      aux_sym_nbt_path_repeat1,
    ACTIONS(421), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
  [3041] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__escape_sequence_section,
    ACTIONS(423), 1,
      aux_sym__identifier_plain_token1,
    STATE(35), 1,
      sym__identifier_plain,
    STATE(54), 1,
      sym__identifier_chain,
  [3057] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__escape_sequence_section,
    ACTIONS(423), 1,
      aux_sym__identifier_plain_token1,
    ACTIONS(425), 1,
      sym__integer,
    STATE(31), 1,
      sym__identifier_plain,
  [3073] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym__colon_ky_repeat1,
    ACTIONS(427), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3087] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym__colon_ky_repeat1,
    ACTIONS(429), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3101] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__escape_sequence_section,
    ACTIONS(423), 1,
      aux_sym__identifier_plain_token1,
    STATE(38), 1,
      sym__identifier_plain,
    STATE(64), 1,
      sym__identifier_chain,
  [3117] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      aux_sym__equal_ky_repeat1,
    ACTIONS(434), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3131] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      aux_sym__equal_ky_repeat1,
    ACTIONS(436), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3145] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(254), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_DOLLAR,
      aux_sym_command_name_token1,
  [3155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      aux_sym_root_token1,
    ACTIONS(443), 1,
      anon_sym_SPACE,
    STATE(166), 1,
      aux_sym_command_repeat1,
  [3168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 3,
      aux_sym_root_token1,
      anon_sym_SPACE,
      anon_sym_DOT_DOT,
  [3177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__escape_sequence_section,
    ACTIONS(423), 1,
      aux_sym__identifier_plain_token1,
    STATE(228), 1,
      sym__identifier_plain,
  [3190] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(447), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3199] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      aux_sym_array_like_repeat1,
  [3212] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(453), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3221] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    STATE(153), 1,
      aux_sym_nbt_byte_array_repeat1,
  [3234] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(459), 1,
      anon_sym_RBRACK,
    STATE(142), 1,
      aux_sym_array_like_repeat1,
  [3247] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(461), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3256] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    ACTIONS(465), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      aux_sym_nbt_long_array_repeat1,
  [3269] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(467), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3278] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      anon_sym_RBRACK,
    STATE(159), 1,
      aux_sym_nbt_integer_array_repeat1,
  [3291] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(473), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3300] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(475), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      aux_sym_array_like_repeat1,
  [3313] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(477), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3322] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(479), 1,
      anon_sym_RBRACK,
    STATE(162), 1,
      aux_sym_nbt_byte_array_repeat1,
  [3335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      aux_sym_root_token1,
      anon_sym_SPACE,
      anon_sym_DOT_DOT,
  [3344] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(481), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3353] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    ACTIONS(483), 1,
      anon_sym_RBRACK,
    STATE(165), 1,
      aux_sym_nbt_long_array_repeat1,
  [3366] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(485), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3375] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(487), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3384] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      aux_sym_nbt_integer_array_repeat1,
  [3397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 3,
      aux_sym_root_token1,
      anon_sym_SPACE,
      anon_sym_DOT,
  [3406] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(491), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3415] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
    STATE(162), 1,
      aux_sym_nbt_byte_array_repeat1,
  [3428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_DOT_DOT,
    ACTIONS(498), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
  [3439] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(502), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3448] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RBRACK,
    STATE(165), 1,
      aux_sym_nbt_long_array_repeat1,
  [3461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      aux_sym_root_token1,
    ACTIONS(511), 1,
      anon_sym_SPACE,
    STATE(166), 1,
      aux_sym_command_repeat1,
  [3474] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(514), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3483] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      aux_sym_nbt_integer_array_repeat1,
  [3496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_SPACE,
    ACTIONS(521), 1,
      aux_sym_root_token1,
    STATE(181), 1,
      aux_sym_command_repeat1,
  [3509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__escape_sequence_section,
    ACTIONS(423), 1,
      aux_sym__identifier_plain_token1,
    STATE(223), 1,
      sym__identifier_plain,
  [3522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 3,
      aux_sym_root_token1,
      anon_sym_SPACE,
      anon_sym_DOT,
  [3531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 3,
      aux_sym_root_token1,
      anon_sym_SLASH,
      anon_sym_SPACE,
  [3540] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(230), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3549] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(523), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      aux_sym_array_like_repeat1,
  [3562] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(525), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3571] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(527), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3580] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(529), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3589] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(531), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3598] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      aux_sym_array_like_repeat1,
  [3611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_SPACE,
    ACTIONS(538), 1,
      aux_sym_root_token1,
    STATE(138), 1,
      aux_sym_command_repeat1,
  [3624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_SPACE,
    ACTIONS(538), 1,
      aux_sym_root_token1,
    STATE(166), 1,
      aux_sym_command_repeat1,
  [3637] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(540), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 3,
      aux_sym_root_token1,
      anon_sym_SPACE,
      anon_sym_DOT,
  [3655] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym__integer,
    ACTIONS(544), 1,
      anon_sym_RBRACK,
    STATE(147), 1,
      sym_nbt_long,
  [3668] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(546), 1,
      sym__integer,
    ACTIONS(548), 1,
      anon_sym_RBRACK,
    STATE(149), 1,
      sym_integer,
  [3681] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(550), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3690] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(284), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3699] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(552), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 3,
      aux_sym_root_token1,
      anon_sym_SPACE,
      anon_sym_DOT,
  [3717] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_EQ,
    ACTIONS(252), 2,
      anon_sym_COLON,
      anon_sym_EQ_BANG,
  [3728] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COLON,
    ACTIONS(556), 1,
      anon_sym_EQ,
    ACTIONS(558), 1,
      anon_sym_EQ_BANG,
  [3741] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(560), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3749] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(171), 2,
      anon_sym_b,
      anon_sym_B,
  [3757] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(173), 2,
      anon_sym_l,
      anon_sym_L,
  [3765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
  [3773] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_EQ,
    ACTIONS(566), 1,
      anon_sym_EQ_BANG,
  [3783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
  [3791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
  [3799] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(570), 1,
      aux_sym_command_name_token1,
    STATE(110), 1,
      aux_sym_command_name_repeat1,
  [3809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
  [3817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
  [3825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
  [3833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
  [3841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
  [3849] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(580), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
  [3865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 2,
      aux_sym_root_token1,
      anon_sym_SPACE,
  [3873] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym__integer,
    STATE(211), 1,
      sym_nbt_long,
  [3883] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(582), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3891] = 3,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(546), 1,
      sym__integer,
    STATE(209), 1,
      sym_integer,
  [3901] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(584), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3909] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_SEMI,
  [3916] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_RBRACK,
  [3923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      aux_sym_root_token1,
  [3930] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_RBRACK,
  [3937] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_COLON,
  [3944] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(594), 1,
      ts_builtin_sym_end,
  [3951] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_COLON,
  [3958] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_SEMI,
  [3965] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_SEMI,
  [3972] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_RBRACE,
  [3979] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
  [3986] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
  [3993] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_LBRACE,
  [4000] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_RBRACK,
  [4007] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_RBRACK,
  [4014] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
  [4021] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_RBRACE,
  [4028] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
  [4035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_SPACE,
  [4042] = 2,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 99,
  [SMALL_STATE(5)] = 198,
  [SMALL_STATE(6)] = 292,
  [SMALL_STATE(7)] = 386,
  [SMALL_STATE(8)] = 482,
  [SMALL_STATE(9)] = 569,
  [SMALL_STATE(10)] = 656,
  [SMALL_STATE(11)] = 700,
  [SMALL_STATE(12)] = 757,
  [SMALL_STATE(13)] = 814,
  [SMALL_STATE(14)] = 871,
  [SMALL_STATE(15)] = 919,
  [SMALL_STATE(16)] = 967,
  [SMALL_STATE(17)] = 995,
  [SMALL_STATE(18)] = 1023,
  [SMALL_STATE(19)] = 1051,
  [SMALL_STATE(20)] = 1087,
  [SMALL_STATE(21)] = 1127,
  [SMALL_STATE(22)] = 1155,
  [SMALL_STATE(23)] = 1183,
  [SMALL_STATE(24)] = 1210,
  [SMALL_STATE(25)] = 1231,
  [SMALL_STATE(26)] = 1255,
  [SMALL_STATE(27)] = 1279,
  [SMALL_STATE(28)] = 1305,
  [SMALL_STATE(29)] = 1328,
  [SMALL_STATE(30)] = 1351,
  [SMALL_STATE(31)] = 1382,
  [SMALL_STATE(32)] = 1401,
  [SMALL_STATE(33)] = 1424,
  [SMALL_STATE(34)] = 1447,
  [SMALL_STATE(35)] = 1470,
  [SMALL_STATE(36)] = 1493,
  [SMALL_STATE(37)] = 1528,
  [SMALL_STATE(38)] = 1546,
  [SMALL_STATE(39)] = 1568,
  [SMALL_STATE(40)] = 1600,
  [SMALL_STATE(41)] = 1619,
  [SMALL_STATE(42)] = 1638,
  [SMALL_STATE(43)] = 1656,
  [SMALL_STATE(44)] = 1676,
  [SMALL_STATE(45)] = 1696,
  [SMALL_STATE(46)] = 1710,
  [SMALL_STATE(47)] = 1730,
  [SMALL_STATE(48)] = 1750,
  [SMALL_STATE(49)] = 1770,
  [SMALL_STATE(50)] = 1792,
  [SMALL_STATE(51)] = 1820,
  [SMALL_STATE(52)] = 1846,
  [SMALL_STATE(53)] = 1866,
  [SMALL_STATE(54)] = 1886,
  [SMALL_STATE(55)] = 1902,
  [SMALL_STATE(56)] = 1930,
  [SMALL_STATE(57)] = 1950,
  [SMALL_STATE(58)] = 1970,
  [SMALL_STATE(59)] = 1990,
  [SMALL_STATE(60)] = 2014,
  [SMALL_STATE(61)] = 2034,
  [SMALL_STATE(62)] = 2053,
  [SMALL_STATE(63)] = 2072,
  [SMALL_STATE(64)] = 2091,
  [SMALL_STATE(65)] = 2106,
  [SMALL_STATE(66)] = 2125,
  [SMALL_STATE(67)] = 2144,
  [SMALL_STATE(68)] = 2163,
  [SMALL_STATE(69)] = 2182,
  [SMALL_STATE(70)] = 2201,
  [SMALL_STATE(71)] = 2220,
  [SMALL_STATE(72)] = 2239,
  [SMALL_STATE(73)] = 2256,
  [SMALL_STATE(74)] = 2275,
  [SMALL_STATE(75)] = 2294,
  [SMALL_STATE(76)] = 2313,
  [SMALL_STATE(77)] = 2327,
  [SMALL_STATE(78)] = 2341,
  [SMALL_STATE(79)] = 2359,
  [SMALL_STATE(80)] = 2373,
  [SMALL_STATE(81)] = 2387,
  [SMALL_STATE(82)] = 2403,
  [SMALL_STATE(83)] = 2417,
  [SMALL_STATE(84)] = 2431,
  [SMALL_STATE(85)] = 2444,
  [SMALL_STATE(86)] = 2459,
  [SMALL_STATE(87)] = 2476,
  [SMALL_STATE(88)] = 2487,
  [SMALL_STATE(89)] = 2498,
  [SMALL_STATE(90)] = 2509,
  [SMALL_STATE(91)] = 2520,
  [SMALL_STATE(92)] = 2531,
  [SMALL_STATE(93)] = 2542,
  [SMALL_STATE(94)] = 2553,
  [SMALL_STATE(95)] = 2564,
  [SMALL_STATE(96)] = 2575,
  [SMALL_STATE(97)] = 2586,
  [SMALL_STATE(98)] = 2599,
  [SMALL_STATE(99)] = 2610,
  [SMALL_STATE(100)] = 2621,
  [SMALL_STATE(101)] = 2638,
  [SMALL_STATE(102)] = 2653,
  [SMALL_STATE(103)] = 2668,
  [SMALL_STATE(104)] = 2679,
  [SMALL_STATE(105)] = 2690,
  [SMALL_STATE(106)] = 2701,
  [SMALL_STATE(107)] = 2716,
  [SMALL_STATE(108)] = 2731,
  [SMALL_STATE(109)] = 2742,
  [SMALL_STATE(110)] = 2757,
  [SMALL_STATE(111)] = 2771,
  [SMALL_STATE(112)] = 2785,
  [SMALL_STATE(113)] = 2801,
  [SMALL_STATE(114)] = 2811,
  [SMALL_STATE(115)] = 2825,
  [SMALL_STATE(116)] = 2839,
  [SMALL_STATE(117)] = 2855,
  [SMALL_STATE(118)] = 2871,
  [SMALL_STATE(119)] = 2885,
  [SMALL_STATE(120)] = 2901,
  [SMALL_STATE(121)] = 2913,
  [SMALL_STATE(122)] = 2927,
  [SMALL_STATE(123)] = 2941,
  [SMALL_STATE(124)] = 2955,
  [SMALL_STATE(125)] = 2969,
  [SMALL_STATE(126)] = 2983,
  [SMALL_STATE(127)] = 2999,
  [SMALL_STATE(128)] = 3013,
  [SMALL_STATE(129)] = 3027,
  [SMALL_STATE(130)] = 3041,
  [SMALL_STATE(131)] = 3057,
  [SMALL_STATE(132)] = 3073,
  [SMALL_STATE(133)] = 3087,
  [SMALL_STATE(134)] = 3101,
  [SMALL_STATE(135)] = 3117,
  [SMALL_STATE(136)] = 3131,
  [SMALL_STATE(137)] = 3145,
  [SMALL_STATE(138)] = 3155,
  [SMALL_STATE(139)] = 3168,
  [SMALL_STATE(140)] = 3177,
  [SMALL_STATE(141)] = 3190,
  [SMALL_STATE(142)] = 3199,
  [SMALL_STATE(143)] = 3212,
  [SMALL_STATE(144)] = 3221,
  [SMALL_STATE(145)] = 3234,
  [SMALL_STATE(146)] = 3247,
  [SMALL_STATE(147)] = 3256,
  [SMALL_STATE(148)] = 3269,
  [SMALL_STATE(149)] = 3278,
  [SMALL_STATE(150)] = 3291,
  [SMALL_STATE(151)] = 3300,
  [SMALL_STATE(152)] = 3313,
  [SMALL_STATE(153)] = 3322,
  [SMALL_STATE(154)] = 3335,
  [SMALL_STATE(155)] = 3344,
  [SMALL_STATE(156)] = 3353,
  [SMALL_STATE(157)] = 3366,
  [SMALL_STATE(158)] = 3375,
  [SMALL_STATE(159)] = 3384,
  [SMALL_STATE(160)] = 3397,
  [SMALL_STATE(161)] = 3406,
  [SMALL_STATE(162)] = 3415,
  [SMALL_STATE(163)] = 3428,
  [SMALL_STATE(164)] = 3439,
  [SMALL_STATE(165)] = 3448,
  [SMALL_STATE(166)] = 3461,
  [SMALL_STATE(167)] = 3474,
  [SMALL_STATE(168)] = 3483,
  [SMALL_STATE(169)] = 3496,
  [SMALL_STATE(170)] = 3509,
  [SMALL_STATE(171)] = 3522,
  [SMALL_STATE(172)] = 3531,
  [SMALL_STATE(173)] = 3540,
  [SMALL_STATE(174)] = 3549,
  [SMALL_STATE(175)] = 3562,
  [SMALL_STATE(176)] = 3571,
  [SMALL_STATE(177)] = 3580,
  [SMALL_STATE(178)] = 3589,
  [SMALL_STATE(179)] = 3598,
  [SMALL_STATE(180)] = 3611,
  [SMALL_STATE(181)] = 3624,
  [SMALL_STATE(182)] = 3637,
  [SMALL_STATE(183)] = 3646,
  [SMALL_STATE(184)] = 3655,
  [SMALL_STATE(185)] = 3668,
  [SMALL_STATE(186)] = 3681,
  [SMALL_STATE(187)] = 3690,
  [SMALL_STATE(188)] = 3699,
  [SMALL_STATE(189)] = 3708,
  [SMALL_STATE(190)] = 3717,
  [SMALL_STATE(191)] = 3728,
  [SMALL_STATE(192)] = 3741,
  [SMALL_STATE(193)] = 3749,
  [SMALL_STATE(194)] = 3757,
  [SMALL_STATE(195)] = 3765,
  [SMALL_STATE(196)] = 3773,
  [SMALL_STATE(197)] = 3783,
  [SMALL_STATE(198)] = 3791,
  [SMALL_STATE(199)] = 3799,
  [SMALL_STATE(200)] = 3809,
  [SMALL_STATE(201)] = 3817,
  [SMALL_STATE(202)] = 3825,
  [SMALL_STATE(203)] = 3833,
  [SMALL_STATE(204)] = 3841,
  [SMALL_STATE(205)] = 3849,
  [SMALL_STATE(206)] = 3857,
  [SMALL_STATE(207)] = 3865,
  [SMALL_STATE(208)] = 3873,
  [SMALL_STATE(209)] = 3883,
  [SMALL_STATE(210)] = 3891,
  [SMALL_STATE(211)] = 3901,
  [SMALL_STATE(212)] = 3909,
  [SMALL_STATE(213)] = 3916,
  [SMALL_STATE(214)] = 3923,
  [SMALL_STATE(215)] = 3930,
  [SMALL_STATE(216)] = 3937,
  [SMALL_STATE(217)] = 3944,
  [SMALL_STATE(218)] = 3951,
  [SMALL_STATE(219)] = 3958,
  [SMALL_STATE(220)] = 3965,
  [SMALL_STATE(221)] = 3972,
  [SMALL_STATE(222)] = 3979,
  [SMALL_STATE(223)] = 3986,
  [SMALL_STATE(224)] = 3993,
  [SMALL_STATE(225)] = 4000,
  [SMALL_STATE(226)] = 4007,
  [SMALL_STATE(227)] = 4014,
  [SMALL_STATE(228)] = 4021,
  [SMALL_STATE(229)] = 4028,
  [SMALL_STATE(230)] = 4035,
  [SMALL_STATE(231)] = 4042,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_ky, 2, 0, 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equal_ky, 2, 0, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__equal_ky_repeat1, 3, 0, 17),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__colon_ky_repeat1, 3, 0, 17),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_plain, 2, 0, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_plain, 2, 0, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_plain, 1, 0, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_plain, 1, 0, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_plain, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_plain, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_plain_repeat1, 2, 0, 0),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_plain_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_plain_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_plain_repeat1, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_plain, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_plain, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_plain_repeat1, 1, 0, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_plain_repeat1, 1, 0, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_chain, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_chain, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_chain_repeat1, 2, 0, 0),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_chain_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_chain_repeat1, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat1, 2, 0, 8),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat1, 2, 0, 8), SHIFT(131),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_plain_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_plain_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_namespaced, 3, 0, 9),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_namespaced, 3, 0, 9),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_path_repeat1, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_path_repeat1, 2, 0, 0),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_chain_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_composite, 2, 0, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_composite, 2, 0, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_composite_repeat1, 2, 0, 0),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_composite_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_composite_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_axis, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2, 0, 0),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_root_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_composite_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_composite_repeat1, 2, 0, 0),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_composite_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_path_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_path, 2, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_path, 2, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_composite, 2, 0, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 2, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_composite, 2, 0, 4),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 2, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat2, 2, 0, 0), SHIFT_REPEAT(84),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat2, 2, 0, 0),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat2, 2, 0, 0), SHIFT_REPEAT(65),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_axis, 1, 0, 0),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2, 0, 0),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 2, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 2, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_macro, 4, 0, 10),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_macro, 4, 0, 10),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_like, 4, 0, 13),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_like, 3, 0, 7),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_like, 3, 0, 6),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_like, 2, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_like, 2, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_like, 3, 0, 6),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyable, 1, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__keyable, 1, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__itemable, 1, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_like, 3, 0, 7),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__C_number, 1, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_like, 4, 0, 13),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 2, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_name_repeat1, 2, 0, 0),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_name_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_path_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat1, 2, 0, 0),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nbt_path_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__C_identifier, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__valuable, 1, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_ky, 3, 0, 11),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_ky, 3, 0, 12),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equal_ky, 3, 0, 11),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equal_ky, 3, 0, 12),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_path, 2, 0, 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nbt_path, 2, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_ky, 4, 0, 15),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__colon_ky_repeat1, 2, 0, 16),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__colon_ky_repeat1, 2, 0, 16), SHIFT_REPEAT(14),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equal_ky, 4, 0, 15),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__equal_ky_repeat1, 2, 0, 16),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__equal_ky_repeat1, 2, 0, 16), SHIFT_REPEAT(15),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__colon_ky_repeat1, 4, 0, 18),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_byte_array, 4, 0, 19),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_long_array, 4, 0, 19),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_integer_array, 4, 0, 19),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__equal_ky_repeat1, 4, 0, 18),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_byte_array, 5, 0, 20),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_long_array, 5, 0, 20),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_integer_array, 5, 0, 20),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_byte_array, 6, 0, 21),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_byte_array_repeat1, 2, 0, 14), SHIFT_REPEAT(107),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_byte_array_repeat1, 2, 0, 14),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_params, 1, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_long_array, 6, 0, 21),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_long_array_repeat1, 2, 0, 14), SHIFT_REPEAT(208),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_long_array_repeat1, 2, 0, 14),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_integer_array, 6, 0, 21),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nbt_integer_array_repeat1, 2, 0, 14), SHIFT_REPEAT(210),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_integer_array_repeat1, 2, 0, 14),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_double, 2, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_float, 2, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_short, 2, 0, 0),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_like_repeat1, 2, 0, 14), SHIFT_REPEAT(10),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_like_repeat1, 2, 0, 14),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_long, 2, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_byte, 2, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_axis, 2, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_byte_array_repeat1, 2, 0, 7),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_params, 3, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subcommand_keyword, 1, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_axis, 2, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_like_repeat1, 2, 0, 7),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_integer_array_repeat1, 2, 0, 7),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nbt_long_array_repeat1, 2, 0, 7),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [594] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
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

TS_PUBLIC const TSLanguage *tree_sitter_mcfuncx(void) {
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

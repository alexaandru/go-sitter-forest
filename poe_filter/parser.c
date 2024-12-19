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
#define STATE_COUNT 187
#define LARGE_STATE_COUNT 32
#define SYMBOL_COUNT 164
#define ALIAS_COUNT 0
#define TOKEN_COUNT 132
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 26

enum ts_symbol_identifiers {
  anon_sym_Show = 1,
  anon_sym_Hide = 2,
  anon_sym_Minimal = 3,
  anon_sym_Import = 4,
  anon_sym_Optional = 5,
  anon_sym_AlternateQuality = 6,
  anon_sym_AnyEnchantment = 7,
  anon_sym_ArchnemesisMod = 8,
  anon_sym_AreaLevel = 9,
  anon_sym_BaseArmour = 10,
  anon_sym_BaseDefencePercentile = 11,
  anon_sym_BaseEnergyShield = 12,
  anon_sym_BaseEvasion = 13,
  anon_sym_BaseType = 14,
  anon_sym_BaseWard = 15,
  anon_sym_BlightedMap = 16,
  anon_sym_Class = 17,
  anon_sym_Corrupted = 18,
  anon_sym_CorruptedMods = 19,
  anon_sym_DropLevel = 20,
  anon_sym_ElderItem = 21,
  anon_sym_ElderMap = 22,
  anon_sym_EnchantmentPassiveNode = 23,
  anon_sym_EnchantmentPassiveNum = 24,
  anon_sym_FracturedItem = 25,
  anon_sym_GemLevel = 26,
  anon_sym_GemQualityType = 27,
  anon_sym_HasCruciblePassiveTree = 28,
  anon_sym_HasEaterOfWorldsImplicit = 29,
  anon_sym_HasEnchantment = 30,
  anon_sym_HasExplicitMod = 31,
  anon_sym_HasImplicitMod = 32,
  anon_sym_HasInfluence = 33,
  anon_sym_HasSearingExarchImplicit = 34,
  anon_sym_Height = 35,
  anon_sym_Identified = 36,
  anon_sym_ItemLevel = 37,
  anon_sym_LinkedSockets = 38,
  anon_sym_MapTier = 39,
  anon_sym_Mirrored = 40,
  anon_sym_Quality = 41,
  anon_sym_Rarity = 42,
  anon_sym_Replica = 43,
  anon_sym_Scourged = 44,
  anon_sym_ShapedMap = 45,
  anon_sym_ShaperItem = 46,
  anon_sym_SocketGroup = 47,
  anon_sym_Sockets = 48,
  anon_sym_StackSize = 49,
  anon_sym_SynthesisedItem = 50,
  anon_sym_TransfiguredGem = 51,
  anon_sym_UberBlightedMap = 52,
  anon_sym_WaystoneTier = 53,
  anon_sym_Width = 54,
  anon_sym_PlayAlertSound = 55,
  anon_sym_None = 56,
  anon_sym_PlayAlertSoundPositional = 57,
  anon_sym_CustomAlertSound = 58,
  aux_sym_action_token1 = 59,
  anon_sym_CustomAlertSoundOptional = 60,
  anon_sym_DisableDropSound = 61,
  anon_sym_EnableDropSound = 62,
  anon_sym_DisableDropSoundIfAlertSound = 63,
  anon_sym_EnableDropSoundIfAlertSound = 64,
  anon_sym_MinimapIcon = 65,
  anon_sym_DASH1 = 66,
  anon_sym_PlayEffect = 67,
  anon_sym_Temp = 68,
  anon_sym_SetBackgroundColor = 69,
  anon_sym_SetBorderColor = 70,
  anon_sym_SetFontSize = 71,
  anon_sym_SetTextColor = 72,
  anon_sym_Continue = 73,
  aux_sym__equal_operator_token1 = 74,
  aux_sym__range_operator_token1 = 75,
  sym_boolean = 76,
  anon_sym_DQUOTE = 77,
  aux_sym_quality_token1 = 78,
  anon_sym_Superior = 79,
  anon_sym_Divergent = 80,
  anon_sym_Anomalous = 81,
  anon_sym_Phantasmal = 82,
  aux_sym_rarity_token1 = 83,
  anon_sym_Normal = 84,
  anon_sym_Magic = 85,
  anon_sym_Rare = 86,
  anon_sym_Unique = 87,
  aux_sym_influence_token1 = 88,
  anon_sym_Shaper = 89,
  anon_sym_Elder = 90,
  anon_sym_Crusader = 91,
  anon_sym_Hunter = 92,
  anon_sym_Redeemer = 93,
  anon_sym_Warlord = 94,
  aux_sym_sockets_token1 = 95,
  aux_sym_sockets_token2 = 96,
  anon_sym_Red = 97,
  anon_sym_Green = 98,
  anon_sym_Blue = 99,
  anon_sym_Brown = 100,
  anon_sym_White = 101,
  anon_sym_Yellow = 102,
  anon_sym_Cyan = 103,
  anon_sym_Grey = 104,
  anon_sym_Orange = 105,
  anon_sym_Pink = 106,
  anon_sym_Purple = 107,
  anon_sym_Circle = 108,
  anon_sym_Diamond = 109,
  anon_sym_Hexagon = 110,
  anon_sym_Square = 111,
  anon_sym_Star = 112,
  anon_sym_Triangle = 113,
  anon_sym_Cross = 114,
  anon_sym_Moon = 115,
  anon_sym_Raindrop = 116,
  anon_sym_Kite = 117,
  anon_sym_Pentagon = 118,
  anon_sym_UpsideDownHouse = 119,
  aux_sym_string_token1 = 120,
  aux_sym_string_token2 = 121,
  aux_sym_file_token1 = 122,
  sym_number = 123,
  aux_sym__id_token1 = 124,
  aux_sym__volume_token1 = 125,
  aux_sym__color_token1 = 126,
  aux_sym__icon_size_token1 = 127,
  aux_sym__font_size_token1 = 128,
  sym_comment = 129,
  sym__space = 130,
  sym__eol = 131,
  sym_filter = 132,
  sym_block = 133,
  sym_import = 134,
  sym_condition = 135,
  sym_action = 136,
  sym_continue = 137,
  sym__equal_operator = 138,
  sym__range_operator = 139,
  sym_quality = 140,
  sym_rarity = 141,
  sym_influence = 142,
  sym_sockets = 143,
  sym_colour = 144,
  sym_shape = 145,
  sym_string = 146,
  sym_file = 147,
  sym__quantity = 148,
  sym__id = 149,
  sym__volume = 150,
  sym__color = 151,
  sym__icon_size = 152,
  sym__font_size = 153,
  aux_sym_filter_repeat1 = 154,
  aux_sym_block_repeat1 = 155,
  aux_sym_condition_repeat1 = 156,
  aux_sym_condition_repeat2 = 157,
  aux_sym_condition_repeat3 = 158,
  aux_sym_condition_repeat4 = 159,
  aux_sym_condition_repeat5 = 160,
  aux_sym_condition_repeat6 = 161,
  aux_sym_condition_repeat7 = 162,
  aux_sym_condition_repeat8 = 163,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_Show] = "Show",
  [anon_sym_Hide] = "Hide",
  [anon_sym_Minimal] = "Minimal",
  [anon_sym_Import] = "Import",
  [anon_sym_Optional] = "Optional",
  [anon_sym_AlternateQuality] = "name",
  [anon_sym_AnyEnchantment] = "name",
  [anon_sym_ArchnemesisMod] = "name",
  [anon_sym_AreaLevel] = "name",
  [anon_sym_BaseArmour] = "name",
  [anon_sym_BaseDefencePercentile] = "name",
  [anon_sym_BaseEnergyShield] = "name",
  [anon_sym_BaseEvasion] = "name",
  [anon_sym_BaseType] = "name",
  [anon_sym_BaseWard] = "name",
  [anon_sym_BlightedMap] = "name",
  [anon_sym_Class] = "name",
  [anon_sym_Corrupted] = "name",
  [anon_sym_CorruptedMods] = "name",
  [anon_sym_DropLevel] = "name",
  [anon_sym_ElderItem] = "name",
  [anon_sym_ElderMap] = "name",
  [anon_sym_EnchantmentPassiveNode] = "name",
  [anon_sym_EnchantmentPassiveNum] = "name",
  [anon_sym_FracturedItem] = "name",
  [anon_sym_GemLevel] = "name",
  [anon_sym_GemQualityType] = "name",
  [anon_sym_HasCruciblePassiveTree] = "name",
  [anon_sym_HasEaterOfWorldsImplicit] = "name",
  [anon_sym_HasEnchantment] = "name",
  [anon_sym_HasExplicitMod] = "name",
  [anon_sym_HasImplicitMod] = "name",
  [anon_sym_HasInfluence] = "name",
  [anon_sym_HasSearingExarchImplicit] = "name",
  [anon_sym_Height] = "name",
  [anon_sym_Identified] = "name",
  [anon_sym_ItemLevel] = "name",
  [anon_sym_LinkedSockets] = "name",
  [anon_sym_MapTier] = "name",
  [anon_sym_Mirrored] = "name",
  [anon_sym_Quality] = "name",
  [anon_sym_Rarity] = "name",
  [anon_sym_Replica] = "name",
  [anon_sym_Scourged] = "name",
  [anon_sym_ShapedMap] = "name",
  [anon_sym_ShaperItem] = "name",
  [anon_sym_SocketGroup] = "name",
  [anon_sym_Sockets] = "name",
  [anon_sym_StackSize] = "name",
  [anon_sym_SynthesisedItem] = "name",
  [anon_sym_TransfiguredGem] = "name",
  [anon_sym_UberBlightedMap] = "name",
  [anon_sym_WaystoneTier] = "name",
  [anon_sym_Width] = "name",
  [anon_sym_PlayAlertSound] = "name",
  [anon_sym_None] = "None",
  [anon_sym_PlayAlertSoundPositional] = "name",
  [anon_sym_CustomAlertSound] = "name",
  [aux_sym_action_token1] = "disable",
  [anon_sym_CustomAlertSoundOptional] = "name",
  [anon_sym_DisableDropSound] = "name",
  [anon_sym_EnableDropSound] = "name",
  [anon_sym_DisableDropSoundIfAlertSound] = "name",
  [anon_sym_EnableDropSoundIfAlertSound] = "name",
  [anon_sym_MinimapIcon] = "name",
  [anon_sym_DASH1] = "disable",
  [anon_sym_PlayEffect] = "name",
  [anon_sym_Temp] = "Temp",
  [anon_sym_SetBackgroundColor] = "name",
  [anon_sym_SetBorderColor] = "name",
  [anon_sym_SetFontSize] = "name",
  [anon_sym_SetTextColor] = "name",
  [anon_sym_Continue] = "Continue",
  [aux_sym__equal_operator_token1] = "operator",
  [aux_sym__range_operator_token1] = "operator",
  [sym_boolean] = "boolean",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quality_token1] = "quality_token1",
  [anon_sym_Superior] = "Superior",
  [anon_sym_Divergent] = "Divergent",
  [anon_sym_Anomalous] = "Anomalous",
  [anon_sym_Phantasmal] = "Phantasmal",
  [aux_sym_rarity_token1] = "rarity_token1",
  [anon_sym_Normal] = "Normal",
  [anon_sym_Magic] = "Magic",
  [anon_sym_Rare] = "Rare",
  [anon_sym_Unique] = "Unique",
  [aux_sym_influence_token1] = "influence_token1",
  [anon_sym_Shaper] = "Shaper",
  [anon_sym_Elder] = "Elder",
  [anon_sym_Crusader] = "Crusader",
  [anon_sym_Hunter] = "Hunter",
  [anon_sym_Redeemer] = "Redeemer",
  [anon_sym_Warlord] = "Warlord",
  [aux_sym_sockets_token1] = "sockets_token1",
  [aux_sym_sockets_token2] = "sockets_token2",
  [anon_sym_Red] = "Red",
  [anon_sym_Green] = "Green",
  [anon_sym_Blue] = "Blue",
  [anon_sym_Brown] = "Brown",
  [anon_sym_White] = "White",
  [anon_sym_Yellow] = "Yellow",
  [anon_sym_Cyan] = "Cyan",
  [anon_sym_Grey] = "Grey",
  [anon_sym_Orange] = "Orange",
  [anon_sym_Pink] = "Pink",
  [anon_sym_Purple] = "Purple",
  [anon_sym_Circle] = "Circle",
  [anon_sym_Diamond] = "Diamond",
  [anon_sym_Hexagon] = "Hexagon",
  [anon_sym_Square] = "Square",
  [anon_sym_Star] = "Star",
  [anon_sym_Triangle] = "Triangle",
  [anon_sym_Cross] = "Cross",
  [anon_sym_Moon] = "Moon",
  [anon_sym_Raindrop] = "Raindrop",
  [anon_sym_Kite] = "Kite",
  [anon_sym_Pentagon] = "Pentagon",
  [anon_sym_UpsideDownHouse] = "UpsideDownHouse",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym_file_token1] = "file_token1",
  [sym_number] = "number",
  [aux_sym__id_token1] = "number",
  [aux_sym__volume_token1] = "number",
  [aux_sym__color_token1] = "number",
  [aux_sym__icon_size_token1] = "number",
  [aux_sym__font_size_token1] = "number",
  [sym_comment] = "comment",
  [sym__space] = "_space",
  [sym__eol] = "_eol",
  [sym_filter] = "filter",
  [sym_block] = "block",
  [sym_import] = "import",
  [sym_condition] = "condition",
  [sym_action] = "action",
  [sym_continue] = "continue",
  [sym__equal_operator] = "_equal_operator",
  [sym__range_operator] = "_range_operator",
  [sym_quality] = "quality",
  [sym_rarity] = "rarity",
  [sym_influence] = "influence",
  [sym_sockets] = "sockets",
  [sym_colour] = "colour",
  [sym_shape] = "shape",
  [sym_string] = "string",
  [sym_file] = "file",
  [sym__quantity] = "_quantity",
  [sym__id] = "_id",
  [sym__volume] = "_volume",
  [sym__color] = "_color",
  [sym__icon_size] = "_icon_size",
  [sym__font_size] = "_font_size",
  [aux_sym_filter_repeat1] = "filter_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_condition_repeat1] = "condition_repeat1",
  [aux_sym_condition_repeat2] = "condition_repeat2",
  [aux_sym_condition_repeat3] = "condition_repeat3",
  [aux_sym_condition_repeat4] = "condition_repeat4",
  [aux_sym_condition_repeat5] = "condition_repeat5",
  [aux_sym_condition_repeat6] = "condition_repeat6",
  [aux_sym_condition_repeat7] = "condition_repeat7",
  [aux_sym_condition_repeat8] = "condition_repeat8",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_Show] = anon_sym_Show,
  [anon_sym_Hide] = anon_sym_Hide,
  [anon_sym_Minimal] = anon_sym_Minimal,
  [anon_sym_Import] = anon_sym_Import,
  [anon_sym_Optional] = anon_sym_Optional,
  [anon_sym_AlternateQuality] = anon_sym_AlternateQuality,
  [anon_sym_AnyEnchantment] = anon_sym_AlternateQuality,
  [anon_sym_ArchnemesisMod] = anon_sym_AlternateQuality,
  [anon_sym_AreaLevel] = anon_sym_AlternateQuality,
  [anon_sym_BaseArmour] = anon_sym_AlternateQuality,
  [anon_sym_BaseDefencePercentile] = anon_sym_AlternateQuality,
  [anon_sym_BaseEnergyShield] = anon_sym_AlternateQuality,
  [anon_sym_BaseEvasion] = anon_sym_AlternateQuality,
  [anon_sym_BaseType] = anon_sym_AlternateQuality,
  [anon_sym_BaseWard] = anon_sym_AlternateQuality,
  [anon_sym_BlightedMap] = anon_sym_AlternateQuality,
  [anon_sym_Class] = anon_sym_AlternateQuality,
  [anon_sym_Corrupted] = anon_sym_AlternateQuality,
  [anon_sym_CorruptedMods] = anon_sym_AlternateQuality,
  [anon_sym_DropLevel] = anon_sym_AlternateQuality,
  [anon_sym_ElderItem] = anon_sym_AlternateQuality,
  [anon_sym_ElderMap] = anon_sym_AlternateQuality,
  [anon_sym_EnchantmentPassiveNode] = anon_sym_AlternateQuality,
  [anon_sym_EnchantmentPassiveNum] = anon_sym_AlternateQuality,
  [anon_sym_FracturedItem] = anon_sym_AlternateQuality,
  [anon_sym_GemLevel] = anon_sym_AlternateQuality,
  [anon_sym_GemQualityType] = anon_sym_AlternateQuality,
  [anon_sym_HasCruciblePassiveTree] = anon_sym_AlternateQuality,
  [anon_sym_HasEaterOfWorldsImplicit] = anon_sym_AlternateQuality,
  [anon_sym_HasEnchantment] = anon_sym_AlternateQuality,
  [anon_sym_HasExplicitMod] = anon_sym_AlternateQuality,
  [anon_sym_HasImplicitMod] = anon_sym_AlternateQuality,
  [anon_sym_HasInfluence] = anon_sym_AlternateQuality,
  [anon_sym_HasSearingExarchImplicit] = anon_sym_AlternateQuality,
  [anon_sym_Height] = anon_sym_AlternateQuality,
  [anon_sym_Identified] = anon_sym_AlternateQuality,
  [anon_sym_ItemLevel] = anon_sym_AlternateQuality,
  [anon_sym_LinkedSockets] = anon_sym_AlternateQuality,
  [anon_sym_MapTier] = anon_sym_AlternateQuality,
  [anon_sym_Mirrored] = anon_sym_AlternateQuality,
  [anon_sym_Quality] = anon_sym_AlternateQuality,
  [anon_sym_Rarity] = anon_sym_AlternateQuality,
  [anon_sym_Replica] = anon_sym_AlternateQuality,
  [anon_sym_Scourged] = anon_sym_AlternateQuality,
  [anon_sym_ShapedMap] = anon_sym_AlternateQuality,
  [anon_sym_ShaperItem] = anon_sym_AlternateQuality,
  [anon_sym_SocketGroup] = anon_sym_AlternateQuality,
  [anon_sym_Sockets] = anon_sym_AlternateQuality,
  [anon_sym_StackSize] = anon_sym_AlternateQuality,
  [anon_sym_SynthesisedItem] = anon_sym_AlternateQuality,
  [anon_sym_TransfiguredGem] = anon_sym_AlternateQuality,
  [anon_sym_UberBlightedMap] = anon_sym_AlternateQuality,
  [anon_sym_WaystoneTier] = anon_sym_AlternateQuality,
  [anon_sym_Width] = anon_sym_AlternateQuality,
  [anon_sym_PlayAlertSound] = anon_sym_AlternateQuality,
  [anon_sym_None] = anon_sym_None,
  [anon_sym_PlayAlertSoundPositional] = anon_sym_AlternateQuality,
  [anon_sym_CustomAlertSound] = anon_sym_AlternateQuality,
  [aux_sym_action_token1] = aux_sym_action_token1,
  [anon_sym_CustomAlertSoundOptional] = anon_sym_AlternateQuality,
  [anon_sym_DisableDropSound] = anon_sym_AlternateQuality,
  [anon_sym_EnableDropSound] = anon_sym_AlternateQuality,
  [anon_sym_DisableDropSoundIfAlertSound] = anon_sym_AlternateQuality,
  [anon_sym_EnableDropSoundIfAlertSound] = anon_sym_AlternateQuality,
  [anon_sym_MinimapIcon] = anon_sym_AlternateQuality,
  [anon_sym_DASH1] = aux_sym_action_token1,
  [anon_sym_PlayEffect] = anon_sym_AlternateQuality,
  [anon_sym_Temp] = anon_sym_Temp,
  [anon_sym_SetBackgroundColor] = anon_sym_AlternateQuality,
  [anon_sym_SetBorderColor] = anon_sym_AlternateQuality,
  [anon_sym_SetFontSize] = anon_sym_AlternateQuality,
  [anon_sym_SetTextColor] = anon_sym_AlternateQuality,
  [anon_sym_Continue] = anon_sym_Continue,
  [aux_sym__equal_operator_token1] = aux_sym__equal_operator_token1,
  [aux_sym__range_operator_token1] = aux_sym__equal_operator_token1,
  [sym_boolean] = sym_boolean,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quality_token1] = aux_sym_quality_token1,
  [anon_sym_Superior] = anon_sym_Superior,
  [anon_sym_Divergent] = anon_sym_Divergent,
  [anon_sym_Anomalous] = anon_sym_Anomalous,
  [anon_sym_Phantasmal] = anon_sym_Phantasmal,
  [aux_sym_rarity_token1] = aux_sym_rarity_token1,
  [anon_sym_Normal] = anon_sym_Normal,
  [anon_sym_Magic] = anon_sym_Magic,
  [anon_sym_Rare] = anon_sym_Rare,
  [anon_sym_Unique] = anon_sym_Unique,
  [aux_sym_influence_token1] = aux_sym_influence_token1,
  [anon_sym_Shaper] = anon_sym_Shaper,
  [anon_sym_Elder] = anon_sym_Elder,
  [anon_sym_Crusader] = anon_sym_Crusader,
  [anon_sym_Hunter] = anon_sym_Hunter,
  [anon_sym_Redeemer] = anon_sym_Redeemer,
  [anon_sym_Warlord] = anon_sym_Warlord,
  [aux_sym_sockets_token1] = aux_sym_sockets_token1,
  [aux_sym_sockets_token2] = aux_sym_sockets_token2,
  [anon_sym_Red] = anon_sym_Red,
  [anon_sym_Green] = anon_sym_Green,
  [anon_sym_Blue] = anon_sym_Blue,
  [anon_sym_Brown] = anon_sym_Brown,
  [anon_sym_White] = anon_sym_White,
  [anon_sym_Yellow] = anon_sym_Yellow,
  [anon_sym_Cyan] = anon_sym_Cyan,
  [anon_sym_Grey] = anon_sym_Grey,
  [anon_sym_Orange] = anon_sym_Orange,
  [anon_sym_Pink] = anon_sym_Pink,
  [anon_sym_Purple] = anon_sym_Purple,
  [anon_sym_Circle] = anon_sym_Circle,
  [anon_sym_Diamond] = anon_sym_Diamond,
  [anon_sym_Hexagon] = anon_sym_Hexagon,
  [anon_sym_Square] = anon_sym_Square,
  [anon_sym_Star] = anon_sym_Star,
  [anon_sym_Triangle] = anon_sym_Triangle,
  [anon_sym_Cross] = anon_sym_Cross,
  [anon_sym_Moon] = anon_sym_Moon,
  [anon_sym_Raindrop] = anon_sym_Raindrop,
  [anon_sym_Kite] = anon_sym_Kite,
  [anon_sym_Pentagon] = anon_sym_Pentagon,
  [anon_sym_UpsideDownHouse] = anon_sym_UpsideDownHouse,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_file_token1] = aux_sym_file_token1,
  [sym_number] = sym_number,
  [aux_sym__id_token1] = sym_number,
  [aux_sym__volume_token1] = sym_number,
  [aux_sym__color_token1] = sym_number,
  [aux_sym__icon_size_token1] = sym_number,
  [aux_sym__font_size_token1] = sym_number,
  [sym_comment] = sym_comment,
  [sym__space] = sym__space,
  [sym__eol] = sym__eol,
  [sym_filter] = sym_filter,
  [sym_block] = sym_block,
  [sym_import] = sym_import,
  [sym_condition] = sym_condition,
  [sym_action] = sym_action,
  [sym_continue] = sym_continue,
  [sym__equal_operator] = sym__equal_operator,
  [sym__range_operator] = sym__range_operator,
  [sym_quality] = sym_quality,
  [sym_rarity] = sym_rarity,
  [sym_influence] = sym_influence,
  [sym_sockets] = sym_sockets,
  [sym_colour] = sym_colour,
  [sym_shape] = sym_shape,
  [sym_string] = sym_string,
  [sym_file] = sym_file,
  [sym__quantity] = sym__quantity,
  [sym__id] = sym__id,
  [sym__volume] = sym__volume,
  [sym__color] = sym__color,
  [sym__icon_size] = sym__icon_size,
  [sym__font_size] = sym__font_size,
  [aux_sym_filter_repeat1] = aux_sym_filter_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_condition_repeat1] = aux_sym_condition_repeat1,
  [aux_sym_condition_repeat2] = aux_sym_condition_repeat2,
  [aux_sym_condition_repeat3] = aux_sym_condition_repeat3,
  [aux_sym_condition_repeat4] = aux_sym_condition_repeat4,
  [aux_sym_condition_repeat5] = aux_sym_condition_repeat5,
  [aux_sym_condition_repeat6] = aux_sym_condition_repeat6,
  [aux_sym_condition_repeat7] = aux_sym_condition_repeat7,
  [aux_sym_condition_repeat8] = aux_sym_condition_repeat8,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Show] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Hide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Minimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AlternateQuality] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AnyEnchantment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ArchnemesisMod] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AreaLevel] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BaseArmour] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BaseDefencePercentile] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BaseEnergyShield] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BaseEvasion] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BaseType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BaseWard] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BlightedMap] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Class] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Corrupted] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CorruptedMods] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DropLevel] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ElderItem] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ElderMap] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EnchantmentPassiveNode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EnchantmentPassiveNum] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_FracturedItem] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GemLevel] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GemQualityType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_HasCruciblePassiveTree] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_HasEaterOfWorldsImplicit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_HasEnchantment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_HasExplicitMod] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_HasImplicitMod] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_HasInfluence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_HasSearingExarchImplicit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Height] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Identified] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ItemLevel] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LinkedSockets] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MapTier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Mirrored] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Quality] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Rarity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Replica] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Scourged] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ShapedMap] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ShaperItem] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SocketGroup] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Sockets] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_StackSize] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SynthesisedItem] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TransfiguredGem] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_UberBlightedMap] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_WaystoneTier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Width] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PlayAlertSound] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_None] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlayAlertSoundPositional] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CustomAlertSound] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_action_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CustomAlertSoundOptional] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DisableDropSound] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EnableDropSound] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DisableDropSoundIfAlertSound] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EnableDropSoundIfAlertSound] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MinimapIcon] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PlayEffect] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Temp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SetBackgroundColor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SetBorderColor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SetFontSize] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SetTextColor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Continue] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__equal_operator_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__range_operator_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quality_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Superior] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Divergent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Anomalous] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Phantasmal] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_rarity_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Normal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Magic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Rare] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Unique] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_influence_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Shaper] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Elder] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Crusader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Hunter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Redeemer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Warlord] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sockets_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sockets_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Red] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Green] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Blue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Brown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_White] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Yellow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Cyan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Grey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Orange] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Pink] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Purple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Circle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Diamond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Hexagon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Square] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Star] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Triangle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Cross] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Moon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Raindrop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Kite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Pentagon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UpsideDownHouse] = {
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
  [aux_sym_file_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__id_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__volume_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__color_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__icon_size_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__font_size_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_continue] = {
    .visible = true,
    .named = true,
  },
  [sym__equal_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__range_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_quality] = {
    .visible = true,
    .named = true,
  },
  [sym_rarity] = {
    .visible = true,
    .named = true,
  },
  [sym_influence] = {
    .visible = true,
    .named = true,
  },
  [sym_sockets] = {
    .visible = true,
    .named = true,
  },
  [sym_colour] = {
    .visible = true,
    .named = true,
  },
  [sym_shape] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym__quantity] = {
    .visible = false,
    .named = true,
  },
  [sym__id] = {
    .visible = false,
    .named = true,
  },
  [sym__volume] = {
    .visible = false,
    .named = true,
  },
  [sym__color] = {
    .visible = false,
    .named = true,
  },
  [sym__icon_size] = {
    .visible = false,
    .named = true,
  },
  [sym__font_size] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_filter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_repeat5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_repeat6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_repeat7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_repeat8] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alpha = 1,
  field_blue = 2,
  field_class = 3,
  field_enchantment = 4,
  field_green = 5,
  field_id = 6,
  field_modifier = 7,
  field_red = 8,
  field_size = 9,
  field_sockets = 10,
  field_type = 11,
  field_volume = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alpha] = "alpha",
  [field_blue] = "blue",
  [field_class] = "class",
  [field_enchantment] = "enchantment",
  [field_green] = "green",
  [field_id] = "id",
  [field_modifier] = "modifier",
  [field_red] = "red",
  [field_size] = "size",
  [field_sockets] = "sockets",
  [field_type] = "type",
  [field_volume] = "volume",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 1},
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 1},
  [15] = {.index = 17, .length = 1},
  [16] = {.index = 18, .length = 1},
  [17] = {.index = 19, .length = 1},
  [18] = {.index = 20, .length = 1},
  [19] = {.index = 21, .length = 1},
  [20] = {.index = 22, .length = 1},
  [21] = {.index = 23, .length = 1},
  [22] = {.index = 24, .length = 2},
  [23] = {.index = 23, .length = 1},
  [24] = {.index = 26, .length = 3},
  [25] = {.index = 29, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_modifier, 1},
  [1] =
    {field_modifier, 1, .inherited = true},
  [2] =
    {field_modifier, 0, .inherited = true},
    {field_modifier, 1, .inherited = true},
  [4] =
    {field_type, 1},
  [5] =
    {field_type, 1, .inherited = true},
  [6] =
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [8] =
    {field_class, 1},
  [9] =
    {field_class, 1, .inherited = true},
  [10] =
    {field_class, 0, .inherited = true},
    {field_class, 1, .inherited = true},
  [12] =
    {field_enchantment, 1},
  [13] =
    {field_enchantment, 1, .inherited = true},
  [14] =
    {field_enchantment, 0, .inherited = true},
    {field_enchantment, 1, .inherited = true},
  [16] =
    {field_sockets, 0},
  [17] =
    {field_id, 2},
  [18] =
    {field_size, 2},
  [19] =
    {field_modifier, 3, .inherited = true},
  [20] =
    {field_type, 3, .inherited = true},
  [21] =
    {field_class, 3, .inherited = true},
  [22] =
    {field_enchantment, 3, .inherited = true},
  [23] =
    {field_volume, 4},
  [24] =
    {field_id, 2},
    {field_volume, 4},
  [26] =
    {field_blue, 6},
    {field_green, 4},
    {field_red, 2},
  [29] =
    {field_alpha, 8},
    {field_blue, 6},
    {field_green, 4},
    {field_red, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [14] = {
    [2] = aux_sym_action_token1,
  },
  [21] = {
    [2] = aux_sym_action_token1,
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
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
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
  [184] = 172,
  [185] = 156,
  [186] = 186,
};

static TSCharacterRange aux_sym_string_token1_character_set_1[] = {
  {' ', ' '}, {'\'', '\''}, {',', '-'}, {':', ':'}, {'A', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5},
  {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee},
  {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1},
  {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2},
  {0x620, 0x64a}, {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff},
  {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815},
  {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9},
  {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8},
  {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1},
  {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39},
  {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3},
  {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28},
  {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83},
  {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa},
  {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a},
  {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9},
  {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d},
  {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd5f, 0xd61}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd},
  {0xdc0, 0xdc6}, {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3},
  {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00},
  {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061},
  {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa},
  {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0},
  {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a},
  {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8},
  {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc},
  {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974},
  {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0},
  {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf},
  {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45},
  {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc},
  {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc},
  {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d},
  {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e},
  {0x2183, 0x2184}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67},
  {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce},
  {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f},
  {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf},
  {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d},
  {0xa6a0, 0xa6e5}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801},
  {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe},
  {0xa90a, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe},
  {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6},
  {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e},
  {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3},
  {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28},
  {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f},
  {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7},
  {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d},
  {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375},
  {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563},
  {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc},
  {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808},
  {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5},
  {0x10900, 0x10915},
};

static TSCharacterRange aux_sym_string_token2_character_set_1[] = {
  {'\'', '\''}, {',', '-'}, {':', ':'}, {'A', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba},
  {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374},
  {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5},
  {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a},
  {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710},
  {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a},
  {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939},
  {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0},
  {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc},
  {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c},
  {0xa5e, 0xa5e}, {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9},
  {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30},
  {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a},
  {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9},
  {0xbd0, 0xbd0}, {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d},
  {0xc60, 0xc61}, {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd},
  {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e},
  {0xd54, 0xd56}, {0xd5f, 0xd61}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6},
  {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5},
  {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47},
  {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066},
  {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248},
  {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5},
  {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f},
  {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711},
  {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878},
  {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab},
  {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf},
  {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec},
  {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d},
  {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe},
  {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071},
  {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124},
  {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184},
  {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f},
  {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6},
  {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa},
  {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00},
  {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5},
  {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805},
  {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925},
  {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28},
  {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd},
  {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16},
  {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6},
  {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36},
  {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7},
  {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf},
  {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d},
  {0x10080, 0x100fa}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d},
  {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a},
  {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736},
  {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835},
  {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(881);
      ADVANCE_MAP(
        '\n', 1057,
        '\r', 3,
        '!', 956,
        '"', 961,
        '#', 1055,
        '-', 18,
        '0', 991,
        '1', 989,
        '2', 982,
        '3', 981,
        '4', 990,
        '<', 958,
        '=', 956,
        '>', 958,
        'A', 988,
        'B', 983,
        'C', 378,
        'D', 987,
        'E', 440,
        'F', 78,
        'G', 986,
        'H', 89,
        'I', 199,
        'K', 403,
        'L', 384,
        'M', 79,
        'N', 585,
        'O', 651,
        'P', 259,
        'Q', 825,
        'R', 984,
        'S', 154,
        'T', 255,
        'U', 145,
        'W', 985,
        'Y', 254,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(877);
      if (lookahead == '5' ||
          lookahead == '6') ADVANCE(992);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(1038);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(16);
      if (lookahead == ' ') ADVANCE(1029);
      if (lookahead == '#') ADVANCE(1055);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1030);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(16);
      if (lookahead == ' ') ADVANCE(1032);
      if (lookahead == '#') ADVANCE(1033);
      if (lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '?' &&
          lookahead != '|' &&
          (lookahead < 0x7f || 0x9f < lookahead)) ADVANCE(1034);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1057);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(956);
      if (lookahead == '"') ADVANCE(960);
      if (lookahead == '#') ADVANCE(1055);
      if (lookahead == '0') ADVANCE(1035);
      if (lookahead == '<') ADVANCE(958);
      if (lookahead == '=') ADVANCE(956);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1038);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1031);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(956);
      if (lookahead == '"') ADVANCE(960);
      if (lookahead == '#') ADVANCE(1055);
      if (lookahead == '<') ADVANCE(958);
      if (lookahead == '=') ADVANCE(956);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(1003);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(956);
      if (lookahead == '#') ADVANCE(1055);
      if (lookahead == '0') ADVANCE(1035);
      if (lookahead == '<') ADVANCE(958);
      if (lookahead == '=') ADVANCE(956);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1038);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1031);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(956);
      if (lookahead == '#') ADVANCE(1055);
      if (lookahead == '<') ADVANCE(958);
      if (lookahead == '=') ADVANCE(956);
      if (lookahead == '>') ADVANCE(958);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(1003);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(940);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 960,
        '#', 1055,
        '-', 18,
        'A', 556,
        'C', 725,
        'D', 412,
        'E', 483,
        'H', 824,
        'M', 101,
        'N', 638,
        'P', 376,
        'R', 128,
        'S', 369,
        'U', 576,
        'W', 118,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(1051);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '#', 1055,
        '-', 18,
        'C', 725,
        'E', 483,
        'H', 824,
        'N', 627,
        'R', 314,
        'S', 368,
        'W', 118,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(1051);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '#', 1055,
        '0', 1046,
        '1', 1050,
        '2', 1047,
        'C', 736,
        'E', 484,
        'H', 851,
        'N', 631,
        'R', 333,
        'S', 373,
        'W', 136,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1049);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(1055);
      if (lookahead == '0') ADVANCE(1046);
      if (lookahead == '1') ADVANCE(1050);
      if (lookahead == '2') ADVANCE(1047);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1049);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(1055);
      if (lookahead == '0') ADVANCE(1041);
      if (lookahead == '3') ADVANCE(1043);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(1045);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1044);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(1055);
      if (lookahead == '1') ADVANCE(1040);
      if (lookahead == 'N') ADVANCE(627);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1039);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(1055);
      if (lookahead == '4') ADVANCE(1053);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1052);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(1055);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(1055);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(991);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(947);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(479);
      if (lookahead == 'E') ADVANCE(338);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(703);
      if (lookahead == 'D') ADVANCE(262);
      if (lookahead == 'E') ADVANCE(574);
      if (lookahead == 'T') ADVANCE(873);
      if (lookahead == 'W') ADVANCE(111);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(486);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(487);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(488);
      END_STATE();
    case 24:
      if (lookahead == 'B') ADVANCE(119);
      if (lookahead == 'F') ADVANCE(633);
      if (lookahead == 'T') ADVANCE(230);
      END_STATE();
    case 25:
      if (lookahead == 'B') ADVANCE(457);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(697);
      if (lookahead == 'E') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(519);
      if (lookahead == 'S') ADVANCE(312);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(639);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(640);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(641);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(619);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(707);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(731);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(865);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(536);
      END_STATE();
    case 35:
      if (lookahead == 'G') ADVANCE(709);
      if (lookahead == 's') ADVANCE(929);
      END_STATE();
    case 36:
      if (lookahead == 'G') ADVANCE(288);
      END_STATE();
    case 37:
      if (lookahead == 'H') ADVANCE(594);
      END_STATE();
    case 38:
      if (lookahead == 'I') ADVANCE(169);
      END_STATE();
    case 39:
      if (lookahead == 'I') ADVANCE(516);
      END_STATE();
    case 40:
      if (lookahead == 'I') ADVANCE(805);
      if (lookahead == 'M') ADVANCE(96);
      END_STATE();
    case 41:
      if (lookahead == 'I') ADVANCE(806);
      END_STATE();
    case 42:
      if (lookahead == 'I') ADVANCE(807);
      END_STATE();
    case 43:
      if (lookahead == 'I') ADVANCE(809);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(518);
      END_STATE();
    case 45:
      if (lookahead == 'L') ADVANCE(229);
      if (lookahead == 'Q') ADVANCE(849);
      END_STATE();
    case 46:
      if (lookahead == 'L') ADVANCE(320);
      END_STATE();
    case 47:
      if (lookahead == 'L') ADVANCE(327);
      END_STATE();
    case 48:
      if (lookahead == 'L') ADVANCE(328);
      END_STATE();
    case 49:
      if (lookahead == 'M') ADVANCE(601);
      END_STATE();
    case 50:
      if (lookahead == 'M') ADVANCE(602);
      END_STATE();
    case 51:
      if (lookahead == 'M') ADVANCE(100);
      END_STATE();
    case 52:
      if (lookahead == 'M') ADVANCE(603);
      END_STATE();
    case 53:
      if (lookahead == 'M') ADVANCE(106);
      END_STATE();
    case 54:
      if (lookahead == 'M') ADVANCE(107);
      END_STATE();
    case 55:
      if (lookahead == 'N') ADVANCE(589);
      END_STATE();
    case 56:
      if (lookahead == 'N') ADVANCE(630);
      END_STATE();
    case 57:
      if (lookahead == 'O') ADVANCE(337);
      END_STATE();
    case 58:
      if (lookahead == 'P') ADVANCE(305);
      END_STATE();
    case 59:
      if (lookahead == 'P') ADVANCE(108);
      END_STATE();
    case 60:
      if (lookahead == 'P') ADVANCE(135);
      END_STATE();
    case 61:
      if (lookahead == 'Q') ADVANCE(850);
      END_STATE();
    case 62:
      if (lookahead == 'S') ADVANCE(365);
      END_STATE();
    case 63:
      if (lookahead == 'S') ADVANCE(383);
      END_STATE();
    case 64:
      if (lookahead == 'S') ADVANCE(637);
      END_STATE();
    case 65:
      if (lookahead == 'S') ADVANCE(406);
      END_STATE();
    case 66:
      if (lookahead == 'S') ADVANCE(624);
      END_STATE();
    case 67:
      if (lookahead == 'S') ADVANCE(629);
      END_STATE();
    case 68:
      if (lookahead == 'S') ADVANCE(632);
      END_STATE();
    case 69:
      if (lookahead == 'S') ADVANCE(634);
      END_STATE();
    case 70:
      if (lookahead == 'S') ADVANCE(635);
      END_STATE();
    case 71:
      if (lookahead == 'S') ADVANCE(636);
      END_STATE();
    case 72:
      if (lookahead == 'T') ADVANCE(419);
      END_STATE();
    case 73:
      if (lookahead == 'T') ADVANCE(720);
      END_STATE();
    case 74:
      if (lookahead == 'T') ADVANCE(874);
      END_STATE();
    case 75:
      if (lookahead == 'T') ADVANCE(424);
      END_STATE();
    case 76:
      if (lookahead == 'W') ADVANCE(612);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(748);
      if (lookahead == 'l') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead == 'i') ADVANCE(534);
      if (lookahead == 'o') ADVANCE(593);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'c') ADVANCE(371);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(866);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(924);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(357);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == 'u') ADVANCE(575);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(508);
      if (lookahead == 's') ADVANCE(144);
      if (lookahead == 'v') ADVANCE(266);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(750);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(521);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(441);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(645);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(872);
      if (lookahead == 'h') ADVANCE(409);
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(532);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(760);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(647);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(540);
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(540);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(715);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(445);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(648);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(650);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(761);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(449);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(537);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(701);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(450);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(726);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(451);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(452);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(453);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(698);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(728);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(653);
      if (lookahead == 'o') ADVANCE(860);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(708);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(545);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(765);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(456);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(550);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(656);
      if (lookahead == 'o') ADVANCE(860);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(721);
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(797);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(660);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(358);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(763);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(764);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(729);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(810);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == 'x') ADVANCE(662);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(661);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(474);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(579);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(580);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(581);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 145:
      if (lookahead == 'b') ADVANCE(263);
      if (lookahead == 'n') ADVANCE(382);
      if (lookahead == 'p') ADVANCE(749);
      END_STATE();
    case 146:
      if (lookahead == 'b') ADVANCE(459);
      END_STATE();
    case 147:
      if (lookahead == 'b') ADVANCE(464);
      END_STATE();
    case 148:
      if (lookahead == 'b') ADVANCE(489);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(969);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(967);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(434);
      if (lookahead == 'r') ADVANCE(1021);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(435);
      END_STATE();
    case 154:
      ADVANCE_MAP(
        'c', 583,
        'e', 768,
        'h', 120,
        'o', 164,
        'q', 829,
        't', 83,
        'u', 659,
        'y', 539,
      );
      END_STATE();
    case 155:
      ADVANCE_MAP(
        'c', 583,
        'e', 768,
        'h', 127,
        'o', 164,
        'q', 829,
        't', 83,
        'u', 659,
        'y', 539,
      );
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(458);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(377);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(800);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(425);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(774);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(437);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(438);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(397);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(399);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(400);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(610);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(428);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(322);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(374);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(375);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(1006);
      if (lookahead == 'p') ADVANCE(468);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(974);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(1018);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(980);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(896);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(921);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(925);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(899);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(917);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(889);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(912);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(913);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(936);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(943);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(893);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(939);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(942);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(945);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(944);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(1005);
      if (lookahead == 'p') ADVANCE(468);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(972);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == 'm') ADVANCE(652);
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(785);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(741);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(746);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(258);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(307);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(705);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(293);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(298);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(300);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(303);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(326);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(1008);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(883);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(1026);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(937);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(970);
      if (lookahead == 'i') ADVANCE(781);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(959);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(855);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(864);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(1010);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(1017);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(1014);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(1016);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(1020);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(971);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(895);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(954);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(1022);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(930);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(952);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(914);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(908);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(1028);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(892);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(904);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(909);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(967);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(972);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(499);
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(538);
      if (lookahead == 'h') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(695);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(524);
      if (lookahead == 'y') ADVANCE(1013);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(771);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(792);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(735);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(706);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(755);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(714);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(756);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(856);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(857);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(858);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(730);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(732);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(733);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 337:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 338:
      if (lookahead == 'f') ADVANCE(342);
      END_STATE();
    case 339:
      if (lookahead == 'f') ADVANCE(454);
      END_STATE();
    case 340:
      if (lookahead == 'f') ADVANCE(388);
      END_STATE();
    case 341:
      if (lookahead == 'f') ADVANCE(402);
      END_STATE();
    case 342:
      if (lookahead == 'f') ADVANCE(306);
      END_STATE();
    case 343:
      if (lookahead == 'f') ADVANCE(295);
      END_STATE();
    case 344:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 345:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 346:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 347:
      if (lookahead == 'g') ADVANCE(370);
      END_STATE();
    case 348:
      if (lookahead == 'g') ADVANCE(386);
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 349:
      if (lookahead == 'g') ADVANCE(363);
      END_STATE();
    case 350:
      if (lookahead == 'g') ADVANCE(871);
      END_STATE();
    case 351:
      if (lookahead == 'g') ADVANCE(235);
      END_STATE();
    case 352:
      if (lookahead == 'g') ADVANCE(273);
      END_STATE();
    case 353:
      if (lookahead == 'g') ADVANCE(315);
      END_STATE();
    case 354:
      if (lookahead == 'g') ADVANCE(392);
      END_STATE();
    case 355:
      if (lookahead == 'g') ADVANCE(463);
      END_STATE();
    case 356:
      if (lookahead == 'g') ADVANCE(711);
      END_STATE();
    case 357:
      if (lookahead == 'g') ADVANCE(606);
      END_STATE();
    case 358:
      if (lookahead == 'g') ADVANCE(607);
      END_STATE();
    case 359:
      if (lookahead == 'g') ADVANCE(848);
      END_STATE();
    case 360:
      if (lookahead == 'g') ADVANCE(319);
      END_STATE();
    case 361:
      if (lookahead == 'g') ADVANCE(372);
      END_STATE();
    case 362:
      if (lookahead == 'h') ADVANCE(935);
      END_STATE();
    case 363:
      if (lookahead == 'h') ADVANCE(769);
      END_STATE();
    case 364:
      if (lookahead == 'h') ADVANCE(573);
      END_STATE();
    case 365:
      if (lookahead == 'h') ADVANCE(416);
      END_STATE();
    case 366:
      if (lookahead == 'h') ADVANCE(584);
      END_STATE();
    case 367:
      if (lookahead == 'h') ADVANCE(308);
      END_STATE();
    case 368:
      if (lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 369:
      if (lookahead == 'h') ADVANCE(131);
      if (lookahead == 'u') ADVANCE(664);
      END_STATE();
    case 370:
      if (lookahead == 'h') ADVANCE(795);
      END_STATE();
    case 371:
      if (lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 372:
      if (lookahead == 'h') ADVANCE(815);
      END_STATE();
    case 373:
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 374:
      if (lookahead == 'h') ADVANCE(142);
      END_STATE();
    case 375:
      if (lookahead == 'h') ADVANCE(143);
      END_STATE();
    case 376:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 377:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 378:
      if (lookahead == 'i') ADVANCE(692);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(533);
      if (lookahead == 'r') ADVANCE(622);
      if (lookahead == 'u') ADVANCE(747);
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 379:
      if (lookahead == 'i') ADVANCE(692);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(533);
      if (lookahead == 'r') ADVANCE(621);
      if (lookahead == 'u') ADVANCE(747);
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 380:
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(587);
      END_STATE();
    case 381:
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 382:
      if (lookahead == 'i') ADVANCE(671);
      END_STATE();
    case 383:
      if (lookahead == 'i') ADVANCE(875);
      END_STATE();
    case 384:
      if (lookahead == 'i') ADVANCE(520);
      END_STATE();
    case 385:
      if (lookahead == 'i') ADVANCE(853);
      END_STATE();
    case 386:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 387:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 388:
      if (lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 389:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 390:
      if (lookahead == 'i') ADVANCE(531);
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 391:
      if (lookahead == 'i') ADVANCE(744);
      END_STATE();
    case 392:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 393:
      if (lookahead == 'i') ADVANCE(782);
      END_STATE();
    case 394:
      if (lookahead == 'i') ADVANCE(570);
      END_STATE();
    case 395:
      if (lookahead == 'i') ADVANCE(786);
      END_STATE();
    case 396:
      if (lookahead == 'i') ADVANCE(541);
      END_STATE();
    case 397:
      if (lookahead == 'i') ADVANCE(802);
      END_STATE();
    case 398:
      if (lookahead == 'i') ADVANCE(788);
      END_STATE();
    case 399:
      if (lookahead == 'i') ADVANCE(777);
      END_STATE();
    case 400:
      if (lookahead == 'i') ADVANCE(778);
      END_STATE();
    case 401:
      if (lookahead == 'i') ADVANCE(577);
      END_STATE();
    case 402:
      if (lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 403:
      if (lookahead == 'i') ADVANCE(790);
      END_STATE();
    case 404:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 405:
      if (lookahead == 'i') ADVANCE(349);
      if (lookahead == 'x') ADVANCE(87);
      END_STATE();
    case 406:
      if (lookahead == 'i') ADVANCE(876);
      END_STATE();
    case 407:
      if (lookahead == 'i') ADVANCE(854);
      END_STATE();
    case 408:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 409:
      if (lookahead == 'i') ADVANCE(793);
      END_STATE();
    case 410:
      if (lookahead == 'i') ADVANCE(766);
      END_STATE();
    case 411:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 412:
      if (lookahead == 'i') ADVANCE(859);
      END_STATE();
    case 413:
      if (lookahead == 'i') ADVANCE(502);
      END_STATE();
    case 414:
      if (lookahead == 'i') ADVANCE(605);
      END_STATE();
    case 415:
      if (lookahead == 'i') ADVANCE(608);
      END_STATE();
    case 416:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 417:
      if (lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(506);
      END_STATE();
    case 419:
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 420:
      if (lookahead == 'i') ADVANCE(609);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(617);
      END_STATE();
    case 422:
      if (lookahead == 'i') ADVANCE(615);
      END_STATE();
    case 423:
      if (lookahead == 'i') ADVANCE(616);
      END_STATE();
    case 424:
      if (lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(672);
      END_STATE();
    case 427:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 428:
      if (lookahead == 'i') ADVANCE(804);
      END_STATE();
    case 429:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 430:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(819);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 433:
      if (lookahead == 'k') ADVANCE(1015);
      END_STATE();
    case 434:
      if (lookahead == 'k') ADVANCE(63);
      END_STATE();
    case 435:
      if (lookahead == 'k') ADVANCE(356);
      END_STATE();
    case 436:
      if (lookahead == 'k') ADVANCE(261);
      END_STATE();
    case 437:
      if (lookahead == 'k') ADVANCE(290);
      END_STATE();
    case 438:
      if (lookahead == 'k') ADVANCE(297);
      END_STATE();
    case 439:
      if (lookahead == 'l') ADVANCE(803);
      if (lookahead == 'n') ADVANCE(586);
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 440:
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 441:
      if (lookahead == 'l') ADVANCE(968);
      END_STATE();
    case 442:
      if (lookahead == 'l') ADVANCE(884);
      END_STATE();
    case 443:
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 444:
      if (lookahead == 'l') ADVANCE(907);
      END_STATE();
    case 445:
      if (lookahead == 'l') ADVANCE(886);
      END_STATE();
    case 446:
      if (lookahead == 'l') ADVANCE(890);
      END_STATE();
    case 447:
      if (lookahead == 'l') ADVANCE(901);
      END_STATE();
    case 448:
      if (lookahead == 'l') ADVANCE(918);
      END_STATE();
    case 449:
      if (lookahead == 'l') ADVANCE(966);
      END_STATE();
    case 450:
      if (lookahead == 'l') ADVANCE(941);
      END_STATE();
    case 451:
      if (lookahead == 'l') ADVANCE(938);
      END_STATE();
    case 452:
      if (lookahead == 'l') ADVANCE(967);
      END_STATE();
    case 453:
      if (lookahead == 'l') ADVANCE(962);
      END_STATE();
    case 454:
      if (lookahead == 'l') ADVANCE(847);
      END_STATE();
    case 455:
      if (lookahead == 'l') ADVANCE(588);
      END_STATE();
    case 456:
      if (lookahead == 'l') ADVANCE(590);
      END_STATE();
    case 457:
      if (lookahead == 'l') ADVANCE(432);
      END_STATE();
    case 458:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 459:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 460:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 461:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 462:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 463:
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 464:
      if (lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 465:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 466:
      if (lookahead == 'l') ADVANCE(393);
      END_STATE();
    case 467:
      if (lookahead == 'l') ADVANCE(752);
      END_STATE();
    case 468:
      if (lookahead == 'l') ADVANCE(387);
      END_STATE();
    case 469:
      if (lookahead == 'l') ADVANCE(455);
      END_STATE();
    case 470:
      if (lookahead == 'l') ADVANCE(628);
      END_STATE();
    case 471:
      if (lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 472:
      if (lookahead == 'l') ADVANCE(389);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(600);
      END_STATE();
    case 474:
      if (lookahead == 'l') ADVANCE(398);
      END_STATE();
    case 475:
      if (lookahead == 'l') ADVANCE(611);
      END_STATE();
    case 476:
      if (lookahead == 'l') ADVANCE(613);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(614);
      END_STATE();
    case 478:
      if (lookahead == 'l') ADVANCE(618);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(309);
      END_STATE();
    case 480:
      if (lookahead == 'l') ADVANCE(427);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(429);
      END_STATE();
    case 482:
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 483:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 484:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 485:
      if (lookahead == 'l') ADVANCE(430);
      END_STATE();
    case 486:
      if (lookahead == 'l') ADVANCE(332);
      END_STATE();
    case 487:
      if (lookahead == 'l') ADVANCE(334);
      END_STATE();
    case 488:
      if (lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 489:
      if (lookahead == 'l') ADVANCE(336);
      END_STATE();
    case 490:
      if (lookahead == 'm') ADVANCE(652);
      END_STATE();
    case 491:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 492:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 493:
      if (lookahead == 'm') ADVANCE(902);
      END_STATE();
    case 494:
      if (lookahead == 'm') ADVANCE(927);
      END_STATE();
    case 495:
      if (lookahead == 'm') ADVANCE(906);
      END_STATE();
    case 496:
      if (lookahead == 'm') ADVANCE(931);
      END_STATE();
    case 497:
      if (lookahead == 'm') ADVANCE(932);
      END_STATE();
    case 498:
      if (lookahead == 'm') ADVANCE(905);
      END_STATE();
    case 499:
      if (lookahead == 'm') ADVANCE(644);
      END_STATE();
    case 500:
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 501:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 502:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 503:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 504:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 505:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 506:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 507:
      if (lookahead == 'm') ADVANCE(626);
      END_STATE();
    case 508:
      if (lookahead == 'm') ADVANCE(604);
      END_STATE();
    case 509:
      if (lookahead == 'm') ADVANCE(296);
      END_STATE();
    case 510:
      if (lookahead == 'm') ADVANCE(303);
      END_STATE();
    case 511:
      if (lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 512:
      if (lookahead == 'm') ADVANCE(313);
      END_STATE();
    case 513:
      if (lookahead == 'm') ADVANCE(316);
      END_STATE();
    case 514:
      if (lookahead == 'm') ADVANCE(317);
      END_STATE();
    case 515:
      if (lookahead == 'm') ADVANCE(318);
      END_STATE();
    case 516:
      if (lookahead == 'm') ADVANCE(665);
      END_STATE();
    case 517:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 518:
      if (lookahead == 'm') ADVANCE(666);
      END_STATE();
    case 519:
      if (lookahead == 'm') ADVANCE(670);
      if (lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 520:
      if (lookahead == 'n') ADVANCE(436);
      END_STATE();
    case 521:
      if (lookahead == 'n') ADVANCE(1012);
      END_STATE();
    case 522:
      if (lookahead == 'n') ADVANCE(1024);
      END_STATE();
    case 523:
      if (lookahead == 'n') ADVANCE(1009);
      END_STATE();
    case 524:
      if (lookahead == 'n') ADVANCE(1007);
      END_STATE();
    case 525:
      if (lookahead == 'n') ADVANCE(1019);
      END_STATE();
    case 526:
      if (lookahead == 'n') ADVANCE(1027);
      END_STATE();
    case 527:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 528:
      if (lookahead == 'n') ADVANCE(894);
      END_STATE();
    case 529:
      if (lookahead == 'n') ADVANCE(946);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(433);
      END_STATE();
    case 531:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 532:
      if (lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 533:
      if (lookahead == 'n') ADVANCE(799);
      if (lookahead == 'r') ADVANCE(693);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(413);
      if (lookahead == 'r') ADVANCE(724);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(814);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(783);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(745);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(346);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(225);
      if (lookahead == 'r') ADVANCE(501);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(225);
      if (lookahead == 'r') ADVANCE(504);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(798);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(791);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(812);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(773);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(642);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(780);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(775);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(776);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(779);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(789);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(841);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(794);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(292);
      if (lookahead == 'v') ADVANCE(123);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(808);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 577:
      if (lookahead == 'n') ADVANCE(418);
      END_STATE();
    case 578:
      if (lookahead == 'n') ADVANCE(811);
      END_STATE();
    case 579:
      if (lookahead == 'n') ADVANCE(816);
      END_STATE();
    case 580:
      if (lookahead == 'n') ADVANCE(822);
      END_STATE();
    case 581:
      if (lookahead == 'n') ADVANCE(823);
      END_STATE();
    case 582:
      if (lookahead == 'o') ADVANCE(862);
      END_STATE();
    case 583:
      if (lookahead == 'o') ADVANCE(831);
      END_STATE();
    case 584:
      if (lookahead == 'o') ADVANCE(860);
      END_STATE();
    case 585:
      if (lookahead == 'o') ADVANCE(543);
      END_STATE();
    case 586:
      if (lookahead == 'o') ADVANCE(500);
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 587:
      if (lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 588:
      if (lookahead == 'o') ADVANCE(861);
      END_STATE();
    case 589:
      if (lookahead == 'o') ADVANCE(547);
      END_STATE();
    case 590:
      if (lookahead == 'o') ADVANCE(830);
      END_STATE();
    case 591:
      if (lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 592:
      if (lookahead == 'o') ADVANCE(836);
      END_STATE();
    case 593:
      if (lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 594:
      if (lookahead == 'o') ADVANCE(846);
      END_STATE();
    case 595:
      if (lookahead == 'o') ADVANCE(646);
      END_STATE();
    case 596:
      if (lookahead == 'o') ADVANCE(710);
      END_STATE();
    case 597:
      if (lookahead == 'o') ADVANCE(663);
      END_STATE();
    case 598:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 599:
      if (lookahead == 'o') ADVANCE(762);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(700);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 603:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 604:
      if (lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 605:
      if (lookahead == 'o') ADVANCE(551);
      END_STATE();
    case 606:
      if (lookahead == 'o') ADVANCE(525);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(680);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(528);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(529);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(682);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(712);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(684);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(685);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(558);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 617:
      if (lookahead == 'o') ADVANCE(690);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(716);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(863);
      END_STATE();
    case 620:
      if (lookahead == 'o') ADVANCE(832);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(751);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(751);
      if (lookahead == 'u') ADVANCE(754);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(567);
      END_STATE();
    case 624:
      if (lookahead == 'o') ADVANCE(837);
      END_STATE();
    case 625:
      if (lookahead == 'o') ADVANCE(717);
      END_STATE();
    case 626:
      if (lookahead == 'o') ADVANCE(835);
      END_STATE();
    case 627:
      if (lookahead == 'o') ADVANCE(542);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(833);
      END_STATE();
    case 629:
      if (lookahead == 'o') ADVANCE(838);
      END_STATE();
    case 630:
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(498);
      END_STATE();
    case 631:
      if (lookahead == 'o') ADVANCE(568);
      END_STATE();
    case 632:
      if (lookahead == 'o') ADVANCE(839);
      END_STATE();
    case 633:
      if (lookahead == 'o') ADVANCE(552);
      END_STATE();
    case 634:
      if (lookahead == 'o') ADVANCE(840);
      END_STATE();
    case 635:
      if (lookahead == 'o') ADVANCE(842);
      END_STATE();
    case 636:
      if (lookahead == 'o') ADVANCE(843);
      END_STATE();
    case 637:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 638:
      if (lookahead == 'o') ADVANCE(544);
      END_STATE();
    case 639:
      if (lookahead == 'o') ADVANCE(475);
      END_STATE();
    case 640:
      if (lookahead == 'o') ADVANCE(476);
      END_STATE();
    case 641:
      if (lookahead == 'o') ADVANCE(477);
      END_STATE();
    case 642:
      if (lookahead == 'o') ADVANCE(511);
      END_STATE();
    case 643:
      if (lookahead == 'o') ADVANCE(667);
      END_STATE();
    case 644:
      if (lookahead == 'p') ADVANCE(949);
      END_STATE();
    case 645:
      if (lookahead == 'p') ADVANCE(903);
      END_STATE();
    case 646:
      if (lookahead == 'p') ADVANCE(1025);
      END_STATE();
    case 647:
      if (lookahead == 'p') ADVANCE(926);
      END_STATE();
    case 648:
      if (lookahead == 'p') ADVANCE(897);
      END_STATE();
    case 649:
      if (lookahead == 'p') ADVANCE(928);
      END_STATE();
    case 650:
      if (lookahead == 'p') ADVANCE(933);
      END_STATE();
    case 651:
      if (lookahead == 'p') ADVANCE(784);
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 652:
      if (lookahead == 'p') ADVANCE(596);
      END_STATE();
    case 653:
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 654:
      if (lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 655:
      if (lookahead == 'p') ADVANCE(247);
      END_STATE();
    case 656:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 657:
      if (lookahead == 'p') ADVANCE(462);
      END_STATE();
    case 658:
      if (lookahead == 'p') ADVANCE(796);
      END_STATE();
    case 659:
      if (lookahead == 'p') ADVANCE(279);
      END_STATE();
    case 660:
      if (lookahead == 'p') ADVANCE(302);
      END_STATE();
    case 661:
      if (lookahead == 'p') ADVANCE(303);
      END_STATE();
    case 662:
      if (lookahead == 'p') ADVANCE(472);
      END_STATE();
    case 663:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 664:
      if (lookahead == 'p') ADVANCE(325);
      END_STATE();
    case 665:
      if (lookahead == 'p') ADVANCE(480);
      END_STATE();
    case 666:
      if (lookahead == 'p') ADVANCE(481);
      END_STATE();
    case 667:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 668:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 669:
      if (lookahead == 'p') ADVANCE(817);
      END_STATE();
    case 670:
      if (lookahead == 'p') ADVANCE(485);
      END_STATE();
    case 671:
      if (lookahead == 'q') ADVANCE(834);
      END_STATE();
    case 672:
      if (lookahead == 'q') ADVANCE(844);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(976);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(978);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(920);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(977);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(979);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(963);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(891);
      END_STATE();
    case 682:
      if (lookahead == 'r') ADVANCE(953);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(934);
      END_STATE();
    case 684:
      if (lookahead == 'r') ADVANCE(951);
      END_STATE();
    case 685:
      if (lookahead == 'r') ADVANCE(950);
      END_STATE();
    case 686:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 687:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 688:
      if (lookahead == 'r') ADVANCE(975);
      END_STATE();
    case 689:
      if (lookahead == 'r') ADVANCE(973);
      END_STATE();
    case 690:
      if (lookahead == 'r') ADVANCE(962);
      END_STATE();
    case 691:
      if (lookahead == 'r') ADVANCE(972);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 693:
      if (lookahead == 'r') ADVANCE(827);
      END_STATE();
    case 694:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 695:
      if (lookahead == 'r') ADVANCE(657);
      END_STATE();
    case 696:
      if (lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 697:
      if (lookahead == 'r') ADVANCE(828);
      END_STATE();
    case 698:
      if (lookahead == 'r') ADVANCE(473);
      END_STATE();
    case 699:
      if (lookahead == 'r') ADVANCE(473);
      if (lookahead == 'y') ADVANCE(753);
      END_STATE();
    case 700:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 701:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 702:
      if (lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 703:
      if (lookahead == 'r') ADVANCE(507);
      END_STATE();
    case 704:
      if (lookahead == 'r') ADVANCE(415);
      END_STATE();
    case 705:
      if (lookahead == 'r') ADVANCE(595);
      END_STATE();
    case 706:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 707:
      if (lookahead == 'r') ADVANCE(597);
      END_STATE();
    case 708:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 709:
      if (lookahead == 'r') ADVANCE(620);
      END_STATE();
    case 710:
      if (lookahead == 'r') ADVANCE(770);
      END_STATE();
    case 711:
      if (lookahead == 'r') ADVANCE(592);
      END_STATE();
    case 712:
      if (lookahead == 'r') ADVANCE(460);
      END_STATE();
    case 713:
      if (lookahead == 'r') ADVANCE(548);
      END_STATE();
    case 714:
      if (lookahead == 'r') ADVANCE(801);
      END_STATE();
    case 715:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 716:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 717:
      if (lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 718:
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 719:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 720:
      if (lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 721:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 722:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 723:
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 724:
      if (lookahead == 'r') ADVANCE(625);
      END_STATE();
    case 725:
      if (lookahead == 'r') ADVANCE(826);
      END_STATE();
    case 726:
      if (lookahead == 'r') ADVANCE(396);
      END_STATE();
    case 727:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 728:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 729:
      if (lookahead == 'r') ADVANCE(478);
      END_STATE();
    case 730:
      if (lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 731:
      if (lookahead == 'r') ADVANCE(643);
      END_STATE();
    case 732:
      if (lookahead == 'r') ADVANCE(818);
      END_STATE();
    case 733:
      if (lookahead == 'r') ADVANCE(820);
      END_STATE();
    case 734:
      if (lookahead == 'r') ADVANCE(821);
      END_STATE();
    case 735:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 736:
      if (lookahead == 'r') ADVANCE(852);
      END_STATE();
    case 737:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 738:
      if (lookahead == 's') ADVANCE(898);
      END_STATE();
    case 739:
      if (lookahead == 's') ADVANCE(1023);
      END_STATE();
    case 740:
      if (lookahead == 's') ADVANCE(965);
      END_STATE();
    case 741:
      if (lookahead == 's') ADVANCE(900);
      END_STATE();
    case 742:
      if (lookahead == 's') ADVANCE(919);
      END_STATE();
    case 743:
      if (lookahead == 's') ADVANCE(962);
      END_STATE();
    case 744:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 745:
      if (lookahead == 's') ADVANCE(340);
      END_STATE();
    case 746:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 747:
      if (lookahead == 's') ADVANCE(787);
      END_STATE();
    case 748:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 749:
      if (lookahead == 's') ADVANCE(411);
      END_STATE();
    case 750:
      if (lookahead == 's') ADVANCE(738);
      END_STATE();
    case 751:
      if (lookahead == 's') ADVANCE(739);
      END_STATE();
    case 752:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 753:
      if (lookahead == 's') ADVANCE(813);
      END_STATE();
    case 754:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 755:
      if (lookahead == 's') ADVANCE(410);
      END_STATE();
    case 756:
      if (lookahead == 's') ADVANCE(391);
      END_STATE();
    case 757:
      if (lookahead == 's') ADVANCE(385);
      END_STATE();
    case 758:
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 759:
      if (lookahead == 's') ADVANCE(407);
      END_STATE();
    case 760:
      if (lookahead == 's') ADVANCE(503);
      END_STATE();
    case 761:
      if (lookahead == 's') ADVANCE(757);
      END_STATE();
    case 762:
      if (lookahead == 's') ADVANCE(431);
      END_STATE();
    case 763:
      if (lookahead == 's') ADVANCE(505);
      END_STATE();
    case 764:
      if (lookahead == 's') ADVANCE(759);
      END_STATE();
    case 765:
      if (lookahead == 's') ADVANCE(420);
      END_STATE();
    case 766:
      if (lookahead == 's') ADVANCE(324);
      END_STATE();
    case 767:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 768:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 769:
      if (lookahead == 't') ADVANCE(916);
      END_STATE();
    case 770:
      if (lookahead == 't') ADVANCE(885);
      END_STATE();
    case 771:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 772:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 773:
      if (lookahead == 't') ADVANCE(964);
      END_STATE();
    case 774:
      if (lookahead == 't') ADVANCE(948);
      END_STATE();
    case 775:
      if (lookahead == 't') ADVANCE(888);
      END_STATE();
    case 776:
      if (lookahead == 't') ADVANCE(911);
      END_STATE();
    case 777:
      if (lookahead == 't') ADVANCE(910);
      END_STATE();
    case 778:
      if (lookahead == 't') ADVANCE(915);
      END_STATE();
    case 779:
      if (lookahead == 't') ADVANCE(962);
      END_STATE();
    case 780:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 781:
      if (lookahead == 't') ADVANCE(867);
      END_STATE();
    case 782:
      if (lookahead == 't') ADVANCE(868);
      END_STATE();
    case 783:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 784:
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 785:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 786:
      if (lookahead == 't') ADVANCE(870);
      END_STATE();
    case 787:
      if (lookahead == 't') ADVANCE(591);
      END_STATE();
    case 788:
      if (lookahead == 't') ADVANCE(869);
      END_STATE();
    case 789:
      if (lookahead == 't') ADVANCE(408);
      END_STATE();
    case 790:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 791:
      if (lookahead == 't') ADVANCE(513);
      END_STATE();
    case 792:
      if (lookahead == 't') ADVANCE(742);
      END_STATE();
    case 793:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 794:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 795:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 796:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 797:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 798:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 799:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 800:
      if (lookahead == 't') ADVANCE(845);
      END_STATE();
    case 801:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 802:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 803:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 804:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 805:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 806:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 807:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 808:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 809:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 810:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 811:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 812:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 813:
      if (lookahead == 't') ADVANCE(623);
      END_STATE();
    case 814:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 815:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 816:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 817:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 818:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 819:
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 820:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 821:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 822:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 823:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 824:
      if (lookahead == 'u') ADVANCE(575);
      END_STATE();
    case 825:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 826:
      if (lookahead == 'u') ADVANCE(754);
      END_STATE();
    case 827:
      if (lookahead == 'u') ADVANCE(658);
      END_STATE();
    case 828:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 829:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 830:
      if (lookahead == 'u') ADVANCE(740);
      END_STATE();
    case 831:
      if (lookahead == 'u') ADVANCE(723);
      END_STATE();
    case 832:
      if (lookahead == 'u') ADVANCE(649);
      END_STATE();
    case 833:
      if (lookahead == 'u') ADVANCE(743);
      END_STATE();
    case 834:
      if (lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 835:
      if (lookahead == 'u') ADVANCE(681);
      END_STATE();
    case 836:
      if (lookahead == 'u') ADVANCE(549);
      END_STATE();
    case 837:
      if (lookahead == 'u') ADVANCE(554);
      END_STATE();
    case 838:
      if (lookahead == 'u') ADVANCE(555);
      END_STATE();
    case 839:
      if (lookahead == 'u') ADVANCE(559);
      END_STATE();
    case 840:
      if (lookahead == 'u') ADVANCE(561);
      END_STATE();
    case 841:
      if (lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 842:
      if (lookahead == 'u') ADVANCE(562);
      END_STATE();
    case 843:
      if (lookahead == 'u') ADVANCE(564);
      END_STATE();
    case 844:
      if (lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 845:
      if (lookahead == 'u') ADVANCE(718);
      END_STATE();
    case 846:
      if (lookahead == 'u') ADVANCE(758);
      END_STATE();
    case 847:
      if (lookahead == 'u') ADVANCE(311);
      END_STATE();
    case 848:
      if (lookahead == 'u') ADVANCE(719);
      END_STATE();
    case 849:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 850:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 851:
      if (lookahead == 'u') ADVANCE(578);
      END_STATE();
    case 852:
      if (lookahead == 'u') ADVANCE(767);
      END_STATE();
    case 853:
      if (lookahead == 'v') ADVANCE(256);
      END_STATE();
    case 854:
      if (lookahead == 'v') ADVANCE(260);
      END_STATE();
    case 855:
      if (lookahead == 'v') ADVANCE(275);
      END_STATE();
    case 856:
      if (lookahead == 'v') ADVANCE(281);
      END_STATE();
    case 857:
      if (lookahead == 'v') ADVANCE(283);
      END_STATE();
    case 858:
      if (lookahead == 'v') ADVANCE(287);
      END_STATE();
    case 859:
      if (lookahead == 'v') ADVANCE(331);
      END_STATE();
    case 860:
      if (lookahead == 'w') ADVANCE(882);
      END_STATE();
    case 861:
      if (lookahead == 'w') ADVANCE(1011);
      END_STATE();
    case 862:
      if (lookahead == 'w') ADVANCE(523);
      END_STATE();
    case 863:
      if (lookahead == 'w') ADVANCE(527);
      END_STATE();
    case 864:
      if (lookahead == 'x') ADVANCE(772);
      END_STATE();
    case 865:
      if (lookahead == 'x') ADVANCE(121);
      END_STATE();
    case 866:
      if (lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 867:
      if (lookahead == 'y') ADVANCE(923);
      END_STATE();
    case 868:
      if (lookahead == 'y') ADVANCE(922);
      END_STATE();
    case 869:
      if (lookahead == 'y') ADVANCE(887);
      END_STATE();
    case 870:
      if (lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 871:
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 872:
      if (lookahead == 'y') ADVANCE(753);
      END_STATE();
    case 873:
      if (lookahead == 'y') ADVANCE(654);
      END_STATE();
    case 874:
      if (lookahead == 'y') ADVANCE(655);
      END_STATE();
    case 875:
      if (lookahead == 'z') ADVANCE(243);
      END_STATE();
    case 876:
      if (lookahead == 'z') ADVANCE(245);
      END_STATE();
    case 877:
      if (eof) ADVANCE(881);
      ADVANCE_MAP(
        '\n', 1057,
        '\r', 3,
        '!', 956,
        '"', 55,
        '#', 1055,
        '-', 18,
        '0', 1003,
        '1', 1001,
        '2', 994,
        '3', 993,
        '4', 1002,
        '<', 958,
        '=', 956,
        '>', 958,
        'A', 1000,
        'B', 995,
        'C', 378,
        'D', 999,
        'E', 440,
        'F', 78,
        'G', 998,
        'H', 89,
        'I', 199,
        'K', 403,
        'L', 384,
        'M', 79,
        'N', 585,
        'O', 651,
        'P', 259,
        'Q', 825,
        'R', 996,
        'S', 154,
        'T', 255,
        'U', 145,
        'W', 997,
        'Y', 254,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(877);
      if (lookahead == '5' ||
          lookahead == '6') ADVANCE(1004);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(1038);
      END_STATE();
    case 878:
      if (eof) ADVANCE(881);
      ADVANCE_MAP(
        '\n', 1057,
        '\r', 3,
        '!', 956,
        '"', 960,
        '#', 1055,
        '0', 1035,
        '<', 958,
        '=', 956,
        '>', 958,
        'A', 439,
        'B', 77,
        'C', 379,
        'D', 380,
        'E', 482,
        'F', 694,
        'G', 219,
        'H', 88,
        'I', 199,
        'K', 403,
        'L', 384,
        'M', 79,
        'N', 585,
        'O', 722,
        'P', 259,
        'Q', 825,
        'R', 80,
        'S', 155,
        'T', 686,
        'U', 145,
        'W', 97,
        'Y', 254,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(879);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1038);
      END_STATE();
    case 879:
      if (eof) ADVANCE(881);
      ADVANCE_MAP(
        '\n', 1057,
        '\r', 3,
        '!', 956,
        '#', 1055,
        '0', 1035,
        '<', 958,
        '=', 956,
        '>', 958,
        'A', 439,
        'B', 77,
        'C', 379,
        'D', 380,
        'E', 482,
        'F', 694,
        'G', 219,
        'H', 88,
        'I', 199,
        'K', 403,
        'L', 384,
        'M', 79,
        'N', 585,
        'O', 722,
        'P', 259,
        'Q', 825,
        'R', 80,
        'S', 155,
        'T', 686,
        'U', 145,
        'W', 97,
        'Y', 254,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(879);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1038);
      END_STATE();
    case 880:
      if (eof) ADVANCE(881);
      ADVANCE_MAP(
        '\n', 1057,
        '\r', 3,
        '#', 1055,
        'H', 404,
        'I', 490,
        'M', 401,
        'S', 366,
        '\t', 1056,
        ' ', 1056,
      );
      END_STATE();
    case 881:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_Show);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_Hide);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_Minimal);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_Import);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_Optional);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_AlternateQuality);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_AnyEnchantment);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_ArchnemesisMod);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_AreaLevel);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_BaseArmour);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_BaseDefencePercentile);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_BaseEnergyShield);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_BaseEvasion);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_BaseType);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_BaseWard);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_BlightedMap);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_Class);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_Corrupted);
      if (lookahead == 'M') ADVANCE(598);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_CorruptedMods);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_DropLevel);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_ElderItem);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_ElderMap);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_EnchantmentPassiveNode);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_EnchantmentPassiveNum);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_FracturedItem);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_GemLevel);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_GemQualityType);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_HasCruciblePassiveTree);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_HasEaterOfWorldsImplicit);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_HasEnchantment);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_HasExplicitMod);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_HasImplicitMod);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_HasInfluence);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_HasSearingExarchImplicit);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_Height);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_Identified);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_ItemLevel);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_LinkedSockets);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_MapTier);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_Mirrored);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_Quality);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_Rarity);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_Replica);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_Scourged);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_ShapedMap);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_ShaperItem);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_SocketGroup);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_Sockets);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_StackSize);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_SynthesisedItem);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_TransfiguredGem);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_UberBlightedMap);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_WaystoneTier);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_Width);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_PlayAlertSound);
      if (lookahead == 'P') ADVANCE(599);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_None);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_PlayAlertSoundPositional);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_CustomAlertSound);
      if (lookahead == 'O') ADVANCE(669);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_action_token1);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_CustomAlertSoundOptional);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_DisableDropSound);
      if (lookahead == 'I') ADVANCE(345);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_EnableDropSound);
      if (lookahead == 'I') ADVANCE(344);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_DisableDropSoundIfAlertSound);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_EnableDropSoundIfAlertSound);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_MinimapIcon);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_DASH1);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_PlayEffect);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_Temp);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_SetBackgroundColor);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_SetBorderColor);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_SetFontSize);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_SetTextColor);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_Continue);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym__equal_operator_token1);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym__equal_operator_token1);
      if (lookahead == '=') ADVANCE(955);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym__range_operator_token1);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym__range_operator_token1);
      if (lookahead == '=') ADVANCE(957);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'N') ADVANCE(589);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_quality_token1);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_Superior);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_Divergent);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_Anomalous);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_Phantasmal);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_rarity_token1);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_Normal);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_Magic);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_Rare);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_Unique);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_influence_token1);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_Shaper);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_Shaper);
      if (lookahead == 'I') ADVANCE(806);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_Elder);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_Elder);
      if (lookahead == 'I') ADVANCE(805);
      if (lookahead == 'M') ADVANCE(96);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_Crusader);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_Hunter);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_Redeemer);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_Warlord);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == '0') ADVANCE(1036);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(991);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1038);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == '5') ADVANCE(1037);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1038);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(991);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      ADVANCE_MAP(
        'a', 748,
        'l', 381,
        'r', 582,
        'A', 991,
        'B', 991,
        'D', 991,
        'G', 991,
        'R', 991,
        'W', 991,
      );
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(991);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      ADVANCE_MAP(
        'a', 699,
        'h', 409,
        'i', 201,
        'A', 991,
        'B', 991,
        'D', 991,
        'G', 991,
        'R', 991,
        'W', 991,
      );
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(991);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(587);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(991);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      ADVANCE_MAP(
        'l', 803,
        'n', 586,
        'r', 149,
        'A', 991,
        'B', 991,
        'D', 991,
        'G', 991,
        'R', 991,
        'W', 991,
      );
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(1038);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(1038);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1038);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1038);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(991);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1038);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == '0') ADVANCE(1036);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1003);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1038);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == '5') ADVANCE(1037);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1038);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1003);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      ADVANCE_MAP(
        'a', 748,
        'l', 381,
        'r', 582,
        'A', 1003,
        'B', 1003,
        'D', 1003,
        'G', 1003,
        'R', 1003,
        'W', 1003,
      );
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1003);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      ADVANCE_MAP(
        'a', 699,
        'h', 409,
        'i', 201,
        'A', 1003,
        'B', 1003,
        'D', 1003,
        'G', 1003,
        'R', 1003,
        'W', 1003,
      );
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1003);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(587);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1003);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      ADVANCE_MAP(
        'l', 803,
        'n', 586,
        'r', 149,
        'A', 1003,
        'B', 1003,
        'D', 1003,
        'G', 1003,
        'R', 1003,
        'W', 1003,
      );
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(1038);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(1038);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1038);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1038);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1003);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1038);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_Red);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_Red);
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_Green);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_Blue);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_Brown);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_White);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_Yellow);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_Cyan);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_Grey);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_Orange);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_Pink);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_Purple);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_Circle);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_Diamond);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_Hexagon);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_Square);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_Star);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_Triangle);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_Cross);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_Moon);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_Raindrop);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_Kite);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_Pentagon);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_UpsideDownHouse);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ') ADVANCE(1029);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1030);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (set_contains(aux_sym_string_token1_character_set_1, 433, lookahead)) ADVANCE(1030);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1031);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_file_token1);
      if (lookahead == ' ') ADVANCE(1032);
      if (lookahead == '#') ADVANCE(1033);
      if (lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '?' &&
          lookahead != '|' &&
          (lookahead < 0x7f || 0x9f < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_file_token1);
      if ((!eof && lookahead <= '\t') ||
          (0x0b <= lookahead && lookahead <= 0x1f) ||
          lookahead == '"' ||
          lookahead == '*' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          lookahead == '|' ||
          (0x7f <= lookahead && lookahead <= 0x9f)) ADVANCE(1055);
      if (lookahead > 0x1f) ADVANCE(1033);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_file_token1);
      if (lookahead > 0x1f &&
          lookahead != '"' &&
          lookahead != '*' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '?' &&
          lookahead != '|' &&
          (lookahead < 0x7f || 0x9f < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(1038);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1038);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_number);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1038);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1038);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym__id_token1);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym__id_token1);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(1039);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym__volume_token1);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym__volume_token1);
      if (lookahead == '0') ADVANCE(1041);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym__volume_token1);
      if (lookahead == '0') ADVANCE(1042);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1041);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym__volume_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1041);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym__volume_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1044);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym__color_token1);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (lookahead == '5') ADVANCE(1048);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1049);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1046);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1046);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1049);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym__icon_size_token1);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym__font_size_token1);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym__font_size_token1);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1052);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym__font_size_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1052);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1055);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1056);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 878},
  [3] = {.lex_state = 878},
  [4] = {.lex_state = 878},
  [5] = {.lex_state = 878},
  [6] = {.lex_state = 878},
  [7] = {.lex_state = 878},
  [8] = {.lex_state = 878},
  [9] = {.lex_state = 878},
  [10] = {.lex_state = 878},
  [11] = {.lex_state = 878},
  [12] = {.lex_state = 878},
  [13] = {.lex_state = 878},
  [14] = {.lex_state = 878},
  [15] = {.lex_state = 878},
  [16] = {.lex_state = 878},
  [17] = {.lex_state = 878},
  [18] = {.lex_state = 878},
  [19] = {.lex_state = 878},
  [20] = {.lex_state = 878},
  [21] = {.lex_state = 878},
  [22] = {.lex_state = 878},
  [23] = {.lex_state = 878},
  [24] = {.lex_state = 878},
  [25] = {.lex_state = 878},
  [26] = {.lex_state = 878},
  [27] = {.lex_state = 878},
  [28] = {.lex_state = 878},
  [29] = {.lex_state = 878},
  [30] = {.lex_state = 878},
  [31] = {.lex_state = 878},
  [32] = {.lex_state = 878},
  [33] = {.lex_state = 878},
  [34] = {.lex_state = 878},
  [35] = {.lex_state = 878},
  [36] = {.lex_state = 878},
  [37] = {.lex_state = 878},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 880},
  [44] = {.lex_state = 880},
  [45] = {.lex_state = 878},
  [46] = {.lex_state = 878},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 878},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 880},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 880},
  [57] = {.lex_state = 880},
  [58] = {.lex_state = 880},
  [59] = {.lex_state = 880},
  [60] = {.lex_state = 880},
  [61] = {.lex_state = 880},
  [62] = {.lex_state = 880},
  [63] = {.lex_state = 880},
  [64] = {.lex_state = 880},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 880},
  [67] = {.lex_state = 880},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 880},
  [70] = {.lex_state = 880},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 880},
  [73] = {.lex_state = 880},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 880},
  [76] = {.lex_state = 880},
  [77] = {.lex_state = 880},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 880},
  [80] = {.lex_state = 880},
  [81] = {.lex_state = 880},
  [82] = {.lex_state = 880},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 880},
  [85] = {.lex_state = 880},
  [86] = {.lex_state = 880},
  [87] = {.lex_state = 880},
  [88] = {.lex_state = 880},
  [89] = {.lex_state = 880},
  [90] = {.lex_state = 880},
  [91] = {.lex_state = 880},
  [92] = {.lex_state = 880},
  [93] = {.lex_state = 880},
  [94] = {.lex_state = 880},
  [95] = {.lex_state = 880},
  [96] = {.lex_state = 880},
  [97] = {.lex_state = 880},
  [98] = {.lex_state = 880},
  [99] = {.lex_state = 880},
  [100] = {.lex_state = 880},
  [101] = {.lex_state = 880},
  [102] = {.lex_state = 880},
  [103] = {.lex_state = 880},
  [104] = {.lex_state = 880},
  [105] = {.lex_state = 878},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 15},
  [108] = {.lex_state = 13},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 880},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 880},
  [114] = {.lex_state = 880},
  [115] = {.lex_state = 880},
  [116] = {.lex_state = 878},
  [117] = {.lex_state = 880},
  [118] = {.lex_state = 880},
  [119] = {.lex_state = 880},
  [120] = {.lex_state = 880},
  [121] = {.lex_state = 880},
  [122] = {.lex_state = 880},
  [123] = {.lex_state = 880},
  [124] = {.lex_state = 880},
  [125] = {.lex_state = 880},
  [126] = {.lex_state = 880},
  [127] = {.lex_state = 11},
  [128] = {.lex_state = 880},
  [129] = {.lex_state = 880},
  [130] = {.lex_state = 880},
  [131] = {.lex_state = 11},
  [132] = {.lex_state = 880},
  [133] = {.lex_state = 880},
  [134] = {.lex_state = 880},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 880},
  [137] = {.lex_state = 878},
  [138] = {.lex_state = 880},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 880},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 880},
  [149] = {.lex_state = 880},
  [150] = {.lex_state = 880},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 880},
  [153] = {.lex_state = 880},
  [154] = {.lex_state = 17},
  [155] = {.lex_state = 880},
  [156] = {.lex_state = 878},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 878},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 880},
  [162] = {.lex_state = 880},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 880},
  [166] = {.lex_state = 880},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 880},
  [170] = {.lex_state = 878},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 880},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 878},
  [180] = {.lex_state = 878},
  [181] = {.lex_state = 878},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 880},
  [184] = {.lex_state = 880},
  [185] = {.lex_state = 878},
  [186] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Show] = ACTIONS(1),
    [anon_sym_Hide] = ACTIONS(1),
    [anon_sym_Minimal] = ACTIONS(1),
    [anon_sym_Import] = ACTIONS(1),
    [anon_sym_Optional] = ACTIONS(1),
    [anon_sym_AlternateQuality] = ACTIONS(1),
    [anon_sym_AnyEnchantment] = ACTIONS(1),
    [anon_sym_ArchnemesisMod] = ACTIONS(1),
    [anon_sym_AreaLevel] = ACTIONS(1),
    [anon_sym_BaseArmour] = ACTIONS(1),
    [anon_sym_BaseDefencePercentile] = ACTIONS(1),
    [anon_sym_BaseEnergyShield] = ACTIONS(1),
    [anon_sym_BaseEvasion] = ACTIONS(1),
    [anon_sym_BaseType] = ACTIONS(1),
    [anon_sym_BaseWard] = ACTIONS(1),
    [anon_sym_BlightedMap] = ACTIONS(1),
    [anon_sym_Class] = ACTIONS(1),
    [anon_sym_Corrupted] = ACTIONS(1),
    [anon_sym_CorruptedMods] = ACTIONS(1),
    [anon_sym_DropLevel] = ACTIONS(1),
    [anon_sym_ElderItem] = ACTIONS(1),
    [anon_sym_ElderMap] = ACTIONS(1),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(1),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(1),
    [anon_sym_FracturedItem] = ACTIONS(1),
    [anon_sym_GemLevel] = ACTIONS(1),
    [anon_sym_GemQualityType] = ACTIONS(1),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(1),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(1),
    [anon_sym_HasEnchantment] = ACTIONS(1),
    [anon_sym_HasExplicitMod] = ACTIONS(1),
    [anon_sym_HasImplicitMod] = ACTIONS(1),
    [anon_sym_HasInfluence] = ACTIONS(1),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(1),
    [anon_sym_Height] = ACTIONS(1),
    [anon_sym_Identified] = ACTIONS(1),
    [anon_sym_ItemLevel] = ACTIONS(1),
    [anon_sym_LinkedSockets] = ACTIONS(1),
    [anon_sym_MapTier] = ACTIONS(1),
    [anon_sym_Mirrored] = ACTIONS(1),
    [anon_sym_Quality] = ACTIONS(1),
    [anon_sym_Rarity] = ACTIONS(1),
    [anon_sym_Replica] = ACTIONS(1),
    [anon_sym_Scourged] = ACTIONS(1),
    [anon_sym_ShapedMap] = ACTIONS(1),
    [anon_sym_ShaperItem] = ACTIONS(1),
    [anon_sym_SocketGroup] = ACTIONS(1),
    [anon_sym_Sockets] = ACTIONS(1),
    [anon_sym_StackSize] = ACTIONS(1),
    [anon_sym_SynthesisedItem] = ACTIONS(1),
    [anon_sym_TransfiguredGem] = ACTIONS(1),
    [anon_sym_UberBlightedMap] = ACTIONS(1),
    [anon_sym_WaystoneTier] = ACTIONS(1),
    [anon_sym_Width] = ACTIONS(1),
    [anon_sym_PlayAlertSound] = ACTIONS(1),
    [anon_sym_None] = ACTIONS(1),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(1),
    [anon_sym_CustomAlertSound] = ACTIONS(1),
    [aux_sym_action_token1] = ACTIONS(1),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(1),
    [anon_sym_DisableDropSound] = ACTIONS(1),
    [anon_sym_EnableDropSound] = ACTIONS(1),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(1),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(1),
    [anon_sym_MinimapIcon] = ACTIONS(1),
    [anon_sym_DASH1] = ACTIONS(1),
    [anon_sym_PlayEffect] = ACTIONS(1),
    [anon_sym_Temp] = ACTIONS(1),
    [anon_sym_SetBackgroundColor] = ACTIONS(1),
    [anon_sym_SetBorderColor] = ACTIONS(1),
    [anon_sym_SetFontSize] = ACTIONS(1),
    [anon_sym_SetTextColor] = ACTIONS(1),
    [anon_sym_Continue] = ACTIONS(1),
    [aux_sym__equal_operator_token1] = ACTIONS(1),
    [aux_sym__range_operator_token1] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_quality_token1] = ACTIONS(1),
    [anon_sym_Superior] = ACTIONS(1),
    [anon_sym_Divergent] = ACTIONS(1),
    [anon_sym_Anomalous] = ACTIONS(1),
    [anon_sym_Phantasmal] = ACTIONS(1),
    [aux_sym_rarity_token1] = ACTIONS(1),
    [anon_sym_Normal] = ACTIONS(1),
    [anon_sym_Magic] = ACTIONS(1),
    [anon_sym_Rare] = ACTIONS(1),
    [anon_sym_Unique] = ACTIONS(1),
    [aux_sym_influence_token1] = ACTIONS(1),
    [anon_sym_Shaper] = ACTIONS(1),
    [anon_sym_Elder] = ACTIONS(1),
    [anon_sym_Crusader] = ACTIONS(1),
    [anon_sym_Hunter] = ACTIONS(1),
    [anon_sym_Redeemer] = ACTIONS(1),
    [anon_sym_Warlord] = ACTIONS(1),
    [aux_sym_sockets_token1] = ACTIONS(1),
    [aux_sym_sockets_token2] = ACTIONS(1),
    [anon_sym_Red] = ACTIONS(1),
    [anon_sym_Green] = ACTIONS(1),
    [anon_sym_Blue] = ACTIONS(1),
    [anon_sym_Brown] = ACTIONS(1),
    [anon_sym_White] = ACTIONS(1),
    [anon_sym_Yellow] = ACTIONS(1),
    [anon_sym_Cyan] = ACTIONS(1),
    [anon_sym_Grey] = ACTIONS(1),
    [anon_sym_Orange] = ACTIONS(1),
    [anon_sym_Pink] = ACTIONS(1),
    [anon_sym_Purple] = ACTIONS(1),
    [anon_sym_Circle] = ACTIONS(1),
    [anon_sym_Diamond] = ACTIONS(1),
    [anon_sym_Hexagon] = ACTIONS(1),
    [anon_sym_Square] = ACTIONS(1),
    [anon_sym_Star] = ACTIONS(1),
    [anon_sym_Triangle] = ACTIONS(1),
    [anon_sym_Cross] = ACTIONS(1),
    [anon_sym_Moon] = ACTIONS(1),
    [anon_sym_Raindrop] = ACTIONS(1),
    [anon_sym_Kite] = ACTIONS(1),
    [anon_sym_Pentagon] = ACTIONS(1),
    [anon_sym_UpsideDownHouse] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym__id_token1] = ACTIONS(1),
    [aux_sym__volume_token1] = ACTIONS(1),
    [aux_sym__color_token1] = ACTIONS(1),
    [aux_sym__icon_size_token1] = ACTIONS(1),
    [aux_sym__font_size_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(1),
  },
  [1] = {
    [sym_filter] = STATE(151),
    [sym_block] = STATE(38),
    [sym_import] = STATE(38),
    [aux_sym_filter_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_Show] = ACTIONS(7),
    [anon_sym_Hide] = ACTIONS(7),
    [anon_sym_Minimal] = ACTIONS(7),
    [anon_sym_Import] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(11),
  },
  [2] = {
    [sym_condition] = STATE(3),
    [sym_action] = STATE(3),
    [sym_continue] = STATE(3),
    [aux_sym_block_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_Show] = ACTIONS(13),
    [anon_sym_Hide] = ACTIONS(13),
    [anon_sym_Minimal] = ACTIONS(13),
    [anon_sym_Import] = ACTIONS(13),
    [anon_sym_AlternateQuality] = ACTIONS(15),
    [anon_sym_AnyEnchantment] = ACTIONS(15),
    [anon_sym_ArchnemesisMod] = ACTIONS(17),
    [anon_sym_AreaLevel] = ACTIONS(19),
    [anon_sym_BaseArmour] = ACTIONS(19),
    [anon_sym_BaseDefencePercentile] = ACTIONS(19),
    [anon_sym_BaseEnergyShield] = ACTIONS(19),
    [anon_sym_BaseEvasion] = ACTIONS(19),
    [anon_sym_BaseType] = ACTIONS(21),
    [anon_sym_BaseWard] = ACTIONS(19),
    [anon_sym_BlightedMap] = ACTIONS(15),
    [anon_sym_Class] = ACTIONS(23),
    [anon_sym_Corrupted] = ACTIONS(25),
    [anon_sym_CorruptedMods] = ACTIONS(19),
    [anon_sym_DropLevel] = ACTIONS(19),
    [anon_sym_ElderItem] = ACTIONS(15),
    [anon_sym_ElderMap] = ACTIONS(15),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(27),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(19),
    [anon_sym_FracturedItem] = ACTIONS(15),
    [anon_sym_GemLevel] = ACTIONS(19),
    [anon_sym_GemQualityType] = ACTIONS(29),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(15),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(19),
    [anon_sym_HasEnchantment] = ACTIONS(27),
    [anon_sym_HasExplicitMod] = ACTIONS(31),
    [anon_sym_HasImplicitMod] = ACTIONS(15),
    [anon_sym_HasInfluence] = ACTIONS(33),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(19),
    [anon_sym_Height] = ACTIONS(19),
    [anon_sym_Identified] = ACTIONS(15),
    [anon_sym_ItemLevel] = ACTIONS(19),
    [anon_sym_LinkedSockets] = ACTIONS(19),
    [anon_sym_MapTier] = ACTIONS(19),
    [anon_sym_Mirrored] = ACTIONS(15),
    [anon_sym_Quality] = ACTIONS(19),
    [anon_sym_Rarity] = ACTIONS(35),
    [anon_sym_Replica] = ACTIONS(15),
    [anon_sym_Scourged] = ACTIONS(15),
    [anon_sym_ShapedMap] = ACTIONS(15),
    [anon_sym_ShaperItem] = ACTIONS(15),
    [anon_sym_SocketGroup] = ACTIONS(37),
    [anon_sym_Sockets] = ACTIONS(37),
    [anon_sym_StackSize] = ACTIONS(19),
    [anon_sym_SynthesisedItem] = ACTIONS(15),
    [anon_sym_TransfiguredGem] = ACTIONS(15),
    [anon_sym_UberBlightedMap] = ACTIONS(15),
    [anon_sym_WaystoneTier] = ACTIONS(19),
    [anon_sym_Width] = ACTIONS(19),
    [anon_sym_PlayAlertSound] = ACTIONS(39),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(41),
    [anon_sym_CustomAlertSound] = ACTIONS(43),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(45),
    [anon_sym_DisableDropSound] = ACTIONS(47),
    [anon_sym_EnableDropSound] = ACTIONS(47),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(49),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(49),
    [anon_sym_MinimapIcon] = ACTIONS(51),
    [anon_sym_PlayEffect] = ACTIONS(53),
    [anon_sym_SetBackgroundColor] = ACTIONS(55),
    [anon_sym_SetBorderColor] = ACTIONS(55),
    [anon_sym_SetFontSize] = ACTIONS(57),
    [anon_sym_SetTextColor] = ACTIONS(55),
    [anon_sym_Continue] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(61),
  },
  [3] = {
    [sym_condition] = STATE(3),
    [sym_action] = STATE(3),
    [sym_continue] = STATE(3),
    [aux_sym_block_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_Show] = ACTIONS(63),
    [anon_sym_Hide] = ACTIONS(63),
    [anon_sym_Minimal] = ACTIONS(63),
    [anon_sym_Import] = ACTIONS(63),
    [anon_sym_AlternateQuality] = ACTIONS(65),
    [anon_sym_AnyEnchantment] = ACTIONS(65),
    [anon_sym_ArchnemesisMod] = ACTIONS(68),
    [anon_sym_AreaLevel] = ACTIONS(71),
    [anon_sym_BaseArmour] = ACTIONS(71),
    [anon_sym_BaseDefencePercentile] = ACTIONS(71),
    [anon_sym_BaseEnergyShield] = ACTIONS(71),
    [anon_sym_BaseEvasion] = ACTIONS(71),
    [anon_sym_BaseType] = ACTIONS(74),
    [anon_sym_BaseWard] = ACTIONS(71),
    [anon_sym_BlightedMap] = ACTIONS(65),
    [anon_sym_Class] = ACTIONS(77),
    [anon_sym_Corrupted] = ACTIONS(80),
    [anon_sym_CorruptedMods] = ACTIONS(71),
    [anon_sym_DropLevel] = ACTIONS(71),
    [anon_sym_ElderItem] = ACTIONS(65),
    [anon_sym_ElderMap] = ACTIONS(65),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(83),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(71),
    [anon_sym_FracturedItem] = ACTIONS(65),
    [anon_sym_GemLevel] = ACTIONS(71),
    [anon_sym_GemQualityType] = ACTIONS(86),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(65),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(71),
    [anon_sym_HasEnchantment] = ACTIONS(83),
    [anon_sym_HasExplicitMod] = ACTIONS(89),
    [anon_sym_HasImplicitMod] = ACTIONS(65),
    [anon_sym_HasInfluence] = ACTIONS(92),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(71),
    [anon_sym_Height] = ACTIONS(71),
    [anon_sym_Identified] = ACTIONS(65),
    [anon_sym_ItemLevel] = ACTIONS(71),
    [anon_sym_LinkedSockets] = ACTIONS(71),
    [anon_sym_MapTier] = ACTIONS(71),
    [anon_sym_Mirrored] = ACTIONS(65),
    [anon_sym_Quality] = ACTIONS(71),
    [anon_sym_Rarity] = ACTIONS(95),
    [anon_sym_Replica] = ACTIONS(65),
    [anon_sym_Scourged] = ACTIONS(65),
    [anon_sym_ShapedMap] = ACTIONS(65),
    [anon_sym_ShaperItem] = ACTIONS(65),
    [anon_sym_SocketGroup] = ACTIONS(98),
    [anon_sym_Sockets] = ACTIONS(98),
    [anon_sym_StackSize] = ACTIONS(71),
    [anon_sym_SynthesisedItem] = ACTIONS(65),
    [anon_sym_TransfiguredGem] = ACTIONS(65),
    [anon_sym_UberBlightedMap] = ACTIONS(65),
    [anon_sym_WaystoneTier] = ACTIONS(71),
    [anon_sym_Width] = ACTIONS(71),
    [anon_sym_PlayAlertSound] = ACTIONS(101),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(104),
    [anon_sym_CustomAlertSound] = ACTIONS(107),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(110),
    [anon_sym_DisableDropSound] = ACTIONS(113),
    [anon_sym_EnableDropSound] = ACTIONS(113),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(116),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(116),
    [anon_sym_MinimapIcon] = ACTIONS(119),
    [anon_sym_PlayEffect] = ACTIONS(122),
    [anon_sym_SetBackgroundColor] = ACTIONS(125),
    [anon_sym_SetBorderColor] = ACTIONS(125),
    [anon_sym_SetFontSize] = ACTIONS(128),
    [anon_sym_SetTextColor] = ACTIONS(125),
    [anon_sym_Continue] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(134),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_Show] = ACTIONS(137),
    [anon_sym_Hide] = ACTIONS(137),
    [anon_sym_Minimal] = ACTIONS(137),
    [anon_sym_Import] = ACTIONS(137),
    [anon_sym_AlternateQuality] = ACTIONS(137),
    [anon_sym_AnyEnchantment] = ACTIONS(137),
    [anon_sym_ArchnemesisMod] = ACTIONS(137),
    [anon_sym_AreaLevel] = ACTIONS(137),
    [anon_sym_BaseArmour] = ACTIONS(137),
    [anon_sym_BaseDefencePercentile] = ACTIONS(137),
    [anon_sym_BaseEnergyShield] = ACTIONS(137),
    [anon_sym_BaseEvasion] = ACTIONS(137),
    [anon_sym_BaseType] = ACTIONS(137),
    [anon_sym_BaseWard] = ACTIONS(137),
    [anon_sym_BlightedMap] = ACTIONS(137),
    [anon_sym_Class] = ACTIONS(137),
    [anon_sym_Corrupted] = ACTIONS(139),
    [anon_sym_CorruptedMods] = ACTIONS(137),
    [anon_sym_DropLevel] = ACTIONS(137),
    [anon_sym_ElderItem] = ACTIONS(137),
    [anon_sym_ElderMap] = ACTIONS(137),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(137),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(137),
    [anon_sym_FracturedItem] = ACTIONS(137),
    [anon_sym_GemLevel] = ACTIONS(137),
    [anon_sym_GemQualityType] = ACTIONS(137),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(137),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(137),
    [anon_sym_HasEnchantment] = ACTIONS(137),
    [anon_sym_HasExplicitMod] = ACTIONS(137),
    [anon_sym_HasImplicitMod] = ACTIONS(137),
    [anon_sym_HasInfluence] = ACTIONS(137),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(137),
    [anon_sym_Height] = ACTIONS(137),
    [anon_sym_Identified] = ACTIONS(137),
    [anon_sym_ItemLevel] = ACTIONS(137),
    [anon_sym_LinkedSockets] = ACTIONS(137),
    [anon_sym_MapTier] = ACTIONS(137),
    [anon_sym_Mirrored] = ACTIONS(137),
    [anon_sym_Quality] = ACTIONS(137),
    [anon_sym_Rarity] = ACTIONS(137),
    [anon_sym_Replica] = ACTIONS(137),
    [anon_sym_Scourged] = ACTIONS(137),
    [anon_sym_ShapedMap] = ACTIONS(137),
    [anon_sym_ShaperItem] = ACTIONS(137),
    [anon_sym_SocketGroup] = ACTIONS(137),
    [anon_sym_Sockets] = ACTIONS(137),
    [anon_sym_StackSize] = ACTIONS(137),
    [anon_sym_SynthesisedItem] = ACTIONS(137),
    [anon_sym_TransfiguredGem] = ACTIONS(137),
    [anon_sym_UberBlightedMap] = ACTIONS(137),
    [anon_sym_WaystoneTier] = ACTIONS(137),
    [anon_sym_Width] = ACTIONS(137),
    [anon_sym_PlayAlertSound] = ACTIONS(139),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(137),
    [anon_sym_CustomAlertSound] = ACTIONS(139),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(137),
    [anon_sym_DisableDropSound] = ACTIONS(139),
    [anon_sym_EnableDropSound] = ACTIONS(139),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(137),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(137),
    [anon_sym_MinimapIcon] = ACTIONS(137),
    [anon_sym_PlayEffect] = ACTIONS(137),
    [anon_sym_SetBackgroundColor] = ACTIONS(137),
    [anon_sym_SetBorderColor] = ACTIONS(137),
    [anon_sym_SetFontSize] = ACTIONS(137),
    [anon_sym_SetTextColor] = ACTIONS(137),
    [anon_sym_Continue] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(137),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_Show] = ACTIONS(141),
    [anon_sym_Hide] = ACTIONS(141),
    [anon_sym_Minimal] = ACTIONS(141),
    [anon_sym_Import] = ACTIONS(141),
    [anon_sym_AlternateQuality] = ACTIONS(141),
    [anon_sym_AnyEnchantment] = ACTIONS(141),
    [anon_sym_ArchnemesisMod] = ACTIONS(141),
    [anon_sym_AreaLevel] = ACTIONS(141),
    [anon_sym_BaseArmour] = ACTIONS(141),
    [anon_sym_BaseDefencePercentile] = ACTIONS(141),
    [anon_sym_BaseEnergyShield] = ACTIONS(141),
    [anon_sym_BaseEvasion] = ACTIONS(141),
    [anon_sym_BaseType] = ACTIONS(141),
    [anon_sym_BaseWard] = ACTIONS(141),
    [anon_sym_BlightedMap] = ACTIONS(141),
    [anon_sym_Class] = ACTIONS(141),
    [anon_sym_Corrupted] = ACTIONS(143),
    [anon_sym_CorruptedMods] = ACTIONS(141),
    [anon_sym_DropLevel] = ACTIONS(141),
    [anon_sym_ElderItem] = ACTIONS(141),
    [anon_sym_ElderMap] = ACTIONS(141),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(141),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(141),
    [anon_sym_FracturedItem] = ACTIONS(141),
    [anon_sym_GemLevel] = ACTIONS(141),
    [anon_sym_GemQualityType] = ACTIONS(141),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(141),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(141),
    [anon_sym_HasEnchantment] = ACTIONS(141),
    [anon_sym_HasExplicitMod] = ACTIONS(141),
    [anon_sym_HasImplicitMod] = ACTIONS(141),
    [anon_sym_HasInfluence] = ACTIONS(141),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(141),
    [anon_sym_Height] = ACTIONS(141),
    [anon_sym_Identified] = ACTIONS(141),
    [anon_sym_ItemLevel] = ACTIONS(141),
    [anon_sym_LinkedSockets] = ACTIONS(141),
    [anon_sym_MapTier] = ACTIONS(141),
    [anon_sym_Mirrored] = ACTIONS(141),
    [anon_sym_Quality] = ACTIONS(141),
    [anon_sym_Rarity] = ACTIONS(141),
    [anon_sym_Replica] = ACTIONS(141),
    [anon_sym_Scourged] = ACTIONS(141),
    [anon_sym_ShapedMap] = ACTIONS(141),
    [anon_sym_ShaperItem] = ACTIONS(141),
    [anon_sym_SocketGroup] = ACTIONS(141),
    [anon_sym_Sockets] = ACTIONS(141),
    [anon_sym_StackSize] = ACTIONS(141),
    [anon_sym_SynthesisedItem] = ACTIONS(141),
    [anon_sym_TransfiguredGem] = ACTIONS(141),
    [anon_sym_UberBlightedMap] = ACTIONS(141),
    [anon_sym_WaystoneTier] = ACTIONS(141),
    [anon_sym_Width] = ACTIONS(141),
    [anon_sym_PlayAlertSound] = ACTIONS(143),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(141),
    [anon_sym_CustomAlertSound] = ACTIONS(143),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(141),
    [anon_sym_DisableDropSound] = ACTIONS(143),
    [anon_sym_EnableDropSound] = ACTIONS(143),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(141),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(141),
    [anon_sym_MinimapIcon] = ACTIONS(141),
    [anon_sym_PlayEffect] = ACTIONS(141),
    [anon_sym_SetBackgroundColor] = ACTIONS(141),
    [anon_sym_SetBorderColor] = ACTIONS(141),
    [anon_sym_SetFontSize] = ACTIONS(141),
    [anon_sym_SetTextColor] = ACTIONS(141),
    [anon_sym_Continue] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(141),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_Show] = ACTIONS(145),
    [anon_sym_Hide] = ACTIONS(145),
    [anon_sym_Minimal] = ACTIONS(145),
    [anon_sym_Import] = ACTIONS(145),
    [anon_sym_AlternateQuality] = ACTIONS(145),
    [anon_sym_AnyEnchantment] = ACTIONS(145),
    [anon_sym_ArchnemesisMod] = ACTIONS(145),
    [anon_sym_AreaLevel] = ACTIONS(145),
    [anon_sym_BaseArmour] = ACTIONS(145),
    [anon_sym_BaseDefencePercentile] = ACTIONS(145),
    [anon_sym_BaseEnergyShield] = ACTIONS(145),
    [anon_sym_BaseEvasion] = ACTIONS(145),
    [anon_sym_BaseType] = ACTIONS(145),
    [anon_sym_BaseWard] = ACTIONS(145),
    [anon_sym_BlightedMap] = ACTIONS(145),
    [anon_sym_Class] = ACTIONS(145),
    [anon_sym_Corrupted] = ACTIONS(147),
    [anon_sym_CorruptedMods] = ACTIONS(145),
    [anon_sym_DropLevel] = ACTIONS(145),
    [anon_sym_ElderItem] = ACTIONS(145),
    [anon_sym_ElderMap] = ACTIONS(145),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(145),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(145),
    [anon_sym_FracturedItem] = ACTIONS(145),
    [anon_sym_GemLevel] = ACTIONS(145),
    [anon_sym_GemQualityType] = ACTIONS(145),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(145),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(145),
    [anon_sym_HasEnchantment] = ACTIONS(145),
    [anon_sym_HasExplicitMod] = ACTIONS(145),
    [anon_sym_HasImplicitMod] = ACTIONS(145),
    [anon_sym_HasInfluence] = ACTIONS(145),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(145),
    [anon_sym_Height] = ACTIONS(145),
    [anon_sym_Identified] = ACTIONS(145),
    [anon_sym_ItemLevel] = ACTIONS(145),
    [anon_sym_LinkedSockets] = ACTIONS(145),
    [anon_sym_MapTier] = ACTIONS(145),
    [anon_sym_Mirrored] = ACTIONS(145),
    [anon_sym_Quality] = ACTIONS(145),
    [anon_sym_Rarity] = ACTIONS(145),
    [anon_sym_Replica] = ACTIONS(145),
    [anon_sym_Scourged] = ACTIONS(145),
    [anon_sym_ShapedMap] = ACTIONS(145),
    [anon_sym_ShaperItem] = ACTIONS(145),
    [anon_sym_SocketGroup] = ACTIONS(145),
    [anon_sym_Sockets] = ACTIONS(145),
    [anon_sym_StackSize] = ACTIONS(145),
    [anon_sym_SynthesisedItem] = ACTIONS(145),
    [anon_sym_TransfiguredGem] = ACTIONS(145),
    [anon_sym_UberBlightedMap] = ACTIONS(145),
    [anon_sym_WaystoneTier] = ACTIONS(145),
    [anon_sym_Width] = ACTIONS(145),
    [anon_sym_PlayAlertSound] = ACTIONS(147),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(145),
    [anon_sym_CustomAlertSound] = ACTIONS(147),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(145),
    [anon_sym_DisableDropSound] = ACTIONS(147),
    [anon_sym_EnableDropSound] = ACTIONS(147),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(145),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(145),
    [anon_sym_MinimapIcon] = ACTIONS(145),
    [anon_sym_PlayEffect] = ACTIONS(145),
    [anon_sym_SetBackgroundColor] = ACTIONS(145),
    [anon_sym_SetBorderColor] = ACTIONS(145),
    [anon_sym_SetFontSize] = ACTIONS(145),
    [anon_sym_SetTextColor] = ACTIONS(145),
    [anon_sym_Continue] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(145),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_Show] = ACTIONS(149),
    [anon_sym_Hide] = ACTIONS(149),
    [anon_sym_Minimal] = ACTIONS(149),
    [anon_sym_Import] = ACTIONS(149),
    [anon_sym_AlternateQuality] = ACTIONS(149),
    [anon_sym_AnyEnchantment] = ACTIONS(149),
    [anon_sym_ArchnemesisMod] = ACTIONS(149),
    [anon_sym_AreaLevel] = ACTIONS(149),
    [anon_sym_BaseArmour] = ACTIONS(149),
    [anon_sym_BaseDefencePercentile] = ACTIONS(149),
    [anon_sym_BaseEnergyShield] = ACTIONS(149),
    [anon_sym_BaseEvasion] = ACTIONS(149),
    [anon_sym_BaseType] = ACTIONS(149),
    [anon_sym_BaseWard] = ACTIONS(149),
    [anon_sym_BlightedMap] = ACTIONS(149),
    [anon_sym_Class] = ACTIONS(149),
    [anon_sym_Corrupted] = ACTIONS(151),
    [anon_sym_CorruptedMods] = ACTIONS(149),
    [anon_sym_DropLevel] = ACTIONS(149),
    [anon_sym_ElderItem] = ACTIONS(149),
    [anon_sym_ElderMap] = ACTIONS(149),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(149),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(149),
    [anon_sym_FracturedItem] = ACTIONS(149),
    [anon_sym_GemLevel] = ACTIONS(149),
    [anon_sym_GemQualityType] = ACTIONS(149),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(149),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(149),
    [anon_sym_HasEnchantment] = ACTIONS(149),
    [anon_sym_HasExplicitMod] = ACTIONS(149),
    [anon_sym_HasImplicitMod] = ACTIONS(149),
    [anon_sym_HasInfluence] = ACTIONS(149),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(149),
    [anon_sym_Height] = ACTIONS(149),
    [anon_sym_Identified] = ACTIONS(149),
    [anon_sym_ItemLevel] = ACTIONS(149),
    [anon_sym_LinkedSockets] = ACTIONS(149),
    [anon_sym_MapTier] = ACTIONS(149),
    [anon_sym_Mirrored] = ACTIONS(149),
    [anon_sym_Quality] = ACTIONS(149),
    [anon_sym_Rarity] = ACTIONS(149),
    [anon_sym_Replica] = ACTIONS(149),
    [anon_sym_Scourged] = ACTIONS(149),
    [anon_sym_ShapedMap] = ACTIONS(149),
    [anon_sym_ShaperItem] = ACTIONS(149),
    [anon_sym_SocketGroup] = ACTIONS(149),
    [anon_sym_Sockets] = ACTIONS(149),
    [anon_sym_StackSize] = ACTIONS(149),
    [anon_sym_SynthesisedItem] = ACTIONS(149),
    [anon_sym_TransfiguredGem] = ACTIONS(149),
    [anon_sym_UberBlightedMap] = ACTIONS(149),
    [anon_sym_WaystoneTier] = ACTIONS(149),
    [anon_sym_Width] = ACTIONS(149),
    [anon_sym_PlayAlertSound] = ACTIONS(151),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(149),
    [anon_sym_CustomAlertSound] = ACTIONS(151),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(149),
    [anon_sym_DisableDropSound] = ACTIONS(151),
    [anon_sym_EnableDropSound] = ACTIONS(151),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(149),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(149),
    [anon_sym_MinimapIcon] = ACTIONS(149),
    [anon_sym_PlayEffect] = ACTIONS(149),
    [anon_sym_SetBackgroundColor] = ACTIONS(149),
    [anon_sym_SetBorderColor] = ACTIONS(149),
    [anon_sym_SetFontSize] = ACTIONS(149),
    [anon_sym_SetTextColor] = ACTIONS(149),
    [anon_sym_Continue] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(149),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_Show] = ACTIONS(153),
    [anon_sym_Hide] = ACTIONS(153),
    [anon_sym_Minimal] = ACTIONS(153),
    [anon_sym_Import] = ACTIONS(153),
    [anon_sym_AlternateQuality] = ACTIONS(153),
    [anon_sym_AnyEnchantment] = ACTIONS(153),
    [anon_sym_ArchnemesisMod] = ACTIONS(153),
    [anon_sym_AreaLevel] = ACTIONS(153),
    [anon_sym_BaseArmour] = ACTIONS(153),
    [anon_sym_BaseDefencePercentile] = ACTIONS(153),
    [anon_sym_BaseEnergyShield] = ACTIONS(153),
    [anon_sym_BaseEvasion] = ACTIONS(153),
    [anon_sym_BaseType] = ACTIONS(153),
    [anon_sym_BaseWard] = ACTIONS(153),
    [anon_sym_BlightedMap] = ACTIONS(153),
    [anon_sym_Class] = ACTIONS(153),
    [anon_sym_Corrupted] = ACTIONS(155),
    [anon_sym_CorruptedMods] = ACTIONS(153),
    [anon_sym_DropLevel] = ACTIONS(153),
    [anon_sym_ElderItem] = ACTIONS(153),
    [anon_sym_ElderMap] = ACTIONS(153),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(153),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(153),
    [anon_sym_FracturedItem] = ACTIONS(153),
    [anon_sym_GemLevel] = ACTIONS(153),
    [anon_sym_GemQualityType] = ACTIONS(153),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(153),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(153),
    [anon_sym_HasEnchantment] = ACTIONS(153),
    [anon_sym_HasExplicitMod] = ACTIONS(153),
    [anon_sym_HasImplicitMod] = ACTIONS(153),
    [anon_sym_HasInfluence] = ACTIONS(153),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(153),
    [anon_sym_Height] = ACTIONS(153),
    [anon_sym_Identified] = ACTIONS(153),
    [anon_sym_ItemLevel] = ACTIONS(153),
    [anon_sym_LinkedSockets] = ACTIONS(153),
    [anon_sym_MapTier] = ACTIONS(153),
    [anon_sym_Mirrored] = ACTIONS(153),
    [anon_sym_Quality] = ACTIONS(153),
    [anon_sym_Rarity] = ACTIONS(153),
    [anon_sym_Replica] = ACTIONS(153),
    [anon_sym_Scourged] = ACTIONS(153),
    [anon_sym_ShapedMap] = ACTIONS(153),
    [anon_sym_ShaperItem] = ACTIONS(153),
    [anon_sym_SocketGroup] = ACTIONS(153),
    [anon_sym_Sockets] = ACTIONS(153),
    [anon_sym_StackSize] = ACTIONS(153),
    [anon_sym_SynthesisedItem] = ACTIONS(153),
    [anon_sym_TransfiguredGem] = ACTIONS(153),
    [anon_sym_UberBlightedMap] = ACTIONS(153),
    [anon_sym_WaystoneTier] = ACTIONS(153),
    [anon_sym_Width] = ACTIONS(153),
    [anon_sym_PlayAlertSound] = ACTIONS(155),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(153),
    [anon_sym_CustomAlertSound] = ACTIONS(155),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(153),
    [anon_sym_DisableDropSound] = ACTIONS(155),
    [anon_sym_EnableDropSound] = ACTIONS(155),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(153),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(153),
    [anon_sym_MinimapIcon] = ACTIONS(153),
    [anon_sym_PlayEffect] = ACTIONS(153),
    [anon_sym_SetBackgroundColor] = ACTIONS(153),
    [anon_sym_SetBorderColor] = ACTIONS(153),
    [anon_sym_SetFontSize] = ACTIONS(153),
    [anon_sym_SetTextColor] = ACTIONS(153),
    [anon_sym_Continue] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(153),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_Show] = ACTIONS(157),
    [anon_sym_Hide] = ACTIONS(157),
    [anon_sym_Minimal] = ACTIONS(157),
    [anon_sym_Import] = ACTIONS(157),
    [anon_sym_AlternateQuality] = ACTIONS(157),
    [anon_sym_AnyEnchantment] = ACTIONS(157),
    [anon_sym_ArchnemesisMod] = ACTIONS(157),
    [anon_sym_AreaLevel] = ACTIONS(157),
    [anon_sym_BaseArmour] = ACTIONS(157),
    [anon_sym_BaseDefencePercentile] = ACTIONS(157),
    [anon_sym_BaseEnergyShield] = ACTIONS(157),
    [anon_sym_BaseEvasion] = ACTIONS(157),
    [anon_sym_BaseType] = ACTIONS(157),
    [anon_sym_BaseWard] = ACTIONS(157),
    [anon_sym_BlightedMap] = ACTIONS(157),
    [anon_sym_Class] = ACTIONS(157),
    [anon_sym_Corrupted] = ACTIONS(159),
    [anon_sym_CorruptedMods] = ACTIONS(157),
    [anon_sym_DropLevel] = ACTIONS(157),
    [anon_sym_ElderItem] = ACTIONS(157),
    [anon_sym_ElderMap] = ACTIONS(157),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(157),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(157),
    [anon_sym_FracturedItem] = ACTIONS(157),
    [anon_sym_GemLevel] = ACTIONS(157),
    [anon_sym_GemQualityType] = ACTIONS(157),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(157),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(157),
    [anon_sym_HasEnchantment] = ACTIONS(157),
    [anon_sym_HasExplicitMod] = ACTIONS(157),
    [anon_sym_HasImplicitMod] = ACTIONS(157),
    [anon_sym_HasInfluence] = ACTIONS(157),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(157),
    [anon_sym_Height] = ACTIONS(157),
    [anon_sym_Identified] = ACTIONS(157),
    [anon_sym_ItemLevel] = ACTIONS(157),
    [anon_sym_LinkedSockets] = ACTIONS(157),
    [anon_sym_MapTier] = ACTIONS(157),
    [anon_sym_Mirrored] = ACTIONS(157),
    [anon_sym_Quality] = ACTIONS(157),
    [anon_sym_Rarity] = ACTIONS(157),
    [anon_sym_Replica] = ACTIONS(157),
    [anon_sym_Scourged] = ACTIONS(157),
    [anon_sym_ShapedMap] = ACTIONS(157),
    [anon_sym_ShaperItem] = ACTIONS(157),
    [anon_sym_SocketGroup] = ACTIONS(157),
    [anon_sym_Sockets] = ACTIONS(157),
    [anon_sym_StackSize] = ACTIONS(157),
    [anon_sym_SynthesisedItem] = ACTIONS(157),
    [anon_sym_TransfiguredGem] = ACTIONS(157),
    [anon_sym_UberBlightedMap] = ACTIONS(157),
    [anon_sym_WaystoneTier] = ACTIONS(157),
    [anon_sym_Width] = ACTIONS(157),
    [anon_sym_PlayAlertSound] = ACTIONS(159),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(157),
    [anon_sym_CustomAlertSound] = ACTIONS(159),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(157),
    [anon_sym_DisableDropSound] = ACTIONS(159),
    [anon_sym_EnableDropSound] = ACTIONS(159),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(157),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(157),
    [anon_sym_MinimapIcon] = ACTIONS(157),
    [anon_sym_PlayEffect] = ACTIONS(157),
    [anon_sym_SetBackgroundColor] = ACTIONS(157),
    [anon_sym_SetBorderColor] = ACTIONS(157),
    [anon_sym_SetFontSize] = ACTIONS(157),
    [anon_sym_SetTextColor] = ACTIONS(157),
    [anon_sym_Continue] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(157),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_Show] = ACTIONS(161),
    [anon_sym_Hide] = ACTIONS(161),
    [anon_sym_Minimal] = ACTIONS(161),
    [anon_sym_Import] = ACTIONS(161),
    [anon_sym_AlternateQuality] = ACTIONS(161),
    [anon_sym_AnyEnchantment] = ACTIONS(161),
    [anon_sym_ArchnemesisMod] = ACTIONS(161),
    [anon_sym_AreaLevel] = ACTIONS(161),
    [anon_sym_BaseArmour] = ACTIONS(161),
    [anon_sym_BaseDefencePercentile] = ACTIONS(161),
    [anon_sym_BaseEnergyShield] = ACTIONS(161),
    [anon_sym_BaseEvasion] = ACTIONS(161),
    [anon_sym_BaseType] = ACTIONS(161),
    [anon_sym_BaseWard] = ACTIONS(161),
    [anon_sym_BlightedMap] = ACTIONS(161),
    [anon_sym_Class] = ACTIONS(161),
    [anon_sym_Corrupted] = ACTIONS(163),
    [anon_sym_CorruptedMods] = ACTIONS(161),
    [anon_sym_DropLevel] = ACTIONS(161),
    [anon_sym_ElderItem] = ACTIONS(161),
    [anon_sym_ElderMap] = ACTIONS(161),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(161),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(161),
    [anon_sym_FracturedItem] = ACTIONS(161),
    [anon_sym_GemLevel] = ACTIONS(161),
    [anon_sym_GemQualityType] = ACTIONS(161),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(161),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(161),
    [anon_sym_HasEnchantment] = ACTIONS(161),
    [anon_sym_HasExplicitMod] = ACTIONS(161),
    [anon_sym_HasImplicitMod] = ACTIONS(161),
    [anon_sym_HasInfluence] = ACTIONS(161),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(161),
    [anon_sym_Height] = ACTIONS(161),
    [anon_sym_Identified] = ACTIONS(161),
    [anon_sym_ItemLevel] = ACTIONS(161),
    [anon_sym_LinkedSockets] = ACTIONS(161),
    [anon_sym_MapTier] = ACTIONS(161),
    [anon_sym_Mirrored] = ACTIONS(161),
    [anon_sym_Quality] = ACTIONS(161),
    [anon_sym_Rarity] = ACTIONS(161),
    [anon_sym_Replica] = ACTIONS(161),
    [anon_sym_Scourged] = ACTIONS(161),
    [anon_sym_ShapedMap] = ACTIONS(161),
    [anon_sym_ShaperItem] = ACTIONS(161),
    [anon_sym_SocketGroup] = ACTIONS(161),
    [anon_sym_Sockets] = ACTIONS(161),
    [anon_sym_StackSize] = ACTIONS(161),
    [anon_sym_SynthesisedItem] = ACTIONS(161),
    [anon_sym_TransfiguredGem] = ACTIONS(161),
    [anon_sym_UberBlightedMap] = ACTIONS(161),
    [anon_sym_WaystoneTier] = ACTIONS(161),
    [anon_sym_Width] = ACTIONS(161),
    [anon_sym_PlayAlertSound] = ACTIONS(163),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(161),
    [anon_sym_CustomAlertSound] = ACTIONS(163),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(161),
    [anon_sym_DisableDropSound] = ACTIONS(163),
    [anon_sym_EnableDropSound] = ACTIONS(163),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(161),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(161),
    [anon_sym_MinimapIcon] = ACTIONS(161),
    [anon_sym_PlayEffect] = ACTIONS(161),
    [anon_sym_SetBackgroundColor] = ACTIONS(161),
    [anon_sym_SetBorderColor] = ACTIONS(161),
    [anon_sym_SetFontSize] = ACTIONS(161),
    [anon_sym_SetTextColor] = ACTIONS(161),
    [anon_sym_Continue] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(161),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [anon_sym_Show] = ACTIONS(165),
    [anon_sym_Hide] = ACTIONS(165),
    [anon_sym_Minimal] = ACTIONS(165),
    [anon_sym_Import] = ACTIONS(165),
    [anon_sym_AlternateQuality] = ACTIONS(165),
    [anon_sym_AnyEnchantment] = ACTIONS(165),
    [anon_sym_ArchnemesisMod] = ACTIONS(165),
    [anon_sym_AreaLevel] = ACTIONS(165),
    [anon_sym_BaseArmour] = ACTIONS(165),
    [anon_sym_BaseDefencePercentile] = ACTIONS(165),
    [anon_sym_BaseEnergyShield] = ACTIONS(165),
    [anon_sym_BaseEvasion] = ACTIONS(165),
    [anon_sym_BaseType] = ACTIONS(165),
    [anon_sym_BaseWard] = ACTIONS(165),
    [anon_sym_BlightedMap] = ACTIONS(165),
    [anon_sym_Class] = ACTIONS(165),
    [anon_sym_Corrupted] = ACTIONS(167),
    [anon_sym_CorruptedMods] = ACTIONS(165),
    [anon_sym_DropLevel] = ACTIONS(165),
    [anon_sym_ElderItem] = ACTIONS(165),
    [anon_sym_ElderMap] = ACTIONS(165),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(165),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(165),
    [anon_sym_FracturedItem] = ACTIONS(165),
    [anon_sym_GemLevel] = ACTIONS(165),
    [anon_sym_GemQualityType] = ACTIONS(165),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(165),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(165),
    [anon_sym_HasEnchantment] = ACTIONS(165),
    [anon_sym_HasExplicitMod] = ACTIONS(165),
    [anon_sym_HasImplicitMod] = ACTIONS(165),
    [anon_sym_HasInfluence] = ACTIONS(165),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(165),
    [anon_sym_Height] = ACTIONS(165),
    [anon_sym_Identified] = ACTIONS(165),
    [anon_sym_ItemLevel] = ACTIONS(165),
    [anon_sym_LinkedSockets] = ACTIONS(165),
    [anon_sym_MapTier] = ACTIONS(165),
    [anon_sym_Mirrored] = ACTIONS(165),
    [anon_sym_Quality] = ACTIONS(165),
    [anon_sym_Rarity] = ACTIONS(165),
    [anon_sym_Replica] = ACTIONS(165),
    [anon_sym_Scourged] = ACTIONS(165),
    [anon_sym_ShapedMap] = ACTIONS(165),
    [anon_sym_ShaperItem] = ACTIONS(165),
    [anon_sym_SocketGroup] = ACTIONS(165),
    [anon_sym_Sockets] = ACTIONS(165),
    [anon_sym_StackSize] = ACTIONS(165),
    [anon_sym_SynthesisedItem] = ACTIONS(165),
    [anon_sym_TransfiguredGem] = ACTIONS(165),
    [anon_sym_UberBlightedMap] = ACTIONS(165),
    [anon_sym_WaystoneTier] = ACTIONS(165),
    [anon_sym_Width] = ACTIONS(165),
    [anon_sym_PlayAlertSound] = ACTIONS(167),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(165),
    [anon_sym_CustomAlertSound] = ACTIONS(167),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(165),
    [anon_sym_DisableDropSound] = ACTIONS(167),
    [anon_sym_EnableDropSound] = ACTIONS(167),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(165),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(165),
    [anon_sym_MinimapIcon] = ACTIONS(165),
    [anon_sym_PlayEffect] = ACTIONS(165),
    [anon_sym_SetBackgroundColor] = ACTIONS(165),
    [anon_sym_SetBorderColor] = ACTIONS(165),
    [anon_sym_SetFontSize] = ACTIONS(165),
    [anon_sym_SetTextColor] = ACTIONS(165),
    [anon_sym_Continue] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(165),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_Show] = ACTIONS(169),
    [anon_sym_Hide] = ACTIONS(169),
    [anon_sym_Minimal] = ACTIONS(169),
    [anon_sym_Import] = ACTIONS(169),
    [anon_sym_AlternateQuality] = ACTIONS(169),
    [anon_sym_AnyEnchantment] = ACTIONS(169),
    [anon_sym_ArchnemesisMod] = ACTIONS(169),
    [anon_sym_AreaLevel] = ACTIONS(169),
    [anon_sym_BaseArmour] = ACTIONS(169),
    [anon_sym_BaseDefencePercentile] = ACTIONS(169),
    [anon_sym_BaseEnergyShield] = ACTIONS(169),
    [anon_sym_BaseEvasion] = ACTIONS(169),
    [anon_sym_BaseType] = ACTIONS(169),
    [anon_sym_BaseWard] = ACTIONS(169),
    [anon_sym_BlightedMap] = ACTIONS(169),
    [anon_sym_Class] = ACTIONS(169),
    [anon_sym_Corrupted] = ACTIONS(171),
    [anon_sym_CorruptedMods] = ACTIONS(169),
    [anon_sym_DropLevel] = ACTIONS(169),
    [anon_sym_ElderItem] = ACTIONS(169),
    [anon_sym_ElderMap] = ACTIONS(169),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(169),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(169),
    [anon_sym_FracturedItem] = ACTIONS(169),
    [anon_sym_GemLevel] = ACTIONS(169),
    [anon_sym_GemQualityType] = ACTIONS(169),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(169),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(169),
    [anon_sym_HasEnchantment] = ACTIONS(169),
    [anon_sym_HasExplicitMod] = ACTIONS(169),
    [anon_sym_HasImplicitMod] = ACTIONS(169),
    [anon_sym_HasInfluence] = ACTIONS(169),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(169),
    [anon_sym_Height] = ACTIONS(169),
    [anon_sym_Identified] = ACTIONS(169),
    [anon_sym_ItemLevel] = ACTIONS(169),
    [anon_sym_LinkedSockets] = ACTIONS(169),
    [anon_sym_MapTier] = ACTIONS(169),
    [anon_sym_Mirrored] = ACTIONS(169),
    [anon_sym_Quality] = ACTIONS(169),
    [anon_sym_Rarity] = ACTIONS(169),
    [anon_sym_Replica] = ACTIONS(169),
    [anon_sym_Scourged] = ACTIONS(169),
    [anon_sym_ShapedMap] = ACTIONS(169),
    [anon_sym_ShaperItem] = ACTIONS(169),
    [anon_sym_SocketGroup] = ACTIONS(169),
    [anon_sym_Sockets] = ACTIONS(169),
    [anon_sym_StackSize] = ACTIONS(169),
    [anon_sym_SynthesisedItem] = ACTIONS(169),
    [anon_sym_TransfiguredGem] = ACTIONS(169),
    [anon_sym_UberBlightedMap] = ACTIONS(169),
    [anon_sym_WaystoneTier] = ACTIONS(169),
    [anon_sym_Width] = ACTIONS(169),
    [anon_sym_PlayAlertSound] = ACTIONS(171),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(169),
    [anon_sym_CustomAlertSound] = ACTIONS(171),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(169),
    [anon_sym_DisableDropSound] = ACTIONS(171),
    [anon_sym_EnableDropSound] = ACTIONS(171),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(169),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(169),
    [anon_sym_MinimapIcon] = ACTIONS(169),
    [anon_sym_PlayEffect] = ACTIONS(169),
    [anon_sym_SetBackgroundColor] = ACTIONS(169),
    [anon_sym_SetBorderColor] = ACTIONS(169),
    [anon_sym_SetFontSize] = ACTIONS(169),
    [anon_sym_SetTextColor] = ACTIONS(169),
    [anon_sym_Continue] = ACTIONS(169),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(169),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_Show] = ACTIONS(153),
    [anon_sym_Hide] = ACTIONS(153),
    [anon_sym_Minimal] = ACTIONS(153),
    [anon_sym_Import] = ACTIONS(153),
    [anon_sym_AlternateQuality] = ACTIONS(153),
    [anon_sym_AnyEnchantment] = ACTIONS(153),
    [anon_sym_ArchnemesisMod] = ACTIONS(153),
    [anon_sym_AreaLevel] = ACTIONS(153),
    [anon_sym_BaseArmour] = ACTIONS(153),
    [anon_sym_BaseDefencePercentile] = ACTIONS(153),
    [anon_sym_BaseEnergyShield] = ACTIONS(153),
    [anon_sym_BaseEvasion] = ACTIONS(153),
    [anon_sym_BaseType] = ACTIONS(153),
    [anon_sym_BaseWard] = ACTIONS(153),
    [anon_sym_BlightedMap] = ACTIONS(153),
    [anon_sym_Class] = ACTIONS(153),
    [anon_sym_Corrupted] = ACTIONS(155),
    [anon_sym_CorruptedMods] = ACTIONS(153),
    [anon_sym_DropLevel] = ACTIONS(153),
    [anon_sym_ElderItem] = ACTIONS(153),
    [anon_sym_ElderMap] = ACTIONS(153),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(153),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(153),
    [anon_sym_FracturedItem] = ACTIONS(153),
    [anon_sym_GemLevel] = ACTIONS(153),
    [anon_sym_GemQualityType] = ACTIONS(153),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(153),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(153),
    [anon_sym_HasEnchantment] = ACTIONS(153),
    [anon_sym_HasExplicitMod] = ACTIONS(153),
    [anon_sym_HasImplicitMod] = ACTIONS(153),
    [anon_sym_HasInfluence] = ACTIONS(153),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(153),
    [anon_sym_Height] = ACTIONS(153),
    [anon_sym_Identified] = ACTIONS(153),
    [anon_sym_ItemLevel] = ACTIONS(153),
    [anon_sym_LinkedSockets] = ACTIONS(153),
    [anon_sym_MapTier] = ACTIONS(153),
    [anon_sym_Mirrored] = ACTIONS(153),
    [anon_sym_Quality] = ACTIONS(153),
    [anon_sym_Rarity] = ACTIONS(153),
    [anon_sym_Replica] = ACTIONS(153),
    [anon_sym_Scourged] = ACTIONS(153),
    [anon_sym_ShapedMap] = ACTIONS(153),
    [anon_sym_ShaperItem] = ACTIONS(153),
    [anon_sym_SocketGroup] = ACTIONS(153),
    [anon_sym_Sockets] = ACTIONS(153),
    [anon_sym_StackSize] = ACTIONS(153),
    [anon_sym_SynthesisedItem] = ACTIONS(153),
    [anon_sym_TransfiguredGem] = ACTIONS(153),
    [anon_sym_UberBlightedMap] = ACTIONS(153),
    [anon_sym_WaystoneTier] = ACTIONS(153),
    [anon_sym_Width] = ACTIONS(153),
    [anon_sym_PlayAlertSound] = ACTIONS(155),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(153),
    [anon_sym_CustomAlertSound] = ACTIONS(155),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(153),
    [anon_sym_DisableDropSound] = ACTIONS(155),
    [anon_sym_EnableDropSound] = ACTIONS(155),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(153),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(153),
    [anon_sym_MinimapIcon] = ACTIONS(153),
    [anon_sym_PlayEffect] = ACTIONS(153),
    [anon_sym_SetBackgroundColor] = ACTIONS(153),
    [anon_sym_SetBorderColor] = ACTIONS(153),
    [anon_sym_SetFontSize] = ACTIONS(153),
    [anon_sym_SetTextColor] = ACTIONS(153),
    [anon_sym_Continue] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(153),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_Show] = ACTIONS(173),
    [anon_sym_Hide] = ACTIONS(173),
    [anon_sym_Minimal] = ACTIONS(173),
    [anon_sym_Import] = ACTIONS(173),
    [anon_sym_AlternateQuality] = ACTIONS(173),
    [anon_sym_AnyEnchantment] = ACTIONS(173),
    [anon_sym_ArchnemesisMod] = ACTIONS(173),
    [anon_sym_AreaLevel] = ACTIONS(173),
    [anon_sym_BaseArmour] = ACTIONS(173),
    [anon_sym_BaseDefencePercentile] = ACTIONS(173),
    [anon_sym_BaseEnergyShield] = ACTIONS(173),
    [anon_sym_BaseEvasion] = ACTIONS(173),
    [anon_sym_BaseType] = ACTIONS(173),
    [anon_sym_BaseWard] = ACTIONS(173),
    [anon_sym_BlightedMap] = ACTIONS(173),
    [anon_sym_Class] = ACTIONS(173),
    [anon_sym_Corrupted] = ACTIONS(175),
    [anon_sym_CorruptedMods] = ACTIONS(173),
    [anon_sym_DropLevel] = ACTIONS(173),
    [anon_sym_ElderItem] = ACTIONS(173),
    [anon_sym_ElderMap] = ACTIONS(173),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(173),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(173),
    [anon_sym_FracturedItem] = ACTIONS(173),
    [anon_sym_GemLevel] = ACTIONS(173),
    [anon_sym_GemQualityType] = ACTIONS(173),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(173),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(173),
    [anon_sym_HasEnchantment] = ACTIONS(173),
    [anon_sym_HasExplicitMod] = ACTIONS(173),
    [anon_sym_HasImplicitMod] = ACTIONS(173),
    [anon_sym_HasInfluence] = ACTIONS(173),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(173),
    [anon_sym_Height] = ACTIONS(173),
    [anon_sym_Identified] = ACTIONS(173),
    [anon_sym_ItemLevel] = ACTIONS(173),
    [anon_sym_LinkedSockets] = ACTIONS(173),
    [anon_sym_MapTier] = ACTIONS(173),
    [anon_sym_Mirrored] = ACTIONS(173),
    [anon_sym_Quality] = ACTIONS(173),
    [anon_sym_Rarity] = ACTIONS(173),
    [anon_sym_Replica] = ACTIONS(173),
    [anon_sym_Scourged] = ACTIONS(173),
    [anon_sym_ShapedMap] = ACTIONS(173),
    [anon_sym_ShaperItem] = ACTIONS(173),
    [anon_sym_SocketGroup] = ACTIONS(173),
    [anon_sym_Sockets] = ACTIONS(173),
    [anon_sym_StackSize] = ACTIONS(173),
    [anon_sym_SynthesisedItem] = ACTIONS(173),
    [anon_sym_TransfiguredGem] = ACTIONS(173),
    [anon_sym_UberBlightedMap] = ACTIONS(173),
    [anon_sym_WaystoneTier] = ACTIONS(173),
    [anon_sym_Width] = ACTIONS(173),
    [anon_sym_PlayAlertSound] = ACTIONS(175),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(173),
    [anon_sym_CustomAlertSound] = ACTIONS(175),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(173),
    [anon_sym_DisableDropSound] = ACTIONS(175),
    [anon_sym_EnableDropSound] = ACTIONS(175),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(173),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(173),
    [anon_sym_MinimapIcon] = ACTIONS(173),
    [anon_sym_PlayEffect] = ACTIONS(173),
    [anon_sym_SetBackgroundColor] = ACTIONS(173),
    [anon_sym_SetBorderColor] = ACTIONS(173),
    [anon_sym_SetFontSize] = ACTIONS(173),
    [anon_sym_SetTextColor] = ACTIONS(173),
    [anon_sym_Continue] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(173),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_Show] = ACTIONS(177),
    [anon_sym_Hide] = ACTIONS(177),
    [anon_sym_Minimal] = ACTIONS(177),
    [anon_sym_Import] = ACTIONS(177),
    [anon_sym_AlternateQuality] = ACTIONS(177),
    [anon_sym_AnyEnchantment] = ACTIONS(177),
    [anon_sym_ArchnemesisMod] = ACTIONS(177),
    [anon_sym_AreaLevel] = ACTIONS(177),
    [anon_sym_BaseArmour] = ACTIONS(177),
    [anon_sym_BaseDefencePercentile] = ACTIONS(177),
    [anon_sym_BaseEnergyShield] = ACTIONS(177),
    [anon_sym_BaseEvasion] = ACTIONS(177),
    [anon_sym_BaseType] = ACTIONS(177),
    [anon_sym_BaseWard] = ACTIONS(177),
    [anon_sym_BlightedMap] = ACTIONS(177),
    [anon_sym_Class] = ACTIONS(177),
    [anon_sym_Corrupted] = ACTIONS(179),
    [anon_sym_CorruptedMods] = ACTIONS(177),
    [anon_sym_DropLevel] = ACTIONS(177),
    [anon_sym_ElderItem] = ACTIONS(177),
    [anon_sym_ElderMap] = ACTIONS(177),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(177),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(177),
    [anon_sym_FracturedItem] = ACTIONS(177),
    [anon_sym_GemLevel] = ACTIONS(177),
    [anon_sym_GemQualityType] = ACTIONS(177),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(177),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(177),
    [anon_sym_HasEnchantment] = ACTIONS(177),
    [anon_sym_HasExplicitMod] = ACTIONS(177),
    [anon_sym_HasImplicitMod] = ACTIONS(177),
    [anon_sym_HasInfluence] = ACTIONS(177),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(177),
    [anon_sym_Height] = ACTIONS(177),
    [anon_sym_Identified] = ACTIONS(177),
    [anon_sym_ItemLevel] = ACTIONS(177),
    [anon_sym_LinkedSockets] = ACTIONS(177),
    [anon_sym_MapTier] = ACTIONS(177),
    [anon_sym_Mirrored] = ACTIONS(177),
    [anon_sym_Quality] = ACTIONS(177),
    [anon_sym_Rarity] = ACTIONS(177),
    [anon_sym_Replica] = ACTIONS(177),
    [anon_sym_Scourged] = ACTIONS(177),
    [anon_sym_ShapedMap] = ACTIONS(177),
    [anon_sym_ShaperItem] = ACTIONS(177),
    [anon_sym_SocketGroup] = ACTIONS(177),
    [anon_sym_Sockets] = ACTIONS(177),
    [anon_sym_StackSize] = ACTIONS(177),
    [anon_sym_SynthesisedItem] = ACTIONS(177),
    [anon_sym_TransfiguredGem] = ACTIONS(177),
    [anon_sym_UberBlightedMap] = ACTIONS(177),
    [anon_sym_WaystoneTier] = ACTIONS(177),
    [anon_sym_Width] = ACTIONS(177),
    [anon_sym_PlayAlertSound] = ACTIONS(179),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(177),
    [anon_sym_CustomAlertSound] = ACTIONS(179),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(177),
    [anon_sym_DisableDropSound] = ACTIONS(179),
    [anon_sym_EnableDropSound] = ACTIONS(179),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(177),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(177),
    [anon_sym_MinimapIcon] = ACTIONS(177),
    [anon_sym_PlayEffect] = ACTIONS(177),
    [anon_sym_SetBackgroundColor] = ACTIONS(177),
    [anon_sym_SetBorderColor] = ACTIONS(177),
    [anon_sym_SetFontSize] = ACTIONS(177),
    [anon_sym_SetTextColor] = ACTIONS(177),
    [anon_sym_Continue] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(177),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_Show] = ACTIONS(181),
    [anon_sym_Hide] = ACTIONS(181),
    [anon_sym_Minimal] = ACTIONS(181),
    [anon_sym_Import] = ACTIONS(181),
    [anon_sym_AlternateQuality] = ACTIONS(181),
    [anon_sym_AnyEnchantment] = ACTIONS(181),
    [anon_sym_ArchnemesisMod] = ACTIONS(181),
    [anon_sym_AreaLevel] = ACTIONS(181),
    [anon_sym_BaseArmour] = ACTIONS(181),
    [anon_sym_BaseDefencePercentile] = ACTIONS(181),
    [anon_sym_BaseEnergyShield] = ACTIONS(181),
    [anon_sym_BaseEvasion] = ACTIONS(181),
    [anon_sym_BaseType] = ACTIONS(181),
    [anon_sym_BaseWard] = ACTIONS(181),
    [anon_sym_BlightedMap] = ACTIONS(181),
    [anon_sym_Class] = ACTIONS(181),
    [anon_sym_Corrupted] = ACTIONS(183),
    [anon_sym_CorruptedMods] = ACTIONS(181),
    [anon_sym_DropLevel] = ACTIONS(181),
    [anon_sym_ElderItem] = ACTIONS(181),
    [anon_sym_ElderMap] = ACTIONS(181),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(181),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(181),
    [anon_sym_FracturedItem] = ACTIONS(181),
    [anon_sym_GemLevel] = ACTIONS(181),
    [anon_sym_GemQualityType] = ACTIONS(181),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(181),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(181),
    [anon_sym_HasEnchantment] = ACTIONS(181),
    [anon_sym_HasExplicitMod] = ACTIONS(181),
    [anon_sym_HasImplicitMod] = ACTIONS(181),
    [anon_sym_HasInfluence] = ACTIONS(181),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(181),
    [anon_sym_Height] = ACTIONS(181),
    [anon_sym_Identified] = ACTIONS(181),
    [anon_sym_ItemLevel] = ACTIONS(181),
    [anon_sym_LinkedSockets] = ACTIONS(181),
    [anon_sym_MapTier] = ACTIONS(181),
    [anon_sym_Mirrored] = ACTIONS(181),
    [anon_sym_Quality] = ACTIONS(181),
    [anon_sym_Rarity] = ACTIONS(181),
    [anon_sym_Replica] = ACTIONS(181),
    [anon_sym_Scourged] = ACTIONS(181),
    [anon_sym_ShapedMap] = ACTIONS(181),
    [anon_sym_ShaperItem] = ACTIONS(181),
    [anon_sym_SocketGroup] = ACTIONS(181),
    [anon_sym_Sockets] = ACTIONS(181),
    [anon_sym_StackSize] = ACTIONS(181),
    [anon_sym_SynthesisedItem] = ACTIONS(181),
    [anon_sym_TransfiguredGem] = ACTIONS(181),
    [anon_sym_UberBlightedMap] = ACTIONS(181),
    [anon_sym_WaystoneTier] = ACTIONS(181),
    [anon_sym_Width] = ACTIONS(181),
    [anon_sym_PlayAlertSound] = ACTIONS(183),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(181),
    [anon_sym_CustomAlertSound] = ACTIONS(183),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(181),
    [anon_sym_DisableDropSound] = ACTIONS(183),
    [anon_sym_EnableDropSound] = ACTIONS(183),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(181),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(181),
    [anon_sym_MinimapIcon] = ACTIONS(181),
    [anon_sym_PlayEffect] = ACTIONS(181),
    [anon_sym_SetBackgroundColor] = ACTIONS(181),
    [anon_sym_SetBorderColor] = ACTIONS(181),
    [anon_sym_SetFontSize] = ACTIONS(181),
    [anon_sym_SetTextColor] = ACTIONS(181),
    [anon_sym_Continue] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(181),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_Show] = ACTIONS(185),
    [anon_sym_Hide] = ACTIONS(185),
    [anon_sym_Minimal] = ACTIONS(185),
    [anon_sym_Import] = ACTIONS(185),
    [anon_sym_AlternateQuality] = ACTIONS(185),
    [anon_sym_AnyEnchantment] = ACTIONS(185),
    [anon_sym_ArchnemesisMod] = ACTIONS(185),
    [anon_sym_AreaLevel] = ACTIONS(185),
    [anon_sym_BaseArmour] = ACTIONS(185),
    [anon_sym_BaseDefencePercentile] = ACTIONS(185),
    [anon_sym_BaseEnergyShield] = ACTIONS(185),
    [anon_sym_BaseEvasion] = ACTIONS(185),
    [anon_sym_BaseType] = ACTIONS(185),
    [anon_sym_BaseWard] = ACTIONS(185),
    [anon_sym_BlightedMap] = ACTIONS(185),
    [anon_sym_Class] = ACTIONS(185),
    [anon_sym_Corrupted] = ACTIONS(187),
    [anon_sym_CorruptedMods] = ACTIONS(185),
    [anon_sym_DropLevel] = ACTIONS(185),
    [anon_sym_ElderItem] = ACTIONS(185),
    [anon_sym_ElderMap] = ACTIONS(185),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(185),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(185),
    [anon_sym_FracturedItem] = ACTIONS(185),
    [anon_sym_GemLevel] = ACTIONS(185),
    [anon_sym_GemQualityType] = ACTIONS(185),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(185),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(185),
    [anon_sym_HasEnchantment] = ACTIONS(185),
    [anon_sym_HasExplicitMod] = ACTIONS(185),
    [anon_sym_HasImplicitMod] = ACTIONS(185),
    [anon_sym_HasInfluence] = ACTIONS(185),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(185),
    [anon_sym_Height] = ACTIONS(185),
    [anon_sym_Identified] = ACTIONS(185),
    [anon_sym_ItemLevel] = ACTIONS(185),
    [anon_sym_LinkedSockets] = ACTIONS(185),
    [anon_sym_MapTier] = ACTIONS(185),
    [anon_sym_Mirrored] = ACTIONS(185),
    [anon_sym_Quality] = ACTIONS(185),
    [anon_sym_Rarity] = ACTIONS(185),
    [anon_sym_Replica] = ACTIONS(185),
    [anon_sym_Scourged] = ACTIONS(185),
    [anon_sym_ShapedMap] = ACTIONS(185),
    [anon_sym_ShaperItem] = ACTIONS(185),
    [anon_sym_SocketGroup] = ACTIONS(185),
    [anon_sym_Sockets] = ACTIONS(185),
    [anon_sym_StackSize] = ACTIONS(185),
    [anon_sym_SynthesisedItem] = ACTIONS(185),
    [anon_sym_TransfiguredGem] = ACTIONS(185),
    [anon_sym_UberBlightedMap] = ACTIONS(185),
    [anon_sym_WaystoneTier] = ACTIONS(185),
    [anon_sym_Width] = ACTIONS(185),
    [anon_sym_PlayAlertSound] = ACTIONS(187),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(185),
    [anon_sym_CustomAlertSound] = ACTIONS(187),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(185),
    [anon_sym_DisableDropSound] = ACTIONS(187),
    [anon_sym_EnableDropSound] = ACTIONS(187),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(185),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(185),
    [anon_sym_MinimapIcon] = ACTIONS(185),
    [anon_sym_PlayEffect] = ACTIONS(185),
    [anon_sym_SetBackgroundColor] = ACTIONS(185),
    [anon_sym_SetBorderColor] = ACTIONS(185),
    [anon_sym_SetFontSize] = ACTIONS(185),
    [anon_sym_SetTextColor] = ACTIONS(185),
    [anon_sym_Continue] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(185),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_Show] = ACTIONS(189),
    [anon_sym_Hide] = ACTIONS(189),
    [anon_sym_Minimal] = ACTIONS(189),
    [anon_sym_Import] = ACTIONS(189),
    [anon_sym_AlternateQuality] = ACTIONS(189),
    [anon_sym_AnyEnchantment] = ACTIONS(189),
    [anon_sym_ArchnemesisMod] = ACTIONS(189),
    [anon_sym_AreaLevel] = ACTIONS(189),
    [anon_sym_BaseArmour] = ACTIONS(189),
    [anon_sym_BaseDefencePercentile] = ACTIONS(189),
    [anon_sym_BaseEnergyShield] = ACTIONS(189),
    [anon_sym_BaseEvasion] = ACTIONS(189),
    [anon_sym_BaseType] = ACTIONS(189),
    [anon_sym_BaseWard] = ACTIONS(189),
    [anon_sym_BlightedMap] = ACTIONS(189),
    [anon_sym_Class] = ACTIONS(189),
    [anon_sym_Corrupted] = ACTIONS(191),
    [anon_sym_CorruptedMods] = ACTIONS(189),
    [anon_sym_DropLevel] = ACTIONS(189),
    [anon_sym_ElderItem] = ACTIONS(189),
    [anon_sym_ElderMap] = ACTIONS(189),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(189),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(189),
    [anon_sym_FracturedItem] = ACTIONS(189),
    [anon_sym_GemLevel] = ACTIONS(189),
    [anon_sym_GemQualityType] = ACTIONS(189),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(189),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(189),
    [anon_sym_HasEnchantment] = ACTIONS(189),
    [anon_sym_HasExplicitMod] = ACTIONS(189),
    [anon_sym_HasImplicitMod] = ACTIONS(189),
    [anon_sym_HasInfluence] = ACTIONS(189),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(189),
    [anon_sym_Height] = ACTIONS(189),
    [anon_sym_Identified] = ACTIONS(189),
    [anon_sym_ItemLevel] = ACTIONS(189),
    [anon_sym_LinkedSockets] = ACTIONS(189),
    [anon_sym_MapTier] = ACTIONS(189),
    [anon_sym_Mirrored] = ACTIONS(189),
    [anon_sym_Quality] = ACTIONS(189),
    [anon_sym_Rarity] = ACTIONS(189),
    [anon_sym_Replica] = ACTIONS(189),
    [anon_sym_Scourged] = ACTIONS(189),
    [anon_sym_ShapedMap] = ACTIONS(189),
    [anon_sym_ShaperItem] = ACTIONS(189),
    [anon_sym_SocketGroup] = ACTIONS(189),
    [anon_sym_Sockets] = ACTIONS(189),
    [anon_sym_StackSize] = ACTIONS(189),
    [anon_sym_SynthesisedItem] = ACTIONS(189),
    [anon_sym_TransfiguredGem] = ACTIONS(189),
    [anon_sym_UberBlightedMap] = ACTIONS(189),
    [anon_sym_WaystoneTier] = ACTIONS(189),
    [anon_sym_Width] = ACTIONS(189),
    [anon_sym_PlayAlertSound] = ACTIONS(191),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(189),
    [anon_sym_CustomAlertSound] = ACTIONS(191),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(189),
    [anon_sym_DisableDropSound] = ACTIONS(191),
    [anon_sym_EnableDropSound] = ACTIONS(191),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(189),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(189),
    [anon_sym_MinimapIcon] = ACTIONS(189),
    [anon_sym_PlayEffect] = ACTIONS(189),
    [anon_sym_SetBackgroundColor] = ACTIONS(189),
    [anon_sym_SetBorderColor] = ACTIONS(189),
    [anon_sym_SetFontSize] = ACTIONS(189),
    [anon_sym_SetTextColor] = ACTIONS(189),
    [anon_sym_Continue] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(189),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_Show] = ACTIONS(193),
    [anon_sym_Hide] = ACTIONS(193),
    [anon_sym_Minimal] = ACTIONS(193),
    [anon_sym_Import] = ACTIONS(193),
    [anon_sym_AlternateQuality] = ACTIONS(193),
    [anon_sym_AnyEnchantment] = ACTIONS(193),
    [anon_sym_ArchnemesisMod] = ACTIONS(193),
    [anon_sym_AreaLevel] = ACTIONS(193),
    [anon_sym_BaseArmour] = ACTIONS(193),
    [anon_sym_BaseDefencePercentile] = ACTIONS(193),
    [anon_sym_BaseEnergyShield] = ACTIONS(193),
    [anon_sym_BaseEvasion] = ACTIONS(193),
    [anon_sym_BaseType] = ACTIONS(193),
    [anon_sym_BaseWard] = ACTIONS(193),
    [anon_sym_BlightedMap] = ACTIONS(193),
    [anon_sym_Class] = ACTIONS(193),
    [anon_sym_Corrupted] = ACTIONS(195),
    [anon_sym_CorruptedMods] = ACTIONS(193),
    [anon_sym_DropLevel] = ACTIONS(193),
    [anon_sym_ElderItem] = ACTIONS(193),
    [anon_sym_ElderMap] = ACTIONS(193),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(193),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(193),
    [anon_sym_FracturedItem] = ACTIONS(193),
    [anon_sym_GemLevel] = ACTIONS(193),
    [anon_sym_GemQualityType] = ACTIONS(193),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(193),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(193),
    [anon_sym_HasEnchantment] = ACTIONS(193),
    [anon_sym_HasExplicitMod] = ACTIONS(193),
    [anon_sym_HasImplicitMod] = ACTIONS(193),
    [anon_sym_HasInfluence] = ACTIONS(193),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(193),
    [anon_sym_Height] = ACTIONS(193),
    [anon_sym_Identified] = ACTIONS(193),
    [anon_sym_ItemLevel] = ACTIONS(193),
    [anon_sym_LinkedSockets] = ACTIONS(193),
    [anon_sym_MapTier] = ACTIONS(193),
    [anon_sym_Mirrored] = ACTIONS(193),
    [anon_sym_Quality] = ACTIONS(193),
    [anon_sym_Rarity] = ACTIONS(193),
    [anon_sym_Replica] = ACTIONS(193),
    [anon_sym_Scourged] = ACTIONS(193),
    [anon_sym_ShapedMap] = ACTIONS(193),
    [anon_sym_ShaperItem] = ACTIONS(193),
    [anon_sym_SocketGroup] = ACTIONS(193),
    [anon_sym_Sockets] = ACTIONS(193),
    [anon_sym_StackSize] = ACTIONS(193),
    [anon_sym_SynthesisedItem] = ACTIONS(193),
    [anon_sym_TransfiguredGem] = ACTIONS(193),
    [anon_sym_UberBlightedMap] = ACTIONS(193),
    [anon_sym_WaystoneTier] = ACTIONS(193),
    [anon_sym_Width] = ACTIONS(193),
    [anon_sym_PlayAlertSound] = ACTIONS(195),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(193),
    [anon_sym_CustomAlertSound] = ACTIONS(195),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(193),
    [anon_sym_DisableDropSound] = ACTIONS(195),
    [anon_sym_EnableDropSound] = ACTIONS(195),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(193),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(193),
    [anon_sym_MinimapIcon] = ACTIONS(193),
    [anon_sym_PlayEffect] = ACTIONS(193),
    [anon_sym_SetBackgroundColor] = ACTIONS(193),
    [anon_sym_SetBorderColor] = ACTIONS(193),
    [anon_sym_SetFontSize] = ACTIONS(193),
    [anon_sym_SetTextColor] = ACTIONS(193),
    [anon_sym_Continue] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(193),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_Show] = ACTIONS(197),
    [anon_sym_Hide] = ACTIONS(197),
    [anon_sym_Minimal] = ACTIONS(197),
    [anon_sym_Import] = ACTIONS(197),
    [anon_sym_AlternateQuality] = ACTIONS(197),
    [anon_sym_AnyEnchantment] = ACTIONS(197),
    [anon_sym_ArchnemesisMod] = ACTIONS(197),
    [anon_sym_AreaLevel] = ACTIONS(197),
    [anon_sym_BaseArmour] = ACTIONS(197),
    [anon_sym_BaseDefencePercentile] = ACTIONS(197),
    [anon_sym_BaseEnergyShield] = ACTIONS(197),
    [anon_sym_BaseEvasion] = ACTIONS(197),
    [anon_sym_BaseType] = ACTIONS(197),
    [anon_sym_BaseWard] = ACTIONS(197),
    [anon_sym_BlightedMap] = ACTIONS(197),
    [anon_sym_Class] = ACTIONS(197),
    [anon_sym_Corrupted] = ACTIONS(199),
    [anon_sym_CorruptedMods] = ACTIONS(197),
    [anon_sym_DropLevel] = ACTIONS(197),
    [anon_sym_ElderItem] = ACTIONS(197),
    [anon_sym_ElderMap] = ACTIONS(197),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(197),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(197),
    [anon_sym_FracturedItem] = ACTIONS(197),
    [anon_sym_GemLevel] = ACTIONS(197),
    [anon_sym_GemQualityType] = ACTIONS(197),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(197),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(197),
    [anon_sym_HasEnchantment] = ACTIONS(197),
    [anon_sym_HasExplicitMod] = ACTIONS(197),
    [anon_sym_HasImplicitMod] = ACTIONS(197),
    [anon_sym_HasInfluence] = ACTIONS(197),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(197),
    [anon_sym_Height] = ACTIONS(197),
    [anon_sym_Identified] = ACTIONS(197),
    [anon_sym_ItemLevel] = ACTIONS(197),
    [anon_sym_LinkedSockets] = ACTIONS(197),
    [anon_sym_MapTier] = ACTIONS(197),
    [anon_sym_Mirrored] = ACTIONS(197),
    [anon_sym_Quality] = ACTIONS(197),
    [anon_sym_Rarity] = ACTIONS(197),
    [anon_sym_Replica] = ACTIONS(197),
    [anon_sym_Scourged] = ACTIONS(197),
    [anon_sym_ShapedMap] = ACTIONS(197),
    [anon_sym_ShaperItem] = ACTIONS(197),
    [anon_sym_SocketGroup] = ACTIONS(197),
    [anon_sym_Sockets] = ACTIONS(197),
    [anon_sym_StackSize] = ACTIONS(197),
    [anon_sym_SynthesisedItem] = ACTIONS(197),
    [anon_sym_TransfiguredGem] = ACTIONS(197),
    [anon_sym_UberBlightedMap] = ACTIONS(197),
    [anon_sym_WaystoneTier] = ACTIONS(197),
    [anon_sym_Width] = ACTIONS(197),
    [anon_sym_PlayAlertSound] = ACTIONS(199),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(197),
    [anon_sym_CustomAlertSound] = ACTIONS(199),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(197),
    [anon_sym_DisableDropSound] = ACTIONS(199),
    [anon_sym_EnableDropSound] = ACTIONS(199),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(197),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(197),
    [anon_sym_MinimapIcon] = ACTIONS(197),
    [anon_sym_PlayEffect] = ACTIONS(197),
    [anon_sym_SetBackgroundColor] = ACTIONS(197),
    [anon_sym_SetBorderColor] = ACTIONS(197),
    [anon_sym_SetFontSize] = ACTIONS(197),
    [anon_sym_SetTextColor] = ACTIONS(197),
    [anon_sym_Continue] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(197),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_Show] = ACTIONS(201),
    [anon_sym_Hide] = ACTIONS(201),
    [anon_sym_Minimal] = ACTIONS(201),
    [anon_sym_Import] = ACTIONS(201),
    [anon_sym_AlternateQuality] = ACTIONS(201),
    [anon_sym_AnyEnchantment] = ACTIONS(201),
    [anon_sym_ArchnemesisMod] = ACTIONS(201),
    [anon_sym_AreaLevel] = ACTIONS(201),
    [anon_sym_BaseArmour] = ACTIONS(201),
    [anon_sym_BaseDefencePercentile] = ACTIONS(201),
    [anon_sym_BaseEnergyShield] = ACTIONS(201),
    [anon_sym_BaseEvasion] = ACTIONS(201),
    [anon_sym_BaseType] = ACTIONS(201),
    [anon_sym_BaseWard] = ACTIONS(201),
    [anon_sym_BlightedMap] = ACTIONS(201),
    [anon_sym_Class] = ACTIONS(201),
    [anon_sym_Corrupted] = ACTIONS(203),
    [anon_sym_CorruptedMods] = ACTIONS(201),
    [anon_sym_DropLevel] = ACTIONS(201),
    [anon_sym_ElderItem] = ACTIONS(201),
    [anon_sym_ElderMap] = ACTIONS(201),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(201),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(201),
    [anon_sym_FracturedItem] = ACTIONS(201),
    [anon_sym_GemLevel] = ACTIONS(201),
    [anon_sym_GemQualityType] = ACTIONS(201),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(201),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(201),
    [anon_sym_HasEnchantment] = ACTIONS(201),
    [anon_sym_HasExplicitMod] = ACTIONS(201),
    [anon_sym_HasImplicitMod] = ACTIONS(201),
    [anon_sym_HasInfluence] = ACTIONS(201),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(201),
    [anon_sym_Height] = ACTIONS(201),
    [anon_sym_Identified] = ACTIONS(201),
    [anon_sym_ItemLevel] = ACTIONS(201),
    [anon_sym_LinkedSockets] = ACTIONS(201),
    [anon_sym_MapTier] = ACTIONS(201),
    [anon_sym_Mirrored] = ACTIONS(201),
    [anon_sym_Quality] = ACTIONS(201),
    [anon_sym_Rarity] = ACTIONS(201),
    [anon_sym_Replica] = ACTIONS(201),
    [anon_sym_Scourged] = ACTIONS(201),
    [anon_sym_ShapedMap] = ACTIONS(201),
    [anon_sym_ShaperItem] = ACTIONS(201),
    [anon_sym_SocketGroup] = ACTIONS(201),
    [anon_sym_Sockets] = ACTIONS(201),
    [anon_sym_StackSize] = ACTIONS(201),
    [anon_sym_SynthesisedItem] = ACTIONS(201),
    [anon_sym_TransfiguredGem] = ACTIONS(201),
    [anon_sym_UberBlightedMap] = ACTIONS(201),
    [anon_sym_WaystoneTier] = ACTIONS(201),
    [anon_sym_Width] = ACTIONS(201),
    [anon_sym_PlayAlertSound] = ACTIONS(203),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(201),
    [anon_sym_CustomAlertSound] = ACTIONS(203),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(201),
    [anon_sym_DisableDropSound] = ACTIONS(203),
    [anon_sym_EnableDropSound] = ACTIONS(203),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(201),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(201),
    [anon_sym_MinimapIcon] = ACTIONS(201),
    [anon_sym_PlayEffect] = ACTIONS(201),
    [anon_sym_SetBackgroundColor] = ACTIONS(201),
    [anon_sym_SetBorderColor] = ACTIONS(201),
    [anon_sym_SetFontSize] = ACTIONS(201),
    [anon_sym_SetTextColor] = ACTIONS(201),
    [anon_sym_Continue] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(201),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_Show] = ACTIONS(205),
    [anon_sym_Hide] = ACTIONS(205),
    [anon_sym_Minimal] = ACTIONS(205),
    [anon_sym_Import] = ACTIONS(205),
    [anon_sym_AlternateQuality] = ACTIONS(205),
    [anon_sym_AnyEnchantment] = ACTIONS(205),
    [anon_sym_ArchnemesisMod] = ACTIONS(205),
    [anon_sym_AreaLevel] = ACTIONS(205),
    [anon_sym_BaseArmour] = ACTIONS(205),
    [anon_sym_BaseDefencePercentile] = ACTIONS(205),
    [anon_sym_BaseEnergyShield] = ACTIONS(205),
    [anon_sym_BaseEvasion] = ACTIONS(205),
    [anon_sym_BaseType] = ACTIONS(205),
    [anon_sym_BaseWard] = ACTIONS(205),
    [anon_sym_BlightedMap] = ACTIONS(205),
    [anon_sym_Class] = ACTIONS(205),
    [anon_sym_Corrupted] = ACTIONS(207),
    [anon_sym_CorruptedMods] = ACTIONS(205),
    [anon_sym_DropLevel] = ACTIONS(205),
    [anon_sym_ElderItem] = ACTIONS(205),
    [anon_sym_ElderMap] = ACTIONS(205),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(205),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(205),
    [anon_sym_FracturedItem] = ACTIONS(205),
    [anon_sym_GemLevel] = ACTIONS(205),
    [anon_sym_GemQualityType] = ACTIONS(205),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(205),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(205),
    [anon_sym_HasEnchantment] = ACTIONS(205),
    [anon_sym_HasExplicitMod] = ACTIONS(205),
    [anon_sym_HasImplicitMod] = ACTIONS(205),
    [anon_sym_HasInfluence] = ACTIONS(205),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(205),
    [anon_sym_Height] = ACTIONS(205),
    [anon_sym_Identified] = ACTIONS(205),
    [anon_sym_ItemLevel] = ACTIONS(205),
    [anon_sym_LinkedSockets] = ACTIONS(205),
    [anon_sym_MapTier] = ACTIONS(205),
    [anon_sym_Mirrored] = ACTIONS(205),
    [anon_sym_Quality] = ACTIONS(205),
    [anon_sym_Rarity] = ACTIONS(205),
    [anon_sym_Replica] = ACTIONS(205),
    [anon_sym_Scourged] = ACTIONS(205),
    [anon_sym_ShapedMap] = ACTIONS(205),
    [anon_sym_ShaperItem] = ACTIONS(205),
    [anon_sym_SocketGroup] = ACTIONS(205),
    [anon_sym_Sockets] = ACTIONS(205),
    [anon_sym_StackSize] = ACTIONS(205),
    [anon_sym_SynthesisedItem] = ACTIONS(205),
    [anon_sym_TransfiguredGem] = ACTIONS(205),
    [anon_sym_UberBlightedMap] = ACTIONS(205),
    [anon_sym_WaystoneTier] = ACTIONS(205),
    [anon_sym_Width] = ACTIONS(205),
    [anon_sym_PlayAlertSound] = ACTIONS(207),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(205),
    [anon_sym_CustomAlertSound] = ACTIONS(207),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(205),
    [anon_sym_DisableDropSound] = ACTIONS(207),
    [anon_sym_EnableDropSound] = ACTIONS(207),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(205),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(205),
    [anon_sym_MinimapIcon] = ACTIONS(205),
    [anon_sym_PlayEffect] = ACTIONS(205),
    [anon_sym_SetBackgroundColor] = ACTIONS(205),
    [anon_sym_SetBorderColor] = ACTIONS(205),
    [anon_sym_SetFontSize] = ACTIONS(205),
    [anon_sym_SetTextColor] = ACTIONS(205),
    [anon_sym_Continue] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(205),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_Show] = ACTIONS(209),
    [anon_sym_Hide] = ACTIONS(209),
    [anon_sym_Minimal] = ACTIONS(209),
    [anon_sym_Import] = ACTIONS(209),
    [anon_sym_AlternateQuality] = ACTIONS(209),
    [anon_sym_AnyEnchantment] = ACTIONS(209),
    [anon_sym_ArchnemesisMod] = ACTIONS(209),
    [anon_sym_AreaLevel] = ACTIONS(209),
    [anon_sym_BaseArmour] = ACTIONS(209),
    [anon_sym_BaseDefencePercentile] = ACTIONS(209),
    [anon_sym_BaseEnergyShield] = ACTIONS(209),
    [anon_sym_BaseEvasion] = ACTIONS(209),
    [anon_sym_BaseType] = ACTIONS(209),
    [anon_sym_BaseWard] = ACTIONS(209),
    [anon_sym_BlightedMap] = ACTIONS(209),
    [anon_sym_Class] = ACTIONS(209),
    [anon_sym_Corrupted] = ACTIONS(211),
    [anon_sym_CorruptedMods] = ACTIONS(209),
    [anon_sym_DropLevel] = ACTIONS(209),
    [anon_sym_ElderItem] = ACTIONS(209),
    [anon_sym_ElderMap] = ACTIONS(209),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(209),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(209),
    [anon_sym_FracturedItem] = ACTIONS(209),
    [anon_sym_GemLevel] = ACTIONS(209),
    [anon_sym_GemQualityType] = ACTIONS(209),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(209),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(209),
    [anon_sym_HasEnchantment] = ACTIONS(209),
    [anon_sym_HasExplicitMod] = ACTIONS(209),
    [anon_sym_HasImplicitMod] = ACTIONS(209),
    [anon_sym_HasInfluence] = ACTIONS(209),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(209),
    [anon_sym_Height] = ACTIONS(209),
    [anon_sym_Identified] = ACTIONS(209),
    [anon_sym_ItemLevel] = ACTIONS(209),
    [anon_sym_LinkedSockets] = ACTIONS(209),
    [anon_sym_MapTier] = ACTIONS(209),
    [anon_sym_Mirrored] = ACTIONS(209),
    [anon_sym_Quality] = ACTIONS(209),
    [anon_sym_Rarity] = ACTIONS(209),
    [anon_sym_Replica] = ACTIONS(209),
    [anon_sym_Scourged] = ACTIONS(209),
    [anon_sym_ShapedMap] = ACTIONS(209),
    [anon_sym_ShaperItem] = ACTIONS(209),
    [anon_sym_SocketGroup] = ACTIONS(209),
    [anon_sym_Sockets] = ACTIONS(209),
    [anon_sym_StackSize] = ACTIONS(209),
    [anon_sym_SynthesisedItem] = ACTIONS(209),
    [anon_sym_TransfiguredGem] = ACTIONS(209),
    [anon_sym_UberBlightedMap] = ACTIONS(209),
    [anon_sym_WaystoneTier] = ACTIONS(209),
    [anon_sym_Width] = ACTIONS(209),
    [anon_sym_PlayAlertSound] = ACTIONS(211),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(209),
    [anon_sym_CustomAlertSound] = ACTIONS(211),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(209),
    [anon_sym_DisableDropSound] = ACTIONS(211),
    [anon_sym_EnableDropSound] = ACTIONS(211),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(209),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(209),
    [anon_sym_MinimapIcon] = ACTIONS(209),
    [anon_sym_PlayEffect] = ACTIONS(209),
    [anon_sym_SetBackgroundColor] = ACTIONS(209),
    [anon_sym_SetBorderColor] = ACTIONS(209),
    [anon_sym_SetFontSize] = ACTIONS(209),
    [anon_sym_SetTextColor] = ACTIONS(209),
    [anon_sym_Continue] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(209),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_Show] = ACTIONS(213),
    [anon_sym_Hide] = ACTIONS(213),
    [anon_sym_Minimal] = ACTIONS(213),
    [anon_sym_Import] = ACTIONS(213),
    [anon_sym_AlternateQuality] = ACTIONS(213),
    [anon_sym_AnyEnchantment] = ACTIONS(213),
    [anon_sym_ArchnemesisMod] = ACTIONS(213),
    [anon_sym_AreaLevel] = ACTIONS(213),
    [anon_sym_BaseArmour] = ACTIONS(213),
    [anon_sym_BaseDefencePercentile] = ACTIONS(213),
    [anon_sym_BaseEnergyShield] = ACTIONS(213),
    [anon_sym_BaseEvasion] = ACTIONS(213),
    [anon_sym_BaseType] = ACTIONS(213),
    [anon_sym_BaseWard] = ACTIONS(213),
    [anon_sym_BlightedMap] = ACTIONS(213),
    [anon_sym_Class] = ACTIONS(213),
    [anon_sym_Corrupted] = ACTIONS(215),
    [anon_sym_CorruptedMods] = ACTIONS(213),
    [anon_sym_DropLevel] = ACTIONS(213),
    [anon_sym_ElderItem] = ACTIONS(213),
    [anon_sym_ElderMap] = ACTIONS(213),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(213),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(213),
    [anon_sym_FracturedItem] = ACTIONS(213),
    [anon_sym_GemLevel] = ACTIONS(213),
    [anon_sym_GemQualityType] = ACTIONS(213),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(213),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(213),
    [anon_sym_HasEnchantment] = ACTIONS(213),
    [anon_sym_HasExplicitMod] = ACTIONS(213),
    [anon_sym_HasImplicitMod] = ACTIONS(213),
    [anon_sym_HasInfluence] = ACTIONS(213),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(213),
    [anon_sym_Height] = ACTIONS(213),
    [anon_sym_Identified] = ACTIONS(213),
    [anon_sym_ItemLevel] = ACTIONS(213),
    [anon_sym_LinkedSockets] = ACTIONS(213),
    [anon_sym_MapTier] = ACTIONS(213),
    [anon_sym_Mirrored] = ACTIONS(213),
    [anon_sym_Quality] = ACTIONS(213),
    [anon_sym_Rarity] = ACTIONS(213),
    [anon_sym_Replica] = ACTIONS(213),
    [anon_sym_Scourged] = ACTIONS(213),
    [anon_sym_ShapedMap] = ACTIONS(213),
    [anon_sym_ShaperItem] = ACTIONS(213),
    [anon_sym_SocketGroup] = ACTIONS(213),
    [anon_sym_Sockets] = ACTIONS(213),
    [anon_sym_StackSize] = ACTIONS(213),
    [anon_sym_SynthesisedItem] = ACTIONS(213),
    [anon_sym_TransfiguredGem] = ACTIONS(213),
    [anon_sym_UberBlightedMap] = ACTIONS(213),
    [anon_sym_WaystoneTier] = ACTIONS(213),
    [anon_sym_Width] = ACTIONS(213),
    [anon_sym_PlayAlertSound] = ACTIONS(215),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(213),
    [anon_sym_CustomAlertSound] = ACTIONS(215),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(213),
    [anon_sym_DisableDropSound] = ACTIONS(215),
    [anon_sym_EnableDropSound] = ACTIONS(215),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(213),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(213),
    [anon_sym_MinimapIcon] = ACTIONS(213),
    [anon_sym_PlayEffect] = ACTIONS(213),
    [anon_sym_SetBackgroundColor] = ACTIONS(213),
    [anon_sym_SetBorderColor] = ACTIONS(213),
    [anon_sym_SetFontSize] = ACTIONS(213),
    [anon_sym_SetTextColor] = ACTIONS(213),
    [anon_sym_Continue] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(213),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_Show] = ACTIONS(217),
    [anon_sym_Hide] = ACTIONS(217),
    [anon_sym_Minimal] = ACTIONS(217),
    [anon_sym_Import] = ACTIONS(217),
    [anon_sym_AlternateQuality] = ACTIONS(217),
    [anon_sym_AnyEnchantment] = ACTIONS(217),
    [anon_sym_ArchnemesisMod] = ACTIONS(217),
    [anon_sym_AreaLevel] = ACTIONS(217),
    [anon_sym_BaseArmour] = ACTIONS(217),
    [anon_sym_BaseDefencePercentile] = ACTIONS(217),
    [anon_sym_BaseEnergyShield] = ACTIONS(217),
    [anon_sym_BaseEvasion] = ACTIONS(217),
    [anon_sym_BaseType] = ACTIONS(217),
    [anon_sym_BaseWard] = ACTIONS(217),
    [anon_sym_BlightedMap] = ACTIONS(217),
    [anon_sym_Class] = ACTIONS(217),
    [anon_sym_Corrupted] = ACTIONS(219),
    [anon_sym_CorruptedMods] = ACTIONS(217),
    [anon_sym_DropLevel] = ACTIONS(217),
    [anon_sym_ElderItem] = ACTIONS(217),
    [anon_sym_ElderMap] = ACTIONS(217),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(217),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(217),
    [anon_sym_FracturedItem] = ACTIONS(217),
    [anon_sym_GemLevel] = ACTIONS(217),
    [anon_sym_GemQualityType] = ACTIONS(217),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(217),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(217),
    [anon_sym_HasEnchantment] = ACTIONS(217),
    [anon_sym_HasExplicitMod] = ACTIONS(217),
    [anon_sym_HasImplicitMod] = ACTIONS(217),
    [anon_sym_HasInfluence] = ACTIONS(217),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(217),
    [anon_sym_Height] = ACTIONS(217),
    [anon_sym_Identified] = ACTIONS(217),
    [anon_sym_ItemLevel] = ACTIONS(217),
    [anon_sym_LinkedSockets] = ACTIONS(217),
    [anon_sym_MapTier] = ACTIONS(217),
    [anon_sym_Mirrored] = ACTIONS(217),
    [anon_sym_Quality] = ACTIONS(217),
    [anon_sym_Rarity] = ACTIONS(217),
    [anon_sym_Replica] = ACTIONS(217),
    [anon_sym_Scourged] = ACTIONS(217),
    [anon_sym_ShapedMap] = ACTIONS(217),
    [anon_sym_ShaperItem] = ACTIONS(217),
    [anon_sym_SocketGroup] = ACTIONS(217),
    [anon_sym_Sockets] = ACTIONS(217),
    [anon_sym_StackSize] = ACTIONS(217),
    [anon_sym_SynthesisedItem] = ACTIONS(217),
    [anon_sym_TransfiguredGem] = ACTIONS(217),
    [anon_sym_UberBlightedMap] = ACTIONS(217),
    [anon_sym_WaystoneTier] = ACTIONS(217),
    [anon_sym_Width] = ACTIONS(217),
    [anon_sym_PlayAlertSound] = ACTIONS(219),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(217),
    [anon_sym_CustomAlertSound] = ACTIONS(219),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(217),
    [anon_sym_DisableDropSound] = ACTIONS(219),
    [anon_sym_EnableDropSound] = ACTIONS(219),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(217),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(217),
    [anon_sym_MinimapIcon] = ACTIONS(217),
    [anon_sym_PlayEffect] = ACTIONS(217),
    [anon_sym_SetBackgroundColor] = ACTIONS(217),
    [anon_sym_SetBorderColor] = ACTIONS(217),
    [anon_sym_SetFontSize] = ACTIONS(217),
    [anon_sym_SetTextColor] = ACTIONS(217),
    [anon_sym_Continue] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(217),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [anon_sym_Show] = ACTIONS(221),
    [anon_sym_Hide] = ACTIONS(221),
    [anon_sym_Minimal] = ACTIONS(221),
    [anon_sym_Import] = ACTIONS(221),
    [anon_sym_AlternateQuality] = ACTIONS(221),
    [anon_sym_AnyEnchantment] = ACTIONS(221),
    [anon_sym_ArchnemesisMod] = ACTIONS(221),
    [anon_sym_AreaLevel] = ACTIONS(221),
    [anon_sym_BaseArmour] = ACTIONS(221),
    [anon_sym_BaseDefencePercentile] = ACTIONS(221),
    [anon_sym_BaseEnergyShield] = ACTIONS(221),
    [anon_sym_BaseEvasion] = ACTIONS(221),
    [anon_sym_BaseType] = ACTIONS(221),
    [anon_sym_BaseWard] = ACTIONS(221),
    [anon_sym_BlightedMap] = ACTIONS(221),
    [anon_sym_Class] = ACTIONS(221),
    [anon_sym_Corrupted] = ACTIONS(223),
    [anon_sym_CorruptedMods] = ACTIONS(221),
    [anon_sym_DropLevel] = ACTIONS(221),
    [anon_sym_ElderItem] = ACTIONS(221),
    [anon_sym_ElderMap] = ACTIONS(221),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(221),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(221),
    [anon_sym_FracturedItem] = ACTIONS(221),
    [anon_sym_GemLevel] = ACTIONS(221),
    [anon_sym_GemQualityType] = ACTIONS(221),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(221),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(221),
    [anon_sym_HasEnchantment] = ACTIONS(221),
    [anon_sym_HasExplicitMod] = ACTIONS(221),
    [anon_sym_HasImplicitMod] = ACTIONS(221),
    [anon_sym_HasInfluence] = ACTIONS(221),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(221),
    [anon_sym_Height] = ACTIONS(221),
    [anon_sym_Identified] = ACTIONS(221),
    [anon_sym_ItemLevel] = ACTIONS(221),
    [anon_sym_LinkedSockets] = ACTIONS(221),
    [anon_sym_MapTier] = ACTIONS(221),
    [anon_sym_Mirrored] = ACTIONS(221),
    [anon_sym_Quality] = ACTIONS(221),
    [anon_sym_Rarity] = ACTIONS(221),
    [anon_sym_Replica] = ACTIONS(221),
    [anon_sym_Scourged] = ACTIONS(221),
    [anon_sym_ShapedMap] = ACTIONS(221),
    [anon_sym_ShaperItem] = ACTIONS(221),
    [anon_sym_SocketGroup] = ACTIONS(221),
    [anon_sym_Sockets] = ACTIONS(221),
    [anon_sym_StackSize] = ACTIONS(221),
    [anon_sym_SynthesisedItem] = ACTIONS(221),
    [anon_sym_TransfiguredGem] = ACTIONS(221),
    [anon_sym_UberBlightedMap] = ACTIONS(221),
    [anon_sym_WaystoneTier] = ACTIONS(221),
    [anon_sym_Width] = ACTIONS(221),
    [anon_sym_PlayAlertSound] = ACTIONS(223),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(221),
    [anon_sym_CustomAlertSound] = ACTIONS(223),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(221),
    [anon_sym_DisableDropSound] = ACTIONS(223),
    [anon_sym_EnableDropSound] = ACTIONS(223),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(221),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(221),
    [anon_sym_MinimapIcon] = ACTIONS(221),
    [anon_sym_PlayEffect] = ACTIONS(221),
    [anon_sym_SetBackgroundColor] = ACTIONS(221),
    [anon_sym_SetBorderColor] = ACTIONS(221),
    [anon_sym_SetFontSize] = ACTIONS(221),
    [anon_sym_SetTextColor] = ACTIONS(221),
    [anon_sym_Continue] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(221),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_Show] = ACTIONS(225),
    [anon_sym_Hide] = ACTIONS(225),
    [anon_sym_Minimal] = ACTIONS(225),
    [anon_sym_Import] = ACTIONS(225),
    [anon_sym_AlternateQuality] = ACTIONS(225),
    [anon_sym_AnyEnchantment] = ACTIONS(225),
    [anon_sym_ArchnemesisMod] = ACTIONS(225),
    [anon_sym_AreaLevel] = ACTIONS(225),
    [anon_sym_BaseArmour] = ACTIONS(225),
    [anon_sym_BaseDefencePercentile] = ACTIONS(225),
    [anon_sym_BaseEnergyShield] = ACTIONS(225),
    [anon_sym_BaseEvasion] = ACTIONS(225),
    [anon_sym_BaseType] = ACTIONS(225),
    [anon_sym_BaseWard] = ACTIONS(225),
    [anon_sym_BlightedMap] = ACTIONS(225),
    [anon_sym_Class] = ACTIONS(225),
    [anon_sym_Corrupted] = ACTIONS(227),
    [anon_sym_CorruptedMods] = ACTIONS(225),
    [anon_sym_DropLevel] = ACTIONS(225),
    [anon_sym_ElderItem] = ACTIONS(225),
    [anon_sym_ElderMap] = ACTIONS(225),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(225),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(225),
    [anon_sym_FracturedItem] = ACTIONS(225),
    [anon_sym_GemLevel] = ACTIONS(225),
    [anon_sym_GemQualityType] = ACTIONS(225),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(225),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(225),
    [anon_sym_HasEnchantment] = ACTIONS(225),
    [anon_sym_HasExplicitMod] = ACTIONS(225),
    [anon_sym_HasImplicitMod] = ACTIONS(225),
    [anon_sym_HasInfluence] = ACTIONS(225),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(225),
    [anon_sym_Height] = ACTIONS(225),
    [anon_sym_Identified] = ACTIONS(225),
    [anon_sym_ItemLevel] = ACTIONS(225),
    [anon_sym_LinkedSockets] = ACTIONS(225),
    [anon_sym_MapTier] = ACTIONS(225),
    [anon_sym_Mirrored] = ACTIONS(225),
    [anon_sym_Quality] = ACTIONS(225),
    [anon_sym_Rarity] = ACTIONS(225),
    [anon_sym_Replica] = ACTIONS(225),
    [anon_sym_Scourged] = ACTIONS(225),
    [anon_sym_ShapedMap] = ACTIONS(225),
    [anon_sym_ShaperItem] = ACTIONS(225),
    [anon_sym_SocketGroup] = ACTIONS(225),
    [anon_sym_Sockets] = ACTIONS(225),
    [anon_sym_StackSize] = ACTIONS(225),
    [anon_sym_SynthesisedItem] = ACTIONS(225),
    [anon_sym_TransfiguredGem] = ACTIONS(225),
    [anon_sym_UberBlightedMap] = ACTIONS(225),
    [anon_sym_WaystoneTier] = ACTIONS(225),
    [anon_sym_Width] = ACTIONS(225),
    [anon_sym_PlayAlertSound] = ACTIONS(227),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(225),
    [anon_sym_CustomAlertSound] = ACTIONS(227),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(225),
    [anon_sym_DisableDropSound] = ACTIONS(227),
    [anon_sym_EnableDropSound] = ACTIONS(227),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(225),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(225),
    [anon_sym_MinimapIcon] = ACTIONS(225),
    [anon_sym_PlayEffect] = ACTIONS(225),
    [anon_sym_SetBackgroundColor] = ACTIONS(225),
    [anon_sym_SetBorderColor] = ACTIONS(225),
    [anon_sym_SetFontSize] = ACTIONS(225),
    [anon_sym_SetTextColor] = ACTIONS(225),
    [anon_sym_Continue] = ACTIONS(225),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(225),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_Show] = ACTIONS(229),
    [anon_sym_Hide] = ACTIONS(229),
    [anon_sym_Minimal] = ACTIONS(229),
    [anon_sym_Import] = ACTIONS(229),
    [anon_sym_AlternateQuality] = ACTIONS(229),
    [anon_sym_AnyEnchantment] = ACTIONS(229),
    [anon_sym_ArchnemesisMod] = ACTIONS(229),
    [anon_sym_AreaLevel] = ACTIONS(229),
    [anon_sym_BaseArmour] = ACTIONS(229),
    [anon_sym_BaseDefencePercentile] = ACTIONS(229),
    [anon_sym_BaseEnergyShield] = ACTIONS(229),
    [anon_sym_BaseEvasion] = ACTIONS(229),
    [anon_sym_BaseType] = ACTIONS(229),
    [anon_sym_BaseWard] = ACTIONS(229),
    [anon_sym_BlightedMap] = ACTIONS(229),
    [anon_sym_Class] = ACTIONS(229),
    [anon_sym_Corrupted] = ACTIONS(231),
    [anon_sym_CorruptedMods] = ACTIONS(229),
    [anon_sym_DropLevel] = ACTIONS(229),
    [anon_sym_ElderItem] = ACTIONS(229),
    [anon_sym_ElderMap] = ACTIONS(229),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(229),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(229),
    [anon_sym_FracturedItem] = ACTIONS(229),
    [anon_sym_GemLevel] = ACTIONS(229),
    [anon_sym_GemQualityType] = ACTIONS(229),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(229),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(229),
    [anon_sym_HasEnchantment] = ACTIONS(229),
    [anon_sym_HasExplicitMod] = ACTIONS(229),
    [anon_sym_HasImplicitMod] = ACTIONS(229),
    [anon_sym_HasInfluence] = ACTIONS(229),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(229),
    [anon_sym_Height] = ACTIONS(229),
    [anon_sym_Identified] = ACTIONS(229),
    [anon_sym_ItemLevel] = ACTIONS(229),
    [anon_sym_LinkedSockets] = ACTIONS(229),
    [anon_sym_MapTier] = ACTIONS(229),
    [anon_sym_Mirrored] = ACTIONS(229),
    [anon_sym_Quality] = ACTIONS(229),
    [anon_sym_Rarity] = ACTIONS(229),
    [anon_sym_Replica] = ACTIONS(229),
    [anon_sym_Scourged] = ACTIONS(229),
    [anon_sym_ShapedMap] = ACTIONS(229),
    [anon_sym_ShaperItem] = ACTIONS(229),
    [anon_sym_SocketGroup] = ACTIONS(229),
    [anon_sym_Sockets] = ACTIONS(229),
    [anon_sym_StackSize] = ACTIONS(229),
    [anon_sym_SynthesisedItem] = ACTIONS(229),
    [anon_sym_TransfiguredGem] = ACTIONS(229),
    [anon_sym_UberBlightedMap] = ACTIONS(229),
    [anon_sym_WaystoneTier] = ACTIONS(229),
    [anon_sym_Width] = ACTIONS(229),
    [anon_sym_PlayAlertSound] = ACTIONS(231),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(229),
    [anon_sym_CustomAlertSound] = ACTIONS(231),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(229),
    [anon_sym_DisableDropSound] = ACTIONS(231),
    [anon_sym_EnableDropSound] = ACTIONS(231),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(229),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(229),
    [anon_sym_MinimapIcon] = ACTIONS(229),
    [anon_sym_PlayEffect] = ACTIONS(229),
    [anon_sym_SetBackgroundColor] = ACTIONS(229),
    [anon_sym_SetBorderColor] = ACTIONS(229),
    [anon_sym_SetFontSize] = ACTIONS(229),
    [anon_sym_SetTextColor] = ACTIONS(229),
    [anon_sym_Continue] = ACTIONS(229),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(229),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_Show] = ACTIONS(233),
    [anon_sym_Hide] = ACTIONS(233),
    [anon_sym_Minimal] = ACTIONS(233),
    [anon_sym_Import] = ACTIONS(233),
    [anon_sym_AlternateQuality] = ACTIONS(233),
    [anon_sym_AnyEnchantment] = ACTIONS(233),
    [anon_sym_ArchnemesisMod] = ACTIONS(233),
    [anon_sym_AreaLevel] = ACTIONS(233),
    [anon_sym_BaseArmour] = ACTIONS(233),
    [anon_sym_BaseDefencePercentile] = ACTIONS(233),
    [anon_sym_BaseEnergyShield] = ACTIONS(233),
    [anon_sym_BaseEvasion] = ACTIONS(233),
    [anon_sym_BaseType] = ACTIONS(233),
    [anon_sym_BaseWard] = ACTIONS(233),
    [anon_sym_BlightedMap] = ACTIONS(233),
    [anon_sym_Class] = ACTIONS(233),
    [anon_sym_Corrupted] = ACTIONS(235),
    [anon_sym_CorruptedMods] = ACTIONS(233),
    [anon_sym_DropLevel] = ACTIONS(233),
    [anon_sym_ElderItem] = ACTIONS(233),
    [anon_sym_ElderMap] = ACTIONS(233),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(233),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(233),
    [anon_sym_FracturedItem] = ACTIONS(233),
    [anon_sym_GemLevel] = ACTIONS(233),
    [anon_sym_GemQualityType] = ACTIONS(233),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(233),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(233),
    [anon_sym_HasEnchantment] = ACTIONS(233),
    [anon_sym_HasExplicitMod] = ACTIONS(233),
    [anon_sym_HasImplicitMod] = ACTIONS(233),
    [anon_sym_HasInfluence] = ACTIONS(233),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(233),
    [anon_sym_Height] = ACTIONS(233),
    [anon_sym_Identified] = ACTIONS(233),
    [anon_sym_ItemLevel] = ACTIONS(233),
    [anon_sym_LinkedSockets] = ACTIONS(233),
    [anon_sym_MapTier] = ACTIONS(233),
    [anon_sym_Mirrored] = ACTIONS(233),
    [anon_sym_Quality] = ACTIONS(233),
    [anon_sym_Rarity] = ACTIONS(233),
    [anon_sym_Replica] = ACTIONS(233),
    [anon_sym_Scourged] = ACTIONS(233),
    [anon_sym_ShapedMap] = ACTIONS(233),
    [anon_sym_ShaperItem] = ACTIONS(233),
    [anon_sym_SocketGroup] = ACTIONS(233),
    [anon_sym_Sockets] = ACTIONS(233),
    [anon_sym_StackSize] = ACTIONS(233),
    [anon_sym_SynthesisedItem] = ACTIONS(233),
    [anon_sym_TransfiguredGem] = ACTIONS(233),
    [anon_sym_UberBlightedMap] = ACTIONS(233),
    [anon_sym_WaystoneTier] = ACTIONS(233),
    [anon_sym_Width] = ACTIONS(233),
    [anon_sym_PlayAlertSound] = ACTIONS(235),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(233),
    [anon_sym_CustomAlertSound] = ACTIONS(235),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(233),
    [anon_sym_DisableDropSound] = ACTIONS(235),
    [anon_sym_EnableDropSound] = ACTIONS(235),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(233),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(233),
    [anon_sym_MinimapIcon] = ACTIONS(233),
    [anon_sym_PlayEffect] = ACTIONS(233),
    [anon_sym_SetBackgroundColor] = ACTIONS(233),
    [anon_sym_SetBorderColor] = ACTIONS(233),
    [anon_sym_SetFontSize] = ACTIONS(233),
    [anon_sym_SetTextColor] = ACTIONS(233),
    [anon_sym_Continue] = ACTIONS(233),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(233),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_Show] = ACTIONS(237),
    [anon_sym_Hide] = ACTIONS(237),
    [anon_sym_Minimal] = ACTIONS(237),
    [anon_sym_Import] = ACTIONS(237),
    [anon_sym_AlternateQuality] = ACTIONS(237),
    [anon_sym_AnyEnchantment] = ACTIONS(237),
    [anon_sym_ArchnemesisMod] = ACTIONS(237),
    [anon_sym_AreaLevel] = ACTIONS(237),
    [anon_sym_BaseArmour] = ACTIONS(237),
    [anon_sym_BaseDefencePercentile] = ACTIONS(237),
    [anon_sym_BaseEnergyShield] = ACTIONS(237),
    [anon_sym_BaseEvasion] = ACTIONS(237),
    [anon_sym_BaseType] = ACTIONS(237),
    [anon_sym_BaseWard] = ACTIONS(237),
    [anon_sym_BlightedMap] = ACTIONS(237),
    [anon_sym_Class] = ACTIONS(237),
    [anon_sym_Corrupted] = ACTIONS(239),
    [anon_sym_CorruptedMods] = ACTIONS(237),
    [anon_sym_DropLevel] = ACTIONS(237),
    [anon_sym_ElderItem] = ACTIONS(237),
    [anon_sym_ElderMap] = ACTIONS(237),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(237),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(237),
    [anon_sym_FracturedItem] = ACTIONS(237),
    [anon_sym_GemLevel] = ACTIONS(237),
    [anon_sym_GemQualityType] = ACTIONS(237),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(237),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(237),
    [anon_sym_HasEnchantment] = ACTIONS(237),
    [anon_sym_HasExplicitMod] = ACTIONS(237),
    [anon_sym_HasImplicitMod] = ACTIONS(237),
    [anon_sym_HasInfluence] = ACTIONS(237),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(237),
    [anon_sym_Height] = ACTIONS(237),
    [anon_sym_Identified] = ACTIONS(237),
    [anon_sym_ItemLevel] = ACTIONS(237),
    [anon_sym_LinkedSockets] = ACTIONS(237),
    [anon_sym_MapTier] = ACTIONS(237),
    [anon_sym_Mirrored] = ACTIONS(237),
    [anon_sym_Quality] = ACTIONS(237),
    [anon_sym_Rarity] = ACTIONS(237),
    [anon_sym_Replica] = ACTIONS(237),
    [anon_sym_Scourged] = ACTIONS(237),
    [anon_sym_ShapedMap] = ACTIONS(237),
    [anon_sym_ShaperItem] = ACTIONS(237),
    [anon_sym_SocketGroup] = ACTIONS(237),
    [anon_sym_Sockets] = ACTIONS(237),
    [anon_sym_StackSize] = ACTIONS(237),
    [anon_sym_SynthesisedItem] = ACTIONS(237),
    [anon_sym_TransfiguredGem] = ACTIONS(237),
    [anon_sym_UberBlightedMap] = ACTIONS(237),
    [anon_sym_WaystoneTier] = ACTIONS(237),
    [anon_sym_Width] = ACTIONS(237),
    [anon_sym_PlayAlertSound] = ACTIONS(239),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(237),
    [anon_sym_CustomAlertSound] = ACTIONS(239),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(237),
    [anon_sym_DisableDropSound] = ACTIONS(239),
    [anon_sym_EnableDropSound] = ACTIONS(239),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(237),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(237),
    [anon_sym_MinimapIcon] = ACTIONS(237),
    [anon_sym_PlayEffect] = ACTIONS(237),
    [anon_sym_SetBackgroundColor] = ACTIONS(237),
    [anon_sym_SetBorderColor] = ACTIONS(237),
    [anon_sym_SetFontSize] = ACTIONS(237),
    [anon_sym_SetTextColor] = ACTIONS(237),
    [anon_sym_Continue] = ACTIONS(237),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(237),
  },
  [31] = {
    [sym_condition] = STATE(2),
    [sym_action] = STATE(2),
    [sym_continue] = STATE(2),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_AlternateQuality] = ACTIONS(15),
    [anon_sym_AnyEnchantment] = ACTIONS(15),
    [anon_sym_ArchnemesisMod] = ACTIONS(17),
    [anon_sym_AreaLevel] = ACTIONS(19),
    [anon_sym_BaseArmour] = ACTIONS(19),
    [anon_sym_BaseDefencePercentile] = ACTIONS(19),
    [anon_sym_BaseEnergyShield] = ACTIONS(19),
    [anon_sym_BaseEvasion] = ACTIONS(19),
    [anon_sym_BaseType] = ACTIONS(21),
    [anon_sym_BaseWard] = ACTIONS(19),
    [anon_sym_BlightedMap] = ACTIONS(15),
    [anon_sym_Class] = ACTIONS(23),
    [anon_sym_Corrupted] = ACTIONS(25),
    [anon_sym_CorruptedMods] = ACTIONS(19),
    [anon_sym_DropLevel] = ACTIONS(19),
    [anon_sym_ElderItem] = ACTIONS(15),
    [anon_sym_ElderMap] = ACTIONS(15),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(27),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(19),
    [anon_sym_FracturedItem] = ACTIONS(15),
    [anon_sym_GemLevel] = ACTIONS(19),
    [anon_sym_GemQualityType] = ACTIONS(29),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(15),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(19),
    [anon_sym_HasEnchantment] = ACTIONS(27),
    [anon_sym_HasExplicitMod] = ACTIONS(31),
    [anon_sym_HasImplicitMod] = ACTIONS(15),
    [anon_sym_HasInfluence] = ACTIONS(33),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(19),
    [anon_sym_Height] = ACTIONS(19),
    [anon_sym_Identified] = ACTIONS(15),
    [anon_sym_ItemLevel] = ACTIONS(19),
    [anon_sym_LinkedSockets] = ACTIONS(19),
    [anon_sym_MapTier] = ACTIONS(19),
    [anon_sym_Mirrored] = ACTIONS(15),
    [anon_sym_Quality] = ACTIONS(19),
    [anon_sym_Rarity] = ACTIONS(35),
    [anon_sym_Replica] = ACTIONS(15),
    [anon_sym_Scourged] = ACTIONS(15),
    [anon_sym_ShapedMap] = ACTIONS(15),
    [anon_sym_ShaperItem] = ACTIONS(15),
    [anon_sym_SocketGroup] = ACTIONS(37),
    [anon_sym_Sockets] = ACTIONS(37),
    [anon_sym_StackSize] = ACTIONS(19),
    [anon_sym_SynthesisedItem] = ACTIONS(15),
    [anon_sym_TransfiguredGem] = ACTIONS(15),
    [anon_sym_UberBlightedMap] = ACTIONS(15),
    [anon_sym_WaystoneTier] = ACTIONS(19),
    [anon_sym_Width] = ACTIONS(19),
    [anon_sym_PlayAlertSound] = ACTIONS(39),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(41),
    [anon_sym_CustomAlertSound] = ACTIONS(43),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(45),
    [anon_sym_DisableDropSound] = ACTIONS(47),
    [anon_sym_EnableDropSound] = ACTIONS(47),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(49),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(49),
    [anon_sym_MinimapIcon] = ACTIONS(51),
    [anon_sym_PlayEffect] = ACTIONS(53),
    [anon_sym_SetBackgroundColor] = ACTIONS(55),
    [anon_sym_SetBorderColor] = ACTIONS(55),
    [anon_sym_SetFontSize] = ACTIONS(57),
    [anon_sym_SetTextColor] = ACTIONS(55),
    [anon_sym_Continue] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(241),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_None,
    STATE(104), 1,
      sym_colour,
    ACTIONS(245), 11,
      anon_sym_Red,
      anon_sym_Green,
      anon_sym_Blue,
      anon_sym_Brown,
      anon_sym_White,
      anon_sym_Yellow,
      anon_sym_Cyan,
      anon_sym_Grey,
      anon_sym_Orange,
      anon_sym_Pink,
      anon_sym_Purple,
  [23] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(176), 1,
      sym_shape,
    ACTIONS(247), 12,
      anon_sym_Circle,
      anon_sym_Diamond,
      anon_sym_Hexagon,
      anon_sym_Square,
      anon_sym_Star,
      anon_sym_Triangle,
      anon_sym_Cross,
      anon_sym_Moon,
      anon_sym_Raindrop,
      anon_sym_Kite,
      anon_sym_Pentagon,
      anon_sym_UpsideDownHouse,
  [44] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(175), 1,
      sym_shape,
    ACTIONS(247), 12,
      anon_sym_Circle,
      anon_sym_Diamond,
      anon_sym_Hexagon,
      anon_sym_Square,
      anon_sym_Star,
      anon_sym_Triangle,
      anon_sym_Cross,
      anon_sym_Moon,
      anon_sym_Raindrop,
      anon_sym_Kite,
      anon_sym_Pentagon,
      anon_sym_UpsideDownHouse,
  [65] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(162), 1,
      sym_colour,
    ACTIONS(245), 11,
      anon_sym_Red,
      anon_sym_Green,
      anon_sym_Blue,
      anon_sym_Brown,
      anon_sym_White,
      anon_sym_Yellow,
      anon_sym_Cyan,
      anon_sym_Grey,
      anon_sym_Orange,
      anon_sym_Pink,
      anon_sym_Purple,
  [85] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(161), 1,
      sym_colour,
    ACTIONS(245), 11,
      anon_sym_Red,
      anon_sym_Green,
      anon_sym_Blue,
      anon_sym_Brown,
      anon_sym_White,
      anon_sym_Yellow,
      anon_sym_Cyan,
      anon_sym_Grey,
      anon_sym_Orange,
      anon_sym_Pink,
      anon_sym_Purple,
  [105] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      sym_rarity,
    ACTIONS(249), 2,
      aux_sym__equal_operator_token1,
      aux_sym__range_operator_token1,
    STATE(94), 2,
      sym__equal_operator,
      sym__range_operator,
    ACTIONS(253), 4,
      anon_sym_Normal,
      anon_sym_Magic,
      anon_sym_Rare,
      anon_sym_Unique,
  [129] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_Import,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 1,
      sym__eol,
    ACTIONS(7), 3,
      anon_sym_Show,
      anon_sym_Hide,
      anon_sym_Minimal,
    STATE(41), 3,
      sym_block,
      sym_import,
      aux_sym_filter_repeat1,
  [152] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_string_token2,
    ACTIONS(265), 1,
      sym_number,
    STATE(113), 1,
      sym__quantity,
    STATE(115), 1,
      sym_string,
    ACTIONS(259), 2,
      aux_sym__equal_operator_token1,
      aux_sym__range_operator_token1,
    STATE(185), 2,
      sym__equal_operator,
      sym__range_operator,
  [179] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      sym_influence,
    ACTIONS(267), 7,
      anon_sym_None,
      anon_sym_Shaper,
      anon_sym_Elder,
      anon_sym_Crusader,
      anon_sym_Hunter,
      anon_sym_Redeemer,
      anon_sym_Warlord,
  [198] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 1,
      anon_sym_Import,
    ACTIONS(279), 1,
      sym__eol,
    ACTIONS(273), 3,
      anon_sym_Show,
      anon_sym_Hide,
      anon_sym_Minimal,
    STATE(41), 3,
      sym_block,
      sym_import,
      aux_sym_filter_repeat1,
  [221] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
    ACTIONS(286), 1,
      aux_sym_sockets_token2,
    STATE(98), 1,
      sym_sockets,
    ACTIONS(282), 2,
      aux_sym__equal_operator_token1,
      aux_sym__range_operator_token1,
    STATE(97), 2,
      sym__equal_operator,
      sym__range_operator,
  [242] = 4,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym__space,
    ACTIONS(290), 5,
      anon_sym_Show,
      anon_sym_Hide,
      anon_sym_Minimal,
      anon_sym_Import,
      sym__eol,
  [259] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(298), 5,
      anon_sym_Show,
      anon_sym_Hide,
      anon_sym_Minimal,
      anon_sym_Import,
      sym__eol,
  [274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      sym_rarity,
    ACTIONS(253), 4,
      anon_sym_Normal,
      anon_sym_Magic,
      anon_sym_Rare,
      anon_sym_Unique,
  [290] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_number,
    STATE(141), 1,
      sym__quantity,
    ACTIONS(300), 2,
      aux_sym__equal_operator_token1,
      aux_sym__range_operator_token1,
    STATE(156), 2,
      sym__equal_operator,
      sym__range_operator,
  [308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 6,
      ts_builtin_sym_end,
      anon_sym_Show,
      anon_sym_Hide,
      anon_sym_Minimal,
      anon_sym_Import,
      sym__eol,
  [320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      sym_quality,
    ACTIONS(308), 4,
      anon_sym_Superior,
      anon_sym_Divergent,
      anon_sym_Anomalous,
      anon_sym_Phantasmal,
  [336] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_string_token2,
    ACTIONS(310), 1,
      aux_sym__equal_operator_token1,
    STATE(121), 1,
      sym__equal_operator,
    STATE(122), 1,
      sym_string,
  [355] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_string_token2,
    ACTIONS(312), 1,
      aux_sym__equal_operator_token1,
    STATE(133), 1,
      sym__equal_operator,
    STATE(134), 1,
      sym_string,
  [374] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_string_token2,
    ACTIONS(314), 1,
      aux_sym__equal_operator_token1,
    STATE(125), 1,
      sym__equal_operator,
    STATE(126), 1,
      sym_string,
  [393] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_string_token2,
    ACTIONS(265), 1,
      aux_sym__equal_operator_token1,
    STATE(113), 1,
      sym__equal_operator,
    STATE(115), 1,
      sym_string,
  [412] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym__space,
    ACTIONS(319), 1,
      sym__eol,
    STATE(53), 1,
      aux_sym_condition_repeat5,
  [425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
    ACTIONS(286), 1,
      aux_sym_sockets_token2,
    STATE(98), 1,
      sym_sockets,
  [438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_DASH1,
    ACTIONS(323), 1,
      aux_sym__icon_size_token1,
    STATE(149), 1,
      sym__icon_size,
  [451] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym__space,
    ACTIONS(327), 1,
      sym__eol,
    STATE(67), 1,
      aux_sym_condition_repeat1,
  [464] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym__space,
    ACTIONS(331), 1,
      sym__eol,
    STATE(70), 1,
      aux_sym_condition_repeat2,
  [477] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym__space,
    ACTIONS(335), 1,
      sym__eol,
    STATE(73), 1,
      aux_sym_condition_repeat3,
  [490] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__space,
    ACTIONS(339), 1,
      sym__eol,
    STATE(76), 1,
      aux_sym_condition_repeat4,
  [503] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__space,
    ACTIONS(343), 1,
      sym__eol,
    STATE(82), 1,
      aux_sym_condition_repeat7,
  [516] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym__eol,
    ACTIONS(345), 1,
      sym__space,
    STATE(69), 1,
      aux_sym_condition_repeat8,
  [529] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym__space,
    ACTIONS(347), 1,
      sym__eol,
    STATE(67), 1,
      aux_sym_condition_repeat1,
  [542] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym__space,
    ACTIONS(351), 1,
      sym__eol,
    STATE(53), 1,
      aux_sym_condition_repeat5,
  [555] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym__space,
    ACTIONS(353), 1,
      sym__eol,
    STATE(70), 1,
      aux_sym_condition_repeat2,
  [568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_string_token2,
    STATE(115), 1,
      sym_string,
  [581] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym__space,
    ACTIONS(355), 1,
      sym__eol,
    STATE(67), 1,
      aux_sym_condition_repeat1,
  [594] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym__space,
    ACTIONS(360), 1,
      sym__eol,
    STATE(67), 1,
      aux_sym_condition_repeat1,
  [607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_string_token2,
    STATE(122), 1,
      sym_string,
  [620] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym__space,
    ACTIONS(365), 1,
      sym__eol,
    STATE(69), 1,
      aux_sym_condition_repeat8,
  [633] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym__space,
    ACTIONS(370), 1,
      sym__eol,
    STATE(70), 1,
      aux_sym_condition_repeat2,
  [646] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_string_token2,
    STATE(126), 1,
      sym_string,
  [659] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym__eol,
    ACTIONS(372), 1,
      sym__space,
    STATE(80), 1,
      aux_sym_condition_repeat6,
  [672] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__space,
    ACTIONS(377), 1,
      sym__eol,
    STATE(73), 1,
      aux_sym_condition_repeat3,
  [685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_string_token2,
    STATE(134), 1,
      sym_string,
  [698] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym__space,
    ACTIONS(379), 1,
      sym__eol,
    STATE(73), 1,
      aux_sym_condition_repeat3,
  [711] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__space,
    ACTIONS(384), 1,
      sym__eol,
    STATE(76), 1,
      aux_sym_condition_repeat4,
  [724] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__space,
    ACTIONS(351), 1,
      sym__eol,
    STATE(82), 1,
      aux_sym_condition_repeat7,
  [737] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      aux_sym_action_token1,
    ACTIONS(388), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_file,
  [750] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__space,
    ACTIONS(390), 1,
      sym__eol,
    STATE(76), 1,
      aux_sym_condition_repeat4,
  [763] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym__space,
    ACTIONS(395), 1,
      sym__eol,
    STATE(80), 1,
      aux_sym_condition_repeat6,
  [776] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym__space,
    ACTIONS(351), 1,
      sym__eol,
    STATE(69), 1,
      aux_sym_condition_repeat8,
  [789] = 4,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym__space,
    ACTIONS(400), 1,
      sym__eol,
    STATE(82), 1,
      aux_sym_condition_repeat7,
  [802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_None,
    ACTIONS(402), 1,
      aux_sym__id_token1,
    STATE(100), 1,
      sym__id,
  [815] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__space,
    ACTIONS(406), 1,
      sym__eol,
  [825] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym__space,
    STATE(66), 1,
      aux_sym_condition_repeat1,
  [835] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym__space,
    STATE(72), 1,
      aux_sym_condition_repeat6,
  [845] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__space,
    STATE(77), 1,
      aux_sym_condition_repeat7,
  [855] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym__space,
    ACTIONS(414), 1,
      sym__eol,
  [865] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym__eol,
    ACTIONS(416), 1,
      sym__space,
  [875] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(418), 1,
      sym__space,
    STATE(81), 1,
      aux_sym_condition_repeat8,
  [885] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym__space,
    ACTIONS(422), 1,
      sym__eol,
  [895] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym__eol,
    ACTIONS(424), 1,
      sym__space,
  [905] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym__space,
    ACTIONS(428), 1,
      sym__eol,
  [915] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__space,
    STATE(60), 1,
      aux_sym_condition_repeat7,
  [925] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(400), 1,
      sym__eol,
    ACTIONS(430), 1,
      sym__space,
  [935] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym__space,
    ACTIONS(434), 1,
      sym__eol,
  [945] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym__space,
    STATE(61), 1,
      aux_sym_condition_repeat8,
  [955] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym__eol,
    ACTIONS(436), 1,
      sym__space,
  [965] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(438), 1,
      sym__space,
    ACTIONS(440), 1,
      sym__eol,
  [975] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(442), 1,
      sym__space,
    ACTIONS(444), 1,
      sym__eol,
  [985] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym__space,
    ACTIONS(448), 1,
      sym__eol,
  [995] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym__eol,
    ACTIONS(450), 1,
      sym__space,
  [1005] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym__space,
    ACTIONS(454), 1,
      sym__eol,
  [1015] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym__eol,
    ACTIONS(456), 1,
      sym__space,
  [1025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_file,
  [1035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      aux_sym__color_token1,
    STATE(155), 1,
      sym__color,
  [1045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      aux_sym__font_size_token1,
    STATE(157), 1,
      sym__font_size,
  [1055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      aux_sym__volume_token1,
    STATE(135), 1,
      sym__volume,
  [1065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      aux_sym__volume_token1,
    STATE(186), 1,
      sym__volume,
  [1075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      aux_sym__volume_token1,
    STATE(160), 1,
      sym__volume,
  [1085] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym__space,
    ACTIONS(472), 1,
      sym__eol,
  [1095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym__color_token1,
    STATE(165), 1,
      sym__color,
  [1105] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym__space,
    STATE(56), 1,
      aux_sym_condition_repeat1,
  [1115] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym__space,
    ACTIONS(478), 1,
      sym__eol,
  [1125] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym__space,
    ACTIONS(482), 1,
      sym__eol,
  [1135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_file,
  [1145] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(484), 1,
      sym__space,
    ACTIONS(486), 1,
      sym__eol,
  [1155] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(488), 1,
      sym__space,
    ACTIONS(490), 1,
      sym__eol,
  [1165] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(492), 1,
      sym__space,
    ACTIONS(494), 1,
      sym__eol,
  [1175] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(496), 1,
      sym__space,
    ACTIONS(498), 1,
      sym__eol,
  [1185] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym__space,
    STATE(57), 1,
      aux_sym_condition_repeat2,
  [1195] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym__space,
    ACTIONS(502), 1,
      sym__eol,
  [1205] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym__space,
    STATE(62), 1,
      aux_sym_condition_repeat1,
  [1215] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym__space,
    STATE(64), 1,
      aux_sym_condition_repeat2,
  [1225] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym__space,
    STATE(58), 1,
      aux_sym_condition_repeat3,
  [1235] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym__space,
    ACTIONS(510), 1,
      sym__eol,
  [1245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym__color_token1,
    STATE(128), 1,
      sym__color,
  [1255] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(514), 1,
      sym__space,
    ACTIONS(516), 1,
      sym__eol,
  [1265] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym__space,
    STATE(75), 1,
      aux_sym_condition_repeat3,
  [1275] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym__space,
    STATE(79), 1,
      aux_sym_condition_repeat4,
  [1285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      aux_sym__color_token1,
    STATE(182), 1,
      sym__color,
  [1295] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym__space,
    STATE(63), 1,
      aux_sym_condition_repeat5,
  [1305] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__space,
    STATE(59), 1,
      aux_sym_condition_repeat4,
  [1315] = 3,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym__space,
    ACTIONS(526), 1,
      sym__eol,
  [1325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym__eol,
  [1332] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym__space,
  [1339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_DQUOTE,
  [1346] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(534), 1,
      sym__space,
  [1353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_Optional,
  [1360] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym__space,
  [1367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      sym__eol,
  [1374] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_string_token1,
  [1381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      aux_sym_quality_token1,
  [1388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_Temp,
  [1395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_Temp,
  [1402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      aux_sym_influence_token1,
  [1409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      sym__eol,
  [1416] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(554), 1,
      sym__space,
  [1423] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym__space,
  [1430] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(558), 1,
      sym__space,
  [1437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      ts_builtin_sym_end,
  [1444] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(562), 1,
      sym__space,
  [1451] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym__space,
  [1458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      aux_sym_sockets_token1,
  [1465] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(568), 1,
      sym__space,
  [1472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym_number,
  [1479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__eol,
  [1486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_DQUOTE,
  [1493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_boolean,
  [1500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym__eol,
  [1507] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(578), 1,
      sym__space,
  [1514] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym__space,
  [1521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym__eol,
  [1528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      sym__eol,
  [1535] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym__space,
  [1542] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(588), 1,
      sym__space,
  [1549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      sym_boolean,
  [1556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      sym__eol,
  [1563] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym__space,
  [1570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_DQUOTE,
  [1577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      sym__eol,
  [1584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      sym__eol,
  [1591] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(602), 1,
      aux_sym_file_token1,
  [1598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      sym__eol,
  [1605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym__eol,
  [1612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym__eol,
  [1619] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(610), 1,
      sym__space,
  [1626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      aux_sym_rarity_token1,
  [1633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_DQUOTE,
  [1640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
  [1647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
  [1654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      sym__eol,
  [1661] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(622), 1,
      sym__space,
  [1668] = 2,
    ACTIONS(292), 1,
      sym_comment,
    ACTIONS(600), 1,
      sym__space,
  [1675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      sym_number,
  [1682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__eol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(32)] = 0,
  [SMALL_STATE(33)] = 23,
  [SMALL_STATE(34)] = 44,
  [SMALL_STATE(35)] = 65,
  [SMALL_STATE(36)] = 85,
  [SMALL_STATE(37)] = 105,
  [SMALL_STATE(38)] = 129,
  [SMALL_STATE(39)] = 152,
  [SMALL_STATE(40)] = 179,
  [SMALL_STATE(41)] = 198,
  [SMALL_STATE(42)] = 221,
  [SMALL_STATE(43)] = 242,
  [SMALL_STATE(44)] = 259,
  [SMALL_STATE(45)] = 274,
  [SMALL_STATE(46)] = 290,
  [SMALL_STATE(47)] = 308,
  [SMALL_STATE(48)] = 320,
  [SMALL_STATE(49)] = 336,
  [SMALL_STATE(50)] = 355,
  [SMALL_STATE(51)] = 374,
  [SMALL_STATE(52)] = 393,
  [SMALL_STATE(53)] = 412,
  [SMALL_STATE(54)] = 425,
  [SMALL_STATE(55)] = 438,
  [SMALL_STATE(56)] = 451,
  [SMALL_STATE(57)] = 464,
  [SMALL_STATE(58)] = 477,
  [SMALL_STATE(59)] = 490,
  [SMALL_STATE(60)] = 503,
  [SMALL_STATE(61)] = 516,
  [SMALL_STATE(62)] = 529,
  [SMALL_STATE(63)] = 542,
  [SMALL_STATE(64)] = 555,
  [SMALL_STATE(65)] = 568,
  [SMALL_STATE(66)] = 581,
  [SMALL_STATE(67)] = 594,
  [SMALL_STATE(68)] = 607,
  [SMALL_STATE(69)] = 620,
  [SMALL_STATE(70)] = 633,
  [SMALL_STATE(71)] = 646,
  [SMALL_STATE(72)] = 659,
  [SMALL_STATE(73)] = 672,
  [SMALL_STATE(74)] = 685,
  [SMALL_STATE(75)] = 698,
  [SMALL_STATE(76)] = 711,
  [SMALL_STATE(77)] = 724,
  [SMALL_STATE(78)] = 737,
  [SMALL_STATE(79)] = 750,
  [SMALL_STATE(80)] = 763,
  [SMALL_STATE(81)] = 776,
  [SMALL_STATE(82)] = 789,
  [SMALL_STATE(83)] = 802,
  [SMALL_STATE(84)] = 815,
  [SMALL_STATE(85)] = 825,
  [SMALL_STATE(86)] = 835,
  [SMALL_STATE(87)] = 845,
  [SMALL_STATE(88)] = 855,
  [SMALL_STATE(89)] = 865,
  [SMALL_STATE(90)] = 875,
  [SMALL_STATE(91)] = 885,
  [SMALL_STATE(92)] = 895,
  [SMALL_STATE(93)] = 905,
  [SMALL_STATE(94)] = 915,
  [SMALL_STATE(95)] = 925,
  [SMALL_STATE(96)] = 935,
  [SMALL_STATE(97)] = 945,
  [SMALL_STATE(98)] = 955,
  [SMALL_STATE(99)] = 965,
  [SMALL_STATE(100)] = 975,
  [SMALL_STATE(101)] = 985,
  [SMALL_STATE(102)] = 995,
  [SMALL_STATE(103)] = 1005,
  [SMALL_STATE(104)] = 1015,
  [SMALL_STATE(105)] = 1025,
  [SMALL_STATE(106)] = 1035,
  [SMALL_STATE(107)] = 1045,
  [SMALL_STATE(108)] = 1055,
  [SMALL_STATE(109)] = 1065,
  [SMALL_STATE(110)] = 1075,
  [SMALL_STATE(111)] = 1085,
  [SMALL_STATE(112)] = 1095,
  [SMALL_STATE(113)] = 1105,
  [SMALL_STATE(114)] = 1115,
  [SMALL_STATE(115)] = 1125,
  [SMALL_STATE(116)] = 1135,
  [SMALL_STATE(117)] = 1145,
  [SMALL_STATE(118)] = 1155,
  [SMALL_STATE(119)] = 1165,
  [SMALL_STATE(120)] = 1175,
  [SMALL_STATE(121)] = 1185,
  [SMALL_STATE(122)] = 1195,
  [SMALL_STATE(123)] = 1205,
  [SMALL_STATE(124)] = 1215,
  [SMALL_STATE(125)] = 1225,
  [SMALL_STATE(126)] = 1235,
  [SMALL_STATE(127)] = 1245,
  [SMALL_STATE(128)] = 1255,
  [SMALL_STATE(129)] = 1265,
  [SMALL_STATE(130)] = 1275,
  [SMALL_STATE(131)] = 1285,
  [SMALL_STATE(132)] = 1295,
  [SMALL_STATE(133)] = 1305,
  [SMALL_STATE(134)] = 1315,
  [SMALL_STATE(135)] = 1325,
  [SMALL_STATE(136)] = 1332,
  [SMALL_STATE(137)] = 1339,
  [SMALL_STATE(138)] = 1346,
  [SMALL_STATE(139)] = 1353,
  [SMALL_STATE(140)] = 1360,
  [SMALL_STATE(141)] = 1367,
  [SMALL_STATE(142)] = 1374,
  [SMALL_STATE(143)] = 1381,
  [SMALL_STATE(144)] = 1388,
  [SMALL_STATE(145)] = 1395,
  [SMALL_STATE(146)] = 1402,
  [SMALL_STATE(147)] = 1409,
  [SMALL_STATE(148)] = 1416,
  [SMALL_STATE(149)] = 1423,
  [SMALL_STATE(150)] = 1430,
  [SMALL_STATE(151)] = 1437,
  [SMALL_STATE(152)] = 1444,
  [SMALL_STATE(153)] = 1451,
  [SMALL_STATE(154)] = 1458,
  [SMALL_STATE(155)] = 1465,
  [SMALL_STATE(156)] = 1472,
  [SMALL_STATE(157)] = 1479,
  [SMALL_STATE(158)] = 1486,
  [SMALL_STATE(159)] = 1493,
  [SMALL_STATE(160)] = 1500,
  [SMALL_STATE(161)] = 1507,
  [SMALL_STATE(162)] = 1514,
  [SMALL_STATE(163)] = 1521,
  [SMALL_STATE(164)] = 1528,
  [SMALL_STATE(165)] = 1535,
  [SMALL_STATE(166)] = 1542,
  [SMALL_STATE(167)] = 1549,
  [SMALL_STATE(168)] = 1556,
  [SMALL_STATE(169)] = 1563,
  [SMALL_STATE(170)] = 1570,
  [SMALL_STATE(171)] = 1577,
  [SMALL_STATE(172)] = 1584,
  [SMALL_STATE(173)] = 1591,
  [SMALL_STATE(174)] = 1598,
  [SMALL_STATE(175)] = 1605,
  [SMALL_STATE(176)] = 1612,
  [SMALL_STATE(177)] = 1619,
  [SMALL_STATE(178)] = 1626,
  [SMALL_STATE(179)] = 1633,
  [SMALL_STATE(180)] = 1640,
  [SMALL_STATE(181)] = 1647,
  [SMALL_STATE(182)] = 1654,
  [SMALL_STATE(183)] = 1661,
  [SMALL_STATE(184)] = 1668,
  [SMALL_STATE(185)] = 1675,
  [SMALL_STATE(186)] = 1682,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, 0, 19),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, 0, 19),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 8, 0, 24),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 8, 0, 24),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, 0, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 5),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, 0, 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 8),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, 0, 8),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 11),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, 0, 11),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 14),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 4, 0, 14),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 15),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 4, 0, 15),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 4, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 16),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 4, 0, 16),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, 0, 17),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, 0, 17),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, 0, 18),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, 0, 18),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, 0, 20),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, 0, 20),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, 0, 21),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 6, 0, 21),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, 0, 22),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 6, 0, 22),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, 0, 23),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 6, 0, 23),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, 0, 14),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 6, 0, 14),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 6, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 8, 0, 14),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 8, 0, 14),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 8, 0, 16),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 8, 0, 16),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 10, 0, 25),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 10, 0, 25),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2, 0, 0),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 3, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat5, 2, 0, 0), SHIFT_REPEAT(48),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat5, 2, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat1, 2, 0, 3), SHIFT_REPEAT(65),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat1, 2, 0, 3),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat8, 2, 0, 0), SHIFT_REPEAT(54),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat8, 2, 0, 0),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat2, 2, 0, 6), SHIFT_REPEAT(68),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat2, 2, 0, 6),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat3, 2, 0, 9), SHIFT_REPEAT(71),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat3, 2, 0, 9),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat4, 2, 0, 12), SHIFT_REPEAT(74),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat4, 2, 0, 12),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat6, 2, 0, 0), SHIFT_REPEAT(40),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat6, 2, 0, 0),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat7, 2, 0, 0), SHIFT_REPEAT(45),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat7, 2, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sockets, 1, 0, 13),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sockets, 1, 0, 13),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quality, 1, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quality, 1, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat5, 2, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_influence, 1, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_influence, 1, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat6, 2, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rarity, 1, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rarity, 1, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat7, 2, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat8, 2, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_colour, 1, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat1, 2, 0, 1),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat1, 2, 0, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quality, 3, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quality, 3, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_influence, 3, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_influence, 3, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rarity, 3, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rarity, 3, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sockets, 3, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sockets, 3, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat2, 2, 0, 4),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat2, 2, 0, 4),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat3, 2, 0, 7),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat3, 2, 0, 7),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat4, 2, 0, 10),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat4, 2, 0, 10),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [560] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantity, 2, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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

TS_PUBLIC const TSLanguage *tree_sitter_poe_filter(void) {
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

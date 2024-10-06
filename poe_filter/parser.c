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
#define STATE_COUNT 188
#define LARGE_STATE_COUNT 32
#define SYMBOL_COUNT 163
#define ALIAS_COUNT 0
#define TOKEN_COUNT 131
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
  anon_sym_UberBlightedMap = 51,
  anon_sym_Width = 52,
  anon_sym_PlayAlertSound = 53,
  anon_sym_None = 54,
  anon_sym_PlayAlertSoundPositional = 55,
  anon_sym_CustomAlertSound = 56,
  aux_sym_action_token1 = 57,
  anon_sym_CustomAlertSoundOptional = 58,
  anon_sym_DisableDropSound = 59,
  anon_sym_EnableDropSound = 60,
  anon_sym_DisableDropSoundIfAlertSound = 61,
  anon_sym_EnableDropSoundIfAlertSound = 62,
  anon_sym_MinimapIcon = 63,
  anon_sym_DASH1 = 64,
  anon_sym_PlayEffect = 65,
  anon_sym_Temp = 66,
  anon_sym_SetBackgroundColor = 67,
  anon_sym_SetBorderColor = 68,
  anon_sym_SetFontSize = 69,
  anon_sym_SetTextColor = 70,
  anon_sym_TransfiguredGem = 71,
  anon_sym_Continue = 72,
  aux_sym__equal_operator_token1 = 73,
  aux_sym__range_operator_token1 = 74,
  sym_boolean = 75,
  anon_sym_DQUOTE = 76,
  aux_sym_quality_token1 = 77,
  anon_sym_Superior = 78,
  anon_sym_Divergent = 79,
  anon_sym_Anomalous = 80,
  anon_sym_Phantasmal = 81,
  aux_sym_rarity_token1 = 82,
  anon_sym_Normal = 83,
  anon_sym_Magic = 84,
  anon_sym_Rare = 85,
  anon_sym_Unique = 86,
  aux_sym_influence_token1 = 87,
  anon_sym_Shaper = 88,
  anon_sym_Elder = 89,
  anon_sym_Crusader = 90,
  anon_sym_Hunter = 91,
  anon_sym_Redeemer = 92,
  anon_sym_Warlord = 93,
  aux_sym_sockets_token1 = 94,
  aux_sym_sockets_token2 = 95,
  anon_sym_Red = 96,
  anon_sym_Green = 97,
  anon_sym_Blue = 98,
  anon_sym_Brown = 99,
  anon_sym_White = 100,
  anon_sym_Yellow = 101,
  anon_sym_Cyan = 102,
  anon_sym_Grey = 103,
  anon_sym_Orange = 104,
  anon_sym_Pink = 105,
  anon_sym_Purple = 106,
  anon_sym_Circle = 107,
  anon_sym_Diamond = 108,
  anon_sym_Hexagon = 109,
  anon_sym_Square = 110,
  anon_sym_Star = 111,
  anon_sym_Triangle = 112,
  anon_sym_Cross = 113,
  anon_sym_Moon = 114,
  anon_sym_Raindrop = 115,
  anon_sym_Kite = 116,
  anon_sym_Pentagon = 117,
  anon_sym_UpsideDownHouse = 118,
  aux_sym_string_token1 = 119,
  aux_sym_string_token2 = 120,
  aux_sym_file_token1 = 121,
  sym_number = 122,
  aux_sym__id_token1 = 123,
  aux_sym__volume_token1 = 124,
  aux_sym__color_token1 = 125,
  aux_sym__icon_size_token1 = 126,
  aux_sym__font_size_token1 = 127,
  sym_comment = 128,
  sym__space = 129,
  sym__eol = 130,
  sym_filter = 131,
  sym_block = 132,
  sym_import = 133,
  sym_condition = 134,
  sym_action = 135,
  sym_continue = 136,
  sym__equal_operator = 137,
  sym__range_operator = 138,
  sym_quality = 139,
  sym_rarity = 140,
  sym_influence = 141,
  sym_sockets = 142,
  sym_colour = 143,
  sym_shape = 144,
  sym_string = 145,
  sym_file = 146,
  sym__quantity = 147,
  sym__id = 148,
  sym__volume = 149,
  sym__color = 150,
  sym__icon_size = 151,
  sym__font_size = 152,
  aux_sym_filter_repeat1 = 153,
  aux_sym_block_repeat1 = 154,
  aux_sym_condition_repeat1 = 155,
  aux_sym_condition_repeat2 = 156,
  aux_sym_condition_repeat3 = 157,
  aux_sym_condition_repeat4 = 158,
  aux_sym_condition_repeat5 = 159,
  aux_sym_condition_repeat6 = 160,
  aux_sym_condition_repeat7 = 161,
  aux_sym_condition_repeat8 = 162,
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
  [anon_sym_UberBlightedMap] = "name",
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
  [anon_sym_TransfiguredGem] = "name",
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
  [anon_sym_UberBlightedMap] = anon_sym_AlternateQuality,
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
  [anon_sym_TransfiguredGem] = anon_sym_AlternateQuality,
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
  [anon_sym_UberBlightedMap] = {
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
  [anon_sym_TransfiguredGem] = {
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
  [184] = 184,
  [185] = 174,
  [186] = 168,
  [187] = 187,
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
      if (eof) ADVANCE(870);
      ADVANCE_MAP(
        '\n', 1045,
        '\r', 3,
        '!', 944,
        '"', 949,
        '#', 1043,
        '-', 18,
        '0', 979,
        '1', 977,
        '2', 970,
        '3', 969,
        '4', 978,
        '<', 946,
        '=', 944,
        '>', 946,
        'A', 976,
        'B', 971,
        'C', 375,
        'D', 975,
        'E', 436,
        'F', 77,
        'G', 974,
        'H', 88,
        'I', 197,
        'K', 400,
        'L', 381,
        'M', 78,
        'N', 580,
        'O', 645,
        'P', 257,
        'Q', 815,
        'R', 972,
        'S', 152,
        'T', 253,
        'U', 143,
        'W', 973,
        'Y', 252,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(866);
      if (lookahead == '5' ||
          lookahead == '6') ADVANCE(980);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(1026);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(16);
      if (lookahead == ' ') ADVANCE(1020);
      if (lookahead == '#') ADVANCE(1021);
      if (lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '?' &&
          lookahead != '|' &&
          (lookahead < 0x7f || 0x9f < lookahead)) ADVANCE(1022);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(16);
      if (lookahead == ' ') ADVANCE(1017);
      if (lookahead == '#') ADVANCE(1043);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1018);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1045);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(944);
      if (lookahead == '"') ADVANCE(948);
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == '0') ADVANCE(1023);
      if (lookahead == '<') ADVANCE(946);
      if (lookahead == '=') ADVANCE(944);
      if (lookahead == '>') ADVANCE(946);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1026);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1019);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(944);
      if (lookahead == '"') ADVANCE(948);
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == '<') ADVANCE(946);
      if (lookahead == '=') ADVANCE(944);
      if (lookahead == '>') ADVANCE(946);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(991);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(944);
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == '0') ADVANCE(1023);
      if (lookahead == '<') ADVANCE(946);
      if (lookahead == '=') ADVANCE(944);
      if (lookahead == '>') ADVANCE(946);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1026);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1019);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(944);
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == '<') ADVANCE(946);
      if (lookahead == '=') ADVANCE(944);
      if (lookahead == '>') ADVANCE(946);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(991);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(927);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 948,
        '#', 1043,
        '-', 18,
        'A', 553,
        'C', 717,
        'D', 409,
        'E', 479,
        'H', 814,
        'M', 100,
        'N', 632,
        'P', 373,
        'R', 126,
        'S', 365,
        'U', 571,
        'W', 89,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(1039);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '#', 1043,
        '-', 18,
        'C', 717,
        'E', 479,
        'H', 814,
        'N', 618,
        'R', 311,
        'S', 364,
        'W', 89,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(1039);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '#', 1043,
        '0', 1034,
        '1', 1038,
        '2', 1035,
        'C', 728,
        'E', 480,
        'H', 841,
        'N', 622,
        'R', 329,
        'S', 370,
        'W', 138,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == '0') ADVANCE(1034);
      if (lookahead == '1') ADVANCE(1038);
      if (lookahead == '2') ADVANCE(1035);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == '0') ADVANCE(1029);
      if (lookahead == '3') ADVANCE(1031);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(1033);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1032);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == '1') ADVANCE(1028);
      if (lookahead == 'N') ADVANCE(618);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1027);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == '4') ADVANCE(1041);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1040);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(1043);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(979);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(934);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(475);
      if (lookahead == 'E') ADVANCE(334);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(695);
      if (lookahead == 'D') ADVANCE(260);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'T') ADVANCE(862);
      if (lookahead == 'W') ADVANCE(111);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(482);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(483);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(484);
      END_STATE();
    case 24:
      if (lookahead == 'B') ADVANCE(117);
      if (lookahead == 'F') ADVANCE(627);
      if (lookahead == 'T') ADVANCE(228);
      END_STATE();
    case 25:
      if (lookahead == 'B') ADVANCE(453);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(690);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(515);
      if (lookahead == 'S') ADVANCE(309);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(633);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(634);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(635);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(613);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(699);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(723);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(855);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(532);
      END_STATE();
    case 35:
      if (lookahead == 'G') ADVANCE(702);
      if (lookahead == 's') ADVANCE(918);
      END_STATE();
    case 36:
      if (lookahead == 'G') ADVANCE(286);
      END_STATE();
    case 37:
      if (lookahead == 'H') ADVANCE(589);
      END_STATE();
    case 38:
      if (lookahead == 'I') ADVANCE(167);
      END_STATE();
    case 39:
      if (lookahead == 'I') ADVANCE(512);
      END_STATE();
    case 40:
      if (lookahead == 'I') ADVANCE(796);
      if (lookahead == 'M') ADVANCE(96);
      END_STATE();
    case 41:
      if (lookahead == 'I') ADVANCE(797);
      END_STATE();
    case 42:
      if (lookahead == 'I') ADVANCE(798);
      END_STATE();
    case 43:
      if (lookahead == 'I') ADVANCE(800);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(514);
      END_STATE();
    case 45:
      if (lookahead == 'L') ADVANCE(227);
      if (lookahead == 'Q') ADVANCE(839);
      END_STATE();
    case 46:
      if (lookahead == 'L') ADVANCE(317);
      END_STATE();
    case 47:
      if (lookahead == 'L') ADVANCE(324);
      END_STATE();
    case 48:
      if (lookahead == 'L') ADVANCE(325);
      END_STATE();
    case 49:
      if (lookahead == 'M') ADVANCE(595);
      END_STATE();
    case 50:
      if (lookahead == 'M') ADVANCE(99);
      END_STATE();
    case 51:
      if (lookahead == 'M') ADVANCE(597);
      END_STATE();
    case 52:
      if (lookahead == 'M') ADVANCE(598);
      END_STATE();
    case 53:
      if (lookahead == 'M') ADVANCE(104);
      END_STATE();
    case 54:
      if (lookahead == 'M') ADVANCE(106);
      END_STATE();
    case 55:
      if (lookahead == 'N') ADVANCE(584);
      END_STATE();
    case 56:
      if (lookahead == 'N') ADVANCE(625);
      END_STATE();
    case 57:
      if (lookahead == 'O') ADVANCE(333);
      END_STATE();
    case 58:
      if (lookahead == 'P') ADVANCE(302);
      END_STATE();
    case 59:
      if (lookahead == 'P') ADVANCE(107);
      END_STATE();
    case 60:
      if (lookahead == 'P') ADVANCE(133);
      END_STATE();
    case 61:
      if (lookahead == 'Q') ADVANCE(840);
      END_STATE();
    case 62:
      if (lookahead == 'S') ADVANCE(361);
      END_STATE();
    case 63:
      if (lookahead == 'S') ADVANCE(380);
      END_STATE();
    case 64:
      if (lookahead == 'S') ADVANCE(631);
      END_STATE();
    case 65:
      if (lookahead == 'S') ADVANCE(403);
      END_STATE();
    case 66:
      if (lookahead == 'S') ADVANCE(619);
      END_STATE();
    case 67:
      if (lookahead == 'S') ADVANCE(624);
      END_STATE();
    case 68:
      if (lookahead == 'S') ADVANCE(626);
      END_STATE();
    case 69:
      if (lookahead == 'S') ADVANCE(628);
      END_STATE();
    case 70:
      if (lookahead == 'S') ADVANCE(629);
      END_STATE();
    case 71:
      if (lookahead == 'S') ADVANCE(630);
      END_STATE();
    case 72:
      if (lookahead == 'T') ADVANCE(416);
      END_STATE();
    case 73:
      if (lookahead == 'T') ADVANCE(712);
      END_STATE();
    case 74:
      if (lookahead == 'T') ADVANCE(863);
      END_STATE();
    case 75:
      if (lookahead == 'W') ADVANCE(615);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(740);
      if (lookahead == 'l') ADVANCE(378);
      if (lookahead == 'r') ADVANCE(577);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(463);
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(344);
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == 'o') ADVANCE(588);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'c') ADVANCE(368);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(856);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(439);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(913);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(729);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(729);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'u') ADVANCE(570);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(691);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(504);
      if (lookahead == 's') ADVANCE(142);
      if (lookahead == 'v') ADVANCE(266);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(742);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(517);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(437);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(639);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(528);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(751);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(641);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(536);
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(536);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(441);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(642);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(707);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(644);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(752);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(445);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(693);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(447);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(718);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(448);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(449);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(438);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(720);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(647);
      if (lookahead == 'o') ADVANCE(850);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(700);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(541);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(756);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(452);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(545);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(650);
      if (lookahead == 'o') ADVANCE(850);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(713);
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(788);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(654);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(754);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(755);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(801);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 'x') ADVANCE(656);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(655);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(721);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(574);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(575);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(576);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 143:
      if (lookahead == 'b') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(379);
      if (lookahead == 'p') ADVANCE(741);
      END_STATE();
    case 144:
      if (lookahead == 'b') ADVANCE(455);
      END_STATE();
    case 145:
      if (lookahead == 'b') ADVANCE(460);
      END_STATE();
    case 146:
      if (lookahead == 'b') ADVANCE(485);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(360);
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(957);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(955);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(430);
      if (lookahead == 'r') ADVANCE(1009);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(431);
      END_STATE();
    case 152:
      ADVANCE_MAP(
        'c', 578,
        'e', 759,
        'h', 118,
        'o', 162,
        'q', 819,
        't', 82,
        'u', 653,
        'y', 535,
      );
      END_STATE();
    case 153:
      ADVANCE_MAP(
        'c', 578,
        'e', 759,
        'h', 125,
        'o', 162,
        'q', 819,
        't', 82,
        'u', 653,
        'y', 535,
      );
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(454);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(374);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(791);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(421);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(765);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(434);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(393);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(396);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(397);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(605);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(424);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(319);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(371);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(372);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(994);
      if (lookahead == 'p') ADVANCE(464);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(962);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(1006);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(968);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(885);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(910);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(914);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(888);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(906);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(878);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(901);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(902);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(923);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(930);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(882);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(926);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(929);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(932);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(931);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(993);
      if (lookahead == 'p') ADVANCE(464);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(960);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(265);
      if (lookahead == 'm') ADVANCE(646);
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(776);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(733);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(738);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(256);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(248);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(304);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(697);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(291);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(296);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(297);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(298);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(300);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(323);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(996);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(872);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(1014);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(924);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(958);
      if (lookahead == 'i') ADVANCE(772);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(947);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(845);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(854);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(998);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(1005);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(1002);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(1004);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(1008);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(959);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(884);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(942);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(1010);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(919);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(939);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(903);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(897);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(1016);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(881);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(893);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(898);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(955);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(960);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(495);
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(534);
      if (lookahead == 'h') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(526);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(688);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == 'y') ADVANCE(1001);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(783);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(746);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(706);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(747);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(560);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(562);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(846);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(567);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(848);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 333:
      if (lookahead == 'f') ADVANCE(75);
      END_STATE();
    case 334:
      if (lookahead == 'f') ADVANCE(338);
      END_STATE();
    case 335:
      if (lookahead == 'f') ADVANCE(450);
      END_STATE();
    case 336:
      if (lookahead == 'f') ADVANCE(385);
      END_STATE();
    case 337:
      if (lookahead == 'f') ADVANCE(398);
      END_STATE();
    case 338:
      if (lookahead == 'f') ADVANCE(303);
      END_STATE();
    case 339:
      if (lookahead == 'f') ADVANCE(292);
      END_STATE();
    case 340:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 341:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 342:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 343:
      if (lookahead == 'g') ADVANCE(366);
      END_STATE();
    case 344:
      if (lookahead == 'g') ADVANCE(383);
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 345:
      if (lookahead == 'g') ADVANCE(359);
      END_STATE();
    case 346:
      if (lookahead == 'g') ADVANCE(861);
      END_STATE();
    case 347:
      if (lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 348:
      if (lookahead == 'g') ADVANCE(271);
      END_STATE();
    case 349:
      if (lookahead == 'g') ADVANCE(312);
      END_STATE();
    case 350:
      if (lookahead == 'g') ADVANCE(389);
      END_STATE();
    case 351:
      if (lookahead == 'g') ADVANCE(459);
      END_STATE();
    case 352:
      if (lookahead == 'g') ADVANCE(703);
      END_STATE();
    case 353:
      if (lookahead == 'g') ADVANCE(601);
      END_STATE();
    case 354:
      if (lookahead == 'g') ADVANCE(602);
      END_STATE();
    case 355:
      if (lookahead == 'g') ADVANCE(838);
      END_STATE();
    case 356:
      if (lookahead == 'g') ADVANCE(316);
      END_STATE();
    case 357:
      if (lookahead == 'g') ADVANCE(369);
      END_STATE();
    case 358:
      if (lookahead == 'h') ADVANCE(922);
      END_STATE();
    case 359:
      if (lookahead == 'h') ADVANCE(760);
      END_STATE();
    case 360:
      if (lookahead == 'h') ADVANCE(568);
      END_STATE();
    case 361:
      if (lookahead == 'h') ADVANCE(413);
      END_STATE();
    case 362:
      if (lookahead == 'h') ADVANCE(579);
      END_STATE();
    case 363:
      if (lookahead == 'h') ADVANCE(305);
      END_STATE();
    case 364:
      if (lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 365:
      if (lookahead == 'h') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(658);
      END_STATE();
    case 366:
      if (lookahead == 'h') ADVANCE(786);
      END_STATE();
    case 367:
      if (lookahead == 'h') ADVANCE(406);
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 368:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 369:
      if (lookahead == 'h') ADVANCE(805);
      END_STATE();
    case 370:
      if (lookahead == 'h') ADVANCE(135);
      END_STATE();
    case 371:
      if (lookahead == 'h') ADVANCE(140);
      END_STATE();
    case 372:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 373:
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 374:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 375:
      if (lookahead == 'i') ADVANCE(685);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(529);
      if (lookahead == 'r') ADVANCE(617);
      if (lookahead == 'u') ADVANCE(739);
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 376:
      if (lookahead == 'i') ADVANCE(685);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(529);
      if (lookahead == 'r') ADVANCE(616);
      if (lookahead == 'u') ADVANCE(739);
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 377:
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 378:
      if (lookahead == 'i') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 379:
      if (lookahead == 'i') ADVANCE(665);
      END_STATE();
    case 380:
      if (lookahead == 'i') ADVANCE(864);
      END_STATE();
    case 381:
      if (lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 382:
      if (lookahead == 'i') ADVANCE(843);
      END_STATE();
    case 383:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 384:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 385:
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 386:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 387:
      if (lookahead == 'i') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 388:
      if (lookahead == 'i') ADVANCE(736);
      END_STATE();
    case 389:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 390:
      if (lookahead == 'i') ADVANCE(773);
      END_STATE();
    case 391:
      if (lookahead == 'i') ADVANCE(565);
      END_STATE();
    case 392:
      if (lookahead == 'i') ADVANCE(777);
      END_STATE();
    case 393:
      if (lookahead == 'i') ADVANCE(793);
      END_STATE();
    case 394:
      if (lookahead == 'i') ADVANCE(537);
      END_STATE();
    case 395:
      if (lookahead == 'i') ADVANCE(779);
      END_STATE();
    case 396:
      if (lookahead == 'i') ADVANCE(768);
      END_STATE();
    case 397:
      if (lookahead == 'i') ADVANCE(769);
      END_STATE();
    case 398:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 399:
      if (lookahead == 'i') ADVANCE(572);
      END_STATE();
    case 400:
      if (lookahead == 'i') ADVANCE(781);
      END_STATE();
    case 401:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 402:
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == 'x') ADVANCE(86);
      END_STATE();
    case 403:
      if (lookahead == 'i') ADVANCE(865);
      END_STATE();
    case 404:
      if (lookahead == 'i') ADVANCE(844);
      END_STATE();
    case 405:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 406:
      if (lookahead == 'i') ADVANCE(784);
      END_STATE();
    case 407:
      if (lookahead == 'i') ADVANCE(757);
      END_STATE();
    case 408:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 409:
      if (lookahead == 'i') ADVANCE(849);
      END_STATE();
    case 410:
      if (lookahead == 'i') ADVANCE(498);
      END_STATE();
    case 411:
      if (lookahead == 'i') ADVANCE(600);
      END_STATE();
    case 412:
      if (lookahead == 'i') ADVANCE(603);
      END_STATE();
    case 413:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 414:
      if (lookahead == 'i') ADVANCE(461);
      END_STATE();
    case 415:
      if (lookahead == 'i') ADVANCE(502);
      END_STATE();
    case 416:
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 417:
      if (lookahead == 'i') ADVANCE(604);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(611);
      END_STATE();
    case 419:
      if (lookahead == 'i') ADVANCE(609);
      END_STATE();
    case 420:
      if (lookahead == 'i') ADVANCE(610);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 422:
      if (lookahead == 'i') ADVANCE(666);
      END_STATE();
    case 423:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 424:
      if (lookahead == 'i') ADVANCE(795);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 427:
      if (lookahead == 'i') ADVANCE(809);
      END_STATE();
    case 428:
      if (lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 429:
      if (lookahead == 'k') ADVANCE(1003);
      END_STATE();
    case 430:
      if (lookahead == 'k') ADVANCE(63);
      END_STATE();
    case 431:
      if (lookahead == 'k') ADVANCE(352);
      END_STATE();
    case 432:
      if (lookahead == 'k') ADVANCE(259);
      END_STATE();
    case 433:
      if (lookahead == 'k') ADVANCE(283);
      END_STATE();
    case 434:
      if (lookahead == 'k') ADVANCE(294);
      END_STATE();
    case 435:
      if (lookahead == 'l') ADVANCE(794);
      if (lookahead == 'n') ADVANCE(581);
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 436:
      if (lookahead == 'l') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 437:
      if (lookahead == 'l') ADVANCE(956);
      END_STATE();
    case 438:
      if (lookahead == 'l') ADVANCE(873);
      END_STATE();
    case 439:
      if (lookahead == 'l') ADVANCE(873);
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 440:
      if (lookahead == 'l') ADVANCE(896);
      END_STATE();
    case 441:
      if (lookahead == 'l') ADVANCE(875);
      END_STATE();
    case 442:
      if (lookahead == 'l') ADVANCE(879);
      END_STATE();
    case 443:
      if (lookahead == 'l') ADVANCE(890);
      END_STATE();
    case 444:
      if (lookahead == 'l') ADVANCE(907);
      END_STATE();
    case 445:
      if (lookahead == 'l') ADVANCE(954);
      END_STATE();
    case 446:
      if (lookahead == 'l') ADVANCE(928);
      END_STATE();
    case 447:
      if (lookahead == 'l') ADVANCE(925);
      END_STATE();
    case 448:
      if (lookahead == 'l') ADVANCE(955);
      END_STATE();
    case 449:
      if (lookahead == 'l') ADVANCE(950);
      END_STATE();
    case 450:
      if (lookahead == 'l') ADVANCE(837);
      END_STATE();
    case 451:
      if (lookahead == 'l') ADVANCE(583);
      END_STATE();
    case 452:
      if (lookahead == 'l') ADVANCE(585);
      END_STATE();
    case 453:
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 454:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 455:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 456:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 457:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 458:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 459:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 460:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 461:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 462:
      if (lookahead == 'l') ADVANCE(390);
      END_STATE();
    case 463:
      if (lookahead == 'l') ADVANCE(744);
      END_STATE();
    case 464:
      if (lookahead == 'l') ADVANCE(384);
      END_STATE();
    case 465:
      if (lookahead == 'l') ADVANCE(451);
      END_STATE();
    case 466:
      if (lookahead == 'l') ADVANCE(623);
      END_STATE();
    case 467:
      if (lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 468:
      if (lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 469:
      if (lookahead == 'l') ADVANCE(596);
      END_STATE();
    case 470:
      if (lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 471:
      if (lookahead == 'l') ADVANCE(606);
      END_STATE();
    case 472:
      if (lookahead == 'l') ADVANCE(607);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(608);
      END_STATE();
    case 474:
      if (lookahead == 'l') ADVANCE(612);
      END_STATE();
    case 475:
      if (lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 476:
      if (lookahead == 'l') ADVANCE(423);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(425);
      END_STATE();
    case 478:
      if (lookahead == 'l') ADVANCE(211);
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 480:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(426);
      END_STATE();
    case 482:
      if (lookahead == 'l') ADVANCE(328);
      END_STATE();
    case 483:
      if (lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 484:
      if (lookahead == 'l') ADVANCE(331);
      END_STATE();
    case 485:
      if (lookahead == 'l') ADVANCE(332);
      END_STATE();
    case 486:
      if (lookahead == 'm') ADVANCE(646);
      END_STATE();
    case 487:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 488:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 489:
      if (lookahead == 'm') ADVANCE(891);
      END_STATE();
    case 490:
      if (lookahead == 'm') ADVANCE(916);
      END_STATE();
    case 491:
      if (lookahead == 'm') ADVANCE(895);
      END_STATE();
    case 492:
      if (lookahead == 'm') ADVANCE(920);
      END_STATE();
    case 493:
      if (lookahead == 'm') ADVANCE(941);
      END_STATE();
    case 494:
      if (lookahead == 'm') ADVANCE(894);
      END_STATE();
    case 495:
      if (lookahead == 'm') ADVANCE(638);
      END_STATE();
    case 496:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 497:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 498:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 499:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 500:
      if (lookahead == 'm') ADVANCE(114);
      END_STATE();
    case 501:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 502:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 503:
      if (lookahead == 'm') ADVANCE(621);
      END_STATE();
    case 504:
      if (lookahead == 'm') ADVANCE(599);
      END_STATE();
    case 505:
      if (lookahead == 'm') ADVANCE(295);
      END_STATE();
    case 506:
      if (lookahead == 'm') ADVANCE(300);
      END_STATE();
    case 507:
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 508:
      if (lookahead == 'm') ADVANCE(310);
      END_STATE();
    case 509:
      if (lookahead == 'm') ADVANCE(313);
      END_STATE();
    case 510:
      if (lookahead == 'm') ADVANCE(314);
      END_STATE();
    case 511:
      if (lookahead == 'm') ADVANCE(315);
      END_STATE();
    case 512:
      if (lookahead == 'm') ADVANCE(659);
      END_STATE();
    case 513:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 514:
      if (lookahead == 'm') ADVANCE(660);
      END_STATE();
    case 515:
      if (lookahead == 'm') ADVANCE(664);
      if (lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 516:
      if (lookahead == 'n') ADVANCE(432);
      END_STATE();
    case 517:
      if (lookahead == 'n') ADVANCE(1000);
      END_STATE();
    case 518:
      if (lookahead == 'n') ADVANCE(1012);
      END_STATE();
    case 519:
      if (lookahead == 'n') ADVANCE(997);
      END_STATE();
    case 520:
      if (lookahead == 'n') ADVANCE(995);
      END_STATE();
    case 521:
      if (lookahead == 'n') ADVANCE(1007);
      END_STATE();
    case 522:
      if (lookahead == 'n') ADVANCE(1015);
      END_STATE();
    case 523:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 524:
      if (lookahead == 'n') ADVANCE(883);
      END_STATE();
    case 525:
      if (lookahead == 'n') ADVANCE(933);
      END_STATE();
    case 526:
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 527:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 528:
      if (lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 529:
      if (lookahead == 'n') ADVANCE(790);
      if (lookahead == 'r') ADVANCE(686);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead == 'r') ADVANCE(716);
      END_STATE();
    case 531:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 532:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 533:
      if (lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(804);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(774);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(737);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == 'r') ADVANCE(497);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == 'r') ADVANCE(500);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(789);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(782);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(803);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(764);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(771);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(636);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(766);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(767);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(770);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(780);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(831);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(785);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(290);
      if (lookahead == 'v') ADVANCE(121);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(799);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(802);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(806);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(812);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(813);
      END_STATE();
    case 577:
      if (lookahead == 'o') ADVANCE(852);
      END_STATE();
    case 578:
      if (lookahead == 'o') ADVANCE(821);
      END_STATE();
    case 579:
      if (lookahead == 'o') ADVANCE(850);
      END_STATE();
    case 580:
      if (lookahead == 'o') ADVANCE(539);
      END_STATE();
    case 581:
      if (lookahead == 'o') ADVANCE(496);
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 582:
      if (lookahead == 'o') ADVANCE(662);
      END_STATE();
    case 583:
      if (lookahead == 'o') ADVANCE(851);
      END_STATE();
    case 584:
      if (lookahead == 'o') ADVANCE(543);
      END_STATE();
    case 585:
      if (lookahead == 'o') ADVANCE(820);
      END_STATE();
    case 586:
      if (lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 587:
      if (lookahead == 'o') ADVANCE(826);
      END_STATE();
    case 588:
      if (lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 589:
      if (lookahead == 'o') ADVANCE(836);
      END_STATE();
    case 590:
      if (lookahead == 'o') ADVANCE(640);
      END_STATE();
    case 591:
      if (lookahead == 'o') ADVANCE(701);
      END_STATE();
    case 592:
      if (lookahead == 'o') ADVANCE(657);
      END_STATE();
    case 593:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 594:
      if (lookahead == 'o') ADVANCE(753);
      END_STATE();
    case 595:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 596:
      if (lookahead == 'o') ADVANCE(692);
      END_STATE();
    case 597:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 598:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 599:
      if (lookahead == 'o') ADVANCE(531);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(548);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 603:
      if (lookahead == 'o') ADVANCE(674);
      END_STATE();
    case 604:
      if (lookahead == 'o') ADVANCE(524);
      END_STATE();
    case 605:
      if (lookahead == 'o') ADVANCE(525);
      END_STATE();
    case 606:
      if (lookahead == 'o') ADVANCE(676);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(677);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(678);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(554);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(556);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(683);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(708);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(853);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(822);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(704);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(743);
      END_STATE();
    case 617:
      if (lookahead == 'o') ADVANCE(743);
      if (lookahead == 'u') ADVANCE(745);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(538);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(827);
      END_STATE();
    case 620:
      if (lookahead == 'o') ADVANCE(709);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(825);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(563);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(823);
      END_STATE();
    case 624:
      if (lookahead == 'o') ADVANCE(828);
      END_STATE();
    case 625:
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == 'u') ADVANCE(494);
      END_STATE();
    case 626:
      if (lookahead == 'o') ADVANCE(829);
      END_STATE();
    case 627:
      if (lookahead == 'o') ADVANCE(547);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(830);
      END_STATE();
    case 629:
      if (lookahead == 'o') ADVANCE(832);
      END_STATE();
    case 630:
      if (lookahead == 'o') ADVANCE(833);
      END_STATE();
    case 631:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 632:
      if (lookahead == 'o') ADVANCE(540);
      END_STATE();
    case 633:
      if (lookahead == 'o') ADVANCE(471);
      END_STATE();
    case 634:
      if (lookahead == 'o') ADVANCE(472);
      END_STATE();
    case 635:
      if (lookahead == 'o') ADVANCE(473);
      END_STATE();
    case 636:
      if (lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 637:
      if (lookahead == 'o') ADVANCE(661);
      END_STATE();
    case 638:
      if (lookahead == 'p') ADVANCE(936);
      END_STATE();
    case 639:
      if (lookahead == 'p') ADVANCE(892);
      END_STATE();
    case 640:
      if (lookahead == 'p') ADVANCE(1013);
      END_STATE();
    case 641:
      if (lookahead == 'p') ADVANCE(915);
      END_STATE();
    case 642:
      if (lookahead == 'p') ADVANCE(886);
      END_STATE();
    case 643:
      if (lookahead == 'p') ADVANCE(917);
      END_STATE();
    case 644:
      if (lookahead == 'p') ADVANCE(921);
      END_STATE();
    case 645:
      if (lookahead == 'p') ADVANCE(775);
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 646:
      if (lookahead == 'p') ADVANCE(591);
      END_STATE();
    case 647:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 648:
      if (lookahead == 'p') ADVANCE(237);
      END_STATE();
    case 649:
      if (lookahead == 'p') ADVANCE(245);
      END_STATE();
    case 650:
      if (lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 651:
      if (lookahead == 'p') ADVANCE(458);
      END_STATE();
    case 652:
      if (lookahead == 'p') ADVANCE(787);
      END_STATE();
    case 653:
      if (lookahead == 'p') ADVANCE(280);
      END_STATE();
    case 654:
      if (lookahead == 'p') ADVANCE(299);
      END_STATE();
    case 655:
      if (lookahead == 'p') ADVANCE(300);
      END_STATE();
    case 656:
      if (lookahead == 'p') ADVANCE(468);
      END_STATE();
    case 657:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 658:
      if (lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 659:
      if (lookahead == 'p') ADVANCE(476);
      END_STATE();
    case 660:
      if (lookahead == 'p') ADVANCE(477);
      END_STATE();
    case 661:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 662:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 663:
      if (lookahead == 'p') ADVANCE(807);
      END_STATE();
    case 664:
      if (lookahead == 'p') ADVANCE(481);
      END_STATE();
    case 665:
      if (lookahead == 'q') ADVANCE(824);
      END_STATE();
    case 666:
      if (lookahead == 'q') ADVANCE(834);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 668:
      if (lookahead == 'r') ADVANCE(964);
      END_STATE();
    case 669:
      if (lookahead == 'r') ADVANCE(966);
      END_STATE();
    case 670:
      if (lookahead == 'r') ADVANCE(909);
      END_STATE();
    case 671:
      if (lookahead == 'r') ADVANCE(965);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(967);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(951);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(880);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(940);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(938);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(937);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(963);
      END_STATE();
    case 682:
      if (lookahead == 'r') ADVANCE(961);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(950);
      END_STATE();
    case 684:
      if (lookahead == 'r') ADVANCE(960);
      END_STATE();
    case 685:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 686:
      if (lookahead == 'r') ADVANCE(817);
      END_STATE();
    case 687:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 688:
      if (lookahead == 'r') ADVANCE(651);
      END_STATE();
    case 689:
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 690:
      if (lookahead == 'r') ADVANCE(818);
      END_STATE();
    case 691:
      if (lookahead == 'r') ADVANCE(469);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 693:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 694:
      if (lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 695:
      if (lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 696:
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 697:
      if (lookahead == 'r') ADVANCE(590);
      END_STATE();
    case 698:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 699:
      if (lookahead == 'r') ADVANCE(592);
      END_STATE();
    case 700:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 701:
      if (lookahead == 'r') ADVANCE(761);
      END_STATE();
    case 702:
      if (lookahead == 'r') ADVANCE(614);
      END_STATE();
    case 703:
      if (lookahead == 'r') ADVANCE(587);
      END_STATE();
    case 704:
      if (lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 705:
      if (lookahead == 'r') ADVANCE(544);
      END_STATE();
    case 706:
      if (lookahead == 'r') ADVANCE(792);
      END_STATE();
    case 707:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 708:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 709:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 710:
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 711:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 712:
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 713:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 714:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 715:
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 716:
      if (lookahead == 'r') ADVANCE(620);
      END_STATE();
    case 717:
      if (lookahead == 'r') ADVANCE(816);
      END_STATE();
    case 718:
      if (lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 719:
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 720:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 721:
      if (lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 722:
      if (lookahead == 'r') ADVANCE(356);
      END_STATE();
    case 723:
      if (lookahead == 'r') ADVANCE(637);
      END_STATE();
    case 724:
      if (lookahead == 'r') ADVANCE(808);
      END_STATE();
    case 725:
      if (lookahead == 'r') ADVANCE(810);
      END_STATE();
    case 726:
      if (lookahead == 'r') ADVANCE(811);
      END_STATE();
    case 727:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 728:
      if (lookahead == 'r') ADVANCE(842);
      END_STATE();
    case 729:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 730:
      if (lookahead == 's') ADVANCE(887);
      END_STATE();
    case 731:
      if (lookahead == 's') ADVANCE(1011);
      END_STATE();
    case 732:
      if (lookahead == 's') ADVANCE(953);
      END_STATE();
    case 733:
      if (lookahead == 's') ADVANCE(889);
      END_STATE();
    case 734:
      if (lookahead == 's') ADVANCE(908);
      END_STATE();
    case 735:
      if (lookahead == 's') ADVANCE(950);
      END_STATE();
    case 736:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 737:
      if (lookahead == 's') ADVANCE(336);
      END_STATE();
    case 738:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 739:
      if (lookahead == 's') ADVANCE(778);
      END_STATE();
    case 740:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 741:
      if (lookahead == 's') ADVANCE(408);
      END_STATE();
    case 742:
      if (lookahead == 's') ADVANCE(730);
      END_STATE();
    case 743:
      if (lookahead == 's') ADVANCE(731);
      END_STATE();
    case 744:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 745:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 746:
      if (lookahead == 's') ADVANCE(407);
      END_STATE();
    case 747:
      if (lookahead == 's') ADVANCE(388);
      END_STATE();
    case 748:
      if (lookahead == 's') ADVANCE(382);
      END_STATE();
    case 749:
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 750:
      if (lookahead == 's') ADVANCE(404);
      END_STATE();
    case 751:
      if (lookahead == 's') ADVANCE(499);
      END_STATE();
    case 752:
      if (lookahead == 's') ADVANCE(748);
      END_STATE();
    case 753:
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 754:
      if (lookahead == 's') ADVANCE(501);
      END_STATE();
    case 755:
      if (lookahead == 's') ADVANCE(750);
      END_STATE();
    case 756:
      if (lookahead == 's') ADVANCE(417);
      END_STATE();
    case 757:
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 758:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 759:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 760:
      if (lookahead == 't') ADVANCE(905);
      END_STATE();
    case 761:
      if (lookahead == 't') ADVANCE(874);
      END_STATE();
    case 762:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 763:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 764:
      if (lookahead == 't') ADVANCE(952);
      END_STATE();
    case 765:
      if (lookahead == 't') ADVANCE(935);
      END_STATE();
    case 766:
      if (lookahead == 't') ADVANCE(877);
      END_STATE();
    case 767:
      if (lookahead == 't') ADVANCE(900);
      END_STATE();
    case 768:
      if (lookahead == 't') ADVANCE(899);
      END_STATE();
    case 769:
      if (lookahead == 't') ADVANCE(904);
      END_STATE();
    case 770:
      if (lookahead == 't') ADVANCE(950);
      END_STATE();
    case 771:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 772:
      if (lookahead == 't') ADVANCE(857);
      END_STATE();
    case 773:
      if (lookahead == 't') ADVANCE(858);
      END_STATE();
    case 774:
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 775:
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 776:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 777:
      if (lookahead == 't') ADVANCE(860);
      END_STATE();
    case 778:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 779:
      if (lookahead == 't') ADVANCE(859);
      END_STATE();
    case 780:
      if (lookahead == 't') ADVANCE(405);
      END_STATE();
    case 781:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 782:
      if (lookahead == 't') ADVANCE(509);
      END_STATE();
    case 783:
      if (lookahead == 't') ADVANCE(734);
      END_STATE();
    case 784:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 785:
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 786:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 787:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 788:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 789:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 790:
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 791:
      if (lookahead == 't') ADVANCE(835);
      END_STATE();
    case 792:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 793:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 794:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 795:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 796:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 797:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 798:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 799:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 800:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 801:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 802:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 803:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 804:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 805:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 806:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 807:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 808:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 809:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 810:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 811:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 812:
      if (lookahead == 't') ADVANCE(510);
      END_STATE();
    case 813:
      if (lookahead == 't') ADVANCE(511);
      END_STATE();
    case 814:
      if (lookahead == 'u') ADVANCE(570);
      END_STATE();
    case 815:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 816:
      if (lookahead == 'u') ADVANCE(745);
      END_STATE();
    case 817:
      if (lookahead == 'u') ADVANCE(652);
      END_STATE();
    case 818:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 819:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 820:
      if (lookahead == 'u') ADVANCE(732);
      END_STATE();
    case 821:
      if (lookahead == 'u') ADVANCE(715);
      END_STATE();
    case 822:
      if (lookahead == 'u') ADVANCE(643);
      END_STATE();
    case 823:
      if (lookahead == 'u') ADVANCE(735);
      END_STATE();
    case 824:
      if (lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 825:
      if (lookahead == 'u') ADVANCE(675);
      END_STATE();
    case 826:
      if (lookahead == 'u') ADVANCE(546);
      END_STATE();
    case 827:
      if (lookahead == 'u') ADVANCE(550);
      END_STATE();
    case 828:
      if (lookahead == 'u') ADVANCE(551);
      END_STATE();
    case 829:
      if (lookahead == 'u') ADVANCE(555);
      END_STATE();
    case 830:
      if (lookahead == 'u') ADVANCE(557);
      END_STATE();
    case 831:
      if (lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 832:
      if (lookahead == 'u') ADVANCE(559);
      END_STATE();
    case 833:
      if (lookahead == 'u') ADVANCE(561);
      END_STATE();
    case 834:
      if (lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 835:
      if (lookahead == 'u') ADVANCE(710);
      END_STATE();
    case 836:
      if (lookahead == 'u') ADVANCE(749);
      END_STATE();
    case 837:
      if (lookahead == 'u') ADVANCE(308);
      END_STATE();
    case 838:
      if (lookahead == 'u') ADVANCE(711);
      END_STATE();
    case 839:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 840:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 841:
      if (lookahead == 'u') ADVANCE(573);
      END_STATE();
    case 842:
      if (lookahead == 'u') ADVANCE(758);
      END_STATE();
    case 843:
      if (lookahead == 'v') ADVANCE(254);
      END_STATE();
    case 844:
      if (lookahead == 'v') ADVANCE(258);
      END_STATE();
    case 845:
      if (lookahead == 'v') ADVANCE(273);
      END_STATE();
    case 846:
      if (lookahead == 'v') ADVANCE(278);
      END_STATE();
    case 847:
      if (lookahead == 'v') ADVANCE(281);
      END_STATE();
    case 848:
      if (lookahead == 'v') ADVANCE(285);
      END_STATE();
    case 849:
      if (lookahead == 'v') ADVANCE(327);
      END_STATE();
    case 850:
      if (lookahead == 'w') ADVANCE(871);
      END_STATE();
    case 851:
      if (lookahead == 'w') ADVANCE(999);
      END_STATE();
    case 852:
      if (lookahead == 'w') ADVANCE(519);
      END_STATE();
    case 853:
      if (lookahead == 'w') ADVANCE(523);
      END_STATE();
    case 854:
      if (lookahead == 'x') ADVANCE(763);
      END_STATE();
    case 855:
      if (lookahead == 'x') ADVANCE(119);
      END_STATE();
    case 856:
      if (lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 857:
      if (lookahead == 'y') ADVANCE(912);
      END_STATE();
    case 858:
      if (lookahead == 'y') ADVANCE(911);
      END_STATE();
    case 859:
      if (lookahead == 'y') ADVANCE(876);
      END_STATE();
    case 860:
      if (lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 861:
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 862:
      if (lookahead == 'y') ADVANCE(648);
      END_STATE();
    case 863:
      if (lookahead == 'y') ADVANCE(649);
      END_STATE();
    case 864:
      if (lookahead == 'z') ADVANCE(241);
      END_STATE();
    case 865:
      if (lookahead == 'z') ADVANCE(243);
      END_STATE();
    case 866:
      if (eof) ADVANCE(870);
      ADVANCE_MAP(
        '\n', 1045,
        '\r', 3,
        '!', 944,
        '"', 55,
        '#', 1043,
        '-', 18,
        '0', 991,
        '1', 989,
        '2', 982,
        '3', 981,
        '4', 990,
        '<', 946,
        '=', 944,
        '>', 946,
        'A', 988,
        'B', 983,
        'C', 375,
        'D', 987,
        'E', 436,
        'F', 77,
        'G', 986,
        'H', 88,
        'I', 197,
        'K', 400,
        'L', 381,
        'M', 78,
        'N', 580,
        'O', 645,
        'P', 257,
        'Q', 815,
        'R', 984,
        'S', 152,
        'T', 253,
        'U', 143,
        'W', 985,
        'Y', 252,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(866);
      if (lookahead == '5' ||
          lookahead == '6') ADVANCE(992);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(1026);
      END_STATE();
    case 867:
      if (eof) ADVANCE(870);
      ADVANCE_MAP(
        '\n', 1045,
        '\r', 3,
        '!', 944,
        '"', 948,
        '#', 1043,
        '0', 1023,
        '<', 946,
        '=', 944,
        '>', 946,
        'A', 435,
        'B', 76,
        'C', 376,
        'D', 377,
        'E', 478,
        'F', 687,
        'G', 217,
        'H', 87,
        'I', 197,
        'K', 400,
        'L', 381,
        'M', 78,
        'N', 580,
        'O', 714,
        'P', 257,
        'Q', 815,
        'R', 79,
        'S', 153,
        'T', 679,
        'U', 143,
        'W', 367,
        'Y', 252,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(868);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1026);
      END_STATE();
    case 868:
      if (eof) ADVANCE(870);
      ADVANCE_MAP(
        '\n', 1045,
        '\r', 3,
        '!', 944,
        '#', 1043,
        '0', 1023,
        '<', 946,
        '=', 944,
        '>', 946,
        'A', 435,
        'B', 76,
        'C', 376,
        'D', 377,
        'E', 478,
        'F', 687,
        'G', 217,
        'H', 87,
        'I', 197,
        'K', 400,
        'L', 381,
        'M', 78,
        'N', 580,
        'O', 714,
        'P', 257,
        'Q', 815,
        'R', 79,
        'S', 153,
        'T', 679,
        'U', 143,
        'W', 367,
        'Y', 252,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(868);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1026);
      END_STATE();
    case 869:
      if (eof) ADVANCE(870);
      ADVANCE_MAP(
        '\n', 1045,
        '\r', 3,
        '#', 1043,
        'H', 401,
        'I', 486,
        'M', 399,
        'S', 362,
        '\t', 1044,
        ' ', 1044,
      );
      END_STATE();
    case 870:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_Show);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_Hide);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_Minimal);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_Import);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_Optional);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_AlternateQuality);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_AnyEnchantment);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_ArchnemesisMod);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_AreaLevel);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_BaseArmour);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_BaseDefencePercentile);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_BaseEnergyShield);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_BaseEvasion);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_BaseType);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_BaseWard);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_BlightedMap);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_Class);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_Corrupted);
      if (lookahead == 'M') ADVANCE(593);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_CorruptedMods);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_DropLevel);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_ElderItem);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_ElderMap);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_EnchantmentPassiveNode);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_EnchantmentPassiveNum);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_FracturedItem);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_GemLevel);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_GemQualityType);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_HasCruciblePassiveTree);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_HasEaterOfWorldsImplicit);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_HasEnchantment);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_HasExplicitMod);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_HasImplicitMod);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_HasInfluence);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_HasSearingExarchImplicit);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_Height);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_Identified);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_ItemLevel);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_LinkedSockets);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_MapTier);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_Mirrored);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_Quality);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_Rarity);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_Replica);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_Scourged);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_ShapedMap);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_ShaperItem);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_SocketGroup);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_Sockets);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_StackSize);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_SynthesisedItem);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_UberBlightedMap);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_Width);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_PlayAlertSound);
      if (lookahead == 'P') ADVANCE(594);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_None);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_PlayAlertSoundPositional);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_CustomAlertSound);
      if (lookahead == 'O') ADVANCE(663);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_action_token1);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_CustomAlertSoundOptional);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_DisableDropSound);
      if (lookahead == 'I') ADVANCE(341);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_EnableDropSound);
      if (lookahead == 'I') ADVANCE(340);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_DisableDropSoundIfAlertSound);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_EnableDropSoundIfAlertSound);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_MinimapIcon);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_DASH1);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_PlayEffect);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_Temp);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_SetBackgroundColor);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_SetBorderColor);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_SetFontSize);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_SetTextColor);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_TransfiguredGem);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_Continue);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym__equal_operator_token1);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym__equal_operator_token1);
      if (lookahead == '=') ADVANCE(943);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym__range_operator_token1);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym__range_operator_token1);
      if (lookahead == '=') ADVANCE(945);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'N') ADVANCE(584);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_quality_token1);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_Superior);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_Divergent);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_Anomalous);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_Phantasmal);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_rarity_token1);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_Normal);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_Magic);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_Rare);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_Unique);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_influence_token1);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_Shaper);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_Shaper);
      if (lookahead == 'I') ADVANCE(797);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_Elder);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_Elder);
      if (lookahead == 'I') ADVANCE(796);
      if (lookahead == 'M') ADVANCE(96);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_Crusader);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_Hunter);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_Redeemer);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_Warlord);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == '0') ADVANCE(1024);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(979);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1026);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == '5') ADVANCE(1025);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1026);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(979);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      ADVANCE_MAP(
        'a', 740,
        'l', 378,
        'r', 577,
        'A', 979,
        'B', 979,
        'D', 979,
        'G', 979,
        'R', 979,
        'W', 979,
      );
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'a') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(979);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      ADVANCE_MAP(
        'a', 691,
        'h', 406,
        'i', 199,
        'A', 979,
        'B', 979,
        'D', 979,
        'G', 979,
        'R', 979,
        'W', 979,
      );
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(979);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(582);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(979);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      ADVANCE_MAP(
        'l', 794,
        'n', 581,
        'r', 147,
        'A', 979,
        'B', 979,
        'D', 979,
        'G', 979,
        'R', 979,
        'W', 979,
      );
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(1026);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(1026);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1026);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1026);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(979);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1026);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == '0') ADVANCE(1024);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(991);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1026);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == '5') ADVANCE(1025);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1026);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(991);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      ADVANCE_MAP(
        'a', 740,
        'l', 378,
        'r', 577,
        'A', 991,
        'B', 991,
        'D', 991,
        'G', 991,
        'R', 991,
        'W', 991,
      );
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'a') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(991);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      ADVANCE_MAP(
        'a', 691,
        'h', 406,
        'i', 199,
        'A', 991,
        'B', 991,
        'D', 991,
        'G', 991,
        'R', 991,
        'W', 991,
      );
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(991);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(582);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(991);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      ADVANCE_MAP(
        'l', 794,
        'n', 581,
        'r', 147,
        'A', 991,
        'B', 991,
        'D', 991,
        'G', 991,
        'R', 991,
        'W', 991,
      );
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(1026);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(1026);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1026);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1026);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(991);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1026);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_Red);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_Red);
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_Green);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_Blue);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_Brown);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_White);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_Yellow);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_Cyan);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_Grey);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_Orange);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_Pink);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_Purple);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_Circle);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_Diamond);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_Hexagon);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_Square);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_Star);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_Triangle);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_Cross);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_Moon);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_Raindrop);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_Kite);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_Pentagon);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_UpsideDownHouse);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ') ADVANCE(1017);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1018);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (set_contains(aux_sym_string_token1_character_set_1, 433, lookahead)) ADVANCE(1018);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1019);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_file_token1);
      if (lookahead == ' ') ADVANCE(1020);
      if (lookahead == '#') ADVANCE(1021);
      if (lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '?' &&
          lookahead != '|' &&
          (lookahead < 0x7f || 0x9f < lookahead)) ADVANCE(1022);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_file_token1);
      if ((!eof && lookahead <= '\t') ||
          (0x0b <= lookahead && lookahead <= 0x1f) ||
          lookahead == '"' ||
          lookahead == '*' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          lookahead == '|' ||
          (0x7f <= lookahead && lookahead <= 0x9f)) ADVANCE(1043);
      if (lookahead > 0x1f) ADVANCE(1021);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_file_token1);
      if (lookahead > 0x1f &&
          lookahead != '"' &&
          lookahead != '*' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '?' &&
          lookahead != '|' &&
          (lookahead < 0x7f || 0x9f < lookahead)) ADVANCE(1022);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(1026);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1026);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_number);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1026);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1026);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym__id_token1);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym__id_token1);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(1027);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym__volume_token1);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym__volume_token1);
      if (lookahead == '0') ADVANCE(1029);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym__volume_token1);
      if (lookahead == '0') ADVANCE(1030);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1029);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym__volume_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1029);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym__volume_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1032);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym__color_token1);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (lookahead == '5') ADVANCE(1036);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1037);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1034);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1034);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym__icon_size_token1);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym__font_size_token1);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym__font_size_token1);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1040);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym__font_size_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1040);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1043);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1044);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 867},
  [3] = {.lex_state = 867},
  [4] = {.lex_state = 867},
  [5] = {.lex_state = 867},
  [6] = {.lex_state = 867},
  [7] = {.lex_state = 867},
  [8] = {.lex_state = 867},
  [9] = {.lex_state = 867},
  [10] = {.lex_state = 867},
  [11] = {.lex_state = 867},
  [12] = {.lex_state = 867},
  [13] = {.lex_state = 867},
  [14] = {.lex_state = 867},
  [15] = {.lex_state = 867},
  [16] = {.lex_state = 867},
  [17] = {.lex_state = 867},
  [18] = {.lex_state = 867},
  [19] = {.lex_state = 867},
  [20] = {.lex_state = 867},
  [21] = {.lex_state = 867},
  [22] = {.lex_state = 867},
  [23] = {.lex_state = 867},
  [24] = {.lex_state = 867},
  [25] = {.lex_state = 867},
  [26] = {.lex_state = 867},
  [27] = {.lex_state = 867},
  [28] = {.lex_state = 867},
  [29] = {.lex_state = 867},
  [30] = {.lex_state = 867},
  [31] = {.lex_state = 867},
  [32] = {.lex_state = 867},
  [33] = {.lex_state = 867},
  [34] = {.lex_state = 867},
  [35] = {.lex_state = 867},
  [36] = {.lex_state = 867},
  [37] = {.lex_state = 867},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 869},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 869},
  [45] = {.lex_state = 867},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 867},
  [48] = {.lex_state = 867},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 869},
  [54] = {.lex_state = 869},
  [55] = {.lex_state = 869},
  [56] = {.lex_state = 869},
  [57] = {.lex_state = 869},
  [58] = {.lex_state = 869},
  [59] = {.lex_state = 869},
  [60] = {.lex_state = 869},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 869},
  [63] = {.lex_state = 869},
  [64] = {.lex_state = 869},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 869},
  [67] = {.lex_state = 869},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 869},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 869},
  [73] = {.lex_state = 869},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 869},
  [76] = {.lex_state = 869},
  [77] = {.lex_state = 869},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 869},
  [80] = {.lex_state = 869},
  [81] = {.lex_state = 869},
  [82] = {.lex_state = 869},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 869},
  [86] = {.lex_state = 869},
  [87] = {.lex_state = 869},
  [88] = {.lex_state = 869},
  [89] = {.lex_state = 869},
  [90] = {.lex_state = 869},
  [91] = {.lex_state = 869},
  [92] = {.lex_state = 869},
  [93] = {.lex_state = 869},
  [94] = {.lex_state = 869},
  [95] = {.lex_state = 869},
  [96] = {.lex_state = 869},
  [97] = {.lex_state = 869},
  [98] = {.lex_state = 869},
  [99] = {.lex_state = 869},
  [100] = {.lex_state = 869},
  [101] = {.lex_state = 869},
  [102] = {.lex_state = 869},
  [103] = {.lex_state = 869},
  [104] = {.lex_state = 869},
  [105] = {.lex_state = 869},
  [106] = {.lex_state = 869},
  [107] = {.lex_state = 869},
  [108] = {.lex_state = 867},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 15},
  [111] = {.lex_state = 13},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 869},
  [116] = {.lex_state = 869},
  [117] = {.lex_state = 869},
  [118] = {.lex_state = 869},
  [119] = {.lex_state = 869},
  [120] = {.lex_state = 869},
  [121] = {.lex_state = 869},
  [122] = {.lex_state = 867},
  [123] = {.lex_state = 869},
  [124] = {.lex_state = 869},
  [125] = {.lex_state = 869},
  [126] = {.lex_state = 869},
  [127] = {.lex_state = 869},
  [128] = {.lex_state = 869},
  [129] = {.lex_state = 869},
  [130] = {.lex_state = 869},
  [131] = {.lex_state = 11},
  [132] = {.lex_state = 869},
  [133] = {.lex_state = 869},
  [134] = {.lex_state = 869},
  [135] = {.lex_state = 869},
  [136] = {.lex_state = 869},
  [137] = {.lex_state = 869},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 869},
  [140] = {.lex_state = 869},
  [141] = {.lex_state = 869},
  [142] = {.lex_state = 867},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 869},
  [150] = {.lex_state = 869},
  [151] = {.lex_state = 17},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 869},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 869},
  [158] = {.lex_state = 869},
  [159] = {.lex_state = 867},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 869},
  [163] = {.lex_state = 869},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 869},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 867},
  [169] = {.lex_state = 11},
  [170] = {.lex_state = 867},
  [171] = {.lex_state = 869},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 869},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 869},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 867},
  [182] = {.lex_state = 867},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 867},
  [185] = {.lex_state = 869},
  [186] = {.lex_state = 867},
  [187] = {.lex_state = 0},
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
    [anon_sym_UberBlightedMap] = ACTIONS(1),
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
    [anon_sym_TransfiguredGem] = ACTIONS(1),
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
    [sym_filter] = STATE(167),
    [sym_block] = STATE(41),
    [sym_import] = STATE(41),
    [aux_sym_filter_repeat1] = STATE(41),
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
    [anon_sym_UberBlightedMap] = ACTIONS(15),
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
    [anon_sym_TransfiguredGem] = ACTIONS(59),
    [anon_sym_Continue] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(63),
  },
  [3] = {
    [sym_condition] = STATE(3),
    [sym_action] = STATE(3),
    [sym_continue] = STATE(3),
    [aux_sym_block_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_Show] = ACTIONS(65),
    [anon_sym_Hide] = ACTIONS(65),
    [anon_sym_Minimal] = ACTIONS(65),
    [anon_sym_Import] = ACTIONS(65),
    [anon_sym_AlternateQuality] = ACTIONS(67),
    [anon_sym_AnyEnchantment] = ACTIONS(67),
    [anon_sym_ArchnemesisMod] = ACTIONS(70),
    [anon_sym_AreaLevel] = ACTIONS(73),
    [anon_sym_BaseArmour] = ACTIONS(73),
    [anon_sym_BaseDefencePercentile] = ACTIONS(73),
    [anon_sym_BaseEnergyShield] = ACTIONS(73),
    [anon_sym_BaseEvasion] = ACTIONS(73),
    [anon_sym_BaseType] = ACTIONS(76),
    [anon_sym_BaseWard] = ACTIONS(73),
    [anon_sym_BlightedMap] = ACTIONS(67),
    [anon_sym_Class] = ACTIONS(79),
    [anon_sym_Corrupted] = ACTIONS(82),
    [anon_sym_CorruptedMods] = ACTIONS(73),
    [anon_sym_DropLevel] = ACTIONS(73),
    [anon_sym_ElderItem] = ACTIONS(67),
    [anon_sym_ElderMap] = ACTIONS(67),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(85),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(73),
    [anon_sym_FracturedItem] = ACTIONS(67),
    [anon_sym_GemLevel] = ACTIONS(73),
    [anon_sym_GemQualityType] = ACTIONS(88),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(67),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(73),
    [anon_sym_HasEnchantment] = ACTIONS(85),
    [anon_sym_HasExplicitMod] = ACTIONS(91),
    [anon_sym_HasImplicitMod] = ACTIONS(67),
    [anon_sym_HasInfluence] = ACTIONS(94),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(73),
    [anon_sym_Height] = ACTIONS(73),
    [anon_sym_Identified] = ACTIONS(67),
    [anon_sym_ItemLevel] = ACTIONS(73),
    [anon_sym_LinkedSockets] = ACTIONS(73),
    [anon_sym_MapTier] = ACTIONS(73),
    [anon_sym_Mirrored] = ACTIONS(67),
    [anon_sym_Quality] = ACTIONS(73),
    [anon_sym_Rarity] = ACTIONS(97),
    [anon_sym_Replica] = ACTIONS(67),
    [anon_sym_Scourged] = ACTIONS(67),
    [anon_sym_ShapedMap] = ACTIONS(67),
    [anon_sym_ShaperItem] = ACTIONS(67),
    [anon_sym_SocketGroup] = ACTIONS(100),
    [anon_sym_Sockets] = ACTIONS(100),
    [anon_sym_StackSize] = ACTIONS(73),
    [anon_sym_SynthesisedItem] = ACTIONS(67),
    [anon_sym_UberBlightedMap] = ACTIONS(67),
    [anon_sym_Width] = ACTIONS(73),
    [anon_sym_PlayAlertSound] = ACTIONS(103),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(106),
    [anon_sym_CustomAlertSound] = ACTIONS(109),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(112),
    [anon_sym_DisableDropSound] = ACTIONS(115),
    [anon_sym_EnableDropSound] = ACTIONS(115),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(118),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(118),
    [anon_sym_MinimapIcon] = ACTIONS(121),
    [anon_sym_PlayEffect] = ACTIONS(124),
    [anon_sym_SetBackgroundColor] = ACTIONS(127),
    [anon_sym_SetBorderColor] = ACTIONS(127),
    [anon_sym_SetFontSize] = ACTIONS(130),
    [anon_sym_SetTextColor] = ACTIONS(127),
    [anon_sym_TransfiguredGem] = ACTIONS(133),
    [anon_sym_Continue] = ACTIONS(136),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(139),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_Show] = ACTIONS(142),
    [anon_sym_Hide] = ACTIONS(142),
    [anon_sym_Minimal] = ACTIONS(142),
    [anon_sym_Import] = ACTIONS(142),
    [anon_sym_AlternateQuality] = ACTIONS(142),
    [anon_sym_AnyEnchantment] = ACTIONS(142),
    [anon_sym_ArchnemesisMod] = ACTIONS(142),
    [anon_sym_AreaLevel] = ACTIONS(142),
    [anon_sym_BaseArmour] = ACTIONS(142),
    [anon_sym_BaseDefencePercentile] = ACTIONS(142),
    [anon_sym_BaseEnergyShield] = ACTIONS(142),
    [anon_sym_BaseEvasion] = ACTIONS(142),
    [anon_sym_BaseType] = ACTIONS(142),
    [anon_sym_BaseWard] = ACTIONS(142),
    [anon_sym_BlightedMap] = ACTIONS(142),
    [anon_sym_Class] = ACTIONS(142),
    [anon_sym_Corrupted] = ACTIONS(144),
    [anon_sym_CorruptedMods] = ACTIONS(142),
    [anon_sym_DropLevel] = ACTIONS(142),
    [anon_sym_ElderItem] = ACTIONS(142),
    [anon_sym_ElderMap] = ACTIONS(142),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(142),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(142),
    [anon_sym_FracturedItem] = ACTIONS(142),
    [anon_sym_GemLevel] = ACTIONS(142),
    [anon_sym_GemQualityType] = ACTIONS(142),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(142),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(142),
    [anon_sym_HasEnchantment] = ACTIONS(142),
    [anon_sym_HasExplicitMod] = ACTIONS(142),
    [anon_sym_HasImplicitMod] = ACTIONS(142),
    [anon_sym_HasInfluence] = ACTIONS(142),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(142),
    [anon_sym_Height] = ACTIONS(142),
    [anon_sym_Identified] = ACTIONS(142),
    [anon_sym_ItemLevel] = ACTIONS(142),
    [anon_sym_LinkedSockets] = ACTIONS(142),
    [anon_sym_MapTier] = ACTIONS(142),
    [anon_sym_Mirrored] = ACTIONS(142),
    [anon_sym_Quality] = ACTIONS(142),
    [anon_sym_Rarity] = ACTIONS(142),
    [anon_sym_Replica] = ACTIONS(142),
    [anon_sym_Scourged] = ACTIONS(142),
    [anon_sym_ShapedMap] = ACTIONS(142),
    [anon_sym_ShaperItem] = ACTIONS(142),
    [anon_sym_SocketGroup] = ACTIONS(142),
    [anon_sym_Sockets] = ACTIONS(142),
    [anon_sym_StackSize] = ACTIONS(142),
    [anon_sym_SynthesisedItem] = ACTIONS(142),
    [anon_sym_UberBlightedMap] = ACTIONS(142),
    [anon_sym_Width] = ACTIONS(142),
    [anon_sym_PlayAlertSound] = ACTIONS(144),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(142),
    [anon_sym_CustomAlertSound] = ACTIONS(144),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(142),
    [anon_sym_DisableDropSound] = ACTIONS(144),
    [anon_sym_EnableDropSound] = ACTIONS(144),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(142),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(142),
    [anon_sym_MinimapIcon] = ACTIONS(142),
    [anon_sym_PlayEffect] = ACTIONS(142),
    [anon_sym_SetBackgroundColor] = ACTIONS(142),
    [anon_sym_SetBorderColor] = ACTIONS(142),
    [anon_sym_SetFontSize] = ACTIONS(142),
    [anon_sym_SetTextColor] = ACTIONS(142),
    [anon_sym_TransfiguredGem] = ACTIONS(142),
    [anon_sym_Continue] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(142),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_Show] = ACTIONS(146),
    [anon_sym_Hide] = ACTIONS(146),
    [anon_sym_Minimal] = ACTIONS(146),
    [anon_sym_Import] = ACTIONS(146),
    [anon_sym_AlternateQuality] = ACTIONS(146),
    [anon_sym_AnyEnchantment] = ACTIONS(146),
    [anon_sym_ArchnemesisMod] = ACTIONS(146),
    [anon_sym_AreaLevel] = ACTIONS(146),
    [anon_sym_BaseArmour] = ACTIONS(146),
    [anon_sym_BaseDefencePercentile] = ACTIONS(146),
    [anon_sym_BaseEnergyShield] = ACTIONS(146),
    [anon_sym_BaseEvasion] = ACTIONS(146),
    [anon_sym_BaseType] = ACTIONS(146),
    [anon_sym_BaseWard] = ACTIONS(146),
    [anon_sym_BlightedMap] = ACTIONS(146),
    [anon_sym_Class] = ACTIONS(146),
    [anon_sym_Corrupted] = ACTIONS(148),
    [anon_sym_CorruptedMods] = ACTIONS(146),
    [anon_sym_DropLevel] = ACTIONS(146),
    [anon_sym_ElderItem] = ACTIONS(146),
    [anon_sym_ElderMap] = ACTIONS(146),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(146),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(146),
    [anon_sym_FracturedItem] = ACTIONS(146),
    [anon_sym_GemLevel] = ACTIONS(146),
    [anon_sym_GemQualityType] = ACTIONS(146),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(146),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(146),
    [anon_sym_HasEnchantment] = ACTIONS(146),
    [anon_sym_HasExplicitMod] = ACTIONS(146),
    [anon_sym_HasImplicitMod] = ACTIONS(146),
    [anon_sym_HasInfluence] = ACTIONS(146),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(146),
    [anon_sym_Height] = ACTIONS(146),
    [anon_sym_Identified] = ACTIONS(146),
    [anon_sym_ItemLevel] = ACTIONS(146),
    [anon_sym_LinkedSockets] = ACTIONS(146),
    [anon_sym_MapTier] = ACTIONS(146),
    [anon_sym_Mirrored] = ACTIONS(146),
    [anon_sym_Quality] = ACTIONS(146),
    [anon_sym_Rarity] = ACTIONS(146),
    [anon_sym_Replica] = ACTIONS(146),
    [anon_sym_Scourged] = ACTIONS(146),
    [anon_sym_ShapedMap] = ACTIONS(146),
    [anon_sym_ShaperItem] = ACTIONS(146),
    [anon_sym_SocketGroup] = ACTIONS(146),
    [anon_sym_Sockets] = ACTIONS(146),
    [anon_sym_StackSize] = ACTIONS(146),
    [anon_sym_SynthesisedItem] = ACTIONS(146),
    [anon_sym_UberBlightedMap] = ACTIONS(146),
    [anon_sym_Width] = ACTIONS(146),
    [anon_sym_PlayAlertSound] = ACTIONS(148),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(146),
    [anon_sym_CustomAlertSound] = ACTIONS(148),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(146),
    [anon_sym_DisableDropSound] = ACTIONS(148),
    [anon_sym_EnableDropSound] = ACTIONS(148),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(146),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(146),
    [anon_sym_MinimapIcon] = ACTIONS(146),
    [anon_sym_PlayEffect] = ACTIONS(146),
    [anon_sym_SetBackgroundColor] = ACTIONS(146),
    [anon_sym_SetBorderColor] = ACTIONS(146),
    [anon_sym_SetFontSize] = ACTIONS(146),
    [anon_sym_SetTextColor] = ACTIONS(146),
    [anon_sym_TransfiguredGem] = ACTIONS(146),
    [anon_sym_Continue] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(146),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_Show] = ACTIONS(150),
    [anon_sym_Hide] = ACTIONS(150),
    [anon_sym_Minimal] = ACTIONS(150),
    [anon_sym_Import] = ACTIONS(150),
    [anon_sym_AlternateQuality] = ACTIONS(150),
    [anon_sym_AnyEnchantment] = ACTIONS(150),
    [anon_sym_ArchnemesisMod] = ACTIONS(150),
    [anon_sym_AreaLevel] = ACTIONS(150),
    [anon_sym_BaseArmour] = ACTIONS(150),
    [anon_sym_BaseDefencePercentile] = ACTIONS(150),
    [anon_sym_BaseEnergyShield] = ACTIONS(150),
    [anon_sym_BaseEvasion] = ACTIONS(150),
    [anon_sym_BaseType] = ACTIONS(150),
    [anon_sym_BaseWard] = ACTIONS(150),
    [anon_sym_BlightedMap] = ACTIONS(150),
    [anon_sym_Class] = ACTIONS(150),
    [anon_sym_Corrupted] = ACTIONS(152),
    [anon_sym_CorruptedMods] = ACTIONS(150),
    [anon_sym_DropLevel] = ACTIONS(150),
    [anon_sym_ElderItem] = ACTIONS(150),
    [anon_sym_ElderMap] = ACTIONS(150),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(150),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(150),
    [anon_sym_FracturedItem] = ACTIONS(150),
    [anon_sym_GemLevel] = ACTIONS(150),
    [anon_sym_GemQualityType] = ACTIONS(150),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(150),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(150),
    [anon_sym_HasEnchantment] = ACTIONS(150),
    [anon_sym_HasExplicitMod] = ACTIONS(150),
    [anon_sym_HasImplicitMod] = ACTIONS(150),
    [anon_sym_HasInfluence] = ACTIONS(150),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(150),
    [anon_sym_Height] = ACTIONS(150),
    [anon_sym_Identified] = ACTIONS(150),
    [anon_sym_ItemLevel] = ACTIONS(150),
    [anon_sym_LinkedSockets] = ACTIONS(150),
    [anon_sym_MapTier] = ACTIONS(150),
    [anon_sym_Mirrored] = ACTIONS(150),
    [anon_sym_Quality] = ACTIONS(150),
    [anon_sym_Rarity] = ACTIONS(150),
    [anon_sym_Replica] = ACTIONS(150),
    [anon_sym_Scourged] = ACTIONS(150),
    [anon_sym_ShapedMap] = ACTIONS(150),
    [anon_sym_ShaperItem] = ACTIONS(150),
    [anon_sym_SocketGroup] = ACTIONS(150),
    [anon_sym_Sockets] = ACTIONS(150),
    [anon_sym_StackSize] = ACTIONS(150),
    [anon_sym_SynthesisedItem] = ACTIONS(150),
    [anon_sym_UberBlightedMap] = ACTIONS(150),
    [anon_sym_Width] = ACTIONS(150),
    [anon_sym_PlayAlertSound] = ACTIONS(152),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(150),
    [anon_sym_CustomAlertSound] = ACTIONS(152),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(150),
    [anon_sym_DisableDropSound] = ACTIONS(152),
    [anon_sym_EnableDropSound] = ACTIONS(152),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(150),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(150),
    [anon_sym_MinimapIcon] = ACTIONS(150),
    [anon_sym_PlayEffect] = ACTIONS(150),
    [anon_sym_SetBackgroundColor] = ACTIONS(150),
    [anon_sym_SetBorderColor] = ACTIONS(150),
    [anon_sym_SetFontSize] = ACTIONS(150),
    [anon_sym_SetTextColor] = ACTIONS(150),
    [anon_sym_TransfiguredGem] = ACTIONS(150),
    [anon_sym_Continue] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(150),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_Show] = ACTIONS(154),
    [anon_sym_Hide] = ACTIONS(154),
    [anon_sym_Minimal] = ACTIONS(154),
    [anon_sym_Import] = ACTIONS(154),
    [anon_sym_AlternateQuality] = ACTIONS(154),
    [anon_sym_AnyEnchantment] = ACTIONS(154),
    [anon_sym_ArchnemesisMod] = ACTIONS(154),
    [anon_sym_AreaLevel] = ACTIONS(154),
    [anon_sym_BaseArmour] = ACTIONS(154),
    [anon_sym_BaseDefencePercentile] = ACTIONS(154),
    [anon_sym_BaseEnergyShield] = ACTIONS(154),
    [anon_sym_BaseEvasion] = ACTIONS(154),
    [anon_sym_BaseType] = ACTIONS(154),
    [anon_sym_BaseWard] = ACTIONS(154),
    [anon_sym_BlightedMap] = ACTIONS(154),
    [anon_sym_Class] = ACTIONS(154),
    [anon_sym_Corrupted] = ACTIONS(156),
    [anon_sym_CorruptedMods] = ACTIONS(154),
    [anon_sym_DropLevel] = ACTIONS(154),
    [anon_sym_ElderItem] = ACTIONS(154),
    [anon_sym_ElderMap] = ACTIONS(154),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(154),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(154),
    [anon_sym_FracturedItem] = ACTIONS(154),
    [anon_sym_GemLevel] = ACTIONS(154),
    [anon_sym_GemQualityType] = ACTIONS(154),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(154),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(154),
    [anon_sym_HasEnchantment] = ACTIONS(154),
    [anon_sym_HasExplicitMod] = ACTIONS(154),
    [anon_sym_HasImplicitMod] = ACTIONS(154),
    [anon_sym_HasInfluence] = ACTIONS(154),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(154),
    [anon_sym_Height] = ACTIONS(154),
    [anon_sym_Identified] = ACTIONS(154),
    [anon_sym_ItemLevel] = ACTIONS(154),
    [anon_sym_LinkedSockets] = ACTIONS(154),
    [anon_sym_MapTier] = ACTIONS(154),
    [anon_sym_Mirrored] = ACTIONS(154),
    [anon_sym_Quality] = ACTIONS(154),
    [anon_sym_Rarity] = ACTIONS(154),
    [anon_sym_Replica] = ACTIONS(154),
    [anon_sym_Scourged] = ACTIONS(154),
    [anon_sym_ShapedMap] = ACTIONS(154),
    [anon_sym_ShaperItem] = ACTIONS(154),
    [anon_sym_SocketGroup] = ACTIONS(154),
    [anon_sym_Sockets] = ACTIONS(154),
    [anon_sym_StackSize] = ACTIONS(154),
    [anon_sym_SynthesisedItem] = ACTIONS(154),
    [anon_sym_UberBlightedMap] = ACTIONS(154),
    [anon_sym_Width] = ACTIONS(154),
    [anon_sym_PlayAlertSound] = ACTIONS(156),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(154),
    [anon_sym_CustomAlertSound] = ACTIONS(156),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(154),
    [anon_sym_DisableDropSound] = ACTIONS(156),
    [anon_sym_EnableDropSound] = ACTIONS(156),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(154),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(154),
    [anon_sym_MinimapIcon] = ACTIONS(154),
    [anon_sym_PlayEffect] = ACTIONS(154),
    [anon_sym_SetBackgroundColor] = ACTIONS(154),
    [anon_sym_SetBorderColor] = ACTIONS(154),
    [anon_sym_SetFontSize] = ACTIONS(154),
    [anon_sym_SetTextColor] = ACTIONS(154),
    [anon_sym_TransfiguredGem] = ACTIONS(154),
    [anon_sym_Continue] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(154),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_Show] = ACTIONS(158),
    [anon_sym_Hide] = ACTIONS(158),
    [anon_sym_Minimal] = ACTIONS(158),
    [anon_sym_Import] = ACTIONS(158),
    [anon_sym_AlternateQuality] = ACTIONS(158),
    [anon_sym_AnyEnchantment] = ACTIONS(158),
    [anon_sym_ArchnemesisMod] = ACTIONS(158),
    [anon_sym_AreaLevel] = ACTIONS(158),
    [anon_sym_BaseArmour] = ACTIONS(158),
    [anon_sym_BaseDefencePercentile] = ACTIONS(158),
    [anon_sym_BaseEnergyShield] = ACTIONS(158),
    [anon_sym_BaseEvasion] = ACTIONS(158),
    [anon_sym_BaseType] = ACTIONS(158),
    [anon_sym_BaseWard] = ACTIONS(158),
    [anon_sym_BlightedMap] = ACTIONS(158),
    [anon_sym_Class] = ACTIONS(158),
    [anon_sym_Corrupted] = ACTIONS(160),
    [anon_sym_CorruptedMods] = ACTIONS(158),
    [anon_sym_DropLevel] = ACTIONS(158),
    [anon_sym_ElderItem] = ACTIONS(158),
    [anon_sym_ElderMap] = ACTIONS(158),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(158),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(158),
    [anon_sym_FracturedItem] = ACTIONS(158),
    [anon_sym_GemLevel] = ACTIONS(158),
    [anon_sym_GemQualityType] = ACTIONS(158),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(158),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(158),
    [anon_sym_HasEnchantment] = ACTIONS(158),
    [anon_sym_HasExplicitMod] = ACTIONS(158),
    [anon_sym_HasImplicitMod] = ACTIONS(158),
    [anon_sym_HasInfluence] = ACTIONS(158),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(158),
    [anon_sym_Height] = ACTIONS(158),
    [anon_sym_Identified] = ACTIONS(158),
    [anon_sym_ItemLevel] = ACTIONS(158),
    [anon_sym_LinkedSockets] = ACTIONS(158),
    [anon_sym_MapTier] = ACTIONS(158),
    [anon_sym_Mirrored] = ACTIONS(158),
    [anon_sym_Quality] = ACTIONS(158),
    [anon_sym_Rarity] = ACTIONS(158),
    [anon_sym_Replica] = ACTIONS(158),
    [anon_sym_Scourged] = ACTIONS(158),
    [anon_sym_ShapedMap] = ACTIONS(158),
    [anon_sym_ShaperItem] = ACTIONS(158),
    [anon_sym_SocketGroup] = ACTIONS(158),
    [anon_sym_Sockets] = ACTIONS(158),
    [anon_sym_StackSize] = ACTIONS(158),
    [anon_sym_SynthesisedItem] = ACTIONS(158),
    [anon_sym_UberBlightedMap] = ACTIONS(158),
    [anon_sym_Width] = ACTIONS(158),
    [anon_sym_PlayAlertSound] = ACTIONS(160),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(158),
    [anon_sym_CustomAlertSound] = ACTIONS(160),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(158),
    [anon_sym_DisableDropSound] = ACTIONS(160),
    [anon_sym_EnableDropSound] = ACTIONS(160),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(158),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(158),
    [anon_sym_MinimapIcon] = ACTIONS(158),
    [anon_sym_PlayEffect] = ACTIONS(158),
    [anon_sym_SetBackgroundColor] = ACTIONS(158),
    [anon_sym_SetBorderColor] = ACTIONS(158),
    [anon_sym_SetFontSize] = ACTIONS(158),
    [anon_sym_SetTextColor] = ACTIONS(158),
    [anon_sym_TransfiguredGem] = ACTIONS(158),
    [anon_sym_Continue] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(158),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_Show] = ACTIONS(162),
    [anon_sym_Hide] = ACTIONS(162),
    [anon_sym_Minimal] = ACTIONS(162),
    [anon_sym_Import] = ACTIONS(162),
    [anon_sym_AlternateQuality] = ACTIONS(162),
    [anon_sym_AnyEnchantment] = ACTIONS(162),
    [anon_sym_ArchnemesisMod] = ACTIONS(162),
    [anon_sym_AreaLevel] = ACTIONS(162),
    [anon_sym_BaseArmour] = ACTIONS(162),
    [anon_sym_BaseDefencePercentile] = ACTIONS(162),
    [anon_sym_BaseEnergyShield] = ACTIONS(162),
    [anon_sym_BaseEvasion] = ACTIONS(162),
    [anon_sym_BaseType] = ACTIONS(162),
    [anon_sym_BaseWard] = ACTIONS(162),
    [anon_sym_BlightedMap] = ACTIONS(162),
    [anon_sym_Class] = ACTIONS(162),
    [anon_sym_Corrupted] = ACTIONS(164),
    [anon_sym_CorruptedMods] = ACTIONS(162),
    [anon_sym_DropLevel] = ACTIONS(162),
    [anon_sym_ElderItem] = ACTIONS(162),
    [anon_sym_ElderMap] = ACTIONS(162),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(162),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(162),
    [anon_sym_FracturedItem] = ACTIONS(162),
    [anon_sym_GemLevel] = ACTIONS(162),
    [anon_sym_GemQualityType] = ACTIONS(162),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(162),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(162),
    [anon_sym_HasEnchantment] = ACTIONS(162),
    [anon_sym_HasExplicitMod] = ACTIONS(162),
    [anon_sym_HasImplicitMod] = ACTIONS(162),
    [anon_sym_HasInfluence] = ACTIONS(162),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(162),
    [anon_sym_Height] = ACTIONS(162),
    [anon_sym_Identified] = ACTIONS(162),
    [anon_sym_ItemLevel] = ACTIONS(162),
    [anon_sym_LinkedSockets] = ACTIONS(162),
    [anon_sym_MapTier] = ACTIONS(162),
    [anon_sym_Mirrored] = ACTIONS(162),
    [anon_sym_Quality] = ACTIONS(162),
    [anon_sym_Rarity] = ACTIONS(162),
    [anon_sym_Replica] = ACTIONS(162),
    [anon_sym_Scourged] = ACTIONS(162),
    [anon_sym_ShapedMap] = ACTIONS(162),
    [anon_sym_ShaperItem] = ACTIONS(162),
    [anon_sym_SocketGroup] = ACTIONS(162),
    [anon_sym_Sockets] = ACTIONS(162),
    [anon_sym_StackSize] = ACTIONS(162),
    [anon_sym_SynthesisedItem] = ACTIONS(162),
    [anon_sym_UberBlightedMap] = ACTIONS(162),
    [anon_sym_Width] = ACTIONS(162),
    [anon_sym_PlayAlertSound] = ACTIONS(164),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(162),
    [anon_sym_CustomAlertSound] = ACTIONS(164),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(162),
    [anon_sym_DisableDropSound] = ACTIONS(164),
    [anon_sym_EnableDropSound] = ACTIONS(164),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(162),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(162),
    [anon_sym_MinimapIcon] = ACTIONS(162),
    [anon_sym_PlayEffect] = ACTIONS(162),
    [anon_sym_SetBackgroundColor] = ACTIONS(162),
    [anon_sym_SetBorderColor] = ACTIONS(162),
    [anon_sym_SetFontSize] = ACTIONS(162),
    [anon_sym_SetTextColor] = ACTIONS(162),
    [anon_sym_TransfiguredGem] = ACTIONS(162),
    [anon_sym_Continue] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(162),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [anon_sym_Show] = ACTIONS(166),
    [anon_sym_Hide] = ACTIONS(166),
    [anon_sym_Minimal] = ACTIONS(166),
    [anon_sym_Import] = ACTIONS(166),
    [anon_sym_AlternateQuality] = ACTIONS(166),
    [anon_sym_AnyEnchantment] = ACTIONS(166),
    [anon_sym_ArchnemesisMod] = ACTIONS(166),
    [anon_sym_AreaLevel] = ACTIONS(166),
    [anon_sym_BaseArmour] = ACTIONS(166),
    [anon_sym_BaseDefencePercentile] = ACTIONS(166),
    [anon_sym_BaseEnergyShield] = ACTIONS(166),
    [anon_sym_BaseEvasion] = ACTIONS(166),
    [anon_sym_BaseType] = ACTIONS(166),
    [anon_sym_BaseWard] = ACTIONS(166),
    [anon_sym_BlightedMap] = ACTIONS(166),
    [anon_sym_Class] = ACTIONS(166),
    [anon_sym_Corrupted] = ACTIONS(168),
    [anon_sym_CorruptedMods] = ACTIONS(166),
    [anon_sym_DropLevel] = ACTIONS(166),
    [anon_sym_ElderItem] = ACTIONS(166),
    [anon_sym_ElderMap] = ACTIONS(166),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(166),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(166),
    [anon_sym_FracturedItem] = ACTIONS(166),
    [anon_sym_GemLevel] = ACTIONS(166),
    [anon_sym_GemQualityType] = ACTIONS(166),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(166),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(166),
    [anon_sym_HasEnchantment] = ACTIONS(166),
    [anon_sym_HasExplicitMod] = ACTIONS(166),
    [anon_sym_HasImplicitMod] = ACTIONS(166),
    [anon_sym_HasInfluence] = ACTIONS(166),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(166),
    [anon_sym_Height] = ACTIONS(166),
    [anon_sym_Identified] = ACTIONS(166),
    [anon_sym_ItemLevel] = ACTIONS(166),
    [anon_sym_LinkedSockets] = ACTIONS(166),
    [anon_sym_MapTier] = ACTIONS(166),
    [anon_sym_Mirrored] = ACTIONS(166),
    [anon_sym_Quality] = ACTIONS(166),
    [anon_sym_Rarity] = ACTIONS(166),
    [anon_sym_Replica] = ACTIONS(166),
    [anon_sym_Scourged] = ACTIONS(166),
    [anon_sym_ShapedMap] = ACTIONS(166),
    [anon_sym_ShaperItem] = ACTIONS(166),
    [anon_sym_SocketGroup] = ACTIONS(166),
    [anon_sym_Sockets] = ACTIONS(166),
    [anon_sym_StackSize] = ACTIONS(166),
    [anon_sym_SynthesisedItem] = ACTIONS(166),
    [anon_sym_UberBlightedMap] = ACTIONS(166),
    [anon_sym_Width] = ACTIONS(166),
    [anon_sym_PlayAlertSound] = ACTIONS(168),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(166),
    [anon_sym_CustomAlertSound] = ACTIONS(168),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(166),
    [anon_sym_DisableDropSound] = ACTIONS(168),
    [anon_sym_EnableDropSound] = ACTIONS(168),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(166),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(166),
    [anon_sym_MinimapIcon] = ACTIONS(166),
    [anon_sym_PlayEffect] = ACTIONS(166),
    [anon_sym_SetBackgroundColor] = ACTIONS(166),
    [anon_sym_SetBorderColor] = ACTIONS(166),
    [anon_sym_SetFontSize] = ACTIONS(166),
    [anon_sym_SetTextColor] = ACTIONS(166),
    [anon_sym_TransfiguredGem] = ACTIONS(166),
    [anon_sym_Continue] = ACTIONS(166),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(166),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_Show] = ACTIONS(170),
    [anon_sym_Hide] = ACTIONS(170),
    [anon_sym_Minimal] = ACTIONS(170),
    [anon_sym_Import] = ACTIONS(170),
    [anon_sym_AlternateQuality] = ACTIONS(170),
    [anon_sym_AnyEnchantment] = ACTIONS(170),
    [anon_sym_ArchnemesisMod] = ACTIONS(170),
    [anon_sym_AreaLevel] = ACTIONS(170),
    [anon_sym_BaseArmour] = ACTIONS(170),
    [anon_sym_BaseDefencePercentile] = ACTIONS(170),
    [anon_sym_BaseEnergyShield] = ACTIONS(170),
    [anon_sym_BaseEvasion] = ACTIONS(170),
    [anon_sym_BaseType] = ACTIONS(170),
    [anon_sym_BaseWard] = ACTIONS(170),
    [anon_sym_BlightedMap] = ACTIONS(170),
    [anon_sym_Class] = ACTIONS(170),
    [anon_sym_Corrupted] = ACTIONS(172),
    [anon_sym_CorruptedMods] = ACTIONS(170),
    [anon_sym_DropLevel] = ACTIONS(170),
    [anon_sym_ElderItem] = ACTIONS(170),
    [anon_sym_ElderMap] = ACTIONS(170),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(170),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(170),
    [anon_sym_FracturedItem] = ACTIONS(170),
    [anon_sym_GemLevel] = ACTIONS(170),
    [anon_sym_GemQualityType] = ACTIONS(170),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(170),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(170),
    [anon_sym_HasEnchantment] = ACTIONS(170),
    [anon_sym_HasExplicitMod] = ACTIONS(170),
    [anon_sym_HasImplicitMod] = ACTIONS(170),
    [anon_sym_HasInfluence] = ACTIONS(170),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(170),
    [anon_sym_Height] = ACTIONS(170),
    [anon_sym_Identified] = ACTIONS(170),
    [anon_sym_ItemLevel] = ACTIONS(170),
    [anon_sym_LinkedSockets] = ACTIONS(170),
    [anon_sym_MapTier] = ACTIONS(170),
    [anon_sym_Mirrored] = ACTIONS(170),
    [anon_sym_Quality] = ACTIONS(170),
    [anon_sym_Rarity] = ACTIONS(170),
    [anon_sym_Replica] = ACTIONS(170),
    [anon_sym_Scourged] = ACTIONS(170),
    [anon_sym_ShapedMap] = ACTIONS(170),
    [anon_sym_ShaperItem] = ACTIONS(170),
    [anon_sym_SocketGroup] = ACTIONS(170),
    [anon_sym_Sockets] = ACTIONS(170),
    [anon_sym_StackSize] = ACTIONS(170),
    [anon_sym_SynthesisedItem] = ACTIONS(170),
    [anon_sym_UberBlightedMap] = ACTIONS(170),
    [anon_sym_Width] = ACTIONS(170),
    [anon_sym_PlayAlertSound] = ACTIONS(172),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(170),
    [anon_sym_CustomAlertSound] = ACTIONS(172),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(170),
    [anon_sym_DisableDropSound] = ACTIONS(172),
    [anon_sym_EnableDropSound] = ACTIONS(172),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(170),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(170),
    [anon_sym_MinimapIcon] = ACTIONS(170),
    [anon_sym_PlayEffect] = ACTIONS(170),
    [anon_sym_SetBackgroundColor] = ACTIONS(170),
    [anon_sym_SetBorderColor] = ACTIONS(170),
    [anon_sym_SetFontSize] = ACTIONS(170),
    [anon_sym_SetTextColor] = ACTIONS(170),
    [anon_sym_TransfiguredGem] = ACTIONS(170),
    [anon_sym_Continue] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(170),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [anon_sym_Show] = ACTIONS(174),
    [anon_sym_Hide] = ACTIONS(174),
    [anon_sym_Minimal] = ACTIONS(174),
    [anon_sym_Import] = ACTIONS(174),
    [anon_sym_AlternateQuality] = ACTIONS(174),
    [anon_sym_AnyEnchantment] = ACTIONS(174),
    [anon_sym_ArchnemesisMod] = ACTIONS(174),
    [anon_sym_AreaLevel] = ACTIONS(174),
    [anon_sym_BaseArmour] = ACTIONS(174),
    [anon_sym_BaseDefencePercentile] = ACTIONS(174),
    [anon_sym_BaseEnergyShield] = ACTIONS(174),
    [anon_sym_BaseEvasion] = ACTIONS(174),
    [anon_sym_BaseType] = ACTIONS(174),
    [anon_sym_BaseWard] = ACTIONS(174),
    [anon_sym_BlightedMap] = ACTIONS(174),
    [anon_sym_Class] = ACTIONS(174),
    [anon_sym_Corrupted] = ACTIONS(176),
    [anon_sym_CorruptedMods] = ACTIONS(174),
    [anon_sym_DropLevel] = ACTIONS(174),
    [anon_sym_ElderItem] = ACTIONS(174),
    [anon_sym_ElderMap] = ACTIONS(174),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(174),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(174),
    [anon_sym_FracturedItem] = ACTIONS(174),
    [anon_sym_GemLevel] = ACTIONS(174),
    [anon_sym_GemQualityType] = ACTIONS(174),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(174),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(174),
    [anon_sym_HasEnchantment] = ACTIONS(174),
    [anon_sym_HasExplicitMod] = ACTIONS(174),
    [anon_sym_HasImplicitMod] = ACTIONS(174),
    [anon_sym_HasInfluence] = ACTIONS(174),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(174),
    [anon_sym_Height] = ACTIONS(174),
    [anon_sym_Identified] = ACTIONS(174),
    [anon_sym_ItemLevel] = ACTIONS(174),
    [anon_sym_LinkedSockets] = ACTIONS(174),
    [anon_sym_MapTier] = ACTIONS(174),
    [anon_sym_Mirrored] = ACTIONS(174),
    [anon_sym_Quality] = ACTIONS(174),
    [anon_sym_Rarity] = ACTIONS(174),
    [anon_sym_Replica] = ACTIONS(174),
    [anon_sym_Scourged] = ACTIONS(174),
    [anon_sym_ShapedMap] = ACTIONS(174),
    [anon_sym_ShaperItem] = ACTIONS(174),
    [anon_sym_SocketGroup] = ACTIONS(174),
    [anon_sym_Sockets] = ACTIONS(174),
    [anon_sym_StackSize] = ACTIONS(174),
    [anon_sym_SynthesisedItem] = ACTIONS(174),
    [anon_sym_UberBlightedMap] = ACTIONS(174),
    [anon_sym_Width] = ACTIONS(174),
    [anon_sym_PlayAlertSound] = ACTIONS(176),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(174),
    [anon_sym_CustomAlertSound] = ACTIONS(176),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(174),
    [anon_sym_DisableDropSound] = ACTIONS(176),
    [anon_sym_EnableDropSound] = ACTIONS(176),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(174),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(174),
    [anon_sym_MinimapIcon] = ACTIONS(174),
    [anon_sym_PlayEffect] = ACTIONS(174),
    [anon_sym_SetBackgroundColor] = ACTIONS(174),
    [anon_sym_SetBorderColor] = ACTIONS(174),
    [anon_sym_SetFontSize] = ACTIONS(174),
    [anon_sym_SetTextColor] = ACTIONS(174),
    [anon_sym_TransfiguredGem] = ACTIONS(174),
    [anon_sym_Continue] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(174),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_Show] = ACTIONS(158),
    [anon_sym_Hide] = ACTIONS(158),
    [anon_sym_Minimal] = ACTIONS(158),
    [anon_sym_Import] = ACTIONS(158),
    [anon_sym_AlternateQuality] = ACTIONS(158),
    [anon_sym_AnyEnchantment] = ACTIONS(158),
    [anon_sym_ArchnemesisMod] = ACTIONS(158),
    [anon_sym_AreaLevel] = ACTIONS(158),
    [anon_sym_BaseArmour] = ACTIONS(158),
    [anon_sym_BaseDefencePercentile] = ACTIONS(158),
    [anon_sym_BaseEnergyShield] = ACTIONS(158),
    [anon_sym_BaseEvasion] = ACTIONS(158),
    [anon_sym_BaseType] = ACTIONS(158),
    [anon_sym_BaseWard] = ACTIONS(158),
    [anon_sym_BlightedMap] = ACTIONS(158),
    [anon_sym_Class] = ACTIONS(158),
    [anon_sym_Corrupted] = ACTIONS(160),
    [anon_sym_CorruptedMods] = ACTIONS(158),
    [anon_sym_DropLevel] = ACTIONS(158),
    [anon_sym_ElderItem] = ACTIONS(158),
    [anon_sym_ElderMap] = ACTIONS(158),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(158),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(158),
    [anon_sym_FracturedItem] = ACTIONS(158),
    [anon_sym_GemLevel] = ACTIONS(158),
    [anon_sym_GemQualityType] = ACTIONS(158),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(158),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(158),
    [anon_sym_HasEnchantment] = ACTIONS(158),
    [anon_sym_HasExplicitMod] = ACTIONS(158),
    [anon_sym_HasImplicitMod] = ACTIONS(158),
    [anon_sym_HasInfluence] = ACTIONS(158),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(158),
    [anon_sym_Height] = ACTIONS(158),
    [anon_sym_Identified] = ACTIONS(158),
    [anon_sym_ItemLevel] = ACTIONS(158),
    [anon_sym_LinkedSockets] = ACTIONS(158),
    [anon_sym_MapTier] = ACTIONS(158),
    [anon_sym_Mirrored] = ACTIONS(158),
    [anon_sym_Quality] = ACTIONS(158),
    [anon_sym_Rarity] = ACTIONS(158),
    [anon_sym_Replica] = ACTIONS(158),
    [anon_sym_Scourged] = ACTIONS(158),
    [anon_sym_ShapedMap] = ACTIONS(158),
    [anon_sym_ShaperItem] = ACTIONS(158),
    [anon_sym_SocketGroup] = ACTIONS(158),
    [anon_sym_Sockets] = ACTIONS(158),
    [anon_sym_StackSize] = ACTIONS(158),
    [anon_sym_SynthesisedItem] = ACTIONS(158),
    [anon_sym_UberBlightedMap] = ACTIONS(158),
    [anon_sym_Width] = ACTIONS(158),
    [anon_sym_PlayAlertSound] = ACTIONS(160),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(158),
    [anon_sym_CustomAlertSound] = ACTIONS(160),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(158),
    [anon_sym_DisableDropSound] = ACTIONS(160),
    [anon_sym_EnableDropSound] = ACTIONS(160),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(158),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(158),
    [anon_sym_MinimapIcon] = ACTIONS(158),
    [anon_sym_PlayEffect] = ACTIONS(158),
    [anon_sym_SetBackgroundColor] = ACTIONS(158),
    [anon_sym_SetBorderColor] = ACTIONS(158),
    [anon_sym_SetFontSize] = ACTIONS(158),
    [anon_sym_SetTextColor] = ACTIONS(158),
    [anon_sym_TransfiguredGem] = ACTIONS(158),
    [anon_sym_Continue] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(158),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(178),
    [anon_sym_Show] = ACTIONS(178),
    [anon_sym_Hide] = ACTIONS(178),
    [anon_sym_Minimal] = ACTIONS(178),
    [anon_sym_Import] = ACTIONS(178),
    [anon_sym_AlternateQuality] = ACTIONS(178),
    [anon_sym_AnyEnchantment] = ACTIONS(178),
    [anon_sym_ArchnemesisMod] = ACTIONS(178),
    [anon_sym_AreaLevel] = ACTIONS(178),
    [anon_sym_BaseArmour] = ACTIONS(178),
    [anon_sym_BaseDefencePercentile] = ACTIONS(178),
    [anon_sym_BaseEnergyShield] = ACTIONS(178),
    [anon_sym_BaseEvasion] = ACTIONS(178),
    [anon_sym_BaseType] = ACTIONS(178),
    [anon_sym_BaseWard] = ACTIONS(178),
    [anon_sym_BlightedMap] = ACTIONS(178),
    [anon_sym_Class] = ACTIONS(178),
    [anon_sym_Corrupted] = ACTIONS(180),
    [anon_sym_CorruptedMods] = ACTIONS(178),
    [anon_sym_DropLevel] = ACTIONS(178),
    [anon_sym_ElderItem] = ACTIONS(178),
    [anon_sym_ElderMap] = ACTIONS(178),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(178),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(178),
    [anon_sym_FracturedItem] = ACTIONS(178),
    [anon_sym_GemLevel] = ACTIONS(178),
    [anon_sym_GemQualityType] = ACTIONS(178),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(178),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(178),
    [anon_sym_HasEnchantment] = ACTIONS(178),
    [anon_sym_HasExplicitMod] = ACTIONS(178),
    [anon_sym_HasImplicitMod] = ACTIONS(178),
    [anon_sym_HasInfluence] = ACTIONS(178),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(178),
    [anon_sym_Height] = ACTIONS(178),
    [anon_sym_Identified] = ACTIONS(178),
    [anon_sym_ItemLevel] = ACTIONS(178),
    [anon_sym_LinkedSockets] = ACTIONS(178),
    [anon_sym_MapTier] = ACTIONS(178),
    [anon_sym_Mirrored] = ACTIONS(178),
    [anon_sym_Quality] = ACTIONS(178),
    [anon_sym_Rarity] = ACTIONS(178),
    [anon_sym_Replica] = ACTIONS(178),
    [anon_sym_Scourged] = ACTIONS(178),
    [anon_sym_ShapedMap] = ACTIONS(178),
    [anon_sym_ShaperItem] = ACTIONS(178),
    [anon_sym_SocketGroup] = ACTIONS(178),
    [anon_sym_Sockets] = ACTIONS(178),
    [anon_sym_StackSize] = ACTIONS(178),
    [anon_sym_SynthesisedItem] = ACTIONS(178),
    [anon_sym_UberBlightedMap] = ACTIONS(178),
    [anon_sym_Width] = ACTIONS(178),
    [anon_sym_PlayAlertSound] = ACTIONS(180),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(178),
    [anon_sym_CustomAlertSound] = ACTIONS(180),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(178),
    [anon_sym_DisableDropSound] = ACTIONS(180),
    [anon_sym_EnableDropSound] = ACTIONS(180),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(178),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(178),
    [anon_sym_MinimapIcon] = ACTIONS(178),
    [anon_sym_PlayEffect] = ACTIONS(178),
    [anon_sym_SetBackgroundColor] = ACTIONS(178),
    [anon_sym_SetBorderColor] = ACTIONS(178),
    [anon_sym_SetFontSize] = ACTIONS(178),
    [anon_sym_SetTextColor] = ACTIONS(178),
    [anon_sym_TransfiguredGem] = ACTIONS(178),
    [anon_sym_Continue] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(178),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [anon_sym_Show] = ACTIONS(182),
    [anon_sym_Hide] = ACTIONS(182),
    [anon_sym_Minimal] = ACTIONS(182),
    [anon_sym_Import] = ACTIONS(182),
    [anon_sym_AlternateQuality] = ACTIONS(182),
    [anon_sym_AnyEnchantment] = ACTIONS(182),
    [anon_sym_ArchnemesisMod] = ACTIONS(182),
    [anon_sym_AreaLevel] = ACTIONS(182),
    [anon_sym_BaseArmour] = ACTIONS(182),
    [anon_sym_BaseDefencePercentile] = ACTIONS(182),
    [anon_sym_BaseEnergyShield] = ACTIONS(182),
    [anon_sym_BaseEvasion] = ACTIONS(182),
    [anon_sym_BaseType] = ACTIONS(182),
    [anon_sym_BaseWard] = ACTIONS(182),
    [anon_sym_BlightedMap] = ACTIONS(182),
    [anon_sym_Class] = ACTIONS(182),
    [anon_sym_Corrupted] = ACTIONS(184),
    [anon_sym_CorruptedMods] = ACTIONS(182),
    [anon_sym_DropLevel] = ACTIONS(182),
    [anon_sym_ElderItem] = ACTIONS(182),
    [anon_sym_ElderMap] = ACTIONS(182),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(182),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(182),
    [anon_sym_FracturedItem] = ACTIONS(182),
    [anon_sym_GemLevel] = ACTIONS(182),
    [anon_sym_GemQualityType] = ACTIONS(182),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(182),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(182),
    [anon_sym_HasEnchantment] = ACTIONS(182),
    [anon_sym_HasExplicitMod] = ACTIONS(182),
    [anon_sym_HasImplicitMod] = ACTIONS(182),
    [anon_sym_HasInfluence] = ACTIONS(182),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(182),
    [anon_sym_Height] = ACTIONS(182),
    [anon_sym_Identified] = ACTIONS(182),
    [anon_sym_ItemLevel] = ACTIONS(182),
    [anon_sym_LinkedSockets] = ACTIONS(182),
    [anon_sym_MapTier] = ACTIONS(182),
    [anon_sym_Mirrored] = ACTIONS(182),
    [anon_sym_Quality] = ACTIONS(182),
    [anon_sym_Rarity] = ACTIONS(182),
    [anon_sym_Replica] = ACTIONS(182),
    [anon_sym_Scourged] = ACTIONS(182),
    [anon_sym_ShapedMap] = ACTIONS(182),
    [anon_sym_ShaperItem] = ACTIONS(182),
    [anon_sym_SocketGroup] = ACTIONS(182),
    [anon_sym_Sockets] = ACTIONS(182),
    [anon_sym_StackSize] = ACTIONS(182),
    [anon_sym_SynthesisedItem] = ACTIONS(182),
    [anon_sym_UberBlightedMap] = ACTIONS(182),
    [anon_sym_Width] = ACTIONS(182),
    [anon_sym_PlayAlertSound] = ACTIONS(184),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(182),
    [anon_sym_CustomAlertSound] = ACTIONS(184),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(182),
    [anon_sym_DisableDropSound] = ACTIONS(184),
    [anon_sym_EnableDropSound] = ACTIONS(184),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(182),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(182),
    [anon_sym_MinimapIcon] = ACTIONS(182),
    [anon_sym_PlayEffect] = ACTIONS(182),
    [anon_sym_SetBackgroundColor] = ACTIONS(182),
    [anon_sym_SetBorderColor] = ACTIONS(182),
    [anon_sym_SetFontSize] = ACTIONS(182),
    [anon_sym_SetTextColor] = ACTIONS(182),
    [anon_sym_TransfiguredGem] = ACTIONS(182),
    [anon_sym_Continue] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(182),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [anon_sym_Show] = ACTIONS(186),
    [anon_sym_Hide] = ACTIONS(186),
    [anon_sym_Minimal] = ACTIONS(186),
    [anon_sym_Import] = ACTIONS(186),
    [anon_sym_AlternateQuality] = ACTIONS(186),
    [anon_sym_AnyEnchantment] = ACTIONS(186),
    [anon_sym_ArchnemesisMod] = ACTIONS(186),
    [anon_sym_AreaLevel] = ACTIONS(186),
    [anon_sym_BaseArmour] = ACTIONS(186),
    [anon_sym_BaseDefencePercentile] = ACTIONS(186),
    [anon_sym_BaseEnergyShield] = ACTIONS(186),
    [anon_sym_BaseEvasion] = ACTIONS(186),
    [anon_sym_BaseType] = ACTIONS(186),
    [anon_sym_BaseWard] = ACTIONS(186),
    [anon_sym_BlightedMap] = ACTIONS(186),
    [anon_sym_Class] = ACTIONS(186),
    [anon_sym_Corrupted] = ACTIONS(188),
    [anon_sym_CorruptedMods] = ACTIONS(186),
    [anon_sym_DropLevel] = ACTIONS(186),
    [anon_sym_ElderItem] = ACTIONS(186),
    [anon_sym_ElderMap] = ACTIONS(186),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(186),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(186),
    [anon_sym_FracturedItem] = ACTIONS(186),
    [anon_sym_GemLevel] = ACTIONS(186),
    [anon_sym_GemQualityType] = ACTIONS(186),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(186),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(186),
    [anon_sym_HasEnchantment] = ACTIONS(186),
    [anon_sym_HasExplicitMod] = ACTIONS(186),
    [anon_sym_HasImplicitMod] = ACTIONS(186),
    [anon_sym_HasInfluence] = ACTIONS(186),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(186),
    [anon_sym_Height] = ACTIONS(186),
    [anon_sym_Identified] = ACTIONS(186),
    [anon_sym_ItemLevel] = ACTIONS(186),
    [anon_sym_LinkedSockets] = ACTIONS(186),
    [anon_sym_MapTier] = ACTIONS(186),
    [anon_sym_Mirrored] = ACTIONS(186),
    [anon_sym_Quality] = ACTIONS(186),
    [anon_sym_Rarity] = ACTIONS(186),
    [anon_sym_Replica] = ACTIONS(186),
    [anon_sym_Scourged] = ACTIONS(186),
    [anon_sym_ShapedMap] = ACTIONS(186),
    [anon_sym_ShaperItem] = ACTIONS(186),
    [anon_sym_SocketGroup] = ACTIONS(186),
    [anon_sym_Sockets] = ACTIONS(186),
    [anon_sym_StackSize] = ACTIONS(186),
    [anon_sym_SynthesisedItem] = ACTIONS(186),
    [anon_sym_UberBlightedMap] = ACTIONS(186),
    [anon_sym_Width] = ACTIONS(186),
    [anon_sym_PlayAlertSound] = ACTIONS(188),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(186),
    [anon_sym_CustomAlertSound] = ACTIONS(188),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(186),
    [anon_sym_DisableDropSound] = ACTIONS(188),
    [anon_sym_EnableDropSound] = ACTIONS(188),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(186),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(186),
    [anon_sym_MinimapIcon] = ACTIONS(186),
    [anon_sym_PlayEffect] = ACTIONS(186),
    [anon_sym_SetBackgroundColor] = ACTIONS(186),
    [anon_sym_SetBorderColor] = ACTIONS(186),
    [anon_sym_SetFontSize] = ACTIONS(186),
    [anon_sym_SetTextColor] = ACTIONS(186),
    [anon_sym_TransfiguredGem] = ACTIONS(186),
    [anon_sym_Continue] = ACTIONS(186),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(186),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(190),
    [anon_sym_Show] = ACTIONS(190),
    [anon_sym_Hide] = ACTIONS(190),
    [anon_sym_Minimal] = ACTIONS(190),
    [anon_sym_Import] = ACTIONS(190),
    [anon_sym_AlternateQuality] = ACTIONS(190),
    [anon_sym_AnyEnchantment] = ACTIONS(190),
    [anon_sym_ArchnemesisMod] = ACTIONS(190),
    [anon_sym_AreaLevel] = ACTIONS(190),
    [anon_sym_BaseArmour] = ACTIONS(190),
    [anon_sym_BaseDefencePercentile] = ACTIONS(190),
    [anon_sym_BaseEnergyShield] = ACTIONS(190),
    [anon_sym_BaseEvasion] = ACTIONS(190),
    [anon_sym_BaseType] = ACTIONS(190),
    [anon_sym_BaseWard] = ACTIONS(190),
    [anon_sym_BlightedMap] = ACTIONS(190),
    [anon_sym_Class] = ACTIONS(190),
    [anon_sym_Corrupted] = ACTIONS(192),
    [anon_sym_CorruptedMods] = ACTIONS(190),
    [anon_sym_DropLevel] = ACTIONS(190),
    [anon_sym_ElderItem] = ACTIONS(190),
    [anon_sym_ElderMap] = ACTIONS(190),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(190),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(190),
    [anon_sym_FracturedItem] = ACTIONS(190),
    [anon_sym_GemLevel] = ACTIONS(190),
    [anon_sym_GemQualityType] = ACTIONS(190),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(190),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(190),
    [anon_sym_HasEnchantment] = ACTIONS(190),
    [anon_sym_HasExplicitMod] = ACTIONS(190),
    [anon_sym_HasImplicitMod] = ACTIONS(190),
    [anon_sym_HasInfluence] = ACTIONS(190),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(190),
    [anon_sym_Height] = ACTIONS(190),
    [anon_sym_Identified] = ACTIONS(190),
    [anon_sym_ItemLevel] = ACTIONS(190),
    [anon_sym_LinkedSockets] = ACTIONS(190),
    [anon_sym_MapTier] = ACTIONS(190),
    [anon_sym_Mirrored] = ACTIONS(190),
    [anon_sym_Quality] = ACTIONS(190),
    [anon_sym_Rarity] = ACTIONS(190),
    [anon_sym_Replica] = ACTIONS(190),
    [anon_sym_Scourged] = ACTIONS(190),
    [anon_sym_ShapedMap] = ACTIONS(190),
    [anon_sym_ShaperItem] = ACTIONS(190),
    [anon_sym_SocketGroup] = ACTIONS(190),
    [anon_sym_Sockets] = ACTIONS(190),
    [anon_sym_StackSize] = ACTIONS(190),
    [anon_sym_SynthesisedItem] = ACTIONS(190),
    [anon_sym_UberBlightedMap] = ACTIONS(190),
    [anon_sym_Width] = ACTIONS(190),
    [anon_sym_PlayAlertSound] = ACTIONS(192),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(190),
    [anon_sym_CustomAlertSound] = ACTIONS(192),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(190),
    [anon_sym_DisableDropSound] = ACTIONS(192),
    [anon_sym_EnableDropSound] = ACTIONS(192),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(190),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(190),
    [anon_sym_MinimapIcon] = ACTIONS(190),
    [anon_sym_PlayEffect] = ACTIONS(190),
    [anon_sym_SetBackgroundColor] = ACTIONS(190),
    [anon_sym_SetBorderColor] = ACTIONS(190),
    [anon_sym_SetFontSize] = ACTIONS(190),
    [anon_sym_SetTextColor] = ACTIONS(190),
    [anon_sym_TransfiguredGem] = ACTIONS(190),
    [anon_sym_Continue] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(190),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [anon_sym_Show] = ACTIONS(194),
    [anon_sym_Hide] = ACTIONS(194),
    [anon_sym_Minimal] = ACTIONS(194),
    [anon_sym_Import] = ACTIONS(194),
    [anon_sym_AlternateQuality] = ACTIONS(194),
    [anon_sym_AnyEnchantment] = ACTIONS(194),
    [anon_sym_ArchnemesisMod] = ACTIONS(194),
    [anon_sym_AreaLevel] = ACTIONS(194),
    [anon_sym_BaseArmour] = ACTIONS(194),
    [anon_sym_BaseDefencePercentile] = ACTIONS(194),
    [anon_sym_BaseEnergyShield] = ACTIONS(194),
    [anon_sym_BaseEvasion] = ACTIONS(194),
    [anon_sym_BaseType] = ACTIONS(194),
    [anon_sym_BaseWard] = ACTIONS(194),
    [anon_sym_BlightedMap] = ACTIONS(194),
    [anon_sym_Class] = ACTIONS(194),
    [anon_sym_Corrupted] = ACTIONS(196),
    [anon_sym_CorruptedMods] = ACTIONS(194),
    [anon_sym_DropLevel] = ACTIONS(194),
    [anon_sym_ElderItem] = ACTIONS(194),
    [anon_sym_ElderMap] = ACTIONS(194),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(194),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(194),
    [anon_sym_FracturedItem] = ACTIONS(194),
    [anon_sym_GemLevel] = ACTIONS(194),
    [anon_sym_GemQualityType] = ACTIONS(194),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(194),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(194),
    [anon_sym_HasEnchantment] = ACTIONS(194),
    [anon_sym_HasExplicitMod] = ACTIONS(194),
    [anon_sym_HasImplicitMod] = ACTIONS(194),
    [anon_sym_HasInfluence] = ACTIONS(194),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(194),
    [anon_sym_Height] = ACTIONS(194),
    [anon_sym_Identified] = ACTIONS(194),
    [anon_sym_ItemLevel] = ACTIONS(194),
    [anon_sym_LinkedSockets] = ACTIONS(194),
    [anon_sym_MapTier] = ACTIONS(194),
    [anon_sym_Mirrored] = ACTIONS(194),
    [anon_sym_Quality] = ACTIONS(194),
    [anon_sym_Rarity] = ACTIONS(194),
    [anon_sym_Replica] = ACTIONS(194),
    [anon_sym_Scourged] = ACTIONS(194),
    [anon_sym_ShapedMap] = ACTIONS(194),
    [anon_sym_ShaperItem] = ACTIONS(194),
    [anon_sym_SocketGroup] = ACTIONS(194),
    [anon_sym_Sockets] = ACTIONS(194),
    [anon_sym_StackSize] = ACTIONS(194),
    [anon_sym_SynthesisedItem] = ACTIONS(194),
    [anon_sym_UberBlightedMap] = ACTIONS(194),
    [anon_sym_Width] = ACTIONS(194),
    [anon_sym_PlayAlertSound] = ACTIONS(196),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(194),
    [anon_sym_CustomAlertSound] = ACTIONS(196),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(194),
    [anon_sym_DisableDropSound] = ACTIONS(196),
    [anon_sym_EnableDropSound] = ACTIONS(196),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(194),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(194),
    [anon_sym_MinimapIcon] = ACTIONS(194),
    [anon_sym_PlayEffect] = ACTIONS(194),
    [anon_sym_SetBackgroundColor] = ACTIONS(194),
    [anon_sym_SetBorderColor] = ACTIONS(194),
    [anon_sym_SetFontSize] = ACTIONS(194),
    [anon_sym_SetTextColor] = ACTIONS(194),
    [anon_sym_TransfiguredGem] = ACTIONS(194),
    [anon_sym_Continue] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(194),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(198),
    [anon_sym_Show] = ACTIONS(198),
    [anon_sym_Hide] = ACTIONS(198),
    [anon_sym_Minimal] = ACTIONS(198),
    [anon_sym_Import] = ACTIONS(198),
    [anon_sym_AlternateQuality] = ACTIONS(198),
    [anon_sym_AnyEnchantment] = ACTIONS(198),
    [anon_sym_ArchnemesisMod] = ACTIONS(198),
    [anon_sym_AreaLevel] = ACTIONS(198),
    [anon_sym_BaseArmour] = ACTIONS(198),
    [anon_sym_BaseDefencePercentile] = ACTIONS(198),
    [anon_sym_BaseEnergyShield] = ACTIONS(198),
    [anon_sym_BaseEvasion] = ACTIONS(198),
    [anon_sym_BaseType] = ACTIONS(198),
    [anon_sym_BaseWard] = ACTIONS(198),
    [anon_sym_BlightedMap] = ACTIONS(198),
    [anon_sym_Class] = ACTIONS(198),
    [anon_sym_Corrupted] = ACTIONS(200),
    [anon_sym_CorruptedMods] = ACTIONS(198),
    [anon_sym_DropLevel] = ACTIONS(198),
    [anon_sym_ElderItem] = ACTIONS(198),
    [anon_sym_ElderMap] = ACTIONS(198),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(198),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(198),
    [anon_sym_FracturedItem] = ACTIONS(198),
    [anon_sym_GemLevel] = ACTIONS(198),
    [anon_sym_GemQualityType] = ACTIONS(198),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(198),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(198),
    [anon_sym_HasEnchantment] = ACTIONS(198),
    [anon_sym_HasExplicitMod] = ACTIONS(198),
    [anon_sym_HasImplicitMod] = ACTIONS(198),
    [anon_sym_HasInfluence] = ACTIONS(198),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(198),
    [anon_sym_Height] = ACTIONS(198),
    [anon_sym_Identified] = ACTIONS(198),
    [anon_sym_ItemLevel] = ACTIONS(198),
    [anon_sym_LinkedSockets] = ACTIONS(198),
    [anon_sym_MapTier] = ACTIONS(198),
    [anon_sym_Mirrored] = ACTIONS(198),
    [anon_sym_Quality] = ACTIONS(198),
    [anon_sym_Rarity] = ACTIONS(198),
    [anon_sym_Replica] = ACTIONS(198),
    [anon_sym_Scourged] = ACTIONS(198),
    [anon_sym_ShapedMap] = ACTIONS(198),
    [anon_sym_ShaperItem] = ACTIONS(198),
    [anon_sym_SocketGroup] = ACTIONS(198),
    [anon_sym_Sockets] = ACTIONS(198),
    [anon_sym_StackSize] = ACTIONS(198),
    [anon_sym_SynthesisedItem] = ACTIONS(198),
    [anon_sym_UberBlightedMap] = ACTIONS(198),
    [anon_sym_Width] = ACTIONS(198),
    [anon_sym_PlayAlertSound] = ACTIONS(200),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(198),
    [anon_sym_CustomAlertSound] = ACTIONS(200),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(198),
    [anon_sym_DisableDropSound] = ACTIONS(200),
    [anon_sym_EnableDropSound] = ACTIONS(200),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(198),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(198),
    [anon_sym_MinimapIcon] = ACTIONS(198),
    [anon_sym_PlayEffect] = ACTIONS(198),
    [anon_sym_SetBackgroundColor] = ACTIONS(198),
    [anon_sym_SetBorderColor] = ACTIONS(198),
    [anon_sym_SetFontSize] = ACTIONS(198),
    [anon_sym_SetTextColor] = ACTIONS(198),
    [anon_sym_TransfiguredGem] = ACTIONS(198),
    [anon_sym_Continue] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(198),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(202),
    [anon_sym_Show] = ACTIONS(202),
    [anon_sym_Hide] = ACTIONS(202),
    [anon_sym_Minimal] = ACTIONS(202),
    [anon_sym_Import] = ACTIONS(202),
    [anon_sym_AlternateQuality] = ACTIONS(202),
    [anon_sym_AnyEnchantment] = ACTIONS(202),
    [anon_sym_ArchnemesisMod] = ACTIONS(202),
    [anon_sym_AreaLevel] = ACTIONS(202),
    [anon_sym_BaseArmour] = ACTIONS(202),
    [anon_sym_BaseDefencePercentile] = ACTIONS(202),
    [anon_sym_BaseEnergyShield] = ACTIONS(202),
    [anon_sym_BaseEvasion] = ACTIONS(202),
    [anon_sym_BaseType] = ACTIONS(202),
    [anon_sym_BaseWard] = ACTIONS(202),
    [anon_sym_BlightedMap] = ACTIONS(202),
    [anon_sym_Class] = ACTIONS(202),
    [anon_sym_Corrupted] = ACTIONS(204),
    [anon_sym_CorruptedMods] = ACTIONS(202),
    [anon_sym_DropLevel] = ACTIONS(202),
    [anon_sym_ElderItem] = ACTIONS(202),
    [anon_sym_ElderMap] = ACTIONS(202),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(202),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(202),
    [anon_sym_FracturedItem] = ACTIONS(202),
    [anon_sym_GemLevel] = ACTIONS(202),
    [anon_sym_GemQualityType] = ACTIONS(202),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(202),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(202),
    [anon_sym_HasEnchantment] = ACTIONS(202),
    [anon_sym_HasExplicitMod] = ACTIONS(202),
    [anon_sym_HasImplicitMod] = ACTIONS(202),
    [anon_sym_HasInfluence] = ACTIONS(202),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(202),
    [anon_sym_Height] = ACTIONS(202),
    [anon_sym_Identified] = ACTIONS(202),
    [anon_sym_ItemLevel] = ACTIONS(202),
    [anon_sym_LinkedSockets] = ACTIONS(202),
    [anon_sym_MapTier] = ACTIONS(202),
    [anon_sym_Mirrored] = ACTIONS(202),
    [anon_sym_Quality] = ACTIONS(202),
    [anon_sym_Rarity] = ACTIONS(202),
    [anon_sym_Replica] = ACTIONS(202),
    [anon_sym_Scourged] = ACTIONS(202),
    [anon_sym_ShapedMap] = ACTIONS(202),
    [anon_sym_ShaperItem] = ACTIONS(202),
    [anon_sym_SocketGroup] = ACTIONS(202),
    [anon_sym_Sockets] = ACTIONS(202),
    [anon_sym_StackSize] = ACTIONS(202),
    [anon_sym_SynthesisedItem] = ACTIONS(202),
    [anon_sym_UberBlightedMap] = ACTIONS(202),
    [anon_sym_Width] = ACTIONS(202),
    [anon_sym_PlayAlertSound] = ACTIONS(204),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(202),
    [anon_sym_CustomAlertSound] = ACTIONS(204),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(202),
    [anon_sym_DisableDropSound] = ACTIONS(204),
    [anon_sym_EnableDropSound] = ACTIONS(204),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(202),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(202),
    [anon_sym_MinimapIcon] = ACTIONS(202),
    [anon_sym_PlayEffect] = ACTIONS(202),
    [anon_sym_SetBackgroundColor] = ACTIONS(202),
    [anon_sym_SetBorderColor] = ACTIONS(202),
    [anon_sym_SetFontSize] = ACTIONS(202),
    [anon_sym_SetTextColor] = ACTIONS(202),
    [anon_sym_TransfiguredGem] = ACTIONS(202),
    [anon_sym_Continue] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(202),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(206),
    [anon_sym_Show] = ACTIONS(206),
    [anon_sym_Hide] = ACTIONS(206),
    [anon_sym_Minimal] = ACTIONS(206),
    [anon_sym_Import] = ACTIONS(206),
    [anon_sym_AlternateQuality] = ACTIONS(206),
    [anon_sym_AnyEnchantment] = ACTIONS(206),
    [anon_sym_ArchnemesisMod] = ACTIONS(206),
    [anon_sym_AreaLevel] = ACTIONS(206),
    [anon_sym_BaseArmour] = ACTIONS(206),
    [anon_sym_BaseDefencePercentile] = ACTIONS(206),
    [anon_sym_BaseEnergyShield] = ACTIONS(206),
    [anon_sym_BaseEvasion] = ACTIONS(206),
    [anon_sym_BaseType] = ACTIONS(206),
    [anon_sym_BaseWard] = ACTIONS(206),
    [anon_sym_BlightedMap] = ACTIONS(206),
    [anon_sym_Class] = ACTIONS(206),
    [anon_sym_Corrupted] = ACTIONS(208),
    [anon_sym_CorruptedMods] = ACTIONS(206),
    [anon_sym_DropLevel] = ACTIONS(206),
    [anon_sym_ElderItem] = ACTIONS(206),
    [anon_sym_ElderMap] = ACTIONS(206),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(206),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(206),
    [anon_sym_FracturedItem] = ACTIONS(206),
    [anon_sym_GemLevel] = ACTIONS(206),
    [anon_sym_GemQualityType] = ACTIONS(206),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(206),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(206),
    [anon_sym_HasEnchantment] = ACTIONS(206),
    [anon_sym_HasExplicitMod] = ACTIONS(206),
    [anon_sym_HasImplicitMod] = ACTIONS(206),
    [anon_sym_HasInfluence] = ACTIONS(206),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(206),
    [anon_sym_Height] = ACTIONS(206),
    [anon_sym_Identified] = ACTIONS(206),
    [anon_sym_ItemLevel] = ACTIONS(206),
    [anon_sym_LinkedSockets] = ACTIONS(206),
    [anon_sym_MapTier] = ACTIONS(206),
    [anon_sym_Mirrored] = ACTIONS(206),
    [anon_sym_Quality] = ACTIONS(206),
    [anon_sym_Rarity] = ACTIONS(206),
    [anon_sym_Replica] = ACTIONS(206),
    [anon_sym_Scourged] = ACTIONS(206),
    [anon_sym_ShapedMap] = ACTIONS(206),
    [anon_sym_ShaperItem] = ACTIONS(206),
    [anon_sym_SocketGroup] = ACTIONS(206),
    [anon_sym_Sockets] = ACTIONS(206),
    [anon_sym_StackSize] = ACTIONS(206),
    [anon_sym_SynthesisedItem] = ACTIONS(206),
    [anon_sym_UberBlightedMap] = ACTIONS(206),
    [anon_sym_Width] = ACTIONS(206),
    [anon_sym_PlayAlertSound] = ACTIONS(208),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(206),
    [anon_sym_CustomAlertSound] = ACTIONS(208),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(206),
    [anon_sym_DisableDropSound] = ACTIONS(208),
    [anon_sym_EnableDropSound] = ACTIONS(208),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(206),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(206),
    [anon_sym_MinimapIcon] = ACTIONS(206),
    [anon_sym_PlayEffect] = ACTIONS(206),
    [anon_sym_SetBackgroundColor] = ACTIONS(206),
    [anon_sym_SetBorderColor] = ACTIONS(206),
    [anon_sym_SetFontSize] = ACTIONS(206),
    [anon_sym_SetTextColor] = ACTIONS(206),
    [anon_sym_TransfiguredGem] = ACTIONS(206),
    [anon_sym_Continue] = ACTIONS(206),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(206),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(210),
    [anon_sym_Show] = ACTIONS(210),
    [anon_sym_Hide] = ACTIONS(210),
    [anon_sym_Minimal] = ACTIONS(210),
    [anon_sym_Import] = ACTIONS(210),
    [anon_sym_AlternateQuality] = ACTIONS(210),
    [anon_sym_AnyEnchantment] = ACTIONS(210),
    [anon_sym_ArchnemesisMod] = ACTIONS(210),
    [anon_sym_AreaLevel] = ACTIONS(210),
    [anon_sym_BaseArmour] = ACTIONS(210),
    [anon_sym_BaseDefencePercentile] = ACTIONS(210),
    [anon_sym_BaseEnergyShield] = ACTIONS(210),
    [anon_sym_BaseEvasion] = ACTIONS(210),
    [anon_sym_BaseType] = ACTIONS(210),
    [anon_sym_BaseWard] = ACTIONS(210),
    [anon_sym_BlightedMap] = ACTIONS(210),
    [anon_sym_Class] = ACTIONS(210),
    [anon_sym_Corrupted] = ACTIONS(212),
    [anon_sym_CorruptedMods] = ACTIONS(210),
    [anon_sym_DropLevel] = ACTIONS(210),
    [anon_sym_ElderItem] = ACTIONS(210),
    [anon_sym_ElderMap] = ACTIONS(210),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(210),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(210),
    [anon_sym_FracturedItem] = ACTIONS(210),
    [anon_sym_GemLevel] = ACTIONS(210),
    [anon_sym_GemQualityType] = ACTIONS(210),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(210),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(210),
    [anon_sym_HasEnchantment] = ACTIONS(210),
    [anon_sym_HasExplicitMod] = ACTIONS(210),
    [anon_sym_HasImplicitMod] = ACTIONS(210),
    [anon_sym_HasInfluence] = ACTIONS(210),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(210),
    [anon_sym_Height] = ACTIONS(210),
    [anon_sym_Identified] = ACTIONS(210),
    [anon_sym_ItemLevel] = ACTIONS(210),
    [anon_sym_LinkedSockets] = ACTIONS(210),
    [anon_sym_MapTier] = ACTIONS(210),
    [anon_sym_Mirrored] = ACTIONS(210),
    [anon_sym_Quality] = ACTIONS(210),
    [anon_sym_Rarity] = ACTIONS(210),
    [anon_sym_Replica] = ACTIONS(210),
    [anon_sym_Scourged] = ACTIONS(210),
    [anon_sym_ShapedMap] = ACTIONS(210),
    [anon_sym_ShaperItem] = ACTIONS(210),
    [anon_sym_SocketGroup] = ACTIONS(210),
    [anon_sym_Sockets] = ACTIONS(210),
    [anon_sym_StackSize] = ACTIONS(210),
    [anon_sym_SynthesisedItem] = ACTIONS(210),
    [anon_sym_UberBlightedMap] = ACTIONS(210),
    [anon_sym_Width] = ACTIONS(210),
    [anon_sym_PlayAlertSound] = ACTIONS(212),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(210),
    [anon_sym_CustomAlertSound] = ACTIONS(212),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(210),
    [anon_sym_DisableDropSound] = ACTIONS(212),
    [anon_sym_EnableDropSound] = ACTIONS(212),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(210),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(210),
    [anon_sym_MinimapIcon] = ACTIONS(210),
    [anon_sym_PlayEffect] = ACTIONS(210),
    [anon_sym_SetBackgroundColor] = ACTIONS(210),
    [anon_sym_SetBorderColor] = ACTIONS(210),
    [anon_sym_SetFontSize] = ACTIONS(210),
    [anon_sym_SetTextColor] = ACTIONS(210),
    [anon_sym_TransfiguredGem] = ACTIONS(210),
    [anon_sym_Continue] = ACTIONS(210),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(210),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(214),
    [anon_sym_Show] = ACTIONS(214),
    [anon_sym_Hide] = ACTIONS(214),
    [anon_sym_Minimal] = ACTIONS(214),
    [anon_sym_Import] = ACTIONS(214),
    [anon_sym_AlternateQuality] = ACTIONS(214),
    [anon_sym_AnyEnchantment] = ACTIONS(214),
    [anon_sym_ArchnemesisMod] = ACTIONS(214),
    [anon_sym_AreaLevel] = ACTIONS(214),
    [anon_sym_BaseArmour] = ACTIONS(214),
    [anon_sym_BaseDefencePercentile] = ACTIONS(214),
    [anon_sym_BaseEnergyShield] = ACTIONS(214),
    [anon_sym_BaseEvasion] = ACTIONS(214),
    [anon_sym_BaseType] = ACTIONS(214),
    [anon_sym_BaseWard] = ACTIONS(214),
    [anon_sym_BlightedMap] = ACTIONS(214),
    [anon_sym_Class] = ACTIONS(214),
    [anon_sym_Corrupted] = ACTIONS(216),
    [anon_sym_CorruptedMods] = ACTIONS(214),
    [anon_sym_DropLevel] = ACTIONS(214),
    [anon_sym_ElderItem] = ACTIONS(214),
    [anon_sym_ElderMap] = ACTIONS(214),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(214),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(214),
    [anon_sym_FracturedItem] = ACTIONS(214),
    [anon_sym_GemLevel] = ACTIONS(214),
    [anon_sym_GemQualityType] = ACTIONS(214),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(214),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(214),
    [anon_sym_HasEnchantment] = ACTIONS(214),
    [anon_sym_HasExplicitMod] = ACTIONS(214),
    [anon_sym_HasImplicitMod] = ACTIONS(214),
    [anon_sym_HasInfluence] = ACTIONS(214),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(214),
    [anon_sym_Height] = ACTIONS(214),
    [anon_sym_Identified] = ACTIONS(214),
    [anon_sym_ItemLevel] = ACTIONS(214),
    [anon_sym_LinkedSockets] = ACTIONS(214),
    [anon_sym_MapTier] = ACTIONS(214),
    [anon_sym_Mirrored] = ACTIONS(214),
    [anon_sym_Quality] = ACTIONS(214),
    [anon_sym_Rarity] = ACTIONS(214),
    [anon_sym_Replica] = ACTIONS(214),
    [anon_sym_Scourged] = ACTIONS(214),
    [anon_sym_ShapedMap] = ACTIONS(214),
    [anon_sym_ShaperItem] = ACTIONS(214),
    [anon_sym_SocketGroup] = ACTIONS(214),
    [anon_sym_Sockets] = ACTIONS(214),
    [anon_sym_StackSize] = ACTIONS(214),
    [anon_sym_SynthesisedItem] = ACTIONS(214),
    [anon_sym_UberBlightedMap] = ACTIONS(214),
    [anon_sym_Width] = ACTIONS(214),
    [anon_sym_PlayAlertSound] = ACTIONS(216),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(214),
    [anon_sym_CustomAlertSound] = ACTIONS(216),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(214),
    [anon_sym_DisableDropSound] = ACTIONS(216),
    [anon_sym_EnableDropSound] = ACTIONS(216),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(214),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(214),
    [anon_sym_MinimapIcon] = ACTIONS(214),
    [anon_sym_PlayEffect] = ACTIONS(214),
    [anon_sym_SetBackgroundColor] = ACTIONS(214),
    [anon_sym_SetBorderColor] = ACTIONS(214),
    [anon_sym_SetFontSize] = ACTIONS(214),
    [anon_sym_SetTextColor] = ACTIONS(214),
    [anon_sym_TransfiguredGem] = ACTIONS(214),
    [anon_sym_Continue] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(214),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(218),
    [anon_sym_Show] = ACTIONS(218),
    [anon_sym_Hide] = ACTIONS(218),
    [anon_sym_Minimal] = ACTIONS(218),
    [anon_sym_Import] = ACTIONS(218),
    [anon_sym_AlternateQuality] = ACTIONS(218),
    [anon_sym_AnyEnchantment] = ACTIONS(218),
    [anon_sym_ArchnemesisMod] = ACTIONS(218),
    [anon_sym_AreaLevel] = ACTIONS(218),
    [anon_sym_BaseArmour] = ACTIONS(218),
    [anon_sym_BaseDefencePercentile] = ACTIONS(218),
    [anon_sym_BaseEnergyShield] = ACTIONS(218),
    [anon_sym_BaseEvasion] = ACTIONS(218),
    [anon_sym_BaseType] = ACTIONS(218),
    [anon_sym_BaseWard] = ACTIONS(218),
    [anon_sym_BlightedMap] = ACTIONS(218),
    [anon_sym_Class] = ACTIONS(218),
    [anon_sym_Corrupted] = ACTIONS(220),
    [anon_sym_CorruptedMods] = ACTIONS(218),
    [anon_sym_DropLevel] = ACTIONS(218),
    [anon_sym_ElderItem] = ACTIONS(218),
    [anon_sym_ElderMap] = ACTIONS(218),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(218),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(218),
    [anon_sym_FracturedItem] = ACTIONS(218),
    [anon_sym_GemLevel] = ACTIONS(218),
    [anon_sym_GemQualityType] = ACTIONS(218),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(218),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(218),
    [anon_sym_HasEnchantment] = ACTIONS(218),
    [anon_sym_HasExplicitMod] = ACTIONS(218),
    [anon_sym_HasImplicitMod] = ACTIONS(218),
    [anon_sym_HasInfluence] = ACTIONS(218),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(218),
    [anon_sym_Height] = ACTIONS(218),
    [anon_sym_Identified] = ACTIONS(218),
    [anon_sym_ItemLevel] = ACTIONS(218),
    [anon_sym_LinkedSockets] = ACTIONS(218),
    [anon_sym_MapTier] = ACTIONS(218),
    [anon_sym_Mirrored] = ACTIONS(218),
    [anon_sym_Quality] = ACTIONS(218),
    [anon_sym_Rarity] = ACTIONS(218),
    [anon_sym_Replica] = ACTIONS(218),
    [anon_sym_Scourged] = ACTIONS(218),
    [anon_sym_ShapedMap] = ACTIONS(218),
    [anon_sym_ShaperItem] = ACTIONS(218),
    [anon_sym_SocketGroup] = ACTIONS(218),
    [anon_sym_Sockets] = ACTIONS(218),
    [anon_sym_StackSize] = ACTIONS(218),
    [anon_sym_SynthesisedItem] = ACTIONS(218),
    [anon_sym_UberBlightedMap] = ACTIONS(218),
    [anon_sym_Width] = ACTIONS(218),
    [anon_sym_PlayAlertSound] = ACTIONS(220),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(218),
    [anon_sym_CustomAlertSound] = ACTIONS(220),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(218),
    [anon_sym_DisableDropSound] = ACTIONS(220),
    [anon_sym_EnableDropSound] = ACTIONS(220),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(218),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(218),
    [anon_sym_MinimapIcon] = ACTIONS(218),
    [anon_sym_PlayEffect] = ACTIONS(218),
    [anon_sym_SetBackgroundColor] = ACTIONS(218),
    [anon_sym_SetBorderColor] = ACTIONS(218),
    [anon_sym_SetFontSize] = ACTIONS(218),
    [anon_sym_SetTextColor] = ACTIONS(218),
    [anon_sym_TransfiguredGem] = ACTIONS(218),
    [anon_sym_Continue] = ACTIONS(218),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(218),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(222),
    [anon_sym_Show] = ACTIONS(222),
    [anon_sym_Hide] = ACTIONS(222),
    [anon_sym_Minimal] = ACTIONS(222),
    [anon_sym_Import] = ACTIONS(222),
    [anon_sym_AlternateQuality] = ACTIONS(222),
    [anon_sym_AnyEnchantment] = ACTIONS(222),
    [anon_sym_ArchnemesisMod] = ACTIONS(222),
    [anon_sym_AreaLevel] = ACTIONS(222),
    [anon_sym_BaseArmour] = ACTIONS(222),
    [anon_sym_BaseDefencePercentile] = ACTIONS(222),
    [anon_sym_BaseEnergyShield] = ACTIONS(222),
    [anon_sym_BaseEvasion] = ACTIONS(222),
    [anon_sym_BaseType] = ACTIONS(222),
    [anon_sym_BaseWard] = ACTIONS(222),
    [anon_sym_BlightedMap] = ACTIONS(222),
    [anon_sym_Class] = ACTIONS(222),
    [anon_sym_Corrupted] = ACTIONS(224),
    [anon_sym_CorruptedMods] = ACTIONS(222),
    [anon_sym_DropLevel] = ACTIONS(222),
    [anon_sym_ElderItem] = ACTIONS(222),
    [anon_sym_ElderMap] = ACTIONS(222),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(222),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(222),
    [anon_sym_FracturedItem] = ACTIONS(222),
    [anon_sym_GemLevel] = ACTIONS(222),
    [anon_sym_GemQualityType] = ACTIONS(222),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(222),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(222),
    [anon_sym_HasEnchantment] = ACTIONS(222),
    [anon_sym_HasExplicitMod] = ACTIONS(222),
    [anon_sym_HasImplicitMod] = ACTIONS(222),
    [anon_sym_HasInfluence] = ACTIONS(222),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(222),
    [anon_sym_Height] = ACTIONS(222),
    [anon_sym_Identified] = ACTIONS(222),
    [anon_sym_ItemLevel] = ACTIONS(222),
    [anon_sym_LinkedSockets] = ACTIONS(222),
    [anon_sym_MapTier] = ACTIONS(222),
    [anon_sym_Mirrored] = ACTIONS(222),
    [anon_sym_Quality] = ACTIONS(222),
    [anon_sym_Rarity] = ACTIONS(222),
    [anon_sym_Replica] = ACTIONS(222),
    [anon_sym_Scourged] = ACTIONS(222),
    [anon_sym_ShapedMap] = ACTIONS(222),
    [anon_sym_ShaperItem] = ACTIONS(222),
    [anon_sym_SocketGroup] = ACTIONS(222),
    [anon_sym_Sockets] = ACTIONS(222),
    [anon_sym_StackSize] = ACTIONS(222),
    [anon_sym_SynthesisedItem] = ACTIONS(222),
    [anon_sym_UberBlightedMap] = ACTIONS(222),
    [anon_sym_Width] = ACTIONS(222),
    [anon_sym_PlayAlertSound] = ACTIONS(224),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(222),
    [anon_sym_CustomAlertSound] = ACTIONS(224),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(222),
    [anon_sym_DisableDropSound] = ACTIONS(224),
    [anon_sym_EnableDropSound] = ACTIONS(224),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(222),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(222),
    [anon_sym_MinimapIcon] = ACTIONS(222),
    [anon_sym_PlayEffect] = ACTIONS(222),
    [anon_sym_SetBackgroundColor] = ACTIONS(222),
    [anon_sym_SetBorderColor] = ACTIONS(222),
    [anon_sym_SetFontSize] = ACTIONS(222),
    [anon_sym_SetTextColor] = ACTIONS(222),
    [anon_sym_TransfiguredGem] = ACTIONS(222),
    [anon_sym_Continue] = ACTIONS(222),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(222),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [anon_sym_Show] = ACTIONS(226),
    [anon_sym_Hide] = ACTIONS(226),
    [anon_sym_Minimal] = ACTIONS(226),
    [anon_sym_Import] = ACTIONS(226),
    [anon_sym_AlternateQuality] = ACTIONS(226),
    [anon_sym_AnyEnchantment] = ACTIONS(226),
    [anon_sym_ArchnemesisMod] = ACTIONS(226),
    [anon_sym_AreaLevel] = ACTIONS(226),
    [anon_sym_BaseArmour] = ACTIONS(226),
    [anon_sym_BaseDefencePercentile] = ACTIONS(226),
    [anon_sym_BaseEnergyShield] = ACTIONS(226),
    [anon_sym_BaseEvasion] = ACTIONS(226),
    [anon_sym_BaseType] = ACTIONS(226),
    [anon_sym_BaseWard] = ACTIONS(226),
    [anon_sym_BlightedMap] = ACTIONS(226),
    [anon_sym_Class] = ACTIONS(226),
    [anon_sym_Corrupted] = ACTIONS(228),
    [anon_sym_CorruptedMods] = ACTIONS(226),
    [anon_sym_DropLevel] = ACTIONS(226),
    [anon_sym_ElderItem] = ACTIONS(226),
    [anon_sym_ElderMap] = ACTIONS(226),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(226),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(226),
    [anon_sym_FracturedItem] = ACTIONS(226),
    [anon_sym_GemLevel] = ACTIONS(226),
    [anon_sym_GemQualityType] = ACTIONS(226),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(226),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(226),
    [anon_sym_HasEnchantment] = ACTIONS(226),
    [anon_sym_HasExplicitMod] = ACTIONS(226),
    [anon_sym_HasImplicitMod] = ACTIONS(226),
    [anon_sym_HasInfluence] = ACTIONS(226),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(226),
    [anon_sym_Height] = ACTIONS(226),
    [anon_sym_Identified] = ACTIONS(226),
    [anon_sym_ItemLevel] = ACTIONS(226),
    [anon_sym_LinkedSockets] = ACTIONS(226),
    [anon_sym_MapTier] = ACTIONS(226),
    [anon_sym_Mirrored] = ACTIONS(226),
    [anon_sym_Quality] = ACTIONS(226),
    [anon_sym_Rarity] = ACTIONS(226),
    [anon_sym_Replica] = ACTIONS(226),
    [anon_sym_Scourged] = ACTIONS(226),
    [anon_sym_ShapedMap] = ACTIONS(226),
    [anon_sym_ShaperItem] = ACTIONS(226),
    [anon_sym_SocketGroup] = ACTIONS(226),
    [anon_sym_Sockets] = ACTIONS(226),
    [anon_sym_StackSize] = ACTIONS(226),
    [anon_sym_SynthesisedItem] = ACTIONS(226),
    [anon_sym_UberBlightedMap] = ACTIONS(226),
    [anon_sym_Width] = ACTIONS(226),
    [anon_sym_PlayAlertSound] = ACTIONS(228),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(226),
    [anon_sym_CustomAlertSound] = ACTIONS(228),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(226),
    [anon_sym_DisableDropSound] = ACTIONS(228),
    [anon_sym_EnableDropSound] = ACTIONS(228),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(226),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(226),
    [anon_sym_MinimapIcon] = ACTIONS(226),
    [anon_sym_PlayEffect] = ACTIONS(226),
    [anon_sym_SetBackgroundColor] = ACTIONS(226),
    [anon_sym_SetBorderColor] = ACTIONS(226),
    [anon_sym_SetFontSize] = ACTIONS(226),
    [anon_sym_SetTextColor] = ACTIONS(226),
    [anon_sym_TransfiguredGem] = ACTIONS(226),
    [anon_sym_Continue] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(226),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(230),
    [anon_sym_Show] = ACTIONS(230),
    [anon_sym_Hide] = ACTIONS(230),
    [anon_sym_Minimal] = ACTIONS(230),
    [anon_sym_Import] = ACTIONS(230),
    [anon_sym_AlternateQuality] = ACTIONS(230),
    [anon_sym_AnyEnchantment] = ACTIONS(230),
    [anon_sym_ArchnemesisMod] = ACTIONS(230),
    [anon_sym_AreaLevel] = ACTIONS(230),
    [anon_sym_BaseArmour] = ACTIONS(230),
    [anon_sym_BaseDefencePercentile] = ACTIONS(230),
    [anon_sym_BaseEnergyShield] = ACTIONS(230),
    [anon_sym_BaseEvasion] = ACTIONS(230),
    [anon_sym_BaseType] = ACTIONS(230),
    [anon_sym_BaseWard] = ACTIONS(230),
    [anon_sym_BlightedMap] = ACTIONS(230),
    [anon_sym_Class] = ACTIONS(230),
    [anon_sym_Corrupted] = ACTIONS(232),
    [anon_sym_CorruptedMods] = ACTIONS(230),
    [anon_sym_DropLevel] = ACTIONS(230),
    [anon_sym_ElderItem] = ACTIONS(230),
    [anon_sym_ElderMap] = ACTIONS(230),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(230),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(230),
    [anon_sym_FracturedItem] = ACTIONS(230),
    [anon_sym_GemLevel] = ACTIONS(230),
    [anon_sym_GemQualityType] = ACTIONS(230),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(230),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(230),
    [anon_sym_HasEnchantment] = ACTIONS(230),
    [anon_sym_HasExplicitMod] = ACTIONS(230),
    [anon_sym_HasImplicitMod] = ACTIONS(230),
    [anon_sym_HasInfluence] = ACTIONS(230),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(230),
    [anon_sym_Height] = ACTIONS(230),
    [anon_sym_Identified] = ACTIONS(230),
    [anon_sym_ItemLevel] = ACTIONS(230),
    [anon_sym_LinkedSockets] = ACTIONS(230),
    [anon_sym_MapTier] = ACTIONS(230),
    [anon_sym_Mirrored] = ACTIONS(230),
    [anon_sym_Quality] = ACTIONS(230),
    [anon_sym_Rarity] = ACTIONS(230),
    [anon_sym_Replica] = ACTIONS(230),
    [anon_sym_Scourged] = ACTIONS(230),
    [anon_sym_ShapedMap] = ACTIONS(230),
    [anon_sym_ShaperItem] = ACTIONS(230),
    [anon_sym_SocketGroup] = ACTIONS(230),
    [anon_sym_Sockets] = ACTIONS(230),
    [anon_sym_StackSize] = ACTIONS(230),
    [anon_sym_SynthesisedItem] = ACTIONS(230),
    [anon_sym_UberBlightedMap] = ACTIONS(230),
    [anon_sym_Width] = ACTIONS(230),
    [anon_sym_PlayAlertSound] = ACTIONS(232),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(230),
    [anon_sym_CustomAlertSound] = ACTIONS(232),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(230),
    [anon_sym_DisableDropSound] = ACTIONS(232),
    [anon_sym_EnableDropSound] = ACTIONS(232),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(230),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(230),
    [anon_sym_MinimapIcon] = ACTIONS(230),
    [anon_sym_PlayEffect] = ACTIONS(230),
    [anon_sym_SetBackgroundColor] = ACTIONS(230),
    [anon_sym_SetBorderColor] = ACTIONS(230),
    [anon_sym_SetFontSize] = ACTIONS(230),
    [anon_sym_SetTextColor] = ACTIONS(230),
    [anon_sym_TransfiguredGem] = ACTIONS(230),
    [anon_sym_Continue] = ACTIONS(230),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(230),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(234),
    [anon_sym_Show] = ACTIONS(234),
    [anon_sym_Hide] = ACTIONS(234),
    [anon_sym_Minimal] = ACTIONS(234),
    [anon_sym_Import] = ACTIONS(234),
    [anon_sym_AlternateQuality] = ACTIONS(234),
    [anon_sym_AnyEnchantment] = ACTIONS(234),
    [anon_sym_ArchnemesisMod] = ACTIONS(234),
    [anon_sym_AreaLevel] = ACTIONS(234),
    [anon_sym_BaseArmour] = ACTIONS(234),
    [anon_sym_BaseDefencePercentile] = ACTIONS(234),
    [anon_sym_BaseEnergyShield] = ACTIONS(234),
    [anon_sym_BaseEvasion] = ACTIONS(234),
    [anon_sym_BaseType] = ACTIONS(234),
    [anon_sym_BaseWard] = ACTIONS(234),
    [anon_sym_BlightedMap] = ACTIONS(234),
    [anon_sym_Class] = ACTIONS(234),
    [anon_sym_Corrupted] = ACTIONS(236),
    [anon_sym_CorruptedMods] = ACTIONS(234),
    [anon_sym_DropLevel] = ACTIONS(234),
    [anon_sym_ElderItem] = ACTIONS(234),
    [anon_sym_ElderMap] = ACTIONS(234),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(234),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(234),
    [anon_sym_FracturedItem] = ACTIONS(234),
    [anon_sym_GemLevel] = ACTIONS(234),
    [anon_sym_GemQualityType] = ACTIONS(234),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(234),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(234),
    [anon_sym_HasEnchantment] = ACTIONS(234),
    [anon_sym_HasExplicitMod] = ACTIONS(234),
    [anon_sym_HasImplicitMod] = ACTIONS(234),
    [anon_sym_HasInfluence] = ACTIONS(234),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(234),
    [anon_sym_Height] = ACTIONS(234),
    [anon_sym_Identified] = ACTIONS(234),
    [anon_sym_ItemLevel] = ACTIONS(234),
    [anon_sym_LinkedSockets] = ACTIONS(234),
    [anon_sym_MapTier] = ACTIONS(234),
    [anon_sym_Mirrored] = ACTIONS(234),
    [anon_sym_Quality] = ACTIONS(234),
    [anon_sym_Rarity] = ACTIONS(234),
    [anon_sym_Replica] = ACTIONS(234),
    [anon_sym_Scourged] = ACTIONS(234),
    [anon_sym_ShapedMap] = ACTIONS(234),
    [anon_sym_ShaperItem] = ACTIONS(234),
    [anon_sym_SocketGroup] = ACTIONS(234),
    [anon_sym_Sockets] = ACTIONS(234),
    [anon_sym_StackSize] = ACTIONS(234),
    [anon_sym_SynthesisedItem] = ACTIONS(234),
    [anon_sym_UberBlightedMap] = ACTIONS(234),
    [anon_sym_Width] = ACTIONS(234),
    [anon_sym_PlayAlertSound] = ACTIONS(236),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(234),
    [anon_sym_CustomAlertSound] = ACTIONS(236),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(234),
    [anon_sym_DisableDropSound] = ACTIONS(236),
    [anon_sym_EnableDropSound] = ACTIONS(236),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(234),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(234),
    [anon_sym_MinimapIcon] = ACTIONS(234),
    [anon_sym_PlayEffect] = ACTIONS(234),
    [anon_sym_SetBackgroundColor] = ACTIONS(234),
    [anon_sym_SetBorderColor] = ACTIONS(234),
    [anon_sym_SetFontSize] = ACTIONS(234),
    [anon_sym_SetTextColor] = ACTIONS(234),
    [anon_sym_TransfiguredGem] = ACTIONS(234),
    [anon_sym_Continue] = ACTIONS(234),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(234),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(238),
    [anon_sym_Show] = ACTIONS(238),
    [anon_sym_Hide] = ACTIONS(238),
    [anon_sym_Minimal] = ACTIONS(238),
    [anon_sym_Import] = ACTIONS(238),
    [anon_sym_AlternateQuality] = ACTIONS(238),
    [anon_sym_AnyEnchantment] = ACTIONS(238),
    [anon_sym_ArchnemesisMod] = ACTIONS(238),
    [anon_sym_AreaLevel] = ACTIONS(238),
    [anon_sym_BaseArmour] = ACTIONS(238),
    [anon_sym_BaseDefencePercentile] = ACTIONS(238),
    [anon_sym_BaseEnergyShield] = ACTIONS(238),
    [anon_sym_BaseEvasion] = ACTIONS(238),
    [anon_sym_BaseType] = ACTIONS(238),
    [anon_sym_BaseWard] = ACTIONS(238),
    [anon_sym_BlightedMap] = ACTIONS(238),
    [anon_sym_Class] = ACTIONS(238),
    [anon_sym_Corrupted] = ACTIONS(240),
    [anon_sym_CorruptedMods] = ACTIONS(238),
    [anon_sym_DropLevel] = ACTIONS(238),
    [anon_sym_ElderItem] = ACTIONS(238),
    [anon_sym_ElderMap] = ACTIONS(238),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(238),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(238),
    [anon_sym_FracturedItem] = ACTIONS(238),
    [anon_sym_GemLevel] = ACTIONS(238),
    [anon_sym_GemQualityType] = ACTIONS(238),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(238),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(238),
    [anon_sym_HasEnchantment] = ACTIONS(238),
    [anon_sym_HasExplicitMod] = ACTIONS(238),
    [anon_sym_HasImplicitMod] = ACTIONS(238),
    [anon_sym_HasInfluence] = ACTIONS(238),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(238),
    [anon_sym_Height] = ACTIONS(238),
    [anon_sym_Identified] = ACTIONS(238),
    [anon_sym_ItemLevel] = ACTIONS(238),
    [anon_sym_LinkedSockets] = ACTIONS(238),
    [anon_sym_MapTier] = ACTIONS(238),
    [anon_sym_Mirrored] = ACTIONS(238),
    [anon_sym_Quality] = ACTIONS(238),
    [anon_sym_Rarity] = ACTIONS(238),
    [anon_sym_Replica] = ACTIONS(238),
    [anon_sym_Scourged] = ACTIONS(238),
    [anon_sym_ShapedMap] = ACTIONS(238),
    [anon_sym_ShaperItem] = ACTIONS(238),
    [anon_sym_SocketGroup] = ACTIONS(238),
    [anon_sym_Sockets] = ACTIONS(238),
    [anon_sym_StackSize] = ACTIONS(238),
    [anon_sym_SynthesisedItem] = ACTIONS(238),
    [anon_sym_UberBlightedMap] = ACTIONS(238),
    [anon_sym_Width] = ACTIONS(238),
    [anon_sym_PlayAlertSound] = ACTIONS(240),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(238),
    [anon_sym_CustomAlertSound] = ACTIONS(240),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(238),
    [anon_sym_DisableDropSound] = ACTIONS(240),
    [anon_sym_EnableDropSound] = ACTIONS(240),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(238),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(238),
    [anon_sym_MinimapIcon] = ACTIONS(238),
    [anon_sym_PlayEffect] = ACTIONS(238),
    [anon_sym_SetBackgroundColor] = ACTIONS(238),
    [anon_sym_SetBorderColor] = ACTIONS(238),
    [anon_sym_SetFontSize] = ACTIONS(238),
    [anon_sym_SetTextColor] = ACTIONS(238),
    [anon_sym_TransfiguredGem] = ACTIONS(238),
    [anon_sym_Continue] = ACTIONS(238),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(238),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(242),
    [anon_sym_Show] = ACTIONS(242),
    [anon_sym_Hide] = ACTIONS(242),
    [anon_sym_Minimal] = ACTIONS(242),
    [anon_sym_Import] = ACTIONS(242),
    [anon_sym_AlternateQuality] = ACTIONS(242),
    [anon_sym_AnyEnchantment] = ACTIONS(242),
    [anon_sym_ArchnemesisMod] = ACTIONS(242),
    [anon_sym_AreaLevel] = ACTIONS(242),
    [anon_sym_BaseArmour] = ACTIONS(242),
    [anon_sym_BaseDefencePercentile] = ACTIONS(242),
    [anon_sym_BaseEnergyShield] = ACTIONS(242),
    [anon_sym_BaseEvasion] = ACTIONS(242),
    [anon_sym_BaseType] = ACTIONS(242),
    [anon_sym_BaseWard] = ACTIONS(242),
    [anon_sym_BlightedMap] = ACTIONS(242),
    [anon_sym_Class] = ACTIONS(242),
    [anon_sym_Corrupted] = ACTIONS(244),
    [anon_sym_CorruptedMods] = ACTIONS(242),
    [anon_sym_DropLevel] = ACTIONS(242),
    [anon_sym_ElderItem] = ACTIONS(242),
    [anon_sym_ElderMap] = ACTIONS(242),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(242),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(242),
    [anon_sym_FracturedItem] = ACTIONS(242),
    [anon_sym_GemLevel] = ACTIONS(242),
    [anon_sym_GemQualityType] = ACTIONS(242),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(242),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(242),
    [anon_sym_HasEnchantment] = ACTIONS(242),
    [anon_sym_HasExplicitMod] = ACTIONS(242),
    [anon_sym_HasImplicitMod] = ACTIONS(242),
    [anon_sym_HasInfluence] = ACTIONS(242),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(242),
    [anon_sym_Height] = ACTIONS(242),
    [anon_sym_Identified] = ACTIONS(242),
    [anon_sym_ItemLevel] = ACTIONS(242),
    [anon_sym_LinkedSockets] = ACTIONS(242),
    [anon_sym_MapTier] = ACTIONS(242),
    [anon_sym_Mirrored] = ACTIONS(242),
    [anon_sym_Quality] = ACTIONS(242),
    [anon_sym_Rarity] = ACTIONS(242),
    [anon_sym_Replica] = ACTIONS(242),
    [anon_sym_Scourged] = ACTIONS(242),
    [anon_sym_ShapedMap] = ACTIONS(242),
    [anon_sym_ShaperItem] = ACTIONS(242),
    [anon_sym_SocketGroup] = ACTIONS(242),
    [anon_sym_Sockets] = ACTIONS(242),
    [anon_sym_StackSize] = ACTIONS(242),
    [anon_sym_SynthesisedItem] = ACTIONS(242),
    [anon_sym_UberBlightedMap] = ACTIONS(242),
    [anon_sym_Width] = ACTIONS(242),
    [anon_sym_PlayAlertSound] = ACTIONS(244),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(242),
    [anon_sym_CustomAlertSound] = ACTIONS(244),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(242),
    [anon_sym_DisableDropSound] = ACTIONS(244),
    [anon_sym_EnableDropSound] = ACTIONS(244),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(242),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(242),
    [anon_sym_MinimapIcon] = ACTIONS(242),
    [anon_sym_PlayEffect] = ACTIONS(242),
    [anon_sym_SetBackgroundColor] = ACTIONS(242),
    [anon_sym_SetBorderColor] = ACTIONS(242),
    [anon_sym_SetFontSize] = ACTIONS(242),
    [anon_sym_SetTextColor] = ACTIONS(242),
    [anon_sym_TransfiguredGem] = ACTIONS(242),
    [anon_sym_Continue] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(242),
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
    [anon_sym_UberBlightedMap] = ACTIONS(15),
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
    [anon_sym_TransfiguredGem] = ACTIONS(59),
    [anon_sym_Continue] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(246),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(177), 1,
      sym_shape,
    ACTIONS(248), 12,
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
  [21] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_None,
    STATE(107), 1,
      sym_colour,
    ACTIONS(252), 11,
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
  [44] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(176), 1,
      sym_shape,
    ACTIONS(248), 12,
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
    ACTIONS(252), 11,
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
    STATE(163), 1,
      sym_colour,
    ACTIONS(252), 11,
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
    ACTIONS(256), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_rarity,
    ACTIONS(254), 2,
      aux_sym__equal_operator_token1,
      aux_sym__range_operator_token1,
    STATE(96), 2,
      sym__equal_operator,
      sym__range_operator,
    ACTIONS(258), 4,
      anon_sym_Normal,
      anon_sym_Magic,
      anon_sym_Rare,
      anon_sym_Unique,
  [129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      sym_influence,
    ACTIONS(260), 7,
      anon_sym_None,
      anon_sym_Shaper,
      anon_sym_Elder,
      anon_sym_Crusader,
      anon_sym_Hunter,
      anon_sym_Redeemer,
      anon_sym_Warlord,
  [148] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 1,
      anon_sym_Import,
    ACTIONS(272), 1,
      sym__eol,
    ACTIONS(266), 3,
      anon_sym_Show,
      anon_sym_Hide,
      anon_sym_Minimal,
    STATE(39), 3,
      sym_block,
      sym_import,
      aux_sym_filter_repeat1,
  [171] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      aux_sym_string_token2,
    ACTIONS(281), 1,
      sym_number,
    STATE(117), 1,
      sym__quantity,
    STATE(118), 1,
      sym_string,
    ACTIONS(275), 2,
      aux_sym__equal_operator_token1,
      aux_sym__range_operator_token1,
    STATE(186), 2,
      sym__equal_operator,
      sym__range_operator,
  [198] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_Import,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(285), 1,
      sym__eol,
    ACTIONS(7), 3,
      anon_sym_Show,
      anon_sym_Hide,
      anon_sym_Minimal,
    STATE(39), 3,
      sym_block,
      sym_import,
      aux_sym_filter_repeat1,
  [221] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(287), 2,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(289), 5,
      anon_sym_Show,
      anon_sym_Hide,
      anon_sym_Minimal,
      anon_sym_Import,
      sym__eol,
  [236] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_sockets_token2,
    STATE(101), 1,
      sym_sockets,
    ACTIONS(293), 2,
      aux_sym__equal_operator_token1,
      aux_sym__range_operator_token1,
    STATE(100), 2,
      sym__equal_operator,
      sym__range_operator,
  [257] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(303), 1,
      sym__space,
    ACTIONS(301), 5,
      anon_sym_Show,
      anon_sym_Hide,
      anon_sym_Minimal,
      anon_sym_Import,
      sym__eol,
  [274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym_quality,
    ACTIONS(307), 4,
      anon_sym_Superior,
      anon_sym_Divergent,
      anon_sym_Anomalous,
      anon_sym_Phantasmal,
  [290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 6,
      ts_builtin_sym_end,
      anon_sym_Show,
      anon_sym_Hide,
      anon_sym_Minimal,
      anon_sym_Import,
      sym__eol,
  [302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_rarity,
    ACTIONS(258), 4,
      anon_sym_Normal,
      anon_sym_Magic,
      anon_sym_Rare,
      anon_sym_Unique,
  [318] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_number,
    STATE(144), 1,
      sym__quantity,
    ACTIONS(311), 2,
      aux_sym__equal_operator_token1,
      aux_sym__range_operator_token1,
    STATE(168), 2,
      sym__equal_operator,
      sym__range_operator,
  [336] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      aux_sym_string_token2,
    ACTIONS(315), 1,
      aux_sym__equal_operator_token1,
    STATE(124), 1,
      sym__equal_operator,
    STATE(125), 1,
      sym_string,
  [355] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      aux_sym_string_token2,
    ACTIONS(317), 1,
      aux_sym__equal_operator_token1,
    STATE(85), 1,
      sym_string,
    STATE(88), 1,
      sym__equal_operator,
  [374] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      aux_sym_string_token2,
    ACTIONS(319), 1,
      aux_sym__equal_operator_token1,
    STATE(127), 1,
      sym__equal_operator,
    STATE(129), 1,
      sym_string,
  [393] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      aux_sym_string_token2,
    ACTIONS(281), 1,
      aux_sym__equal_operator_token1,
    STATE(117), 1,
      sym__equal_operator,
    STATE(118), 1,
      sym_string,
  [412] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__space,
    ACTIONS(324), 1,
      sym__eol,
    STATE(53), 1,
      aux_sym_condition_repeat5,
  [425] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym__space,
    ACTIONS(329), 1,
      sym__eol,
    STATE(54), 1,
      aux_sym_condition_repeat8,
  [438] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym__space,
    ACTIONS(333), 1,
      sym__eol,
    STATE(67), 1,
      aux_sym_condition_repeat1,
  [451] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym__space,
    ACTIONS(337), 1,
      sym__eol,
    STATE(70), 1,
      aux_sym_condition_repeat2,
  [464] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__space,
    ACTIONS(341), 1,
      sym__eol,
    STATE(73), 1,
      aux_sym_condition_repeat3,
  [477] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym__space,
    ACTIONS(345), 1,
      sym__eol,
    STATE(76), 1,
      aux_sym_condition_repeat4,
  [490] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym__space,
    ACTIONS(349), 1,
      sym__eol,
    STATE(82), 1,
      aux_sym_condition_repeat7,
  [503] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym__eol,
    ACTIONS(351), 1,
      sym__space,
    STATE(54), 1,
      aux_sym_condition_repeat8,
  [516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_DASH1,
    ACTIONS(355), 1,
      aux_sym__icon_size_token1,
    STATE(150), 1,
      sym__icon_size,
  [529] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym__space,
    ACTIONS(357), 1,
      sym__eol,
    STATE(67), 1,
      aux_sym_condition_repeat1,
  [542] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym__space,
    ACTIONS(361), 1,
      sym__eol,
    STATE(53), 1,
      aux_sym_condition_repeat5,
  [555] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym__space,
    ACTIONS(363), 1,
      sym__eol,
    STATE(70), 1,
      aux_sym_condition_repeat2,
  [568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      aux_sym_string_token2,
    STATE(118), 1,
      sym_string,
  [581] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym__space,
    ACTIONS(365), 1,
      sym__eol,
    STATE(67), 1,
      aux_sym_condition_repeat1,
  [594] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym__space,
    ACTIONS(370), 1,
      sym__eol,
    STATE(67), 1,
      aux_sym_condition_repeat1,
  [607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      aux_sym_string_token2,
    STATE(125), 1,
      sym_string,
  [620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_None,
    ACTIONS(374), 1,
      aux_sym__id_token1,
    STATE(103), 1,
      sym__id,
  [633] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym__space,
    ACTIONS(379), 1,
      sym__eol,
    STATE(70), 1,
      aux_sym_condition_repeat2,
  [646] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      aux_sym_string_token2,
    STATE(129), 1,
      sym_string,
  [659] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__eol,
    ACTIONS(381), 1,
      sym__space,
    STATE(80), 1,
      aux_sym_condition_repeat6,
  [672] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym__space,
    ACTIONS(386), 1,
      sym__eol,
    STATE(73), 1,
      aux_sym_condition_repeat3,
  [685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      aux_sym_string_token2,
    STATE(85), 1,
      sym_string,
  [698] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__space,
    ACTIONS(388), 1,
      sym__eol,
    STATE(73), 1,
      aux_sym_condition_repeat3,
  [711] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym__space,
    ACTIONS(393), 1,
      sym__eol,
    STATE(76), 1,
      aux_sym_condition_repeat4,
  [724] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym__space,
    ACTIONS(361), 1,
      sym__eol,
    STATE(82), 1,
      aux_sym_condition_repeat7,
  [737] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      aux_sym_action_token1,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_file,
  [750] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym__space,
    ACTIONS(397), 1,
      sym__eol,
    STATE(76), 1,
      aux_sym_condition_repeat4,
  [763] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym__space,
    ACTIONS(402), 1,
      sym__eol,
    STATE(80), 1,
      aux_sym_condition_repeat6,
  [776] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym__space,
    ACTIONS(361), 1,
      sym__eol,
    STATE(54), 1,
      aux_sym_condition_repeat8,
  [789] = 4,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__space,
    ACTIONS(407), 1,
      sym__eol,
    STATE(82), 1,
      aux_sym_condition_repeat7,
  [802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_sockets_token2,
    STATE(101), 1,
      sym_sockets,
  [815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      aux_sym__color_token1,
    STATE(128), 1,
      sym__color,
  [825] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym__space,
    ACTIONS(413), 1,
      sym__eol,
  [835] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym__space,
    STATE(63), 1,
      aux_sym_condition_repeat5,
  [845] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym__space,
    STATE(66), 1,
      aux_sym_condition_repeat1,
  [855] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym__space,
    STATE(58), 1,
      aux_sym_condition_repeat4,
  [865] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym__space,
    ACTIONS(419), 1,
      sym__eol,
  [875] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym__eol,
    ACTIONS(421), 1,
      sym__space,
  [885] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(423), 1,
      sym__space,
    STATE(77), 1,
      aux_sym_condition_repeat7,
  [895] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym__space,
    STATE(81), 1,
      aux_sym_condition_repeat8,
  [905] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym__space,
    ACTIONS(429), 1,
      sym__eol,
  [915] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym__eol,
    ACTIONS(431), 1,
      sym__space,
  [925] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym__space,
    ACTIONS(435), 1,
      sym__eol,
  [935] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym__space,
    STATE(59), 1,
      aux_sym_condition_repeat7,
  [945] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(407), 1,
      sym__eol,
    ACTIONS(437), 1,
      sym__space,
  [955] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym__space,
    ACTIONS(441), 1,
      sym__eol,
  [965] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym__space,
    ACTIONS(445), 1,
      sym__eol,
  [975] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym__space,
    STATE(60), 1,
      aux_sym_condition_repeat8,
  [985] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym__eol,
    ACTIONS(447), 1,
      sym__space,
  [995] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym__space,
    ACTIONS(451), 1,
      sym__eol,
  [1005] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym__space,
    ACTIONS(455), 1,
      sym__eol,
  [1015] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym__space,
    ACTIONS(459), 1,
      sym__eol,
  [1025] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym__eol,
    ACTIONS(461), 1,
      sym__space,
  [1035] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym__space,
    ACTIONS(465), 1,
      sym__eol,
  [1045] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym__eol,
    ACTIONS(467), 1,
      sym__space,
  [1055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_file,
  [1065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      aux_sym__color_token1,
    STATE(155), 1,
      sym__color,
  [1075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      aux_sym__font_size_token1,
    STATE(156), 1,
      sym__font_size,
  [1085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      aux_sym__volume_token1,
    STATE(187), 1,
      sym__volume,
  [1095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      aux_sym__volume_token1,
    STATE(160), 1,
      sym__volume,
  [1105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      aux_sym__volume_token1,
    STATE(161), 1,
      sym__volume,
  [1115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      aux_sym__color_token1,
    STATE(166), 1,
      sym__color,
  [1125] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym__space,
    ACTIONS(485), 1,
      sym__eol,
  [1135] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym__space,
    ACTIONS(489), 1,
      sym__eol,
  [1145] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym__space,
    STATE(55), 1,
      aux_sym_condition_repeat1,
  [1155] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym__space,
    ACTIONS(493), 1,
      sym__eol,
  [1165] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym__space,
    ACTIONS(497), 1,
      sym__eol,
  [1175] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym__space,
    ACTIONS(501), 1,
      sym__eol,
  [1185] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym__space,
    ACTIONS(505), 1,
      sym__eol,
  [1195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      sym_file,
  [1205] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym__space,
    ACTIONS(509), 1,
      sym__eol,
  [1215] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym__space,
    STATE(56), 1,
      aux_sym_condition_repeat2,
  [1225] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym__space,
    ACTIONS(513), 1,
      sym__eol,
  [1235] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__space,
    STATE(62), 1,
      aux_sym_condition_repeat1,
  [1245] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__space,
    STATE(57), 1,
      aux_sym_condition_repeat3,
  [1255] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym__space,
    ACTIONS(519), 1,
      sym__eol,
  [1265] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym__space,
    ACTIONS(523), 1,
      sym__eol,
  [1275] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__space,
    STATE(64), 1,
      aux_sym_condition_repeat2,
  [1285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      aux_sym__color_token1,
    STATE(183), 1,
      sym__color,
  [1295] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym__space,
    STATE(75), 1,
      aux_sym_condition_repeat3,
  [1305] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym__space,
    STATE(79), 1,
      aux_sym_condition_repeat4,
  [1315] = 3,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__space,
    STATE(72), 1,
      aux_sym_condition_repeat6,
  [1325] = 2,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(533), 1,
      sym__space,
  [1332] = 2,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(535), 1,
      sym__space,
  [1339] = 2,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(537), 1,
      sym__space,
  [1346] = 2,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(539), 1,
      aux_sym_file_token1,
  [1353] = 2,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym__space,
  [1360] = 2,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym__space,
  [1367] = 2,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(545), 1,
      sym__space,
  [1374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
  [1381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_Optional,
  [1388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym__eol,
  [1395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_Temp,
  [1402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_Temp,
  [1409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym__eol,
  [1416] = 2,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(559), 1,
      aux_sym_string_token1,
  [1423] = 2,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(561), 1,
      sym__space,
  [1430] = 2,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym__space,
  [1437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      aux_sym_sockets_token1,
  [1444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      aux_sym_rarity_token1,
  [1451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_boolean,
  [1458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      aux_sym_quality_token1,
  [1465] = 2,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym__space,
  [1472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      sym__eol,
  [1479] = 2,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(575), 1,
      sym__space,
  [1486] = 2,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym__space,
  [1493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
  [1500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym__eol,
  [1507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym__eol,
  [1514] = 2,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(585), 1,
      sym__space,
  [1521] = 2,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(587), 1,
      sym__space,
  [1528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__eol,
  [1535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym__eol,
  [1542] = 2,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym__space,
  [1549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      ts_builtin_sym_end,
  [1556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      sym_number,
  [1563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      aux_sym_influence_token1,
  [1570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
  [1577] = 2,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym__space,
  [1584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym_boolean,
  [1591] = 2,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym__space,
  [1598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym__eol,
  [1605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym__eol,
  [1612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym__eol,
  [1619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym__eol,
  [1626] = 2,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym__space,
  [1633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym__eol,
  [1640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      sym__eol,
  [1647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_DQUOTE,
  [1654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_DQUOTE,
  [1661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym__eol,
  [1668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_DQUOTE,
  [1675] = 2,
    ACTIONS(291), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym__space,
  [1682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym_number,
  [1689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym__eol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(32)] = 0,
  [SMALL_STATE(33)] = 21,
  [SMALL_STATE(34)] = 44,
  [SMALL_STATE(35)] = 65,
  [SMALL_STATE(36)] = 85,
  [SMALL_STATE(37)] = 105,
  [SMALL_STATE(38)] = 129,
  [SMALL_STATE(39)] = 148,
  [SMALL_STATE(40)] = 171,
  [SMALL_STATE(41)] = 198,
  [SMALL_STATE(42)] = 221,
  [SMALL_STATE(43)] = 236,
  [SMALL_STATE(44)] = 257,
  [SMALL_STATE(45)] = 274,
  [SMALL_STATE(46)] = 290,
  [SMALL_STATE(47)] = 302,
  [SMALL_STATE(48)] = 318,
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
  [SMALL_STATE(187)] = 1689,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, 0, 23),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 6, 0, 23),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 8, 0, 24),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 8, 0, 24),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, 0, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 5),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, 0, 5),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 8),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, 0, 8),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 11),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, 0, 11),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 14),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 4, 0, 14),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 15),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 4, 0, 15),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 4, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 16),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 4, 0, 16),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, 0, 17),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, 0, 17),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, 0, 18),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, 0, 18),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, 0, 19),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, 0, 19),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, 0, 20),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, 0, 20),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, 0, 21),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 6, 0, 21),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, 0, 22),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 6, 0, 22),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 10, 0, 25),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 10, 0, 25),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, 0, 14),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 6, 0, 14),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 6, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 8, 0, 14),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 8, 0, 14),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 8, 0, 16),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 8, 0, 16),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2, 0, 0),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat5, 2, 0, 0), SHIFT_REPEAT(45),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat5, 2, 0, 0),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat8, 2, 0, 0), SHIFT_REPEAT(83),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat8, 2, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat1, 2, 0, 3), SHIFT_REPEAT(65),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat1, 2, 0, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat2, 2, 0, 6), SHIFT_REPEAT(68),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat2, 2, 0, 6),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat3, 2, 0, 9), SHIFT_REPEAT(71),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat3, 2, 0, 9),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat4, 2, 0, 12), SHIFT_REPEAT(74),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat4, 2, 0, 12),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat6, 2, 0, 0), SHIFT_REPEAT(38),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat6, 2, 0, 0),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat7, 2, 0, 0), SHIFT_REPEAT(47),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat7, 2, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat4, 2, 0, 10),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat4, 2, 0, 10),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quality, 1, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quality, 1, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat5, 2, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_influence, 1, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_influence, 1, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat6, 2, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rarity, 1, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rarity, 1, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat7, 2, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sockets, 1, 0, 13),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sockets, 1, 0, 13),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat8, 2, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_colour, 1, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat1, 2, 0, 1),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat1, 2, 0, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quality, 3, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quality, 3, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_influence, 3, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_influence, 3, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rarity, 3, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rarity, 3, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sockets, 3, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sockets, 3, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat2, 2, 0, 4),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat2, 2, 0, 4),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat3, 2, 0, 7),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat3, 2, 0, 7),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [595] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantity, 2, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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

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
#define STATE_COUNT 195
#define LARGE_STATE_COUNT 33
#define SYMBOL_COUNT 167
#define ALIAS_COUNT 0
#define TOKEN_COUNT 135
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 27

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
  anon_sym_MemoryStrands = 40,
  anon_sym_Mirrored = 41,
  anon_sym_Quality = 42,
  anon_sym_Rarity = 43,
  anon_sym_Replica = 44,
  anon_sym_Scourged = 45,
  anon_sym_ShapedMap = 46,
  anon_sym_ShaperItem = 47,
  anon_sym_SocketGroup = 48,
  anon_sym_Sockets = 49,
  anon_sym_StackSize = 50,
  anon_sym_SynthesisedItem = 51,
  anon_sym_TransfiguredGem = 52,
  anon_sym_UberBlightedMap = 53,
  anon_sym_UnidentifiedItemTier = 54,
  anon_sym_WaystoneTier = 55,
  anon_sym_Width = 56,
  anon_sym_ZanaMemory = 57,
  anon_sym_PlayAlertSound = 58,
  anon_sym_None = 59,
  anon_sym_PlayAlertSoundPositional = 60,
  anon_sym_CustomAlertSound = 61,
  aux_sym_action_token1 = 62,
  anon_sym_CustomAlertSoundOptional = 63,
  anon_sym_DisableDropSound = 64,
  anon_sym_EnableDropSound = 65,
  anon_sym_DisableDropSoundIfAlertSound = 66,
  anon_sym_EnableDropSoundIfAlertSound = 67,
  anon_sym_MinimapIcon = 68,
  anon_sym_DASH1 = 69,
  anon_sym_PlayEffect = 70,
  anon_sym_Temp = 71,
  anon_sym_SetBackgroundColor = 72,
  anon_sym_SetBorderColor = 73,
  anon_sym_SetFontSize = 74,
  anon_sym_SetTextColor = 75,
  anon_sym_Continue = 76,
  aux_sym__equal_operator_token1 = 77,
  aux_sym__range_operator_token1 = 78,
  sym_boolean = 79,
  anon_sym_DQUOTE = 80,
  aux_sym_quality_token1 = 81,
  anon_sym_Superior = 82,
  anon_sym_Divergent = 83,
  anon_sym_Anomalous = 84,
  anon_sym_Phantasmal = 85,
  aux_sym_rarity_token1 = 86,
  anon_sym_Normal = 87,
  anon_sym_Magic = 88,
  anon_sym_Rare = 89,
  anon_sym_Unique = 90,
  aux_sym_influence_token1 = 91,
  anon_sym_Shaper = 92,
  anon_sym_Elder = 93,
  anon_sym_Crusader = 94,
  anon_sym_Hunter = 95,
  anon_sym_Redeemer = 96,
  anon_sym_Warlord = 97,
  aux_sym_sockets_token1 = 98,
  aux_sym_sockets_token2 = 99,
  anon_sym_Red = 100,
  anon_sym_Green = 101,
  anon_sym_Blue = 102,
  anon_sym_Brown = 103,
  anon_sym_White = 104,
  anon_sym_Yellow = 105,
  anon_sym_Cyan = 106,
  anon_sym_Grey = 107,
  anon_sym_Orange = 108,
  anon_sym_Pink = 109,
  anon_sym_Purple = 110,
  anon_sym_Circle = 111,
  anon_sym_Diamond = 112,
  anon_sym_Hexagon = 113,
  anon_sym_Square = 114,
  anon_sym_Star = 115,
  anon_sym_Triangle = 116,
  anon_sym_Cross = 117,
  anon_sym_Moon = 118,
  anon_sym_Raindrop = 119,
  anon_sym_Kite = 120,
  anon_sym_Pentagon = 121,
  anon_sym_UpsideDownHouse = 122,
  aux_sym_string_token1 = 123,
  aux_sym_string_token2 = 124,
  aux_sym_file_token1 = 125,
  sym_number = 126,
  aux_sym__id_token1 = 127,
  aux_sym__volume_token1 = 128,
  aux_sym__color_token1 = 129,
  aux_sym__icon_size_token1 = 130,
  aux_sym__font_size_token1 = 131,
  sym_comment = 132,
  sym__space = 133,
  sym__eol = 134,
  sym_filter = 135,
  sym_block = 136,
  sym_import = 137,
  sym_condition = 138,
  sym_action = 139,
  sym_continue = 140,
  sym__equal_operator = 141,
  sym__range_operator = 142,
  sym_quality = 143,
  sym_rarity = 144,
  sym_influence = 145,
  sym_sockets = 146,
  sym_colour = 147,
  sym_shape = 148,
  sym_string = 149,
  sym_file = 150,
  sym__quantity = 151,
  sym__id = 152,
  sym__volume = 153,
  sym__color = 154,
  sym__icon_size = 155,
  sym__font_size = 156,
  aux_sym_filter_repeat1 = 157,
  aux_sym_block_repeat1 = 158,
  aux_sym_condition_repeat1 = 159,
  aux_sym_condition_repeat2 = 160,
  aux_sym_condition_repeat3 = 161,
  aux_sym_condition_repeat4 = 162,
  aux_sym_condition_repeat5 = 163,
  aux_sym_condition_repeat6 = 164,
  aux_sym_condition_repeat7 = 165,
  aux_sym_condition_repeat8 = 166,
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
  [anon_sym_MemoryStrands] = "name",
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
  [anon_sym_UnidentifiedItemTier] = "name",
  [anon_sym_WaystoneTier] = "name",
  [anon_sym_Width] = "name",
  [anon_sym_ZanaMemory] = "name",
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
  [anon_sym_MemoryStrands] = anon_sym_AlternateQuality,
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
  [anon_sym_UnidentifiedItemTier] = anon_sym_AlternateQuality,
  [anon_sym_WaystoneTier] = anon_sym_AlternateQuality,
  [anon_sym_Width] = anon_sym_AlternateQuality,
  [anon_sym_ZanaMemory] = anon_sym_AlternateQuality,
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
  [anon_sym_MemoryStrands] = {
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
  [anon_sym_UnidentifiedItemTier] = {
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
  [anon_sym_ZanaMemory] = {
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
  field_gem = 5,
  field_green = 6,
  field_id = 7,
  field_modifier = 8,
  field_red = 9,
  field_size = 10,
  field_sockets = 11,
  field_type = 12,
  field_volume = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alpha] = "alpha",
  [field_blue] = "blue",
  [field_class] = "class",
  [field_enchantment] = "enchantment",
  [field_gem] = "gem",
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
  [14] = {.index = 17, .length = 1},
  [16] = {.index = 18, .length = 1},
  [17] = {.index = 19, .length = 1},
  [18] = {.index = 20, .length = 1},
  [19] = {.index = 21, .length = 1},
  [20] = {.index = 22, .length = 1},
  [21] = {.index = 23, .length = 1},
  [22] = {.index = 24, .length = 1},
  [23] = {.index = 25, .length = 2},
  [24] = {.index = 24, .length = 1},
  [25] = {.index = 27, .length = 3},
  [26] = {.index = 30, .length = 4},
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
    {field_gem, 2},
  [18] =
    {field_id, 2},
  [19] =
    {field_size, 2},
  [20] =
    {field_modifier, 3, .inherited = true},
  [21] =
    {field_type, 3, .inherited = true},
  [22] =
    {field_class, 3, .inherited = true},
  [23] =
    {field_enchantment, 3, .inherited = true},
  [24] =
    {field_volume, 4},
  [25] =
    {field_id, 2},
    {field_volume, 4},
  [27] =
    {field_blue, 6},
    {field_green, 4},
    {field_red, 2},
  [30] =
    {field_alpha, 8},
    {field_blue, 6},
    {field_green, 4},
    {field_red, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [15] = {
    [2] = aux_sym_action_token1,
  },
  [22] = {
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
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 113,
  [189] = 176,
  [190] = 116,
  [191] = 160,
  [192] = 174,
  [193] = 146,
  [194] = 194,
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
      if (eof) ADVANCE(918);
      ADVANCE_MAP(
        '\n', 1104,
        '\r', 3,
        '!', 996,
        '"', 1002,
        '#', 1102,
        '-', 19,
        '0', 1032,
        '1', 1030,
        '2', 1023,
        '3', 1022,
        '4', 1031,
        '<', 998,
        '=', 996,
        '>', 998,
        'A', 1029,
        'B', 1024,
        'C', 395,
        'D', 1028,
        'E', 460,
        'F', 83,
        'G', 1027,
        'H', 95,
        'I', 207,
        'K', 421,
        'L', 402,
        'M', 84,
        'N', 611,
        'O', 679,
        'P', 270,
        'Q', 860,
        'R', 1025,
        'S', 162,
        'T', 269,
        'U', 153,
        'W', 1026,
        'Y', 265,
        'Z', 100,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(914);
      if (lookahead == '5' ||
          lookahead == '6') ADVANCE(1033);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(17);
      if (lookahead == ' ') ADVANCE(1070);
      if (lookahead == '#') ADVANCE(1102);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1071);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(17);
      if (lookahead == ' ') ADVANCE(1079);
      if (lookahead == '#') ADVANCE(1080);
      if (lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '?' &&
          lookahead != '|' &&
          (lookahead < 0x7f || 0x9f < lookahead)) ADVANCE(1081);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1104);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(996);
      if (lookahead == '"') ADVANCE(1001);
      if (lookahead == '#') ADVANCE(1102);
      if (lookahead == '0') ADVANCE(1082);
      if (lookahead == '<') ADVANCE(998);
      if (lookahead == '=') ADVANCE(996);
      if (lookahead == '>') ADVANCE(998);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1078);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(996);
      if (lookahead == '"') ADVANCE(1001);
      if (lookahead == '#') ADVANCE(1102);
      if (lookahead == '<') ADVANCE(998);
      if (lookahead == '=') ADVANCE(996);
      if (lookahead == '>') ADVANCE(998);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(1044);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(996);
      if (lookahead == '#') ADVANCE(1102);
      if (lookahead == '0') ADVANCE(1082);
      if (lookahead == '<') ADVANCE(998);
      if (lookahead == '=') ADVANCE(996);
      if (lookahead == '>') ADVANCE(998);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1078);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(996);
      if (lookahead == '#') ADVANCE(1102);
      if (lookahead == '<') ADVANCE(998);
      if (lookahead == '=') ADVANCE(996);
      if (lookahead == '>') ADVANCE(998);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(1044);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(980);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(1001);
      if (lookahead == '#') ADVANCE(1102);
      if (lookahead == '0') ADVANCE(1093);
      if (lookahead == '1') ADVANCE(1097);
      if (lookahead == '2') ADVANCE(1094);
      if (lookahead == 'F') ADVANCE(1072);
      if (lookahead == 'T') ADVANCE(1075);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1096);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1078);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 1001,
        '#', 1102,
        '1', 1087,
        'A', 579,
        'C', 753,
        'D', 430,
        'E', 503,
        'H', 859,
        'M', 108,
        'N', 666,
        'P', 391,
        'R', 136,
        'S', 386,
        'U', 578,
        'W', 126,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1086);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '#', 1102,
        '-', 19,
        'C', 767,
        'E', 504,
        'H', 886,
        'N', 658,
        'R', 349,
        'S', 390,
        'W', 144,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(1098);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(1102);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(1098);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(1102);
      if (lookahead == '0') ADVANCE(1093);
      if (lookahead == '1') ADVANCE(1097);
      if (lookahead == '2') ADVANCE(1094);
      if (lookahead == 'F') ADVANCE(1072);
      if (lookahead == 'T') ADVANCE(1075);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(1096);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1078);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(1102);
      if (lookahead == '0') ADVANCE(1088);
      if (lookahead == '3') ADVANCE(1090);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(1092);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1091);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '#', 1102,
        '1', 1087,
        'C', 753,
        'E', 503,
        'H', 859,
        'N', 654,
        'R', 327,
        'S', 385,
        'W', 126,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1086);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(1102);
      if (lookahead == '4') ADVANCE(1100);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1099);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(1102);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(1102);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(1032);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(987);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(498);
      if (lookahead == 'E') ADVANCE(354);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(750);
      if (lookahead == 'D') ADVANCE(273);
      if (lookahead == 'E') ADVANCE(600);
      if (lookahead == 'T') ADVANCE(910);
      if (lookahead == 'W') ADVANCE(119);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(505);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(506);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(507);
      END_STATE();
    case 25:
      if (lookahead == 'B') ADVANCE(127);
      if (lookahead == 'F') ADVANCE(660);
      if (lookahead == 'T') ADVANCE(241);
      END_STATE();
    case 26:
      if (lookahead == 'B') ADVANCE(477);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(726);
      if (lookahead == 'E') ADVANCE(145);
      if (lookahead == 'I') ADVANCE(542);
      if (lookahead == 'S') ADVANCE(325);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(667);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(668);
      END_STATE();
    case 30:
      if (lookahead == 'C') ADVANCE(669);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(644);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(736);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(762);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(900);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(559);
      END_STATE();
    case 36:
      if (lookahead == 'G') ADVANCE(738);
      if (lookahead == 's') ADVANCE(967);
      END_STATE();
    case 37:
      if (lookahead == 'G') ADVANCE(297);
      END_STATE();
    case 38:
      if (lookahead == 'H') ADVANCE(619);
      END_STATE();
    case 39:
      if (lookahead == 'I') ADVANCE(177);
      END_STATE();
    case 40:
      if (lookahead == 'I') ADVANCE(538);
      END_STATE();
    case 41:
      if (lookahead == 'I') ADVANCE(836);
      if (lookahead == 'M') ADVANCE(103);
      END_STATE();
    case 42:
      if (lookahead == 'I') ADVANCE(837);
      END_STATE();
    case 43:
      if (lookahead == 'I') ADVANCE(838);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(840);
      END_STATE();
    case 45:
      if (lookahead == 'I') ADVANCE(841);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(541);
      END_STATE();
    case 47:
      if (lookahead == 'L') ADVANCE(240);
      if (lookahead == 'Q') ADVANCE(884);
      END_STATE();
    case 48:
      if (lookahead == 'L') ADVANCE(333);
      END_STATE();
    case 49:
      if (lookahead == 'L') ADVANCE(341);
      END_STATE();
    case 50:
      if (lookahead == 'L') ADVANCE(343);
      END_STATE();
    case 51:
      if (lookahead == 'M') ADVANCE(628);
      END_STATE();
    case 52:
      if (lookahead == 'M') ADVANCE(107);
      END_STATE();
    case 53:
      if (lookahead == 'M') ADVANCE(112);
      END_STATE();
    case 54:
      if (lookahead == 'M') ADVANCE(114);
      END_STATE();
    case 55:
      if (lookahead == 'M') ADVANCE(334);
      END_STATE();
    case 56:
      if (lookahead == 'M') ADVANCE(629);
      END_STATE();
    case 57:
      if (lookahead == 'M') ADVANCE(631);
      END_STATE();
    case 58:
      if (lookahead == 'N') ADVANCE(616);
      END_STATE();
    case 59:
      if (lookahead == 'N') ADVANCE(656);
      END_STATE();
    case 60:
      if (lookahead == 'O') ADVANCE(353);
      END_STATE();
    case 61:
      if (lookahead == 'P') ADVANCE(318);
      END_STATE();
    case 62:
      if (lookahead == 'P') ADVANCE(115);
      END_STATE();
    case 63:
      if (lookahead == 'P') ADVANCE(143);
      END_STATE();
    case 64:
      if (lookahead == 'Q') ADVANCE(885);
      END_STATE();
    case 65:
      if (lookahead == 'S') ADVANCE(382);
      END_STATE();
    case 66:
      if (lookahead == 'S') ADVANCE(400);
      END_STATE();
    case 67:
      if (lookahead == 'S') ADVANCE(665);
      END_STATE();
    case 68:
      if (lookahead == 'S') ADVANCE(827);
      END_STATE();
    case 69:
      if (lookahead == 'S') ADVANCE(424);
      END_STATE();
    case 70:
      if (lookahead == 'S') ADVANCE(649);
      END_STATE();
    case 71:
      if (lookahead == 'S') ADVANCE(655);
      END_STATE();
    case 72:
      if (lookahead == 'S') ADVANCE(659);
      END_STATE();
    case 73:
      if (lookahead == 'S') ADVANCE(662);
      END_STATE();
    case 74:
      if (lookahead == 'S') ADVANCE(663);
      END_STATE();
    case 75:
      if (lookahead == 'S') ADVANCE(664);
      END_STATE();
    case 76:
      if (lookahead == 'T') ADVANCE(438);
      END_STATE();
    case 77:
      if (lookahead == 'T') ADVANCE(748);
      END_STATE();
    case 78:
      if (lookahead == 'T') ADVANCE(911);
      END_STATE();
    case 79:
      if (lookahead == 'T') ADVANCE(443);
      END_STATE();
    case 80:
      if (lookahead == 'T') ADVANCE(444);
      END_STATE();
    case 81:
      if (lookahead == 'W') ADVANCE(639);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(780);
      if (lookahead == 'l') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(608);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(487);
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead == 'e') ADVANCE(528);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead == 'o') ADVANCE(620);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(901);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(463);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(962);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(374);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(768);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(768);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(601);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(486);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(782);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(529);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == 'v') ADVANCE(277);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(570);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(544);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(673);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(909);
      if (lookahead == 'h') ADVANCE(427);
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(792);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(555);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(675);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(563);
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(563);
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(676);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(743);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(678);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(793);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(560);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(730);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(755);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(572);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(727);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(759);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(681);
      if (lookahead == 'o') ADVANCE(895);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(737);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(568);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(797);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(476);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(574);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(490);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(684);
      if (lookahead == 'o') ADVANCE(895);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(749);
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(830);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(688);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(491);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(796);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(795);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(760);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(842);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == 'x') ADVANCE(690);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(689);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(494);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(605);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(606);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(607);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 153:
      if (lookahead == 'b') ADVANCE(274);
      if (lookahead == 'n') ADVANCE(399);
      if (lookahead == 'p') ADVANCE(781);
      END_STATE();
    case 154:
      if (lookahead == 'b') ADVANCE(479);
      END_STATE();
    case 155:
      if (lookahead == 'b') ADVANCE(484);
      END_STATE();
    case 156:
      if (lookahead == 'b') ADVANCE(508);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(1010);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(1008);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(1062);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(455);
      END_STATE();
    case 162:
      ADVANCE_MAP(
        'c', 609,
        'e', 800,
        'h', 128,
        'o', 172,
        'q', 864,
        't', 88,
        'u', 687,
        'y', 562,
      );
      END_STATE();
    case 163:
      ADVANCE_MAP(
        'c', 609,
        'e', 800,
        'h', 135,
        'o', 172,
        'q', 864,
        't', 88,
        'u', 687,
        'y', 562,
      );
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(478);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(394);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(832);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(445);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(806);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(255);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(457);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(458);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(415);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(417);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(418);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(636);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(449);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(392);
      END_STATE();
    case 181:
      if (lookahead == 'c') ADVANCE(393);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(1047);
      if (lookahead == 'p') ADVANCE(488);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(1059);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(1021);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(933);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(959);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(963);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(936);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(954);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(926);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(949);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(950);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(976);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(983);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(930);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(979);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(982);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(985);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(984);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(1046);
      if (lookahead == 'p') ADVANCE(488);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(1013);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(1015);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'm') ADVANCE(680);
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(817);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(772);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(774);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(778);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(261);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(320);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(734);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(278);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(306);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(310);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(313);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(314);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(340);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(347);
      if (lookahead == 'q') ADVANCE(869);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(1049);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(920);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(1067);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(977);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(1011);
      if (lookahead == 'i') ADVANCE(813);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(999);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(890);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(899);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(1051);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(1058);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(1055);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(1057);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(1061);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(1012);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(932);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(994);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(1063);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(968);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(992);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(951);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(945);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(1069);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(929);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(941);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(946);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(1008);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(1013);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(561);
      if (lookahead == 'h') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(724);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(752);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(733);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(803);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(547);
      if (lookahead == 'y') ADVANCE(1054);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(732);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(706);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(824);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(766);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(710);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(715);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(716);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(735);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(787);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(742);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(788);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(891);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(758);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(892);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(893);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(761);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(763);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(764);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 353:
      if (lookahead == 'f') ADVANCE(81);
      END_STATE();
    case 354:
      if (lookahead == 'f') ADVANCE(358);
      END_STATE();
    case 355:
      if (lookahead == 'f') ADVANCE(474);
      END_STATE();
    case 356:
      if (lookahead == 'f') ADVANCE(406);
      END_STATE();
    case 357:
      if (lookahead == 'f') ADVANCE(420);
      END_STATE();
    case 358:
      if (lookahead == 'f') ADVANCE(319);
      END_STATE();
    case 359:
      if (lookahead == 'f') ADVANCE(448);
      END_STATE();
    case 360:
      if (lookahead == 'f') ADVANCE(305);
      END_STATE();
    case 361:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 362:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 363:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 364:
      if (lookahead == 'g') ADVANCE(387);
      END_STATE();
    case 365:
      if (lookahead == 'g') ADVANCE(404);
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 366:
      if (lookahead == 'g') ADVANCE(380);
      END_STATE();
    case 367:
      if (lookahead == 'g') ADVANCE(246);
      END_STATE();
    case 368:
      if (lookahead == 'g') ADVANCE(284);
      END_STATE();
    case 369:
      if (lookahead == 'g') ADVANCE(328);
      END_STATE();
    case 370:
      if (lookahead == 'g') ADVANCE(908);
      END_STATE();
    case 371:
      if (lookahead == 'g') ADVANCE(410);
      END_STATE();
    case 372:
      if (lookahead == 'g') ADVANCE(483);
      END_STATE();
    case 373:
      if (lookahead == 'g') ADVANCE(740);
      END_STATE();
    case 374:
      if (lookahead == 'g') ADVANCE(632);
      END_STATE();
    case 375:
      if (lookahead == 'g') ADVANCE(633);
      END_STATE();
    case 376:
      if (lookahead == 'g') ADVANCE(883);
      END_STATE();
    case 377:
      if (lookahead == 'g') ADVANCE(332);
      END_STATE();
    case 378:
      if (lookahead == 'g') ADVANCE(389);
      END_STATE();
    case 379:
      if (lookahead == 'h') ADVANCE(974);
      END_STATE();
    case 380:
      if (lookahead == 'h') ADVANCE(801);
      END_STATE();
    case 381:
      if (lookahead == 'h') ADVANCE(599);
      END_STATE();
    case 382:
      if (lookahead == 'h') ADVANCE(435);
      END_STATE();
    case 383:
      if (lookahead == 'h') ADVANCE(610);
      END_STATE();
    case 384:
      if (lookahead == 'h') ADVANCE(321);
      END_STATE();
    case 385:
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 386:
      if (lookahead == 'h') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(692);
      END_STATE();
    case 387:
      if (lookahead == 'h') ADVANCE(828);
      END_STATE();
    case 388:
      if (lookahead == 'h') ADVANCE(133);
      END_STATE();
    case 389:
      if (lookahead == 'h') ADVANCE(849);
      END_STATE();
    case 390:
      if (lookahead == 'h') ADVANCE(146);
      END_STATE();
    case 391:
      if (lookahead == 'h') ADVANCE(149);
      END_STATE();
    case 392:
      if (lookahead == 'h') ADVANCE(150);
      END_STATE();
    case 393:
      if (lookahead == 'h') ADVANCE(151);
      END_STATE();
    case 394:
      if (lookahead == 'h') ADVANCE(46);
      END_STATE();
    case 395:
      if (lookahead == 'i') ADVANCE(720);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(556);
      if (lookahead == 'r') ADVANCE(647);
      if (lookahead == 'u') ADVANCE(779);
      if (lookahead == 'y') ADVANCE(102);
      END_STATE();
    case 396:
      if (lookahead == 'i') ADVANCE(720);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(556);
      if (lookahead == 'r') ADVANCE(646);
      if (lookahead == 'u') ADVANCE(779);
      if (lookahead == 'y') ADVANCE(102);
      END_STATE();
    case 397:
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(612);
      END_STATE();
    case 398:
      if (lookahead == 'i') ADVANCE(364);
      if (lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 399:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 400:
      if (lookahead == 'i') ADVANCE(912);
      END_STATE();
    case 401:
      if (lookahead == 'i') ADVANCE(699);
      END_STATE();
    case 402:
      if (lookahead == 'i') ADVANCE(543);
      END_STATE();
    case 403:
      if (lookahead == 'i') ADVANCE(888);
      END_STATE();
    case 404:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 405:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 406:
      if (lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 407:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 408:
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 409:
      if (lookahead == 'i') ADVANCE(776);
      END_STATE();
    case 410:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 411:
      if (lookahead == 'i') ADVANCE(815);
      END_STATE();
    case 412:
      if (lookahead == 'i') ADVANCE(596);
      END_STATE();
    case 413:
      if (lookahead == 'i') ADVANCE(818);
      END_STATE();
    case 414:
      if (lookahead == 'i') ADVANCE(564);
      END_STATE();
    case 415:
      if (lookahead == 'i') ADVANCE(846);
      END_STATE();
    case 416:
      if (lookahead == 'i') ADVANCE(820);
      END_STATE();
    case 417:
      if (lookahead == 'i') ADVANCE(809);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(810);
      END_STATE();
    case 419:
      if (lookahead == 'i') ADVANCE(602);
      END_STATE();
    case 420:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(822);
      END_STATE();
    case 422:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 423:
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead == 'x') ADVANCE(93);
      END_STATE();
    case 424:
      if (lookahead == 'i') ADVANCE(913);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(889);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 427:
      if (lookahead == 'i') ADVANCE(825);
      END_STATE();
    case 428:
      if (lookahead == 'i') ADVANCE(798);
      END_STATE();
    case 429:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 430:
      if (lookahead == 'i') ADVANCE(894);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(522);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(652);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(635);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(485);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(526);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(634);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(657);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(661);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(642);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(851);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(854);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(378);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 453:
      if (lookahead == 'k') ADVANCE(1056);
      END_STATE();
    case 454:
      if (lookahead == 'k') ADVANCE(66);
      END_STATE();
    case 455:
      if (lookahead == 'k') ADVANCE(373);
      END_STATE();
    case 456:
      if (lookahead == 'k') ADVANCE(272);
      END_STATE();
    case 457:
      if (lookahead == 'k') ADVANCE(298);
      END_STATE();
    case 458:
      if (lookahead == 'k') ADVANCE(309);
      END_STATE();
    case 459:
      if (lookahead == 'l') ADVANCE(835);
      if (lookahead == 'n') ADVANCE(614);
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 460:
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 461:
      if (lookahead == 'l') ADVANCE(1009);
      END_STATE();
    case 462:
      if (lookahead == 'l') ADVANCE(921);
      END_STATE();
    case 463:
      if (lookahead == 'l') ADVANCE(921);
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 464:
      if (lookahead == 'l') ADVANCE(944);
      END_STATE();
    case 465:
      if (lookahead == 'l') ADVANCE(923);
      END_STATE();
    case 466:
      if (lookahead == 'l') ADVANCE(927);
      END_STATE();
    case 467:
      if (lookahead == 'l') ADVANCE(938);
      END_STATE();
    case 468:
      if (lookahead == 'l') ADVANCE(955);
      END_STATE();
    case 469:
      if (lookahead == 'l') ADVANCE(1007);
      END_STATE();
    case 470:
      if (lookahead == 'l') ADVANCE(981);
      END_STATE();
    case 471:
      if (lookahead == 'l') ADVANCE(978);
      END_STATE();
    case 472:
      if (lookahead == 'l') ADVANCE(1008);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(1003);
      END_STATE();
    case 474:
      if (lookahead == 'l') ADVANCE(882);
      END_STATE();
    case 475:
      if (lookahead == 'l') ADVANCE(613);
      END_STATE();
    case 476:
      if (lookahead == 'l') ADVANCE(615);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(451);
      END_STATE();
    case 478:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 480:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 482:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 483:
      if (lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 484:
      if (lookahead == 'l') ADVANCE(345);
      END_STATE();
    case 485:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 486:
      if (lookahead == 'l') ADVANCE(411);
      END_STATE();
    case 487:
      if (lookahead == 'l') ADVANCE(784);
      END_STATE();
    case 488:
      if (lookahead == 'l') ADVANCE(405);
      END_STATE();
    case 489:
      if (lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 490:
      if (lookahead == 'l') ADVANCE(653);
      END_STATE();
    case 491:
      if (lookahead == 'l') ADVANCE(413);
      END_STATE();
    case 492:
      if (lookahead == 'l') ADVANCE(407);
      END_STATE();
    case 493:
      if (lookahead == 'l') ADVANCE(627);
      END_STATE();
    case 494:
      if (lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 495:
      if (lookahead == 'l') ADVANCE(638);
      END_STATE();
    case 496:
      if (lookahead == 'l') ADVANCE(640);
      END_STATE();
    case 497:
      if (lookahead == 'l') ADVANCE(641);
      END_STATE();
    case 498:
      if (lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 499:
      if (lookahead == 'l') ADVANCE(643);
      END_STATE();
    case 500:
      if (lookahead == 'l') ADVANCE(446);
      END_STATE();
    case 501:
      if (lookahead == 'l') ADVANCE(447);
      END_STATE();
    case 502:
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 503:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 504:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 505:
      if (lookahead == 'l') ADVANCE(348);
      END_STATE();
    case 506:
      if (lookahead == 'l') ADVANCE(350);
      END_STATE();
    case 507:
      if (lookahead == 'l') ADVANCE(351);
      END_STATE();
    case 508:
      if (lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 509:
      if (lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 510:
      if (lookahead == 'm') ADVANCE(680);
      END_STATE();
    case 511:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 512:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 513:
      if (lookahead == 'm') ADVANCE(939);
      END_STATE();
    case 514:
      if (lookahead == 'm') ADVANCE(965);
      END_STATE();
    case 515:
      if (lookahead == 'm') ADVANCE(943);
      END_STATE();
    case 516:
      if (lookahead == 'm') ADVANCE(969);
      END_STATE();
    case 517:
      if (lookahead == 'm') ADVANCE(970);
      END_STATE();
    case 518:
      if (lookahead == 'm') ADVANCE(942);
      END_STATE();
    case 519:
      if (lookahead == 'm') ADVANCE(672);
      END_STATE();
    case 520:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 521:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 522:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 523:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 524:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 525:
      if (lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 526:
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 527:
      if (lookahead == 'm') ADVANCE(651);
      END_STATE();
    case 528:
      if (lookahead == 'm') ADVANCE(623);
      END_STATE();
    case 529:
      if (lookahead == 'm') ADVANCE(630);
      END_STATE();
    case 530:
      if (lookahead == 'm') ADVANCE(637);
      END_STATE();
    case 531:
      if (lookahead == 'm') ADVANCE(308);
      END_STATE();
    case 532:
      if (lookahead == 'm') ADVANCE(316);
      END_STATE();
    case 533:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 534:
      if (lookahead == 'm') ADVANCE(326);
      END_STATE();
    case 535:
      if (lookahead == 'm') ADVANCE(329);
      END_STATE();
    case 536:
      if (lookahead == 'm') ADVANCE(330);
      END_STATE();
    case 537:
      if (lookahead == 'm') ADVANCE(331);
      END_STATE();
    case 538:
      if (lookahead == 'm') ADVANCE(693);
      END_STATE();
    case 539:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 540:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 541:
      if (lookahead == 'm') ADVANCE(694);
      END_STATE();
    case 542:
      if (lookahead == 'm') ADVANCE(698);
      if (lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(456);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(1053);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(1065);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(1050);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(1048);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(1060);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(1068);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(931);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(986);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(453);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(831);
      if (lookahead == 'r') ADVANCE(721);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(432);
      if (lookahead == 'r') ADVANCE(756);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(848);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(814);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(777);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead == 'r') ADVANCE(524);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(833);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(823);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 577:
      if (lookahead == 'n') ADVANCE(844);
      END_STATE();
    case 578:
      if (lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 579:
      if (lookahead == 'n') ADVANCE(670);
      END_STATE();
    case 580:
      if (lookahead == 'n') ADVANCE(805);
      END_STATE();
    case 581:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 582:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 583:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 584:
      if (lookahead == 'n') ADVANCE(812);
      END_STATE();
    case 585:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 586:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 587:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 588:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 589:
      if (lookahead == 'n') ADVANCE(807);
      END_STATE();
    case 590:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 591:
      if (lookahead == 'n') ADVANCE(808);
      END_STATE();
    case 592:
      if (lookahead == 'n') ADVANCE(811);
      END_STATE();
    case 593:
      if (lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 594:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 595:
      if (lookahead == 'n') ADVANCE(821);
      END_STATE();
    case 596:
      if (lookahead == 'n') ADVANCE(877);
      END_STATE();
    case 597:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 598:
      if (lookahead == 'n') ADVANCE(826);
      END_STATE();
    case 599:
      if (lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 600:
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == 'v') ADVANCE(131);
      END_STATE();
    case 601:
      if (lookahead == 'n') ADVANCE(839);
      END_STATE();
    case 602:
      if (lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 603:
      if (lookahead == 'n') ADVANCE(847);
      END_STATE();
    case 604:
      if (lookahead == 'n') ADVANCE(843);
      END_STATE();
    case 605:
      if (lookahead == 'n') ADVANCE(850);
      END_STATE();
    case 606:
      if (lookahead == 'n') ADVANCE(857);
      END_STATE();
    case 607:
      if (lookahead == 'n') ADVANCE(858);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(897);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(866);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(895);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(566);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(696);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(896);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(520);
      if (lookahead == 'y') ADVANCE(35);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(865);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(571);
      END_STATE();
    case 617:
      if (lookahead == 'o') ADVANCE(512);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(870);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(881);
      END_STATE();
    case 620:
      if (lookahead == 'o') ADVANCE(545);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(674);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(739);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(723);
      END_STATE();
    case 624:
      if (lookahead == 'o') ADVANCE(691);
      END_STATE();
    case 625:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 626:
      if (lookahead == 'o') ADVANCE(794);
      END_STATE();
    case 627:
      if (lookahead == 'o') ADVANCE(729);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 629:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 630:
      if (lookahead == 'o') ADVANCE(558);
      END_STATE();
    case 631:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 632:
      if (lookahead == 'o') ADVANCE(548);
      END_STATE();
    case 633:
      if (lookahead == 'o') ADVANCE(549);
      END_STATE();
    case 634:
      if (lookahead == 'o') ADVANCE(551);
      END_STATE();
    case 635:
      if (lookahead == 'o') ADVANCE(707);
      END_STATE();
    case 636:
      if (lookahead == 'o') ADVANCE(552);
      END_STATE();
    case 637:
      if (lookahead == 'o') ADVANCE(731);
      END_STATE();
    case 638:
      if (lookahead == 'o') ADVANCE(709);
      END_STATE();
    case 639:
      if (lookahead == 'o') ADVANCE(741);
      END_STATE();
    case 640:
      if (lookahead == 'o') ADVANCE(711);
      END_STATE();
    case 641:
      if (lookahead == 'o') ADVANCE(712);
      END_STATE();
    case 642:
      if (lookahead == 'o') ADVANCE(718);
      END_STATE();
    case 643:
      if (lookahead == 'o') ADVANCE(744);
      END_STATE();
    case 644:
      if (lookahead == 'o') ADVANCE(898);
      END_STATE();
    case 645:
      if (lookahead == 'o') ADVANCE(867);
      END_STATE();
    case 646:
      if (lookahead == 'o') ADVANCE(783);
      END_STATE();
    case 647:
      if (lookahead == 'o') ADVANCE(783);
      if (lookahead == 'u') ADVANCE(786);
      END_STATE();
    case 648:
      if (lookahead == 'o') ADVANCE(593);
      END_STATE();
    case 649:
      if (lookahead == 'o') ADVANCE(871);
      END_STATE();
    case 650:
      if (lookahead == 'o') ADVANCE(745);
      END_STATE();
    case 651:
      if (lookahead == 'o') ADVANCE(872);
      END_STATE();
    case 652:
      if (lookahead == 'o') ADVANCE(576);
      END_STATE();
    case 653:
      if (lookahead == 'o') ADVANCE(868);
      END_STATE();
    case 654:
      if (lookahead == 'o') ADVANCE(565);
      END_STATE();
    case 655:
      if (lookahead == 'o') ADVANCE(873);
      END_STATE();
    case 656:
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(518);
      END_STATE();
    case 657:
      if (lookahead == 'o') ADVANCE(583);
      END_STATE();
    case 658:
      if (lookahead == 'o') ADVANCE(594);
      END_STATE();
    case 659:
      if (lookahead == 'o') ADVANCE(874);
      END_STATE();
    case 660:
      if (lookahead == 'o') ADVANCE(577);
      END_STATE();
    case 661:
      if (lookahead == 'o') ADVANCE(586);
      END_STATE();
    case 662:
      if (lookahead == 'o') ADVANCE(875);
      END_STATE();
    case 663:
      if (lookahead == 'o') ADVANCE(876);
      END_STATE();
    case 664:
      if (lookahead == 'o') ADVANCE(878);
      END_STATE();
    case 665:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 666:
      if (lookahead == 'o') ADVANCE(567);
      END_STATE();
    case 667:
      if (lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 668:
      if (lookahead == 'o') ADVANCE(496);
      END_STATE();
    case 669:
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 670:
      if (lookahead == 'o') ADVANCE(533);
      END_STATE();
    case 671:
      if (lookahead == 'o') ADVANCE(695);
      END_STATE();
    case 672:
      if (lookahead == 'p') ADVANCE(989);
      END_STATE();
    case 673:
      if (lookahead == 'p') ADVANCE(940);
      END_STATE();
    case 674:
      if (lookahead == 'p') ADVANCE(1066);
      END_STATE();
    case 675:
      if (lookahead == 'p') ADVANCE(964);
      END_STATE();
    case 676:
      if (lookahead == 'p') ADVANCE(934);
      END_STATE();
    case 677:
      if (lookahead == 'p') ADVANCE(966);
      END_STATE();
    case 678:
      if (lookahead == 'p') ADVANCE(971);
      END_STATE();
    case 679:
      if (lookahead == 'p') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 680:
      if (lookahead == 'p') ADVANCE(622);
      END_STATE();
    case 681:
      if (lookahead == 'p') ADVANCE(242);
      END_STATE();
    case 682:
      if (lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 683:
      if (lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 684:
      if (lookahead == 'p') ADVANCE(267);
      END_STATE();
    case 685:
      if (lookahead == 'p') ADVANCE(481);
      END_STATE();
    case 686:
      if (lookahead == 'p') ADVANCE(829);
      END_STATE();
    case 687:
      if (lookahead == 'p') ADVANCE(293);
      END_STATE();
    case 688:
      if (lookahead == 'p') ADVANCE(315);
      END_STATE();
    case 689:
      if (lookahead == 'p') ADVANCE(316);
      END_STATE();
    case 690:
      if (lookahead == 'p') ADVANCE(492);
      END_STATE();
    case 691:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 692:
      if (lookahead == 'p') ADVANCE(339);
      END_STATE();
    case 693:
      if (lookahead == 'p') ADVANCE(500);
      END_STATE();
    case 694:
      if (lookahead == 'p') ADVANCE(501);
      END_STATE();
    case 695:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 696:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 697:
      if (lookahead == 'p') ADVANCE(852);
      END_STATE();
    case 698:
      if (lookahead == 'p') ADVANCE(509);
      END_STATE();
    case 699:
      if (lookahead == 'q') ADVANCE(879);
      END_STATE();
    case 700:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 701:
      if (lookahead == 'r') ADVANCE(1017);
      END_STATE();
    case 702:
      if (lookahead == 'r') ADVANCE(1019);
      END_STATE();
    case 703:
      if (lookahead == 'r') ADVANCE(957);
      END_STATE();
    case 704:
      if (lookahead == 'r') ADVANCE(1018);
      END_STATE();
    case 705:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 706:
      if (lookahead == 'r') ADVANCE(1020);
      END_STATE();
    case 707:
      if (lookahead == 'r') ADVANCE(1004);
      END_STATE();
    case 708:
      if (lookahead == 'r') ADVANCE(928);
      END_STATE();
    case 709:
      if (lookahead == 'r') ADVANCE(993);
      END_STATE();
    case 710:
      if (lookahead == 'r') ADVANCE(973);
      END_STATE();
    case 711:
      if (lookahead == 'r') ADVANCE(991);
      END_STATE();
    case 712:
      if (lookahead == 'r') ADVANCE(990);
      END_STATE();
    case 713:
      if (lookahead == 'r') ADVANCE(972);
      END_STATE();
    case 714:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 715:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 716:
      if (lookahead == 'r') ADVANCE(1016);
      END_STATE();
    case 717:
      if (lookahead == 'r') ADVANCE(1014);
      END_STATE();
    case 718:
      if (lookahead == 'r') ADVANCE(1003);
      END_STATE();
    case 719:
      if (lookahead == 'r') ADVANCE(1013);
      END_STATE();
    case 720:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 721:
      if (lookahead == 'r') ADVANCE(862);
      END_STATE();
    case 722:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 723:
      if (lookahead == 'r') ADVANCE(907);
      END_STATE();
    case 724:
      if (lookahead == 'r') ADVANCE(685);
      END_STATE();
    case 725:
      if (lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 726:
      if (lookahead == 'r') ADVANCE(863);
      END_STATE();
    case 727:
      if (lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 728:
      if (lookahead == 'r') ADVANCE(493);
      if (lookahead == 'y') ADVANCE(785);
      END_STATE();
    case 729:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 730:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 731:
      if (lookahead == 'r') ADVANCE(904);
      END_STATE();
    case 732:
      if (lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 733:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 734:
      if (lookahead == 'r') ADVANCE(621);
      END_STATE();
    case 735:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 736:
      if (lookahead == 'r') ADVANCE(624);
      END_STATE();
    case 737:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 738:
      if (lookahead == 'r') ADVANCE(645);
      END_STATE();
    case 739:
      if (lookahead == 'r') ADVANCE(802);
      END_STATE();
    case 740:
      if (lookahead == 'r') ADVANCE(618);
      END_STATE();
    case 741:
      if (lookahead == 'r') ADVANCE(480);
      END_STATE();
    case 742:
      if (lookahead == 'r') ADVANCE(834);
      END_STATE();
    case 743:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 744:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 745:
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 746:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 747:
      if (lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 748:
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 749:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 750:
      if (lookahead == 'r') ADVANCE(527);
      END_STATE();
    case 751:
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 752:
      if (lookahead == 'r') ADVANCE(573);
      END_STATE();
    case 753:
      if (lookahead == 'r') ADVANCE(861);
      END_STATE();
    case 754:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 755:
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 756:
      if (lookahead == 'r') ADVANCE(650);
      END_STATE();
    case 757:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 758:
      if (lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 759:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 760:
      if (lookahead == 'r') ADVANCE(499);
      END_STATE();
    case 761:
      if (lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 762:
      if (lookahead == 'r') ADVANCE(671);
      END_STATE();
    case 763:
      if (lookahead == 'r') ADVANCE(853);
      END_STATE();
    case 764:
      if (lookahead == 'r') ADVANCE(855);
      END_STATE();
    case 765:
      if (lookahead == 'r') ADVANCE(856);
      END_STATE();
    case 766:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 767:
      if (lookahead == 'r') ADVANCE(887);
      END_STATE();
    case 768:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 769:
      if (lookahead == 's') ADVANCE(935);
      END_STATE();
    case 770:
      if (lookahead == 's') ADVANCE(1064);
      END_STATE();
    case 771:
      if (lookahead == 's') ADVANCE(1006);
      END_STATE();
    case 772:
      if (lookahead == 's') ADVANCE(937);
      END_STATE();
    case 773:
      if (lookahead == 's') ADVANCE(956);
      END_STATE();
    case 774:
      if (lookahead == 's') ADVANCE(958);
      END_STATE();
    case 775:
      if (lookahead == 's') ADVANCE(1003);
      END_STATE();
    case 776:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 777:
      if (lookahead == 's') ADVANCE(356);
      END_STATE();
    case 778:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 779:
      if (lookahead == 's') ADVANCE(819);
      END_STATE();
    case 780:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 781:
      if (lookahead == 's') ADVANCE(429);
      END_STATE();
    case 782:
      if (lookahead == 's') ADVANCE(769);
      END_STATE();
    case 783:
      if (lookahead == 's') ADVANCE(770);
      END_STATE();
    case 784:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 785:
      if (lookahead == 's') ADVANCE(845);
      END_STATE();
    case 786:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 787:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 788:
      if (lookahead == 's') ADVANCE(409);
      END_STATE();
    case 789:
      if (lookahead == 's') ADVANCE(403);
      END_STATE();
    case 790:
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 791:
      if (lookahead == 's') ADVANCE(425);
      END_STATE();
    case 792:
      if (lookahead == 's') ADVANCE(523);
      END_STATE();
    case 793:
      if (lookahead == 's') ADVANCE(789);
      END_STATE();
    case 794:
      if (lookahead == 's') ADVANCE(450);
      END_STATE();
    case 795:
      if (lookahead == 's') ADVANCE(791);
      END_STATE();
    case 796:
      if (lookahead == 's') ADVANCE(525);
      END_STATE();
    case 797:
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 798:
      if (lookahead == 's') ADVANCE(338);
      END_STATE();
    case 799:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 800:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 801:
      if (lookahead == 't') ADVANCE(953);
      END_STATE();
    case 802:
      if (lookahead == 't') ADVANCE(922);
      END_STATE();
    case 803:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 804:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 805:
      if (lookahead == 't') ADVANCE(1005);
      END_STATE();
    case 806:
      if (lookahead == 't') ADVANCE(988);
      END_STATE();
    case 807:
      if (lookahead == 't') ADVANCE(925);
      END_STATE();
    case 808:
      if (lookahead == 't') ADVANCE(948);
      END_STATE();
    case 809:
      if (lookahead == 't') ADVANCE(947);
      END_STATE();
    case 810:
      if (lookahead == 't') ADVANCE(952);
      END_STATE();
    case 811:
      if (lookahead == 't') ADVANCE(1003);
      END_STATE();
    case 812:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 813:
      if (lookahead == 't') ADVANCE(902);
      END_STATE();
    case 814:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 815:
      if (lookahead == 't') ADVANCE(903);
      END_STATE();
    case 816:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 817:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 818:
      if (lookahead == 't') ADVANCE(906);
      END_STATE();
    case 819:
      if (lookahead == 't') ADVANCE(617);
      END_STATE();
    case 820:
      if (lookahead == 't') ADVANCE(905);
      END_STATE();
    case 821:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 822:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 823:
      if (lookahead == 't') ADVANCE(535);
      END_STATE();
    case 824:
      if (lookahead == 't') ADVANCE(773);
      END_STATE();
    case 825:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 826:
      if (lookahead == 't') ADVANCE(436);
      END_STATE();
    case 827:
      if (lookahead == 't') ADVANCE(757);
      END_STATE();
    case 828:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 829:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 830:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 831:
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 832:
      if (lookahead == 't') ADVANCE(880);
      END_STATE();
    case 833:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 834:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 835:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 836:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 837:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 838:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 839:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 840:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 841:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 842:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 843:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 844:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 845:
      if (lookahead == 't') ADVANCE(648);
      END_STATE();
    case 846:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 847:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 848:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 849:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 850:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 851:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 852:
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 853:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 854:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 855:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 856:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 857:
      if (lookahead == 't') ADVANCE(536);
      END_STATE();
    case 858:
      if (lookahead == 't') ADVANCE(537);
      END_STATE();
    case 859:
      if (lookahead == 'u') ADVANCE(601);
      END_STATE();
    case 860:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 861:
      if (lookahead == 'u') ADVANCE(786);
      END_STATE();
    case 862:
      if (lookahead == 'u') ADVANCE(686);
      END_STATE();
    case 863:
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 864:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 865:
      if (lookahead == 'u') ADVANCE(771);
      END_STATE();
    case 866:
      if (lookahead == 'u') ADVANCE(751);
      END_STATE();
    case 867:
      if (lookahead == 'u') ADVANCE(677);
      END_STATE();
    case 868:
      if (lookahead == 'u') ADVANCE(775);
      END_STATE();
    case 869:
      if (lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 870:
      if (lookahead == 'u') ADVANCE(575);
      END_STATE();
    case 871:
      if (lookahead == 'u') ADVANCE(581);
      END_STATE();
    case 872:
      if (lookahead == 'u') ADVANCE(708);
      END_STATE();
    case 873:
      if (lookahead == 'u') ADVANCE(582);
      END_STATE();
    case 874:
      if (lookahead == 'u') ADVANCE(585);
      END_STATE();
    case 875:
      if (lookahead == 'u') ADVANCE(587);
      END_STATE();
    case 876:
      if (lookahead == 'u') ADVANCE(588);
      END_STATE();
    case 877:
      if (lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 878:
      if (lookahead == 'u') ADVANCE(590);
      END_STATE();
    case 879:
      if (lookahead == 'u') ADVANCE(263);
      END_STATE();
    case 880:
      if (lookahead == 'u') ADVANCE(746);
      END_STATE();
    case 881:
      if (lookahead == 'u') ADVANCE(790);
      END_STATE();
    case 882:
      if (lookahead == 'u') ADVANCE(324);
      END_STATE();
    case 883:
      if (lookahead == 'u') ADVANCE(747);
      END_STATE();
    case 884:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 885:
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 886:
      if (lookahead == 'u') ADVANCE(604);
      END_STATE();
    case 887:
      if (lookahead == 'u') ADVANCE(799);
      END_STATE();
    case 888:
      if (lookahead == 'v') ADVANCE(266);
      END_STATE();
    case 889:
      if (lookahead == 'v') ADVANCE(271);
      END_STATE();
    case 890:
      if (lookahead == 'v') ADVANCE(286);
      END_STATE();
    case 891:
      if (lookahead == 'v') ADVANCE(291);
      END_STATE();
    case 892:
      if (lookahead == 'v') ADVANCE(294);
      END_STATE();
    case 893:
      if (lookahead == 'v') ADVANCE(296);
      END_STATE();
    case 894:
      if (lookahead == 'v') ADVANCE(346);
      END_STATE();
    case 895:
      if (lookahead == 'w') ADVANCE(919);
      END_STATE();
    case 896:
      if (lookahead == 'w') ADVANCE(1052);
      END_STATE();
    case 897:
      if (lookahead == 'w') ADVANCE(546);
      END_STATE();
    case 898:
      if (lookahead == 'w') ADVANCE(550);
      END_STATE();
    case 899:
      if (lookahead == 'x') ADVANCE(804);
      END_STATE();
    case 900:
      if (lookahead == 'x') ADVANCE(129);
      END_STATE();
    case 901:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 902:
      if (lookahead == 'y') ADVANCE(961);
      END_STATE();
    case 903:
      if (lookahead == 'y') ADVANCE(960);
      END_STATE();
    case 904:
      if (lookahead == 'y') ADVANCE(975);
      END_STATE();
    case 905:
      if (lookahead == 'y') ADVANCE(924);
      END_STATE();
    case 906:
      if (lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 907:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 908:
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 909:
      if (lookahead == 'y') ADVANCE(785);
      END_STATE();
    case 910:
      if (lookahead == 'y') ADVANCE(682);
      END_STATE();
    case 911:
      if (lookahead == 'y') ADVANCE(683);
      END_STATE();
    case 912:
      if (lookahead == 'z') ADVANCE(254);
      END_STATE();
    case 913:
      if (lookahead == 'z') ADVANCE(256);
      END_STATE();
    case 914:
      if (eof) ADVANCE(918);
      ADVANCE_MAP(
        '\n', 1104,
        '\r', 3,
        '!', 996,
        '"', 58,
        '#', 1102,
        '-', 19,
        '0', 1044,
        '1', 1042,
        '2', 1035,
        '3', 1034,
        '4', 1043,
        '<', 998,
        '=', 996,
        '>', 998,
        'A', 1041,
        'B', 1036,
        'C', 395,
        'D', 1040,
        'E', 460,
        'F', 83,
        'G', 1039,
        'H', 95,
        'I', 207,
        'K', 421,
        'L', 402,
        'M', 84,
        'N', 611,
        'O', 679,
        'P', 270,
        'Q', 860,
        'R', 1037,
        'S', 162,
        'T', 269,
        'U', 153,
        'W', 1038,
        'Y', 265,
        'Z', 100,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(914);
      if (lookahead == '5' ||
          lookahead == '6') ADVANCE(1045);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      END_STATE();
    case 915:
      if (eof) ADVANCE(918);
      ADVANCE_MAP(
        '\n', 1104,
        '\r', 3,
        '!', 996,
        '"', 1001,
        '#', 1102,
        '0', 1082,
        '<', 998,
        '=', 996,
        '>', 998,
        'A', 459,
        'B', 82,
        'C', 396,
        'D', 397,
        'E', 502,
        'F', 722,
        'G', 230,
        'H', 94,
        'I', 207,
        'K', 421,
        'L', 402,
        'M', 84,
        'N', 611,
        'O', 754,
        'P', 270,
        'Q', 860,
        'R', 85,
        'S', 163,
        'T', 714,
        'U', 153,
        'W', 104,
        'Y', 265,
        'Z', 100,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(916);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      END_STATE();
    case 916:
      if (eof) ADVANCE(918);
      ADVANCE_MAP(
        '\n', 1104,
        '\r', 3,
        '!', 996,
        '#', 1102,
        '0', 1082,
        '<', 998,
        '=', 996,
        '>', 998,
        'A', 459,
        'B', 82,
        'C', 396,
        'D', 397,
        'E', 502,
        'F', 722,
        'G', 230,
        'H', 94,
        'I', 207,
        'K', 421,
        'L', 402,
        'M', 84,
        'N', 611,
        'O', 754,
        'P', 270,
        'Q', 860,
        'R', 85,
        'S', 163,
        'T', 714,
        'U', 153,
        'W', 104,
        'Y', 265,
        'Z', 100,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(916);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      END_STATE();
    case 917:
      if (eof) ADVANCE(918);
      ADVANCE_MAP(
        '\n', 1104,
        '\r', 3,
        '#', 1102,
        'H', 422,
        'I', 510,
        'M', 419,
        'S', 383,
        '\t', 1103,
        ' ', 1103,
      );
      END_STATE();
    case 918:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_Show);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_Hide);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_Minimal);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_Import);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_Optional);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_AlternateQuality);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_AnyEnchantment);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_ArchnemesisMod);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_AreaLevel);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_BaseArmour);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_BaseDefencePercentile);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_BaseEnergyShield);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_BaseEvasion);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_BaseType);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_BaseWard);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_BlightedMap);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_Class);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_Corrupted);
      if (lookahead == 'M') ADVANCE(625);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_CorruptedMods);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_DropLevel);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_ElderItem);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_ElderMap);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_EnchantmentPassiveNode);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_EnchantmentPassiveNum);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_FracturedItem);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_GemLevel);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_GemQualityType);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_HasCruciblePassiveTree);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_HasEaterOfWorldsImplicit);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_HasEnchantment);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_HasExplicitMod);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_HasImplicitMod);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_HasInfluence);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_HasSearingExarchImplicit);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_Height);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_Identified);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_ItemLevel);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_LinkedSockets);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_MapTier);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_MemoryStrands);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_Mirrored);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_Quality);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_Rarity);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_Replica);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_Scourged);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_ShapedMap);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_ShaperItem);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_SocketGroup);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_Sockets);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_StackSize);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_SynthesisedItem);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_TransfiguredGem);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_UberBlightedMap);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_UnidentifiedItemTier);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_WaystoneTier);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_Width);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_ZanaMemory);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_PlayAlertSound);
      if (lookahead == 'P') ADVANCE(626);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_None);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_PlayAlertSoundPositional);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_CustomAlertSound);
      if (lookahead == 'O') ADVANCE(697);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_action_token1);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_CustomAlertSoundOptional);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_DisableDropSound);
      if (lookahead == 'I') ADVANCE(362);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_EnableDropSound);
      if (lookahead == 'I') ADVANCE(361);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_DisableDropSoundIfAlertSound);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_EnableDropSoundIfAlertSound);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_MinimapIcon);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_DASH1);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_PlayEffect);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_Temp);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_SetBackgroundColor);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_SetBorderColor);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_SetFontSize);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_SetTextColor);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_Continue);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym__equal_operator_token1);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym__equal_operator_token1);
      if (lookahead == '=') ADVANCE(995);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym__range_operator_token1);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym__range_operator_token1);
      if (lookahead == '=') ADVANCE(997);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_boolean);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1078);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'N') ADVANCE(616);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_quality_token1);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_Superior);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_Divergent);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_Anomalous);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_Phantasmal);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_rarity_token1);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_Normal);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_Magic);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_Rare);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_Unique);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_influence_token1);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_Shaper);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_Shaper);
      if (lookahead == 'I') ADVANCE(837);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_Elder);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_Elder);
      if (lookahead == 'I') ADVANCE(836);
      if (lookahead == 'M') ADVANCE(103);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_Crusader);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_Hunter);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_Redeemer);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_Warlord);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == '0') ADVANCE(1083);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1032);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == '5') ADVANCE(1084);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1085);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1032);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      ADVANCE_MAP(
        'a', 780,
        'l', 398,
        'r', 608,
        'A', 1032,
        'B', 1032,
        'D', 1032,
        'G', 1032,
        'R', 1032,
        'W', 1032,
      );
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1032);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      ADVANCE_MAP(
        'a', 728,
        'h', 427,
        'i', 209,
        'A', 1032,
        'B', 1032,
        'D', 1032,
        'G', 1032,
        'R', 1032,
        'W', 1032,
      );
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1032);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(612);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1032);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      ADVANCE_MAP(
        'l', 835,
        'n', 614,
        'r', 157,
        'A', 1032,
        'B', 1032,
        'D', 1032,
        'G', 1032,
        'R', 1032,
        'W', 1032,
      );
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(1085);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1085);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1032);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_sockets_token1);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == '0') ADVANCE(1083);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1044);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == '5') ADVANCE(1084);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1085);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1044);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      ADVANCE_MAP(
        'a', 780,
        'l', 398,
        'r', 608,
        'A', 1044,
        'B', 1044,
        'D', 1044,
        'G', 1044,
        'R', 1044,
        'W', 1044,
      );
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1044);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      ADVANCE_MAP(
        'a', 728,
        'h', 427,
        'i', 209,
        'A', 1044,
        'B', 1044,
        'D', 1044,
        'G', 1044,
        'R', 1044,
        'W', 1044,
      );
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1044);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(612);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1044);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      ADVANCE_MAP(
        'l', 835,
        'n', 614,
        'r', 157,
        'A', 1044,
        'B', 1044,
        'D', 1044,
        'G', 1044,
        'R', 1044,
        'W', 1044,
      );
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(1085);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1085);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1044);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_sockets_token2);
      if (lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'G' ||
          lookahead == 'R' ||
          lookahead == 'W') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_Red);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_Red);
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_Green);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_Blue);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_Brown);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_White);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_Yellow);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_Cyan);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_Grey);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_Orange);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_Pink);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_Purple);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_Circle);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_Diamond);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_Hexagon);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_Square);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_Star);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_Triangle);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_Cross);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_Moon);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_Raindrop);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_Kite);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_Pentagon);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_UpsideDownHouse);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ') ADVANCE(1070);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1071);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (set_contains(aux_sym_string_token1_character_set_1, 433, lookahead)) ADVANCE(1071);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'a') ADVANCE(1074);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1078);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'e') ADVANCE(1000);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1078);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'l') ADVANCE(1076);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1078);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'r') ADVANCE(1077);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1078);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 's') ADVANCE(1073);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1078);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'u') ADVANCE(1073);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1078);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (set_contains(aux_sym_string_token2_character_set_1, 432, lookahead)) ADVANCE(1078);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_file_token1);
      if (lookahead == ' ') ADVANCE(1079);
      if (lookahead == '#') ADVANCE(1080);
      if (lookahead > ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '?' &&
          lookahead != '|' &&
          (lookahead < 0x7f || 0x9f < lookahead)) ADVANCE(1081);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_file_token1);
      if ((!eof && lookahead <= '\t') ||
          (0x0b <= lookahead && lookahead <= 0x1f) ||
          lookahead == '"' ||
          lookahead == '*' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          lookahead == '|' ||
          (0x7f <= lookahead && lookahead <= 0x9f)) ADVANCE(1102);
      if (lookahead > 0x1f) ADVANCE(1080);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_file_token1);
      if (lookahead > 0x1f &&
          lookahead != '"' &&
          lookahead != '*' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '?' &&
          lookahead != '|' &&
          (lookahead < 0x7f || 0x9f < lookahead)) ADVANCE(1081);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(1085);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_number);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1085);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1085);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym__id_token1);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym__id_token1);
      if (('0' <= lookahead && lookahead <= '6')) ADVANCE(1086);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym__volume_token1);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym__volume_token1);
      if (lookahead == '0') ADVANCE(1088);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym__volume_token1);
      if (lookahead == '0') ADVANCE(1089);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym__volume_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym__volume_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1091);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym__color_token1);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (lookahead == '5') ADVANCE(1095);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1096);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1093);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1093);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1096);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym__icon_size_token1);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym__font_size_token1);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym__font_size_token1);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1099);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym__font_size_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1099);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1102);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1103);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 915},
  [3] = {.lex_state = 915},
  [4] = {.lex_state = 915},
  [5] = {.lex_state = 915},
  [6] = {.lex_state = 915},
  [7] = {.lex_state = 915},
  [8] = {.lex_state = 915},
  [9] = {.lex_state = 915},
  [10] = {.lex_state = 915},
  [11] = {.lex_state = 915},
  [12] = {.lex_state = 915},
  [13] = {.lex_state = 915},
  [14] = {.lex_state = 915},
  [15] = {.lex_state = 915},
  [16] = {.lex_state = 915},
  [17] = {.lex_state = 915},
  [18] = {.lex_state = 915},
  [19] = {.lex_state = 915},
  [20] = {.lex_state = 915},
  [21] = {.lex_state = 915},
  [22] = {.lex_state = 915},
  [23] = {.lex_state = 915},
  [24] = {.lex_state = 915},
  [25] = {.lex_state = 915},
  [26] = {.lex_state = 915},
  [27] = {.lex_state = 915},
  [28] = {.lex_state = 915},
  [29] = {.lex_state = 915},
  [30] = {.lex_state = 915},
  [31] = {.lex_state = 915},
  [32] = {.lex_state = 915},
  [33] = {.lex_state = 915},
  [34] = {.lex_state = 915},
  [35] = {.lex_state = 915},
  [36] = {.lex_state = 915},
  [37] = {.lex_state = 915},
  [38] = {.lex_state = 915},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 917},
  [45] = {.lex_state = 917},
  [46] = {.lex_state = 915},
  [47] = {.lex_state = 915},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 915},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 917},
  [56] = {.lex_state = 917},
  [57] = {.lex_state = 917},
  [58] = {.lex_state = 917},
  [59] = {.lex_state = 917},
  [60] = {.lex_state = 917},
  [61] = {.lex_state = 917},
  [62] = {.lex_state = 917},
  [63] = {.lex_state = 917},
  [64] = {.lex_state = 917},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 917},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 917},
  [71] = {.lex_state = 917},
  [72] = {.lex_state = 917},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 917},
  [75] = {.lex_state = 917},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 917},
  [78] = {.lex_state = 917},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 917},
  [81] = {.lex_state = 917},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 917},
  [84] = {.lex_state = 917},
  [85] = {.lex_state = 917},
  [86] = {.lex_state = 917},
  [87] = {.lex_state = 917},
  [88] = {.lex_state = 917},
  [89] = {.lex_state = 917},
  [90] = {.lex_state = 917},
  [91] = {.lex_state = 917},
  [92] = {.lex_state = 917},
  [93] = {.lex_state = 917},
  [94] = {.lex_state = 917},
  [95] = {.lex_state = 917},
  [96] = {.lex_state = 917},
  [97] = {.lex_state = 917},
  [98] = {.lex_state = 917},
  [99] = {.lex_state = 917},
  [100] = {.lex_state = 917},
  [101] = {.lex_state = 917},
  [102] = {.lex_state = 917},
  [103] = {.lex_state = 917},
  [104] = {.lex_state = 917},
  [105] = {.lex_state = 915},
  [106] = {.lex_state = 915},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 16},
  [109] = {.lex_state = 14},
  [110] = {.lex_state = 917},
  [111] = {.lex_state = 14},
  [112] = {.lex_state = 917},
  [113] = {.lex_state = 917},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 917},
  [116] = {.lex_state = 917},
  [117] = {.lex_state = 917},
  [118] = {.lex_state = 917},
  [119] = {.lex_state = 917},
  [120] = {.lex_state = 917},
  [121] = {.lex_state = 917},
  [122] = {.lex_state = 917},
  [123] = {.lex_state = 917},
  [124] = {.lex_state = 917},
  [125] = {.lex_state = 917},
  [126] = {.lex_state = 917},
  [127] = {.lex_state = 917},
  [128] = {.lex_state = 917},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 917},
  [131] = {.lex_state = 917},
  [132] = {.lex_state = 917},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 917},
  [135] = {.lex_state = 917},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 917},
  [141] = {.lex_state = 915},
  [142] = {.lex_state = 917},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 917},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 917},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 917},
  [153] = {.lex_state = 917},
  [154] = {.lex_state = 917},
  [155] = {.lex_state = 917},
  [156] = {.lex_state = 917},
  [157] = {.lex_state = 917},
  [158] = {.lex_state = 917},
  [159] = {.lex_state = 917},
  [160] = {.lex_state = 915},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 915},
  [166] = {.lex_state = 917},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 917},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 18},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 915},
  [175] = {.lex_state = 917},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 11},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 915},
  [184] = {.lex_state = 915},
  [185] = {.lex_state = 915},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 917},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 917},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 915},
  [192] = {.lex_state = 915},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 917},
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
    [anon_sym_MemoryStrands] = ACTIONS(1),
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
    [anon_sym_UnidentifiedItemTier] = ACTIONS(1),
    [anon_sym_WaystoneTier] = ACTIONS(1),
    [anon_sym_Width] = ACTIONS(1),
    [anon_sym_ZanaMemory] = ACTIONS(1),
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
    [sym_filter] = STATE(139),
    [sym_block] = STATE(40),
    [sym_import] = STATE(40),
    [aux_sym_filter_repeat1] = STATE(40),
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
    [anon_sym_MemoryStrands] = ACTIONS(19),
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
    [anon_sym_TransfiguredGem] = ACTIONS(39),
    [anon_sym_UberBlightedMap] = ACTIONS(15),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(19),
    [anon_sym_WaystoneTier] = ACTIONS(19),
    [anon_sym_Width] = ACTIONS(19),
    [anon_sym_ZanaMemory] = ACTIONS(15),
    [anon_sym_PlayAlertSound] = ACTIONS(41),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(43),
    [anon_sym_CustomAlertSound] = ACTIONS(45),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(47),
    [anon_sym_DisableDropSound] = ACTIONS(49),
    [anon_sym_EnableDropSound] = ACTIONS(49),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(51),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(51),
    [anon_sym_MinimapIcon] = ACTIONS(53),
    [anon_sym_PlayEffect] = ACTIONS(55),
    [anon_sym_SetBackgroundColor] = ACTIONS(57),
    [anon_sym_SetBorderColor] = ACTIONS(57),
    [anon_sym_SetFontSize] = ACTIONS(59),
    [anon_sym_SetTextColor] = ACTIONS(57),
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
    [anon_sym_MemoryStrands] = ACTIONS(73),
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
    [anon_sym_TransfiguredGem] = ACTIONS(103),
    [anon_sym_UberBlightedMap] = ACTIONS(67),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(73),
    [anon_sym_WaystoneTier] = ACTIONS(73),
    [anon_sym_Width] = ACTIONS(73),
    [anon_sym_ZanaMemory] = ACTIONS(67),
    [anon_sym_PlayAlertSound] = ACTIONS(106),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(109),
    [anon_sym_CustomAlertSound] = ACTIONS(112),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(115),
    [anon_sym_DisableDropSound] = ACTIONS(118),
    [anon_sym_EnableDropSound] = ACTIONS(118),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(121),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(121),
    [anon_sym_MinimapIcon] = ACTIONS(124),
    [anon_sym_PlayEffect] = ACTIONS(127),
    [anon_sym_SetBackgroundColor] = ACTIONS(130),
    [anon_sym_SetBorderColor] = ACTIONS(130),
    [anon_sym_SetFontSize] = ACTIONS(133),
    [anon_sym_SetTextColor] = ACTIONS(130),
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
    [anon_sym_MemoryStrands] = ACTIONS(142),
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
    [anon_sym_TransfiguredGem] = ACTIONS(142),
    [anon_sym_UberBlightedMap] = ACTIONS(142),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(142),
    [anon_sym_WaystoneTier] = ACTIONS(142),
    [anon_sym_Width] = ACTIONS(142),
    [anon_sym_ZanaMemory] = ACTIONS(142),
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
    [anon_sym_MemoryStrands] = ACTIONS(146),
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
    [anon_sym_TransfiguredGem] = ACTIONS(146),
    [anon_sym_UberBlightedMap] = ACTIONS(146),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(146),
    [anon_sym_WaystoneTier] = ACTIONS(146),
    [anon_sym_Width] = ACTIONS(146),
    [anon_sym_ZanaMemory] = ACTIONS(146),
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
    [anon_sym_MemoryStrands] = ACTIONS(150),
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
    [anon_sym_TransfiguredGem] = ACTIONS(150),
    [anon_sym_UberBlightedMap] = ACTIONS(150),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(150),
    [anon_sym_WaystoneTier] = ACTIONS(150),
    [anon_sym_Width] = ACTIONS(150),
    [anon_sym_ZanaMemory] = ACTIONS(150),
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
    [anon_sym_MemoryStrands] = ACTIONS(154),
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
    [anon_sym_TransfiguredGem] = ACTIONS(154),
    [anon_sym_UberBlightedMap] = ACTIONS(154),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(154),
    [anon_sym_WaystoneTier] = ACTIONS(154),
    [anon_sym_Width] = ACTIONS(154),
    [anon_sym_ZanaMemory] = ACTIONS(154),
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
    [anon_sym_MemoryStrands] = ACTIONS(158),
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
    [anon_sym_TransfiguredGem] = ACTIONS(158),
    [anon_sym_UberBlightedMap] = ACTIONS(158),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(158),
    [anon_sym_WaystoneTier] = ACTIONS(158),
    [anon_sym_Width] = ACTIONS(158),
    [anon_sym_ZanaMemory] = ACTIONS(158),
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
    [anon_sym_MemoryStrands] = ACTIONS(162),
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
    [anon_sym_TransfiguredGem] = ACTIONS(162),
    [anon_sym_UberBlightedMap] = ACTIONS(162),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(162),
    [anon_sym_WaystoneTier] = ACTIONS(162),
    [anon_sym_Width] = ACTIONS(162),
    [anon_sym_ZanaMemory] = ACTIONS(162),
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
    [anon_sym_MemoryStrands] = ACTIONS(166),
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
    [anon_sym_TransfiguredGem] = ACTIONS(166),
    [anon_sym_UberBlightedMap] = ACTIONS(166),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(166),
    [anon_sym_WaystoneTier] = ACTIONS(166),
    [anon_sym_Width] = ACTIONS(166),
    [anon_sym_ZanaMemory] = ACTIONS(166),
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
    [anon_sym_MemoryStrands] = ACTIONS(170),
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
    [anon_sym_TransfiguredGem] = ACTIONS(170),
    [anon_sym_UberBlightedMap] = ACTIONS(170),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(170),
    [anon_sym_WaystoneTier] = ACTIONS(170),
    [anon_sym_Width] = ACTIONS(170),
    [anon_sym_ZanaMemory] = ACTIONS(170),
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
    [anon_sym_MemoryStrands] = ACTIONS(174),
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
    [anon_sym_TransfiguredGem] = ACTIONS(174),
    [anon_sym_UberBlightedMap] = ACTIONS(174),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(174),
    [anon_sym_WaystoneTier] = ACTIONS(174),
    [anon_sym_Width] = ACTIONS(174),
    [anon_sym_ZanaMemory] = ACTIONS(174),
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
    [anon_sym_MemoryStrands] = ACTIONS(158),
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
    [anon_sym_TransfiguredGem] = ACTIONS(158),
    [anon_sym_UberBlightedMap] = ACTIONS(158),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(158),
    [anon_sym_WaystoneTier] = ACTIONS(158),
    [anon_sym_Width] = ACTIONS(158),
    [anon_sym_ZanaMemory] = ACTIONS(158),
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
    [anon_sym_MemoryStrands] = ACTIONS(178),
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
    [anon_sym_TransfiguredGem] = ACTIONS(178),
    [anon_sym_UberBlightedMap] = ACTIONS(178),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(178),
    [anon_sym_WaystoneTier] = ACTIONS(178),
    [anon_sym_Width] = ACTIONS(178),
    [anon_sym_ZanaMemory] = ACTIONS(178),
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
    [anon_sym_MemoryStrands] = ACTIONS(182),
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
    [anon_sym_TransfiguredGem] = ACTIONS(182),
    [anon_sym_UberBlightedMap] = ACTIONS(182),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(182),
    [anon_sym_WaystoneTier] = ACTIONS(182),
    [anon_sym_Width] = ACTIONS(182),
    [anon_sym_ZanaMemory] = ACTIONS(182),
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
    [anon_sym_MemoryStrands] = ACTIONS(186),
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
    [anon_sym_TransfiguredGem] = ACTIONS(186),
    [anon_sym_UberBlightedMap] = ACTIONS(186),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(186),
    [anon_sym_WaystoneTier] = ACTIONS(186),
    [anon_sym_Width] = ACTIONS(186),
    [anon_sym_ZanaMemory] = ACTIONS(186),
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
    [anon_sym_MemoryStrands] = ACTIONS(190),
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
    [anon_sym_TransfiguredGem] = ACTIONS(190),
    [anon_sym_UberBlightedMap] = ACTIONS(190),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(190),
    [anon_sym_WaystoneTier] = ACTIONS(190),
    [anon_sym_Width] = ACTIONS(190),
    [anon_sym_ZanaMemory] = ACTIONS(190),
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
    [anon_sym_MemoryStrands] = ACTIONS(194),
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
    [anon_sym_TransfiguredGem] = ACTIONS(194),
    [anon_sym_UberBlightedMap] = ACTIONS(194),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(194),
    [anon_sym_WaystoneTier] = ACTIONS(194),
    [anon_sym_Width] = ACTIONS(194),
    [anon_sym_ZanaMemory] = ACTIONS(194),
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
    [anon_sym_MemoryStrands] = ACTIONS(198),
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
    [anon_sym_TransfiguredGem] = ACTIONS(198),
    [anon_sym_UberBlightedMap] = ACTIONS(198),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(198),
    [anon_sym_WaystoneTier] = ACTIONS(198),
    [anon_sym_Width] = ACTIONS(198),
    [anon_sym_ZanaMemory] = ACTIONS(198),
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
    [anon_sym_MemoryStrands] = ACTIONS(202),
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
    [anon_sym_TransfiguredGem] = ACTIONS(202),
    [anon_sym_UberBlightedMap] = ACTIONS(202),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(202),
    [anon_sym_WaystoneTier] = ACTIONS(202),
    [anon_sym_Width] = ACTIONS(202),
    [anon_sym_ZanaMemory] = ACTIONS(202),
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
    [anon_sym_MemoryStrands] = ACTIONS(206),
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
    [anon_sym_TransfiguredGem] = ACTIONS(206),
    [anon_sym_UberBlightedMap] = ACTIONS(206),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(206),
    [anon_sym_WaystoneTier] = ACTIONS(206),
    [anon_sym_Width] = ACTIONS(206),
    [anon_sym_ZanaMemory] = ACTIONS(206),
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
    [anon_sym_MemoryStrands] = ACTIONS(210),
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
    [anon_sym_TransfiguredGem] = ACTIONS(210),
    [anon_sym_UberBlightedMap] = ACTIONS(210),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(210),
    [anon_sym_WaystoneTier] = ACTIONS(210),
    [anon_sym_Width] = ACTIONS(210),
    [anon_sym_ZanaMemory] = ACTIONS(210),
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
    [anon_sym_MemoryStrands] = ACTIONS(214),
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
    [anon_sym_TransfiguredGem] = ACTIONS(214),
    [anon_sym_UberBlightedMap] = ACTIONS(214),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(214),
    [anon_sym_WaystoneTier] = ACTIONS(214),
    [anon_sym_Width] = ACTIONS(214),
    [anon_sym_ZanaMemory] = ACTIONS(214),
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
    [anon_sym_MemoryStrands] = ACTIONS(218),
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
    [anon_sym_TransfiguredGem] = ACTIONS(218),
    [anon_sym_UberBlightedMap] = ACTIONS(218),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(218),
    [anon_sym_WaystoneTier] = ACTIONS(218),
    [anon_sym_Width] = ACTIONS(218),
    [anon_sym_ZanaMemory] = ACTIONS(218),
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
    [anon_sym_MemoryStrands] = ACTIONS(222),
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
    [anon_sym_TransfiguredGem] = ACTIONS(222),
    [anon_sym_UberBlightedMap] = ACTIONS(222),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(222),
    [anon_sym_WaystoneTier] = ACTIONS(222),
    [anon_sym_Width] = ACTIONS(222),
    [anon_sym_ZanaMemory] = ACTIONS(222),
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
    [anon_sym_MemoryStrands] = ACTIONS(226),
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
    [anon_sym_TransfiguredGem] = ACTIONS(226),
    [anon_sym_UberBlightedMap] = ACTIONS(226),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(226),
    [anon_sym_WaystoneTier] = ACTIONS(226),
    [anon_sym_Width] = ACTIONS(226),
    [anon_sym_ZanaMemory] = ACTIONS(226),
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
    [anon_sym_MemoryStrands] = ACTIONS(230),
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
    [anon_sym_TransfiguredGem] = ACTIONS(230),
    [anon_sym_UberBlightedMap] = ACTIONS(230),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(230),
    [anon_sym_WaystoneTier] = ACTIONS(230),
    [anon_sym_Width] = ACTIONS(230),
    [anon_sym_ZanaMemory] = ACTIONS(230),
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
    [anon_sym_MemoryStrands] = ACTIONS(234),
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
    [anon_sym_TransfiguredGem] = ACTIONS(234),
    [anon_sym_UberBlightedMap] = ACTIONS(234),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(234),
    [anon_sym_WaystoneTier] = ACTIONS(234),
    [anon_sym_Width] = ACTIONS(234),
    [anon_sym_ZanaMemory] = ACTIONS(234),
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
    [anon_sym_MemoryStrands] = ACTIONS(238),
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
    [anon_sym_TransfiguredGem] = ACTIONS(238),
    [anon_sym_UberBlightedMap] = ACTIONS(238),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(238),
    [anon_sym_WaystoneTier] = ACTIONS(238),
    [anon_sym_Width] = ACTIONS(238),
    [anon_sym_ZanaMemory] = ACTIONS(238),
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
    [anon_sym_MemoryStrands] = ACTIONS(242),
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
    [anon_sym_TransfiguredGem] = ACTIONS(242),
    [anon_sym_UberBlightedMap] = ACTIONS(242),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(242),
    [anon_sym_WaystoneTier] = ACTIONS(242),
    [anon_sym_Width] = ACTIONS(242),
    [anon_sym_ZanaMemory] = ACTIONS(242),
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
    [anon_sym_Continue] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(242),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(246),
    [anon_sym_Show] = ACTIONS(246),
    [anon_sym_Hide] = ACTIONS(246),
    [anon_sym_Minimal] = ACTIONS(246),
    [anon_sym_Import] = ACTIONS(246),
    [anon_sym_AlternateQuality] = ACTIONS(246),
    [anon_sym_AnyEnchantment] = ACTIONS(246),
    [anon_sym_ArchnemesisMod] = ACTIONS(246),
    [anon_sym_AreaLevel] = ACTIONS(246),
    [anon_sym_BaseArmour] = ACTIONS(246),
    [anon_sym_BaseDefencePercentile] = ACTIONS(246),
    [anon_sym_BaseEnergyShield] = ACTIONS(246),
    [anon_sym_BaseEvasion] = ACTIONS(246),
    [anon_sym_BaseType] = ACTIONS(246),
    [anon_sym_BaseWard] = ACTIONS(246),
    [anon_sym_BlightedMap] = ACTIONS(246),
    [anon_sym_Class] = ACTIONS(246),
    [anon_sym_Corrupted] = ACTIONS(248),
    [anon_sym_CorruptedMods] = ACTIONS(246),
    [anon_sym_DropLevel] = ACTIONS(246),
    [anon_sym_ElderItem] = ACTIONS(246),
    [anon_sym_ElderMap] = ACTIONS(246),
    [anon_sym_EnchantmentPassiveNode] = ACTIONS(246),
    [anon_sym_EnchantmentPassiveNum] = ACTIONS(246),
    [anon_sym_FracturedItem] = ACTIONS(246),
    [anon_sym_GemLevel] = ACTIONS(246),
    [anon_sym_GemQualityType] = ACTIONS(246),
    [anon_sym_HasCruciblePassiveTree] = ACTIONS(246),
    [anon_sym_HasEaterOfWorldsImplicit] = ACTIONS(246),
    [anon_sym_HasEnchantment] = ACTIONS(246),
    [anon_sym_HasExplicitMod] = ACTIONS(246),
    [anon_sym_HasImplicitMod] = ACTIONS(246),
    [anon_sym_HasInfluence] = ACTIONS(246),
    [anon_sym_HasSearingExarchImplicit] = ACTIONS(246),
    [anon_sym_Height] = ACTIONS(246),
    [anon_sym_Identified] = ACTIONS(246),
    [anon_sym_ItemLevel] = ACTIONS(246),
    [anon_sym_LinkedSockets] = ACTIONS(246),
    [anon_sym_MapTier] = ACTIONS(246),
    [anon_sym_MemoryStrands] = ACTIONS(246),
    [anon_sym_Mirrored] = ACTIONS(246),
    [anon_sym_Quality] = ACTIONS(246),
    [anon_sym_Rarity] = ACTIONS(246),
    [anon_sym_Replica] = ACTIONS(246),
    [anon_sym_Scourged] = ACTIONS(246),
    [anon_sym_ShapedMap] = ACTIONS(246),
    [anon_sym_ShaperItem] = ACTIONS(246),
    [anon_sym_SocketGroup] = ACTIONS(246),
    [anon_sym_Sockets] = ACTIONS(246),
    [anon_sym_StackSize] = ACTIONS(246),
    [anon_sym_SynthesisedItem] = ACTIONS(246),
    [anon_sym_TransfiguredGem] = ACTIONS(246),
    [anon_sym_UberBlightedMap] = ACTIONS(246),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(246),
    [anon_sym_WaystoneTier] = ACTIONS(246),
    [anon_sym_Width] = ACTIONS(246),
    [anon_sym_ZanaMemory] = ACTIONS(246),
    [anon_sym_PlayAlertSound] = ACTIONS(248),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(246),
    [anon_sym_CustomAlertSound] = ACTIONS(248),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(246),
    [anon_sym_DisableDropSound] = ACTIONS(248),
    [anon_sym_EnableDropSound] = ACTIONS(248),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(246),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(246),
    [anon_sym_MinimapIcon] = ACTIONS(246),
    [anon_sym_PlayEffect] = ACTIONS(246),
    [anon_sym_SetBackgroundColor] = ACTIONS(246),
    [anon_sym_SetBorderColor] = ACTIONS(246),
    [anon_sym_SetFontSize] = ACTIONS(246),
    [anon_sym_SetTextColor] = ACTIONS(246),
    [anon_sym_Continue] = ACTIONS(246),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(246),
  },
  [32] = {
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
    [anon_sym_MemoryStrands] = ACTIONS(19),
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
    [anon_sym_TransfiguredGem] = ACTIONS(39),
    [anon_sym_UberBlightedMap] = ACTIONS(15),
    [anon_sym_UnidentifiedItemTier] = ACTIONS(19),
    [anon_sym_WaystoneTier] = ACTIONS(19),
    [anon_sym_Width] = ACTIONS(19),
    [anon_sym_ZanaMemory] = ACTIONS(15),
    [anon_sym_PlayAlertSound] = ACTIONS(41),
    [anon_sym_PlayAlertSoundPositional] = ACTIONS(43),
    [anon_sym_CustomAlertSound] = ACTIONS(45),
    [anon_sym_CustomAlertSoundOptional] = ACTIONS(47),
    [anon_sym_DisableDropSound] = ACTIONS(49),
    [anon_sym_EnableDropSound] = ACTIONS(49),
    [anon_sym_DisableDropSoundIfAlertSound] = ACTIONS(51),
    [anon_sym_EnableDropSoundIfAlertSound] = ACTIONS(51),
    [anon_sym_MinimapIcon] = ACTIONS(53),
    [anon_sym_PlayEffect] = ACTIONS(55),
    [anon_sym_SetBackgroundColor] = ACTIONS(57),
    [anon_sym_SetBorderColor] = ACTIONS(57),
    [anon_sym_SetFontSize] = ACTIONS(59),
    [anon_sym_SetTextColor] = ACTIONS(57),
    [anon_sym_Continue] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [sym__eol] = ACTIONS(250),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(179), 1,
      sym_shape,
    ACTIONS(252), 12,
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
  [21] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(180), 1,
      sym_shape,
    ACTIONS(252), 12,
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
  [42] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_None,
    STATE(104), 1,
      sym_colour,
    ACTIONS(256), 11,
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
  [65] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(166), 1,
      sym_colour,
    ACTIONS(256), 11,
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
    STATE(194), 1,
      sym_colour,
    ACTIONS(256), 11,
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
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      sym_rarity,
    ACTIONS(258), 2,
      aux_sym__equal_operator_token1,
      aux_sym__range_operator_token1,
    STATE(94), 2,
      sym__equal_operator,
      sym__range_operator,
    ACTIONS(262), 4,
      anon_sym_Normal,
      anon_sym_Magic,
      anon_sym_Rare,
      anon_sym_Unique,
  [129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_influence,
    ACTIONS(264), 7,
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
    ACTIONS(9), 1,
      anon_sym_Import,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 1,
      sym__eol,
    ACTIONS(7), 3,
      anon_sym_Show,
      anon_sym_Hide,
      anon_sym_Minimal,
    STATE(42), 3,
      sym_block,
      sym_import,
      aux_sym_filter_repeat1,
  [171] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      aux_sym_string_token2,
    ACTIONS(278), 1,
      sym_number,
    STATE(115), 1,
      sym__quantity,
    STATE(117), 1,
      sym_string,
    ACTIONS(272), 2,
      aux_sym__equal_operator_token1,
      aux_sym__range_operator_token1,
    STATE(191), 2,
      sym__equal_operator,
      sym__range_operator,
  [198] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(285), 1,
      anon_sym_Import,
    ACTIONS(288), 1,
      sym__eol,
    ACTIONS(282), 3,
      anon_sym_Show,
      anon_sym_Hide,
      anon_sym_Minimal,
    STATE(42), 3,
      sym_block,
      sym_import,
      aux_sym_filter_repeat1,
  [221] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      aux_sym_sockets_token2,
    STATE(98), 1,
      sym_sockets,
    ACTIONS(291), 2,
      aux_sym__equal_operator_token1,
      aux_sym__range_operator_token1,
    STATE(97), 2,
      sym__equal_operator,
      sym__range_operator,
  [242] = 4,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym__space,
    ACTIONS(299), 5,
      anon_sym_Show,
      anon_sym_Hide,
      anon_sym_Minimal,
      anon_sym_Import,
      sym__eol,
  [259] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      sym__space,
    ACTIONS(307), 5,
      anon_sym_Show,
      anon_sym_Hide,
      anon_sym_Minimal,
      anon_sym_Import,
      sym__eol,
  [274] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym_number,
    STATE(137), 1,
      sym__quantity,
    ACTIONS(309), 2,
      aux_sym__equal_operator_token1,
      aux_sym__range_operator_token1,
    STATE(160), 2,
      sym__equal_operator,
      sym__range_operator,
  [292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      sym_rarity,
    ACTIONS(262), 4,
      anon_sym_Normal,
      anon_sym_Magic,
      anon_sym_Rare,
      anon_sym_Unique,
  [308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 6,
      ts_builtin_sym_end,
      anon_sym_Show,
      anon_sym_Hide,
      anon_sym_Minimal,
      anon_sym_Import,
      sym__eol,
  [320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      sym_quality,
    ACTIONS(317), 4,
      anon_sym_Superior,
      anon_sym_Divergent,
      anon_sym_Anomalous,
      anon_sym_Phantasmal,
  [336] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      aux_sym_string_token2,
    ACTIONS(278), 1,
      aux_sym__equal_operator_token1,
    STATE(115), 1,
      sym__equal_operator,
    STATE(117), 1,
      sym_string,
  [355] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      aux_sym_string_token2,
    ACTIONS(319), 1,
      aux_sym__equal_operator_token1,
    STATE(123), 1,
      sym__equal_operator,
    STATE(124), 1,
      sym_string,
  [374] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      aux_sym_string_token2,
    ACTIONS(321), 1,
      aux_sym__equal_operator_token1,
    STATE(127), 1,
      sym__equal_operator,
    STATE(128), 1,
      sym_string,
  [393] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      aux_sym_string_token2,
    ACTIONS(323), 1,
      aux_sym__equal_operator_token1,
    STATE(112), 1,
      sym_string,
    STATE(135), 1,
      sym__equal_operator,
  [412] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym_boolean,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      aux_sym_string_token2,
    STATE(144), 1,
      sym_string,
  [428] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym__space,
    ACTIONS(333), 1,
      sym__eol,
    STATE(78), 1,
      aux_sym_condition_repeat2,
  [441] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym__space,
    ACTIONS(337), 1,
      sym__eol,
    STATE(71), 1,
      aux_sym_condition_repeat6,
  [454] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__space,
    ACTIONS(341), 1,
      sym__eol,
    STATE(75), 1,
      aux_sym_condition_repeat1,
  [467] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym__space,
    ACTIONS(343), 1,
      sym__eol,
    STATE(78), 1,
      aux_sym_condition_repeat2,
  [480] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym__space,
    ACTIONS(347), 1,
      sym__eol,
    STATE(81), 1,
      aux_sym_condition_repeat3,
  [493] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym__space,
    ACTIONS(351), 1,
      sym__eol,
    STATE(84), 1,
      aux_sym_condition_repeat4,
  [506] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym__space,
    ACTIONS(355), 1,
      sym__eol,
    STATE(74), 1,
      aux_sym_condition_repeat7,
  [519] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__eol,
    ACTIONS(357), 1,
      sym__space,
    STATE(68), 1,
      aux_sym_condition_repeat8,
  [532] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym__space,
    ACTIONS(362), 1,
      sym__eol,
    STATE(63), 1,
      aux_sym_condition_repeat5,
  [545] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__eol,
    ACTIONS(357), 1,
      sym__space,
    STATE(68), 1,
      aux_sym_condition_repeat8,
  [558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      aux_sym_sockets_token2,
    STATE(98), 1,
      sym_sockets,
  [571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_None,
    ACTIONS(366), 1,
      aux_sym__id_token1,
    STATE(100), 1,
      sym__id,
  [584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      aux_sym_action_token1,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_file,
  [597] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym__space,
    ACTIONS(373), 1,
      sym__eol,
    STATE(68), 1,
      aux_sym_condition_repeat8,
  [610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_DASH1,
    ACTIONS(377), 1,
      aux_sym__icon_size_token1,
    STATE(153), 1,
      sym__icon_size,
  [623] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym__space,
    ACTIONS(379), 1,
      sym__eol,
    STATE(81), 1,
      aux_sym_condition_repeat3,
  [636] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__space,
    ACTIONS(384), 1,
      sym__eol,
    STATE(71), 1,
      aux_sym_condition_repeat6,
  [649] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym__space,
    ACTIONS(386), 1,
      sym__eol,
    STATE(84), 1,
      aux_sym_condition_repeat4,
  [662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      aux_sym_string_token2,
    STATE(117), 1,
      sym_string,
  [675] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym__space,
    ACTIONS(391), 1,
      sym__eol,
    STATE(74), 1,
      aux_sym_condition_repeat7,
  [688] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym__space,
    ACTIONS(396), 1,
      sym__eol,
    STATE(75), 1,
      aux_sym_condition_repeat1,
  [701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      aux_sym_string_token2,
    STATE(124), 1,
      sym_string,
  [714] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__eol,
    ACTIONS(398), 1,
      sym__space,
    STATE(63), 1,
      aux_sym_condition_repeat5,
  [727] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(400), 1,
      sym__space,
    ACTIONS(403), 1,
      sym__eol,
    STATE(78), 1,
      aux_sym_condition_repeat2,
  [740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      aux_sym_string_token2,
    STATE(128), 1,
      sym_string,
  [753] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__space,
    ACTIONS(405), 1,
      sym__eol,
    STATE(75), 1,
      aux_sym_condition_repeat1,
  [766] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(407), 1,
      sym__space,
    ACTIONS(410), 1,
      sym__eol,
    STATE(81), 1,
      aux_sym_condition_repeat3,
  [779] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      aux_sym_string_token2,
    STATE(112), 1,
      sym_string,
  [792] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__space,
    ACTIONS(412), 1,
      sym__eol,
    STATE(75), 1,
      aux_sym_condition_repeat1,
  [805] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym__space,
    ACTIONS(417), 1,
      sym__eol,
    STATE(84), 1,
      aux_sym_condition_repeat4,
  [818] = 4,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__eol,
    ACTIONS(353), 1,
      sym__space,
    STATE(74), 1,
      aux_sym_condition_repeat7,
  [831] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym__space,
    STATE(55), 1,
      aux_sym_condition_repeat2,
  [841] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym__space,
    STATE(64), 1,
      aux_sym_condition_repeat8,
  [851] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(423), 1,
      sym__space,
    ACTIONS(425), 1,
      sym__eol,
  [861] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym__eol,
    ACTIONS(427), 1,
      sym__space,
  [871] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym__space,
    ACTIONS(431), 1,
      sym__eol,
  [881] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__eol,
    ACTIONS(433), 1,
      sym__space,
  [891] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym__space,
    ACTIONS(437), 1,
      sym__eol,
  [901] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym__space,
    ACTIONS(441), 1,
      sym__eol,
  [911] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym__space,
    STATE(61), 1,
      aux_sym_condition_repeat7,
  [921] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym__eol,
    ACTIONS(443), 1,
      sym__space,
  [931] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym__space,
    ACTIONS(447), 1,
      sym__eol,
  [941] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym__space,
    STATE(62), 1,
      aux_sym_condition_repeat8,
  [951] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym__eol,
    ACTIONS(449), 1,
      sym__space,
  [961] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym__space,
    ACTIONS(453), 1,
      sym__eol,
  [971] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym__space,
    ACTIONS(457), 1,
      sym__eol,
  [981] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym__space,
    ACTIONS(461), 1,
      sym__eol,
  [991] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym__eol,
    ACTIONS(463), 1,
      sym__space,
  [1001] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym__space,
    ACTIONS(467), 1,
      sym__eol,
  [1011] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(461), 1,
      sym__eol,
    ACTIONS(469), 1,
      sym__space,
  [1021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_file,
  [1031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      sym_file,
  [1041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      aux_sym__color_token1,
    STATE(159), 1,
      sym__color,
  [1051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      aux_sym__font_size_token1,
    STATE(161), 1,
      sym__font_size,
  [1061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      aux_sym__volume_token1,
    STATE(162), 1,
      sym__volume,
  [1071] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym__space,
    STATE(85), 1,
      aux_sym_condition_repeat7,
  [1081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      aux_sym__volume_token1,
    STATE(164), 1,
      sym__volume,
  [1091] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym__space,
    ACTIONS(485), 1,
      sym__eol,
  [1101] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym__space,
    ACTIONS(489), 1,
      sym__eol,
  [1111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      aux_sym__color_token1,
    STATE(169), 1,
      sym__color,
  [1121] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__space,
    STATE(57), 1,
      aux_sym_condition_repeat1,
  [1131] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym__space,
    ACTIONS(495), 1,
      sym__eol,
  [1141] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym__space,
    ACTIONS(499), 1,
      sym__eol,
  [1151] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__space,
    STATE(80), 1,
      aux_sym_condition_repeat1,
  [1161] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym__space,
    ACTIONS(505), 1,
      sym__eol,
  [1171] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym__space,
    ACTIONS(509), 1,
      sym__eol,
  [1181] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym__space,
    ACTIONS(513), 1,
      sym__eol,
  [1191] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__space,
    ACTIONS(517), 1,
      sym__eol,
  [1201] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym__space,
    STATE(58), 1,
      aux_sym_condition_repeat2,
  [1211] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym__space,
    ACTIONS(521), 1,
      sym__eol,
  [1221] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(523), 1,
      sym__space,
    STATE(70), 1,
      aux_sym_condition_repeat3,
  [1231] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__space,
    STATE(72), 1,
      aux_sym_condition_repeat4,
  [1241] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym__space,
    STATE(59), 1,
      aux_sym_condition_repeat3,
  [1251] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym__space,
    ACTIONS(529), 1,
      sym__eol,
  [1261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      aux_sym__color_token1,
    STATE(130), 1,
      sym__color,
  [1271] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(533), 1,
      sym__space,
    ACTIONS(535), 1,
      sym__eol,
  [1281] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym__space,
    STATE(77), 1,
      aux_sym_condition_repeat5,
  [1291] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(537), 1,
      sym__space,
    STATE(83), 1,
      aux_sym_condition_repeat1,
  [1301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      aux_sym__color_token1,
    STATE(186), 1,
      sym__color,
  [1311] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym__space,
    STATE(56), 1,
      aux_sym_condition_repeat6,
  [1321] = 3,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym__space,
    STATE(60), 1,
      aux_sym_condition_repeat4,
  [1331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      aux_sym__volume_token1,
    STATE(163), 1,
      sym__volume,
  [1341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym__eol,
  [1348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym_boolean,
  [1355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      ts_builtin_sym_end,
  [1362] = 2,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(547), 1,
      sym__space,
  [1369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
  [1376] = 2,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym__space,
  [1383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_Optional,
  [1390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      sym__eol,
  [1397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      aux_sym_rarity_token1,
  [1404] = 2,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(559), 1,
      aux_sym_string_token1,
  [1411] = 2,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(561), 1,
      sym__space,
  [1418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_Temp,
  [1425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_Temp,
  [1432] = 2,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(567), 1,
      sym__space,
  [1439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym__eol,
  [1446] = 2,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym__space,
  [1453] = 2,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(573), 1,
      sym__space,
  [1460] = 2,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(575), 1,
      sym__space,
  [1467] = 2,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym__space,
  [1474] = 2,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__space,
  [1481] = 2,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym__space,
  [1488] = 2,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym__space,
  [1495] = 2,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(585), 1,
      sym__space,
  [1502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      sym_number,
  [1509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__eol,
  [1516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym__eol,
  [1523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym__eol,
  [1530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym__eol,
  [1537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_DQUOTE,
  [1544] = 2,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(599), 1,
      sym__space,
  [1551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym__eol,
  [1558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym__eol,
  [1565] = 2,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym__space,
  [1572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym__eol,
  [1579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      aux_sym_sockets_token1,
  [1586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym__eol,
  [1593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_boolean,
  [1600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_DQUOTE,
  [1607] = 2,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym__space,
  [1614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      sym__eol,
  [1621] = 2,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(621), 1,
      aux_sym_file_token1,
  [1628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym__eol,
  [1635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym__eol,
  [1642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym__eol,
  [1649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      aux_sym_influence_token1,
  [1656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      aux_sym_quality_token1,
  [1663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_DQUOTE,
  [1670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_DQUOTE,
  [1677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_DQUOTE,
  [1684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      sym__eol,
  [1691] = 2,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(641), 1,
      sym__space,
  [1698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym__eol,
  [1705] = 2,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(619), 1,
      sym__space,
  [1712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym__eol,
  [1719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_number,
  [1726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_DQUOTE,
  [1733] = 2,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(647), 1,
      aux_sym_string_token1,
  [1740] = 2,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(649), 1,
      sym__space,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(33)] = 0,
  [SMALL_STATE(34)] = 21,
  [SMALL_STATE(35)] = 42,
  [SMALL_STATE(36)] = 65,
  [SMALL_STATE(37)] = 85,
  [SMALL_STATE(38)] = 105,
  [SMALL_STATE(39)] = 129,
  [SMALL_STATE(40)] = 148,
  [SMALL_STATE(41)] = 171,
  [SMALL_STATE(42)] = 198,
  [SMALL_STATE(43)] = 221,
  [SMALL_STATE(44)] = 242,
  [SMALL_STATE(45)] = 259,
  [SMALL_STATE(46)] = 274,
  [SMALL_STATE(47)] = 292,
  [SMALL_STATE(48)] = 308,
  [SMALL_STATE(49)] = 320,
  [SMALL_STATE(50)] = 336,
  [SMALL_STATE(51)] = 355,
  [SMALL_STATE(52)] = 374,
  [SMALL_STATE(53)] = 393,
  [SMALL_STATE(54)] = 412,
  [SMALL_STATE(55)] = 428,
  [SMALL_STATE(56)] = 441,
  [SMALL_STATE(57)] = 454,
  [SMALL_STATE(58)] = 467,
  [SMALL_STATE(59)] = 480,
  [SMALL_STATE(60)] = 493,
  [SMALL_STATE(61)] = 506,
  [SMALL_STATE(62)] = 519,
  [SMALL_STATE(63)] = 532,
  [SMALL_STATE(64)] = 545,
  [SMALL_STATE(65)] = 558,
  [SMALL_STATE(66)] = 571,
  [SMALL_STATE(67)] = 584,
  [SMALL_STATE(68)] = 597,
  [SMALL_STATE(69)] = 610,
  [SMALL_STATE(70)] = 623,
  [SMALL_STATE(71)] = 636,
  [SMALL_STATE(72)] = 649,
  [SMALL_STATE(73)] = 662,
  [SMALL_STATE(74)] = 675,
  [SMALL_STATE(75)] = 688,
  [SMALL_STATE(76)] = 701,
  [SMALL_STATE(77)] = 714,
  [SMALL_STATE(78)] = 727,
  [SMALL_STATE(79)] = 740,
  [SMALL_STATE(80)] = 753,
  [SMALL_STATE(81)] = 766,
  [SMALL_STATE(82)] = 779,
  [SMALL_STATE(83)] = 792,
  [SMALL_STATE(84)] = 805,
  [SMALL_STATE(85)] = 818,
  [SMALL_STATE(86)] = 831,
  [SMALL_STATE(87)] = 841,
  [SMALL_STATE(88)] = 851,
  [SMALL_STATE(89)] = 861,
  [SMALL_STATE(90)] = 871,
  [SMALL_STATE(91)] = 881,
  [SMALL_STATE(92)] = 891,
  [SMALL_STATE(93)] = 901,
  [SMALL_STATE(94)] = 911,
  [SMALL_STATE(95)] = 921,
  [SMALL_STATE(96)] = 931,
  [SMALL_STATE(97)] = 941,
  [SMALL_STATE(98)] = 951,
  [SMALL_STATE(99)] = 961,
  [SMALL_STATE(100)] = 971,
  [SMALL_STATE(101)] = 981,
  [SMALL_STATE(102)] = 991,
  [SMALL_STATE(103)] = 1001,
  [SMALL_STATE(104)] = 1011,
  [SMALL_STATE(105)] = 1021,
  [SMALL_STATE(106)] = 1031,
  [SMALL_STATE(107)] = 1041,
  [SMALL_STATE(108)] = 1051,
  [SMALL_STATE(109)] = 1061,
  [SMALL_STATE(110)] = 1071,
  [SMALL_STATE(111)] = 1081,
  [SMALL_STATE(112)] = 1091,
  [SMALL_STATE(113)] = 1101,
  [SMALL_STATE(114)] = 1111,
  [SMALL_STATE(115)] = 1121,
  [SMALL_STATE(116)] = 1131,
  [SMALL_STATE(117)] = 1141,
  [SMALL_STATE(118)] = 1151,
  [SMALL_STATE(119)] = 1161,
  [SMALL_STATE(120)] = 1171,
  [SMALL_STATE(121)] = 1181,
  [SMALL_STATE(122)] = 1191,
  [SMALL_STATE(123)] = 1201,
  [SMALL_STATE(124)] = 1211,
  [SMALL_STATE(125)] = 1221,
  [SMALL_STATE(126)] = 1231,
  [SMALL_STATE(127)] = 1241,
  [SMALL_STATE(128)] = 1251,
  [SMALL_STATE(129)] = 1261,
  [SMALL_STATE(130)] = 1271,
  [SMALL_STATE(131)] = 1281,
  [SMALL_STATE(132)] = 1291,
  [SMALL_STATE(133)] = 1301,
  [SMALL_STATE(134)] = 1311,
  [SMALL_STATE(135)] = 1321,
  [SMALL_STATE(136)] = 1331,
  [SMALL_STATE(137)] = 1341,
  [SMALL_STATE(138)] = 1348,
  [SMALL_STATE(139)] = 1355,
  [SMALL_STATE(140)] = 1362,
  [SMALL_STATE(141)] = 1369,
  [SMALL_STATE(142)] = 1376,
  [SMALL_STATE(143)] = 1383,
  [SMALL_STATE(144)] = 1390,
  [SMALL_STATE(145)] = 1397,
  [SMALL_STATE(146)] = 1404,
  [SMALL_STATE(147)] = 1411,
  [SMALL_STATE(148)] = 1418,
  [SMALL_STATE(149)] = 1425,
  [SMALL_STATE(150)] = 1432,
  [SMALL_STATE(151)] = 1439,
  [SMALL_STATE(152)] = 1446,
  [SMALL_STATE(153)] = 1453,
  [SMALL_STATE(154)] = 1460,
  [SMALL_STATE(155)] = 1467,
  [SMALL_STATE(156)] = 1474,
  [SMALL_STATE(157)] = 1481,
  [SMALL_STATE(158)] = 1488,
  [SMALL_STATE(159)] = 1495,
  [SMALL_STATE(160)] = 1502,
  [SMALL_STATE(161)] = 1509,
  [SMALL_STATE(162)] = 1516,
  [SMALL_STATE(163)] = 1523,
  [SMALL_STATE(164)] = 1530,
  [SMALL_STATE(165)] = 1537,
  [SMALL_STATE(166)] = 1544,
  [SMALL_STATE(167)] = 1551,
  [SMALL_STATE(168)] = 1558,
  [SMALL_STATE(169)] = 1565,
  [SMALL_STATE(170)] = 1572,
  [SMALL_STATE(171)] = 1579,
  [SMALL_STATE(172)] = 1586,
  [SMALL_STATE(173)] = 1593,
  [SMALL_STATE(174)] = 1600,
  [SMALL_STATE(175)] = 1607,
  [SMALL_STATE(176)] = 1614,
  [SMALL_STATE(177)] = 1621,
  [SMALL_STATE(178)] = 1628,
  [SMALL_STATE(179)] = 1635,
  [SMALL_STATE(180)] = 1642,
  [SMALL_STATE(181)] = 1649,
  [SMALL_STATE(182)] = 1656,
  [SMALL_STATE(183)] = 1663,
  [SMALL_STATE(184)] = 1670,
  [SMALL_STATE(185)] = 1677,
  [SMALL_STATE(186)] = 1684,
  [SMALL_STATE(187)] = 1691,
  [SMALL_STATE(188)] = 1698,
  [SMALL_STATE(189)] = 1705,
  [SMALL_STATE(190)] = 1712,
  [SMALL_STATE(191)] = 1719,
  [SMALL_STATE(192)] = 1726,
  [SMALL_STATE(193)] = 1733,
  [SMALL_STATE(194)] = 1740,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 10, 0, 26),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 10, 0, 26),
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
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4, 0, 14),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4, 0, 14),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 15),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 4, 0, 15),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 4, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 17),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 4, 0, 17),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, 0, 18),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, 0, 18),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, 0, 19),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, 0, 19),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, 0, 20),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, 0, 20),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, 0, 21),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, 0, 21),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, 0, 22),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 6, 0, 22),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, 0, 23),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 6, 0, 23),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, 0, 24),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 6, 0, 24),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, 0, 15),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 6, 0, 15),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 6, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 8, 0, 15),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 8, 0, 15),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 8, 0, 17),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 8, 0, 17),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 8, 0, 25),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 8, 0, 25),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 16),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 4, 0, 16),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2, 0, 0),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 3, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file, 3, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat5, 2, 0, 0), SHIFT_REPEAT(49),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat5, 2, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat8, 2, 0, 0), SHIFT_REPEAT(65),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat8, 2, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat6, 2, 0, 0), SHIFT_REPEAT(39),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat6, 2, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat7, 2, 0, 0), SHIFT_REPEAT(47),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat7, 2, 0, 0),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat1, 2, 0, 3), SHIFT_REPEAT(73),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat1, 2, 0, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat2, 2, 0, 6), SHIFT_REPEAT(76),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat2, 2, 0, 6),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat3, 2, 0, 9), SHIFT_REPEAT(79),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat3, 2, 0, 9),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat4, 2, 0, 12), SHIFT_REPEAT(82),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat4, 2, 0, 12),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quality, 1, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quality, 1, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat5, 2, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_influence, 1, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_influence, 1, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat6, 2, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rarity, 1, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rarity, 1, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat7, 2, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sockets, 1, 0, 13),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sockets, 1, 0, 13),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat8, 2, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colour, 1, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_colour, 1, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat4, 2, 0, 10),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat4, 2, 0, 10),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat1, 2, 0, 1),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat1, 2, 0, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quality, 3, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quality, 3, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_influence, 3, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_influence, 3, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rarity, 3, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rarity, 3, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sockets, 3, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sockets, 3, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat2, 2, 0, 4),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat2, 2, 0, 4),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat3, 2, 0, 7),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_condition_repeat3, 2, 0, 7),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [545] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantity, 2, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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

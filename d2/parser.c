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
#define STATE_COUNT 292
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 140
#define ALIAS_COUNT 3
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_NULL = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  aux_sym__identifier_token1 = 8,
  aux_sym__identifier_token2 = 9,
  aux_sym__identifier_token3 = 10,
  anon_sym_RPAREN2 = 11,
  aux_sym__identifier_token4 = 12,
  aux_sym_text_block_token1 = 13,
  sym_language = 14,
  anon_sym_direction = 15,
  anon_sym_shape = 16,
  anon_sym_label = 17,
  anon_sym_constraint = 18,
  anon_sym_icon = 19,
  anon_sym_link = 20,
  anon_sym_tooltip = 21,
  anon_sym_width = 22,
  anon_sym_height = 23,
  anon_sym_vertical_DASHgap = 24,
  anon_sym_horizontal_DASHgap = 25,
  anon_sym_grid_DASHgap = 26,
  anon_sym_grid_DASHcolumns = 27,
  anon_sym_grid_DASHrows = 28,
  anon_sym_3d = 29,
  anon_sym_opacity = 30,
  anon_sym_fill = 31,
  anon_sym_fill_DASHpattern = 32,
  anon_sym_stroke = 33,
  anon_sym_stroke_DASHwidth = 34,
  anon_sym_stroke_DASHdash = 35,
  anon_sym_border_DASHradius = 36,
  anon_sym_double_DASHborder = 37,
  anon_sym_font = 38,
  anon_sym_font_DASHsize = 39,
  anon_sym_font_DASHcolor = 40,
  anon_sym_shadow = 41,
  anon_sym_multiple = 42,
  anon_sym_animated = 43,
  anon_sym_italic = 44,
  anon_sym_bold = 45,
  anon_sym_underline = 46,
  anon_sym_text_DASHtransform = 47,
  anon_sym_near = 48,
  anon_sym_source_DASHarrowhead = 49,
  anon_sym_target_DASHarrowhead = 50,
  sym_keyword_underscore = 51,
  sym_keyword_classes = 52,
  sym_keyword_class = 53,
  sym_keyword_style = 54,
  anon_sym_DASH = 55,
  sym_colon = 56,
  sym_arrow = 57,
  sym_dot = 58,
  aux_sym__unquoted_string_token1 = 59,
  anon_sym_SQUOTE = 60,
  anon_sym_DQUOTE = 61,
  sym__unescaped_single_string_fragment = 62,
  sym__unescaped_double_string_fragment = 63,
  sym_escape_sequence = 64,
  anon_sym_true = 65,
  anon_sym_false = 66,
  sym_integer = 67,
  sym_float = 68,
  sym_line_comment = 69,
  anon_sym_LF = 70,
  anon_sym_SEMI = 71,
  sym__text_block_start = 72,
  sym__text_block_end = 73,
  sym__text_block_raw_text = 74,
  sym_block_comment = 75,
  sym_source_file = 76,
  sym__root_definition = 77,
  sym_connection = 78,
  sym__referencing_full_connection_path = 79,
  sym__referencing_end = 80,
  sym_index = 81,
  sym__full_connection_path = 82,
  sym__connection_path = 83,
  sym__connection_block = 84,
  sym_classes = 85,
  sym__classes_block = 86,
  sym__classes_item = 87,
  sym__classes_item_block = 88,
  sym__classes_item_attribute = 89,
  sym_container = 90,
  sym__container_block = 91,
  sym__container_block_definition = 92,
  sym_shape = 93,
  sym_shape_key = 94,
  sym__identifier = 95,
  sym_text_block = 96,
  sym__text_block_attrs = 97,
  sym__root_attribute = 98,
  sym__root_attr_key = 99,
  sym__shape_attribute = 100,
  sym__class_attribute = 101,
  sym_class_list = 102,
  sym__class_name = 103,
  sym__base_shape_attribute = 104,
  sym__shape_attr_key = 105,
  sym__shape_list_attr_key = 106,
  sym__style_attribute = 107,
  sym__style_attribute_block = 108,
  sym__inner_style_attribute = 109,
  sym__grid_attr_key = 110,
  sym__style_attr_key = 111,
  sym__common_style_attr_key = 112,
  sym__text_shape_attribute = 113,
  sym__text_attr_key = 114,
  sym__connection_attribute = 115,
  sym__connection_arrowhead_attribute = 116,
  sym__connection_arrowhead_attr_key = 117,
  sym_label = 118,
  sym_attr_value_list = 119,
  sym_attr_value = 120,
  sym__dash = 121,
  aux_sym__unquoted_string = 122,
  sym_string = 123,
  sym_boolean = 124,
  sym__eol = 125,
  sym__end = 126,
  aux_sym_source_file_repeat1 = 127,
  aux_sym__full_connection_path_repeat1 = 128,
  aux_sym__connection_path_repeat1 = 129,
  aux_sym__connection_block_repeat1 = 130,
  aux_sym__classes_block_repeat1 = 131,
  aux_sym__classes_item_block_repeat1 = 132,
  aux_sym__container_block_repeat1 = 133,
  aux_sym__identifier_repeat1 = 134,
  aux_sym__text_block_attrs_repeat1 = 135,
  aux_sym_class_list_repeat1 = 136,
  aux_sym__style_attribute_block_repeat1 = 137,
  aux_sym_attr_value_list_repeat1 = 138,
  aux_sym_string_repeat1 = 139,
  alias_sym_class_name = 140,
  alias_sym_container_key = 141,
  alias_sym_reserved = 142,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_NULL] = "\0",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym__identifier_token1] = "_identifier_token1",
  [aux_sym__identifier_token2] = "_identifier_token2",
  [aux_sym__identifier_token3] = "_identifier_token3",
  [anon_sym_RPAREN2] = ")",
  [aux_sym__identifier_token4] = "_identifier_token4",
  [aux_sym_text_block_token1] = "text_block_token1",
  [sym_language] = "language",
  [anon_sym_direction] = "direction",
  [anon_sym_shape] = "shape",
  [anon_sym_label] = "label",
  [anon_sym_constraint] = "constraint",
  [anon_sym_icon] = "icon",
  [anon_sym_link] = "link",
  [anon_sym_tooltip] = "tooltip",
  [anon_sym_width] = "width",
  [anon_sym_height] = "height",
  [anon_sym_vertical_DASHgap] = "vertical-gap",
  [anon_sym_horizontal_DASHgap] = "horizontal-gap",
  [anon_sym_grid_DASHgap] = "grid-gap",
  [anon_sym_grid_DASHcolumns] = "grid-columns",
  [anon_sym_grid_DASHrows] = "grid-rows",
  [anon_sym_3d] = "3d",
  [anon_sym_opacity] = "opacity",
  [anon_sym_fill] = "fill",
  [anon_sym_fill_DASHpattern] = "fill-pattern",
  [anon_sym_stroke] = "stroke",
  [anon_sym_stroke_DASHwidth] = "stroke-width",
  [anon_sym_stroke_DASHdash] = "stroke-dash",
  [anon_sym_border_DASHradius] = "border-radius",
  [anon_sym_double_DASHborder] = "double-border",
  [anon_sym_font] = "font",
  [anon_sym_font_DASHsize] = "font-size",
  [anon_sym_font_DASHcolor] = "font-color",
  [anon_sym_shadow] = "shadow",
  [anon_sym_multiple] = "multiple",
  [anon_sym_animated] = "animated",
  [anon_sym_italic] = "italic",
  [anon_sym_bold] = "bold",
  [anon_sym_underline] = "underline",
  [anon_sym_text_DASHtransform] = "text-transform",
  [anon_sym_near] = "near",
  [anon_sym_source_DASHarrowhead] = "source-arrowhead",
  [anon_sym_target_DASHarrowhead] = "target-arrowhead",
  [sym_keyword_underscore] = "keyword_underscore",
  [sym_keyword_classes] = "keyword_classes",
  [sym_keyword_class] = "keyword_class",
  [sym_keyword_style] = "keyword_style",
  [anon_sym_DASH] = "-",
  [sym_colon] = "colon",
  [sym_arrow] = "arrow",
  [sym_dot] = "dot",
  [aux_sym__unquoted_string_token1] = "_unquoted_string_token1",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [sym__unescaped_single_string_fragment] = "string_fragment",
  [sym__unescaped_double_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_line_comment] = "line_comment",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [sym__text_block_start] = "|",
  [sym__text_block_end] = "|",
  [sym__text_block_raw_text] = "raw_text",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__root_definition] = "_root_definition",
  [sym_connection] = "connection",
  [sym__referencing_full_connection_path] = "referencing",
  [sym__referencing_end] = "_referencing_end",
  [sym_index] = "index",
  [sym__full_connection_path] = "_full_connection_path",
  [sym__connection_path] = "_connection_path",
  [sym__connection_block] = "block",
  [sym_classes] = "classes",
  [sym__classes_block] = "block",
  [sym__classes_item] = "_classes_item",
  [sym__classes_item_block] = "class_block",
  [sym__classes_item_attribute] = "_classes_item_attribute",
  [sym_container] = "container",
  [sym__container_block] = "block",
  [sym__container_block_definition] = "_container_block_definition",
  [sym_shape] = "shape",
  [sym_shape_key] = "shape_key",
  [sym__identifier] = "_identifier",
  [sym_text_block] = "text_block",
  [sym__text_block_attrs] = "block",
  [sym__root_attribute] = "attribute",
  [sym__root_attr_key] = "attr_key",
  [sym__shape_attribute] = "_shape_attribute",
  [sym__class_attribute] = "attribute",
  [sym_class_list] = "class_list",
  [sym__class_name] = "_class_name",
  [sym__base_shape_attribute] = "attribute",
  [sym__shape_attr_key] = "attr_key",
  [sym__shape_list_attr_key] = "attr_key",
  [sym__style_attribute] = "attribute",
  [sym__style_attribute_block] = "block",
  [sym__inner_style_attribute] = "attribute",
  [sym__grid_attr_key] = "_grid_attr_key",
  [sym__style_attr_key] = "attr_key",
  [sym__common_style_attr_key] = "_common_style_attr_key",
  [sym__text_shape_attribute] = "attribute",
  [sym__text_attr_key] = "_text_attr_key",
  [sym__connection_attribute] = "_connection_attribute",
  [sym__connection_arrowhead_attribute] = "attribute",
  [sym__connection_arrowhead_attr_key] = "attr_key",
  [sym_label] = "label",
  [sym_attr_value_list] = "attr_value_list",
  [sym_attr_value] = "attr_value",
  [sym__dash] = "_dash",
  [aux_sym__unquoted_string] = "_unquoted_string",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym__eol] = "_eol",
  [sym__end] = "_end",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__full_connection_path_repeat1] = "_full_connection_path_repeat1",
  [aux_sym__connection_path_repeat1] = "_connection_path_repeat1",
  [aux_sym__connection_block_repeat1] = "_connection_block_repeat1",
  [aux_sym__classes_block_repeat1] = "_classes_block_repeat1",
  [aux_sym__classes_item_block_repeat1] = "_classes_item_block_repeat1",
  [aux_sym__container_block_repeat1] = "_container_block_repeat1",
  [aux_sym__identifier_repeat1] = "_identifier_repeat1",
  [aux_sym__text_block_attrs_repeat1] = "_text_block_attrs_repeat1",
  [aux_sym_class_list_repeat1] = "class_list_repeat1",
  [aux_sym__style_attribute_block_repeat1] = "_style_attribute_block_repeat1",
  [aux_sym_attr_value_list_repeat1] = "attr_value_list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_class_name] = "class_name",
  [alias_sym_container_key] = "container_key",
  [alias_sym_reserved] = "reserved",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_NULL] = anon_sym_NULL,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__identifier_token1] = aux_sym__identifier_token1,
  [aux_sym__identifier_token2] = aux_sym__identifier_token2,
  [aux_sym__identifier_token3] = aux_sym__identifier_token3,
  [anon_sym_RPAREN2] = anon_sym_RPAREN,
  [aux_sym__identifier_token4] = aux_sym__identifier_token4,
  [aux_sym_text_block_token1] = aux_sym_text_block_token1,
  [sym_language] = sym_language,
  [anon_sym_direction] = anon_sym_direction,
  [anon_sym_shape] = anon_sym_shape,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_constraint] = anon_sym_constraint,
  [anon_sym_icon] = anon_sym_icon,
  [anon_sym_link] = anon_sym_link,
  [anon_sym_tooltip] = anon_sym_tooltip,
  [anon_sym_width] = anon_sym_width,
  [anon_sym_height] = anon_sym_height,
  [anon_sym_vertical_DASHgap] = anon_sym_vertical_DASHgap,
  [anon_sym_horizontal_DASHgap] = anon_sym_horizontal_DASHgap,
  [anon_sym_grid_DASHgap] = anon_sym_grid_DASHgap,
  [anon_sym_grid_DASHcolumns] = anon_sym_grid_DASHcolumns,
  [anon_sym_grid_DASHrows] = anon_sym_grid_DASHrows,
  [anon_sym_3d] = anon_sym_3d,
  [anon_sym_opacity] = anon_sym_opacity,
  [anon_sym_fill] = anon_sym_fill,
  [anon_sym_fill_DASHpattern] = anon_sym_fill_DASHpattern,
  [anon_sym_stroke] = anon_sym_stroke,
  [anon_sym_stroke_DASHwidth] = anon_sym_stroke_DASHwidth,
  [anon_sym_stroke_DASHdash] = anon_sym_stroke_DASHdash,
  [anon_sym_border_DASHradius] = anon_sym_border_DASHradius,
  [anon_sym_double_DASHborder] = anon_sym_double_DASHborder,
  [anon_sym_font] = anon_sym_font,
  [anon_sym_font_DASHsize] = anon_sym_font_DASHsize,
  [anon_sym_font_DASHcolor] = anon_sym_font_DASHcolor,
  [anon_sym_shadow] = anon_sym_shadow,
  [anon_sym_multiple] = anon_sym_multiple,
  [anon_sym_animated] = anon_sym_animated,
  [anon_sym_italic] = anon_sym_italic,
  [anon_sym_bold] = anon_sym_bold,
  [anon_sym_underline] = anon_sym_underline,
  [anon_sym_text_DASHtransform] = anon_sym_text_DASHtransform,
  [anon_sym_near] = anon_sym_near,
  [anon_sym_source_DASHarrowhead] = anon_sym_source_DASHarrowhead,
  [anon_sym_target_DASHarrowhead] = anon_sym_target_DASHarrowhead,
  [sym_keyword_underscore] = sym_keyword_underscore,
  [sym_keyword_classes] = sym_keyword_classes,
  [sym_keyword_class] = sym_keyword_class,
  [sym_keyword_style] = sym_keyword_style,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_colon] = sym_colon,
  [sym_arrow] = sym_arrow,
  [sym_dot] = sym_dot,
  [aux_sym__unquoted_string_token1] = aux_sym__unquoted_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__unescaped_single_string_fragment] = sym__unescaped_single_string_fragment,
  [sym__unescaped_double_string_fragment] = sym__unescaped_single_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_line_comment] = sym_line_comment,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__text_block_start] = sym__text_block_start,
  [sym__text_block_end] = sym__text_block_start,
  [sym__text_block_raw_text] = sym__text_block_raw_text,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__root_definition] = sym__root_definition,
  [sym_connection] = sym_connection,
  [sym__referencing_full_connection_path] = sym__referencing_full_connection_path,
  [sym__referencing_end] = sym__referencing_end,
  [sym_index] = sym_index,
  [sym__full_connection_path] = sym__full_connection_path,
  [sym__connection_path] = sym__connection_path,
  [sym__connection_block] = sym__connection_block,
  [sym_classes] = sym_classes,
  [sym__classes_block] = sym__connection_block,
  [sym__classes_item] = sym__classes_item,
  [sym__classes_item_block] = sym__classes_item_block,
  [sym__classes_item_attribute] = sym__classes_item_attribute,
  [sym_container] = sym_container,
  [sym__container_block] = sym__connection_block,
  [sym__container_block_definition] = sym__container_block_definition,
  [sym_shape] = sym_shape,
  [sym_shape_key] = sym_shape_key,
  [sym__identifier] = sym__identifier,
  [sym_text_block] = sym_text_block,
  [sym__text_block_attrs] = sym__connection_block,
  [sym__root_attribute] = sym__root_attribute,
  [sym__root_attr_key] = sym__root_attr_key,
  [sym__shape_attribute] = sym__shape_attribute,
  [sym__class_attribute] = sym__root_attribute,
  [sym_class_list] = sym_class_list,
  [sym__class_name] = sym__class_name,
  [sym__base_shape_attribute] = sym__root_attribute,
  [sym__shape_attr_key] = sym__root_attr_key,
  [sym__shape_list_attr_key] = sym__root_attr_key,
  [sym__style_attribute] = sym__root_attribute,
  [sym__style_attribute_block] = sym__connection_block,
  [sym__inner_style_attribute] = sym__root_attribute,
  [sym__grid_attr_key] = sym__grid_attr_key,
  [sym__style_attr_key] = sym__root_attr_key,
  [sym__common_style_attr_key] = sym__common_style_attr_key,
  [sym__text_shape_attribute] = sym__root_attribute,
  [sym__text_attr_key] = sym__text_attr_key,
  [sym__connection_attribute] = sym__connection_attribute,
  [sym__connection_arrowhead_attribute] = sym__root_attribute,
  [sym__connection_arrowhead_attr_key] = sym__root_attr_key,
  [sym_label] = sym_label,
  [sym_attr_value_list] = sym_attr_value_list,
  [sym_attr_value] = sym_attr_value,
  [sym__dash] = sym__dash,
  [aux_sym__unquoted_string] = aux_sym__unquoted_string,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym__eol] = sym__eol,
  [sym__end] = sym__end,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__full_connection_path_repeat1] = aux_sym__full_connection_path_repeat1,
  [aux_sym__connection_path_repeat1] = aux_sym__connection_path_repeat1,
  [aux_sym__connection_block_repeat1] = aux_sym__connection_block_repeat1,
  [aux_sym__classes_block_repeat1] = aux_sym__classes_block_repeat1,
  [aux_sym__classes_item_block_repeat1] = aux_sym__classes_item_block_repeat1,
  [aux_sym__container_block_repeat1] = aux_sym__container_block_repeat1,
  [aux_sym__identifier_repeat1] = aux_sym__identifier_repeat1,
  [aux_sym__text_block_attrs_repeat1] = aux_sym__text_block_attrs_repeat1,
  [aux_sym_class_list_repeat1] = aux_sym_class_list_repeat1,
  [aux_sym__style_attribute_block_repeat1] = aux_sym__style_attribute_block_repeat1,
  [aux_sym_attr_value_list_repeat1] = aux_sym_attr_value_list_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_class_name] = alias_sym_class_name,
  [alias_sym_container_key] = alias_sym_container_key,
  [alias_sym_reserved] = alias_sym_reserved,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__identifier_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_block_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_language] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_direction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constraint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tooltip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_width] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_height] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vertical_DASHgap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_horizontal_DASHgap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grid_DASHgap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grid_DASHcolumns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grid_DASHrows] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opacity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fill_DASHpattern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stroke] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stroke_DASHwidth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stroke_DASHdash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHradius] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double_DASHborder] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_font_DASHcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shadow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multiple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_animated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_italic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_underline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text_DASHtransform] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_near] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source_DASHarrowhead] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_target_DASHarrowhead] = {
    .visible = true,
    .named = false,
  },
  [sym_keyword_underscore] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_classes] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_class] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_style] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__unquoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__unescaped_single_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__unescaped_double_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__text_block_start] = {
    .visible = true,
    .named = false,
  },
  [sym__text_block_end] = {
    .visible = true,
    .named = false,
  },
  [sym__text_block_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__root_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_connection] = {
    .visible = true,
    .named = true,
  },
  [sym__referencing_full_connection_path] = {
    .visible = true,
    .named = true,
  },
  [sym__referencing_end] = {
    .visible = false,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym__full_connection_path] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_path] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_block] = {
    .visible = true,
    .named = true,
  },
  [sym_classes] = {
    .visible = true,
    .named = true,
  },
  [sym__classes_block] = {
    .visible = true,
    .named = true,
  },
  [sym__classes_item] = {
    .visible = false,
    .named = true,
  },
  [sym__classes_item_block] = {
    .visible = true,
    .named = true,
  },
  [sym__classes_item_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_container] = {
    .visible = true,
    .named = true,
  },
  [sym__container_block] = {
    .visible = true,
    .named = true,
  },
  [sym__container_block_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_shape] = {
    .visible = true,
    .named = true,
  },
  [sym_shape_key] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_text_block] = {
    .visible = true,
    .named = true,
  },
  [sym__text_block_attrs] = {
    .visible = true,
    .named = true,
  },
  [sym__root_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__root_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__shape_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__class_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_class_list] = {
    .visible = true,
    .named = true,
  },
  [sym__class_name] = {
    .visible = false,
    .named = true,
  },
  [sym__base_shape_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__shape_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__shape_list_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__style_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__style_attribute_block] = {
    .visible = true,
    .named = true,
  },
  [sym__inner_style_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__grid_attr_key] = {
    .visible = false,
    .named = true,
  },
  [sym__style_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym__common_style_attr_key] = {
    .visible = false,
    .named = true,
  },
  [sym__text_shape_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__text_attr_key] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__connection_arrowhead_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__connection_arrowhead_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_value_list] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_value] = {
    .visible = true,
    .named = true,
  },
  [sym__dash] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__unquoted_string] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__full_connection_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__connection_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__connection_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classes_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__classes_item_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__container_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_block_attrs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__style_attribute_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_value_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_container_key] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_reserved] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_reserved,
  },
  [2] = {
    [0] = alias_sym_container_key,
  },
  [3] = {
    [0] = alias_sym_class_name,
  },
  [4] = {
    [0] = sym__root_attr_key,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_shape_key, 3,
    sym_shape_key,
    alias_sym_class_name,
    alias_sym_container_key,
  sym__common_style_attr_key, 2,
    sym__common_style_attr_key,
    alias_sym_reserved,
  sym__text_attr_key, 3,
    sym__text_attr_key,
    alias_sym_reserved,
    sym__root_attr_key,
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
  [10] = 9,
  [11] = 8,
  [12] = 9,
  [13] = 8,
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
  [24] = 20,
  [25] = 20,
  [26] = 26,
  [27] = 26,
  [28] = 26,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 36,
  [38] = 35,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 41,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 47,
  [50] = 45,
  [51] = 45,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 47,
  [56] = 56,
  [57] = 56,
  [58] = 58,
  [59] = 58,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 61,
  [65] = 61,
  [66] = 66,
  [67] = 63,
  [68] = 63,
  [69] = 69,
  [70] = 66,
  [71] = 71,
  [72] = 58,
  [73] = 35,
  [74] = 69,
  [75] = 36,
  [76] = 76,
  [77] = 56,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 81,
  [86] = 86,
  [87] = 82,
  [88] = 88,
  [89] = 84,
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
  [100] = 97,
  [101] = 101,
  [102] = 102,
  [103] = 102,
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
  [120] = 113,
  [121] = 121,
  [122] = 121,
  [123] = 117,
  [124] = 124,
  [125] = 111,
  [126] = 126,
  [127] = 102,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 113,
  [134] = 121,
  [135] = 129,
  [136] = 136,
  [137] = 117,
  [138] = 117,
  [139] = 117,
  [140] = 132,
  [141] = 141,
  [142] = 142,
  [143] = 116,
  [144] = 144,
  [145] = 145,
  [146] = 129,
  [147] = 111,
  [148] = 117,
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
  [164] = 129,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 117,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 132,
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
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
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
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 108,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 107,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 251,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 253,
  [259] = 253,
  [260] = 252,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 261,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 272,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 272,
  [284] = 261,
  [285] = 281,
  [286] = 281,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 282,
};

static TSCharacterRange extras_character_set_1[] = {
  {'\t', '\t'}, {0x0b, '\f'}, {' ', ' '}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200a}, {0x2028, 0x2029}, {0x202f, 0x202f},
  {0x205f, 0x205f}, {0x3000, 0x3000}, {0xfeff, 0xfeff},
};

static TSCharacterRange extras_character_set_2[] = {
  {'\t', '\t'}, {0x0b, '\f'}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200a}, {0x2028, 0x2029}, {0x202f, 0x202f}, {0x205f, 0x205f},
  {0x3000, 0x3000}, {0xfeff, 0xfeff},
};

static TSCharacterRange aux_sym__identifier_token3_character_set_1[] = {
  {' ', ' '}, {'"', '"'}, {'$', '$'}, {'\'', '('}, {'-', '-'}, {'0', '9'}, {'A', 'Z'}, {'_', '_'},
  {'a', 'z'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(268);
      ADVANCE_MAP(
        0, 269,
        '\n', 393,
        '"', 379,
        '#', 392,
        '\'', 378,
        '(', 270,
        ')', 271,
        '-', 349,
        '.', 356,
        ':', 353,
        ';', 394,
        '[', 272,
        '\\', 244,
        ']', 273,
        '_', 344,
        'a', 294,
        'b', 296,
        'c', 291,
        'd', 288,
        'f', 289,
        'g', 300,
        'h', 282,
        'i', 279,
        'l', 277,
        'm', 301,
        'n', 283,
        'o', 299,
        's', 285,
        't', 281,
        'u', 295,
        'v', 284,
        'w', 290,
        '{', 274,
        '}', 275,
      );
      if (set_contains(extras_character_set_1, 11, lookahead)) SKIP(266);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        0, 269,
        '\n', 393,
        ' ', 2,
        '#', 392,
        ')', 271,
        ',', 303,
        '-', 351,
        '.', 356,
        ':', 353,
        ';', 394,
        '<', 26,
        '\\', 244,
        '{', 274,
        '}', 275,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) SKIP(2);
      if (('"' <= lookahead && lookahead <= '$') ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        0, 269,
        '\n', 393,
        ' ', 2,
        '#', 392,
        ')', 271,
        ',', 303,
        '-', 28,
        '.', 356,
        ':', 353,
        ';', 394,
        '<', 26,
        '\\', 244,
        '{', 274,
        '}', 275,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) SKIP(2);
      if (('"' <= lookahead && lookahead <= '$') ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        0, 269,
        '\n', 393,
        ' ', 4,
        '#', 392,
        ')', 271,
        ',', 303,
        '-', 352,
        '.', 356,
        ':', 353,
        ';', 394,
        '\\', 244,
        ']', 273,
        '{', 274,
        '}', 275,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) SKIP(4);
      if (('"' <= lookahead && lookahead <= '$') ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        0, 269,
        '\n', 393,
        ' ', 4,
        '#', 392,
        ')', 271,
        ',', 303,
        '-', 265,
        '.', 356,
        ':', 353,
        ';', 394,
        '\\', 244,
        ']', 273,
        '{', 274,
        '}', 275,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) SKIP(4);
      if (('"' <= lookahead && lookahead <= '$') ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        0, 269,
        '\n', 393,
        '"', 379,
        '#', 377,
        '\'', 378,
        ';', 394,
        '\\', 244,
        '{', 274,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(5);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(357);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        0, 269,
        '\n', 393,
        '#', 392,
        ')', 271,
        '-', 350,
        '.', 356,
        '3', 74,
        ':', 353,
        ';', 394,
        '<', 26,
        ']', 273,
        'a', 154,
        'b', 167,
        'd', 168,
        'f', 117,
        'i', 229,
        'l', 123,
        'm', 245,
        'o', 187,
        's', 114,
        't', 54,
        'u', 155,
        '{', 274,
        '}', 275,
      );
      if (set_contains(extras_character_set_1, 11, lookahead)) SKIP(7);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        0, 269,
        '\n', 393,
        '#', 392,
        ')', 271,
        '-', 27,
        '.', 356,
        '3', 74,
        ':', 353,
        ';', 394,
        '<', 26,
        ']', 273,
        'a', 154,
        'b', 167,
        'd', 168,
        'f', 117,
        'i', 229,
        'l', 123,
        'm', 245,
        'o', 187,
        's', 114,
        't', 54,
        'u', 155,
        '{', 274,
        '}', 275,
      );
      if (set_contains(extras_character_set_1, 11, lookahead)) SKIP(7);
      END_STATE();
    case 8:
      if ((!eof && lookahead == 00)) ADVANCE(269);
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == '{') ADVANCE(274);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(8);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 9:
      if ((!eof && lookahead == 00)) ADVANCE(269);
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(244);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(9);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(359);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '\n', 393,
        '"', 379,
        '#', 392,
        '\'', 378,
        '(', 270,
        '\\', 244,
        '_', 344,
        'c', 293,
        'd', 287,
        'g', 300,
        'h', 282,
        'i', 278,
        'l', 277,
        'n', 283,
        's', 286,
        't', 298,
        'v', 284,
        'w', 290,
        '}', 275,
      );
      if (set_contains(extras_character_set_1, 11, lookahead)) SKIP(10);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '\n', 393,
        '"', 379,
        '#', 392,
        '\'', 378,
        '[', 272,
        '\\', 244,
        ']', 273,
        '_', 344,
        '}', 275,
      );
      if (set_contains(extras_character_set_1, 11, lookahead)) SKIP(11);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '\n', 393,
        '"', 379,
        '#', 377,
        '\'', 378,
        ';', 394,
        '\\', 244,
        '{', 274,
        '}', 275,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(12);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '"') ADVANCE(379);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(378);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == '{') ADVANCE(274);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(13);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(361);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 393,
        '"', 379,
        '#', 377,
        '\'', 378,
        '\\', 244,
        ']', 273,
        'f', 369,
        't', 373,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == ']') ADVANCE(273);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(15);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == '{') ADVANCE(274);
      if (lookahead == '}') ADVANCE(275);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(16);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(365);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == '{') ADVANCE(274);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(17);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == '}') ADVANCE(275);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(18);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(367);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == ';') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(244);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(19);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(379);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(378);
      if (lookahead == '[') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'f') ADVANCE(369);
      if (lookahead == 't') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(379);
      if (lookahead == '#') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(244);
      if (set_contains(extras_character_set_1, 11, lookahead)) ADVANCE(382);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\f' < lookahead)) ADVANCE(383);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(392);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(305);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(306);
      if (set_contains(extras_character_set_2, 10, lookahead)) SKIP(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      if (set_contains(extras_character_set_1, 11, lookahead)) SKIP(23);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(381);
      if (set_contains(extras_character_set_1, 11, lookahead)) ADVANCE(380);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\f' < lookahead) &&
          lookahead != '\'') ADVANCE(381);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(69);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(355);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '>') ADVANCE(354);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '>') ADVANCE(354);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(107);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(108);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(55);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(236);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(204);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(98);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(178);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(145);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(176);
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(177);
      if (lookahead == 'g') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(338);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(336);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(342);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(343);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'w') ADVANCE(131);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(180);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 110:
      if (lookahead == 'h') ADVANCE(315);
      END_STATE();
    case 111:
      if (lookahead == 'h') ADVANCE(328);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(327);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(226);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 134:
      if (lookahead == 'k') ADVANCE(313);
      END_STATE();
    case 135:
      if (lookahead == 'k') ADVANCE(88);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(340);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(314);
      END_STATE();
    case 184:
      if (lookahead == 'p') ADVANCE(319);
      END_STATE();
    case 185:
      if (lookahead == 'p') ADVANCE(317);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(318);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 190:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(345);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(346);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 244:
      if (lookahead == 'u') ADVANCE(259);
      if (lookahead == 'x') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(386);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 245:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 247:
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 248:
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 249:
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 250:
      if (lookahead == 'w') ADVANCE(334);
      END_STATE();
    case 251:
      if (lookahead == 'w') ADVANCE(214);
      END_STATE();
    case 252:
      if (lookahead == 'w') ADVANCE(115);
      END_STATE();
    case 253:
      if (lookahead == 'w') ADVANCE(116);
      END_STATE();
    case 254:
      if (lookahead == 'x') ADVANCE(230);
      END_STATE();
    case 255:
      if (lookahead == 'y') ADVANCE(323);
      END_STATE();
    case 256:
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 257:
      if (lookahead == 'z') ADVANCE(90);
      END_STATE();
    case 258:
      if (lookahead == 'z') ADVANCE(174);
      END_STATE();
    case 259:
      if (lookahead == '{') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 260:
      if (lookahead == '}') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 261:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      END_STATE();
    case 262:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 265:
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 266:
      if (eof) ADVANCE(268);
      ADVANCE_MAP(
        0, 269,
        '\n', 393,
        '"', 379,
        '#', 392,
        '\'', 378,
        '(', 270,
        ')', 271,
        '.', 356,
        ':', 353,
        ';', 394,
        '[', 272,
        '\\', 244,
        ']', 273,
        '_', 344,
        'a', 294,
        'b', 296,
        'c', 291,
        'd', 288,
        'f', 289,
        'g', 300,
        'h', 282,
        'i', 279,
        'l', 277,
        'm', 301,
        'n', 283,
        'o', 299,
        's', 285,
        't', 281,
        'u', 295,
        'v', 284,
        'w', 290,
        '{', 274,
        '}', 275,
      );
      if (set_contains(extras_character_set_1, 11, lookahead)) SKIP(266);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 267:
      if (eof) ADVANCE(268);
      ADVANCE_MAP(
        '\n', 393,
        '"', 379,
        '#', 392,
        '\'', 378,
        '(', 270,
        '\\', 244,
        '_', 344,
        'a', 294,
        'b', 296,
        'c', 292,
        'd', 288,
        'f', 289,
        'g', 300,
        'h', 297,
        'i', 279,
        'l', 277,
        'm', 301,
        'n', 283,
        'o', 299,
        's', 285,
        't', 280,
        'u', 295,
        'v', 284,
      );
      if (set_contains(extras_character_set_1, 11, lookahead)) SKIP(267);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(38);
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'h') ADVANCE(47);
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == ',') ADVANCE(303);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if ((set_contains(aux_sym__identifier_token3_character_set_1, 9, lookahead) ||
          lookahead == ',') &&
          lookahead != ' ' &&
          lookahead != '-') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__identifier_token3);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_text_block_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(305);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_language);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_constraint);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_tooltip);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_width);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_height);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_vertical_DASHgap);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_horizontal_DASHgap);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_grid_DASHgap);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_grid_DASHcolumns);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_grid_DASHrows);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_3d);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_opacity);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_fill);
      if (lookahead == '-') ADVANCE(189);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_fill_DASHpattern);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_stroke);
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_stroke_DASHwidth);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_stroke_DASHdash);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_border_DASHradius);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_double_DASHborder);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_font);
      if (lookahead == '-') ADVANCE(65);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_font_DASHsize);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_font_DASHcolor);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_shadow);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_multiple);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_animated);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_italic);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_underline);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_text_DASHtransform);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_near);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_source_DASHarrowhead);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_target_DASHarrowhead);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_keyword_underscore);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_keyword_classes);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_keyword_class);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_keyword_class);
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_keyword_style);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '>') ADVANCE(354);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '>') ADVANCE(354);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_arrow);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '>') ADVANCE(354);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        0, 269,
        '\r', 377,
        '"', 379,
        '#', 377,
        '\'', 378,
        ';', 394,
        '\\', 244,
        '{', 274,
        '`', 377,
        '|', 377,
        '\t', 357,
        0x0b, 357,
        '\f', 357,
        ' ', 357,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(357);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        0, 269,
        '\r', 377,
        '#', 377,
        ';', 394,
        '\\', 244,
        '{', 274,
        '\t', 358,
        0x0b, 358,
        '\f', 358,
        ' ', 358,
        '"', 377,
        '\'', 377,
        '`', 377,
        '|', 377,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(358);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        0, 269,
        '\r', 377,
        '#', 377,
        ';', 394,
        '\\', 244,
        '\t', 359,
        0x0b, 359,
        '\f', 359,
        ' ', 359,
        '"', 377,
        '\'', 377,
        '`', 377,
        '|', 377,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(359);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        '\r', 377,
        '"', 379,
        '#', 377,
        '\'', 378,
        ';', 394,
        '\\', 244,
        '{', 274,
        '}', 275,
        '`', 377,
        '|', 377,
        '\t', 360,
        0x0b, 360,
        '\f', 360,
        ' ', 360,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(377);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        '\r', 377,
        '"', 379,
        '#', 377,
        '\'', 378,
        ';', 394,
        '\\', 244,
        '{', 274,
        '`', 377,
        '|', 377,
        '\t', 361,
        0x0b, 361,
        '\f', 361,
        ' ', 361,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(361);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        '\r', 377,
        '"', 379,
        '#', 377,
        '\'', 378,
        '[', 272,
        '\\', 244,
        'f', 369,
        't', 373,
        '`', 377,
        '|', 377,
        '\t', 362,
        0x0b, 362,
        '\f', 362,
        ' ', 362,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(362);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        '\r', 377,
        '"', 379,
        '#', 377,
        '\'', 378,
        '\\', 244,
        ']', 273,
        'f', 369,
        't', 373,
        '`', 377,
        '|', 377,
        '\t', 363,
        0x0b, 363,
        '\f', 363,
        ' ', 363,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        '\r', 377,
        '#', 377,
        ';', 394,
        '\\', 244,
        ']', 273,
        '\t', 364,
        0x0b, 364,
        '\f', 364,
        ' ', 364,
        '"', 377,
        '\'', 377,
        '`', 377,
        '|', 377,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(364);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        '\r', 377,
        '#', 377,
        ';', 394,
        '\\', 244,
        '{', 274,
        '}', 275,
        '\t', 365,
        0x0b, 365,
        '\f', 365,
        ' ', 365,
        '"', 377,
        '\'', 377,
        '`', 377,
        '|', 377,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(365);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(377);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        '\r', 377,
        '#', 377,
        ';', 394,
        '\\', 244,
        '{', 274,
        '\t', 366,
        0x0b, 366,
        '\f', 366,
        ' ', 366,
        '"', 377,
        '\'', 377,
        '`', 377,
        '|', 377,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        '\r', 377,
        '#', 377,
        ';', 394,
        '\\', 244,
        '}', 275,
        '\t', 367,
        0x0b, 367,
        '\f', 367,
        ' ', 367,
        '"', 377,
        '\'', 377,
        '`', 377,
        '|', 377,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(367);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      ADVANCE_MAP(
        '\r', 377,
        '#', 377,
        ';', 394,
        '\\', 244,
        '\t', 368,
        0x0b, 368,
        '\f', 368,
        ' ', 368,
        '"', 377,
        '\'', 377,
        '`', 377,
        '|', 377,
      );
      if (set_contains(extras_character_set_2, 10, lookahead)) ADVANCE(368);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(377);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(377);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(377);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(377);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(374);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(377);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(377);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 's') ADVANCE(371);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(377);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'u') ADVANCE(370);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(377);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(377);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead == '#') ADVANCE(381);
      if (set_contains(extras_character_set_1, 11, lookahead)) ADVANCE(380);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\f' < lookahead) &&
          lookahead != '\'') ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '#') ADVANCE(383);
      if (set_contains(extras_character_set_1, 11, lookahead)) ADVANCE(382);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\f' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(383);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(384);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(385);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 267, .external_lex_state = 2},
  [2] = {.lex_state = 267, .external_lex_state = 2},
  [3] = {.lex_state = 267, .external_lex_state = 2},
  [4] = {.lex_state = 10, .external_lex_state = 2},
  [5] = {.lex_state = 10, .external_lex_state = 2},
  [6] = {.lex_state = 10, .external_lex_state = 2},
  [7] = {.lex_state = 267, .external_lex_state = 2},
  [8] = {.lex_state = 10, .external_lex_state = 2},
  [9] = {.lex_state = 10, .external_lex_state = 2},
  [10] = {.lex_state = 10, .external_lex_state = 2},
  [11] = {.lex_state = 10, .external_lex_state = 2},
  [12] = {.lex_state = 10, .external_lex_state = 2},
  [13] = {.lex_state = 10, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 6, .external_lex_state = 2},
  [17] = {.lex_state = 6, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 6, .external_lex_state = 2},
  [20] = {.lex_state = 10, .external_lex_state = 2},
  [21] = {.lex_state = 10, .external_lex_state = 2},
  [22] = {.lex_state = 10, .external_lex_state = 2},
  [23] = {.lex_state = 10, .external_lex_state = 2},
  [24] = {.lex_state = 10, .external_lex_state = 2},
  [25] = {.lex_state = 10, .external_lex_state = 2},
  [26] = {.lex_state = 6, .external_lex_state = 2},
  [27] = {.lex_state = 6, .external_lex_state = 2},
  [28] = {.lex_state = 6, .external_lex_state = 2},
  [29] = {.lex_state = 6, .external_lex_state = 2},
  [30] = {.lex_state = 6, .external_lex_state = 2},
  [31] = {.lex_state = 6, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 1, .external_lex_state = 2},
  [36] = {.lex_state = 1, .external_lex_state = 2},
  [37] = {.lex_state = 3, .external_lex_state = 2},
  [38] = {.lex_state = 3, .external_lex_state = 2},
  [39] = {.lex_state = 14, .external_lex_state = 2},
  [40] = {.lex_state = 14, .external_lex_state = 2},
  [41] = {.lex_state = 3, .external_lex_state = 2},
  [42] = {.lex_state = 14, .external_lex_state = 2},
  [43] = {.lex_state = 1, .external_lex_state = 2},
  [44] = {.lex_state = 11, .external_lex_state = 2},
  [45] = {.lex_state = 20, .external_lex_state = 2},
  [46] = {.lex_state = 11, .external_lex_state = 2},
  [47] = {.lex_state = 5, .external_lex_state = 3},
  [48] = {.lex_state = 11, .external_lex_state = 2},
  [49] = {.lex_state = 12, .external_lex_state = 3},
  [50] = {.lex_state = 20, .external_lex_state = 2},
  [51] = {.lex_state = 20, .external_lex_state = 2},
  [52] = {.lex_state = 11, .external_lex_state = 2},
  [53] = {.lex_state = 11, .external_lex_state = 2},
  [54] = {.lex_state = 11, .external_lex_state = 2},
  [55] = {.lex_state = 13, .external_lex_state = 3},
  [56] = {.lex_state = 5, .external_lex_state = 2},
  [57] = {.lex_state = 12, .external_lex_state = 2},
  [58] = {.lex_state = 12, .external_lex_state = 2},
  [59] = {.lex_state = 5, .external_lex_state = 2},
  [60] = {.lex_state = 20, .external_lex_state = 2},
  [61] = {.lex_state = 20, .external_lex_state = 2},
  [62] = {.lex_state = 5, .external_lex_state = 2},
  [63] = {.lex_state = 20, .external_lex_state = 2},
  [64] = {.lex_state = 20, .external_lex_state = 2},
  [65] = {.lex_state = 20, .external_lex_state = 2},
  [66] = {.lex_state = 20, .external_lex_state = 2},
  [67] = {.lex_state = 20, .external_lex_state = 2},
  [68] = {.lex_state = 20, .external_lex_state = 2},
  [69] = {.lex_state = 12, .external_lex_state = 2},
  [70] = {.lex_state = 20, .external_lex_state = 2},
  [71] = {.lex_state = 6, .external_lex_state = 2},
  [72] = {.lex_state = 13, .external_lex_state = 2},
  [73] = {.lex_state = 1, .external_lex_state = 2},
  [74] = {.lex_state = 13, .external_lex_state = 2},
  [75] = {.lex_state = 1, .external_lex_state = 2},
  [76] = {.lex_state = 11, .external_lex_state = 2},
  [77] = {.lex_state = 13, .external_lex_state = 2},
  [78] = {.lex_state = 6, .external_lex_state = 2},
  [79] = {.lex_state = 6, .external_lex_state = 2},
  [80] = {.lex_state = 11, .external_lex_state = 2},
  [81] = {.lex_state = 6, .external_lex_state = 2},
  [82] = {.lex_state = 6, .external_lex_state = 2},
  [83] = {.lex_state = 6, .external_lex_state = 2},
  [84] = {.lex_state = 11, .external_lex_state = 2},
  [85] = {.lex_state = 3, .external_lex_state = 2},
  [86] = {.lex_state = 6, .external_lex_state = 2},
  [87] = {.lex_state = 3, .external_lex_state = 2},
  [88] = {.lex_state = 6, .external_lex_state = 2},
  [89] = {.lex_state = 11, .external_lex_state = 2},
  [90] = {.lex_state = 14, .external_lex_state = 2},
  [91] = {.lex_state = 6, .external_lex_state = 2},
  [92] = {.lex_state = 14, .external_lex_state = 2},
  [93] = {.lex_state = 11, .external_lex_state = 2},
  [94] = {.lex_state = 14, .external_lex_state = 2},
  [95] = {.lex_state = 6, .external_lex_state = 2},
  [96] = {.lex_state = 6, .external_lex_state = 2},
  [97] = {.lex_state = 11, .external_lex_state = 2},
  [98] = {.lex_state = 6, .external_lex_state = 2},
  [99] = {.lex_state = 11, .external_lex_state = 2},
  [100] = {.lex_state = 11, .external_lex_state = 2},
  [101] = {.lex_state = 6, .external_lex_state = 2},
  [102] = {.lex_state = 6, .external_lex_state = 2},
  [103] = {.lex_state = 6, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 6, .external_lex_state = 2},
  [107] = {.lex_state = 6, .external_lex_state = 2},
  [108] = {.lex_state = 6, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 11, .external_lex_state = 2},
  [113] = {.lex_state = 8, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 11, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 8, .external_lex_state = 2},
  [118] = {.lex_state = 11, .external_lex_state = 2},
  [119] = {.lex_state = 11, .external_lex_state = 2},
  [120] = {.lex_state = 16, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 16, .external_lex_state = 2},
  [124] = {.lex_state = 11, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 6, .external_lex_state = 2},
  [128] = {.lex_state = 11, .external_lex_state = 2},
  [129] = {.lex_state = 9, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 17, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 15, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 18, .external_lex_state = 2},
  [138] = {.lex_state = 15, .external_lex_state = 2},
  [139] = {.lex_state = 17, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 18, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 9, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 6, .external_lex_state = 2},
  [151] = {.lex_state = 6, .external_lex_state = 2},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 6, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 19, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 19, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 11, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 0, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 0, .external_lex_state = 2},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 21, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 21, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 21, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 6, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 0, .external_lex_state = 2},
  [242] = {.lex_state = 6, .external_lex_state = 2},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 0, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 2},
  [248] = {.lex_state = 0, .external_lex_state = 2},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 6, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 6, .external_lex_state = 2},
  [255] = {.lex_state = 22, .external_lex_state = 2},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 0, .external_lex_state = 2},
  [258] = {.lex_state = 0, .external_lex_state = 2},
  [259] = {.lex_state = 0, .external_lex_state = 2},
  [260] = {.lex_state = 0, .external_lex_state = 2},
  [261] = {.lex_state = 0, .external_lex_state = 2},
  [262] = {.lex_state = 0, .external_lex_state = 4},
  [263] = {.lex_state = 0, .external_lex_state = 5},
  [264] = {.lex_state = 22, .external_lex_state = 2},
  [265] = {.lex_state = 0, .external_lex_state = 2},
  [266] = {.lex_state = 0, .external_lex_state = 2},
  [267] = {.lex_state = 23, .external_lex_state = 2},
  [268] = {.lex_state = 0, .external_lex_state = 2},
  [269] = {.lex_state = 0, .external_lex_state = 2},
  [270] = {.lex_state = 0, .external_lex_state = 2},
  [271] = {.lex_state = 24, .external_lex_state = 2},
  [272] = {.lex_state = 0, .external_lex_state = 2},
  [273] = {.lex_state = 0, .external_lex_state = 2},
  [274] = {.lex_state = 0, .external_lex_state = 2},
  [275] = {.lex_state = 0, .external_lex_state = 2},
  [276] = {.lex_state = 0, .external_lex_state = 2},
  [277] = {.lex_state = 0, .external_lex_state = 2},
  [278] = {.lex_state = 0, .external_lex_state = 2},
  [279] = {.lex_state = 0, .external_lex_state = 4},
  [280] = {.lex_state = 0, .external_lex_state = 2},
  [281] = {.lex_state = 0, .external_lex_state = 2},
  [282] = {.lex_state = 0, .external_lex_state = 2},
  [283] = {.lex_state = 0, .external_lex_state = 2},
  [284] = {.lex_state = 0, .external_lex_state = 2},
  [285] = {.lex_state = 0, .external_lex_state = 2},
  [286] = {.lex_state = 0, .external_lex_state = 2},
  [287] = {.lex_state = 0, .external_lex_state = 5},
  [288] = {.lex_state = 0, .external_lex_state = 2},
  [289] = {.lex_state = 0, .external_lex_state = 2},
  [290] = {.lex_state = 0, .external_lex_state = 2},
  [291] = {.lex_state = 0, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym__identifier_token1] = ACTIONS(1),
    [anon_sym_RPAREN2] = ACTIONS(1),
    [anon_sym_direction] = ACTIONS(1),
    [anon_sym_shape] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_constraint] = ACTIONS(1),
    [anon_sym_icon] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [anon_sym_tooltip] = ACTIONS(1),
    [anon_sym_width] = ACTIONS(1),
    [anon_sym_height] = ACTIONS(1),
    [anon_sym_vertical_DASHgap] = ACTIONS(1),
    [anon_sym_horizontal_DASHgap] = ACTIONS(1),
    [anon_sym_grid_DASHgap] = ACTIONS(1),
    [anon_sym_grid_DASHcolumns] = ACTIONS(1),
    [anon_sym_grid_DASHrows] = ACTIONS(1),
    [anon_sym_opacity] = ACTIONS(1),
    [anon_sym_fill] = ACTIONS(1),
    [anon_sym_fill_DASHpattern] = ACTIONS(1),
    [anon_sym_stroke] = ACTIONS(1),
    [anon_sym_stroke_DASHwidth] = ACTIONS(1),
    [anon_sym_stroke_DASHdash] = ACTIONS(1),
    [anon_sym_border_DASHradius] = ACTIONS(1),
    [anon_sym_double_DASHborder] = ACTIONS(1),
    [anon_sym_font] = ACTIONS(1),
    [anon_sym_font_DASHsize] = ACTIONS(1),
    [anon_sym_font_DASHcolor] = ACTIONS(1),
    [anon_sym_shadow] = ACTIONS(1),
    [anon_sym_multiple] = ACTIONS(1),
    [anon_sym_animated] = ACTIONS(1),
    [anon_sym_italic] = ACTIONS(1),
    [anon_sym_bold] = ACTIONS(1),
    [anon_sym_underline] = ACTIONS(1),
    [anon_sym_text_DASHtransform] = ACTIONS(1),
    [anon_sym_near] = ACTIONS(1),
    [sym_keyword_underscore] = ACTIONS(1),
    [sym_keyword_classes] = ACTIONS(1),
    [sym_keyword_class] = ACTIONS(1),
    [sym_keyword_style] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__text_block_start] = ACTIONS(1),
    [sym__text_block_end] = ACTIONS(1),
    [sym__text_block_raw_text] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(288),
    [sym__root_definition] = STATE(3),
    [sym_connection] = STATE(177),
    [sym__referencing_full_connection_path] = STATE(132),
    [sym__full_connection_path] = STATE(132),
    [sym__connection_path] = STATE(254),
    [sym_classes] = STATE(177),
    [sym_container] = STATE(177),
    [sym_shape] = STATE(177),
    [sym_shape_key] = STATE(102),
    [sym__identifier] = STATE(86),
    [sym__root_attribute] = STATE(177),
    [sym__root_attr_key] = STATE(275),
    [sym__grid_attr_key] = STATE(270),
    [sym__common_style_attr_key] = STATE(273),
    [sym__text_attr_key] = STATE(273),
    [sym_string] = STATE(86),
    [sym__eol] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__connection_path_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym__identifier_token1] = ACTIONS(9),
    [anon_sym_direction] = ACTIONS(11),
    [anon_sym_shape] = ACTIONS(13),
    [anon_sym_label] = ACTIONS(13),
    [anon_sym_constraint] = ACTIONS(13),
    [anon_sym_icon] = ACTIONS(13),
    [anon_sym_link] = ACTIONS(15),
    [anon_sym_vertical_DASHgap] = ACTIONS(11),
    [anon_sym_horizontal_DASHgap] = ACTIONS(11),
    [anon_sym_grid_DASHgap] = ACTIONS(11),
    [anon_sym_grid_DASHcolumns] = ACTIONS(11),
    [anon_sym_grid_DASHrows] = ACTIONS(11),
    [anon_sym_opacity] = ACTIONS(15),
    [anon_sym_fill] = ACTIONS(17),
    [anon_sym_fill_DASHpattern] = ACTIONS(15),
    [anon_sym_stroke] = ACTIONS(17),
    [anon_sym_stroke_DASHwidth] = ACTIONS(15),
    [anon_sym_stroke_DASHdash] = ACTIONS(15),
    [anon_sym_border_DASHradius] = ACTIONS(15),
    [anon_sym_double_DASHborder] = ACTIONS(15),
    [anon_sym_font] = ACTIONS(17),
    [anon_sym_font_DASHsize] = ACTIONS(15),
    [anon_sym_font_DASHcolor] = ACTIONS(15),
    [anon_sym_shadow] = ACTIONS(15),
    [anon_sym_multiple] = ACTIONS(15),
    [anon_sym_animated] = ACTIONS(15),
    [anon_sym_italic] = ACTIONS(15),
    [anon_sym_bold] = ACTIONS(15),
    [anon_sym_underline] = ACTIONS(15),
    [anon_sym_text_DASHtransform] = ACTIONS(15),
    [anon_sym_near] = ACTIONS(19),
    [sym_keyword_underscore] = ACTIONS(21),
    [sym_keyword_classes] = ACTIONS(23),
    [sym_keyword_style] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_escape_sequence] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(31),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(38), 1,
      aux_sym__identifier_token1,
    ACTIONS(53), 1,
      anon_sym_near,
    ACTIONS(56), 1,
      sym_keyword_underscore,
    ACTIONS(59), 1,
      sym_keyword_classes,
    ACTIONS(62), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 1,
      sym_escape_sequence,
    ACTIONS(71), 1,
      anon_sym_LF,
    STATE(97), 1,
      aux_sym__connection_path_repeat1,
    STATE(102), 1,
      sym_shape_key,
    STATE(254), 1,
      sym__connection_path,
    STATE(270), 1,
      sym__grid_attr_key,
    STATE(275), 1,
      sym__root_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    STATE(132), 2,
      sym__referencing_full_connection_path,
      sym__full_connection_path,
    STATE(273), 2,
      sym__common_style_attr_key,
      sym__text_attr_key,
    ACTIONS(50), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    STATE(2), 3,
      sym__root_definition,
      sym__eol,
      aux_sym_source_file_repeat1,
    ACTIONS(44), 5,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      sym_keyword_style,
    STATE(177), 5,
      sym_connection,
      sym_classes,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(41), 6,
      anon_sym_direction,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(47), 16,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
  [112] = 25,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(19), 1,
      anon_sym_near,
    ACTIONS(21), 1,
      sym_keyword_underscore,
    ACTIONS(23), 1,
      sym_keyword_classes,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_escape_sequence,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      anon_sym_LF,
    STATE(97), 1,
      aux_sym__connection_path_repeat1,
    STATE(102), 1,
      sym_shape_key,
    STATE(254), 1,
      sym__connection_path,
    STATE(270), 1,
      sym__grid_attr_key,
    STATE(275), 1,
      sym__root_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    STATE(132), 2,
      sym__referencing_full_connection_path,
      sym__full_connection_path,
    STATE(273), 2,
      sym__common_style_attr_key,
      sym__text_attr_key,
    ACTIONS(17), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    STATE(2), 3,
      sym__root_definition,
      sym__eol,
      aux_sym_source_file_repeat1,
    ACTIONS(13), 5,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      sym_keyword_style,
    STATE(177), 5,
      sym_connection,
      sym_classes,
      sym_container,
      sym_shape,
      sym__root_attribute,
    ACTIONS(11), 6,
      anon_sym_direction,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
    ACTIONS(15), 16,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
  [224] = 24,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 1,
      aux_sym__identifier_token1,
    ACTIONS(89), 1,
      anon_sym_constraint,
    ACTIONS(92), 1,
      anon_sym_near,
    ACTIONS(95), 1,
      sym_keyword_underscore,
    ACTIONS(98), 1,
      sym_keyword_class,
    ACTIONS(101), 1,
      sym_keyword_style,
    ACTIONS(104), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym_escape_sequence,
    ACTIONS(113), 1,
      anon_sym_LF,
    STATE(97), 1,
      aux_sym__connection_path_repeat1,
    STATE(127), 1,
      sym_shape_key,
    STATE(254), 1,
      sym__connection_path,
    STATE(283), 1,
      sym__shape_attr_key,
    STATE(284), 1,
      sym__shape_list_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(4), 2,
      sym__eol,
      aux_sym__container_block_repeat1,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    STATE(175), 2,
      sym__referencing_full_connection_path,
      sym__full_connection_path,
    STATE(289), 2,
      sym__grid_attr_key,
      sym__text_attr_key,
    STATE(212), 8,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(86), 13,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
  [321] = 24,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(19), 1,
      anon_sym_near,
    ACTIONS(21), 1,
      sym_keyword_underscore,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_escape_sequence,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    ACTIONS(120), 1,
      anon_sym_constraint,
    ACTIONS(122), 1,
      sym_keyword_class,
    ACTIONS(124), 1,
      sym_keyword_style,
    ACTIONS(126), 1,
      anon_sym_LF,
    STATE(97), 1,
      aux_sym__connection_path_repeat1,
    STATE(103), 1,
      sym_shape_key,
    STATE(254), 1,
      sym__connection_path,
    STATE(272), 1,
      sym__shape_attr_key,
    STATE(274), 1,
      sym__shape_list_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(6), 2,
      sym__eol,
      aux_sym__container_block_repeat1,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    STATE(140), 2,
      sym__referencing_full_connection_path,
      sym__full_connection_path,
    STATE(289), 2,
      sym__grid_attr_key,
      sym__text_attr_key,
    STATE(179), 8,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(118), 13,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
  [418] = 24,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(19), 1,
      anon_sym_near,
    ACTIONS(21), 1,
      sym_keyword_underscore,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_escape_sequence,
    ACTIONS(120), 1,
      anon_sym_constraint,
    ACTIONS(122), 1,
      sym_keyword_class,
    ACTIONS(124), 1,
      sym_keyword_style,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(130), 1,
      anon_sym_LF,
    STATE(97), 1,
      aux_sym__connection_path_repeat1,
    STATE(103), 1,
      sym_shape_key,
    STATE(254), 1,
      sym__connection_path,
    STATE(272), 1,
      sym__shape_attr_key,
    STATE(274), 1,
      sym__shape_list_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(4), 2,
      sym__eol,
      aux_sym__container_block_repeat1,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    STATE(140), 2,
      sym__referencing_full_connection_path,
      sym__full_connection_path,
    STATE(289), 2,
      sym__grid_attr_key,
      sym__text_attr_key,
    STATE(173), 8,
      sym_connection,
      sym_container,
      sym__container_block_definition,
      sym_shape,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(118), 13,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
  [515] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(134), 4,
      aux_sym__identifier_token1,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(132), 36,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
      anon_sym_near,
      sym_keyword_underscore,
      sym_keyword_classes,
      sym_keyword_style,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      anon_sym_LF,
  [564] = 18,
    ACTIONS(19), 1,
      anon_sym_near,
    ACTIONS(120), 1,
      anon_sym_constraint,
    ACTIONS(122), 1,
      sym_keyword_class,
    ACTIONS(136), 1,
      aux_sym__identifier_token1,
    ACTIONS(139), 1,
      sym_keyword_underscore,
    ACTIONS(142), 1,
      sym_keyword_style,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_escape_sequence,
    STATE(122), 1,
      sym_shape_key,
    STATE(261), 1,
      sym__shape_list_attr_key,
    STATE(278), 1,
      sym__shape_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    STATE(214), 2,
      sym_container,
      sym_shape,
    STATE(289), 2,
      sym__grid_attr_key,
      sym__text_attr_key,
    STATE(215), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(118), 13,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
  [638] = 18,
    ACTIONS(19), 1,
      anon_sym_near,
    ACTIONS(21), 1,
      sym_keyword_underscore,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_constraint,
    ACTIONS(122), 1,
      sym_keyword_class,
    ACTIONS(142), 1,
      sym_keyword_style,
    ACTIONS(153), 1,
      aux_sym__identifier_token1,
    ACTIONS(155), 1,
      sym_escape_sequence,
    STATE(122), 1,
      sym_shape_key,
    STATE(261), 1,
      sym__shape_list_attr_key,
    STATE(278), 1,
      sym__shape_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    STATE(214), 2,
      sym_container,
      sym_shape,
    STATE(289), 2,
      sym__grid_attr_key,
      sym__text_attr_key,
    STATE(215), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(118), 13,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
  [712] = 18,
    ACTIONS(19), 1,
      anon_sym_near,
    ACTIONS(21), 1,
      sym_keyword_underscore,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_constraint,
    ACTIONS(122), 1,
      sym_keyword_class,
    ACTIONS(153), 1,
      aux_sym__identifier_token1,
    ACTIONS(155), 1,
      sym_escape_sequence,
    ACTIONS(157), 1,
      sym_keyword_style,
    STATE(134), 1,
      sym_shape_key,
    STATE(283), 1,
      sym__shape_attr_key,
    STATE(284), 1,
      sym__shape_list_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    STATE(214), 2,
      sym_container,
      sym_shape,
    STATE(289), 2,
      sym__grid_attr_key,
      sym__text_attr_key,
    STATE(215), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(118), 13,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
  [786] = 18,
    ACTIONS(19), 1,
      anon_sym_near,
    ACTIONS(120), 1,
      anon_sym_constraint,
    ACTIONS(122), 1,
      sym_keyword_class,
    ACTIONS(124), 1,
      sym_keyword_style,
    ACTIONS(136), 1,
      aux_sym__identifier_token1,
    ACTIONS(139), 1,
      sym_keyword_underscore,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_escape_sequence,
    STATE(121), 1,
      sym_shape_key,
    STATE(272), 1,
      sym__shape_attr_key,
    STATE(274), 1,
      sym__shape_list_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    STATE(214), 2,
      sym_container,
      sym_shape,
    STATE(289), 2,
      sym__grid_attr_key,
      sym__text_attr_key,
    STATE(215), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(118), 13,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
  [860] = 18,
    ACTIONS(19), 1,
      anon_sym_near,
    ACTIONS(21), 1,
      sym_keyword_underscore,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_constraint,
    ACTIONS(122), 1,
      sym_keyword_class,
    ACTIONS(124), 1,
      sym_keyword_style,
    ACTIONS(153), 1,
      aux_sym__identifier_token1,
    ACTIONS(155), 1,
      sym_escape_sequence,
    STATE(121), 1,
      sym_shape_key,
    STATE(272), 1,
      sym__shape_attr_key,
    STATE(274), 1,
      sym__shape_list_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    STATE(214), 2,
      sym_container,
      sym_shape,
    STATE(289), 2,
      sym__grid_attr_key,
      sym__text_attr_key,
    STATE(215), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(118), 13,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
  [934] = 18,
    ACTIONS(19), 1,
      anon_sym_near,
    ACTIONS(120), 1,
      anon_sym_constraint,
    ACTIONS(122), 1,
      sym_keyword_class,
    ACTIONS(136), 1,
      aux_sym__identifier_token1,
    ACTIONS(139), 1,
      sym_keyword_underscore,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      sym_escape_sequence,
    ACTIONS(157), 1,
      sym_keyword_style,
    STATE(134), 1,
      sym_shape_key,
    STATE(283), 1,
      sym__shape_attr_key,
    STATE(284), 1,
      sym__shape_list_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    STATE(214), 2,
      sym_container,
      sym_shape,
    STATE(289), 2,
      sym__grid_attr_key,
      sym__text_attr_key,
    STATE(215), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(118), 13,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
  [1008] = 12,
    ACTIONS(19), 1,
      anon_sym_near,
    ACTIONS(120), 1,
      anon_sym_constraint,
    ACTIONS(124), 1,
      sym_keyword_style,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    ACTIONS(161), 1,
      anon_sym_LF,
    STATE(272), 1,
      sym__shape_attr_key,
    STATE(274), 1,
      sym__shape_list_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(15), 2,
      sym__eol,
      aux_sym__classes_item_block_repeat1,
    STATE(289), 2,
      sym__grid_attr_key,
      sym__text_attr_key,
    STATE(172), 3,
      sym__classes_item_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(118), 13,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
  [1062] = 12,
    ACTIONS(19), 1,
      anon_sym_near,
    ACTIONS(120), 1,
      anon_sym_constraint,
    ACTIONS(124), 1,
      sym_keyword_style,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(165), 1,
      anon_sym_LF,
    STATE(272), 1,
      sym__shape_attr_key,
    STATE(274), 1,
      sym__shape_list_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(18), 2,
      sym__eol,
      aux_sym__classes_item_block_repeat1,
    STATE(289), 2,
      sym__grid_attr_key,
      sym__text_attr_key,
    STATE(174), 3,
      sym__classes_item_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(118), 13,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
  [1116] = 10,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    ACTIONS(169), 1,
      anon_sym_3d,
    ACTIONS(171), 1,
      anon_sym_LF,
    STATE(178), 1,
      sym__inner_style_attribute,
    STATE(277), 1,
      sym__common_style_attr_key,
    STATE(285), 1,
      sym__style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(17), 2,
      sym__eol,
      aux_sym__style_attribute_block_repeat1,
    ACTIONS(17), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(15), 16,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
  [1166] = 10,
    ACTIONS(169), 1,
      anon_sym_3d,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    ACTIONS(175), 1,
      anon_sym_LF,
    STATE(161), 1,
      sym__inner_style_attribute,
    STATE(277), 1,
      sym__common_style_attr_key,
    STATE(285), 1,
      sym__style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(19), 2,
      sym__eol,
      aux_sym__style_attribute_block_repeat1,
    ACTIONS(17), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(15), 16,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
  [1216] = 12,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(182), 1,
      anon_sym_constraint,
    ACTIONS(185), 1,
      anon_sym_near,
    ACTIONS(188), 1,
      sym_keyword_style,
    ACTIONS(191), 1,
      anon_sym_LF,
    STATE(283), 1,
      sym__shape_attr_key,
    STATE(284), 1,
      sym__shape_list_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(18), 2,
      sym__eol,
      aux_sym__classes_item_block_repeat1,
    STATE(289), 2,
      sym__grid_attr_key,
      sym__text_attr_key,
    STATE(185), 3,
      sym__classes_item_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(179), 13,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
  [1270] = 10,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 1,
      anon_sym_3d,
    ACTIONS(205), 1,
      anon_sym_LF,
    STATE(199), 1,
      sym__inner_style_attribute,
    STATE(277), 1,
      sym__common_style_attr_key,
    STATE(286), 1,
      sym__style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(19), 2,
      sym__eol,
      aux_sym__style_attribute_block_repeat1,
    ACTIONS(202), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(196), 16,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
  [1320] = 10,
    ACTIONS(19), 1,
      anon_sym_near,
    ACTIONS(120), 1,
      anon_sym_constraint,
    ACTIONS(122), 1,
      sym_keyword_class,
    ACTIONS(124), 1,
      sym_keyword_style,
    STATE(272), 1,
      sym__shape_attr_key,
    STATE(274), 1,
      sym__shape_list_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(289), 2,
      sym__grid_attr_key,
      sym__text_attr_key,
    STATE(227), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(118), 13,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
  [1368] = 4,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(81), 23,
      anon_sym_LPAREN,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      anon_sym_near,
      sym_keyword_underscore,
      sym_keyword_class,
      sym_keyword_style,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      anon_sym_LF,
  [1404] = 3,
    ACTIONS(211), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(81), 24,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      anon_sym_near,
      sym_keyword_underscore,
      sym_keyword_class,
      sym_keyword_style,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      anon_sym_LF,
  [1438] = 4,
    ACTIONS(211), 1,
      aux_sym__identifier_token1,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(81), 23,
      anon_sym_LPAREN,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      anon_sym_near,
      sym_keyword_underscore,
      sym_keyword_class,
      sym_keyword_style,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      anon_sym_LF,
  [1474] = 10,
    ACTIONS(19), 1,
      anon_sym_near,
    ACTIONS(120), 1,
      anon_sym_constraint,
    ACTIONS(122), 1,
      sym_keyword_class,
    ACTIONS(142), 1,
      sym_keyword_style,
    STATE(261), 1,
      sym__shape_list_attr_key,
    STATE(278), 1,
      sym__shape_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(289), 2,
      sym__grid_attr_key,
      sym__text_attr_key,
    STATE(227), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(118), 13,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
  [1522] = 10,
    ACTIONS(19), 1,
      anon_sym_near,
    ACTIONS(120), 1,
      anon_sym_constraint,
    ACTIONS(122), 1,
      sym_keyword_class,
    ACTIONS(157), 1,
      sym_keyword_style,
    STATE(283), 1,
      sym__shape_attr_key,
    STATE(284), 1,
      sym__shape_list_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(289), 2,
      sym__grid_attr_key,
      sym__text_attr_key,
    STATE(227), 4,
      sym__shape_attribute,
      sym__class_attribute,
      sym__base_shape_attribute,
      sym__style_attribute,
    ACTIONS(118), 13,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
  [1570] = 7,
    ACTIONS(169), 1,
      anon_sym_3d,
    STATE(188), 1,
      sym__inner_style_attribute,
    STATE(277), 1,
      sym__common_style_attr_key,
    STATE(285), 1,
      sym__style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(17), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(15), 16,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
  [1610] = 7,
    ACTIONS(169), 1,
      anon_sym_3d,
    STATE(188), 1,
      sym__inner_style_attribute,
    STATE(277), 1,
      sym__common_style_attr_key,
    STATE(286), 1,
      sym__style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(17), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(15), 16,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
  [1650] = 7,
    ACTIONS(169), 1,
      anon_sym_3d,
    STATE(188), 1,
      sym__inner_style_attribute,
    STATE(277), 1,
      sym__common_style_attr_key,
    STATE(281), 1,
      sym__style_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(17), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(15), 16,
      anon_sym_link,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
  [1690] = 4,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(219), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(194), 18,
      anon_sym_link,
      anon_sym_3d,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
      anon_sym_LF,
  [1723] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(219), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(194), 19,
      anon_sym_RBRACE,
      anon_sym_link,
      anon_sym_3d,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
      anon_sym_LF,
  [1754] = 4,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(219), 3,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_font,
    ACTIONS(194), 18,
      anon_sym_link,
      anon_sym_3d,
      anon_sym_opacity,
      anon_sym_fill_DASHpattern,
      anon_sym_stroke_DASHwidth,
      anon_sym_stroke_DASHdash,
      anon_sym_border_DASHradius,
      anon_sym_double_DASHborder,
      anon_sym_font_DASHsize,
      anon_sym_font_DASHcolor,
      anon_sym_shadow,
      anon_sym_multiple,
      anon_sym_animated,
      anon_sym_italic,
      anon_sym_bold,
      anon_sym_underline,
      anon_sym_text_DASHtransform,
      anon_sym_LF,
  [1787] = 3,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(177), 17,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      anon_sym_near,
      sym_keyword_style,
      anon_sym_LF,
  [1814] = 3,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(177), 17,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      anon_sym_near,
      sym_keyword_style,
      anon_sym_LF,
  [1841] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(177), 18,
      anon_sym_RBRACE,
      anon_sym_direction,
      anon_sym_shape,
      anon_sym_label,
      anon_sym_constraint,
      anon_sym_icon,
      anon_sym_link,
      anon_sym_tooltip,
      anon_sym_width,
      anon_sym_height,
      anon_sym_vertical_DASHgap,
      anon_sym_horizontal_DASHgap,
      anon_sym_grid_DASHgap,
      anon_sym_grid_DASHcolumns,
      anon_sym_grid_DASHrows,
      anon_sym_near,
      sym_keyword_style,
      anon_sym_LF,
  [1866] = 9,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    ACTIONS(238), 1,
      aux_sym__identifier_token4,
    ACTIONS(240), 1,
      anon_sym_DASH,
    STATE(36), 1,
      aux_sym__identifier_repeat1,
    STATE(88), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(234), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(236), 2,
      aux_sym__identifier_token3,
      anon_sym_RPAREN2,
    ACTIONS(230), 8,
      anon_sym_NULL,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_SEMI,
  [1904] = 9,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    ACTIONS(250), 1,
      aux_sym__identifier_token4,
    ACTIONS(252), 1,
      anon_sym_DASH,
    STATE(43), 1,
      aux_sym__identifier_repeat1,
    STATE(95), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(246), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(248), 2,
      aux_sym__identifier_token3,
      anon_sym_RPAREN2,
    ACTIONS(242), 8,
      anon_sym_NULL,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_SEMI,
  [1942] = 9,
    ACTIONS(252), 1,
      anon_sym_DASH,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    ACTIONS(260), 1,
      aux_sym__identifier_token4,
    STATE(41), 1,
      aux_sym__identifier_repeat1,
    STATE(95), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(256), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(258), 2,
      aux_sym__identifier_token3,
      anon_sym_RPAREN2,
    ACTIONS(242), 8,
      anon_sym_NULL,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_dot,
      anon_sym_LF,
      anon_sym_SEMI,
  [1980] = 9,
    ACTIONS(240), 1,
      anon_sym_DASH,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    ACTIONS(268), 1,
      aux_sym__identifier_token4,
    STATE(37), 1,
      aux_sym__identifier_repeat1,
    STATE(88), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(264), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(266), 2,
      aux_sym__identifier_token3,
      anon_sym_RPAREN2,
    ACTIONS(230), 8,
      anon_sym_NULL,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_dot,
      anon_sym_LF,
      anon_sym_SEMI,
  [2018] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(284), 1,
      anon_sym_LF,
    STATE(135), 1,
      aux_sym__unquoted_string,
    STATE(154), 1,
      sym_attr_value,
    ACTIONS(272), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(278), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(280), 2,
      sym_integer,
      sym_float,
    STATE(40), 2,
      sym__eol,
      aux_sym_attr_value_list_repeat1,
    STATE(162), 2,
      sym_string,
      sym_boolean,
  [2063] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_RBRACK,
    ACTIONS(288), 1,
      anon_sym_LF,
    STATE(135), 1,
      aux_sym__unquoted_string,
    STATE(169), 1,
      sym_attr_value,
    ACTIONS(272), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(278), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(280), 2,
      sym_integer,
      sym_float,
    STATE(42), 2,
      sym__eol,
      aux_sym_attr_value_list_repeat1,
    STATE(162), 2,
      sym_string,
      sym_boolean,
  [2108] = 6,
    STATE(41), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(295), 2,
      aux_sym__identifier_token3,
      anon_sym_RPAREN2,
    ACTIONS(298), 2,
      aux_sym__identifier_token4,
      anon_sym_DASH,
    ACTIONS(290), 9,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_dot,
      anon_sym_LF,
      anon_sym_SEMI,
  [2139] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    ACTIONS(305), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      anon_sym_LF,
    STATE(164), 1,
      aux_sym__unquoted_string,
    STATE(205), 1,
      sym_attr_value,
    ACTIONS(302), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(311), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(314), 2,
      sym_integer,
      sym_float,
    STATE(42), 2,
      sym__eol,
      aux_sym_attr_value_list_repeat1,
    STATE(162), 2,
      sym_string,
      sym_boolean,
  [2184] = 6,
    STATE(43), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(298), 2,
      aux_sym__identifier_token4,
      anon_sym_DASH,
    ACTIONS(320), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(323), 2,
      aux_sym__identifier_token3,
      anon_sym_RPAREN2,
    ACTIONS(290), 9,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_SEMI,
  [2215] = 13,
    ACTIONS(21), 1,
      sym_keyword_underscore,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      aux_sym__identifier_token1,
    ACTIONS(155), 1,
      sym_escape_sequence,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    ACTIONS(328), 1,
      anon_sym_LF,
    STATE(105), 1,
      sym_shape_key,
    STATE(111), 1,
      sym__class_name,
    STATE(163), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(48), 2,
      sym__eol,
      aux_sym__classes_block_repeat1,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [2258] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(330), 1,
      anon_sym_LBRACK,
    STATE(146), 1,
      aux_sym__unquoted_string,
    ACTIONS(278), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(280), 2,
      sym_integer,
      sym_float,
    ACTIONS(332), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(162), 2,
      sym_string,
      sym_boolean,
    STATE(208), 2,
      sym_attr_value_list,
      sym_attr_value,
  [2297] = 13,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    ACTIONS(336), 1,
      aux_sym__identifier_token1,
    ACTIONS(339), 1,
      sym_keyword_underscore,
    ACTIONS(342), 1,
      anon_sym_SQUOTE,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(348), 1,
      sym_escape_sequence,
    ACTIONS(351), 1,
      anon_sym_LF,
    STATE(105), 1,
      sym_shape_key,
    STATE(147), 1,
      sym__class_name,
    STATE(233), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(46), 2,
      sym__eol,
      aux_sym__classes_block_repeat1,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [2340] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    ACTIONS(360), 1,
      sym__text_block_start,
    STATE(113), 1,
      aux_sym__unquoted_string,
    STATE(130), 1,
      sym_text_block,
    STATE(131), 1,
      sym_label,
    STATE(156), 1,
      sym_string,
    STATE(214), 1,
      sym__container_block,
    ACTIONS(358), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(354), 3,
      anon_sym_NULL,
      anon_sym_LF,
      anon_sym_SEMI,
  [2383] = 13,
    ACTIONS(21), 1,
      sym_keyword_underscore,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      aux_sym__identifier_token1,
    ACTIONS(155), 1,
      sym_escape_sequence,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    ACTIONS(364), 1,
      anon_sym_LF,
    STATE(105), 1,
      sym_shape_key,
    STATE(111), 1,
      sym__class_name,
    STATE(171), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(46), 2,
      sym__eol,
      aux_sym__classes_block_repeat1,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [2426] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    ACTIONS(360), 1,
      sym__text_block_start,
    STATE(120), 1,
      aux_sym__unquoted_string,
    STATE(130), 1,
      sym_text_block,
    STATE(131), 1,
      sym_label,
    STATE(156), 1,
      sym_string,
    STATE(214), 1,
      sym__container_block,
    ACTIONS(366), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(354), 3,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [2469] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(330), 1,
      anon_sym_LBRACK,
    STATE(129), 1,
      aux_sym__unquoted_string,
    ACTIONS(278), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(280), 2,
      sym_integer,
      sym_float,
    ACTIONS(368), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(162), 2,
      sym_string,
      sym_boolean,
    STATE(208), 2,
      sym_attr_value_list,
      sym_attr_value,
  [2508] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(330), 1,
      anon_sym_LBRACK,
    STATE(164), 1,
      aux_sym__unquoted_string,
    ACTIONS(278), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(280), 2,
      sym_integer,
      sym_float,
    ACTIONS(370), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(162), 2,
      sym_string,
      sym_boolean,
    STATE(208), 2,
      sym_attr_value_list,
      sym_attr_value,
  [2547] = 12,
    ACTIONS(21), 1,
      sym_keyword_underscore,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      aux_sym__identifier_token1,
    ACTIONS(155), 1,
      sym_escape_sequence,
    ACTIONS(372), 1,
      anon_sym_RBRACK,
    ACTIONS(374), 1,
      anon_sym_LF,
    STATE(105), 1,
      sym_shape_key,
    STATE(152), 1,
      sym__class_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(53), 2,
      sym__eol,
      aux_sym_class_list_repeat1,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [2587] = 12,
    ACTIONS(21), 1,
      sym_keyword_underscore,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      aux_sym__identifier_token1,
    ACTIONS(155), 1,
      sym_escape_sequence,
    ACTIONS(376), 1,
      anon_sym_RBRACK,
    ACTIONS(378), 1,
      anon_sym_LF,
    STATE(105), 1,
      sym_shape_key,
    STATE(166), 1,
      sym__class_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(54), 2,
      sym__eol,
      aux_sym_class_list_repeat1,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [2627] = 12,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
    ACTIONS(382), 1,
      aux_sym__identifier_token1,
    ACTIONS(385), 1,
      sym_keyword_underscore,
    ACTIONS(388), 1,
      anon_sym_SQUOTE,
    ACTIONS(391), 1,
      anon_sym_DQUOTE,
    ACTIONS(394), 1,
      sym_escape_sequence,
    ACTIONS(397), 1,
      anon_sym_LF,
    STATE(105), 1,
      sym_shape_key,
    STATE(202), 1,
      sym__class_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(54), 2,
      sym__eol,
      aux_sym_class_list_repeat1,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [2667] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    ACTIONS(360), 1,
      sym__text_block_start,
    STATE(130), 1,
      sym_text_block,
    STATE(131), 1,
      sym_label,
    STATE(133), 1,
      aux_sym__unquoted_string,
    STATE(156), 1,
      sym_string,
    STATE(214), 1,
      sym__container_block,
    ACTIONS(354), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    ACTIONS(400), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
  [2709] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(404), 1,
      anon_sym_LBRACE,
    STATE(113), 1,
      aux_sym__unquoted_string,
    STATE(141), 1,
      sym_label,
    STATE(156), 1,
      sym_string,
    STATE(227), 1,
      sym__classes_item_block,
    ACTIONS(358), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(402), 3,
      anon_sym_NULL,
      anon_sym_LF,
      anon_sym_SEMI,
  [2746] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(404), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      aux_sym__unquoted_string,
    STATE(141), 1,
      sym_label,
    STATE(156), 1,
      sym_string,
    STATE(227), 1,
      sym__classes_item_block,
    ACTIONS(366), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(402), 3,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [2783] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(406), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      aux_sym__unquoted_string,
    STATE(144), 1,
      sym_label,
    STATE(156), 1,
      sym_string,
    STATE(198), 1,
      sym__connection_block,
    ACTIONS(366), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(408), 3,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [2820] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(406), 1,
      anon_sym_LBRACE,
    STATE(113), 1,
      aux_sym__unquoted_string,
    STATE(144), 1,
      sym_label,
    STATE(156), 1,
      sym_string,
    STATE(198), 1,
      sym__connection_block,
    ACTIONS(358), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(408), 3,
      anon_sym_NULL,
      anon_sym_LF,
      anon_sym_SEMI,
  [2857] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(129), 1,
      aux_sym__unquoted_string,
    STATE(236), 1,
      sym_attr_value,
    ACTIONS(278), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(280), 2,
      sym_integer,
      sym_float,
    ACTIONS(368), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(162), 2,
      sym_string,
      sym_boolean,
  [2892] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(164), 1,
      aux_sym__unquoted_string,
    STATE(189), 1,
      sym_attr_value,
    ACTIONS(278), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(280), 2,
      sym_integer,
      sym_float,
    ACTIONS(370), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(162), 2,
      sym_string,
      sym_boolean,
  [2927] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(412), 1,
      anon_sym_LBRACE,
    STATE(113), 1,
      aux_sym__unquoted_string,
    STATE(153), 1,
      sym_label,
    STATE(156), 1,
      sym_string,
    STATE(239), 1,
      sym__classes_block,
    ACTIONS(358), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(410), 3,
      anon_sym_NULL,
      anon_sym_LF,
      anon_sym_SEMI,
  [2964] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(129), 1,
      aux_sym__unquoted_string,
    STATE(208), 1,
      sym_attr_value,
    ACTIONS(278), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(280), 2,
      sym_integer,
      sym_float,
    ACTIONS(368), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(162), 2,
      sym_string,
      sym_boolean,
  [2999] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(146), 1,
      aux_sym__unquoted_string,
    STATE(189), 1,
      sym_attr_value,
    ACTIONS(278), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(280), 2,
      sym_integer,
      sym_float,
    ACTIONS(332), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(162), 2,
      sym_string,
      sym_boolean,
  [3034] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(129), 1,
      aux_sym__unquoted_string,
    STATE(189), 1,
      sym_attr_value,
    ACTIONS(278), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(280), 2,
      sym_integer,
      sym_float,
    ACTIONS(368), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(162), 2,
      sym_string,
      sym_boolean,
  [3069] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(164), 1,
      aux_sym__unquoted_string,
    STATE(248), 1,
      sym_attr_value,
    ACTIONS(278), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(280), 2,
      sym_integer,
      sym_float,
    ACTIONS(370), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(162), 2,
      sym_string,
      sym_boolean,
  [3104] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(146), 1,
      aux_sym__unquoted_string,
    STATE(208), 1,
      sym_attr_value,
    ACTIONS(278), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(280), 2,
      sym_integer,
      sym_float,
    ACTIONS(332), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(162), 2,
      sym_string,
      sym_boolean,
  [3139] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(164), 1,
      aux_sym__unquoted_string,
    STATE(208), 1,
      sym_attr_value,
    ACTIONS(278), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(280), 2,
      sym_integer,
      sym_float,
    ACTIONS(370), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(162), 2,
      sym_string,
      sym_boolean,
  [3174] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      aux_sym__unquoted_string,
    STATE(155), 1,
      sym_label,
    STATE(156), 1,
      sym_string,
    STATE(237), 1,
      sym__container_block,
    ACTIONS(366), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(414), 3,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [3211] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(146), 1,
      aux_sym__unquoted_string,
    STATE(248), 1,
      sym_attr_value,
    ACTIONS(278), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(280), 2,
      sym_integer,
      sym_float,
    ACTIONS(332), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    STATE(162), 2,
      sym_string,
      sym_boolean,
  [3246] = 8,
    ACTIONS(416), 1,
      anon_sym_RBRACE,
    ACTIONS(421), 1,
      sym_keyword_style,
    ACTIONS(424), 1,
      anon_sym_LF,
    STATE(143), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(418), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(71), 2,
      sym__eol,
      aux_sym__connection_block_repeat1,
    STATE(194), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [3276] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(406), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      aux_sym__unquoted_string,
    STATE(144), 1,
      sym_label,
    STATE(156), 1,
      sym_string,
    STATE(198), 1,
      sym__connection_block,
    ACTIONS(400), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(408), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [3312] = 9,
    ACTIONS(238), 1,
      aux_sym__identifier_token4,
    ACTIONS(240), 1,
      anon_sym_DASH,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym__identifier_repeat1,
    STATE(88), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(230), 2,
      sym_arrow,
      sym_dot,
    ACTIONS(430), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(432), 2,
      aux_sym__identifier_token3,
      anon_sym_RPAREN2,
  [3344] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      aux_sym__unquoted_string,
    STATE(155), 1,
      sym_label,
    STATE(156), 1,
      sym_string,
    STATE(237), 1,
      sym__container_block,
    ACTIONS(400), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(414), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [3380] = 9,
    ACTIONS(250), 1,
      aux_sym__identifier_token4,
    ACTIONS(252), 1,
      anon_sym_DASH,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym__identifier_repeat1,
    STATE(95), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(242), 2,
      sym_arrow,
      sym_dot,
    ACTIONS(246), 2,
      aux_sym__identifier_token2,
      sym_escape_sequence,
    ACTIONS(248), 2,
      aux_sym__identifier_token3,
      anon_sym_RPAREN2,
  [3412] = 10,
    ACTIONS(21), 1,
      sym_keyword_underscore,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      aux_sym__identifier_token1,
    ACTIONS(155), 1,
      sym_escape_sequence,
    ACTIONS(437), 1,
      anon_sym_LBRACK,
    STATE(105), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
    STATE(201), 2,
      sym_class_list,
      sym__class_name,
  [3446] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(404), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      aux_sym__unquoted_string,
    STATE(141), 1,
      sym_label,
    STATE(156), 1,
      sym_string,
    STATE(227), 1,
      sym__classes_item_block,
    ACTIONS(400), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(402), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [3482] = 8,
    ACTIONS(124), 1,
      sym_keyword_style,
    ACTIONS(439), 1,
      anon_sym_RBRACE,
    ACTIONS(443), 1,
      anon_sym_LF,
    STATE(116), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(441), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(71), 2,
      sym__eol,
      aux_sym__connection_block_repeat1,
    STATE(176), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [3512] = 8,
    ACTIONS(124), 1,
      sym_keyword_style,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    ACTIONS(447), 1,
      anon_sym_LF,
    STATE(116), 1,
      sym__connection_arrowhead_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(441), 2,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
    STATE(78), 2,
      sym__eol,
      aux_sym__connection_block_repeat1,
    STATE(167), 3,
      sym__style_attribute,
      sym__connection_attribute,
      sym__connection_arrowhead_attribute,
  [3542] = 11,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(21), 1,
      sym_keyword_underscore,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_escape_sequence,
    STATE(97), 1,
      aux_sym__connection_path_repeat1,
    STATE(98), 1,
      sym_shape_key,
    STATE(251), 1,
      sym__connection_path,
    STATE(257), 1,
      sym__full_connection_path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [3578] = 4,
    ACTIONS(451), 1,
      anon_sym_DASH,
    STATE(96), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(449), 9,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_SEMI,
  [3600] = 4,
    ACTIONS(252), 1,
      anon_sym_DASH,
    STATE(95), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(242), 9,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_SEMI,
  [3622] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(453), 10,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_SEMI,
  [3639] = 10,
    ACTIONS(21), 1,
      sym_keyword_underscore,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      aux_sym__identifier_token1,
    ACTIONS(457), 1,
      sym_escape_sequence,
    STATE(98), 1,
      sym_shape_key,
    STATE(100), 1,
      aux_sym__connection_path_repeat1,
    STATE(106), 1,
      sym__connection_path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [3672] = 4,
    ACTIONS(459), 1,
      anon_sym_DASH,
    STATE(96), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(449), 8,
      anon_sym_NULL,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_dot,
      anon_sym_LF,
      anon_sym_SEMI,
  [3693] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(461), 10,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_SEMI,
  [3710] = 4,
    ACTIONS(463), 1,
      anon_sym_DASH,
    STATE(95), 1,
      sym__dash,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(242), 8,
      anon_sym_NULL,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_dot,
      anon_sym_LF,
      anon_sym_SEMI,
  [3731] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(242), 10,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_SEMI,
  [3748] = 10,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(21), 1,
      sym_keyword_underscore,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_escape_sequence,
    STATE(97), 1,
      aux_sym__connection_path_repeat1,
    STATE(98), 1,
      sym_shape_key,
    STATE(106), 1,
      sym__connection_path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [3781] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(465), 1,
      anon_sym_RBRACK,
    ACTIONS(300), 9,
      aux_sym__unquoted_string_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      anon_sym_LF,
  [3802] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(468), 10,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_SEMI,
  [3819] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(470), 1,
      anon_sym_RBRACK,
    ACTIONS(300), 9,
      aux_sym__unquoted_string_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      anon_sym_LF,
  [3840] = 10,
    ACTIONS(21), 1,
      sym_keyword_underscore,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      aux_sym__identifier_token1,
    ACTIONS(155), 1,
      sym_escape_sequence,
    STATE(105), 1,
      sym_shape_key,
    STATE(125), 1,
      sym__class_name,
    STATE(239), 1,
      sym__classes_item,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [3873] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(300), 10,
      anon_sym_RBRACK,
      aux_sym__unquoted_string_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      anon_sym_LF,
  [3892] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(449), 10,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_SEMI,
  [3909] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(473), 10,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      sym_dot,
      anon_sym_LF,
      anon_sym_SEMI,
  [3926] = 9,
    ACTIONS(9), 1,
      aux_sym__identifier_token1,
    ACTIONS(21), 1,
      sym_keyword_underscore,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_escape_sequence,
    STATE(99), 1,
      aux_sym__connection_path_repeat1,
    STATE(101), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [3956] = 3,
    ACTIONS(477), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(475), 8,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      anon_sym_LF,
      anon_sym_SEMI,
  [3974] = 9,
    ACTIONS(479), 1,
      aux_sym__identifier_token1,
    ACTIONS(482), 1,
      sym_keyword_underscore,
    ACTIONS(485), 1,
      anon_sym_SQUOTE,
    ACTIONS(488), 1,
      anon_sym_DQUOTE,
    ACTIONS(491), 1,
      sym_escape_sequence,
    STATE(99), 1,
      aux_sym__connection_path_repeat1,
    STATE(266), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [4004] = 9,
    ACTIONS(21), 1,
      sym_keyword_underscore,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      aux_sym__identifier_token1,
    ACTIONS(457), 1,
      sym_escape_sequence,
    STATE(99), 1,
      aux_sym__connection_path_repeat1,
    STATE(101), 1,
      sym_shape_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(86), 2,
      sym__identifier,
      sym_string,
  [4034] = 3,
    ACTIONS(477), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(494), 8,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      anon_sym_LF,
      anon_sym_SEMI,
  [4052] = 7,
    ACTIONS(475), 1,
      sym_arrow,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    ACTIONS(500), 1,
      sym_colon,
    ACTIONS(502), 1,
      sym_dot,
    STATE(220), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(496), 3,
      anon_sym_NULL,
      anon_sym_LF,
      anon_sym_SEMI,
  [4077] = 7,
    ACTIONS(475), 1,
      sym_arrow,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    ACTIONS(504), 1,
      sym_colon,
    ACTIONS(506), 1,
      sym_dot,
    STATE(220), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(496), 3,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [4102] = 4,
    ACTIONS(510), 1,
      anon_sym_LBRACK,
    STATE(145), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(508), 6,
      anon_sym_NULL,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      anon_sym_LF,
      anon_sym_SEMI,
  [4121] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(512), 8,
      anon_sym_NULL,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_dot,
      anon_sym_LF,
      anon_sym_SEMI,
  [4136] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(514), 8,
      anon_sym_NULL,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_arrow,
      anon_sym_LF,
      anon_sym_SEMI,
  [4151] = 4,
    ACTIONS(516), 1,
      sym_arrow,
    STATE(107), 1,
      aux_sym__full_connection_path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(514), 6,
      anon_sym_NULL,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      anon_sym_LF,
      anon_sym_SEMI,
  [4170] = 4,
    ACTIONS(521), 1,
      sym_arrow,
    STATE(107), 1,
      aux_sym__full_connection_path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(519), 6,
      anon_sym_NULL,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      anon_sym_LF,
      anon_sym_SEMI,
  [4189] = 7,
    ACTIONS(19), 1,
      anon_sym_near,
    ACTIONS(523), 1,
      anon_sym_RBRACE,
    ACTIONS(525), 1,
      anon_sym_LF,
    STATE(159), 1,
      sym__text_shape_attribute,
    STATE(291), 1,
      sym__text_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(114), 2,
      sym__eol,
      aux_sym__text_block_attrs_repeat1,
  [4213] = 7,
    ACTIONS(19), 1,
      anon_sym_near,
    ACTIONS(527), 1,
      anon_sym_RBRACE,
    ACTIONS(529), 1,
      anon_sym_LF,
    STATE(165), 1,
      sym__text_shape_attribute,
    STATE(291), 1,
      sym__text_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(109), 2,
      sym__eol,
      aux_sym__text_block_attrs_repeat1,
  [4237] = 6,
    ACTIONS(531), 1,
      anon_sym_LBRACE,
    ACTIONS(535), 1,
      sym_colon,
    ACTIONS(537), 1,
      sym_dot,
    STATE(231), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(533), 3,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [4259] = 3,
    ACTIONS(539), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 6,
      anon_sym_RBRACE,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      anon_sym_LF,
  [4275] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(117), 1,
      aux_sym__unquoted_string,
    ACTIONS(543), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(541), 4,
      anon_sym_NULL,
      anon_sym_LBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [4295] = 7,
    ACTIONS(545), 1,
      anon_sym_RBRACE,
    ACTIONS(547), 1,
      anon_sym_near,
    ACTIONS(550), 1,
      anon_sym_LF,
    STATE(196), 1,
      sym__text_shape_attribute,
    STATE(282), 1,
      sym__text_attr_key,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(114), 2,
      sym__eol,
      aux_sym__text_block_attrs_repeat1,
  [4319] = 4,
    ACTIONS(553), 1,
      anon_sym_RBRACK,
    ACTIONS(556), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      anon_sym_LF,
  [4337] = 6,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    ACTIONS(560), 1,
      sym_colon,
    ACTIONS(562), 1,
      sym_dot,
    STATE(246), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(558), 3,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [4359] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(117), 1,
      aux_sym__unquoted_string,
    ACTIONS(566), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(564), 4,
      anon_sym_NULL,
      anon_sym_LBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [4379] = 4,
    ACTIONS(556), 1,
      aux_sym__identifier_token1,
    ACTIONS(569), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      anon_sym_LF,
  [4397] = 3,
    ACTIONS(556), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(380), 6,
      anon_sym_RBRACK,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      anon_sym_LF,
  [4413] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(123), 1,
      aux_sym__unquoted_string,
    ACTIONS(572), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(541), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [4433] = 6,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    ACTIONS(504), 1,
      sym_colon,
    ACTIONS(574), 1,
      sym_dot,
    STATE(220), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(496), 3,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [4455] = 6,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    ACTIONS(500), 1,
      sym_colon,
    ACTIONS(576), 1,
      sym_dot,
    STATE(220), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(496), 3,
      anon_sym_NULL,
      anon_sym_LF,
      anon_sym_SEMI,
  [4477] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(123), 1,
      aux_sym__unquoted_string,
    ACTIONS(578), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(564), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [4497] = 4,
    ACTIONS(539), 1,
      aux_sym__identifier_token1,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      anon_sym_LF,
  [4515] = 6,
    ACTIONS(531), 1,
      anon_sym_LBRACE,
    ACTIONS(584), 1,
      sym_colon,
    ACTIONS(586), 1,
      sym_dot,
    STATE(231), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(533), 3,
      anon_sym_NULL,
      anon_sym_LF,
      anon_sym_SEMI,
  [4537] = 6,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    ACTIONS(592), 1,
      sym_colon,
    ACTIONS(594), 1,
      sym_dot,
    STATE(243), 1,
      sym__classes_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(588), 3,
      anon_sym_NULL,
      anon_sym_LF,
      anon_sym_SEMI,
  [4559] = 7,
    ACTIONS(475), 1,
      sym_arrow,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    ACTIONS(596), 1,
      sym_colon,
    ACTIONS(598), 1,
      sym_dot,
    STATE(220), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(496), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [4583] = 4,
    ACTIONS(539), 1,
      aux_sym__identifier_token1,
    ACTIONS(600), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 5,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      anon_sym_LF,
  [4601] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(148), 1,
      aux_sym__unquoted_string,
    ACTIONS(605), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(603), 3,
      anon_sym_NULL,
      anon_sym_LF,
      anon_sym_SEMI,
  [4620] = 4,
    ACTIONS(609), 1,
      anon_sym_LBRACE,
    STATE(217), 1,
      sym__text_block_attrs,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(607), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [4637] = 4,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    STATE(218), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(607), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [4654] = 5,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(615), 1,
      sym_colon,
    STATE(229), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(611), 3,
      anon_sym_NULL,
      anon_sym_LF,
      anon_sym_SEMI,
  [4673] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(139), 1,
      aux_sym__unquoted_string,
    ACTIONS(617), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(541), 3,
      anon_sym_LBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [4692] = 6,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    ACTIONS(596), 1,
      sym_colon,
    ACTIONS(619), 1,
      sym_dot,
    STATE(220), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(496), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [4713] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(138), 1,
      aux_sym__unquoted_string,
    ACTIONS(621), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(603), 3,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_SEMI,
  [4732] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(623), 6,
      anon_sym_NULL,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      anon_sym_LF,
      anon_sym_SEMI,
  [4745] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(137), 1,
      aux_sym__unquoted_string,
    ACTIONS(625), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(564), 3,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [4764] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(138), 1,
      aux_sym__unquoted_string,
    ACTIONS(628), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(564), 3,
      anon_sym_RBRACK,
      anon_sym_LF,
      anon_sym_SEMI,
  [4783] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(139), 1,
      aux_sym__unquoted_string,
    ACTIONS(631), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(564), 3,
      anon_sym_LBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [4802] = 5,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(634), 1,
      sym_colon,
    STATE(229), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(611), 3,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [4821] = 4,
    ACTIONS(531), 1,
      anon_sym_LBRACE,
    STATE(219), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(636), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [4838] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(638), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      sym_dot,
      anon_sym_LF,
      anon_sym_SEMI,
  [4851] = 6,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    ACTIONS(640), 1,
      sym_colon,
    ACTIONS(642), 1,
      sym_dot,
    STATE(246), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(558), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [4872] = 4,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    STATE(225), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(644), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [4889] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(646), 6,
      anon_sym_NULL,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_colon,
      anon_sym_LF,
      anon_sym_SEMI,
  [4902] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(137), 1,
      aux_sym__unquoted_string,
    ACTIONS(648), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(603), 3,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [4921] = 6,
    ACTIONS(531), 1,
      anon_sym_LBRACE,
    ACTIONS(650), 1,
      sym_colon,
    ACTIONS(652), 1,
      sym_dot,
    STATE(231), 1,
      sym__classes_item_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(533), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [4942] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(148), 1,
      aux_sym__unquoted_string,
    ACTIONS(654), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
    ACTIONS(564), 3,
      anon_sym_NULL,
      anon_sym_LF,
      anon_sym_SEMI,
  [4961] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(657), 5,
      anon_sym_NULL,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [4973] = 3,
    ACTIONS(659), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(416), 4,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      anon_sym_LF,
  [4987] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(416), 5,
      anon_sym_RBRACE,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      anon_sym_LF,
  [4999] = 4,
    ACTIONS(376), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(662), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(115), 2,
      sym__eol,
      sym__end,
  [5015] = 4,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    STATE(247), 1,
      sym__classes_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(664), 3,
      anon_sym_NULL,
      anon_sym_LF,
      anon_sym_SEMI,
  [5031] = 4,
    ACTIONS(666), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(668), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(90), 2,
      sym__eol,
      sym__end,
  [5047] = 4,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    STATE(240), 1,
      sym__container_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(670), 3,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5063] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(672), 5,
      anon_sym_NULL,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5075] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(674), 5,
      anon_sym_NULL,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5087] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(676), 5,
      anon_sym_NULL,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5099] = 4,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(680), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(250), 2,
      sym__eol,
      sym__end,
  [5115] = 3,
    ACTIONS(682), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(416), 4,
      anon_sym_source_DASHarrowhead,
      anon_sym_target_DASHarrowhead,
      sym_keyword_style,
      anon_sym_LF,
  [5129] = 4,
    ACTIONS(685), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(687), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(29), 2,
      sym__eol,
      sym__end,
  [5145] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(689), 5,
      anon_sym_NULL,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5157] = 4,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(691), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(128), 2,
      sym__eol,
      sym__end,
  [5173] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(168), 1,
      aux_sym__unquoted_string,
    ACTIONS(603), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    ACTIONS(693), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
  [5191] = 4,
    ACTIONS(523), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(695), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(234), 2,
      sym__eol,
      sym__end,
  [5207] = 4,
    ACTIONS(697), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(699), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(118), 2,
      sym__eol,
      sym__end,
  [5223] = 4,
    ACTIONS(439), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(701), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(150), 2,
      sym__eol,
      sym__end,
  [5239] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    STATE(168), 1,
      aux_sym__unquoted_string,
    ACTIONS(564), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    ACTIONS(703), 2,
      aux_sym__unquoted_string_token1,
      sym_escape_sequence,
  [5257] = 4,
    ACTIONS(706), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(708), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(92), 2,
      sym__eol,
      sym__end,
  [5273] = 3,
    ACTIONS(710), 1,
      aux_sym__identifier_token1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(712), 4,
      sym_keyword_underscore,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [5287] = 4,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(716), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(124), 2,
      sym__eol,
      sym__end,
  [5303] = 4,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(718), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(32), 2,
      sym__eol,
      sym__end,
  [5319] = 4,
    ACTIONS(720), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(722), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(23), 2,
      sym__eol,
      sym__end,
  [5335] = 4,
    ACTIONS(724), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(726), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(33), 2,
      sym__eol,
      sym__end,
  [5351] = 5,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(728), 1,
      sym_colon,
    STATE(229), 1,
      sym__connection_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(611), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [5369] = 4,
    ACTIONS(730), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(732), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(160), 2,
      sym__eol,
      sym__end,
  [5385] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(7), 2,
      sym__eol,
      sym__end,
    ACTIONS(734), 3,
      anon_sym_NULL,
      anon_sym_LF,
      anon_sym_SEMI,
  [5399] = 4,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(736), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(31), 2,
      sym__eol,
      sym__end,
  [5415] = 4,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(738), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(21), 2,
      sym__eol,
      sym__end,
  [5431] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(740), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5442] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(742), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5453] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(744), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      sym__unescaped_double_string_fragment,
    ACTIONS(748), 1,
      sym_escape_sequence,
    STATE(184), 1,
      aux_sym_string_repeat1,
  [5472] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(750), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5483] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(752), 1,
      anon_sym_DQUOTE,
    ACTIONS(754), 1,
      sym__unescaped_double_string_fragment,
    ACTIONS(757), 1,
      sym_escape_sequence,
    STATE(184), 1,
      aux_sym_string_repeat1,
  [5502] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(760), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(34), 2,
      sym__eol,
      sym__end,
  [5515] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(762), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5526] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(764), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5537] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(766), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5548] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(768), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5559] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(770), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5570] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(772), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5581] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(774), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5592] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(776), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5603] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(778), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(151), 2,
      sym__eol,
      sym__end,
  [5616] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(780), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5627] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(782), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(245), 2,
      sym__eol,
      sym__end,
  [5640] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(784), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5651] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(644), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5662] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(786), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(30), 2,
      sym__eol,
      sym__end,
  [5675] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(788), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5686] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(790), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5697] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(792), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(119), 2,
      sym__eol,
      sym__end,
  [5710] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(794), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5721] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(796), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5732] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(798), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(94), 2,
      sym__eol,
      sym__end,
  [5745] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(800), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5756] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(802), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5767] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(804), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5778] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(806), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5789] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(808), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5800] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(810), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5811] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(812), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(22), 2,
      sym__eol,
      sym__end,
  [5824] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(814), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5835] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(816), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5846] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(607), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5857] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(818), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5868] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(820), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5879] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(822), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5890] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(824), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5901] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(826), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5912] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(828), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5923] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(830), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5934] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(832), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5945] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(834), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5956] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(836), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5967] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(838), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5978] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(636), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [5989] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(840), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [6000] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(842), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [6011] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(844), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [6022] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(846), 4,
      anon_sym_NULL,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [6033] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(848), 1,
      anon_sym_DQUOTE,
    ACTIONS(850), 1,
      sym__unescaped_double_string_fragment,
    ACTIONS(852), 1,
      sym_escape_sequence,
    STATE(182), 1,
      aux_sym_string_repeat1,
  [6052] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(854), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(112), 2,
      sym__eol,
      sym__end,
  [6065] = 3,
    ACTIONS(856), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(545), 2,
      anon_sym_near,
      anon_sym_LF,
  [6077] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(859), 3,
      anon_sym_NULL,
      anon_sym_LF,
      anon_sym_SEMI,
  [6087] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(861), 3,
      anon_sym_NULL,
      anon_sym_LF,
      anon_sym_SEMI,
  [6097] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(670), 3,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [6107] = 4,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    ACTIONS(863), 1,
      sym_arrow,
    STATE(242), 1,
      aux_sym__full_connection_path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6121] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(664), 3,
      anon_sym_NULL,
      anon_sym_LF,
      anon_sym_SEMI,
  [6131] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(865), 3,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [6141] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(867), 3,
      anon_sym_NULL,
      anon_sym_LF,
      anon_sym_SEMI,
  [6151] = 4,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    ACTIONS(869), 1,
      sym_arrow,
    STATE(242), 1,
      aux_sym__full_connection_path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6165] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(872), 3,
      anon_sym_NULL,
      anon_sym_LF,
      anon_sym_SEMI,
  [6175] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(874), 3,
      anon_sym_NULL,
      anon_sym_LF,
      anon_sym_SEMI,
  [6185] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(545), 3,
      anon_sym_RBRACE,
      anon_sym_near,
      anon_sym_LF,
  [6195] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(876), 3,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [6205] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(878), 3,
      anon_sym_NULL,
      anon_sym_LF,
      anon_sym_SEMI,
  [6215] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(880), 3,
      anon_sym_RBRACE,
      anon_sym_LF,
      anon_sym_SEMI,
  [6225] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(882), 3,
      anon_sym_NULL,
      anon_sym_LF,
      anon_sym_SEMI,
  [6235] = 3,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(545), 2,
      anon_sym_near,
      anon_sym_LF,
  [6247] = 3,
    ACTIONS(863), 1,
      sym_arrow,
    STATE(238), 1,
      aux_sym__full_connection_path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6258] = 3,
    ACTIONS(124), 1,
      sym_keyword_style,
    STATE(237), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6269] = 3,
    ACTIONS(887), 1,
      sym_colon,
    ACTIONS(889), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6280] = 3,
    ACTIONS(521), 1,
      sym_arrow,
    STATE(108), 1,
      aux_sym__full_connection_path_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6291] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(891), 1,
      aux_sym_text_block_token1,
    ACTIONS(893), 1,
      sym_language,
  [6304] = 3,
    ACTIONS(895), 1,
      anon_sym_LBRACE,
    STATE(188), 1,
      sym__style_attribute_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6315] = 3,
    ACTIONS(897), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      sym__referencing_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6326] = 3,
    ACTIONS(887), 1,
      sym_colon,
    ACTIONS(899), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6337] = 3,
    ACTIONS(887), 1,
      sym_colon,
    ACTIONS(901), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6348] = 3,
    ACTIONS(157), 1,
      sym_keyword_style,
    STATE(237), 1,
      sym__style_attribute,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6359] = 2,
    ACTIONS(903), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6367] = 2,
    ACTIONS(905), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6375] = 2,
    ACTIONS(907), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6383] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(909), 1,
      aux_sym_text_block_token1,
  [6393] = 2,
    ACTIONS(911), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6401] = 2,
    ACTIONS(477), 1,
      sym_dot,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6409] = 2,
    ACTIONS(913), 1,
      sym_integer,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6417] = 2,
    ACTIONS(915), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6425] = 2,
    ACTIONS(917), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6433] = 2,
    ACTIONS(919), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6441] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(921), 1,
      sym__unescaped_single_string_fragment,
  [6451] = 2,
    ACTIONS(923), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6459] = 2,
    ACTIONS(925), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6467] = 2,
    ACTIONS(927), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6475] = 2,
    ACTIONS(929), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6483] = 2,
    ACTIONS(931), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6491] = 2,
    ACTIONS(933), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6499] = 2,
    ACTIONS(935), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6507] = 2,
    ACTIONS(937), 1,
      sym__text_block_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6515] = 2,
    ACTIONS(939), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6523] = 2,
    ACTIONS(941), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6531] = 2,
    ACTIONS(943), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6539] = 2,
    ACTIONS(945), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6547] = 2,
    ACTIONS(947), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6555] = 2,
    ACTIONS(949), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6563] = 2,
    ACTIONS(951), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6571] = 2,
    ACTIONS(953), 1,
      sym__text_block_raw_text,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6579] = 2,
    ACTIONS(955), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6587] = 2,
    ACTIONS(957), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6595] = 2,
    ACTIONS(959), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6603] = 2,
    ACTIONS(961), 1,
      sym_colon,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 112,
  [SMALL_STATE(4)] = 224,
  [SMALL_STATE(5)] = 321,
  [SMALL_STATE(6)] = 418,
  [SMALL_STATE(7)] = 515,
  [SMALL_STATE(8)] = 564,
  [SMALL_STATE(9)] = 638,
  [SMALL_STATE(10)] = 712,
  [SMALL_STATE(11)] = 786,
  [SMALL_STATE(12)] = 860,
  [SMALL_STATE(13)] = 934,
  [SMALL_STATE(14)] = 1008,
  [SMALL_STATE(15)] = 1062,
  [SMALL_STATE(16)] = 1116,
  [SMALL_STATE(17)] = 1166,
  [SMALL_STATE(18)] = 1216,
  [SMALL_STATE(19)] = 1270,
  [SMALL_STATE(20)] = 1320,
  [SMALL_STATE(21)] = 1368,
  [SMALL_STATE(22)] = 1404,
  [SMALL_STATE(23)] = 1438,
  [SMALL_STATE(24)] = 1474,
  [SMALL_STATE(25)] = 1522,
  [SMALL_STATE(26)] = 1570,
  [SMALL_STATE(27)] = 1610,
  [SMALL_STATE(28)] = 1650,
  [SMALL_STATE(29)] = 1690,
  [SMALL_STATE(30)] = 1723,
  [SMALL_STATE(31)] = 1754,
  [SMALL_STATE(32)] = 1787,
  [SMALL_STATE(33)] = 1814,
  [SMALL_STATE(34)] = 1841,
  [SMALL_STATE(35)] = 1866,
  [SMALL_STATE(36)] = 1904,
  [SMALL_STATE(37)] = 1942,
  [SMALL_STATE(38)] = 1980,
  [SMALL_STATE(39)] = 2018,
  [SMALL_STATE(40)] = 2063,
  [SMALL_STATE(41)] = 2108,
  [SMALL_STATE(42)] = 2139,
  [SMALL_STATE(43)] = 2184,
  [SMALL_STATE(44)] = 2215,
  [SMALL_STATE(45)] = 2258,
  [SMALL_STATE(46)] = 2297,
  [SMALL_STATE(47)] = 2340,
  [SMALL_STATE(48)] = 2383,
  [SMALL_STATE(49)] = 2426,
  [SMALL_STATE(50)] = 2469,
  [SMALL_STATE(51)] = 2508,
  [SMALL_STATE(52)] = 2547,
  [SMALL_STATE(53)] = 2587,
  [SMALL_STATE(54)] = 2627,
  [SMALL_STATE(55)] = 2667,
  [SMALL_STATE(56)] = 2709,
  [SMALL_STATE(57)] = 2746,
  [SMALL_STATE(58)] = 2783,
  [SMALL_STATE(59)] = 2820,
  [SMALL_STATE(60)] = 2857,
  [SMALL_STATE(61)] = 2892,
  [SMALL_STATE(62)] = 2927,
  [SMALL_STATE(63)] = 2964,
  [SMALL_STATE(64)] = 2999,
  [SMALL_STATE(65)] = 3034,
  [SMALL_STATE(66)] = 3069,
  [SMALL_STATE(67)] = 3104,
  [SMALL_STATE(68)] = 3139,
  [SMALL_STATE(69)] = 3174,
  [SMALL_STATE(70)] = 3211,
  [SMALL_STATE(71)] = 3246,
  [SMALL_STATE(72)] = 3276,
  [SMALL_STATE(73)] = 3312,
  [SMALL_STATE(74)] = 3344,
  [SMALL_STATE(75)] = 3380,
  [SMALL_STATE(76)] = 3412,
  [SMALL_STATE(77)] = 3446,
  [SMALL_STATE(78)] = 3482,
  [SMALL_STATE(79)] = 3512,
  [SMALL_STATE(80)] = 3542,
  [SMALL_STATE(81)] = 3578,
  [SMALL_STATE(82)] = 3600,
  [SMALL_STATE(83)] = 3622,
  [SMALL_STATE(84)] = 3639,
  [SMALL_STATE(85)] = 3672,
  [SMALL_STATE(86)] = 3693,
  [SMALL_STATE(87)] = 3710,
  [SMALL_STATE(88)] = 3731,
  [SMALL_STATE(89)] = 3748,
  [SMALL_STATE(90)] = 3781,
  [SMALL_STATE(91)] = 3802,
  [SMALL_STATE(92)] = 3819,
  [SMALL_STATE(93)] = 3840,
  [SMALL_STATE(94)] = 3873,
  [SMALL_STATE(95)] = 3892,
  [SMALL_STATE(96)] = 3909,
  [SMALL_STATE(97)] = 3926,
  [SMALL_STATE(98)] = 3956,
  [SMALL_STATE(99)] = 3974,
  [SMALL_STATE(100)] = 4004,
  [SMALL_STATE(101)] = 4034,
  [SMALL_STATE(102)] = 4052,
  [SMALL_STATE(103)] = 4077,
  [SMALL_STATE(104)] = 4102,
  [SMALL_STATE(105)] = 4121,
  [SMALL_STATE(106)] = 4136,
  [SMALL_STATE(107)] = 4151,
  [SMALL_STATE(108)] = 4170,
  [SMALL_STATE(109)] = 4189,
  [SMALL_STATE(110)] = 4213,
  [SMALL_STATE(111)] = 4237,
  [SMALL_STATE(112)] = 4259,
  [SMALL_STATE(113)] = 4275,
  [SMALL_STATE(114)] = 4295,
  [SMALL_STATE(115)] = 4319,
  [SMALL_STATE(116)] = 4337,
  [SMALL_STATE(117)] = 4359,
  [SMALL_STATE(118)] = 4379,
  [SMALL_STATE(119)] = 4397,
  [SMALL_STATE(120)] = 4413,
  [SMALL_STATE(121)] = 4433,
  [SMALL_STATE(122)] = 4455,
  [SMALL_STATE(123)] = 4477,
  [SMALL_STATE(124)] = 4497,
  [SMALL_STATE(125)] = 4515,
  [SMALL_STATE(126)] = 4537,
  [SMALL_STATE(127)] = 4559,
  [SMALL_STATE(128)] = 4583,
  [SMALL_STATE(129)] = 4601,
  [SMALL_STATE(130)] = 4620,
  [SMALL_STATE(131)] = 4637,
  [SMALL_STATE(132)] = 4654,
  [SMALL_STATE(133)] = 4673,
  [SMALL_STATE(134)] = 4692,
  [SMALL_STATE(135)] = 4713,
  [SMALL_STATE(136)] = 4732,
  [SMALL_STATE(137)] = 4745,
  [SMALL_STATE(138)] = 4764,
  [SMALL_STATE(139)] = 4783,
  [SMALL_STATE(140)] = 4802,
  [SMALL_STATE(141)] = 4821,
  [SMALL_STATE(142)] = 4838,
  [SMALL_STATE(143)] = 4851,
  [SMALL_STATE(144)] = 4872,
  [SMALL_STATE(145)] = 4889,
  [SMALL_STATE(146)] = 4902,
  [SMALL_STATE(147)] = 4921,
  [SMALL_STATE(148)] = 4942,
  [SMALL_STATE(149)] = 4961,
  [SMALL_STATE(150)] = 4973,
  [SMALL_STATE(151)] = 4987,
  [SMALL_STATE(152)] = 4999,
  [SMALL_STATE(153)] = 5015,
  [SMALL_STATE(154)] = 5031,
  [SMALL_STATE(155)] = 5047,
  [SMALL_STATE(156)] = 5063,
  [SMALL_STATE(157)] = 5075,
  [SMALL_STATE(158)] = 5087,
  [SMALL_STATE(159)] = 5099,
  [SMALL_STATE(160)] = 5115,
  [SMALL_STATE(161)] = 5129,
  [SMALL_STATE(162)] = 5145,
  [SMALL_STATE(163)] = 5157,
  [SMALL_STATE(164)] = 5173,
  [SMALL_STATE(165)] = 5191,
  [SMALL_STATE(166)] = 5207,
  [SMALL_STATE(167)] = 5223,
  [SMALL_STATE(168)] = 5239,
  [SMALL_STATE(169)] = 5257,
  [SMALL_STATE(170)] = 5273,
  [SMALL_STATE(171)] = 5287,
  [SMALL_STATE(172)] = 5303,
  [SMALL_STATE(173)] = 5319,
  [SMALL_STATE(174)] = 5335,
  [SMALL_STATE(175)] = 5351,
  [SMALL_STATE(176)] = 5369,
  [SMALL_STATE(177)] = 5385,
  [SMALL_STATE(178)] = 5399,
  [SMALL_STATE(179)] = 5415,
  [SMALL_STATE(180)] = 5431,
  [SMALL_STATE(181)] = 5442,
  [SMALL_STATE(182)] = 5453,
  [SMALL_STATE(183)] = 5472,
  [SMALL_STATE(184)] = 5483,
  [SMALL_STATE(185)] = 5502,
  [SMALL_STATE(186)] = 5515,
  [SMALL_STATE(187)] = 5526,
  [SMALL_STATE(188)] = 5537,
  [SMALL_STATE(189)] = 5548,
  [SMALL_STATE(190)] = 5559,
  [SMALL_STATE(191)] = 5570,
  [SMALL_STATE(192)] = 5581,
  [SMALL_STATE(193)] = 5592,
  [SMALL_STATE(194)] = 5603,
  [SMALL_STATE(195)] = 5616,
  [SMALL_STATE(196)] = 5627,
  [SMALL_STATE(197)] = 5640,
  [SMALL_STATE(198)] = 5651,
  [SMALL_STATE(199)] = 5662,
  [SMALL_STATE(200)] = 5675,
  [SMALL_STATE(201)] = 5686,
  [SMALL_STATE(202)] = 5697,
  [SMALL_STATE(203)] = 5710,
  [SMALL_STATE(204)] = 5721,
  [SMALL_STATE(205)] = 5732,
  [SMALL_STATE(206)] = 5745,
  [SMALL_STATE(207)] = 5756,
  [SMALL_STATE(208)] = 5767,
  [SMALL_STATE(209)] = 5778,
  [SMALL_STATE(210)] = 5789,
  [SMALL_STATE(211)] = 5800,
  [SMALL_STATE(212)] = 5811,
  [SMALL_STATE(213)] = 5824,
  [SMALL_STATE(214)] = 5835,
  [SMALL_STATE(215)] = 5846,
  [SMALL_STATE(216)] = 5857,
  [SMALL_STATE(217)] = 5868,
  [SMALL_STATE(218)] = 5879,
  [SMALL_STATE(219)] = 5890,
  [SMALL_STATE(220)] = 5901,
  [SMALL_STATE(221)] = 5912,
  [SMALL_STATE(222)] = 5923,
  [SMALL_STATE(223)] = 5934,
  [SMALL_STATE(224)] = 5945,
  [SMALL_STATE(225)] = 5956,
  [SMALL_STATE(226)] = 5967,
  [SMALL_STATE(227)] = 5978,
  [SMALL_STATE(228)] = 5989,
  [SMALL_STATE(229)] = 6000,
  [SMALL_STATE(230)] = 6011,
  [SMALL_STATE(231)] = 6022,
  [SMALL_STATE(232)] = 6033,
  [SMALL_STATE(233)] = 6052,
  [SMALL_STATE(234)] = 6065,
  [SMALL_STATE(235)] = 6077,
  [SMALL_STATE(236)] = 6087,
  [SMALL_STATE(237)] = 6097,
  [SMALL_STATE(238)] = 6107,
  [SMALL_STATE(239)] = 6121,
  [SMALL_STATE(240)] = 6131,
  [SMALL_STATE(241)] = 6141,
  [SMALL_STATE(242)] = 6151,
  [SMALL_STATE(243)] = 6165,
  [SMALL_STATE(244)] = 6175,
  [SMALL_STATE(245)] = 6185,
  [SMALL_STATE(246)] = 6195,
  [SMALL_STATE(247)] = 6205,
  [SMALL_STATE(248)] = 6215,
  [SMALL_STATE(249)] = 6225,
  [SMALL_STATE(250)] = 6235,
  [SMALL_STATE(251)] = 6247,
  [SMALL_STATE(252)] = 6258,
  [SMALL_STATE(253)] = 6269,
  [SMALL_STATE(254)] = 6280,
  [SMALL_STATE(255)] = 6291,
  [SMALL_STATE(256)] = 6304,
  [SMALL_STATE(257)] = 6315,
  [SMALL_STATE(258)] = 6326,
  [SMALL_STATE(259)] = 6337,
  [SMALL_STATE(260)] = 6348,
  [SMALL_STATE(261)] = 6359,
  [SMALL_STATE(262)] = 6367,
  [SMALL_STATE(263)] = 6375,
  [SMALL_STATE(264)] = 6383,
  [SMALL_STATE(265)] = 6393,
  [SMALL_STATE(266)] = 6401,
  [SMALL_STATE(267)] = 6409,
  [SMALL_STATE(268)] = 6417,
  [SMALL_STATE(269)] = 6425,
  [SMALL_STATE(270)] = 6433,
  [SMALL_STATE(271)] = 6441,
  [SMALL_STATE(272)] = 6451,
  [SMALL_STATE(273)] = 6459,
  [SMALL_STATE(274)] = 6467,
  [SMALL_STATE(275)] = 6475,
  [SMALL_STATE(276)] = 6483,
  [SMALL_STATE(277)] = 6491,
  [SMALL_STATE(278)] = 6499,
  [SMALL_STATE(279)] = 6507,
  [SMALL_STATE(280)] = 6515,
  [SMALL_STATE(281)] = 6523,
  [SMALL_STATE(282)] = 6531,
  [SMALL_STATE(283)] = 6539,
  [SMALL_STATE(284)] = 6547,
  [SMALL_STATE(285)] = 6555,
  [SMALL_STATE(286)] = 6563,
  [SMALL_STATE(287)] = 6571,
  [SMALL_STATE(288)] = 6579,
  [SMALL_STATE(289)] = 6587,
  [SMALL_STATE(290)] = 6595,
  [SMALL_STATE(291)] = 6603,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(270),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(273),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(276),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(289),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(276),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_definition, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__root_definition, 2, 0, 0),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 2), SHIFT(38),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 2), SHIFT(86),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 2), SHIFT(271),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 2), SHIFT(232),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 2), SHIFT(38),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2, 0, 0), SHIFT_REPEAT(289),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2, 0, 0), SHIFT_REPEAT(276),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2, 0, 0),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT(204),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_block_repeat1, 2, 0, 0), SHIFT(228),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2, 0, 0), SHIFT(207),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2, 0, 0),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__style_attribute_block_repeat1, 2, 0, 0), SHIFT(197),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2, 0, 0), SHIFT(183),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_item_block_repeat1, 2, 0, 0), SHIFT(180),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2, 0, 0),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2, 0, 0),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2, 0, 0),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__classes_block_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container, 2, 0, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2, 0, 0),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_list_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__classes_item, 2, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection, 2, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classes, 2, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__connection_arrowhead_attribute, 2, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2, 0, 0),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__identifier, 1, 0, 0), SHIFT(82),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__identifier, 2, 0, 0), SHIFT(81),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_key, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2, 0, 0), SHIFT(203),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_value_list_repeat1, 2, 0, 0), SHIFT(210),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 4, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 1, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_path, 2, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referencing_full_connection_path, 3, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_name, 1, 0, 3),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__full_connection_path_repeat1, 2, 0, 0),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__full_connection_path_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__full_connection_path, 2, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 1, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__classes_block_repeat1, 2, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2, 0, 0),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2, 0, 0), SHIFT_REPEAT(276),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2, 0, 0), SHIFT(200),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_list_repeat1, 2, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 1, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2, 0, 0),
  [566] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2, 0, 0), SHIFT_REPEAT(117),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_list_repeat1, 2, 0, 0), SHIFT(209),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [578] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2, 0, 0), SHIFT_REPEAT(123),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2, 0, 0), SHIFT(235),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 1, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__classes_block_repeat1, 2, 0, 0), SHIFT(241),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_value, 1, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 3, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 1, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3, 0, 0),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2, 0, 0), SHIFT_REPEAT(137),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2, 0, 0), SHIFT_REPEAT(138),
  [631] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2, 0, 0), SHIFT_REPEAT(139),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 3, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attr_key, 1, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 3, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referencing_full_connection_path, 4, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2, 0, 0), SHIFT_REPEAT(148),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 5, 0, 0),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2, 0, 0), SHIFT(191),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 3, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 3, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 4, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__connection_block_repeat1, 2, 0, 0), SHIFT(222),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [703] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2, 0, 0), SHIFT_REPEAT(168),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 2),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__connection_path_repeat1, 2, 0, 2),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 5, 0, 0),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 3, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 4, 0, 0),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [757] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 3, 0, 0),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 2, 0, 0),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute, 3, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_style_attribute, 3, 0, 0),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 3, 0, 0),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 4, 0, 0),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 3, 0, 0),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 3, 0, 0),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 4, 0, 0),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 4, 0, 0),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 4, 0, 0),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_attribute, 3, 0, 0),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 4, 0, 0),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 4, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 5, 0, 0),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 5, 0, 0),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_shape_attribute, 3, 0, 0),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 5, 0, 0),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 5, 0, 0),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 2, 0, 0),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_block_attrs, 2, 0, 0),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 3, 0, 2),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 3, 0, 0),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 4, 0, 0),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 4, 0, 2),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 4, 0, 0),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container, 2, 0, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attribute_block, 2, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_block, 5, 0, 0),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_list, 2, 0, 0),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item_block, 2, 0, 0),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 4, 0, 0),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 2, 0, 0),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 5, 0, 0),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection, 2, 0, 0),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__container_block, 3, 0, 0),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_item, 2, 0, 0),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [856] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2, 0, 0), SHIFT(195),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 5, 0, 0),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attribute, 3, 0, 0),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 4, 0, 0),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 4, 0, 0),
  [869] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__full_connection_path_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 2, 0, 0),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 3, 0, 0),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__connection_arrowhead_attribute, 2, 0, 0),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classes, 4, 0, 0),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_shape_attribute, 3, 0, 4),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__classes_block, 2, 0, 0),
  [884] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_block_attrs_repeat1, 2, 0, 0), SHIFT(206),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__common_style_attr_key, 1, 0, 0),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, 0, 0),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root_attr_key, 1, 0, 1),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_attr_key, 1, 0, 0),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__style_attr_key, 1, 0, 0),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [955] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_attr_key, 1, 0, 0),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shape_list_attr_key, 1, 0, 0),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__text_block_start = 0,
  ts_external_token__text_block_end = 1,
  ts_external_token__text_block_raw_text = 2,
  ts_external_token_block_comment = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__text_block_start] = sym__text_block_start,
  [ts_external_token__text_block_end] = sym__text_block_end,
  [ts_external_token__text_block_raw_text] = sym__text_block_raw_text,
  [ts_external_token_block_comment] = sym_block_comment,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__text_block_start] = true,
    [ts_external_token__text_block_end] = true,
    [ts_external_token__text_block_raw_text] = true,
    [ts_external_token_block_comment] = true,
  },
  [2] = {
    [ts_external_token_block_comment] = true,
  },
  [3] = {
    [ts_external_token__text_block_start] = true,
    [ts_external_token_block_comment] = true,
  },
  [4] = {
    [ts_external_token__text_block_end] = true,
    [ts_external_token_block_comment] = true,
  },
  [5] = {
    [ts_external_token__text_block_raw_text] = true,
    [ts_external_token_block_comment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_d2_external_scanner_create(void);
void tree_sitter_d2_external_scanner_destroy(void *);
bool tree_sitter_d2_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_d2_external_scanner_serialize(void *, char *);
void tree_sitter_d2_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_d2(void) {
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
      tree_sitter_d2_external_scanner_create,
      tree_sitter_d2_external_scanner_destroy,
      tree_sitter_d2_external_scanner_scan,
      tree_sitter_d2_external_scanner_serialize,
      tree_sitter_d2_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

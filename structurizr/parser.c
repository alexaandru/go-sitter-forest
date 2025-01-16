#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 187
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  anon_sym_workspace = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_number = 4,
  sym_string = 5,
  sym__simple_identifier = 6,
  anon_sym_DOT = 7,
  sym_wildcard_identifier = 8,
  anon_sym_EQ = 9,
  anon_sym_DASH_GT = 10,
  sym__newline = 11,
  aux_sym_color_token1 = 12,
  aux_sym_color_token2 = 13,
  sym_comment = 14,
  anon_sym_BANGidentifiers = 15,
  anon_sym_hierarchical = 16,
  anon_sym_flat = 17,
  anon_sym_model = 18,
  anon_sym_softwaresystem = 19,
  anon_sym_container = 20,
  anon_sym_person = 21,
  anon_sym_tag = 22,
  anon_sym_tags = 23,
  anon_sym_configuration = 24,
  anon_sym_scope = 25,
  anon_sym_views = 26,
  anon_sym_systemcontext = 27,
  anon_sym_include = 28,
  anon_sym_exclude = 29,
  anon_sym_autolayout = 30,
  anon_sym_lr = 31,
  anon_sym_rl = 32,
  anon_sym_tb = 33,
  anon_sym_bt = 34,
  anon_sym_default = 35,
  anon_sym_description = 36,
  anon_sym_dynamic = 37,
  anon_sym_styles = 38,
  anon_sym_element = 39,
  sym_dsl = 40,
  sym_workspace_declaration = 41,
  sym_dotted_identifier = 42,
  sym_identifier = 43,
  sym_relation_identifier = 44,
  sym__assignment_operator = 45,
  sym__relation_operator = 46,
  sym_color = 47,
  sym_workspace_item_statement = 48,
  sym_identifiers_statement = 49,
  sym_identifiers_value = 50,
  sym_model_declaration = 51,
  sym__model_children = 52,
  sym__model_item_statement = 53,
  sym_variable_declaration = 54,
  sym_relation_statement = 55,
  sym__item_declaration = 56,
  sym_software_system_declaration = 57,
  sym_container_declaration = 58,
  sym_person_declaration = 59,
  sym_tag_declaration = 60,
  sym_tags_declaration = 61,
  sym_configuration_declaration = 62,
  sym_configuration_item_statement = 63,
  sym_scope_declaration = 64,
  sym_views_declaration = 65,
  sym_views_item_statement = 66,
  sym_system_context_view_declaration = 67,
  sym_view_property_statement = 68,
  sym_include_statement = 69,
  sym_exclude_statement = 70,
  sym_autolayout_statement = 71,
  sym_autolayout_value = 72,
  sym_default_statement = 73,
  sym_description_statement = 74,
  sym_container_view_declaration = 75,
  sym_dynamic_view_declaration = 76,
  sym_styles_declaration = 77,
  sym_style_item_statement = 78,
  sym_element_declaration = 79,
  sym_element_property = 80,
  aux_sym_dsl_repeat1 = 81,
  aux_sym_workspace_declaration_repeat1 = 82,
  aux_sym__model_children_repeat1 = 83,
  aux_sym_tags_declaration_repeat1 = 84,
  aux_sym_configuration_declaration_repeat1 = 85,
  aux_sym_views_declaration_repeat1 = 86,
  aux_sym_system_context_view_declaration_repeat1 = 87,
  aux_sym_include_statement_repeat1 = 88,
  aux_sym_exclude_statement_repeat1 = 89,
  aux_sym_styles_declaration_repeat1 = 90,
  aux_sym_element_declaration_repeat1 = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_workspace] = "workspace",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym__simple_identifier] = "_simple_identifier",
  [anon_sym_DOT] = ".",
  [sym_wildcard_identifier] = "wildcard_identifier",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH_GT] = "->",
  [sym__newline] = "_newline",
  [aux_sym_color_token1] = "color_token1",
  [aux_sym_color_token2] = "color_token2",
  [sym_comment] = "comment",
  [anon_sym_BANGidentifiers] = "!identifiers",
  [anon_sym_hierarchical] = "hierarchical",
  [anon_sym_flat] = "flat",
  [anon_sym_model] = "model",
  [anon_sym_softwaresystem] = "softwaresystem",
  [anon_sym_container] = "container",
  [anon_sym_person] = "person",
  [anon_sym_tag] = "tag",
  [anon_sym_tags] = "tags",
  [anon_sym_configuration] = "configuration",
  [anon_sym_scope] = "scope",
  [anon_sym_views] = "views",
  [anon_sym_systemcontext] = "systemcontext",
  [anon_sym_include] = "include",
  [anon_sym_exclude] = "exclude",
  [anon_sym_autolayout] = "autolayout",
  [anon_sym_lr] = "lr",
  [anon_sym_rl] = "rl",
  [anon_sym_tb] = "tb",
  [anon_sym_bt] = "bt",
  [anon_sym_default] = "default",
  [anon_sym_description] = "description",
  [anon_sym_dynamic] = "dynamic",
  [anon_sym_styles] = "styles",
  [anon_sym_element] = "element",
  [sym_dsl] = "dsl",
  [sym_workspace_declaration] = "workspace_declaration",
  [sym_dotted_identifier] = "dotted_identifier",
  [sym_identifier] = "identifier",
  [sym_relation_identifier] = "relation_identifier",
  [sym__assignment_operator] = "_assignment_operator",
  [sym__relation_operator] = "_relation_operator",
  [sym_color] = "color",
  [sym_workspace_item_statement] = "workspace_item_statement",
  [sym_identifiers_statement] = "identifiers_statement",
  [sym_identifiers_value] = "identifiers_value",
  [sym_model_declaration] = "model_declaration",
  [sym__model_children] = "_model_children",
  [sym__model_item_statement] = "_model_item_statement",
  [sym_variable_declaration] = "variable_declaration",
  [sym_relation_statement] = "relation_statement",
  [sym__item_declaration] = "_item_declaration",
  [sym_software_system_declaration] = "software_system_declaration",
  [sym_container_declaration] = "container_declaration",
  [sym_person_declaration] = "person_declaration",
  [sym_tag_declaration] = "tag_declaration",
  [sym_tags_declaration] = "tags_declaration",
  [sym_configuration_declaration] = "configuration_declaration",
  [sym_configuration_item_statement] = "configuration_item_statement",
  [sym_scope_declaration] = "scope_declaration",
  [sym_views_declaration] = "views_declaration",
  [sym_views_item_statement] = "views_item_statement",
  [sym_system_context_view_declaration] = "system_context_view_declaration",
  [sym_view_property_statement] = "view_property_statement",
  [sym_include_statement] = "include_statement",
  [sym_exclude_statement] = "exclude_statement",
  [sym_autolayout_statement] = "autolayout_statement",
  [sym_autolayout_value] = "autolayout_value",
  [sym_default_statement] = "default_statement",
  [sym_description_statement] = "description_statement",
  [sym_container_view_declaration] = "container_view_declaration",
  [sym_dynamic_view_declaration] = "dynamic_view_declaration",
  [sym_styles_declaration] = "styles_declaration",
  [sym_style_item_statement] = "style_item_statement",
  [sym_element_declaration] = "element_declaration",
  [sym_element_property] = "element_property",
  [aux_sym_dsl_repeat1] = "dsl_repeat1",
  [aux_sym_workspace_declaration_repeat1] = "workspace_declaration_repeat1",
  [aux_sym__model_children_repeat1] = "_model_children_repeat1",
  [aux_sym_tags_declaration_repeat1] = "tags_declaration_repeat1",
  [aux_sym_configuration_declaration_repeat1] = "configuration_declaration_repeat1",
  [aux_sym_views_declaration_repeat1] = "views_declaration_repeat1",
  [aux_sym_system_context_view_declaration_repeat1] = "system_context_view_declaration_repeat1",
  [aux_sym_include_statement_repeat1] = "include_statement_repeat1",
  [aux_sym_exclude_statement_repeat1] = "exclude_statement_repeat1",
  [aux_sym_styles_declaration_repeat1] = "styles_declaration_repeat1",
  [aux_sym_element_declaration_repeat1] = "element_declaration_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_workspace] = anon_sym_workspace,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym__simple_identifier] = sym__simple_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_wildcard_identifier] = sym_wildcard_identifier,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym__newline] = sym__newline,
  [aux_sym_color_token1] = aux_sym_color_token1,
  [aux_sym_color_token2] = aux_sym_color_token2,
  [sym_comment] = sym_comment,
  [anon_sym_BANGidentifiers] = anon_sym_BANGidentifiers,
  [anon_sym_hierarchical] = anon_sym_hierarchical,
  [anon_sym_flat] = anon_sym_flat,
  [anon_sym_model] = anon_sym_model,
  [anon_sym_softwaresystem] = anon_sym_softwaresystem,
  [anon_sym_container] = anon_sym_container,
  [anon_sym_person] = anon_sym_person,
  [anon_sym_tag] = anon_sym_tag,
  [anon_sym_tags] = anon_sym_tags,
  [anon_sym_configuration] = anon_sym_configuration,
  [anon_sym_scope] = anon_sym_scope,
  [anon_sym_views] = anon_sym_views,
  [anon_sym_systemcontext] = anon_sym_systemcontext,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_exclude] = anon_sym_exclude,
  [anon_sym_autolayout] = anon_sym_autolayout,
  [anon_sym_lr] = anon_sym_lr,
  [anon_sym_rl] = anon_sym_rl,
  [anon_sym_tb] = anon_sym_tb,
  [anon_sym_bt] = anon_sym_bt,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_description] = anon_sym_description,
  [anon_sym_dynamic] = anon_sym_dynamic,
  [anon_sym_styles] = anon_sym_styles,
  [anon_sym_element] = anon_sym_element,
  [sym_dsl] = sym_dsl,
  [sym_workspace_declaration] = sym_workspace_declaration,
  [sym_dotted_identifier] = sym_dotted_identifier,
  [sym_identifier] = sym_identifier,
  [sym_relation_identifier] = sym_relation_identifier,
  [sym__assignment_operator] = sym__assignment_operator,
  [sym__relation_operator] = sym__relation_operator,
  [sym_color] = sym_color,
  [sym_workspace_item_statement] = sym_workspace_item_statement,
  [sym_identifiers_statement] = sym_identifiers_statement,
  [sym_identifiers_value] = sym_identifiers_value,
  [sym_model_declaration] = sym_model_declaration,
  [sym__model_children] = sym__model_children,
  [sym__model_item_statement] = sym__model_item_statement,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_relation_statement] = sym_relation_statement,
  [sym__item_declaration] = sym__item_declaration,
  [sym_software_system_declaration] = sym_software_system_declaration,
  [sym_container_declaration] = sym_container_declaration,
  [sym_person_declaration] = sym_person_declaration,
  [sym_tag_declaration] = sym_tag_declaration,
  [sym_tags_declaration] = sym_tags_declaration,
  [sym_configuration_declaration] = sym_configuration_declaration,
  [sym_configuration_item_statement] = sym_configuration_item_statement,
  [sym_scope_declaration] = sym_scope_declaration,
  [sym_views_declaration] = sym_views_declaration,
  [sym_views_item_statement] = sym_views_item_statement,
  [sym_system_context_view_declaration] = sym_system_context_view_declaration,
  [sym_view_property_statement] = sym_view_property_statement,
  [sym_include_statement] = sym_include_statement,
  [sym_exclude_statement] = sym_exclude_statement,
  [sym_autolayout_statement] = sym_autolayout_statement,
  [sym_autolayout_value] = sym_autolayout_value,
  [sym_default_statement] = sym_default_statement,
  [sym_description_statement] = sym_description_statement,
  [sym_container_view_declaration] = sym_container_view_declaration,
  [sym_dynamic_view_declaration] = sym_dynamic_view_declaration,
  [sym_styles_declaration] = sym_styles_declaration,
  [sym_style_item_statement] = sym_style_item_statement,
  [sym_element_declaration] = sym_element_declaration,
  [sym_element_property] = sym_element_property,
  [aux_sym_dsl_repeat1] = aux_sym_dsl_repeat1,
  [aux_sym_workspace_declaration_repeat1] = aux_sym_workspace_declaration_repeat1,
  [aux_sym__model_children_repeat1] = aux_sym__model_children_repeat1,
  [aux_sym_tags_declaration_repeat1] = aux_sym_tags_declaration_repeat1,
  [aux_sym_configuration_declaration_repeat1] = aux_sym_configuration_declaration_repeat1,
  [aux_sym_views_declaration_repeat1] = aux_sym_views_declaration_repeat1,
  [aux_sym_system_context_view_declaration_repeat1] = aux_sym_system_context_view_declaration_repeat1,
  [aux_sym_include_statement_repeat1] = aux_sym_include_statement_repeat1,
  [aux_sym_exclude_statement_repeat1] = aux_sym_exclude_statement_repeat1,
  [aux_sym_styles_declaration_repeat1] = aux_sym_styles_declaration_repeat1,
  [aux_sym_element_declaration_repeat1] = aux_sym_element_declaration_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_workspace] = {
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_wildcard_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_color_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_color_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANGidentifiers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hierarchical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_model] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_softwaresystem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_container] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_person] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_configuration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scope] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_views] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_systemcontext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_autolayout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_description] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dynamic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_styles] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_element] = {
    .visible = true,
    .named = false,
  },
  [sym_dsl] = {
    .visible = true,
    .named = true,
  },
  [sym_workspace_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_identifier] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__assignment_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__relation_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
  [sym_workspace_item_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_identifiers_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_identifiers_value] = {
    .visible = true,
    .named = true,
  },
  [sym_model_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__model_children] = {
    .visible = false,
    .named = true,
  },
  [sym__model_item_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__item_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_software_system_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_container_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_person_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_tags_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_configuration_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_configuration_item_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_scope_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_views_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_views_item_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_system_context_view_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_view_property_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_exclude_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_autolayout_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_autolayout_value] = {
    .visible = true,
    .named = true,
  },
  [sym_default_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_description_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_container_view_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_dynamic_view_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_style_item_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_element_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_element_property] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_dsl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workspace_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__model_children_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tags_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_configuration_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_views_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_context_view_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_include_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exclude_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_styles_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_child = 1,
  field_context = 2,
  field_description = 3,
  field_key = 4,
  field_name = 5,
  field_nodeSeparation = 6,
  field_parent = 7,
  field_rankSeparation = 8,
  field_relation = 9,
  field_scope = 10,
  field_source = 11,
  field_target = 12,
  field_value = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_child] = "child",
  [field_context] = "context",
  [field_description] = "description",
  [field_key] = "key",
  [field_name] = "name",
  [field_nodeSeparation] = "nodeSeparation",
  [field_parent] = "parent",
  [field_rankSeparation] = "rankSeparation",
  [field_relation] = "relation",
  [field_scope] = "scope",
  [field_source] = "source",
  [field_target] = "target",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 3},
  [11] = {.index = 18, .length = 3},
  [12] = {.index = 21, .length = 1},
  [13] = {.index = 22, .length = 2},
  [14] = {.index = 24, .length = 3},
  [15] = {.index = 27, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 1},
  [1] =
    {field_child, 2},
    {field_parent, 0},
  [3] =
    {field_name, 0},
    {field_value, 2},
  [5] =
    {field_description, 1},
  [6] =
    {field_relation, 3},
    {field_source, 0},
    {field_target, 2},
  [9] =
    {field_context, 1},
  [10] =
    {field_scope, 1},
  [11] =
    {field_context, 1},
    {field_key, 2},
  [13] =
    {field_key, 2},
    {field_scope, 1},
  [15] =
    {field_context, 1},
    {field_description, 3},
    {field_key, 2},
  [18] =
    {field_description, 3},
    {field_key, 2},
    {field_scope, 1},
  [21] =
    {field_name, 1},
  [22] =
    {field_rankSeparation, 2},
    {field_value, 1},
  [24] =
    {field_nodeSeparation, 3},
    {field_rankSeparation, 2},
    {field_value, 1},
  [27] =
    {field_key, 0},
    {field_value, 1},
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
  [23] = 3,
  [24] = 4,
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
  [109] = 92,
  [110] = 110,
  [111] = 34,
  [112] = 112,
  [113] = 68,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 34,
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
  [131] = 118,
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
  [152] = 118,
  [153] = 153,
  [154] = 154,
  [155] = 145,
  [156] = 156,
  [157] = 157,
  [158] = 145,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(165);
      ADVANCE_MAP(
        '!', 64,
        '"', 163,
        '#', 162,
        '*', 175,
        '-', 12,
        '.', 174,
        '=', 177,
        'a', 146,
        'b', 132,
        'c', 102,
        'd', 38,
        'e', 81,
        'f', 77,
        'h', 72,
        'i', 100,
        'l', 114,
        'm', 109,
        'p', 46,
        'r', 78,
        's', 27,
        't', 13,
        'v', 67,
        'w', 103,
        '{', 167,
        '}', 168,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '/') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '/') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(163);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '{') ADVANCE(167);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(163);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '}') ADVANCE(168);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '}') ADVANCE(168);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(183);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(176);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(178);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'b') ADVANCE(205);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == 'y') ADVANCE(129);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == 'y') ADVANCE(129);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(138);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(75);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 76:
      if (lookahead == 'k') ADVANCE(127);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 147:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 152:
      if (lookahead == 'w') ADVANCE(124);
      END_STATE();
    case 153:
      if (lookahead == 'w') ADVANCE(22);
      END_STATE();
    case 154:
      if (lookahead == 'x') ADVANCE(137);
      END_STATE();
    case 155:
      if (lookahead == 'y') ADVANCE(85);
      END_STATE();
    case 156:
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 157:
      if (lookahead == 'y') ADVANCE(131);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 163:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(6);
      END_STATE();
    case 164:
      if (eof) ADVANCE(165);
      ADVANCE_MAP(
        '!', 64,
        '#', 183,
        '/', 8,
        'a', 146,
        'c', 102,
        'd', 38,
        'e', 81,
        'i', 100,
        'm', 109,
        's', 28,
        'v', 67,
        'w', 103,
        '}', 168,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_workspace);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_color_token2);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_BANGidentifiers);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_hierarchical);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_flat);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_softwaresystem);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_container);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_person);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_configuration);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_scope);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_views);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_systemcontext);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_exclude);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_autolayout);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_lr);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_rl);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_tb);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_bt);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_dynamic);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_element);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 164},
  [2] = {.lex_state = 164},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 164},
  [7] = {.lex_state = 164},
  [8] = {.lex_state = 164},
  [9] = {.lex_state = 164},
  [10] = {.lex_state = 164},
  [11] = {.lex_state = 164},
  [12] = {.lex_state = 164},
  [13] = {.lex_state = 164},
  [14] = {.lex_state = 164},
  [15] = {.lex_state = 164},
  [16] = {.lex_state = 164},
  [17] = {.lex_state = 164},
  [18] = {.lex_state = 164},
  [19] = {.lex_state = 164},
  [20] = {.lex_state = 164},
  [21] = {.lex_state = 164},
  [22] = {.lex_state = 164},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 164},
  [26] = {.lex_state = 164},
  [27] = {.lex_state = 164},
  [28] = {.lex_state = 164},
  [29] = {.lex_state = 164},
  [30] = {.lex_state = 164},
  [31] = {.lex_state = 164},
  [32] = {.lex_state = 164},
  [33] = {.lex_state = 164},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 164},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 164},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 164},
  [44] = {.lex_state = 164},
  [45] = {.lex_state = 164},
  [46] = {.lex_state = 164},
  [47] = {.lex_state = 164},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 164},
  [51] = {.lex_state = 164},
  [52] = {.lex_state = 164},
  [53] = {.lex_state = 164},
  [54] = {.lex_state = 164},
  [55] = {.lex_state = 164},
  [56] = {.lex_state = 164},
  [57] = {.lex_state = 164},
  [58] = {.lex_state = 164},
  [59] = {.lex_state = 164},
  [60] = {.lex_state = 164},
  [61] = {.lex_state = 164},
  [62] = {.lex_state = 164},
  [63] = {.lex_state = 164},
  [64] = {.lex_state = 164},
  [65] = {.lex_state = 164},
  [66] = {.lex_state = 164},
  [67] = {.lex_state = 164},
  [68] = {.lex_state = 164},
  [69] = {.lex_state = 164},
  [70] = {.lex_state = 164},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 164},
  [73] = {.lex_state = 164},
  [74] = {.lex_state = 164},
  [75] = {.lex_state = 164},
  [76] = {.lex_state = 164},
  [77] = {.lex_state = 164},
  [78] = {.lex_state = 164},
  [79] = {.lex_state = 164},
  [80] = {.lex_state = 164},
  [81] = {.lex_state = 164},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 164},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 164},
  [86] = {.lex_state = 164},
  [87] = {.lex_state = 164},
  [88] = {.lex_state = 164},
  [89] = {.lex_state = 164},
  [90] = {.lex_state = 164},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 164},
  [93] = {.lex_state = 164},
  [94] = {.lex_state = 164},
  [95] = {.lex_state = 164},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 164},
  [98] = {.lex_state = 164},
  [99] = {.lex_state = 164},
  [100] = {.lex_state = 164},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 164},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 164},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 164},
  [125] = {.lex_state = 164},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 164},
  [128] = {.lex_state = 164},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 164},
  [133] = {.lex_state = 164},
  [134] = {.lex_state = 164},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_workspace] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_wildcard_identifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [aux_sym_color_token1] = ACTIONS(1),
    [aux_sym_color_token2] = ACTIONS(1),
    [anon_sym_BANGidentifiers] = ACTIONS(1),
    [anon_sym_hierarchical] = ACTIONS(1),
    [anon_sym_flat] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
    [anon_sym_softwaresystem] = ACTIONS(1),
    [anon_sym_container] = ACTIONS(1),
    [anon_sym_person] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [anon_sym_tags] = ACTIONS(1),
    [anon_sym_configuration] = ACTIONS(1),
    [anon_sym_scope] = ACTIONS(1),
    [anon_sym_views] = ACTIONS(1),
    [anon_sym_systemcontext] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_exclude] = ACTIONS(1),
    [anon_sym_autolayout] = ACTIONS(1),
    [anon_sym_lr] = ACTIONS(1),
    [anon_sym_rl] = ACTIONS(1),
    [anon_sym_tb] = ACTIONS(1),
    [anon_sym_bt] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_description] = ACTIONS(1),
    [anon_sym_dynamic] = ACTIONS(1),
    [anon_sym_styles] = ACTIONS(1),
    [anon_sym_element] = ACTIONS(1),
  },
  [1] = {
    [sym_dsl] = STATE(168),
    [sym_workspace_declaration] = STATE(100),
    [aux_sym_dsl_repeat1] = STATE(100),
    [anon_sym_workspace] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    STATE(18), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(47), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [33] = 9,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      sym__simple_identifier,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_tag,
    ACTIONS(29), 1,
      anon_sym_tags,
    STATE(114), 1,
      sym_identifier,
    STATE(139), 1,
      sym_relation_identifier,
    STATE(141), 1,
      sym_dotted_identifier,
    STATE(4), 6,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [66] = 9,
    ACTIONS(23), 1,
      sym__simple_identifier,
    ACTIONS(27), 1,
      anon_sym_tag,
    ACTIONS(29), 1,
      anon_sym_tags,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      sym_comment,
    STATE(114), 1,
      sym_identifier,
    STATE(139), 1,
      sym_relation_identifier,
    STATE(141), 1,
      sym_dotted_identifier,
    STATE(5), 6,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [99] = 9,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      sym__simple_identifier,
    ACTIONS(40), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_tag,
    ACTIONS(46), 1,
      anon_sym_tags,
    STATE(114), 1,
      sym_identifier,
    STATE(139), 1,
      sym_relation_identifier,
    STATE(141), 1,
      sym_dotted_identifier,
    STATE(5), 6,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [132] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(47), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [165] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(11), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(47), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [198] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(25), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(47), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [231] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(47), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [264] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(14), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(47), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [297] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(47), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [330] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(16), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(47), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [363] = 9,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_include,
    ACTIONS(71), 1,
      anon_sym_exclude,
    ACTIONS(74), 1,
      anon_sym_autolayout,
    ACTIONS(77), 1,
      anon_sym_default,
    ACTIONS(80), 1,
      anon_sym_description,
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(47), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [396] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(47), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [429] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(20), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(47), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [462] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(47), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [495] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(47), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [528] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(47), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [561] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(22), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(47), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [594] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(47), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [627] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(47), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [660] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(47), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [693] = 9,
    ACTIONS(23), 1,
      sym__simple_identifier,
    ACTIONS(27), 1,
      anon_sym_tag,
    ACTIONS(29), 1,
      anon_sym_tags,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 1,
      sym_comment,
    STATE(114), 1,
      sym_identifier,
    STATE(139), 1,
      sym_relation_identifier,
    STATE(141), 1,
      sym_dotted_identifier,
    STATE(24), 6,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [726] = 9,
    ACTIONS(23), 1,
      sym__simple_identifier,
    ACTIONS(27), 1,
      anon_sym_tag,
    ACTIONS(29), 1,
      anon_sym_tags,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(114), 1,
      sym_identifier,
    STATE(139), 1,
      sym_relation_identifier,
    STATE(141), 1,
      sym_dotted_identifier,
    STATE(5), 6,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [759] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_exclude,
    ACTIONS(15), 1,
      anon_sym_autolayout,
    ACTIONS(17), 1,
      anon_sym_default,
    ACTIONS(19), 1,
      anon_sym_description,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(47), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [792] = 8,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    ACTIONS(111), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_BANGidentifiers,
    ACTIONS(115), 1,
      anon_sym_model,
    ACTIONS(117), 1,
      anon_sym_configuration,
    ACTIONS(119), 1,
      anon_sym_views,
    STATE(32), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(74), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [821] = 8,
    ACTIONS(111), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_BANGidentifiers,
    ACTIONS(115), 1,
      anon_sym_model,
    ACTIONS(117), 1,
      anon_sym_configuration,
    ACTIONS(119), 1,
      anon_sym_views,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(74), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [850] = 8,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    ACTIONS(111), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_BANGidentifiers,
    ACTIONS(115), 1,
      anon_sym_model,
    ACTIONS(117), 1,
      anon_sym_configuration,
    ACTIONS(119), 1,
      anon_sym_views,
    STATE(29), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(74), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [879] = 8,
    ACTIONS(111), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_BANGidentifiers,
    ACTIONS(115), 1,
      anon_sym_model,
    ACTIONS(117), 1,
      anon_sym_configuration,
    ACTIONS(119), 1,
      anon_sym_views,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    STATE(32), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(74), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [908] = 8,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_container,
    ACTIONS(131), 1,
      anon_sym_systemcontext,
    ACTIONS(133), 1,
      anon_sym_dynamic,
    ACTIONS(135), 1,
      anon_sym_styles,
    STATE(31), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(83), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [937] = 8,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_container,
    ACTIONS(131), 1,
      anon_sym_systemcontext,
    ACTIONS(133), 1,
      anon_sym_dynamic,
    ACTIONS(135), 1,
      anon_sym_styles,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(33), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(83), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [966] = 8,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(141), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_BANGidentifiers,
    ACTIONS(147), 1,
      anon_sym_model,
    ACTIONS(150), 1,
      anon_sym_configuration,
    ACTIONS(153), 1,
      anon_sym_views,
    STATE(32), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(74), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [995] = 8,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_container,
    ACTIONS(164), 1,
      anon_sym_systemcontext,
    ACTIONS(167), 1,
      anon_sym_dynamic,
    ACTIONS(170), 1,
      anon_sym_styles,
    STATE(33), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(83), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [1024] = 2,
    ACTIONS(175), 1,
      aux_sym_color_token1,
    ACTIONS(173), 8,
      anon_sym_LBRACE,
      sym_number,
      sym_string,
      sym__simple_identifier,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      aux_sym_color_token2,
  [1038] = 1,
    ACTIONS(177), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1048] = 4,
    ACTIONS(181), 1,
      sym_string,
    STATE(38), 1,
      aux_sym_tags_declaration_repeat1,
    ACTIONS(179), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(183), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1064] = 6,
    ACTIONS(185), 1,
      sym__simple_identifier,
    ACTIONS(187), 1,
      sym_wildcard_identifier,
    ACTIONS(189), 1,
      sym__newline,
    ACTIONS(191), 1,
      sym_comment,
    STATE(103), 1,
      sym_identifier,
    STATE(42), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1084] = 4,
    ACTIONS(195), 1,
      sym_string,
    STATE(38), 1,
      aux_sym_tags_declaration_repeat1,
    ACTIONS(193), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(198), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1100] = 4,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym__model_children,
    ACTIONS(202), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(204), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1116] = 4,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym__model_children,
    ACTIONS(206), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(208), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1132] = 1,
    ACTIONS(210), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1142] = 6,
    ACTIONS(212), 1,
      sym__simple_identifier,
    ACTIONS(215), 1,
      sym_wildcard_identifier,
    ACTIONS(218), 1,
      sym__newline,
    ACTIONS(220), 1,
      sym_comment,
    STATE(103), 1,
      sym_identifier,
    STATE(42), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1162] = 1,
    ACTIONS(222), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1172] = 1,
    ACTIONS(224), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1182] = 1,
    ACTIONS(226), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1192] = 1,
    ACTIONS(228), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1202] = 1,
    ACTIONS(230), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1212] = 4,
    ACTIONS(232), 1,
      anon_sym_softwaresystem,
    ACTIONS(234), 1,
      anon_sym_container,
    ACTIONS(236), 1,
      anon_sym_person,
    STATE(112), 4,
      sym__item_declaration,
      sym_software_system_declaration,
      sym_container_declaration,
      sym_person_declaration,
  [1228] = 5,
    ACTIONS(240), 1,
      sym__simple_identifier,
    ACTIONS(242), 1,
      aux_sym_color_token1,
    ACTIONS(244), 1,
      aux_sym_color_token2,
    ACTIONS(238), 2,
      sym_number,
      sym_string,
    STATE(150), 2,
      sym_identifier,
      sym_color,
  [1246] = 1,
    ACTIONS(246), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1256] = 1,
    ACTIONS(248), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1266] = 1,
    ACTIONS(250), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1276] = 1,
    ACTIONS(252), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1286] = 1,
    ACTIONS(254), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1296] = 1,
    ACTIONS(256), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1306] = 1,
    ACTIONS(258), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1316] = 1,
    ACTIONS(260), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1326] = 1,
    ACTIONS(262), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1335] = 1,
    ACTIONS(264), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1344] = 1,
    ACTIONS(266), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1353] = 1,
    ACTIONS(268), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1362] = 1,
    ACTIONS(270), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1371] = 5,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_element,
    STATE(132), 1,
      sym_element_declaration,
    STATE(70), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [1388] = 1,
    ACTIONS(278), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1397] = 5,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    ACTIONS(282), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_scope,
    STATE(134), 1,
      sym_scope_declaration,
    STATE(80), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1414] = 1,
    ACTIONS(286), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1423] = 1,
    ACTIONS(288), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1432] = 1,
    ACTIONS(290), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1441] = 1,
    ACTIONS(292), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1450] = 5,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_element,
    STATE(132), 1,
      sym_element_declaration,
    STATE(70), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [1467] = 5,
    ACTIONS(302), 1,
      sym__simple_identifier,
    ACTIONS(304), 1,
      sym__newline,
    ACTIONS(306), 1,
      sym_comment,
    STATE(115), 1,
      sym_identifier,
    STATE(84), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [1484] = 1,
    ACTIONS(308), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1493] = 1,
    ACTIONS(310), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1502] = 1,
    ACTIONS(312), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1511] = 1,
    ACTIONS(314), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1520] = 1,
    ACTIONS(316), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1529] = 1,
    ACTIONS(318), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1538] = 1,
    ACTIONS(320), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1547] = 1,
    ACTIONS(322), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1556] = 5,
    ACTIONS(282), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_scope,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      sym_scope_declaration,
    STATE(98), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1573] = 1,
    ACTIONS(326), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1582] = 5,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
    ACTIONS(330), 1,
      sym__simple_identifier,
    ACTIONS(332), 1,
      sym_comment,
    STATE(49), 1,
      sym_identifier,
    STATE(91), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1599] = 1,
    ACTIONS(334), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1608] = 5,
    ACTIONS(336), 1,
      sym__simple_identifier,
    ACTIONS(339), 1,
      sym__newline,
    ACTIONS(341), 1,
      sym_comment,
    STATE(115), 1,
      sym_identifier,
    STATE(84), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [1625] = 1,
    ACTIONS(343), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1634] = 1,
    ACTIONS(345), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1643] = 1,
    ACTIONS(347), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1652] = 1,
    ACTIONS(349), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1661] = 1,
    ACTIONS(351), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1670] = 1,
    ACTIONS(353), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1679] = 5,
    ACTIONS(330), 1,
      sym__simple_identifier,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    ACTIONS(357), 1,
      sym_comment,
    STATE(49), 1,
      sym_identifier,
    STATE(96), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1696] = 1,
    ACTIONS(359), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1705] = 1,
    ACTIONS(361), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1714] = 1,
    ACTIONS(363), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1723] = 1,
    ACTIONS(365), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1732] = 5,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    ACTIONS(369), 1,
      sym__simple_identifier,
    ACTIONS(372), 1,
      sym_comment,
    STATE(49), 1,
      sym_identifier,
    STATE(96), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1749] = 1,
    ACTIONS(375), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1758] = 5,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    ACTIONS(379), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_scope,
    STATE(134), 1,
      sym_scope_declaration,
    STATE(98), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1775] = 5,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_element,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      sym_element_declaration,
    STATE(63), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [1792] = 4,
    ACTIONS(3), 1,
      anon_sym_workspace,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
    ACTIONS(389), 1,
      sym_comment,
    STATE(107), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [1806] = 2,
    ACTIONS(391), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(393), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1816] = 2,
    ACTIONS(395), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(397), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1826] = 3,
    ACTIONS(401), 1,
      anon_sym_DOT,
    ACTIONS(403), 1,
      sym__newline,
    ACTIONS(399), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [1838] = 2,
    ACTIONS(405), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(407), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1848] = 2,
    ACTIONS(409), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(411), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1858] = 2,
    ACTIONS(413), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(415), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1868] = 4,
    ACTIONS(417), 1,
      ts_builtin_sym_end,
    ACTIONS(419), 1,
      anon_sym_workspace,
    ACTIONS(422), 1,
      sym_comment,
    STATE(107), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [1882] = 4,
    ACTIONS(185), 1,
      sym__simple_identifier,
    ACTIONS(425), 1,
      sym_wildcard_identifier,
    STATE(103), 1,
      sym_identifier,
    STATE(37), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1896] = 2,
    ACTIONS(359), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(427), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1906] = 2,
    STATE(121), 1,
      sym_autolayout_value,
    ACTIONS(429), 4,
      anon_sym_lr,
      anon_sym_rl,
      anon_sym_tb,
      anon_sym_bt,
  [1916] = 2,
    ACTIONS(173), 1,
      sym__newline,
    ACTIONS(175), 4,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_wildcard_identifier,
      sym_comment,
  [1926] = 2,
    ACTIONS(431), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(433), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1936] = 2,
    ACTIONS(290), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(435), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1946] = 4,
    ACTIONS(437), 1,
      anon_sym_DOT,
    ACTIONS(439), 1,
      anon_sym_EQ,
    ACTIONS(441), 1,
      anon_sym_DASH_GT,
    STATE(48), 1,
      sym__assignment_operator,
  [1959] = 3,
    ACTIONS(445), 1,
      anon_sym_DOT,
    ACTIONS(447), 1,
      sym__newline,
    ACTIONS(443), 2,
      sym__simple_identifier,
      sym_comment,
  [1970] = 4,
    ACTIONS(330), 1,
      sym__simple_identifier,
    STATE(136), 1,
      sym_identifier,
    STATE(141), 1,
      sym_dotted_identifier,
    STATE(161), 1,
      sym_relation_identifier,
  [1983] = 3,
    ACTIONS(449), 1,
      sym__simple_identifier,
    STATE(115), 1,
      sym_identifier,
    STATE(71), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [1994] = 2,
    ACTIONS(453), 1,
      sym__newline,
    ACTIONS(451), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [2003] = 2,
    ACTIONS(173), 1,
      sym__newline,
    ACTIONS(175), 3,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_comment,
  [2012] = 2,
    STATE(61), 1,
      sym_identifiers_value,
    ACTIONS(455), 2,
      anon_sym_hierarchical,
      anon_sym_flat,
  [2020] = 3,
    ACTIONS(457), 1,
      sym_number,
    ACTIONS(459), 1,
      sym__newline,
    ACTIONS(461), 1,
      sym_comment,
  [2030] = 1,
    ACTIONS(463), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_element,
  [2036] = 3,
    ACTIONS(465), 1,
      sym_number,
    ACTIONS(467), 1,
      sym__newline,
    ACTIONS(469), 1,
      sym_comment,
  [2046] = 1,
    ACTIONS(471), 3,
      ts_builtin_sym_end,
      anon_sym_workspace,
      sym_comment,
  [2052] = 1,
    ACTIONS(473), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_scope,
  [2058] = 3,
    ACTIONS(23), 1,
      sym__simple_identifier,
    ACTIONS(475), 1,
      sym_wildcard_identifier,
    STATE(137), 1,
      sym_identifier,
  [2068] = 1,
    ACTIONS(477), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_element,
  [2074] = 1,
    ACTIONS(479), 3,
      ts_builtin_sym_end,
      anon_sym_workspace,
      sym_comment,
  [2080] = 1,
    ACTIONS(481), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [2086] = 1,
    ACTIONS(483), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [2092] = 2,
    ACTIONS(453), 1,
      sym__newline,
    ACTIONS(451), 2,
      sym__simple_identifier,
      sym_comment,
  [2100] = 1,
    ACTIONS(485), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_element,
  [2106] = 1,
    ACTIONS(487), 3,
      ts_builtin_sym_end,
      anon_sym_workspace,
      sym_comment,
  [2112] = 1,
    ACTIONS(489), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_scope,
  [2118] = 2,
    ACTIONS(493), 1,
      sym__newline,
    ACTIONS(491), 2,
      sym_number,
      sym_comment,
  [2126] = 2,
    ACTIONS(437), 1,
      anon_sym_DOT,
    ACTIONS(441), 1,
      sym_string,
  [2133] = 2,
    ACTIONS(495), 1,
      anon_sym_LBRACE,
    ACTIONS(497), 1,
      sym_string,
  [2140] = 2,
    ACTIONS(499), 1,
      sym__newline,
    ACTIONS(501), 1,
      sym_comment,
  [2147] = 2,
    ACTIONS(503), 1,
      anon_sym_DASH_GT,
    STATE(116), 1,
      sym__relation_operator,
  [2154] = 2,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 1,
      sym_string,
  [2161] = 1,
    ACTIONS(441), 2,
      sym_string,
      anon_sym_DASH_GT,
  [2166] = 2,
    ACTIONS(509), 1,
      anon_sym_LBRACE,
    ACTIONS(511), 1,
      sym_string,
  [2173] = 2,
    ACTIONS(513), 1,
      sym__newline,
    ACTIONS(515), 1,
      sym_comment,
  [2180] = 2,
    ACTIONS(517), 1,
      sym_string,
    STATE(36), 1,
      aux_sym_tags_declaration_repeat1,
  [2187] = 2,
    ACTIONS(330), 1,
      sym__simple_identifier,
    STATE(152), 1,
      sym_identifier,
  [2194] = 2,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym__model_children,
  [2201] = 2,
    ACTIONS(521), 1,
      anon_sym_EQ,
    STATE(144), 1,
      sym__assignment_operator,
  [2208] = 2,
    ACTIONS(523), 1,
      sym__newline,
    ACTIONS(525), 1,
      sym_comment,
  [2215] = 2,
    ACTIONS(527), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      sym_string,
  [2222] = 2,
    ACTIONS(531), 1,
      sym__newline,
    ACTIONS(533), 1,
      sym_comment,
  [2229] = 2,
    ACTIONS(535), 1,
      sym__newline,
    ACTIONS(537), 1,
      sym_comment,
  [2236] = 1,
    ACTIONS(453), 2,
      sym_string,
      anon_sym_DASH_GT,
  [2241] = 2,
    ACTIONS(539), 1,
      anon_sym_LBRACE,
    ACTIONS(541), 1,
      sym_string,
  [2248] = 2,
    ACTIONS(543), 1,
      anon_sym_LBRACE,
    ACTIONS(545), 1,
      sym_string,
  [2255] = 2,
    ACTIONS(240), 1,
      sym__simple_identifier,
    STATE(118), 1,
      sym_identifier,
  [2262] = 2,
    ACTIONS(330), 1,
      sym__simple_identifier,
    STATE(154), 1,
      sym_identifier,
  [2269] = 2,
    ACTIONS(330), 1,
      sym__simple_identifier,
    STATE(159), 1,
      sym_identifier,
  [2276] = 2,
    ACTIONS(449), 1,
      sym__simple_identifier,
    STATE(131), 1,
      sym_identifier,
  [2283] = 2,
    ACTIONS(547), 1,
      anon_sym_LBRACE,
    ACTIONS(549), 1,
      sym_string,
  [2290] = 2,
    ACTIONS(551), 1,
      anon_sym_EQ,
    STATE(181), 1,
      sym__assignment_operator,
  [2297] = 1,
    ACTIONS(553), 1,
      sym_string,
  [2301] = 1,
    ACTIONS(555), 1,
      sym__simple_identifier,
  [2305] = 1,
    ACTIONS(557), 1,
      sym_string,
  [2309] = 1,
    ACTIONS(559), 1,
      anon_sym_LBRACE,
  [2313] = 1,
    ACTIONS(561), 1,
      sym_string,
  [2317] = 1,
    ACTIONS(563), 1,
      sym_string,
  [2321] = 1,
    ACTIONS(565), 1,
      anon_sym_LBRACE,
  [2325] = 1,
    ACTIONS(567), 1,
      ts_builtin_sym_end,
  [2329] = 1,
    ACTIONS(569), 1,
      anon_sym_LBRACE,
  [2333] = 1,
    ACTIONS(571), 1,
      sym__newline,
  [2337] = 1,
    ACTIONS(573), 1,
      sym__newline,
  [2341] = 1,
    ACTIONS(575), 1,
      anon_sym_LBRACE,
  [2345] = 1,
    ACTIONS(577), 1,
      sym_string,
  [2349] = 1,
    ACTIONS(579), 1,
      sym__newline,
  [2353] = 1,
    ACTIONS(581), 1,
      sym_string,
  [2357] = 1,
    ACTIONS(583), 1,
      sym_string,
  [2361] = 1,
    ACTIONS(585), 1,
      anon_sym_LBRACE,
  [2365] = 1,
    ACTIONS(587), 1,
      sym__newline,
  [2369] = 1,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
  [2373] = 1,
    ACTIONS(591), 1,
      sym__newline,
  [2377] = 1,
    ACTIONS(593), 1,
      sym_string,
  [2381] = 1,
    ACTIONS(595), 1,
      sym__newline,
  [2385] = 1,
    ACTIONS(597), 1,
      sym__newline,
  [2389] = 1,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
  [2393] = 1,
    ACTIONS(601), 1,
      sym__newline,
  [2397] = 1,
    ACTIONS(603), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 165,
  [SMALL_STATE(8)] = 198,
  [SMALL_STATE(9)] = 231,
  [SMALL_STATE(10)] = 264,
  [SMALL_STATE(11)] = 297,
  [SMALL_STATE(12)] = 330,
  [SMALL_STATE(13)] = 363,
  [SMALL_STATE(14)] = 396,
  [SMALL_STATE(15)] = 429,
  [SMALL_STATE(16)] = 462,
  [SMALL_STATE(17)] = 495,
  [SMALL_STATE(18)] = 528,
  [SMALL_STATE(19)] = 561,
  [SMALL_STATE(20)] = 594,
  [SMALL_STATE(21)] = 627,
  [SMALL_STATE(22)] = 660,
  [SMALL_STATE(23)] = 693,
  [SMALL_STATE(24)] = 726,
  [SMALL_STATE(25)] = 759,
  [SMALL_STATE(26)] = 792,
  [SMALL_STATE(27)] = 821,
  [SMALL_STATE(28)] = 850,
  [SMALL_STATE(29)] = 879,
  [SMALL_STATE(30)] = 908,
  [SMALL_STATE(31)] = 937,
  [SMALL_STATE(32)] = 966,
  [SMALL_STATE(33)] = 995,
  [SMALL_STATE(34)] = 1024,
  [SMALL_STATE(35)] = 1038,
  [SMALL_STATE(36)] = 1048,
  [SMALL_STATE(37)] = 1064,
  [SMALL_STATE(38)] = 1084,
  [SMALL_STATE(39)] = 1100,
  [SMALL_STATE(40)] = 1116,
  [SMALL_STATE(41)] = 1132,
  [SMALL_STATE(42)] = 1142,
  [SMALL_STATE(43)] = 1162,
  [SMALL_STATE(44)] = 1172,
  [SMALL_STATE(45)] = 1182,
  [SMALL_STATE(46)] = 1192,
  [SMALL_STATE(47)] = 1202,
  [SMALL_STATE(48)] = 1212,
  [SMALL_STATE(49)] = 1228,
  [SMALL_STATE(50)] = 1246,
  [SMALL_STATE(51)] = 1256,
  [SMALL_STATE(52)] = 1266,
  [SMALL_STATE(53)] = 1276,
  [SMALL_STATE(54)] = 1286,
  [SMALL_STATE(55)] = 1296,
  [SMALL_STATE(56)] = 1306,
  [SMALL_STATE(57)] = 1316,
  [SMALL_STATE(58)] = 1326,
  [SMALL_STATE(59)] = 1335,
  [SMALL_STATE(60)] = 1344,
  [SMALL_STATE(61)] = 1353,
  [SMALL_STATE(62)] = 1362,
  [SMALL_STATE(63)] = 1371,
  [SMALL_STATE(64)] = 1388,
  [SMALL_STATE(65)] = 1397,
  [SMALL_STATE(66)] = 1414,
  [SMALL_STATE(67)] = 1423,
  [SMALL_STATE(68)] = 1432,
  [SMALL_STATE(69)] = 1441,
  [SMALL_STATE(70)] = 1450,
  [SMALL_STATE(71)] = 1467,
  [SMALL_STATE(72)] = 1484,
  [SMALL_STATE(73)] = 1493,
  [SMALL_STATE(74)] = 1502,
  [SMALL_STATE(75)] = 1511,
  [SMALL_STATE(76)] = 1520,
  [SMALL_STATE(77)] = 1529,
  [SMALL_STATE(78)] = 1538,
  [SMALL_STATE(79)] = 1547,
  [SMALL_STATE(80)] = 1556,
  [SMALL_STATE(81)] = 1573,
  [SMALL_STATE(82)] = 1582,
  [SMALL_STATE(83)] = 1599,
  [SMALL_STATE(84)] = 1608,
  [SMALL_STATE(85)] = 1625,
  [SMALL_STATE(86)] = 1634,
  [SMALL_STATE(87)] = 1643,
  [SMALL_STATE(88)] = 1652,
  [SMALL_STATE(89)] = 1661,
  [SMALL_STATE(90)] = 1670,
  [SMALL_STATE(91)] = 1679,
  [SMALL_STATE(92)] = 1696,
  [SMALL_STATE(93)] = 1705,
  [SMALL_STATE(94)] = 1714,
  [SMALL_STATE(95)] = 1723,
  [SMALL_STATE(96)] = 1732,
  [SMALL_STATE(97)] = 1749,
  [SMALL_STATE(98)] = 1758,
  [SMALL_STATE(99)] = 1775,
  [SMALL_STATE(100)] = 1792,
  [SMALL_STATE(101)] = 1806,
  [SMALL_STATE(102)] = 1816,
  [SMALL_STATE(103)] = 1826,
  [SMALL_STATE(104)] = 1838,
  [SMALL_STATE(105)] = 1848,
  [SMALL_STATE(106)] = 1858,
  [SMALL_STATE(107)] = 1868,
  [SMALL_STATE(108)] = 1882,
  [SMALL_STATE(109)] = 1896,
  [SMALL_STATE(110)] = 1906,
  [SMALL_STATE(111)] = 1916,
  [SMALL_STATE(112)] = 1926,
  [SMALL_STATE(113)] = 1936,
  [SMALL_STATE(114)] = 1946,
  [SMALL_STATE(115)] = 1959,
  [SMALL_STATE(116)] = 1970,
  [SMALL_STATE(117)] = 1983,
  [SMALL_STATE(118)] = 1994,
  [SMALL_STATE(119)] = 2003,
  [SMALL_STATE(120)] = 2012,
  [SMALL_STATE(121)] = 2020,
  [SMALL_STATE(122)] = 2030,
  [SMALL_STATE(123)] = 2036,
  [SMALL_STATE(124)] = 2046,
  [SMALL_STATE(125)] = 2052,
  [SMALL_STATE(126)] = 2058,
  [SMALL_STATE(127)] = 2068,
  [SMALL_STATE(128)] = 2074,
  [SMALL_STATE(129)] = 2080,
  [SMALL_STATE(130)] = 2086,
  [SMALL_STATE(131)] = 2092,
  [SMALL_STATE(132)] = 2100,
  [SMALL_STATE(133)] = 2106,
  [SMALL_STATE(134)] = 2112,
  [SMALL_STATE(135)] = 2118,
  [SMALL_STATE(136)] = 2126,
  [SMALL_STATE(137)] = 2133,
  [SMALL_STATE(138)] = 2140,
  [SMALL_STATE(139)] = 2147,
  [SMALL_STATE(140)] = 2154,
  [SMALL_STATE(141)] = 2161,
  [SMALL_STATE(142)] = 2166,
  [SMALL_STATE(143)] = 2173,
  [SMALL_STATE(144)] = 2180,
  [SMALL_STATE(145)] = 2187,
  [SMALL_STATE(146)] = 2194,
  [SMALL_STATE(147)] = 2201,
  [SMALL_STATE(148)] = 2208,
  [SMALL_STATE(149)] = 2215,
  [SMALL_STATE(150)] = 2222,
  [SMALL_STATE(151)] = 2229,
  [SMALL_STATE(152)] = 2236,
  [SMALL_STATE(153)] = 2241,
  [SMALL_STATE(154)] = 2248,
  [SMALL_STATE(155)] = 2255,
  [SMALL_STATE(156)] = 2262,
  [SMALL_STATE(157)] = 2269,
  [SMALL_STATE(158)] = 2276,
  [SMALL_STATE(159)] = 2283,
  [SMALL_STATE(160)] = 2290,
  [SMALL_STATE(161)] = 2297,
  [SMALL_STATE(162)] = 2301,
  [SMALL_STATE(163)] = 2305,
  [SMALL_STATE(164)] = 2309,
  [SMALL_STATE(165)] = 2313,
  [SMALL_STATE(166)] = 2317,
  [SMALL_STATE(167)] = 2321,
  [SMALL_STATE(168)] = 2325,
  [SMALL_STATE(169)] = 2329,
  [SMALL_STATE(170)] = 2333,
  [SMALL_STATE(171)] = 2337,
  [SMALL_STATE(172)] = 2341,
  [SMALL_STATE(173)] = 2345,
  [SMALL_STATE(174)] = 2349,
  [SMALL_STATE(175)] = 2353,
  [SMALL_STATE(176)] = 2357,
  [SMALL_STATE(177)] = 2361,
  [SMALL_STATE(178)] = 2365,
  [SMALL_STATE(179)] = 2369,
  [SMALL_STATE(180)] = 2373,
  [SMALL_STATE(181)] = 2377,
  [SMALL_STATE(182)] = 2381,
  [SMALL_STATE(183)] = 2385,
  [SMALL_STATE(184)] = 2389,
  [SMALL_STATE(185)] = 2393,
  [SMALL_STATE(186)] = 2397,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_declaration_repeat1, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, 0, 0),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 3, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 3, 0, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 3, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_property_statement, 1, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 4, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 13),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 4, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 14),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 13),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 6, 0, 14),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 4, 0, 7),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 4, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_value, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_statement, 2, 0, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_declaration, 2, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 4, 0, 6),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 4, 0, 6),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 2, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 4, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 6),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 8),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_item_statement, 1, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 3, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 6),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 8),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 7),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 9),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 3, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_item_statement, 1, 0, 0),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 8),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 10),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 8),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 10),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 9),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 11),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 3, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 7, 0, 10),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 7, 0, 10),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 7, 0, 11),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 4, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_declaration, 3, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_declaration, 3, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 2, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 3, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 2, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_identifier, 1, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 3, 0, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3, 0, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 4, 0, 12),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 5, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_declaration, 2, 0, 1),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 5, 0, 12),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 4, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 3, 0, 15),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 4, 0, 15),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_item_statement, 1, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 6, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_item_statement, 1, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [567] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
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

TS_PUBLIC const TSLanguage *tree_sitter_structurizr(void) {
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

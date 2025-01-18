#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 207
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 17

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
  anon_sym_component = 21,
  anon_sym_person = 22,
  anon_sym_tag = 23,
  anon_sym_tags = 24,
  anon_sym_configuration = 25,
  anon_sym_scope = 26,
  anon_sym_views = 27,
  anon_sym_systemcontext = 28,
  anon_sym_include = 29,
  anon_sym_exclude = 30,
  anon_sym_autolayout = 31,
  anon_sym_lr = 32,
  anon_sym_rl = 33,
  anon_sym_tb = 34,
  anon_sym_bt = 35,
  anon_sym_default = 36,
  anon_sym_description = 37,
  anon_sym_dynamic = 38,
  anon_sym_styles = 39,
  anon_sym_element = 40,
  sym_dsl = 41,
  sym_workspace_declaration = 42,
  sym_dotted_identifier = 43,
  sym_identifier = 44,
  sym_relation_identifier = 45,
  sym__assignment_operator = 46,
  sym__relation_operator = 47,
  sym_color = 48,
  sym_workspace_item_statement = 49,
  sym_identifiers_statement = 50,
  sym_identifiers_value = 51,
  sym_model_declaration = 52,
  sym__model_children = 53,
  sym__model_item_statement = 54,
  sym_variable_declaration = 55,
  sym_relation_statement = 56,
  sym__item_declaration = 57,
  sym_software_system_declaration = 58,
  sym_container_declaration = 59,
  sym_component_declaration = 60,
  sym_person_declaration = 61,
  sym_tag_declaration = 62,
  sym_tags_declaration = 63,
  sym_configuration_declaration = 64,
  sym_configuration_item_statement = 65,
  sym_scope_declaration = 66,
  sym_views_declaration = 67,
  sym_views_item_statement = 68,
  sym_system_context_view_declaration = 69,
  sym_view_property_statement = 70,
  sym_include_statement = 71,
  sym_exclude_statement = 72,
  sym_autolayout_statement = 73,
  sym_autolayout_value = 74,
  sym_default_statement = 75,
  sym_description_statement = 76,
  sym_container_view_declaration = 77,
  sym_dynamic_view_declaration = 78,
  sym_styles_declaration = 79,
  sym_style_item_statement = 80,
  sym_element_declaration = 81,
  sym_element_property = 82,
  aux_sym_dsl_repeat1 = 83,
  aux_sym_workspace_declaration_repeat1 = 84,
  aux_sym__model_children_repeat1 = 85,
  aux_sym_software_system_declaration_repeat1 = 86,
  aux_sym_configuration_declaration_repeat1 = 87,
  aux_sym_views_declaration_repeat1 = 88,
  aux_sym_system_context_view_declaration_repeat1 = 89,
  aux_sym_include_statement_repeat1 = 90,
  aux_sym_exclude_statement_repeat1 = 91,
  aux_sym_styles_declaration_repeat1 = 92,
  aux_sym_element_declaration_repeat1 = 93,
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
  [anon_sym_component] = "component",
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
  [sym_component_declaration] = "component_declaration",
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
  [aux_sym_software_system_declaration_repeat1] = "software_system_declaration_repeat1",
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
  [anon_sym_component] = anon_sym_component,
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
  [sym_component_declaration] = sym_component_declaration,
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
  [aux_sym_software_system_declaration_repeat1] = aux_sym_software_system_declaration_repeat1,
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
  [anon_sym_component] = {
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
  [sym_component_declaration] = {
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
  [aux_sym_software_system_declaration_repeat1] = {
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
  field_tags = 12,
  field_target = 13,
  field_value = 14,
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
  [field_tags] = "tags",
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
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 3},
  [12] = {.index = 20, .length = 3},
  [13] = {.index = 23, .length = 3},
  [14] = {.index = 26, .length = 2},
  [15] = {.index = 28, .length = 3},
  [16] = {.index = 31, .length = 2},
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
    {field_name, 1},
  [6] =
    {field_relation, 3},
    {field_source, 0},
    {field_target, 2},
  [9] =
    {field_context, 1},
  [10] =
    {field_scope, 1},
  [11] =
    {field_description, 2},
    {field_name, 1},
  [13] =
    {field_context, 1},
    {field_key, 2},
  [15] =
    {field_key, 2},
    {field_scope, 1},
  [17] =
    {field_description, 2},
    {field_name, 1},
    {field_tags, 3},
  [20] =
    {field_context, 1},
    {field_description, 3},
    {field_key, 2},
  [23] =
    {field_description, 3},
    {field_key, 2},
    {field_scope, 1},
  [26] =
    {field_rankSeparation, 2},
    {field_value, 1},
  [28] =
    {field_nodeSeparation, 3},
    {field_rankSeparation, 2},
    {field_value, 1},
  [31] =
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
  [23] = 23,
  [24] = 14,
  [25] = 7,
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
  [129] = 89,
  [130] = 35,
  [131] = 82,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 35,
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
  [153] = 137,
  [154] = 154,
  [155] = 155,
  [156] = 155,
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
  [169] = 155,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 137,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(173);
      ADVANCE_MAP(
        '!', 65,
        '"', 171,
        '#', 170,
        '*', 183,
        '-', 12,
        '.', 182,
        '=', 185,
        'a', 154,
        'b', 139,
        'c', 105,
        'd', 38,
        'e', 82,
        'f', 78,
        'h', 75,
        'i', 104,
        'l', 121,
        'm', 115,
        'p', 46,
        'r', 79,
        's', 27,
        't', 13,
        'v', 68,
        'w', 107,
        '{', 175,
        '}', 176,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(187);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '*') ADVANCE(184);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '/') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(187);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '/') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(192);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(171);
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '=') ADVANCE(185);
      if (lookahead == '{') ADVANCE(175);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(171);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '}') ADVANCE(176);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '}') ADVANCE(176);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(191);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(184);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(186);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(214);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(47);
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
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'y') ADVANCE(97);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(146);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(201);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(156);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 77:
      if (lookahead == 'k') ADVANCE(135);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(197);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 160:
      if (lookahead == 'w') ADVANCE(131);
      END_STATE();
    case 161:
      if (lookahead == 'w') ADVANCE(22);
      END_STATE();
    case 162:
      if (lookahead == 'x') ADVANCE(145);
      END_STATE();
    case 163:
      if (lookahead == 'y') ADVANCE(86);
      END_STATE();
    case 164:
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 165:
      if (lookahead == 'y') ADVANCE(138);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 171:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(6);
      END_STATE();
    case 172:
      if (eof) ADVANCE(173);
      ADVANCE_MAP(
        '!', 65,
        '#', 191,
        '/', 8,
        'a', 154,
        'c', 112,
        'd', 38,
        'e', 82,
        'i', 104,
        'm', 115,
        's', 28,
        'v', 68,
        'w', 107,
        '}', 176,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_workspace);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_wildcard_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_color_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_color_token2);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_BANGidentifiers);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_hierarchical);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_flat);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_softwaresystem);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_container);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_person);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == 's') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_configuration);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_scope);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_views);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_systemcontext);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_exclude);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_autolayout);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_lr);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_rl);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_tb);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_bt);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_dynamic);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_element);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 172},
  [2] = {.lex_state = 172},
  [3] = {.lex_state = 172},
  [4] = {.lex_state = 172},
  [5] = {.lex_state = 172},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 172},
  [9] = {.lex_state = 172},
  [10] = {.lex_state = 172},
  [11] = {.lex_state = 172},
  [12] = {.lex_state = 172},
  [13] = {.lex_state = 172},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 172},
  [16] = {.lex_state = 172},
  [17] = {.lex_state = 172},
  [18] = {.lex_state = 172},
  [19] = {.lex_state = 172},
  [20] = {.lex_state = 172},
  [21] = {.lex_state = 172},
  [22] = {.lex_state = 172},
  [23] = {.lex_state = 172},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 172},
  [27] = {.lex_state = 172},
  [28] = {.lex_state = 172},
  [29] = {.lex_state = 172},
  [30] = {.lex_state = 172},
  [31] = {.lex_state = 172},
  [32] = {.lex_state = 172},
  [33] = {.lex_state = 172},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 172},
  [50] = {.lex_state = 172},
  [51] = {.lex_state = 172},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 172},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 172},
  [57] = {.lex_state = 172},
  [58] = {.lex_state = 172},
  [59] = {.lex_state = 172},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 172},
  [62] = {.lex_state = 172},
  [63] = {.lex_state = 172},
  [64] = {.lex_state = 172},
  [65] = {.lex_state = 172},
  [66] = {.lex_state = 172},
  [67] = {.lex_state = 172},
  [68] = {.lex_state = 172},
  [69] = {.lex_state = 172},
  [70] = {.lex_state = 172},
  [71] = {.lex_state = 172},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 172},
  [74] = {.lex_state = 172},
  [75] = {.lex_state = 172},
  [76] = {.lex_state = 172},
  [77] = {.lex_state = 172},
  [78] = {.lex_state = 172},
  [79] = {.lex_state = 172},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 172},
  [83] = {.lex_state = 172},
  [84] = {.lex_state = 172},
  [85] = {.lex_state = 172},
  [86] = {.lex_state = 172},
  [87] = {.lex_state = 172},
  [88] = {.lex_state = 172},
  [89] = {.lex_state = 172},
  [90] = {.lex_state = 172},
  [91] = {.lex_state = 172},
  [92] = {.lex_state = 172},
  [93] = {.lex_state = 172},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 172},
  [96] = {.lex_state = 172},
  [97] = {.lex_state = 172},
  [98] = {.lex_state = 172},
  [99] = {.lex_state = 172},
  [100] = {.lex_state = 172},
  [101] = {.lex_state = 172},
  [102] = {.lex_state = 172},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 172},
  [105] = {.lex_state = 172},
  [106] = {.lex_state = 172},
  [107] = {.lex_state = 172},
  [108] = {.lex_state = 172},
  [109] = {.lex_state = 172},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 172},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 172},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 11},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 172},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 172},
  [143] = {.lex_state = 172},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 172},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 172},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 11},
  [151] = {.lex_state = 172},
  [152] = {.lex_state = 172},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 172},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 1},
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
    [anon_sym_component] = ACTIONS(1),
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
    [sym_dsl] = STATE(184),
    [sym_workspace_declaration] = STATE(114),
    [aux_sym_dsl_repeat1] = STATE(114),
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
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(51), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [33] = 9,
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
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(16), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(51), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [66] = 9,
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
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(11), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(51), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [99] = 9,
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
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(2), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(51), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [132] = 9,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      sym__simple_identifier,
    ACTIONS(32), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_tag,
    ACTIONS(38), 1,
      anon_sym_tags,
    STATE(133), 1,
      sym_identifier,
    STATE(164), 1,
      sym_relation_identifier,
    STATE(178), 1,
      sym_dotted_identifier,
    STATE(6), 6,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [165] = 9,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      sym__simple_identifier,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_tag,
    ACTIONS(49), 1,
      anon_sym_tags,
    STATE(133), 1,
      sym_identifier,
    STATE(164), 1,
      sym_relation_identifier,
    STATE(178), 1,
      sym_dotted_identifier,
    STATE(6), 6,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
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
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(51), 5,
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
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(8), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(51), 5,
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
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(18), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(51), 5,
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
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(51), 5,
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
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(51), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [363] = 9,
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
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(51), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [396] = 9,
    ACTIONS(43), 1,
      sym__simple_identifier,
    ACTIONS(47), 1,
      anon_sym_tag,
    ACTIONS(49), 1,
      anon_sym_tags,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      sym_comment,
    STATE(133), 1,
      sym_identifier,
    STATE(164), 1,
      sym_relation_identifier,
    STATE(178), 1,
      sym_dotted_identifier,
    STATE(7), 6,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [429] = 9,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_include,
    ACTIONS(75), 1,
      anon_sym_exclude,
    ACTIONS(78), 1,
      anon_sym_autolayout,
    ACTIONS(81), 1,
      anon_sym_default,
    ACTIONS(84), 1,
      anon_sym_description,
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(51), 5,
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
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(51), 5,
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
    STATE(22), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(51), 5,
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
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(51), 5,
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
    STATE(21), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(51), 5,
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
    STATE(23), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(51), 5,
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
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(51), 5,
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
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(51), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [693] = 9,
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
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(15), 2,
      sym_view_property_statement,
      aux_sym_system_context_view_declaration_repeat1,
    STATE(51), 5,
      sym_include_statement,
      sym_exclude_statement,
      sym_autolayout_statement,
      sym_default_statement,
      sym_description_statement,
  [726] = 9,
    ACTIONS(43), 1,
      sym__simple_identifier,
    ACTIONS(47), 1,
      anon_sym_tag,
    ACTIONS(49), 1,
      anon_sym_tags,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      sym_comment,
    STATE(133), 1,
      sym_identifier,
    STATE(164), 1,
      sym_relation_identifier,
    STATE(178), 1,
      sym_dotted_identifier,
    STATE(25), 6,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
  [759] = 9,
    ACTIONS(43), 1,
      sym__simple_identifier,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_tag,
    ACTIONS(49), 1,
      anon_sym_tags,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      sym_identifier,
    STATE(164), 1,
      sym_relation_identifier,
    STATE(178), 1,
      sym_dotted_identifier,
    STATE(6), 6,
      sym__model_item_statement,
      sym_variable_declaration,
      sym_relation_statement,
      sym_tag_declaration,
      sym_tags_declaration,
      aux_sym__model_children_repeat1,
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
    STATE(28), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(86), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [821] = 8,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_container,
    ACTIONS(129), 1,
      anon_sym_systemcontext,
    ACTIONS(132), 1,
      anon_sym_dynamic,
    ACTIONS(135), 1,
      anon_sym_styles,
    STATE(27), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(92), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [850] = 8,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    ACTIONS(140), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_BANGidentifiers,
    ACTIONS(146), 1,
      anon_sym_model,
    ACTIONS(149), 1,
      anon_sym_configuration,
    ACTIONS(152), 1,
      anon_sym_views,
    STATE(28), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(86), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [879] = 8,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_container,
    ACTIONS(161), 1,
      anon_sym_systemcontext,
    ACTIONS(163), 1,
      anon_sym_dynamic,
    ACTIONS(165), 1,
      anon_sym_styles,
    STATE(30), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(92), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [908] = 8,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_container,
    ACTIONS(161), 1,
      anon_sym_systemcontext,
    ACTIONS(163), 1,
      anon_sym_dynamic,
    ACTIONS(165), 1,
      anon_sym_styles,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(27), 2,
      sym_views_item_statement,
      aux_sym_views_declaration_repeat1,
    STATE(92), 4,
      sym_system_context_view_declaration,
      sym_container_view_declaration,
      sym_dynamic_view_declaration,
      sym_styles_declaration,
  [937] = 8,
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
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(86), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [966] = 8,
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
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(31), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(86), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [995] = 8,
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
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_workspace_item_statement,
      aux_sym_workspace_declaration_repeat1,
    STATE(86), 4,
      sym_identifiers_statement,
      sym_model_declaration,
      sym_configuration_declaration,
      sym_views_declaration,
  [1024] = 6,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      sym_string,
    STATE(42), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(117), 1,
      sym__model_children,
    ACTIONS(175), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(179), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1046] = 2,
    ACTIONS(183), 1,
      aux_sym_color_token1,
    ACTIONS(181), 8,
      anon_sym_LBRACE,
      sym_number,
      sym_string,
      sym__simple_identifier,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      aux_sym_color_token2,
  [1060] = 6,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      sym_string,
    STATE(48), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(127), 1,
      sym__model_children,
    ACTIONS(185), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(189), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1082] = 6,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      sym_string,
    STATE(48), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(126), 1,
      sym__model_children,
    ACTIONS(191), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(193), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1104] = 6,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      sym_string,
    STATE(43), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(120), 1,
      sym__model_children,
    ACTIONS(195), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(199), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1126] = 5,
    ACTIONS(201), 1,
      anon_sym_softwaresystem,
    ACTIONS(203), 1,
      anon_sym_container,
    ACTIONS(205), 1,
      anon_sym_component,
    ACTIONS(207), 1,
      anon_sym_person,
    STATE(116), 5,
      sym__item_declaration,
      sym_software_system_declaration,
      sym_container_declaration,
      sym_component_declaration,
      sym_person_declaration,
  [1146] = 6,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(211), 1,
      sym_string,
    STATE(37), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(118), 1,
      sym__model_children,
    ACTIONS(209), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(213), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1168] = 6,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      sym_string,
    STATE(36), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(119), 1,
      sym__model_children,
    ACTIONS(215), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(219), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1190] = 6,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      sym_string,
    STATE(48), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(125), 1,
      sym__model_children,
    ACTIONS(221), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(223), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1212] = 6,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      sym_string,
    STATE(48), 1,
      aux_sym_software_system_declaration_repeat1,
    STATE(128), 1,
      sym__model_children,
    ACTIONS(225), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(227), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1234] = 5,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      sym_string,
    STATE(111), 1,
      sym__model_children,
    ACTIONS(229), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(233), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1253] = 5,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(237), 1,
      sym_string,
    STATE(110), 1,
      sym__model_children,
    ACTIONS(235), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(239), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1272] = 5,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(243), 1,
      sym_string,
    STATE(112), 1,
      sym__model_children,
    ACTIONS(241), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(245), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1291] = 5,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(249), 1,
      sym_string,
    STATE(132), 1,
      sym__model_children,
    ACTIONS(247), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(251), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1310] = 4,
    ACTIONS(255), 1,
      sym_string,
    STATE(48), 1,
      aux_sym_software_system_declaration_repeat1,
    ACTIONS(253), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(258), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1327] = 1,
    ACTIONS(260), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1337] = 1,
    ACTIONS(262), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1347] = 1,
    ACTIONS(264), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1357] = 6,
    ACTIONS(266), 1,
      sym__simple_identifier,
    ACTIONS(268), 1,
      sym_wildcard_identifier,
    ACTIONS(270), 1,
      sym__newline,
    ACTIONS(272), 1,
      sym_comment,
    STATE(113), 1,
      sym_identifier,
    STATE(55), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1377] = 1,
    ACTIONS(274), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1387] = 4,
    ACTIONS(187), 1,
      sym_string,
    STATE(48), 1,
      aux_sym_software_system_declaration_repeat1,
    ACTIONS(276), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(278), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [1403] = 6,
    ACTIONS(280), 1,
      sym__simple_identifier,
    ACTIONS(283), 1,
      sym_wildcard_identifier,
    ACTIONS(286), 1,
      sym__newline,
    ACTIONS(288), 1,
      sym_comment,
    STATE(113), 1,
      sym_identifier,
    STATE(55), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [1423] = 1,
    ACTIONS(290), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1433] = 1,
    ACTIONS(292), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1443] = 1,
    ACTIONS(294), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1453] = 1,
    ACTIONS(296), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1463] = 5,
    ACTIONS(300), 1,
      sym__simple_identifier,
    ACTIONS(302), 1,
      aux_sym_color_token1,
    ACTIONS(304), 1,
      aux_sym_color_token2,
    ACTIONS(298), 2,
      sym_number,
      sym_string,
    STATE(172), 2,
      sym_identifier,
      sym_color,
  [1481] = 1,
    ACTIONS(306), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1491] = 1,
    ACTIONS(308), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1501] = 1,
    ACTIONS(310), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1511] = 1,
    ACTIONS(312), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1521] = 1,
    ACTIONS(314), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1531] = 1,
    ACTIONS(316), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1541] = 1,
    ACTIONS(318), 7,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_include,
      anon_sym_exclude,
      anon_sym_autolayout,
      anon_sym_default,
      anon_sym_description,
  [1551] = 1,
    ACTIONS(320), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1560] = 1,
    ACTIONS(322), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1569] = 1,
    ACTIONS(324), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1578] = 1,
    ACTIONS(326), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1587] = 5,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
    ACTIONS(330), 1,
      sym__simple_identifier,
    ACTIONS(332), 1,
      sym_comment,
    STATE(60), 1,
      sym_identifier,
    STATE(94), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1604] = 1,
    ACTIONS(334), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1613] = 5,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    ACTIONS(338), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_scope,
    STATE(143), 1,
      sym_scope_declaration,
    STATE(98), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1630] = 1,
    ACTIONS(342), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1639] = 1,
    ACTIONS(344), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1648] = 1,
    ACTIONS(346), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1657] = 1,
    ACTIONS(348), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1666] = 1,
    ACTIONS(350), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1675] = 5,
    ACTIONS(352), 1,
      sym__simple_identifier,
    ACTIONS(355), 1,
      sym__newline,
    ACTIONS(357), 1,
      sym_comment,
    STATE(136), 1,
      sym_identifier,
    STATE(80), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [1692] = 5,
    ACTIONS(359), 1,
      sym__simple_identifier,
    ACTIONS(361), 1,
      sym__newline,
    ACTIONS(363), 1,
      sym_comment,
    STATE(136), 1,
      sym_identifier,
    STATE(80), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [1709] = 1,
    ACTIONS(365), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1718] = 1,
    ACTIONS(367), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1727] = 1,
    ACTIONS(369), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1736] = 1,
    ACTIONS(371), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1745] = 1,
    ACTIONS(373), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1754] = 5,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_element,
    STATE(142), 1,
      sym_element_declaration,
    STATE(87), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [1771] = 1,
    ACTIONS(383), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1780] = 1,
    ACTIONS(385), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1789] = 1,
    ACTIONS(387), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1798] = 1,
    ACTIONS(389), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1807] = 1,
    ACTIONS(391), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1816] = 1,
    ACTIONS(393), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1825] = 5,
    ACTIONS(330), 1,
      sym__simple_identifier,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    ACTIONS(397), 1,
      sym_comment,
    STATE(60), 1,
      sym_identifier,
    STATE(103), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1842] = 1,
    ACTIONS(399), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1851] = 1,
    ACTIONS(401), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1860] = 5,
    ACTIONS(338), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_scope,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    STATE(143), 1,
      sym_scope_declaration,
    STATE(74), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1877] = 5,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    ACTIONS(407), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_scope,
    STATE(143), 1,
      sym_scope_declaration,
    STATE(98), 2,
      sym_configuration_item_statement,
      aux_sym_configuration_declaration_repeat1,
  [1894] = 1,
    ACTIONS(413), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1903] = 1,
    ACTIONS(415), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1912] = 1,
    ACTIONS(417), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1921] = 1,
    ACTIONS(419), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1930] = 5,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    ACTIONS(423), 1,
      sym__simple_identifier,
    ACTIONS(426), 1,
      sym_comment,
    STATE(60), 1,
      sym_identifier,
    STATE(103), 2,
      sym_element_property,
      aux_sym_element_declaration_repeat1,
  [1947] = 1,
    ACTIONS(429), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1956] = 5,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
    ACTIONS(433), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_element,
    STATE(142), 1,
      sym_element_declaration,
    STATE(108), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [1973] = 1,
    ACTIONS(437), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_BANGidentifiers,
      anon_sym_model,
      anon_sym_configuration,
      anon_sym_views,
  [1982] = 1,
    ACTIONS(439), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [1991] = 5,
    ACTIONS(433), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_element,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    STATE(142), 1,
      sym_element_declaration,
    STATE(87), 2,
      sym_style_item_statement,
      aux_sym_styles_declaration_repeat1,
  [2008] = 1,
    ACTIONS(443), 6,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_container,
      anon_sym_systemcontext,
      anon_sym_dynamic,
      anon_sym_styles,
  [2017] = 2,
    ACTIONS(445), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(447), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2027] = 2,
    ACTIONS(449), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(451), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2037] = 2,
    ACTIONS(453), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(455), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2047] = 3,
    ACTIONS(459), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      sym__newline,
    ACTIONS(457), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [2059] = 4,
    ACTIONS(3), 1,
      anon_sym_workspace,
    ACTIONS(463), 1,
      ts_builtin_sym_end,
    ACTIONS(465), 1,
      sym_comment,
    STATE(121), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [2073] = 2,
    ACTIONS(467), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(469), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2083] = 2,
    ACTIONS(471), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(473), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2093] = 2,
    ACTIONS(475), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(477), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2103] = 2,
    ACTIONS(479), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(481), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2113] = 2,
    ACTIONS(483), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(485), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2123] = 2,
    ACTIONS(487), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(489), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2133] = 4,
    ACTIONS(491), 1,
      ts_builtin_sym_end,
    ACTIONS(493), 1,
      anon_sym_workspace,
    ACTIONS(496), 1,
      sym_comment,
    STATE(121), 2,
      sym_workspace_declaration,
      aux_sym_dsl_repeat1,
  [2147] = 2,
    ACTIONS(499), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(501), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2157] = 4,
    ACTIONS(266), 1,
      sym__simple_identifier,
    ACTIONS(503), 1,
      sym_wildcard_identifier,
    STATE(113), 1,
      sym_identifier,
    STATE(52), 2,
      sym_dotted_identifier,
      aux_sym_include_statement_repeat1,
  [2171] = 2,
    STATE(141), 1,
      sym_autolayout_value,
    ACTIONS(505), 4,
      anon_sym_lr,
      anon_sym_rl,
      anon_sym_tb,
      anon_sym_bt,
  [2181] = 2,
    ACTIONS(507), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(509), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2191] = 2,
    ACTIONS(511), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(513), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2201] = 2,
    ACTIONS(515), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(517), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2211] = 2,
    ACTIONS(519), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(521), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2221] = 2,
    ACTIONS(385), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(523), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2231] = 2,
    ACTIONS(181), 1,
      sym__newline,
    ACTIONS(183), 4,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_wildcard_identifier,
      sym_comment,
  [2241] = 2,
    ACTIONS(365), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(525), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2251] = 2,
    ACTIONS(527), 2,
      anon_sym_RBRACE,
      sym_comment,
    ACTIONS(529), 3,
      sym__simple_identifier,
      anon_sym_tag,
      anon_sym_tags,
  [2261] = 4,
    ACTIONS(531), 1,
      anon_sym_DOT,
    ACTIONS(533), 1,
      anon_sym_EQ,
    ACTIONS(535), 1,
      anon_sym_DASH_GT,
    STATE(39), 1,
      sym__assignment_operator,
  [2274] = 3,
    ACTIONS(537), 1,
      sym__simple_identifier,
    STATE(136), 1,
      sym_identifier,
    STATE(81), 2,
      sym_dotted_identifier,
      aux_sym_exclude_statement_repeat1,
  [2285] = 4,
    ACTIONS(330), 1,
      sym__simple_identifier,
    STATE(160), 1,
      sym_identifier,
    STATE(178), 1,
      sym_dotted_identifier,
    STATE(187), 1,
      sym_relation_identifier,
  [2298] = 3,
    ACTIONS(541), 1,
      anon_sym_DOT,
    ACTIONS(543), 1,
      sym__newline,
    ACTIONS(539), 2,
      sym__simple_identifier,
      sym_comment,
  [2309] = 2,
    ACTIONS(547), 1,
      sym__newline,
    ACTIONS(545), 3,
      sym__simple_identifier,
      sym_wildcard_identifier,
      sym_comment,
  [2318] = 2,
    ACTIONS(181), 1,
      sym__newline,
    ACTIONS(183), 3,
      sym__simple_identifier,
      anon_sym_DOT,
      sym_comment,
  [2327] = 2,
    ACTIONS(551), 1,
      sym__newline,
    ACTIONS(549), 2,
      sym_number,
      sym_comment,
  [2335] = 1,
    ACTIONS(553), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_element,
  [2341] = 3,
    ACTIONS(555), 1,
      sym_number,
    ACTIONS(557), 1,
      sym__newline,
    ACTIONS(559), 1,
      sym_comment,
  [2351] = 1,
    ACTIONS(561), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_element,
  [2357] = 1,
    ACTIONS(563), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_scope,
  [2363] = 3,
    ACTIONS(565), 1,
      sym_number,
    ACTIONS(567), 1,
      sym__newline,
    ACTIONS(569), 1,
      sym_comment,
  [2373] = 1,
    ACTIONS(571), 3,
      ts_builtin_sym_end,
      anon_sym_workspace,
      sym_comment,
  [2379] = 2,
    STATE(70), 1,
      sym_identifiers_value,
    ACTIONS(573), 2,
      anon_sym_hierarchical,
      anon_sym_flat,
  [2387] = 1,
    ACTIONS(575), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [2393] = 1,
    ACTIONS(577), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_element,
  [2399] = 1,
    ACTIONS(579), 3,
      anon_sym_RBRACE,
      sym__simple_identifier,
      sym_comment,
  [2405] = 3,
    ACTIONS(43), 1,
      sym__simple_identifier,
    ACTIONS(581), 1,
      sym_wildcard_identifier,
    STATE(159), 1,
      sym_identifier,
  [2415] = 1,
    ACTIONS(583), 3,
      ts_builtin_sym_end,
      anon_sym_workspace,
      sym_comment,
  [2421] = 1,
    ACTIONS(585), 3,
      ts_builtin_sym_end,
      anon_sym_workspace,
      sym_comment,
  [2427] = 2,
    ACTIONS(547), 1,
      sym__newline,
    ACTIONS(545), 2,
      sym__simple_identifier,
      sym_comment,
  [2435] = 1,
    ACTIONS(587), 3,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_scope,
  [2441] = 2,
    ACTIONS(300), 1,
      sym__simple_identifier,
    STATE(137), 1,
      sym_identifier,
  [2448] = 2,
    ACTIONS(537), 1,
      sym__simple_identifier,
    STATE(153), 1,
      sym_identifier,
  [2455] = 2,
    ACTIONS(330), 1,
      sym__simple_identifier,
    STATE(162), 1,
      sym_identifier,
  [2462] = 2,
    ACTIONS(330), 1,
      sym__simple_identifier,
    STATE(176), 1,
      sym_identifier,
  [2469] = 2,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    ACTIONS(591), 1,
      sym_string,
  [2476] = 2,
    ACTIONS(531), 1,
      anon_sym_DOT,
    ACTIONS(535), 1,
      sym_string,
  [2483] = 2,
    ACTIONS(593), 1,
      sym__newline,
    ACTIONS(595), 1,
      sym_comment,
  [2490] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(599), 1,
      sym_string,
  [2497] = 2,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    ACTIONS(603), 1,
      sym_string,
  [2504] = 2,
    ACTIONS(605), 1,
      anon_sym_DASH_GT,
    STATE(135), 1,
      sym__relation_operator,
  [2511] = 2,
    ACTIONS(607), 1,
      anon_sym_EQ,
    STATE(196), 1,
      sym__assignment_operator,
  [2518] = 2,
    ACTIONS(609), 1,
      anon_sym_LBRACE,
    ACTIONS(611), 1,
      sym_string,
  [2525] = 2,
    ACTIONS(613), 1,
      sym__newline,
    ACTIONS(615), 1,
      sym_comment,
  [2532] = 2,
    ACTIONS(617), 1,
      sym_string,
    STATE(54), 1,
      aux_sym_software_system_declaration_repeat1,
  [2539] = 2,
    ACTIONS(330), 1,
      sym__simple_identifier,
    STATE(179), 1,
      sym_identifier,
  [2546] = 2,
    ACTIONS(619), 1,
      anon_sym_LBRACE,
    ACTIONS(621), 1,
      sym_string,
  [2553] = 2,
    ACTIONS(623), 1,
      sym__newline,
    ACTIONS(625), 1,
      sym_comment,
  [2560] = 2,
    ACTIONS(627), 1,
      sym__newline,
    ACTIONS(629), 1,
      sym_comment,
  [2567] = 2,
    ACTIONS(631), 1,
      sym__newline,
    ACTIONS(633), 1,
      sym_comment,
  [2574] = 2,
    ACTIONS(635), 1,
      anon_sym_LBRACE,
    ACTIONS(637), 1,
      sym_string,
  [2581] = 2,
    ACTIONS(639), 1,
      anon_sym_EQ,
    STATE(168), 1,
      sym__assignment_operator,
  [2588] = 2,
    ACTIONS(641), 1,
      anon_sym_LBRACE,
    ACTIONS(643), 1,
      sym_string,
  [2595] = 2,
    ACTIONS(645), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym__model_children,
  [2602] = 1,
    ACTIONS(535), 2,
      sym_string,
      anon_sym_DASH_GT,
  [2607] = 1,
    ACTIONS(547), 2,
      sym_string,
      anon_sym_DASH_GT,
  [2612] = 1,
    ACTIONS(647), 1,
      sym__newline,
  [2616] = 1,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
  [2620] = 1,
    ACTIONS(651), 1,
      anon_sym_LBRACE,
  [2624] = 1,
    ACTIONS(653), 1,
      anon_sym_LBRACE,
  [2628] = 1,
    ACTIONS(655), 1,
      ts_builtin_sym_end,
  [2632] = 1,
    ACTIONS(657), 1,
      sym_string,
  [2636] = 1,
    ACTIONS(659), 1,
      sym_string,
  [2640] = 1,
    ACTIONS(661), 1,
      sym_string,
  [2644] = 1,
    ACTIONS(663), 1,
      sym__newline,
  [2648] = 1,
    ACTIONS(665), 1,
      anon_sym_LBRACE,
  [2652] = 1,
    ACTIONS(667), 1,
      anon_sym_LBRACE,
  [2656] = 1,
    ACTIONS(669), 1,
      sym__newline,
  [2660] = 1,
    ACTIONS(671), 1,
      anon_sym_LBRACE,
  [2664] = 1,
    ACTIONS(673), 1,
      sym__newline,
  [2668] = 1,
    ACTIONS(675), 1,
      sym__newline,
  [2672] = 1,
    ACTIONS(677), 1,
      sym_string,
  [2676] = 1,
    ACTIONS(679), 1,
      sym_string,
  [2680] = 1,
    ACTIONS(681), 1,
      sym__newline,
  [2684] = 1,
    ACTIONS(683), 1,
      sym_string,
  [2688] = 1,
    ACTIONS(685), 1,
      anon_sym_LBRACE,
  [2692] = 1,
    ACTIONS(687), 1,
      anon_sym_LBRACE,
  [2696] = 1,
    ACTIONS(689), 1,
      sym__newline,
  [2700] = 1,
    ACTIONS(691), 1,
      sym__simple_identifier,
  [2704] = 1,
    ACTIONS(693), 1,
      sym_string,
  [2708] = 1,
    ACTIONS(695), 1,
      sym_string,
  [2712] = 1,
    ACTIONS(697), 1,
      sym_string,
  [2716] = 1,
    ACTIONS(699), 1,
      sym__newline,
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
  [SMALL_STATE(35)] = 1046,
  [SMALL_STATE(36)] = 1060,
  [SMALL_STATE(37)] = 1082,
  [SMALL_STATE(38)] = 1104,
  [SMALL_STATE(39)] = 1126,
  [SMALL_STATE(40)] = 1146,
  [SMALL_STATE(41)] = 1168,
  [SMALL_STATE(42)] = 1190,
  [SMALL_STATE(43)] = 1212,
  [SMALL_STATE(44)] = 1234,
  [SMALL_STATE(45)] = 1253,
  [SMALL_STATE(46)] = 1272,
  [SMALL_STATE(47)] = 1291,
  [SMALL_STATE(48)] = 1310,
  [SMALL_STATE(49)] = 1327,
  [SMALL_STATE(50)] = 1337,
  [SMALL_STATE(51)] = 1347,
  [SMALL_STATE(52)] = 1357,
  [SMALL_STATE(53)] = 1377,
  [SMALL_STATE(54)] = 1387,
  [SMALL_STATE(55)] = 1403,
  [SMALL_STATE(56)] = 1423,
  [SMALL_STATE(57)] = 1433,
  [SMALL_STATE(58)] = 1443,
  [SMALL_STATE(59)] = 1453,
  [SMALL_STATE(60)] = 1463,
  [SMALL_STATE(61)] = 1481,
  [SMALL_STATE(62)] = 1491,
  [SMALL_STATE(63)] = 1501,
  [SMALL_STATE(64)] = 1511,
  [SMALL_STATE(65)] = 1521,
  [SMALL_STATE(66)] = 1531,
  [SMALL_STATE(67)] = 1541,
  [SMALL_STATE(68)] = 1551,
  [SMALL_STATE(69)] = 1560,
  [SMALL_STATE(70)] = 1569,
  [SMALL_STATE(71)] = 1578,
  [SMALL_STATE(72)] = 1587,
  [SMALL_STATE(73)] = 1604,
  [SMALL_STATE(74)] = 1613,
  [SMALL_STATE(75)] = 1630,
  [SMALL_STATE(76)] = 1639,
  [SMALL_STATE(77)] = 1648,
  [SMALL_STATE(78)] = 1657,
  [SMALL_STATE(79)] = 1666,
  [SMALL_STATE(80)] = 1675,
  [SMALL_STATE(81)] = 1692,
  [SMALL_STATE(82)] = 1709,
  [SMALL_STATE(83)] = 1718,
  [SMALL_STATE(84)] = 1727,
  [SMALL_STATE(85)] = 1736,
  [SMALL_STATE(86)] = 1745,
  [SMALL_STATE(87)] = 1754,
  [SMALL_STATE(88)] = 1771,
  [SMALL_STATE(89)] = 1780,
  [SMALL_STATE(90)] = 1789,
  [SMALL_STATE(91)] = 1798,
  [SMALL_STATE(92)] = 1807,
  [SMALL_STATE(93)] = 1816,
  [SMALL_STATE(94)] = 1825,
  [SMALL_STATE(95)] = 1842,
  [SMALL_STATE(96)] = 1851,
  [SMALL_STATE(97)] = 1860,
  [SMALL_STATE(98)] = 1877,
  [SMALL_STATE(99)] = 1894,
  [SMALL_STATE(100)] = 1903,
  [SMALL_STATE(101)] = 1912,
  [SMALL_STATE(102)] = 1921,
  [SMALL_STATE(103)] = 1930,
  [SMALL_STATE(104)] = 1947,
  [SMALL_STATE(105)] = 1956,
  [SMALL_STATE(106)] = 1973,
  [SMALL_STATE(107)] = 1982,
  [SMALL_STATE(108)] = 1991,
  [SMALL_STATE(109)] = 2008,
  [SMALL_STATE(110)] = 2017,
  [SMALL_STATE(111)] = 2027,
  [SMALL_STATE(112)] = 2037,
  [SMALL_STATE(113)] = 2047,
  [SMALL_STATE(114)] = 2059,
  [SMALL_STATE(115)] = 2073,
  [SMALL_STATE(116)] = 2083,
  [SMALL_STATE(117)] = 2093,
  [SMALL_STATE(118)] = 2103,
  [SMALL_STATE(119)] = 2113,
  [SMALL_STATE(120)] = 2123,
  [SMALL_STATE(121)] = 2133,
  [SMALL_STATE(122)] = 2147,
  [SMALL_STATE(123)] = 2157,
  [SMALL_STATE(124)] = 2171,
  [SMALL_STATE(125)] = 2181,
  [SMALL_STATE(126)] = 2191,
  [SMALL_STATE(127)] = 2201,
  [SMALL_STATE(128)] = 2211,
  [SMALL_STATE(129)] = 2221,
  [SMALL_STATE(130)] = 2231,
  [SMALL_STATE(131)] = 2241,
  [SMALL_STATE(132)] = 2251,
  [SMALL_STATE(133)] = 2261,
  [SMALL_STATE(134)] = 2274,
  [SMALL_STATE(135)] = 2285,
  [SMALL_STATE(136)] = 2298,
  [SMALL_STATE(137)] = 2309,
  [SMALL_STATE(138)] = 2318,
  [SMALL_STATE(139)] = 2327,
  [SMALL_STATE(140)] = 2335,
  [SMALL_STATE(141)] = 2341,
  [SMALL_STATE(142)] = 2351,
  [SMALL_STATE(143)] = 2357,
  [SMALL_STATE(144)] = 2363,
  [SMALL_STATE(145)] = 2373,
  [SMALL_STATE(146)] = 2379,
  [SMALL_STATE(147)] = 2387,
  [SMALL_STATE(148)] = 2393,
  [SMALL_STATE(149)] = 2399,
  [SMALL_STATE(150)] = 2405,
  [SMALL_STATE(151)] = 2415,
  [SMALL_STATE(152)] = 2421,
  [SMALL_STATE(153)] = 2427,
  [SMALL_STATE(154)] = 2435,
  [SMALL_STATE(155)] = 2441,
  [SMALL_STATE(156)] = 2448,
  [SMALL_STATE(157)] = 2455,
  [SMALL_STATE(158)] = 2462,
  [SMALL_STATE(159)] = 2469,
  [SMALL_STATE(160)] = 2476,
  [SMALL_STATE(161)] = 2483,
  [SMALL_STATE(162)] = 2490,
  [SMALL_STATE(163)] = 2497,
  [SMALL_STATE(164)] = 2504,
  [SMALL_STATE(165)] = 2511,
  [SMALL_STATE(166)] = 2518,
  [SMALL_STATE(167)] = 2525,
  [SMALL_STATE(168)] = 2532,
  [SMALL_STATE(169)] = 2539,
  [SMALL_STATE(170)] = 2546,
  [SMALL_STATE(171)] = 2553,
  [SMALL_STATE(172)] = 2560,
  [SMALL_STATE(173)] = 2567,
  [SMALL_STATE(174)] = 2574,
  [SMALL_STATE(175)] = 2581,
  [SMALL_STATE(176)] = 2588,
  [SMALL_STATE(177)] = 2595,
  [SMALL_STATE(178)] = 2602,
  [SMALL_STATE(179)] = 2607,
  [SMALL_STATE(180)] = 2612,
  [SMALL_STATE(181)] = 2616,
  [SMALL_STATE(182)] = 2620,
  [SMALL_STATE(183)] = 2624,
  [SMALL_STATE(184)] = 2628,
  [SMALL_STATE(185)] = 2632,
  [SMALL_STATE(186)] = 2636,
  [SMALL_STATE(187)] = 2640,
  [SMALL_STATE(188)] = 2644,
  [SMALL_STATE(189)] = 2648,
  [SMALL_STATE(190)] = 2652,
  [SMALL_STATE(191)] = 2656,
  [SMALL_STATE(192)] = 2660,
  [SMALL_STATE(193)] = 2664,
  [SMALL_STATE(194)] = 2668,
  [SMALL_STATE(195)] = 2672,
  [SMALL_STATE(196)] = 2676,
  [SMALL_STATE(197)] = 2680,
  [SMALL_STATE(198)] = 2684,
  [SMALL_STATE(199)] = 2688,
  [SMALL_STATE(200)] = 2692,
  [SMALL_STATE(201)] = 2696,
  [SMALL_STATE(202)] = 2700,
  [SMALL_STATE(203)] = 2704,
  [SMALL_STATE(204)] = 2708,
  [SMALL_STATE(205)] = 2712,
  [SMALL_STATE(206)] = 2716,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__model_children_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_context_view_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_views_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workspace_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 8),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 8),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 4, 0, 11),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 4, 0, 11),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 4, 0, 11),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 4, 0, 11),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 3, 0, 8),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 3, 0, 8),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 8),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 8),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, 0, 8),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 3, 0, 8),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 4, 0, 11),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 4, 0, 11),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 4, 0, 11),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 4, 0, 11),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 2, 0, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 2, 0, 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 2, 0, 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 2, 0, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 2, 0, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 2, 0, 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_software_system_declaration_repeat1, 2, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 14),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 6, 0, 15),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_property_statement, 1, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 2, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_declaration, 3, 0, 0),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 3, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 3, 0, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_statement, 3, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 3, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exclude_statement, 4, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 4, 0, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_statement, 4, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 15),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_statement, 5, 0, 14),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 9),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 10),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_statement, 2, 0, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_declaration, 2, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 4, 0, 6),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 3, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 4, 0, 7),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 4, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 3, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 4, 0, 6),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 3, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 6),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 9),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 6, 0, 12),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_item_statement, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_styles_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 5, 0, 7),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_children, 2, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 10),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 6, 0, 13),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_item_statement, 1, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifiers_value, 1, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 5, 0, 9),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_declaration, 4, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 6),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_view_declaration, 7, 0, 12),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 7, 0, 12),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_view_declaration, 7, 0, 13),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 5, 0, 9),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_views_declaration, 4, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_declaration, 3, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_context_view_declaration, 6, 0, 12),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 3, 0, 4),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 3, 0, 4),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 3, 0, 4),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 3, 0, 4),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 3, 0, 4),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_statement_repeat1, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsl, 1, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_declaration, 3, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_declaration, 3, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 4, 0, 8),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 4, 0, 8),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 4, 0, 8),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 4, 0, 8),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 4, 0, 8),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 4, 0, 8),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 4, 0, 8),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 4, 0, 8),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dsl_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_statement, 4, 0, 5),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 5, 0, 11),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 5, 0, 11),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_declaration, 5, 0, 11),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_declaration, 5, 0, 11),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_declaration, 5, 0, 11),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_declaration, 5, 0, 11),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_person_declaration, 5, 0, 11),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_person_declaration, 5, 0, 11),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 2, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_children, 3, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_software_system_declaration, 3, 0, 4),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_identifier, 1, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exclude_statement_repeat1, 1, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_identifier, 3, 0, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_identifier, 3, 0, 2),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolayout_value, 1, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 4, 0, 4),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_item_statement, 1, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration_item_statement, 1, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 6, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 4, 0, 16),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_declaration, 5, 0, 4),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_property, 3, 0, 16),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 5, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workspace_declaration, 4, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_declaration, 2, 0, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [655] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
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

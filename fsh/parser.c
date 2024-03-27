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
#define STATE_COUNT 684
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 204
#define ALIAS_COUNT 7
#define TOKEN_COUNT 85
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
  anon_sym_Alias = 1,
  anon_sym_COLON = 2,
  anon_sym_EQ = 3,
  anon_sym_Profile = 4,
  anon_sym_Extension = 5,
  anon_sym_Invariant = 6,
  anon_sym_Instance = 7,
  anon_sym_ValueSet = 8,
  anon_sym_CodeSystem = 9,
  anon_sym_Mapping = 10,
  anon_sym_Logical = 11,
  anon_sym_Resource = 12,
  anon_sym_RuleSet = 13,
  anon_sym_Description = 14,
  anon_sym_Expression = 15,
  anon_sym_Id = 16,
  anon_sym_InstanceOf = 17,
  anon_sym_Parent = 18,
  anon_sym_Severity = 19,
  anon_sym_Source = 20,
  anon_sym_Target = 21,
  anon_sym_Title = 22,
  anon_sym_Usage = 23,
  anon_sym_XPath = 24,
  anon_sym_STAR = 25,
  anon_sym_contentReference = 26,
  anon_sym_insert = 27,
  anon_sym_from = 28,
  anon_sym_LPAREN = 29,
  anon_sym_exactly = 30,
  anon_sym_RPAREN = 31,
  anon_sym_contains = 32,
  anon_sym_and = 33,
  anon_sym_obeys = 34,
  anon_sym_only = 35,
  anon_sym_or = 36,
  anon_sym_DASH_GT = 37,
  anon_sym_include = 38,
  anon_sym_exclude = 39,
  anon_sym_codes = 40,
  anon_sym_where = 41,
  anon_sym_system = 42,
  anon_sym_valueset = 43,
  anon_sym_true = 44,
  anon_sym_false = 45,
  anon_sym_POUND = 46,
  aux_sym_sequence_token1 = 47,
  aux_sym_sequence_token2 = 48,
  anon_sym_CARET = 49,
  anon_sym_MS = 50,
  anon_sym_SU = 51,
  anon_sym_TU = 52,
  anon_sym_N = 53,
  anon_sym_D = 54,
  aux_sym_cardinality_token1 = 55,
  anon_sym_DOT_DOT = 56,
  anon_sym_STAR2 = 57,
  anon_sym_DQUOTE = 58,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 59,
  sym_double_quote_string_fragment = 60,
  sym_escape_sequence = 61,
  sym_number = 62,
  sym_date = 63,
  sym_time = 64,
  anon_sym_T = 65,
  anon_sym_SQUOTE = 66,
  aux_sym_unit_token1 = 67,
  anon_sym_example = 68,
  anon_sym_preferred = 69,
  anon_sym_extensible = 70,
  anon_sym_required = 71,
  anon_sym_Reference = 72,
  anon_sym_Canonical = 73,
  anon_sym_PIPE = 74,
  anon_sym_named = 75,
  anon_sym_QMARK_BANG = 76,
  aux_sym_param_rule_set_params_token1 = 77,
  anon_sym_SLASH = 78,
  anon_sym_SLASH2 = 79,
  sym_regex_pattern = 80,
  anon_sym_SLASH_SLASH = 81,
  aux_sym_fsh_comment_token1 = 82,
  anon_sym_SLASH_STAR = 83,
  aux_sym_fsh_comment_token2 = 84,
  sym_doc = 85,
  sym_alias = 86,
  sym_profile = 87,
  sym_extension = 88,
  sym_invariant = 89,
  sym_instance = 90,
  sym_valueset = 91,
  sym_codesystem = 92,
  sym_mapping = 93,
  sym_logical = 94,
  sym_resource = 95,
  sym_rule_set = 96,
  sym_param_rule_set = 97,
  sym_sd_metadata = 98,
  sym_instance_metadata = 99,
  sym_invariant_metadata = 100,
  sym_vs_metadata = 101,
  sym_cs_metadata = 102,
  sym_mapping_metadata = 103,
  sym_description = 104,
  sym_expression = 105,
  sym_id = 106,
  sym_instance_of = 107,
  sym_parent = 108,
  sym_severity = 109,
  sym_source = 110,
  sym_target = 111,
  sym_title = 112,
  sym_usage = 113,
  sym_xpath = 114,
  sym_rule_set_rule = 115,
  sym_sd_rule = 116,
  sym_lr_rule = 117,
  sym_vs_rule = 118,
  sym_cs_rule = 119,
  sym_instance_rule = 120,
  sym_mapping_entity_rule = 121,
  sym_cardinality_rule = 122,
  sym_add_cre_element_rule = 123,
  sym_code_insert_rule = 124,
  sym_insert_rule = 125,
  sym_valueset_rule = 126,
  sym_fixed_value_rule = 127,
  sym_contains_rule = 128,
  sym_caret_value_rule = 129,
  sym_code_caret_value_rule = 130,
  sym_obeys_rule = 131,
  sym_path_rule = 132,
  sym_flag_rule = 133,
  sym_only_rule = 134,
  sym_mapping_rule = 135,
  sym_add_element_rule = 136,
  sym_vs_component = 137,
  sym_vs_concept_component = 138,
  sym_vs_filter_component = 139,
  sym_vs_component_from = 140,
  sym_vs_from_system = 141,
  sym_vs_from_valueset = 142,
  sym_vs_filter_list = 143,
  sym_vs_filter_definition = 144,
  sym_vs_filter_operator = 145,
  sym_vs_filter_value = 146,
  sym_code = 147,
  sym_concept = 148,
  sym_code_string = 149,
  sym_sequence = 150,
  sym_caret_path = 151,
  sym_name = 152,
  sym_cardinality = 153,
  sym_string = 154,
  sym_multiline_string = 155,
  sym_datetime = 156,
  sym_unit = 157,
  sym_quantity = 158,
  sym_ratio_part = 159,
  sym_ratio = 160,
  sym_bool = 161,
  sym_path = 162,
  sym_strength = 163,
  sym_reference = 164,
  sym_canonical = 165,
  sym_value = 166,
  sym_item = 167,
  sym_flag = 168,
  sym_target_type = 169,
  sym_param_rule_set_params = 170,
  sym_param_rule_set_reference = 171,
  sym_regex = 172,
  sym_fsh_comment = 173,
  aux_sym_doc_repeat1 = 174,
  aux_sym_profile_repeat1 = 175,
  aux_sym_profile_repeat2 = 176,
  aux_sym_invariant_repeat1 = 177,
  aux_sym_instance_repeat1 = 178,
  aux_sym_instance_repeat2 = 179,
  aux_sym_valueset_repeat1 = 180,
  aux_sym_valueset_repeat2 = 181,
  aux_sym_codesystem_repeat1 = 182,
  aux_sym_codesystem_repeat2 = 183,
  aux_sym_mapping_repeat1 = 184,
  aux_sym_mapping_repeat2 = 185,
  aux_sym_logical_repeat1 = 186,
  aux_sym_rule_set_repeat1 = 187,
  aux_sym_param_rule_set_repeat1 = 188,
  aux_sym_cardinality_rule_repeat1 = 189,
  aux_sym_code_insert_rule_repeat1 = 190,
  aux_sym_contains_rule_repeat1 = 191,
  aux_sym_code_caret_value_rule_repeat1 = 192,
  aux_sym_obeys_rule_repeat1 = 193,
  aux_sym_flag_rule_repeat1 = 194,
  aux_sym_only_rule_repeat1 = 195,
  aux_sym_vs_concept_component_repeat1 = 196,
  aux_sym_vs_filter_list_repeat1 = 197,
  aux_sym_sequence_repeat1 = 198,
  aux_sym_string_repeat1 = 199,
  aux_sym_unit_repeat1 = 200,
  aux_sym_reference_repeat1 = 201,
  aux_sym_canonical_repeat1 = 202,
  aux_sym_param_rule_set_params_repeat1 = 203,
  alias_sym_alias_name = 204,
  alias_sym_code_system = 205,
  alias_sym_code_value = 206,
  alias_sym_concept_string = 207,
  alias_sym_param_rule_set_content = 208,
  alias_sym_reference_type = 209,
  alias_sym_rule_set_reference = 210,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_Alias] = "Alias",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_Profile] = "Profile",
  [anon_sym_Extension] = "Extension",
  [anon_sym_Invariant] = "Invariant",
  [anon_sym_Instance] = "Instance",
  [anon_sym_ValueSet] = "ValueSet",
  [anon_sym_CodeSystem] = "CodeSystem",
  [anon_sym_Mapping] = "Mapping",
  [anon_sym_Logical] = "Logical",
  [anon_sym_Resource] = "Resource",
  [anon_sym_RuleSet] = "RuleSet",
  [anon_sym_Description] = "Description",
  [anon_sym_Expression] = "Expression",
  [anon_sym_Id] = "Id",
  [anon_sym_InstanceOf] = "InstanceOf",
  [anon_sym_Parent] = "Parent",
  [anon_sym_Severity] = "Severity",
  [anon_sym_Source] = "Source",
  [anon_sym_Target] = "Target",
  [anon_sym_Title] = "Title",
  [anon_sym_Usage] = "Usage",
  [anon_sym_XPath] = "XPath",
  [anon_sym_STAR] = "*",
  [anon_sym_contentReference] = "contentReference",
  [anon_sym_insert] = "insert",
  [anon_sym_from] = "from",
  [anon_sym_LPAREN] = "(",
  [anon_sym_exactly] = "exactly",
  [anon_sym_RPAREN] = ")",
  [anon_sym_contains] = "contains",
  [anon_sym_and] = "and",
  [anon_sym_obeys] = "obeys",
  [anon_sym_only] = "only",
  [anon_sym_or] = "or",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_include] = "include",
  [anon_sym_exclude] = "exclude",
  [anon_sym_codes] = "codes",
  [anon_sym_where] = "where",
  [anon_sym_system] = "system",
  [anon_sym_valueset] = "valueset",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_POUND] = "#",
  [aux_sym_sequence_token1] = "sequence_token1",
  [aux_sym_sequence_token2] = "url",
  [anon_sym_CARET] = "^",
  [anon_sym_MS] = "MS",
  [anon_sym_SU] = "SU",
  [anon_sym_TU] = "TU",
  [anon_sym_N] = "N",
  [anon_sym_D] = "D",
  [aux_sym_cardinality_token1] = "cardinality_token1",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_STAR2] = "*",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [sym_double_quote_string_fragment] = "double_quote_string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_date] = "date",
  [sym_time] = "time",
  [anon_sym_T] = "T",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_unit_token1] = "unit_token1",
  [anon_sym_example] = "strength_value",
  [anon_sym_preferred] = "strength_value",
  [anon_sym_extensible] = "strength_value",
  [anon_sym_required] = "strength_value",
  [anon_sym_Reference] = "Reference",
  [anon_sym_Canonical] = "Canonical",
  [anon_sym_PIPE] = "|",
  [anon_sym_named] = "named",
  [anon_sym_QMARK_BANG] = "\?!",
  [aux_sym_param_rule_set_params_token1] = "param_rule_set_params_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH2] = "/",
  [sym_regex_pattern] = "regex_pattern",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_fsh_comment_token1] = "fsh_comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_fsh_comment_token2] = "fsh_comment_token2",
  [sym_doc] = "doc",
  [sym_alias] = "alias",
  [sym_profile] = "profile",
  [sym_extension] = "extension",
  [sym_invariant] = "invariant",
  [sym_instance] = "instance",
  [sym_valueset] = "valueset",
  [sym_codesystem] = "codesystem",
  [sym_mapping] = "mapping",
  [sym_logical] = "logical",
  [sym_resource] = "resource",
  [sym_rule_set] = "rule_set",
  [sym_param_rule_set] = "param_rule_set",
  [sym_sd_metadata] = "sd_metadata",
  [sym_instance_metadata] = "instance_metadata",
  [sym_invariant_metadata] = "invariant_metadata",
  [sym_vs_metadata] = "vs_metadata",
  [sym_cs_metadata] = "cs_metadata",
  [sym_mapping_metadata] = "mapping_metadata",
  [sym_description] = "description",
  [sym_expression] = "expression",
  [sym_id] = "id",
  [sym_instance_of] = "instance_of",
  [sym_parent] = "parent",
  [sym_severity] = "severity",
  [sym_source] = "source",
  [sym_target] = "target",
  [sym_title] = "title",
  [sym_usage] = "usage",
  [sym_xpath] = "xpath",
  [sym_rule_set_rule] = "rule_set_rule",
  [sym_sd_rule] = "sd_rule",
  [sym_lr_rule] = "lr_rule",
  [sym_vs_rule] = "vs_rule",
  [sym_cs_rule] = "cs_rule",
  [sym_instance_rule] = "instance_rule",
  [sym_mapping_entity_rule] = "mapping_entity_rule",
  [sym_cardinality_rule] = "cardinality_rule",
  [sym_add_cre_element_rule] = "add_cre_element_rule",
  [sym_code_insert_rule] = "code_insert_rule",
  [sym_insert_rule] = "insert_rule",
  [sym_valueset_rule] = "valueset_rule",
  [sym_fixed_value_rule] = "fixed_value_rule",
  [sym_contains_rule] = "contains_rule",
  [sym_caret_value_rule] = "caret_value_rule",
  [sym_code_caret_value_rule] = "code_caret_value_rule",
  [sym_obeys_rule] = "obeys_rule",
  [sym_path_rule] = "path_rule",
  [sym_flag_rule] = "flag_rule",
  [sym_only_rule] = "only_rule",
  [sym_mapping_rule] = "mapping_rule",
  [sym_add_element_rule] = "add_element_rule",
  [sym_vs_component] = "vs_component",
  [sym_vs_concept_component] = "vs_concept_component",
  [sym_vs_filter_component] = "vs_filter_component",
  [sym_vs_component_from] = "vs_component_from",
  [sym_vs_from_system] = "vs_from_system",
  [sym_vs_from_valueset] = "vs_from_valueset",
  [sym_vs_filter_list] = "vs_filter_list",
  [sym_vs_filter_definition] = "vs_filter_definition",
  [sym_vs_filter_operator] = "vs_filter_operator",
  [sym_vs_filter_value] = "vs_filter_value",
  [sym_code] = "code",
  [sym_concept] = "concept",
  [sym_code_string] = "code_string",
  [sym_sequence] = "sequence",
  [sym_caret_path] = "caret_path",
  [sym_name] = "name",
  [sym_cardinality] = "cardinality",
  [sym_string] = "string",
  [sym_multiline_string] = "multiline_string",
  [sym_datetime] = "datetime",
  [sym_unit] = "unit",
  [sym_quantity] = "quantity",
  [sym_ratio_part] = "ratio_part",
  [sym_ratio] = "ratio",
  [sym_bool] = "bool",
  [sym_path] = "path",
  [sym_strength] = "strength",
  [sym_reference] = "reference",
  [sym_canonical] = "canonical",
  [sym_value] = "value",
  [sym_item] = "item",
  [sym_flag] = "flag",
  [sym_target_type] = "target_type",
  [sym_param_rule_set_params] = "param_rule_set_params",
  [sym_param_rule_set_reference] = "param_rule_set_reference",
  [sym_regex] = "regex",
  [sym_fsh_comment] = "fsh_comment",
  [aux_sym_doc_repeat1] = "doc_repeat1",
  [aux_sym_profile_repeat1] = "profile_repeat1",
  [aux_sym_profile_repeat2] = "profile_repeat2",
  [aux_sym_invariant_repeat1] = "invariant_repeat1",
  [aux_sym_instance_repeat1] = "instance_repeat1",
  [aux_sym_instance_repeat2] = "instance_repeat2",
  [aux_sym_valueset_repeat1] = "valueset_repeat1",
  [aux_sym_valueset_repeat2] = "valueset_repeat2",
  [aux_sym_codesystem_repeat1] = "codesystem_repeat1",
  [aux_sym_codesystem_repeat2] = "codesystem_repeat2",
  [aux_sym_mapping_repeat1] = "mapping_repeat1",
  [aux_sym_mapping_repeat2] = "mapping_repeat2",
  [aux_sym_logical_repeat1] = "logical_repeat1",
  [aux_sym_rule_set_repeat1] = "rule_set_repeat1",
  [aux_sym_param_rule_set_repeat1] = "param_rule_set_repeat1",
  [aux_sym_cardinality_rule_repeat1] = "cardinality_rule_repeat1",
  [aux_sym_code_insert_rule_repeat1] = "code_insert_rule_repeat1",
  [aux_sym_contains_rule_repeat1] = "contains_rule_repeat1",
  [aux_sym_code_caret_value_rule_repeat1] = "code_caret_value_rule_repeat1",
  [aux_sym_obeys_rule_repeat1] = "obeys_rule_repeat1",
  [aux_sym_flag_rule_repeat1] = "flag_rule_repeat1",
  [aux_sym_only_rule_repeat1] = "only_rule_repeat1",
  [aux_sym_vs_concept_component_repeat1] = "vs_concept_component_repeat1",
  [aux_sym_vs_filter_list_repeat1] = "vs_filter_list_repeat1",
  [aux_sym_sequence_repeat1] = "sequence_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_unit_repeat1] = "unit_repeat1",
  [aux_sym_reference_repeat1] = "reference_repeat1",
  [aux_sym_canonical_repeat1] = "canonical_repeat1",
  [aux_sym_param_rule_set_params_repeat1] = "param_rule_set_params_repeat1",
  [alias_sym_alias_name] = "alias_name",
  [alias_sym_code_system] = "code_system",
  [alias_sym_code_value] = "code_value",
  [alias_sym_concept_string] = "concept_string",
  [alias_sym_param_rule_set_content] = "param_rule_set_content",
  [alias_sym_reference_type] = "reference_type",
  [alias_sym_rule_set_reference] = "rule_set_reference",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_Alias] = anon_sym_Alias,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_Profile] = anon_sym_Profile,
  [anon_sym_Extension] = anon_sym_Extension,
  [anon_sym_Invariant] = anon_sym_Invariant,
  [anon_sym_Instance] = anon_sym_Instance,
  [anon_sym_ValueSet] = anon_sym_ValueSet,
  [anon_sym_CodeSystem] = anon_sym_CodeSystem,
  [anon_sym_Mapping] = anon_sym_Mapping,
  [anon_sym_Logical] = anon_sym_Logical,
  [anon_sym_Resource] = anon_sym_Resource,
  [anon_sym_RuleSet] = anon_sym_RuleSet,
  [anon_sym_Description] = anon_sym_Description,
  [anon_sym_Expression] = anon_sym_Expression,
  [anon_sym_Id] = anon_sym_Id,
  [anon_sym_InstanceOf] = anon_sym_InstanceOf,
  [anon_sym_Parent] = anon_sym_Parent,
  [anon_sym_Severity] = anon_sym_Severity,
  [anon_sym_Source] = anon_sym_Source,
  [anon_sym_Target] = anon_sym_Target,
  [anon_sym_Title] = anon_sym_Title,
  [anon_sym_Usage] = anon_sym_Usage,
  [anon_sym_XPath] = anon_sym_XPath,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_contentReference] = anon_sym_contentReference,
  [anon_sym_insert] = anon_sym_insert,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_exactly] = anon_sym_exactly,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_obeys] = anon_sym_obeys,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_exclude] = anon_sym_exclude,
  [anon_sym_codes] = anon_sym_codes,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_system] = anon_sym_system,
  [anon_sym_valueset] = anon_sym_valueset,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_sequence_token1] = aux_sym_sequence_token1,
  [aux_sym_sequence_token2] = aux_sym_sequence_token2,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_MS] = anon_sym_MS,
  [anon_sym_SU] = anon_sym_SU,
  [anon_sym_TU] = anon_sym_TU,
  [anon_sym_N] = anon_sym_N,
  [anon_sym_D] = anon_sym_D,
  [aux_sym_cardinality_token1] = aux_sym_cardinality_token1,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_STAR2] = anon_sym_STAR,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [sym_double_quote_string_fragment] = sym_double_quote_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_date] = sym_date,
  [sym_time] = sym_time,
  [anon_sym_T] = anon_sym_T,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_unit_token1] = aux_sym_unit_token1,
  [anon_sym_example] = anon_sym_example,
  [anon_sym_preferred] = anon_sym_example,
  [anon_sym_extensible] = anon_sym_example,
  [anon_sym_required] = anon_sym_example,
  [anon_sym_Reference] = anon_sym_Reference,
  [anon_sym_Canonical] = anon_sym_Canonical,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_named] = anon_sym_named,
  [anon_sym_QMARK_BANG] = anon_sym_QMARK_BANG,
  [aux_sym_param_rule_set_params_token1] = aux_sym_param_rule_set_params_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH2] = anon_sym_SLASH,
  [sym_regex_pattern] = sym_regex_pattern,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_fsh_comment_token1] = aux_sym_fsh_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_fsh_comment_token2] = aux_sym_fsh_comment_token2,
  [sym_doc] = sym_doc,
  [sym_alias] = sym_alias,
  [sym_profile] = sym_profile,
  [sym_extension] = sym_extension,
  [sym_invariant] = sym_invariant,
  [sym_instance] = sym_instance,
  [sym_valueset] = sym_valueset,
  [sym_codesystem] = sym_codesystem,
  [sym_mapping] = sym_mapping,
  [sym_logical] = sym_logical,
  [sym_resource] = sym_resource,
  [sym_rule_set] = sym_rule_set,
  [sym_param_rule_set] = sym_param_rule_set,
  [sym_sd_metadata] = sym_sd_metadata,
  [sym_instance_metadata] = sym_instance_metadata,
  [sym_invariant_metadata] = sym_invariant_metadata,
  [sym_vs_metadata] = sym_vs_metadata,
  [sym_cs_metadata] = sym_cs_metadata,
  [sym_mapping_metadata] = sym_mapping_metadata,
  [sym_description] = sym_description,
  [sym_expression] = sym_expression,
  [sym_id] = sym_id,
  [sym_instance_of] = sym_instance_of,
  [sym_parent] = sym_parent,
  [sym_severity] = sym_severity,
  [sym_source] = sym_source,
  [sym_target] = sym_target,
  [sym_title] = sym_title,
  [sym_usage] = sym_usage,
  [sym_xpath] = sym_xpath,
  [sym_rule_set_rule] = sym_rule_set_rule,
  [sym_sd_rule] = sym_sd_rule,
  [sym_lr_rule] = sym_lr_rule,
  [sym_vs_rule] = sym_vs_rule,
  [sym_cs_rule] = sym_cs_rule,
  [sym_instance_rule] = sym_instance_rule,
  [sym_mapping_entity_rule] = sym_mapping_entity_rule,
  [sym_cardinality_rule] = sym_cardinality_rule,
  [sym_add_cre_element_rule] = sym_add_cre_element_rule,
  [sym_code_insert_rule] = sym_code_insert_rule,
  [sym_insert_rule] = sym_insert_rule,
  [sym_valueset_rule] = sym_valueset_rule,
  [sym_fixed_value_rule] = sym_fixed_value_rule,
  [sym_contains_rule] = sym_contains_rule,
  [sym_caret_value_rule] = sym_caret_value_rule,
  [sym_code_caret_value_rule] = sym_code_caret_value_rule,
  [sym_obeys_rule] = sym_obeys_rule,
  [sym_path_rule] = sym_path_rule,
  [sym_flag_rule] = sym_flag_rule,
  [sym_only_rule] = sym_only_rule,
  [sym_mapping_rule] = sym_mapping_rule,
  [sym_add_element_rule] = sym_add_element_rule,
  [sym_vs_component] = sym_vs_component,
  [sym_vs_concept_component] = sym_vs_concept_component,
  [sym_vs_filter_component] = sym_vs_filter_component,
  [sym_vs_component_from] = sym_vs_component_from,
  [sym_vs_from_system] = sym_vs_from_system,
  [sym_vs_from_valueset] = sym_vs_from_valueset,
  [sym_vs_filter_list] = sym_vs_filter_list,
  [sym_vs_filter_definition] = sym_vs_filter_definition,
  [sym_vs_filter_operator] = sym_vs_filter_operator,
  [sym_vs_filter_value] = sym_vs_filter_value,
  [sym_code] = sym_code,
  [sym_concept] = sym_concept,
  [sym_code_string] = sym_code_string,
  [sym_sequence] = sym_sequence,
  [sym_caret_path] = sym_caret_path,
  [sym_name] = sym_name,
  [sym_cardinality] = sym_cardinality,
  [sym_string] = sym_string,
  [sym_multiline_string] = sym_multiline_string,
  [sym_datetime] = sym_datetime,
  [sym_unit] = sym_unit,
  [sym_quantity] = sym_quantity,
  [sym_ratio_part] = sym_ratio_part,
  [sym_ratio] = sym_ratio,
  [sym_bool] = sym_bool,
  [sym_path] = sym_path,
  [sym_strength] = sym_strength,
  [sym_reference] = sym_reference,
  [sym_canonical] = sym_canonical,
  [sym_value] = sym_value,
  [sym_item] = sym_item,
  [sym_flag] = sym_flag,
  [sym_target_type] = sym_target_type,
  [sym_param_rule_set_params] = sym_param_rule_set_params,
  [sym_param_rule_set_reference] = sym_param_rule_set_reference,
  [sym_regex] = sym_regex,
  [sym_fsh_comment] = sym_fsh_comment,
  [aux_sym_doc_repeat1] = aux_sym_doc_repeat1,
  [aux_sym_profile_repeat1] = aux_sym_profile_repeat1,
  [aux_sym_profile_repeat2] = aux_sym_profile_repeat2,
  [aux_sym_invariant_repeat1] = aux_sym_invariant_repeat1,
  [aux_sym_instance_repeat1] = aux_sym_instance_repeat1,
  [aux_sym_instance_repeat2] = aux_sym_instance_repeat2,
  [aux_sym_valueset_repeat1] = aux_sym_valueset_repeat1,
  [aux_sym_valueset_repeat2] = aux_sym_valueset_repeat2,
  [aux_sym_codesystem_repeat1] = aux_sym_codesystem_repeat1,
  [aux_sym_codesystem_repeat2] = aux_sym_codesystem_repeat2,
  [aux_sym_mapping_repeat1] = aux_sym_mapping_repeat1,
  [aux_sym_mapping_repeat2] = aux_sym_mapping_repeat2,
  [aux_sym_logical_repeat1] = aux_sym_logical_repeat1,
  [aux_sym_rule_set_repeat1] = aux_sym_rule_set_repeat1,
  [aux_sym_param_rule_set_repeat1] = aux_sym_param_rule_set_repeat1,
  [aux_sym_cardinality_rule_repeat1] = aux_sym_cardinality_rule_repeat1,
  [aux_sym_code_insert_rule_repeat1] = aux_sym_code_insert_rule_repeat1,
  [aux_sym_contains_rule_repeat1] = aux_sym_contains_rule_repeat1,
  [aux_sym_code_caret_value_rule_repeat1] = aux_sym_code_caret_value_rule_repeat1,
  [aux_sym_obeys_rule_repeat1] = aux_sym_obeys_rule_repeat1,
  [aux_sym_flag_rule_repeat1] = aux_sym_flag_rule_repeat1,
  [aux_sym_only_rule_repeat1] = aux_sym_only_rule_repeat1,
  [aux_sym_vs_concept_component_repeat1] = aux_sym_vs_concept_component_repeat1,
  [aux_sym_vs_filter_list_repeat1] = aux_sym_vs_filter_list_repeat1,
  [aux_sym_sequence_repeat1] = aux_sym_sequence_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_unit_repeat1] = aux_sym_unit_repeat1,
  [aux_sym_reference_repeat1] = aux_sym_reference_repeat1,
  [aux_sym_canonical_repeat1] = aux_sym_canonical_repeat1,
  [aux_sym_param_rule_set_params_repeat1] = aux_sym_param_rule_set_params_repeat1,
  [alias_sym_alias_name] = alias_sym_alias_name,
  [alias_sym_code_system] = alias_sym_code_system,
  [alias_sym_code_value] = alias_sym_code_value,
  [alias_sym_concept_string] = alias_sym_concept_string,
  [alias_sym_param_rule_set_content] = alias_sym_param_rule_set_content,
  [alias_sym_reference_type] = alias_sym_reference_type,
  [alias_sym_rule_set_reference] = alias_sym_rule_set_reference,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Profile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Extension] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Invariant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Instance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ValueSet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CodeSystem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Mapping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Logical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Resource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RuleSet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Description] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Expression] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_InstanceOf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Parent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Severity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Target] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Usage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XPath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contentReference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exactly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contains] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_obeys] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
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
  [anon_sym_codes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_system] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_valueset] = {
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SU] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TU] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_N] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cardinality_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_double_quote_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_T] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_example] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_preferred] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_extensible] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Reference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Canonical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_named] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_param_rule_set_params_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH2] = {
    .visible = true,
    .named = false,
  },
  [sym_regex_pattern] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_fsh_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_fsh_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_doc] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_profile] = {
    .visible = true,
    .named = true,
  },
  [sym_extension] = {
    .visible = true,
    .named = true,
  },
  [sym_invariant] = {
    .visible = true,
    .named = true,
  },
  [sym_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_valueset] = {
    .visible = true,
    .named = true,
  },
  [sym_codesystem] = {
    .visible = true,
    .named = true,
  },
  [sym_mapping] = {
    .visible = true,
    .named = true,
  },
  [sym_logical] = {
    .visible = true,
    .named = true,
  },
  [sym_resource] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_set] = {
    .visible = true,
    .named = true,
  },
  [sym_param_rule_set] = {
    .visible = true,
    .named = true,
  },
  [sym_sd_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_instance_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_invariant_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_cs_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_mapping_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_instance_of] = {
    .visible = true,
    .named = true,
  },
  [sym_parent] = {
    .visible = true,
    .named = true,
  },
  [sym_severity] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [sym_usage] = {
    .visible = true,
    .named = true,
  },
  [sym_xpath] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_set_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_sd_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_lr_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_cs_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_instance_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_mapping_entity_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_cardinality_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_add_cre_element_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_code_insert_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_insert_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_valueset_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_fixed_value_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_contains_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_caret_value_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_code_caret_value_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_obeys_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_path_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_flag_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_only_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_mapping_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_add_element_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_component] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_concept_component] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_filter_component] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_component_from] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_from_system] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_from_valueset] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_filter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_filter_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_filter_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_vs_filter_value] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_concept] = {
    .visible = true,
    .named = true,
  },
  [sym_code_string] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_caret_path] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_cardinality] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_string] = {
    .visible = true,
    .named = true,
  },
  [sym_datetime] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_ratio_part] = {
    .visible = true,
    .named = true,
  },
  [sym_ratio] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_strength] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_canonical] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_target_type] = {
    .visible = true,
    .named = true,
  },
  [sym_param_rule_set_params] = {
    .visible = true,
    .named = true,
  },
  [sym_param_rule_set_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_fsh_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_doc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_profile_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_profile_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_invariant_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instance_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instance_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_valueset_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_valueset_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_codesystem_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_codesystem_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mapping_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mapping_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_logical_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_set_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_rule_set_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cardinality_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_insert_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_contains_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_caret_value_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_obeys_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flag_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_only_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_vs_concept_component_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_vs_filter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_reference_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_canonical_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_rule_set_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_alias_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_code_system] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_code_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_concept_string] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_param_rule_set_content] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_reference_type] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_rule_set_reference] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_rule_set_reference,
  },
  [2] = {
    [0] = alias_sym_param_rule_set_content,
  },
  [3] = {
    [2] = alias_sym_alias_name,
  },
  [4] = {
    [1] = alias_sym_code_value,
  },
  [5] = {
    [1] = alias_sym_concept_string,
  },
  [6] = {
    [3] = alias_sym_rule_set_reference,
  },
  [7] = {
    [0] = alias_sym_reference_type,
  },
  [8] = {
    [0] = alias_sym_code_system,
    [2] = alias_sym_code_value,
  },
  [9] = {
    [0] = alias_sym_code_system,
    [2] = alias_sym_concept_string,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_rule_set_rule, 2,
    sym_rule_set_rule,
    alias_sym_param_rule_set_content,
  sym_sequence, 5,
    sym_sequence,
    alias_sym_alias_name,
    alias_sym_code_system,
    alias_sym_code_value,
    alias_sym_rule_set_reference,
  sym_string, 2,
    sym_string,
    alias_sym_concept_string,
  sym_reference, 2,
    sym_reference,
    alias_sym_reference_type,
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
  [26] = 2,
  [27] = 27,
  [28] = 19,
  [29] = 21,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 24,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 35,
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
  [69] = 21,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 19,
  [74] = 74,
  [75] = 75,
  [76] = 68,
  [77] = 77,
  [78] = 78,
  [79] = 24,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 2,
  [84] = 84,
  [85] = 36,
  [86] = 45,
  [87] = 87,
  [88] = 37,
  [89] = 89,
  [90] = 90,
  [91] = 42,
  [92] = 19,
  [93] = 93,
  [94] = 94,
  [95] = 41,
  [96] = 21,
  [97] = 43,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 80,
  [104] = 21,
  [105] = 19,
  [106] = 2,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 24,
  [114] = 19,
  [115] = 19,
  [116] = 36,
  [117] = 43,
  [118] = 41,
  [119] = 24,
  [120] = 120,
  [121] = 121,
  [122] = 21,
  [123] = 37,
  [124] = 42,
  [125] = 45,
  [126] = 126,
  [127] = 21,
  [128] = 128,
  [129] = 129,
  [130] = 2,
  [131] = 41,
  [132] = 132,
  [133] = 42,
  [134] = 134,
  [135] = 43,
  [136] = 21,
  [137] = 19,
  [138] = 37,
  [139] = 132,
  [140] = 140,
  [141] = 36,
  [142] = 45,
  [143] = 19,
  [144] = 24,
  [145] = 2,
  [146] = 146,
  [147] = 24,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 21,
  [153] = 153,
  [154] = 19,
  [155] = 19,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 21,
  [160] = 19,
  [161] = 24,
  [162] = 162,
  [163] = 21,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 19,
  [171] = 21,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 21,
  [176] = 176,
  [177] = 177,
  [178] = 24,
  [179] = 179,
  [180] = 180,
  [181] = 24,
  [182] = 182,
  [183] = 183,
  [184] = 36,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 21,
  [189] = 189,
  [190] = 19,
  [191] = 21,
  [192] = 19,
  [193] = 24,
  [194] = 194,
  [195] = 37,
  [196] = 19,
  [197] = 21,
  [198] = 19,
  [199] = 24,
  [200] = 200,
  [201] = 78,
  [202] = 21,
  [203] = 19,
  [204] = 21,
  [205] = 19,
  [206] = 21,
  [207] = 19,
  [208] = 24,
  [209] = 209,
  [210] = 94,
  [211] = 211,
  [212] = 212,
  [213] = 21,
  [214] = 214,
  [215] = 215,
  [216] = 19,
  [217] = 21,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 37,
  [226] = 36,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 81,
  [233] = 233,
  [234] = 24,
  [235] = 235,
  [236] = 236,
  [237] = 24,
  [238] = 238,
  [239] = 21,
  [240] = 240,
  [241] = 21,
  [242] = 19,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 230,
  [247] = 21,
  [248] = 19,
  [249] = 24,
  [250] = 24,
  [251] = 19,
  [252] = 21,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 19,
  [257] = 257,
  [258] = 19,
  [259] = 24,
  [260] = 21,
  [261] = 24,
  [262] = 231,
  [263] = 24,
  [264] = 264,
  [265] = 21,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 231,
  [271] = 37,
  [272] = 128,
  [273] = 36,
  [274] = 274,
  [275] = 120,
  [276] = 24,
  [277] = 277,
  [278] = 278,
  [279] = 24,
  [280] = 280,
  [281] = 230,
  [282] = 282,
  [283] = 283,
  [284] = 231,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 19,
  [290] = 230,
  [291] = 220,
  [292] = 24,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 24,
  [304] = 304,
  [305] = 24,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 24,
  [311] = 311,
  [312] = 121,
  [313] = 313,
  [314] = 295,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 315,
  [321] = 321,
  [322] = 316,
  [323] = 323,
  [324] = 24,
  [325] = 280,
  [326] = 326,
  [327] = 316,
  [328] = 315,
  [329] = 329,
  [330] = 21,
  [331] = 19,
  [332] = 316,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 315,
  [338] = 338,
  [339] = 339,
  [340] = 126,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 338,
  [345] = 345,
  [346] = 323,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 296,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 323,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 24,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 21,
  [420] = 19,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 24,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 430,
  [433] = 433,
  [434] = 434,
  [435] = 429,
  [436] = 430,
  [437] = 429,
  [438] = 430,
  [439] = 430,
  [440] = 429,
  [441] = 429,
  [442] = 430,
  [443] = 430,
  [444] = 430,
  [445] = 21,
  [446] = 430,
  [447] = 447,
  [448] = 430,
  [449] = 429,
  [450] = 429,
  [451] = 21,
  [452] = 19,
  [453] = 430,
  [454] = 430,
  [455] = 429,
  [456] = 429,
  [457] = 429,
  [458] = 458,
  [459] = 429,
  [460] = 429,
  [461] = 430,
  [462] = 462,
  [463] = 429,
  [464] = 429,
  [465] = 430,
  [466] = 430,
  [467] = 429,
  [468] = 429,
  [469] = 430,
  [470] = 19,
  [471] = 429,
  [472] = 430,
  [473] = 21,
  [474] = 24,
  [475] = 475,
  [476] = 19,
  [477] = 21,
  [478] = 478,
  [479] = 19,
  [480] = 21,
  [481] = 19,
  [482] = 21,
  [483] = 483,
  [484] = 484,
  [485] = 19,
  [486] = 24,
  [487] = 487,
  [488] = 21,
  [489] = 19,
  [490] = 490,
  [491] = 19,
  [492] = 19,
  [493] = 493,
  [494] = 21,
  [495] = 19,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 43,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 501,
  [505] = 24,
  [506] = 502,
  [507] = 501,
  [508] = 493,
  [509] = 509,
  [510] = 501,
  [511] = 502,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 19,
  [517] = 21,
  [518] = 37,
  [519] = 502,
  [520] = 36,
  [521] = 521,
  [522] = 522,
  [523] = 24,
  [524] = 19,
  [525] = 525,
  [526] = 21,
  [527] = 527,
  [528] = 501,
  [529] = 529,
  [530] = 501,
  [531] = 502,
  [532] = 21,
  [533] = 533,
  [534] = 502,
  [535] = 24,
  [536] = 501,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 21,
  [541] = 502,
  [542] = 501,
  [543] = 543,
  [544] = 19,
  [545] = 24,
  [546] = 2,
  [547] = 45,
  [548] = 548,
  [549] = 549,
  [550] = 21,
  [551] = 24,
  [552] = 42,
  [553] = 502,
  [554] = 554,
  [555] = 21,
  [556] = 19,
  [557] = 557,
  [558] = 41,
  [559] = 498,
  [560] = 560,
  [561] = 21,
  [562] = 562,
  [563] = 24,
  [564] = 293,
  [565] = 565,
  [566] = 24,
  [567] = 567,
  [568] = 2,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 24,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 24,
  [577] = 577,
  [578] = 578,
  [579] = 24,
  [580] = 580,
  [581] = 581,
  [582] = 24,
  [583] = 583,
  [584] = 584,
  [585] = 21,
  [586] = 19,
  [587] = 19,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 19,
  [592] = 21,
  [593] = 565,
  [594] = 25,
  [595] = 595,
  [596] = 590,
  [597] = 597,
  [598] = 598,
  [599] = 24,
  [600] = 600,
  [601] = 24,
  [602] = 602,
  [603] = 600,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 602,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 24,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 24,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 619,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 626,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 626,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 626,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 626,
  [658] = 658,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 627,
  [665] = 665,
  [666] = 666,
  [667] = 662,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 626,
  [672] = 627,
  [673] = 626,
  [674] = 626,
  [675] = 626,
  [676] = 626,
  [677] = 626,
  [678] = 626,
  [679] = 626,
  [680] = 626,
  [681] = 626,
  [682] = 682,
  [683] = 683,
};

static inline bool anon_sym_DQUOTE_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < 160
      ? (c < ' '
        ? (c >= '\t' && c <= '\r')
        : c <= ' ')
      : (c <= 160 || c == 5760))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static inline bool aux_sym_fsh_comment_token1_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < 11
        ? c == '\t'
        : c <= '\r')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(395);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '*') ADVANCE(584);
      if (lookahead == '+') ADVANCE(333);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '?') ADVANCE(2);
      if (lookahead == 'A') ADVANCE(193);
      if (lookahead == 'C') ADVANCE(74);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'E') ADVANCE(323);
      if (lookahead == 'I') ADVANCE(105);
      if (lookahead == 'L') ADVANCE(234);
      if (lookahead == 'M') ADVANCE(62);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'P') ADVANCE(83);
      if (lookahead == 'R') ADVANCE(116);
      if (lookahead == 'S') ADVANCE(67);
      if (lookahead == 'T') ADVANCE(608);
      if (lookahead == 'U') ADVANCE(276);
      if (lookahead == 'V') ADVANCE(73);
      if (lookahead == 'X') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(236);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 'h') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'p') ADVANCE(257);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == 's') ADVANCE(329);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == 'v') ADVANCE(88);
      if (lookahead == 'w') ADVANCE(178);
      if (lookahead == '|') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(355)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(354);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(625);
      if (lookahead != 0) ADVANCE(626);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(621);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'C') ADVANCE(532);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'M') ADVANCE(525);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'f') ADVANCE(534);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 't') ADVANCE(561);
      if (lookahead == 'v') ADVANCE(537);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(448);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(587);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(6)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(451);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '?') ADVANCE(444);
      if (lookahead == 'C') ADVANCE(532);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'M') ADVANCE(525);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 'v') ADVANCE(537);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(458);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'f') ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(8)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(459);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(9)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(460);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(10)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(461);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(11)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(462);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(12)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(463);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '/') ADVANCE(588);
      if (lookahead == '\\') ADVANCE(313);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(589);
      if (lookahead != 0) ADVANCE(590);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '/') ADVANCE(588);
      if (lookahead == '\\') ADVANCE(313);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(589);
      if (lookahead != 0) ADVANCE(590);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '+') ADVANCE(572);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'M') ADVANCE(525);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(550);
      if (lookahead == 'o') ADVANCE(538);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 'v') ADVANCE(537);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(472);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(550);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(16)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(473);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(17)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(474);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(18)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(475);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(19)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(476);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(20)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(477);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(21)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(478);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(22)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(479);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '/') ADVANCE(611);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(610);
      END_STATE();
    case 24:
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(24)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(481);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '\\') ADVANCE(571);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(25)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(482);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead == '|') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(26)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(483);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 27:
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(27)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(484);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(584);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '?') ADVANCE(444);
      if (lookahead == 'C') ADVANCE(532);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'M') ADVANCE(525);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == 'c') ADVANCE(558);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 'v') ADVANCE(537);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(503);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(485);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(633);
      if (lookahead == '/') ADVANCE(627);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(636);
      if (lookahead == '/') ADVANCE(32);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(636);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(634);
      if (lookahead == '/') ADVANCE(628);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(33)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(499);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(583);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(500);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'n') ADVANCE(530);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(501);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(500);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(36)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(502);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(352);
      END_STATE();
    case 38:
      if (lookahead == '/') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(38)
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(29);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(39)
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(40)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(506);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(41)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(507);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '?') ADVANCE(444);
      if (lookahead == 'C') ADVANCE(532);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'M') ADVANCE(525);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 'v') ADVANCE(537);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(42)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(508);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '?') ADVANCE(444);
      if (lookahead == 'C') ADVANCE(532);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'M') ADVANCE(525);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == 'c') ADVANCE(558);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 'v') ADVANCE(537);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(43)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(509);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '?') ADVANCE(444);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'M') ADVANCE(525);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(44)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(510);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'C') ADVANCE(532);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'M') ADVANCE(525);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 'v') ADVANCE(537);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(45)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(513);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'M') ADVANCE(525);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 'o') ADVANCE(538);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 'v') ADVANCE(537);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(46)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(514);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'M') ADVANCE(525);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 'v') ADVANCE(537);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(47)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(515);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'D') ADVANCE(543);
      if (lookahead == 'E') ADVANCE(568);
      if (lookahead == 'S') ADVANCE(542);
      if (lookahead == 'X') ADVANCE(524);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(48)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(516);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 49:
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'D') ADVANCE(543);
      if (lookahead == 'I') ADVANCE(540);
      if (lookahead == 'P') ADVANCE(535);
      if (lookahead == 'T') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(49)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(517);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 50:
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '\\') ADVANCE(571);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(50)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(518);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 51:
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(51)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(519);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 52:
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(52)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(520);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 53:
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(53)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(521);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 54:
      if (lookahead == '/') ADVANCE(37);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(345);
      END_STATE();
    case 58:
      if (lookahead == '>') ADVANCE(433);
      END_STATE();
    case 59:
      if (lookahead == '>') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      END_STATE();
    case 60:
      if (lookahead == 'P') ADVANCE(78);
      END_STATE();
    case 61:
      if (lookahead == 'R') ADVANCE(157);
      END_STATE();
    case 62:
      if (lookahead == 'S') ADVANCE(576);
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 63:
      if (lookahead == 'S') ADVANCE(153);
      END_STATE();
    case 64:
      if (lookahead == 'S') ADVANCE(154);
      END_STATE();
    case 65:
      if (lookahead == 'S') ADVANCE(331);
      END_STATE();
    case 66:
      if (lookahead == 'U') ADVANCE(577);
      END_STATE();
    case 67:
      if (lookahead == 'U') ADVANCE(577);
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 68:
      if (lookahead == 'U') ADVANCE(578);
      END_STATE();
    case 69:
      if (lookahead == '\\') ADVANCE(353);
      if (lookahead == ']') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 90:
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 91:
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 92:
      if (lookahead == 'b') ADVANCE(204);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(250);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(207);
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(412);
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(429);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(620);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(616);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(614);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(142);
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 113:
      if (lookahead == 'd') ADVANCE(142);
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 115:
      if (lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 167:
      if (lookahead == 'f') ADVANCE(413);
      END_STATE();
    case 168:
      if (lookahead == 'f') ADVANCE(188);
      END_STATE();
    case 169:
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 170:
      if (lookahead == 'f') ADVANCE(163);
      END_STATE();
    case 171:
      if (lookahead == 'f') ADVANCE(163);
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 172:
      if (lookahead == 'f') ADVANCE(166);
      END_STATE();
    case 173:
      if (lookahead == 'g') ADVANCE(406);
      END_STATE();
    case 174:
      if (lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 175:
      if (lookahead == 'g') ADVANCE(150);
      END_STATE();
    case 176:
      if (lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 177:
      if (lookahead == 'h') ADVANCE(420);
      END_STATE();
    case 178:
      if (lookahead == 'h') ADVANCE(162);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(407);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(618);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(327);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(321);
      END_STATE();
    case 208:
      if (lookahead == 'm') ADVANCE(424);
      END_STATE();
    case 209:
      if (lookahead == 'm') ADVANCE(438);
      END_STATE();
    case 210:
      if (lookahead == 'm') ADVANCE(405);
      END_STATE();
    case 211:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(298);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 227:
      if (lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 229:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 230:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 231:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 232:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 245:
      if (lookahead == 'p') ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 247:
      if (lookahead == 'p') ADVANCE(311);
      END_STATE();
    case 248:
      if (lookahead == 'p') ADVANCE(263);
      END_STATE();
    case 249:
      if (lookahead == 'p') ADVANCE(263);
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 250:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 251:
      if (lookahead == 'q') ADVANCE(315);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(396);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(436);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(430);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(305);
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 284:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 285:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 286:
      if (lookahead == 's') ADVANCE(308);
      END_STATE();
    case 287:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 288:
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 289:
      if (lookahead == 's') ADVANCE(312);
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(404);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(401);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 313:
      if (lookahead == 'u') ADVANCE(350);
      if (lookahead == 'x') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(593);
      if (lookahead != 0) ADVANCE(591);
      END_STATE();
    case 314:
      if (lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 315:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 316:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 317:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 318:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 319:
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 320:
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 321:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 322:
      if (lookahead == 'v') ADVANCE(146);
      END_STATE();
    case 323:
      if (lookahead == 'x') ADVANCE(249);
      END_STATE();
    case 324:
      if (lookahead == 'x') ADVANCE(72);
      END_STATE();
    case 325:
      if (lookahead == 'x') ADVANCE(303);
      END_STATE();
    case 326:
      if (lookahead == 'y') ADVANCE(431);
      END_STATE();
    case 327:
      if (lookahead == 'y') ADVANCE(426);
      END_STATE();
    case 328:
      if (lookahead == 'y') ADVANCE(415);
      END_STATE();
    case 329:
      if (lookahead == 'y') ADVANCE(280);
      END_STATE();
    case 330:
      if (lookahead == 'y') ADVANCE(274);
      END_STATE();
    case 331:
      if (lookahead == 'y') ADVANCE(286);
      END_STATE();
    case 332:
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(622);
      END_STATE();
    case 333:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      END_STATE();
    case 334:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(599);
      END_STATE();
    case 335:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(602);
      END_STATE();
    case 336:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(605);
      END_STATE();
    case 337:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      END_STATE();
    case 338:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      END_STATE();
    case 339:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(606);
      END_STATE();
    case 340:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(600);
      END_STATE();
    case 341:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 342:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 343:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 344:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 345:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 346:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 347:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 348:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(604);
      END_STATE();
    case 349:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(591);
      END_STATE();
    case 350:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(594);
      END_STATE();
    case 351:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(349);
      END_STATE();
    case 352:
      if (lookahead == '#' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 353:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 354:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(626);
      END_STATE();
    case 355:
      if (eof) ADVANCE(395);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '*') ADVANCE(584);
      if (lookahead == '+') ADVANCE(333);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '?') ADVANCE(2);
      if (lookahead == 'A') ADVANCE(193);
      if (lookahead == 'C') ADVANCE(74);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'E') ADVANCE(323);
      if (lookahead == 'I') ADVANCE(105);
      if (lookahead == 'L') ADVANCE(234);
      if (lookahead == 'M') ADVANCE(62);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'P') ADVANCE(83);
      if (lookahead == 'R') ADVANCE(116);
      if (lookahead == 'S') ADVANCE(67);
      if (lookahead == 'T') ADVANCE(608);
      if (lookahead == 'U') ADVANCE(276);
      if (lookahead == 'V') ADVANCE(73);
      if (lookahead == 'X') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(236);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 'h') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'p') ADVANCE(257);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == 's') ADVANCE(329);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == 'v') ADVANCE(88);
      if (lookahead == 'w') ADVANCE(178);
      if (lookahead == '|') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(355)
      END_STATE();
    case 356:
      if (eof) ADVANCE(395);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '?') ADVANCE(2);
      if (lookahead == 'A') ADVANCE(193);
      if (lookahead == 'C') ADVANCE(233);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'E') ADVANCE(325);
      if (lookahead == 'I') ADVANCE(232);
      if (lookahead == 'L') ADVANCE(234);
      if (lookahead == 'M') ADVANCE(62);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'P') ADVANCE(256);
      if (lookahead == 'R') ADVANCE(152);
      if (lookahead == 'S') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(68);
      if (lookahead == 'V') ADVANCE(73);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'f') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(357)
      END_STATE();
    case 357:
      if (eof) ADVANCE(395);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '?') ADVANCE(2);
      if (lookahead == 'A') ADVANCE(193);
      if (lookahead == 'C') ADVANCE(233);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'E') ADVANCE(325);
      if (lookahead == 'I') ADVANCE(232);
      if (lookahead == 'L') ADVANCE(234);
      if (lookahead == 'M') ADVANCE(62);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'P') ADVANCE(256);
      if (lookahead == 'R') ADVANCE(152);
      if (lookahead == 'S') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(68);
      if (lookahead == 'V') ADVANCE(73);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'f') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(357)
      END_STATE();
    case 358:
      if (eof) ADVANCE(395);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'f') ADVANCE(563);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(358)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(445);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 359:
      if (eof) ADVANCE(395);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(359)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(446);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 360:
      if (eof) ADVANCE(395);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(360)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(447);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 361:
      if (eof) ADVANCE(395);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == 'A') ADVANCE(193);
      if (lookahead == 'C') ADVANCE(233);
      if (lookahead == 'D') ADVANCE(151);
      if (lookahead == 'E') ADVANCE(323);
      if (lookahead == 'I') ADVANCE(105);
      if (lookahead == 'L') ADVANCE(234);
      if (lookahead == 'M') ADVANCE(70);
      if (lookahead == 'P') ADVANCE(83);
      if (lookahead == 'R') ADVANCE(152);
      if (lookahead == 'S') ADVANCE(117);
      if (lookahead == 'T') ADVANCE(75);
      if (lookahead == 'U') ADVANCE(276);
      if (lookahead == 'V') ADVANCE(73);
      if (lookahead == 'X') ADVANCE(60);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'f') ADVANCE(258);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(252);
      if (lookahead == 'w') ADVANCE(178);
      if (lookahead == '|') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(361)
      END_STATE();
    case 362:
      if (eof) ADVANCE(395);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'f') ADVANCE(534);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 't') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(362)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(449);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 363:
      if (eof) ADVANCE(395);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(363)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(450);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 364:
      if (eof) ADVANCE(395);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(364)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(452);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 365:
      if (eof) ADVANCE(395);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(365)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(453);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 366:
      if (eof) ADVANCE(395);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(366)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(454);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 367:
      if (eof) ADVANCE(395);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'f') ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(367)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(455);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 368:
      if (eof) ADVANCE(395);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(368)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(456);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 369:
      if (eof) ADVANCE(395);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(369)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(457);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 370:
      if (eof) ADVANCE(395);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(370)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(464);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 371:
      if (eof) ADVANCE(395);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(371)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(465);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 372:
      if (eof) ADVANCE(395);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(372)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(466);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 373:
      if (eof) ADVANCE(395);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(373)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(467);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 374:
      if (eof) ADVANCE(395);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(374)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(468);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 375:
      if (eof) ADVANCE(395);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == '.') ADVANCE(500);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '?') ADVANCE(444);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'c') ADVANCE(557);
      if (lookahead == 'f') ADVANCE(563);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(375)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(469);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 376:
      if (eof) ADVANCE(395);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(376)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(470);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 377:
      if (eof) ADVANCE(395);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(377)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(471);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 378:
      if (eof) ADVANCE(395);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(193);
      if (lookahead == 'C') ADVANCE(233);
      if (lookahead == 'E') ADVANCE(325);
      if (lookahead == 'I') ADVANCE(232);
      if (lookahead == 'L') ADVANCE(234);
      if (lookahead == 'M') ADVANCE(70);
      if (lookahead == 'P') ADVANCE(256);
      if (lookahead == 'R') ADVANCE(152);
      if (lookahead == 'T') ADVANCE(607);
      if (lookahead == 'V') ADVANCE(73);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(378)
      END_STATE();
    case 379:
      if (eof) ADVANCE(395);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(379)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(480);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 380:
      if (eof) ADVANCE(395);
      if (lookahead == '*') ADVANCE(584);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '?') ADVANCE(2);
      if (lookahead == 'A') ADVANCE(193);
      if (lookahead == 'C') ADVANCE(233);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'E') ADVANCE(325);
      if (lookahead == 'I') ADVANCE(232);
      if (lookahead == 'L') ADVANCE(234);
      if (lookahead == 'M') ADVANCE(62);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'P') ADVANCE(256);
      if (lookahead == 'R') ADVANCE(152);
      if (lookahead == 'S') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(68);
      if (lookahead == 'V') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(380)
      END_STATE();
    case 381:
      if (eof) ADVANCE(395);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(381)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(487);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 382:
      if (eof) ADVANCE(395);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '.') ADVANCE(500);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '?') ADVANCE(444);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'c') ADVANCE(557);
      if (lookahead == 'f') ADVANCE(563);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(382)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(488);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 383:
      if (eof) ADVANCE(395);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(383)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(489);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 384:
      if (eof) ADVANCE(395);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'D') ADVANCE(543);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(541);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(536);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'T') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(384)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(490);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 385:
      if (eof) ADVANCE(395);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'D') ADVANCE(543);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(541);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'S') ADVANCE(556);
      if (lookahead == 'T') ADVANCE(533);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(385)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(491);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 386:
      if (eof) ADVANCE(395);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'D') ADVANCE(543);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(541);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'T') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(386)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(492);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 387:
      if (eof) ADVANCE(395);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'D') ADVANCE(543);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(549);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'T') ADVANCE(547);
      if (lookahead == 'U') ADVANCE(564);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(387)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(493);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 388:
      if (eof) ADVANCE(395);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'w') ADVANCE(546);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(388)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(494);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 389:
      if (eof) ADVANCE(395);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(389)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(495);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 390:
      if (eof) ADVANCE(395);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(390)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(496);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 391:
      if (eof) ADVANCE(395);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'w') ADVANCE(546);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(391)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(497);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 392:
      if (eof) ADVANCE(395);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(392)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(498);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 393:
      if (eof) ADVANCE(395);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'D') ADVANCE(543);
      if (lookahead == 'E') ADVANCE(566);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'S') ADVANCE(542);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'X') ADVANCE(524);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(393)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(511);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 394:
      if (eof) ADVANCE(395);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160) SKIP(394)
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(512);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_Alias);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_Profile);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_Extension);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_Invariant);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_Instance);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_Instance);
      if (lookahead == 'O') ADVANCE(167);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_ValueSet);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_CodeSystem);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_Mapping);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_Logical);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_Resource);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_RuleSet);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_Description);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_Expression);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_InstanceOf);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_Parent);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_Severity);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_Source);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_Target);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_Title);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_Usage);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_XPath);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_contentReference);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_obeys);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_exclude);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_codes);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_valueset);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '!') ADVANCE(621);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'f') ADVANCE(563);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(445);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(446);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(447);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(586);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'C') ADVANCE(532);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'M') ADVANCE(525);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'f') ADVANCE(534);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 't') ADVANCE(561);
      if (lookahead == 'v') ADVANCE(537);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(448);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(623);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'f') ADVANCE(534);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 't') ADVANCE(561);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(449);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(450);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(451);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(452);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(453);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(454);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'f') ADVANCE(563);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(455);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(456);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(457);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '?') ADVANCE(444);
      if (lookahead == 'C') ADVANCE(532);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'M') ADVANCE(525);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 'v') ADVANCE(537);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(458);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'f') ADVANCE(563);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(459);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(460);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(461);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(462);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '"') ADVANCE(585);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(463);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(464);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(465);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == ':') ADVANCE(397);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(466);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '\'') ADVANCE(609);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(467);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(468);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == '.') ADVANCE(500);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '?') ADVANCE(444);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'c') ADVANCE(557);
      if (lookahead == 'f') ADVANCE(563);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 'o') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(469);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(470);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(471);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '+') ADVANCE(572);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'M') ADVANCE(525);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(550);
      if (lookahead == 'o') ADVANCE(538);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 'v') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(472);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(550);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(473);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(474);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(475);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(476);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(477);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(478);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(479);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(480);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(481);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '\\') ADVANCE(571);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(482);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead == '|') ADVANCE(619);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(483);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == ')') ADVANCE(427);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(484);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(584);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '?') ADVANCE(444);
      if (lookahead == 'C') ADVANCE(532);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'M') ADVANCE(525);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == 'c') ADVANCE(558);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 'v') ADVANCE(537);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(503);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(485);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(633);
      if (lookahead == '/') ADVANCE(627);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(487);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '.') ADVANCE(500);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '?') ADVANCE(444);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(526);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'c') ADVANCE(557);
      if (lookahead == 'f') ADVANCE(563);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 'o') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(488);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(489);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'D') ADVANCE(543);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(541);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(536);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'T') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(490);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'D') ADVANCE(543);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(541);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'S') ADVANCE(556);
      if (lookahead == 'T') ADVANCE(533);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(491);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'D') ADVANCE(543);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(541);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'T') ADVANCE(547);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(492);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'D') ADVANCE(543);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(549);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'T') ADVANCE(547);
      if (lookahead == 'U') ADVANCE(564);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(493);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'w') ADVANCE(546);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(494);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(495);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(496);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'w') ADVANCE(546);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(497);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '*') ADVANCE(421);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(498);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(583);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(500);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'n') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(501);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(500);
      if (lookahead == '/') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(502);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '.') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(506);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(507);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '?') ADVANCE(444);
      if (lookahead == 'C') ADVANCE(532);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'M') ADVANCE(525);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 'v') ADVANCE(537);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(508);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '?') ADVANCE(444);
      if (lookahead == 'C') ADVANCE(532);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'M') ADVANCE(525);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == 'c') ADVANCE(558);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 'v') ADVANCE(537);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '?') ADVANCE(444);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'M') ADVANCE(525);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(510);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'D') ADVANCE(543);
      if (lookahead == 'E') ADVANCE(566);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'S') ADVANCE(542);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 'X') ADVANCE(524);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(511);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead == 'I') ADVANCE(553);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead == 'M') ADVANCE(529);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == 'V') ADVANCE(531);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(512);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'C') ADVANCE(532);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'M') ADVANCE(525);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'R') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 'v') ADVANCE(537);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(513);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'M') ADVANCE(525);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == '^') ADVANCE(575);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 'o') ADVANCE(538);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 'v') ADVANCE(537);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(514);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'D') ADVANCE(580);
      if (lookahead == 'M') ADVANCE(525);
      if (lookahead == 'N') ADVANCE(579);
      if (lookahead == 'S') ADVANCE(527);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 'v') ADVANCE(537);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(515);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'D') ADVANCE(543);
      if (lookahead == 'E') ADVANCE(568);
      if (lookahead == 'S') ADVANCE(542);
      if (lookahead == 'X') ADVANCE(524);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(516);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'D') ADVANCE(543);
      if (lookahead == 'I') ADVANCE(540);
      if (lookahead == 'P') ADVANCE(535);
      if (lookahead == 'T') ADVANCE(547);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(517);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '\\') ADVANCE(571);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(518);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(519);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 11 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(521);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != 160) ADVANCE(443);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '>') ADVANCE(433);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '>') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'P') ADVANCE(78);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(576);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'S') ADVANCE(576);
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(577);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'U') ADVANCE(578);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(156);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(412);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'd') ADVANCE(412);
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'h') ADVANCE(162);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(249);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(93);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(248);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'x') ADVANCE(303);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == 'y') ADVANCE(280);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(622);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_sequence_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_sequence_token2);
      if (lookahead == '#' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_MS);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_SU);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_TU);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_cardinality_token1);
      if (lookahead == '.') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_cardinality_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(5);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '*') ADVANCE(590);
      if (lookahead == '/') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(590);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead == '/') ADVANCE(588);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(590);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_double_quote_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(590);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(591);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(592);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(594);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(344);
      if (lookahead == '.') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(596);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(342);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == 'Z') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(599);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '-') ADVANCE(347);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(342);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == 'Z') ADVANCE(602);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(342);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == 'Z') ADVANCE(602);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(342);
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == 'Z') ADVANCE(602);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(342);
      if (lookahead == 'Z') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(606);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'U') ADVANCE(578);
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '*') ADVANCE(633);
      if (lookahead == '/') ADVANCE(627);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_unit_token1);
      if (lookahead == '/') ADVANCE(611);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(610);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_preferred);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_extensible);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_Reference);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_Canonical);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_named);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_QMARK_BANG);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_param_rule_set_params_token1);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(633);
      if (lookahead == '/') ADVANCE(627);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      if (lookahead == '*') ADVANCE(633);
      if (lookahead == '/') ADVANCE(627);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(354);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) ADVANCE(625);
      if (lookahead != 0) ADVANCE(626);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_regex_pattern);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(626);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(636);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(632);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_fsh_comment_token1);
      if (lookahead == '*') ADVANCE(635);
      if (lookahead == '/') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(632);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_fsh_comment_token1);
      if (lookahead == '/') ADVANCE(630);
      if (aux_sym_fsh_comment_token1_character_set_1(lookahead)) ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(632);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_fsh_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(632);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(31);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(632);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_fsh_comment_token2);
      if (lookahead == '*') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(31);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 361},
  [3] = {.lex_state = 361},
  [4] = {.lex_state = 361},
  [5] = {.lex_state = 361},
  [6] = {.lex_state = 361},
  [7] = {.lex_state = 356},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 361},
  [11] = {.lex_state = 361},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 361},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 356},
  [18] = {.lex_state = 361},
  [19] = {.lex_state = 375},
  [20] = {.lex_state = 361},
  [21] = {.lex_state = 375},
  [22] = {.lex_state = 361},
  [23] = {.lex_state = 361},
  [24] = {.lex_state = 375},
  [25] = {.lex_state = 361},
  [26] = {.lex_state = 356},
  [27] = {.lex_state = 356},
  [28] = {.lex_state = 382},
  [29] = {.lex_state = 382},
  [30] = {.lex_state = 356},
  [31] = {.lex_state = 361},
  [32] = {.lex_state = 361},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 382},
  [35] = {.lex_state = 356},
  [36] = {.lex_state = 361},
  [37] = {.lex_state = 361},
  [38] = {.lex_state = 356},
  [39] = {.lex_state = 361},
  [40] = {.lex_state = 361},
  [41] = {.lex_state = 361},
  [42] = {.lex_state = 361},
  [43] = {.lex_state = 361},
  [44] = {.lex_state = 362},
  [45] = {.lex_state = 361},
  [46] = {.lex_state = 361},
  [47] = {.lex_state = 361},
  [48] = {.lex_state = 361},
  [49] = {.lex_state = 361},
  [50] = {.lex_state = 361},
  [51] = {.lex_state = 361},
  [52] = {.lex_state = 361},
  [53] = {.lex_state = 361},
  [54] = {.lex_state = 361},
  [55] = {.lex_state = 361},
  [56] = {.lex_state = 361},
  [57] = {.lex_state = 361},
  [58] = {.lex_state = 361},
  [59] = {.lex_state = 361},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 361},
  [62] = {.lex_state = 360},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 361},
  [65] = {.lex_state = 361},
  [66] = {.lex_state = 356},
  [67] = {.lex_state = 43},
  [68] = {.lex_state = 370},
  [69] = {.lex_state = 358},
  [70] = {.lex_state = 360},
  [71] = {.lex_state = 358},
  [72] = {.lex_state = 361},
  [73] = {.lex_state = 358},
  [74] = {.lex_state = 361},
  [75] = {.lex_state = 361},
  [76] = {.lex_state = 372},
  [77] = {.lex_state = 356},
  [78] = {.lex_state = 380},
  [79] = {.lex_state = 358},
  [80] = {.lex_state = 371},
  [81] = {.lex_state = 356},
  [82] = {.lex_state = 356},
  [83] = {.lex_state = 358},
  [84] = {.lex_state = 361},
  [85] = {.lex_state = 358},
  [86] = {.lex_state = 358},
  [87] = {.lex_state = 356},
  [88] = {.lex_state = 358},
  [89] = {.lex_state = 361},
  [90] = {.lex_state = 356},
  [91] = {.lex_state = 358},
  [92] = {.lex_state = 362},
  [93] = {.lex_state = 42},
  [94] = {.lex_state = 380},
  [95] = {.lex_state = 358},
  [96] = {.lex_state = 362},
  [97] = {.lex_state = 358},
  [98] = {.lex_state = 361},
  [99] = {.lex_state = 361},
  [100] = {.lex_state = 363},
  [101] = {.lex_state = 356},
  [102] = {.lex_state = 361},
  [103] = {.lex_state = 373},
  [104] = {.lex_state = 359},
  [105] = {.lex_state = 359},
  [106] = {.lex_state = 362},
  [107] = {.lex_state = 361},
  [108] = {.lex_state = 356},
  [109] = {.lex_state = 356},
  [110] = {.lex_state = 362},
  [111] = {.lex_state = 363},
  [112] = {.lex_state = 356},
  [113] = {.lex_state = 362},
  [114] = {.lex_state = 385},
  [115] = {.lex_state = 360},
  [116] = {.lex_state = 359},
  [117] = {.lex_state = 359},
  [118] = {.lex_state = 359},
  [119] = {.lex_state = 359},
  [120] = {.lex_state = 356},
  [121] = {.lex_state = 356},
  [122] = {.lex_state = 360},
  [123] = {.lex_state = 359},
  [124] = {.lex_state = 359},
  [125] = {.lex_state = 359},
  [126] = {.lex_state = 356},
  [127] = {.lex_state = 385},
  [128] = {.lex_state = 356},
  [129] = {.lex_state = 359},
  [130] = {.lex_state = 359},
  [131] = {.lex_state = 360},
  [132] = {.lex_state = 45},
  [133] = {.lex_state = 360},
  [134] = {.lex_state = 45},
  [135] = {.lex_state = 360},
  [136] = {.lex_state = 387},
  [137] = {.lex_state = 387},
  [138] = {.lex_state = 360},
  [139] = {.lex_state = 45},
  [140] = {.lex_state = 376},
  [141] = {.lex_state = 360},
  [142] = {.lex_state = 360},
  [143] = {.lex_state = 384},
  [144] = {.lex_state = 385},
  [145] = {.lex_state = 360},
  [146] = {.lex_state = 376},
  [147] = {.lex_state = 360},
  [148] = {.lex_state = 46},
  [149] = {.lex_state = 361},
  [150] = {.lex_state = 46},
  [151] = {.lex_state = 360},
  [152] = {.lex_state = 384},
  [153] = {.lex_state = 361},
  [154] = {.lex_state = 386},
  [155] = {.lex_state = 364},
  [156] = {.lex_state = 361},
  [157] = {.lex_state = 361},
  [158] = {.lex_state = 361},
  [159] = {.lex_state = 364},
  [160] = {.lex_state = 393},
  [161] = {.lex_state = 384},
  [162] = {.lex_state = 361},
  [163] = {.lex_state = 393},
  [164] = {.lex_state = 361},
  [165] = {.lex_state = 361},
  [166] = {.lex_state = 361},
  [167] = {.lex_state = 361},
  [168] = {.lex_state = 361},
  [169] = {.lex_state = 361},
  [170] = {.lex_state = 367},
  [171] = {.lex_state = 367},
  [172] = {.lex_state = 361},
  [173] = {.lex_state = 361},
  [174] = {.lex_state = 361},
  [175] = {.lex_state = 386},
  [176] = {.lex_state = 361},
  [177] = {.lex_state = 361},
  [178] = {.lex_state = 387},
  [179] = {.lex_state = 16},
  [180] = {.lex_state = 361},
  [181] = {.lex_state = 386},
  [182] = {.lex_state = 361},
  [183] = {.lex_state = 361},
  [184] = {.lex_state = 363},
  [185] = {.lex_state = 356},
  [186] = {.lex_state = 361},
  [187] = {.lex_state = 361},
  [188] = {.lex_state = 383},
  [189] = {.lex_state = 361},
  [190] = {.lex_state = 383},
  [191] = {.lex_state = 381},
  [192] = {.lex_state = 381},
  [193] = {.lex_state = 367},
  [194] = {.lex_state = 356},
  [195] = {.lex_state = 363},
  [196] = {.lex_state = 368},
  [197] = {.lex_state = 374},
  [198] = {.lex_state = 374},
  [199] = {.lex_state = 393},
  [200] = {.lex_state = 356},
  [201] = {.lex_state = 28},
  [202] = {.lex_state = 365},
  [203] = {.lex_state = 365},
  [204] = {.lex_state = 388},
  [205] = {.lex_state = 388},
  [206] = {.lex_state = 366},
  [207] = {.lex_state = 366},
  [208] = {.lex_state = 364},
  [209] = {.lex_state = 361},
  [210] = {.lex_state = 28},
  [211] = {.lex_state = 356},
  [212] = {.lex_state = 356},
  [213] = {.lex_state = 368},
  [214] = {.lex_state = 361},
  [215] = {.lex_state = 361},
  [216] = {.lex_state = 379},
  [217] = {.lex_state = 369},
  [218] = {.lex_state = 361},
  [219] = {.lex_state = 361},
  [220] = {.lex_state = 361},
  [221] = {.lex_state = 361},
  [222] = {.lex_state = 361},
  [223] = {.lex_state = 361},
  [224] = {.lex_state = 361},
  [225] = {.lex_state = 376},
  [226] = {.lex_state = 376},
  [227] = {.lex_state = 361},
  [228] = {.lex_state = 361},
  [229] = {.lex_state = 361},
  [230] = {.lex_state = 361},
  [231] = {.lex_state = 361},
  [232] = {.lex_state = 42},
  [233] = {.lex_state = 361},
  [234] = {.lex_state = 383},
  [235] = {.lex_state = 361},
  [236] = {.lex_state = 361},
  [237] = {.lex_state = 381},
  [238] = {.lex_state = 361},
  [239] = {.lex_state = 379},
  [240] = {.lex_state = 361},
  [241] = {.lex_state = 389},
  [242] = {.lex_state = 389},
  [243] = {.lex_state = 361},
  [244] = {.lex_state = 361},
  [245] = {.lex_state = 361},
  [246] = {.lex_state = 361},
  [247] = {.lex_state = 377},
  [248] = {.lex_state = 377},
  [249] = {.lex_state = 374},
  [250] = {.lex_state = 368},
  [251] = {.lex_state = 391},
  [252] = {.lex_state = 391},
  [253] = {.lex_state = 361},
  [254] = {.lex_state = 361},
  [255] = {.lex_state = 7},
  [256] = {.lex_state = 369},
  [257] = {.lex_state = 47},
  [258] = {.lex_state = 390},
  [259] = {.lex_state = 388},
  [260] = {.lex_state = 390},
  [261] = {.lex_state = 366},
  [262] = {.lex_state = 361},
  [263] = {.lex_state = 365},
  [264] = {.lex_state = 361},
  [265] = {.lex_state = 392},
  [266] = {.lex_state = 361},
  [267] = {.lex_state = 361},
  [268] = {.lex_state = 47},
  [269] = {.lex_state = 378},
  [270] = {.lex_state = 361},
  [271] = {.lex_state = 356},
  [272] = {.lex_state = 43},
  [273] = {.lex_state = 356},
  [274] = {.lex_state = 361},
  [275] = {.lex_state = 43},
  [276] = {.lex_state = 379},
  [277] = {.lex_state = 361},
  [278] = {.lex_state = 361},
  [279] = {.lex_state = 389},
  [280] = {.lex_state = 361},
  [281] = {.lex_state = 361},
  [282] = {.lex_state = 361},
  [283] = {.lex_state = 361},
  [284] = {.lex_state = 361},
  [285] = {.lex_state = 361},
  [286] = {.lex_state = 361},
  [287] = {.lex_state = 361},
  [288] = {.lex_state = 361},
  [289] = {.lex_state = 392},
  [290] = {.lex_state = 361},
  [291] = {.lex_state = 361},
  [292] = {.lex_state = 369},
  [293] = {.lex_state = 361},
  [294] = {.lex_state = 361},
  [295] = {.lex_state = 361},
  [296] = {.lex_state = 361},
  [297] = {.lex_state = 361},
  [298] = {.lex_state = 47},
  [299] = {.lex_state = 361},
  [300] = {.lex_state = 361},
  [301] = {.lex_state = 361},
  [302] = {.lex_state = 361},
  [303] = {.lex_state = 390},
  [304] = {.lex_state = 361},
  [305] = {.lex_state = 377},
  [306] = {.lex_state = 47},
  [307] = {.lex_state = 361},
  [308] = {.lex_state = 361},
  [309] = {.lex_state = 361},
  [310] = {.lex_state = 391},
  [311] = {.lex_state = 361},
  [312] = {.lex_state = 42},
  [313] = {.lex_state = 361},
  [314] = {.lex_state = 361},
  [315] = {.lex_state = 47},
  [316] = {.lex_state = 47},
  [317] = {.lex_state = 47},
  [318] = {.lex_state = 361},
  [319] = {.lex_state = 47},
  [320] = {.lex_state = 47},
  [321] = {.lex_state = 361},
  [322] = {.lex_state = 47},
  [323] = {.lex_state = 47},
  [324] = {.lex_state = 392},
  [325] = {.lex_state = 361},
  [326] = {.lex_state = 47},
  [327] = {.lex_state = 47},
  [328] = {.lex_state = 47},
  [329] = {.lex_state = 47},
  [330] = {.lex_state = 394},
  [331] = {.lex_state = 394},
  [332] = {.lex_state = 47},
  [333] = {.lex_state = 47},
  [334] = {.lex_state = 47},
  [335] = {.lex_state = 47},
  [336] = {.lex_state = 361},
  [337] = {.lex_state = 47},
  [338] = {.lex_state = 47},
  [339] = {.lex_state = 47},
  [340] = {.lex_state = 42},
  [341] = {.lex_state = 47},
  [342] = {.lex_state = 47},
  [343] = {.lex_state = 361},
  [344] = {.lex_state = 47},
  [345] = {.lex_state = 361},
  [346] = {.lex_state = 47},
  [347] = {.lex_state = 361},
  [348] = {.lex_state = 361},
  [349] = {.lex_state = 361},
  [350] = {.lex_state = 361},
  [351] = {.lex_state = 361},
  [352] = {.lex_state = 361},
  [353] = {.lex_state = 361},
  [354] = {.lex_state = 47},
  [355] = {.lex_state = 47},
  [356] = {.lex_state = 361},
  [357] = {.lex_state = 47},
  [358] = {.lex_state = 361},
  [359] = {.lex_state = 361},
  [360] = {.lex_state = 361},
  [361] = {.lex_state = 47},
  [362] = {.lex_state = 47},
  [363] = {.lex_state = 47},
  [364] = {.lex_state = 361},
  [365] = {.lex_state = 361},
  [366] = {.lex_state = 361},
  [367] = {.lex_state = 361},
  [368] = {.lex_state = 361},
  [369] = {.lex_state = 361},
  [370] = {.lex_state = 361},
  [371] = {.lex_state = 361},
  [372] = {.lex_state = 361},
  [373] = {.lex_state = 361},
  [374] = {.lex_state = 361},
  [375] = {.lex_state = 361},
  [376] = {.lex_state = 361},
  [377] = {.lex_state = 361},
  [378] = {.lex_state = 361},
  [379] = {.lex_state = 361},
  [380] = {.lex_state = 361},
  [381] = {.lex_state = 361},
  [382] = {.lex_state = 361},
  [383] = {.lex_state = 361},
  [384] = {.lex_state = 361},
  [385] = {.lex_state = 361},
  [386] = {.lex_state = 361},
  [387] = {.lex_state = 361},
  [388] = {.lex_state = 361},
  [389] = {.lex_state = 361},
  [390] = {.lex_state = 361},
  [391] = {.lex_state = 361},
  [392] = {.lex_state = 361},
  [393] = {.lex_state = 361},
  [394] = {.lex_state = 361},
  [395] = {.lex_state = 361},
  [396] = {.lex_state = 361},
  [397] = {.lex_state = 361},
  [398] = {.lex_state = 361},
  [399] = {.lex_state = 394},
  [400] = {.lex_state = 361},
  [401] = {.lex_state = 361},
  [402] = {.lex_state = 361},
  [403] = {.lex_state = 361},
  [404] = {.lex_state = 361},
  [405] = {.lex_state = 361},
  [406] = {.lex_state = 361},
  [407] = {.lex_state = 361},
  [408] = {.lex_state = 361},
  [409] = {.lex_state = 361},
  [410] = {.lex_state = 361},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 17},
  [414] = {.lex_state = 20},
  [415] = {.lex_state = 361},
  [416] = {.lex_state = 356},
  [417] = {.lex_state = 361},
  [418] = {.lex_state = 18},
  [419] = {.lex_state = 44},
  [420] = {.lex_state = 44},
  [421] = {.lex_state = 356},
  [422] = {.lex_state = 18},
  [423] = {.lex_state = 33},
  [424] = {.lex_state = 21},
  [425] = {.lex_state = 44},
  [426] = {.lex_state = 21},
  [427] = {.lex_state = 51},
  [428] = {.lex_state = 356},
  [429] = {.lex_state = 10},
  [430] = {.lex_state = 10},
  [431] = {.lex_state = 21},
  [432] = {.lex_state = 10},
  [433] = {.lex_state = 40},
  [434] = {.lex_state = 21},
  [435] = {.lex_state = 10},
  [436] = {.lex_state = 10},
  [437] = {.lex_state = 10},
  [438] = {.lex_state = 10},
  [439] = {.lex_state = 10},
  [440] = {.lex_state = 10},
  [441] = {.lex_state = 10},
  [442] = {.lex_state = 10},
  [443] = {.lex_state = 10},
  [444] = {.lex_state = 10},
  [445] = {.lex_state = 49},
  [446] = {.lex_state = 10},
  [447] = {.lex_state = 21},
  [448] = {.lex_state = 10},
  [449] = {.lex_state = 10},
  [450] = {.lex_state = 10},
  [451] = {.lex_state = 48},
  [452] = {.lex_state = 48},
  [453] = {.lex_state = 10},
  [454] = {.lex_state = 10},
  [455] = {.lex_state = 10},
  [456] = {.lex_state = 10},
  [457] = {.lex_state = 10},
  [458] = {.lex_state = 21},
  [459] = {.lex_state = 10},
  [460] = {.lex_state = 10},
  [461] = {.lex_state = 10},
  [462] = {.lex_state = 52},
  [463] = {.lex_state = 10},
  [464] = {.lex_state = 10},
  [465] = {.lex_state = 10},
  [466] = {.lex_state = 10},
  [467] = {.lex_state = 10},
  [468] = {.lex_state = 10},
  [469] = {.lex_state = 10},
  [470] = {.lex_state = 49},
  [471] = {.lex_state = 10},
  [472] = {.lex_state = 10},
  [473] = {.lex_state = 19},
  [474] = {.lex_state = 49},
  [475] = {.lex_state = 53},
  [476] = {.lex_state = 26},
  [477] = {.lex_state = 26},
  [478] = {.lex_state = 53},
  [479] = {.lex_state = 18},
  [480] = {.lex_state = 18},
  [481] = {.lex_state = 8},
  [482] = {.lex_state = 8},
  [483] = {.lex_state = 53},
  [484] = {.lex_state = 53},
  [485] = {.lex_state = 35},
  [486] = {.lex_state = 48},
  [487] = {.lex_state = 53},
  [488] = {.lex_state = 35},
  [489] = {.lex_state = 19},
  [490] = {.lex_state = 53},
  [491] = {.lex_state = 9},
  [492] = {.lex_state = 6},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 24},
  [495] = {.lex_state = 24},
  [496] = {.lex_state = 50},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 14},
  [499] = {.lex_state = 53},
  [500] = {.lex_state = 18},
  [501] = {.lex_state = 13},
  [502] = {.lex_state = 13},
  [503] = {.lex_state = 18},
  [504] = {.lex_state = 13},
  [505] = {.lex_state = 19},
  [506] = {.lex_state = 13},
  [507] = {.lex_state = 13},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 25},
  [510] = {.lex_state = 13},
  [511] = {.lex_state = 13},
  [512] = {.lex_state = 53},
  [513] = {.lex_state = 14},
  [514] = {.lex_state = 361},
  [515] = {.lex_state = 53},
  [516] = {.lex_state = 36},
  [517] = {.lex_state = 36},
  [518] = {.lex_state = 18},
  [519] = {.lex_state = 13},
  [520] = {.lex_state = 18},
  [521] = {.lex_state = 53},
  [522] = {.lex_state = 53},
  [523] = {.lex_state = 26},
  [524] = {.lex_state = 27},
  [525] = {.lex_state = 53},
  [526] = {.lex_state = 27},
  [527] = {.lex_state = 361},
  [528] = {.lex_state = 13},
  [529] = {.lex_state = 14},
  [530] = {.lex_state = 13},
  [531] = {.lex_state = 13},
  [532] = {.lex_state = 6},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 13},
  [535] = {.lex_state = 35},
  [536] = {.lex_state = 13},
  [537] = {.lex_state = 361},
  [538] = {.lex_state = 361},
  [539] = {.lex_state = 25},
  [540] = {.lex_state = 9},
  [541] = {.lex_state = 13},
  [542] = {.lex_state = 13},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 40},
  [545] = {.lex_state = 8},
  [546] = {.lex_state = 18},
  [547] = {.lex_state = 18},
  [548] = {.lex_state = 53},
  [549] = {.lex_state = 53},
  [550] = {.lex_state = 40},
  [551] = {.lex_state = 18},
  [552] = {.lex_state = 18},
  [553] = {.lex_state = 13},
  [554] = {.lex_state = 361},
  [555] = {.lex_state = 11},
  [556] = {.lex_state = 11},
  [557] = {.lex_state = 53},
  [558] = {.lex_state = 18},
  [559] = {.lex_state = 13},
  [560] = {.lex_state = 361},
  [561] = {.lex_state = 41},
  [562] = {.lex_state = 23},
  [563] = {.lex_state = 40},
  [564] = {.lex_state = 361},
  [565] = {.lex_state = 378},
  [566] = {.lex_state = 9},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 40},
  [569] = {.lex_state = 25},
  [570] = {.lex_state = 361},
  [571] = {.lex_state = 23},
  [572] = {.lex_state = 6},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 361},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 27},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 11},
  [580] = {.lex_state = 23},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 36},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 12},
  [586] = {.lex_state = 12},
  [587] = {.lex_state = 41},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 13},
  [591] = {.lex_state = 22},
  [592] = {.lex_state = 22},
  [593] = {.lex_state = 378},
  [594] = {.lex_state = 40},
  [595] = {.lex_state = 361},
  [596] = {.lex_state = 14},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 21},
  [599] = {.lex_state = 24},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 41},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 361},
  [605] = {.lex_state = 361},
  [606] = {.lex_state = 361},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 361},
  [609] = {.lex_state = 361},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 12},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 361},
  [615] = {.lex_state = 361},
  [616] = {.lex_state = 23},
  [617] = {.lex_state = 22},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 30},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 361},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 631},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 356},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 1},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 38},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {(TSStateId)(-1)},
  [683] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_fsh_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Alias] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_Profile] = ACTIONS(1),
    [anon_sym_Extension] = ACTIONS(1),
    [anon_sym_Invariant] = ACTIONS(1),
    [anon_sym_Instance] = ACTIONS(1),
    [anon_sym_ValueSet] = ACTIONS(1),
    [anon_sym_CodeSystem] = ACTIONS(1),
    [anon_sym_Mapping] = ACTIONS(1),
    [anon_sym_Logical] = ACTIONS(1),
    [anon_sym_Resource] = ACTIONS(1),
    [anon_sym_RuleSet] = ACTIONS(1),
    [anon_sym_Expression] = ACTIONS(1),
    [anon_sym_Id] = ACTIONS(1),
    [anon_sym_InstanceOf] = ACTIONS(1),
    [anon_sym_Parent] = ACTIONS(1),
    [anon_sym_Severity] = ACTIONS(1),
    [anon_sym_Source] = ACTIONS(1),
    [anon_sym_Target] = ACTIONS(1),
    [anon_sym_Title] = ACTIONS(1),
    [anon_sym_Usage] = ACTIONS(1),
    [anon_sym_XPath] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_contentReference] = ACTIONS(1),
    [anon_sym_insert] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_exactly] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_obeys] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_exclude] = ACTIONS(1),
    [anon_sym_codes] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_valueset] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_sequence_token2] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_MS] = ACTIONS(1),
    [anon_sym_SU] = ACTIONS(1),
    [anon_sym_TU] = ACTIONS(1),
    [anon_sym_N] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [aux_sym_cardinality_token1] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_T] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_example] = ACTIONS(1),
    [anon_sym_preferred] = ACTIONS(1),
    [anon_sym_extensible] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_Reference] = ACTIONS(1),
    [anon_sym_Canonical] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_named] = ACTIONS(1),
    [anon_sym_QMARK_BANG] = ACTIONS(1),
    [aux_sym_param_rule_set_params_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH2] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [1] = {
    [sym_doc] = STATE(642),
    [sym_alias] = STATE(411),
    [sym_profile] = STATE(411),
    [sym_extension] = STATE(411),
    [sym_invariant] = STATE(411),
    [sym_instance] = STATE(411),
    [sym_valueset] = STATE(411),
    [sym_codesystem] = STATE(411),
    [sym_mapping] = STATE(411),
    [sym_logical] = STATE(411),
    [sym_resource] = STATE(411),
    [sym_rule_set] = STATE(411),
    [sym_param_rule_set] = STATE(411),
    [sym_fsh_comment] = STATE(1),
    [aux_sym_doc_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_Alias] = ACTIONS(9),
    [anon_sym_Profile] = ACTIONS(11),
    [anon_sym_Extension] = ACTIONS(13),
    [anon_sym_Invariant] = ACTIONS(15),
    [anon_sym_Instance] = ACTIONS(17),
    [anon_sym_ValueSet] = ACTIONS(19),
    [anon_sym_CodeSystem] = ACTIONS(21),
    [anon_sym_Mapping] = ACTIONS(23),
    [anon_sym_Logical] = ACTIONS(25),
    [anon_sym_Resource] = ACTIONS(27),
    [anon_sym_RuleSet] = ACTIONS(29),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(33), 1,
      anon_sym_Instance,
    STATE(2), 1,
      sym_fsh_comment,
    ACTIONS(31), 40,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Parent,
      anon_sym_Severity,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_XPath,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_GT,
      anon_sym_where,
      anon_sym_POUND,
      anon_sym_CARET,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_PIPE,
      anon_sym_named,
  [55] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(39), 1,
      anon_sym_Id,
    ACTIONS(41), 1,
      anon_sym_Parent,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(3), 1,
      sym_fsh_comment,
    STATE(5), 1,
      aux_sym_profile_repeat1,
    STATE(48), 1,
      aux_sym_logical_repeat1,
    STATE(187), 1,
      sym_sd_metadata,
    STATE(387), 1,
      sym_lr_rule,
    STATE(367), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(186), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(409), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(35), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [129] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(39), 1,
      anon_sym_Id,
    ACTIONS(41), 1,
      anon_sym_Parent,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(4), 1,
      sym_fsh_comment,
    STATE(6), 1,
      aux_sym_profile_repeat1,
    STATE(49), 1,
      aux_sym_logical_repeat1,
    STATE(187), 1,
      sym_sd_metadata,
    STATE(387), 1,
      sym_lr_rule,
    STATE(367), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(186), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(409), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(47), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [203] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(39), 1,
      anon_sym_Id,
    ACTIONS(41), 1,
      anon_sym_Parent,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(5), 1,
      sym_fsh_comment,
    STATE(46), 1,
      aux_sym_logical_repeat1,
    STATE(74), 1,
      aux_sym_profile_repeat1,
    STATE(187), 1,
      sym_sd_metadata,
    STATE(387), 1,
      sym_lr_rule,
    STATE(367), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(186), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(409), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(49), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [277] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(39), 1,
      anon_sym_Id,
    ACTIONS(41), 1,
      anon_sym_Parent,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(6), 1,
      sym_fsh_comment,
    STATE(47), 1,
      aux_sym_logical_repeat1,
    STATE(74), 1,
      aux_sym_profile_repeat1,
    STATE(187), 1,
      sym_sd_metadata,
    STATE(387), 1,
      sym_lr_rule,
    STATE(367), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(186), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(409), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(51), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [351] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(55), 1,
      anon_sym_EQ,
    ACTIONS(57), 1,
      anon_sym_insert,
    ACTIONS(59), 1,
      anon_sym_from,
    ACTIONS(61), 1,
      anon_sym_contains,
    ACTIONS(63), 1,
      anon_sym_and,
    ACTIONS(65), 1,
      anon_sym_obeys,
    ACTIONS(67), 1,
      anon_sym_only,
    ACTIONS(69), 1,
      anon_sym_DASH_GT,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      aux_sym_cardinality_token1,
    ACTIONS(77), 1,
      anon_sym_DOT_DOT,
    STATE(7), 1,
      sym_fsh_comment,
    STATE(67), 1,
      sym_cardinality,
    STATE(108), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(121), 1,
      sym_flag,
    STATE(416), 1,
      aux_sym_flag_rule_repeat1,
    STATE(666), 1,
      sym_caret_path,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(53), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [432] = 23,
    ACTIONS(83), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      aux_sym_sequence_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(93), 1,
      sym_number,
    ACTIONS(95), 1,
      sym_date,
    ACTIONS(97), 1,
      sym_time,
    ACTIONS(99), 1,
      anon_sym_Reference,
    ACTIONS(101), 1,
      anon_sym_Canonical,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(8), 1,
      sym_fsh_comment,
    STATE(158), 1,
      sym_code,
    STATE(247), 1,
      aux_sym_sequence_repeat1,
    STATE(264), 1,
      sym_reference,
    STATE(274), 1,
      sym_quantity,
    STATE(325), 1,
      sym_sequence,
    STATE(380), 1,
      sym_value,
    STATE(662), 1,
      sym_ratio_part,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    STATE(318), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [517] = 23,
    ACTIONS(83), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      aux_sym_sequence_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(93), 1,
      sym_number,
    ACTIONS(95), 1,
      sym_date,
    ACTIONS(97), 1,
      sym_time,
    ACTIONS(99), 1,
      anon_sym_Reference,
    ACTIONS(101), 1,
      anon_sym_Canonical,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(9), 1,
      sym_fsh_comment,
    STATE(158), 1,
      sym_code,
    STATE(247), 1,
      aux_sym_sequence_repeat1,
    STATE(264), 1,
      sym_reference,
    STATE(274), 1,
      sym_quantity,
    STATE(325), 1,
      sym_sequence,
    STATE(401), 1,
      sym_value,
    STATE(662), 1,
      sym_ratio_part,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    STATE(318), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [602] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(39), 1,
      anon_sym_Id,
    ACTIONS(41), 1,
      anon_sym_Parent,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(109), 1,
      anon_sym_STAR,
    STATE(10), 1,
      sym_fsh_comment,
    STATE(57), 1,
      aux_sym_profile_repeat2,
    STATE(74), 1,
      aux_sym_profile_repeat1,
    STATE(187), 1,
      sym_sd_metadata,
    STATE(408), 1,
      sym_sd_rule,
    STATE(186), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(409), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(107), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [671] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(39), 1,
      anon_sym_Id,
    ACTIONS(41), 1,
      anon_sym_Parent,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(109), 1,
      anon_sym_STAR,
    STATE(10), 1,
      aux_sym_profile_repeat1,
    STATE(11), 1,
      sym_fsh_comment,
    STATE(61), 1,
      aux_sym_profile_repeat2,
    STATE(187), 1,
      sym_sd_metadata,
    STATE(408), 1,
      sym_sd_rule,
    STATE(186), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(409), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(111), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [740] = 23,
    ACTIONS(83), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      aux_sym_sequence_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(93), 1,
      sym_number,
    ACTIONS(95), 1,
      sym_date,
    ACTIONS(97), 1,
      sym_time,
    ACTIONS(99), 1,
      anon_sym_Reference,
    ACTIONS(101), 1,
      anon_sym_Canonical,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 1,
      sym_fsh_comment,
    STATE(158), 1,
      sym_code,
    STATE(247), 1,
      aux_sym_sequence_repeat1,
    STATE(264), 1,
      sym_reference,
    STATE(274), 1,
      sym_quantity,
    STATE(325), 1,
      sym_sequence,
    STATE(400), 1,
      sym_value,
    STATE(662), 1,
      sym_ratio_part,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    STATE(318), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [825] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(39), 1,
      anon_sym_Id,
    ACTIONS(41), 1,
      anon_sym_Parent,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(109), 1,
      anon_sym_STAR,
    STATE(13), 1,
      sym_fsh_comment,
    STATE(64), 1,
      aux_sym_profile_repeat2,
    STATE(74), 1,
      aux_sym_profile_repeat1,
    STATE(187), 1,
      sym_sd_metadata,
    STATE(408), 1,
      sym_sd_rule,
    STATE(186), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    STATE(409), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(113), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [894] = 23,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(95), 1,
      sym_date,
    ACTIONS(97), 1,
      sym_time,
    ACTIONS(99), 1,
      anon_sym_Reference,
    ACTIONS(101), 1,
      anon_sym_Canonical,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      aux_sym_sequence_token1,
    ACTIONS(119), 1,
      sym_number,
    STATE(14), 1,
      sym_fsh_comment,
    STATE(158), 1,
      sym_code,
    STATE(197), 1,
      aux_sym_sequence_repeat1,
    STATE(264), 1,
      sym_reference,
    STATE(274), 1,
      sym_quantity,
    STATE(280), 1,
      sym_sequence,
    STATE(350), 1,
      sym_value,
    STATE(667), 1,
      sym_ratio_part,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    STATE(318), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [979] = 23,
    ACTIONS(83), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      aux_sym_sequence_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(93), 1,
      sym_number,
    ACTIONS(95), 1,
      sym_date,
    ACTIONS(97), 1,
      sym_time,
    ACTIONS(99), 1,
      anon_sym_Reference,
    ACTIONS(101), 1,
      anon_sym_Canonical,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 1,
      sym_fsh_comment,
    STATE(158), 1,
      sym_code,
    STATE(247), 1,
      aux_sym_sequence_repeat1,
    STATE(264), 1,
      sym_reference,
    STATE(274), 1,
      sym_quantity,
    STATE(325), 1,
      sym_sequence,
    STATE(398), 1,
      sym_value,
    STATE(662), 1,
      sym_ratio_part,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    STATE(318), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1064] = 23,
    ACTIONS(83), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      aux_sym_sequence_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(93), 1,
      sym_number,
    ACTIONS(95), 1,
      sym_date,
    ACTIONS(97), 1,
      sym_time,
    ACTIONS(99), 1,
      anon_sym_Reference,
    ACTIONS(101), 1,
      anon_sym_Canonical,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      sym_fsh_comment,
    STATE(158), 1,
      sym_code,
    STATE(247), 1,
      aux_sym_sequence_repeat1,
    STATE(264), 1,
      sym_reference,
    STATE(274), 1,
      sym_quantity,
    STATE(325), 1,
      sym_sequence,
    STATE(407), 1,
      sym_value,
    STATE(662), 1,
      sym_ratio_part,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
    STATE(318), 8,
      sym_code_string,
      sym_name,
      sym_string,
      sym_multiline_string,
      sym_datetime,
      sym_ratio,
      sym_bool,
      sym_canonical,
  [1149] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(55), 1,
      anon_sym_EQ,
    ACTIONS(57), 1,
      anon_sym_insert,
    ACTIONS(59), 1,
      anon_sym_from,
    ACTIONS(61), 1,
      anon_sym_contains,
    ACTIONS(63), 1,
      anon_sym_and,
    ACTIONS(65), 1,
      anon_sym_obeys,
    ACTIONS(67), 1,
      anon_sym_only,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      aux_sym_cardinality_token1,
    ACTIONS(77), 1,
      anon_sym_DOT_DOT,
    STATE(17), 1,
      sym_fsh_comment,
    STATE(67), 1,
      sym_cardinality,
    STATE(108), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(121), 1,
      sym_flag,
    STATE(416), 1,
      aux_sym_flag_rule_repeat1,
    STATE(666), 1,
      sym_caret_path,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(53), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [1227] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      anon_sym_STAR,
    STATE(388), 1,
      sym_rule_set_rule,
    STATE(18), 2,
      sym_fsh_comment,
      aux_sym_rule_set_repeat1,
    STATE(389), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(409), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(121), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [1280] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      aux_sym_sequence_token1,
    STATE(19), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 30,
      anon_sym_Alias,
      anon_sym_EQ,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_DASH_GT,
      anon_sym_POUND,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
  [1329] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(135), 1,
      anon_sym_STAR,
    STATE(18), 1,
      aux_sym_rule_set_repeat1,
    STATE(20), 1,
      sym_fsh_comment,
    STATE(388), 1,
      sym_rule_set_rule,
    STATE(389), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(409), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(133), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [1384] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      aux_sym_sequence_token1,
    STATE(19), 1,
      aux_sym_sequence_repeat1,
    STATE(21), 1,
      sym_fsh_comment,
    ACTIONS(33), 30,
      anon_sym_Alias,
      anon_sym_EQ,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_DASH_GT,
      anon_sym_POUND,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
  [1435] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(135), 1,
      anon_sym_STAR,
    STATE(22), 1,
      sym_fsh_comment,
    STATE(23), 1,
      aux_sym_param_rule_set_repeat1,
    STATE(390), 1,
      sym_rule_set_rule,
    STATE(389), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(409), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(139), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [1490] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(143), 1,
      anon_sym_STAR,
    STATE(390), 1,
      sym_rule_set_rule,
    STATE(23), 2,
      sym_fsh_comment,
      aux_sym_param_rule_set_repeat1,
    STATE(389), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(409), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(141), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [1543] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym_fsh_comment,
    ACTIONS(148), 31,
      anon_sym_Alias,
      anon_sym_EQ,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_DASH_GT,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
  [1589] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(152), 1,
      anon_sym_Instance,
    STATE(25), 1,
      sym_fsh_comment,
    ACTIONS(150), 31,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Parent,
      anon_sym_Severity,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_XPath,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_where,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_named,
  [1635] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 1,
      sym_fsh_comment,
    ACTIONS(31), 31,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_EQ,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_DASH_GT,
      anon_sym_POUND,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
  [1678] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(156), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_fsh_comment,
    ACTIONS(158), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(154), 28,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_EQ,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_DASH_GT,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [1725] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      aux_sym_sequence_token1,
    STATE(28), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 28,
      anon_sym_Alias,
      anon_sym_EQ,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
  [1772] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(164), 1,
      aux_sym_sequence_token1,
    STATE(28), 1,
      aux_sym_sequence_repeat1,
    STATE(29), 1,
      sym_fsh_comment,
    ACTIONS(33), 28,
      anon_sym_Alias,
      anon_sym_EQ,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
  [1821] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(55), 1,
      anon_sym_EQ,
    ACTIONS(57), 1,
      anon_sym_insert,
    ACTIONS(59), 1,
      anon_sym_from,
    ACTIONS(61), 1,
      anon_sym_contains,
    ACTIONS(63), 1,
      anon_sym_and,
    ACTIONS(65), 1,
      anon_sym_obeys,
    ACTIONS(67), 1,
      anon_sym_only,
    ACTIONS(71), 1,
      anon_sym_CARET,
    STATE(30), 1,
      sym_fsh_comment,
    STATE(108), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(121), 1,
      sym_flag,
    STATE(416), 1,
      aux_sym_flag_rule_repeat1,
    STATE(666), 1,
      sym_caret_path,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(53), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [1890] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(168), 1,
      anon_sym_Id,
    ACTIONS(170), 1,
      anon_sym_Source,
    ACTIONS(172), 1,
      anon_sym_Target,
    ACTIONS(174), 1,
      anon_sym_STAR,
    STATE(31), 1,
      sym_fsh_comment,
    STATE(56), 1,
      aux_sym_mapping_repeat1,
    STATE(168), 1,
      aux_sym_mapping_repeat2,
    STATE(174), 1,
      sym_mapping_metadata,
    STATE(385), 1,
      sym_mapping_entity_rule,
    STATE(368), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(173), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(166), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [1956] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(168), 1,
      anon_sym_Id,
    ACTIONS(170), 1,
      anon_sym_Source,
    ACTIONS(172), 1,
      anon_sym_Target,
    ACTIONS(174), 1,
      anon_sym_STAR,
    STATE(31), 1,
      aux_sym_mapping_repeat1,
    STATE(32), 1,
      sym_fsh_comment,
    STATE(172), 1,
      aux_sym_mapping_repeat2,
    STATE(174), 1,
      sym_mapping_metadata,
    STATE(385), 1,
      sym_mapping_entity_rule,
    STATE(368), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    STATE(173), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(176), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2022] = 25,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      aux_sym_sequence_token1,
    ACTIONS(178), 1,
      anon_sym_insert,
    ACTIONS(180), 1,
      anon_sym_obeys,
    ACTIONS(182), 1,
      anon_sym_DASH_GT,
    ACTIONS(186), 1,
      anon_sym_codes,
    ACTIONS(188), 1,
      anon_sym_system,
    ACTIONS(190), 1,
      anon_sym_POUND,
    ACTIONS(192), 1,
      aux_sym_sequence_token2,
    ACTIONS(194), 1,
      anon_sym_CARET,
    STATE(7), 1,
      sym_path,
    STATE(21), 1,
      aux_sym_sequence_repeat1,
    STATE(27), 1,
      sym_sequence,
    STATE(33), 1,
      sym_fsh_comment,
    STATE(62), 1,
      aux_sym_code_insert_rule_repeat1,
    STATE(71), 1,
      sym_code,
    STATE(254), 1,
      sym_code_string,
    STATE(418), 1,
      aux_sym_code_caret_value_rule_repeat1,
    STATE(426), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(595), 1,
      sym_name,
    STATE(659), 1,
      sym_caret_path,
    ACTIONS(184), 2,
      anon_sym_include,
      anon_sym_exclude,
    STATE(386), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
    ACTIONS(79), 7,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [2106] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_fsh_comment,
    ACTIONS(148), 29,
      anon_sym_Alias,
      anon_sym_EQ,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      aux_sym_sequence_token1,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_BANG,
  [2150] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_fsh_comment,
    ACTIONS(158), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(154), 28,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_EQ,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_DASH_GT,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [2194] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(198), 1,
      anon_sym_Instance,
    STATE(36), 1,
      sym_fsh_comment,
    ACTIONS(196), 28,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Parent,
      anon_sym_Severity,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_XPath,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_DQUOTE,
  [2237] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(202), 1,
      anon_sym_Instance,
    STATE(37), 1,
      sym_fsh_comment,
    ACTIONS(200), 28,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Parent,
      anon_sym_Severity,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_XPath,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_DQUOTE,
  [2280] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
      sym_fsh_comment,
    ACTIONS(150), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    ACTIONS(154), 27,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_EQ,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_contains,
      anon_sym_and,
      anon_sym_obeys,
      anon_sym_only,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [2323] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(206), 1,
      anon_sym_Instance,
    ACTIONS(208), 1,
      anon_sym_InstanceOf,
    ACTIONS(210), 1,
      anon_sym_Usage,
    ACTIONS(212), 1,
      anon_sym_STAR,
    STATE(39), 1,
      sym_fsh_comment,
    STATE(72), 1,
      aux_sym_instance_repeat1,
    STATE(164), 1,
      aux_sym_instance_repeat2,
    STATE(183), 1,
      sym_instance_metadata,
    STATE(369), 1,
      sym_instance_rule,
    STATE(375), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(182), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(204), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2387] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(216), 1,
      anon_sym_STAR,
    STATE(387), 1,
      sym_lr_rule,
    STATE(40), 2,
      sym_fsh_comment,
      aux_sym_logical_repeat1,
    STATE(367), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(409), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(214), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2435] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(221), 1,
      anon_sym_Instance,
    STATE(41), 1,
      sym_fsh_comment,
    ACTIONS(219), 27,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Severity,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_XPath,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_DQUOTE,
  [2477] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(225), 1,
      anon_sym_Instance,
    STATE(42), 1,
      sym_fsh_comment,
    ACTIONS(223), 27,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Severity,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_XPath,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_DQUOTE,
  [2519] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(229), 1,
      anon_sym_Instance,
    STATE(43), 1,
      sym_fsh_comment,
    ACTIONS(227), 27,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Severity,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_XPath,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_DQUOTE,
  [2561] = 16,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      aux_sym_sequence_token1,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    STATE(44), 1,
      sym_fsh_comment,
    STATE(158), 1,
      sym_code,
    STATE(348), 1,
      sym_vs_filter_value,
    STATE(592), 1,
      aux_sym_sequence_repeat1,
    STATE(681), 1,
      sym_sequence,
    ACTIONS(235), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(349), 3,
      sym_code_string,
      sym_string,
      sym_regex,
    ACTIONS(233), 13,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [2625] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(245), 1,
      anon_sym_Instance,
    STATE(45), 1,
      sym_fsh_comment,
    ACTIONS(243), 27,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Severity,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_XPath,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_LPAREN,
      anon_sym_and,
      anon_sym_DQUOTE,
  [2667] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(40), 1,
      aux_sym_logical_repeat1,
    STATE(46), 1,
      sym_fsh_comment,
    STATE(387), 1,
      sym_lr_rule,
    STATE(367), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(409), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(247), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2717] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(40), 1,
      aux_sym_logical_repeat1,
    STATE(47), 1,
      sym_fsh_comment,
    STATE(387), 1,
      sym_lr_rule,
    STATE(367), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(409), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(249), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2767] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(40), 1,
      aux_sym_logical_repeat1,
    STATE(48), 1,
      sym_fsh_comment,
    STATE(387), 1,
      sym_lr_rule,
    STATE(367), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(409), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(49), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2817] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_STAR,
    STATE(40), 1,
      aux_sym_logical_repeat1,
    STATE(49), 1,
      sym_fsh_comment,
    STATE(387), 1,
      sym_lr_rule,
    STATE(367), 3,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_add_element_rule,
    STATE(409), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(51), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2867] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(208), 1,
      anon_sym_InstanceOf,
    ACTIONS(210), 1,
      anon_sym_Usage,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(253), 1,
      anon_sym_Instance,
    STATE(39), 1,
      aux_sym_instance_repeat1,
    STATE(50), 1,
      sym_fsh_comment,
    STATE(180), 1,
      aux_sym_instance_repeat2,
    STATE(183), 1,
      sym_instance_metadata,
    STATE(369), 1,
      sym_instance_rule,
    STATE(375), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    STATE(182), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(251), 11,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2931] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(257), 1,
      anon_sym_Id,
    ACTIONS(259), 1,
      anon_sym_STAR,
    STATE(51), 1,
      sym_fsh_comment,
    STATE(53), 1,
      aux_sym_valueset_repeat1,
    STATE(177), 1,
      aux_sym_valueset_repeat2,
    STATE(218), 1,
      sym_vs_metadata,
    STATE(372), 1,
      sym_vs_rule,
    STATE(219), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(376), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(255), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [2989] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(257), 1,
      anon_sym_Id,
    ACTIONS(263), 1,
      anon_sym_STAR,
    STATE(52), 1,
      sym_fsh_comment,
    STATE(54), 1,
      aux_sym_codesystem_repeat1,
    STATE(176), 1,
      aux_sym_codesystem_repeat2,
    STATE(223), 1,
      sym_cs_metadata,
    STATE(377), 1,
      sym_cs_rule,
    STATE(224), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(378), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(261), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [3047] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(257), 1,
      anon_sym_Id,
    ACTIONS(259), 1,
      anon_sym_STAR,
    STATE(53), 1,
      sym_fsh_comment,
    STATE(107), 1,
      aux_sym_valueset_repeat1,
    STATE(166), 1,
      aux_sym_valueset_repeat2,
    STATE(218), 1,
      sym_vs_metadata,
    STATE(372), 1,
      sym_vs_rule,
    STATE(219), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(376), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(265), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [3105] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(43), 1,
      anon_sym_Title,
    ACTIONS(257), 1,
      anon_sym_Id,
    ACTIONS(263), 1,
      anon_sym_STAR,
    STATE(54), 1,
      sym_fsh_comment,
    STATE(102), 1,
      aux_sym_codesystem_repeat1,
    STATE(153), 1,
      aux_sym_codesystem_repeat2,
    STATE(223), 1,
      sym_cs_metadata,
    STATE(377), 1,
      sym_cs_rule,
    STATE(224), 3,
      sym_description,
      sym_id,
      sym_title,
    STATE(378), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(267), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [3163] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(271), 1,
      anon_sym_Instance,
    STATE(55), 1,
      sym_fsh_comment,
    ACTIONS(269), 24,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Parent,
      anon_sym_Severity,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_XPath,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [3202] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(275), 1,
      anon_sym_Description,
    ACTIONS(278), 1,
      anon_sym_Id,
    ACTIONS(281), 1,
      anon_sym_Source,
    ACTIONS(284), 1,
      anon_sym_Target,
    ACTIONS(287), 1,
      anon_sym_Title,
    STATE(174), 1,
      sym_mapping_metadata,
    STATE(56), 2,
      sym_fsh_comment,
      aux_sym_mapping_repeat1,
    STATE(173), 5,
      sym_description,
      sym_id,
      sym_source,
      sym_target,
      sym_title,
    ACTIONS(273), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3253] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(109), 1,
      anon_sym_STAR,
    STATE(57), 1,
      sym_fsh_comment,
    STATE(59), 1,
      aux_sym_profile_repeat2,
    STATE(408), 1,
      sym_sd_rule,
    STATE(409), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(290), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [3298] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(294), 1,
      anon_sym_Instance,
    STATE(58), 1,
      sym_fsh_comment,
    ACTIONS(292), 24,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Parent,
      anon_sym_Severity,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_XPath,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [3337] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(298), 1,
      anon_sym_STAR,
    STATE(408), 1,
      sym_sd_rule,
    STATE(59), 2,
      sym_fsh_comment,
      aux_sym_profile_repeat2,
    STATE(409), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(296), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [3380] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_Alias,
    ACTIONS(11), 1,
      anon_sym_Profile,
    ACTIONS(13), 1,
      anon_sym_Extension,
    ACTIONS(15), 1,
      anon_sym_Invariant,
    ACTIONS(17), 1,
      anon_sym_Instance,
    ACTIONS(19), 1,
      anon_sym_ValueSet,
    ACTIONS(21), 1,
      anon_sym_CodeSystem,
    ACTIONS(23), 1,
      anon_sym_Mapping,
    ACTIONS(25), 1,
      anon_sym_Logical,
    ACTIONS(27), 1,
      anon_sym_Resource,
    ACTIONS(29), 1,
      anon_sym_RuleSet,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_fsh_comment,
    STATE(63), 1,
      aux_sym_doc_repeat1,
    STATE(411), 12,
      sym_alias,
      sym_profile,
      sym_extension,
      sym_invariant,
      sym_instance,
      sym_valueset,
      sym_codesystem,
      sym_mapping,
      sym_logical,
      sym_resource,
      sym_rule_set,
      sym_param_rule_set,
  [3443] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(109), 1,
      anon_sym_STAR,
    STATE(59), 1,
      aux_sym_profile_repeat2,
    STATE(61), 1,
      sym_fsh_comment,
    STATE(408), 1,
      sym_sd_rule,
    STATE(409), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(107), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [3488] = 17,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(91), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      aux_sym_sequence_token1,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(307), 1,
      anon_sym_insert,
    ACTIONS(309), 1,
      anon_sym_POUND,
    ACTIONS(311), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      sym_fsh_comment,
    STATE(70), 1,
      aux_sym_code_insert_rule_repeat1,
    STATE(151), 1,
      sym_code,
    STATE(194), 1,
      sym_string,
    STATE(381), 1,
      sym_multiline_string,
    STATE(592), 1,
      aux_sym_sequence_repeat1,
    STATE(632), 1,
      sym_sequence,
    ACTIONS(305), 12,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3551] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 1,
      anon_sym_Alias,
    ACTIONS(318), 1,
      anon_sym_Profile,
    ACTIONS(321), 1,
      anon_sym_Extension,
    ACTIONS(324), 1,
      anon_sym_Invariant,
    ACTIONS(327), 1,
      anon_sym_Instance,
    ACTIONS(330), 1,
      anon_sym_ValueSet,
    ACTIONS(333), 1,
      anon_sym_CodeSystem,
    ACTIONS(336), 1,
      anon_sym_Mapping,
    ACTIONS(339), 1,
      anon_sym_Logical,
    ACTIONS(342), 1,
      anon_sym_Resource,
    ACTIONS(345), 1,
      anon_sym_RuleSet,
    STATE(63), 2,
      sym_fsh_comment,
      aux_sym_doc_repeat1,
    STATE(411), 12,
      sym_alias,
      sym_profile,
      sym_extension,
      sym_invariant,
      sym_instance,
      sym_valueset,
      sym_codesystem,
      sym_mapping,
      sym_logical,
      sym_resource,
      sym_rule_set,
      sym_param_rule_set,
  [3612] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(109), 1,
      anon_sym_STAR,
    STATE(59), 1,
      aux_sym_profile_repeat2,
    STATE(64), 1,
      sym_fsh_comment,
    STATE(408), 1,
      sym_sd_rule,
    STATE(409), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
    ACTIONS(348), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [3657] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(352), 1,
      anon_sym_Instance,
    STATE(65), 1,
      sym_fsh_comment,
    ACTIONS(350), 23,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Parent,
      anon_sym_Severity,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_XPath,
      anon_sym_STAR,
  [3695] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(66), 1,
      sym_fsh_comment,
    ACTIONS(154), 24,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_EQ,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_and,
      anon_sym_DASH_GT,
      anon_sym_CARET,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [3731] = 18,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(99), 1,
      anon_sym_Reference,
    ACTIONS(101), 1,
      anon_sym_Canonical,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(354), 1,
      anon_sym_contentReference,
    ACTIONS(356), 1,
      aux_sym_sequence_token1,
    ACTIONS(360), 1,
      anon_sym_QMARK_BANG,
    STATE(25), 1,
      sym_sequence,
    STATE(67), 1,
      sym_fsh_comment,
    STATE(93), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(287), 1,
      sym_reference,
    STATE(312), 1,
      sym_flag,
    STATE(555), 1,
      aux_sym_sequence_repeat1,
    STATE(560), 1,
      sym_target_type,
    STATE(286), 2,
      sym_name,
      sym_canonical,
    ACTIONS(79), 4,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      sym_number,
    ACTIONS(358), 5,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [3794] = 13,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      aux_sym_sequence_token1,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(370), 1,
      anon_sym_POUND,
    ACTIONS(372), 1,
      anon_sym_SQUOTE,
    STATE(68), 1,
      sym_fsh_comment,
    STATE(592), 1,
      aux_sym_sequence_repeat1,
    STATE(678), 1,
      sym_sequence,
    STATE(209), 2,
      sym_code,
      sym_unit,
    ACTIONS(365), 13,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [3847] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(374), 1,
      aux_sym_sequence_token1,
    STATE(69), 1,
      sym_fsh_comment,
    STATE(73), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 20,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_and,
      anon_sym_POUND,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [3888] = 11,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(377), 1,
      ts_builtin_sym_end,
    ACTIONS(381), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      aux_sym_sequence_token1,
    ACTIONS(387), 1,
      aux_sym_sequence_token2,
    STATE(151), 1,
      sym_code,
    STATE(592), 1,
      aux_sym_sequence_repeat1,
    STATE(632), 1,
      sym_sequence,
    STATE(70), 2,
      sym_fsh_comment,
      aux_sym_code_insert_rule_repeat1,
    ACTIONS(379), 15,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [3937] = 10,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      sym_fsh_comment,
    STATE(233), 1,
      sym_string,
    ACTIONS(396), 2,
      anon_sym_insert,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(398), 2,
      anon_sym_from,
      anon_sym_and,
    ACTIONS(400), 4,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
    ACTIONS(393), 12,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [3984] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(407), 1,
      anon_sym_Instance,
    ACTIONS(409), 1,
      anon_sym_Description,
    ACTIONS(412), 1,
      anon_sym_InstanceOf,
    ACTIONS(415), 1,
      anon_sym_Title,
    ACTIONS(418), 1,
      anon_sym_Usage,
    STATE(183), 1,
      sym_instance_metadata,
    STATE(72), 2,
      sym_fsh_comment,
      aux_sym_instance_repeat1,
    STATE(182), 4,
      sym_description,
      sym_instance_of,
      sym_title,
      sym_usage,
    ACTIONS(405), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [4033] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(421), 1,
      aux_sym_sequence_token1,
    STATE(73), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 20,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_and,
      anon_sym_POUND,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4072] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(426), 1,
      anon_sym_Description,
    ACTIONS(429), 1,
      anon_sym_Id,
    ACTIONS(432), 1,
      anon_sym_Parent,
    ACTIONS(435), 1,
      anon_sym_Title,
    STATE(187), 1,
      sym_sd_metadata,
    STATE(74), 2,
      sym_fsh_comment,
      aux_sym_profile_repeat1,
    STATE(186), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
    ACTIONS(424), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [4119] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      aux_sym_rule_set_repeat1,
    STATE(75), 1,
      sym_fsh_comment,
    STATE(388), 1,
      sym_rule_set_rule,
    STATE(389), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(409), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
  [4163] = 13,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      aux_sym_sequence_token1,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(372), 1,
      anon_sym_SQUOTE,
    ACTIONS(440), 1,
      anon_sym_POUND,
    STATE(76), 1,
      sym_fsh_comment,
    STATE(592), 1,
      aux_sym_sequence_repeat1,
    STATE(677), 1,
      sym_sequence,
    STATE(209), 2,
      sym_code,
      sym_unit,
    ACTIONS(365), 12,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [4215] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(77), 1,
      sym_fsh_comment,
    STATE(81), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(121), 1,
      sym_flag,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(442), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [4255] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(446), 1,
      anon_sym_STAR,
    STATE(78), 1,
      sym_fsh_comment,
    ACTIONS(448), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(444), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [4293] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      sym_fsh_comment,
    ACTIONS(148), 21,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_and,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4329] = 12,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      aux_sym_sequence_token1,
    ACTIONS(372), 1,
      anon_sym_SQUOTE,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    STATE(80), 1,
      sym_fsh_comment,
    STATE(592), 1,
      aux_sym_sequence_repeat1,
    STATE(680), 1,
      sym_sequence,
    STATE(209), 2,
      sym_code,
      sym_unit,
    ACTIONS(368), 13,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [4379] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(121), 1,
      sym_flag,
    STATE(81), 2,
      sym_fsh_comment,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(454), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(452), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [4417] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(82), 1,
      sym_fsh_comment,
    STATE(87), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(121), 1,
      sym_flag,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(457), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [4457] = 5,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(83), 1,
      sym_fsh_comment,
    ACTIONS(33), 21,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_and,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4493] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(461), 1,
      anon_sym_Expression,
    ACTIONS(463), 1,
      anon_sym_Severity,
    ACTIONS(465), 1,
      anon_sym_XPath,
    STATE(84), 1,
      sym_fsh_comment,
    STATE(89), 1,
      aux_sym_invariant_repeat1,
    STATE(222), 1,
      sym_invariant_metadata,
    STATE(221), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(459), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4541] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(85), 1,
      sym_fsh_comment,
    ACTIONS(198), 21,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_and,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4577] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    STATE(86), 1,
      sym_fsh_comment,
    ACTIONS(245), 21,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_and,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4613] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(81), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(87), 1,
      sym_fsh_comment,
    STATE(121), 1,
      sym_flag,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(467), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [4653] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_fsh_comment,
    ACTIONS(202), 21,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_and,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4689] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(471), 1,
      anon_sym_Description,
    ACTIONS(474), 1,
      anon_sym_Expression,
    ACTIONS(477), 1,
      anon_sym_Severity,
    ACTIONS(480), 1,
      anon_sym_XPath,
    STATE(222), 1,
      sym_invariant_metadata,
    STATE(89), 2,
      sym_fsh_comment,
      aux_sym_invariant_repeat1,
    STATE(221), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
    ACTIONS(469), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [4735] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(77), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(90), 1,
      sym_fsh_comment,
    STATE(121), 1,
      sym_flag,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(483), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [4775] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    STATE(91), 1,
      sym_fsh_comment,
    ACTIONS(225), 21,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_and,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4811] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(485), 1,
      aux_sym_sequence_token1,
    STATE(92), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 19,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUND,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
  [4849] = 17,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(99), 1,
      anon_sym_Reference,
    ACTIONS(101), 1,
      anon_sym_Canonical,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(356), 1,
      aux_sym_sequence_token1,
    ACTIONS(360), 1,
      anon_sym_QMARK_BANG,
    STATE(25), 1,
      sym_sequence,
    STATE(93), 1,
      sym_fsh_comment,
    STATE(232), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(287), 1,
      sym_reference,
    STATE(312), 1,
      sym_flag,
    STATE(537), 1,
      sym_target_type,
    STATE(555), 1,
      aux_sym_sequence_repeat1,
    STATE(286), 2,
      sym_name,
      sym_canonical,
    ACTIONS(79), 4,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      sym_number,
    ACTIONS(358), 5,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
  [4909] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(490), 1,
      anon_sym_STAR,
    STATE(94), 1,
      sym_fsh_comment,
    ACTIONS(492), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(488), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [4947] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    STATE(95), 1,
      sym_fsh_comment,
    ACTIONS(221), 21,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_and,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [4983] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(494), 1,
      aux_sym_sequence_token1,
    STATE(92), 1,
      aux_sym_sequence_repeat1,
    STATE(96), 1,
      sym_fsh_comment,
    ACTIONS(33), 19,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUND,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
  [5023] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    STATE(97), 1,
      sym_fsh_comment,
    ACTIONS(229), 21,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_from,
      anon_sym_and,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [5059] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(135), 1,
      anon_sym_STAR,
    STATE(22), 1,
      aux_sym_param_rule_set_repeat1,
    STATE(98), 1,
      sym_fsh_comment,
    STATE(390), 1,
      sym_rule_set_rule,
    STATE(389), 8,
      sym_sd_rule,
      sym_add_cre_element_rule,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_mapping_rule,
      sym_add_element_rule,
      sym_vs_component,
      sym_concept,
    STATE(409), 10,
      sym_cardinality_rule,
      sym_insert_rule,
      sym_valueset_rule,
      sym_fixed_value_rule,
      sym_contains_rule,
      sym_caret_value_rule,
      sym_obeys_rule,
      sym_path_rule,
      sym_flag_rule,
      sym_only_rule,
  [5100] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(499), 1,
      anon_sym_Instance,
    STATE(99), 1,
      sym_fsh_comment,
    ACTIONS(497), 20,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_InstanceOf,
      anon_sym_Parent,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
  [5135] = 13,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      aux_sym_sequence_token1,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
    ACTIONS(505), 1,
      anon_sym_POUND,
    ACTIONS(507), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_fsh_comment,
    STATE(146), 1,
      sym_string,
    STATE(397), 1,
      sym_code,
    STATE(592), 1,
      aux_sym_sequence_repeat1,
    STATE(676), 1,
      sym_sequence,
    ACTIONS(503), 12,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5186] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(81), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(101), 1,
      sym_fsh_comment,
    STATE(121), 1,
      sym_flag,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(509), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5225] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(513), 1,
      anon_sym_Description,
    ACTIONS(516), 1,
      anon_sym_Id,
    ACTIONS(519), 1,
      anon_sym_Title,
    STATE(223), 1,
      sym_cs_metadata,
    STATE(102), 2,
      sym_fsh_comment,
      aux_sym_codesystem_repeat1,
    STATE(224), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(511), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5268] = 12,
    ACTIONS(83), 1,
      anon_sym_POUND,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      aux_sym_sequence_token1,
    ACTIONS(372), 1,
      anon_sym_SQUOTE,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      sym_fsh_comment,
    STATE(592), 1,
      aux_sym_sequence_repeat1,
    STATE(679), 1,
      sym_sequence,
    STATE(209), 2,
      sym_code,
      sym_unit,
    ACTIONS(368), 12,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5317] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(522), 1,
      aux_sym_sequence_token1,
    STATE(104), 1,
      sym_fsh_comment,
    STATE(105), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 18,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [5356] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(525), 1,
      aux_sym_sequence_token1,
    STATE(105), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 18,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [5393] = 5,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(106), 1,
      sym_fsh_comment,
    ACTIONS(33), 20,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
  [5428] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(530), 1,
      anon_sym_Description,
    ACTIONS(533), 1,
      anon_sym_Id,
    ACTIONS(536), 1,
      anon_sym_Title,
    STATE(218), 1,
      sym_vs_metadata,
    STATE(107), 2,
      sym_fsh_comment,
      aux_sym_valueset_repeat1,
    STATE(219), 3,
      sym_description,
      sym_id,
      sym_title,
    ACTIONS(528), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5471] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(81), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(108), 1,
      sym_fsh_comment,
    STATE(121), 1,
      sym_flag,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(539), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5510] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(81), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(109), 1,
      sym_fsh_comment,
    STATE(121), 1,
      sym_flag,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(541), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5549] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    STATE(110), 1,
      sym_fsh_comment,
    ACTIONS(545), 20,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
  [5584] = 13,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      aux_sym_sequence_token1,
    ACTIONS(505), 1,
      anon_sym_POUND,
    ACTIONS(507), 1,
      anon_sym_DQUOTE,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
    STATE(111), 1,
      sym_fsh_comment,
    STATE(140), 1,
      sym_string,
    STATE(393), 1,
      sym_code,
    STATE(592), 1,
      aux_sym_sequence_repeat1,
    STATE(676), 1,
      sym_sequence,
    ACTIONS(549), 12,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5635] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(101), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(112), 1,
      sym_fsh_comment,
    STATE(121), 1,
      sym_flag,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(551), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [5674] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(113), 1,
      sym_fsh_comment,
    ACTIONS(148), 20,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_SLASH,
  [5709] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(553), 1,
      aux_sym_sequence_token1,
    STATE(114), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 17,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
  [5745] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(556), 1,
      aux_sym_sequence_token1,
    STATE(115), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 17,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [5781] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(116), 1,
      sym_fsh_comment,
    ACTIONS(198), 19,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [5815] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    STATE(117), 1,
      sym_fsh_comment,
    ACTIONS(229), 19,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [5849] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    STATE(118), 1,
      sym_fsh_comment,
    ACTIONS(221), 19,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [5883] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(119), 1,
      sym_fsh_comment,
    ACTIONS(148), 19,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [5917] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(120), 1,
      sym_fsh_comment,
    ACTIONS(488), 20,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [5949] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(121), 1,
      sym_fsh_comment,
    ACTIONS(559), 20,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [5981] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(561), 1,
      aux_sym_sequence_token1,
    STATE(115), 1,
      aux_sym_sequence_repeat1,
    STATE(122), 1,
      sym_fsh_comment,
    ACTIONS(33), 17,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6019] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(123), 1,
      sym_fsh_comment,
    ACTIONS(202), 19,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6053] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    STATE(124), 1,
      sym_fsh_comment,
    ACTIONS(225), 19,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6087] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    STATE(125), 1,
      sym_fsh_comment,
    ACTIONS(245), 19,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6121] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(126), 1,
      sym_fsh_comment,
    ACTIONS(564), 20,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [6153] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(566), 1,
      aux_sym_sequence_token1,
    STATE(114), 1,
      aux_sym_sequence_repeat1,
    STATE(127), 1,
      sym_fsh_comment,
    ACTIONS(33), 17,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
  [6191] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(128), 1,
      sym_fsh_comment,
    ACTIONS(568), 20,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [6223] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(570), 1,
      ts_builtin_sym_end,
    STATE(129), 1,
      sym_fsh_comment,
    ACTIONS(400), 4,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
    ACTIONS(396), 15,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6259] = 5,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(130), 1,
      sym_fsh_comment,
    ACTIONS(33), 19,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6293] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    STATE(131), 1,
      sym_fsh_comment,
    ACTIONS(221), 18,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6326] = 13,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(99), 1,
      anon_sym_Reference,
    ACTIONS(101), 1,
      anon_sym_Canonical,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(572), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(132), 1,
      sym_fsh_comment,
    STATE(260), 1,
      aux_sym_sequence_repeat1,
    STATE(287), 1,
      sym_reference,
    STATE(302), 1,
      sym_target_type,
    STATE(286), 2,
      sym_name,
      sym_canonical,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [6375] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    STATE(133), 1,
      sym_fsh_comment,
    ACTIONS(225), 18,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6408] = 13,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(99), 1,
      anon_sym_Reference,
    ACTIONS(101), 1,
      anon_sym_Canonical,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(572), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(134), 1,
      sym_fsh_comment,
    STATE(260), 1,
      aux_sym_sequence_repeat1,
    STATE(287), 1,
      sym_reference,
    STATE(288), 1,
      sym_target_type,
    STATE(286), 2,
      sym_name,
      sym_canonical,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [6457] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      sym_fsh_comment,
    ACTIONS(229), 18,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6490] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(574), 1,
      aux_sym_sequence_token1,
    STATE(136), 1,
      sym_fsh_comment,
    STATE(137), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 16,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_InstanceOf,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
  [6527] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(576), 1,
      aux_sym_sequence_token1,
    STATE(137), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 16,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_InstanceOf,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
  [6562] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(138), 1,
      sym_fsh_comment,
    ACTIONS(202), 18,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6595] = 13,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(99), 1,
      anon_sym_Reference,
    ACTIONS(101), 1,
      anon_sym_Canonical,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(356), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(139), 1,
      sym_fsh_comment,
    STATE(287), 1,
      sym_reference,
    STATE(302), 1,
      sym_target_type,
    STATE(555), 1,
      aux_sym_sequence_repeat1,
    STATE(286), 2,
      sym_name,
      sym_canonical,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [6644] = 11,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      aux_sym_sequence_token1,
    ACTIONS(505), 1,
      anon_sym_POUND,
    ACTIONS(579), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      sym_fsh_comment,
    STATE(402), 1,
      sym_code,
    STATE(592), 1,
      aux_sym_sequence_repeat1,
    STATE(676), 1,
      sym_sequence,
    ACTIONS(581), 12,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6689] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(141), 1,
      sym_fsh_comment,
    ACTIONS(198), 18,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6722] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    STATE(142), 1,
      sym_fsh_comment,
    ACTIONS(245), 18,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6755] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(583), 1,
      aux_sym_sequence_token1,
    STATE(143), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 16,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
      anon_sym_STAR,
  [6790] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(144), 1,
      sym_fsh_comment,
    ACTIONS(148), 18,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
      aux_sym_sequence_token1,
  [6823] = 5,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(145), 1,
      sym_fsh_comment,
    ACTIONS(33), 18,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6856] = 11,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      aux_sym_sequence_token1,
    ACTIONS(505), 1,
      anon_sym_POUND,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      sym_fsh_comment,
    STATE(393), 1,
      sym_code,
    STATE(592), 1,
      aux_sym_sequence_repeat1,
    STATE(676), 1,
      sym_sequence,
    ACTIONS(549), 12,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [6901] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(147), 1,
      sym_fsh_comment,
    ACTIONS(148), 18,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [6934] = 15,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(164), 1,
      aux_sym_sequence_token1,
    ACTIONS(180), 1,
      anon_sym_obeys,
    ACTIONS(192), 1,
      aux_sym_sequence_token2,
    ACTIONS(194), 1,
      anon_sym_CARET,
    ACTIONS(586), 1,
      anon_sym_insert,
    ACTIONS(588), 1,
      anon_sym_system,
    STATE(29), 1,
      aux_sym_sequence_repeat1,
    STATE(30), 1,
      sym_path,
    STATE(38), 1,
      sym_sequence,
    STATE(148), 1,
      sym_fsh_comment,
    STATE(595), 1,
      sym_name,
    STATE(639), 1,
      sym_caret_path,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [6987] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(149), 1,
      sym_fsh_comment,
    ACTIONS(590), 19,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
  [7018] = 15,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(164), 1,
      aux_sym_sequence_token1,
    ACTIONS(180), 1,
      anon_sym_obeys,
    ACTIONS(188), 1,
      anon_sym_system,
    ACTIONS(192), 1,
      aux_sym_sequence_token2,
    ACTIONS(194), 1,
      anon_sym_CARET,
    ACTIONS(586), 1,
      anon_sym_insert,
    STATE(17), 1,
      sym_path,
    STATE(29), 1,
      aux_sym_sequence_repeat1,
    STATE(35), 1,
      sym_sequence,
    STATE(150), 1,
      sym_fsh_comment,
    STATE(595), 1,
      sym_name,
    STATE(639), 1,
      sym_caret_path,
    ACTIONS(79), 8,
      anon_sym_codes,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [7071] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(570), 1,
      ts_builtin_sym_end,
    STATE(151), 1,
      sym_fsh_comment,
    ACTIONS(396), 18,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [7104] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(592), 1,
      aux_sym_sequence_token1,
    STATE(143), 1,
      aux_sym_sequence_repeat1,
    STATE(152), 1,
      sym_fsh_comment,
    ACTIONS(33), 16,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
      anon_sym_STAR,
  [7141] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(263), 1,
      anon_sym_STAR,
    STATE(153), 1,
      sym_fsh_comment,
    STATE(162), 1,
      aux_sym_codesystem_repeat2,
    STATE(377), 1,
      sym_cs_rule,
    STATE(378), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(594), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7179] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(596), 1,
      aux_sym_sequence_token1,
    STATE(154), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 15,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
  [7213] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(599), 1,
      aux_sym_sequence_token1,
    STATE(155), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 15,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [7247] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(156), 1,
      sym_fsh_comment,
    ACTIONS(602), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
  [7277] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(157), 1,
      sym_fsh_comment,
    ACTIONS(604), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
  [7307] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(608), 1,
      anon_sym_DQUOTE,
    STATE(158), 1,
      sym_fsh_comment,
    STATE(233), 1,
      sym_string,
    ACTIONS(606), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_LPAREN,
      anon_sym_and,
  [7341] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(610), 1,
      aux_sym_sequence_token1,
    STATE(155), 1,
      aux_sym_sequence_repeat1,
    STATE(159), 1,
      sym_fsh_comment,
    ACTIONS(33), 15,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [7377] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(612), 1,
      aux_sym_sequence_token1,
    STATE(160), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 15,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [7411] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(161), 1,
      sym_fsh_comment,
    ACTIONS(148), 17,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
      anon_sym_STAR,
      aux_sym_sequence_token1,
  [7443] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(617), 1,
      anon_sym_STAR,
    STATE(377), 1,
      sym_cs_rule,
    STATE(162), 2,
      sym_fsh_comment,
      aux_sym_codesystem_repeat2,
    STATE(378), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(615), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7479] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(620), 1,
      aux_sym_sequence_token1,
    STATE(160), 1,
      aux_sym_sequence_repeat1,
    STATE(163), 1,
      sym_fsh_comment,
    ACTIONS(33), 15,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [7515] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      anon_sym_STAR,
    STATE(164), 1,
      sym_fsh_comment,
    STATE(165), 1,
      aux_sym_instance_repeat2,
    STATE(369), 1,
      sym_instance_rule,
    STATE(375), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(622), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7553] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(626), 1,
      anon_sym_STAR,
    STATE(369), 1,
      sym_instance_rule,
    STATE(165), 2,
      sym_fsh_comment,
      aux_sym_instance_repeat2,
    STATE(375), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(624), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7589] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(259), 1,
      anon_sym_STAR,
    STATE(166), 1,
      sym_fsh_comment,
    STATE(167), 1,
      aux_sym_valueset_repeat2,
    STATE(372), 1,
      sym_vs_rule,
    STATE(376), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(629), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7627] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(633), 1,
      anon_sym_STAR,
    STATE(372), 1,
      sym_vs_rule,
    STATE(167), 2,
      sym_fsh_comment,
      aux_sym_valueset_repeat2,
    STATE(376), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(631), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7663] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(174), 1,
      anon_sym_STAR,
    STATE(168), 1,
      sym_fsh_comment,
    STATE(169), 1,
      aux_sym_mapping_repeat2,
    STATE(385), 1,
      sym_mapping_entity_rule,
    STATE(368), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(636), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7701] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(640), 1,
      anon_sym_STAR,
    STATE(385), 1,
      sym_mapping_entity_rule,
    STATE(169), 2,
      sym_fsh_comment,
      aux_sym_mapping_repeat2,
    STATE(368), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(638), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7737] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(643), 1,
      aux_sym_sequence_token1,
    STATE(170), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 15,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [7771] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(646), 1,
      aux_sym_sequence_token1,
    STATE(170), 1,
      aux_sym_sequence_repeat1,
    STATE(171), 1,
      sym_fsh_comment,
    ACTIONS(33), 15,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [7807] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(174), 1,
      anon_sym_STAR,
    STATE(169), 1,
      aux_sym_mapping_repeat2,
    STATE(172), 1,
      sym_fsh_comment,
    STATE(385), 1,
      sym_mapping_entity_rule,
    STATE(368), 3,
      sym_insert_rule,
      sym_path_rule,
      sym_mapping_rule,
    ACTIONS(166), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7845] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(173), 1,
      sym_fsh_comment,
    ACTIONS(648), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
  [7875] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(174), 1,
      sym_fsh_comment,
    ACTIONS(650), 18,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Source,
      anon_sym_Target,
      anon_sym_Title,
      anon_sym_STAR,
  [7905] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(652), 1,
      aux_sym_sequence_token1,
    STATE(154), 1,
      aux_sym_sequence_repeat1,
    STATE(175), 1,
      sym_fsh_comment,
    ACTIONS(33), 15,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
  [7941] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(263), 1,
      anon_sym_STAR,
    STATE(162), 1,
      aux_sym_codesystem_repeat2,
    STATE(176), 1,
      sym_fsh_comment,
    STATE(377), 1,
      sym_cs_rule,
    STATE(378), 3,
      sym_code_insert_rule,
      sym_code_caret_value_rule,
      sym_concept,
    ACTIONS(267), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [7979] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(259), 1,
      anon_sym_STAR,
    STATE(167), 1,
      aux_sym_valueset_repeat2,
    STATE(177), 1,
      sym_fsh_comment,
    STATE(372), 1,
      sym_vs_rule,
    STATE(376), 3,
      sym_insert_rule,
      sym_caret_value_rule,
      sym_vs_component,
    ACTIONS(265), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [8017] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(178), 1,
      sym_fsh_comment,
    ACTIONS(148), 17,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_InstanceOf,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
      aux_sym_sequence_token1,
  [8049] = 19,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(194), 1,
      anon_sym_CARET,
    ACTIONS(586), 1,
      anon_sym_insert,
    ACTIONS(654), 1,
      anon_sym_codes,
    ACTIONS(656), 1,
      anon_sym_system,
    ACTIONS(658), 1,
      anon_sym_POUND,
    ACTIONS(660), 1,
      aux_sym_sequence_token1,
    STATE(158), 1,
      sym_code,
    STATE(179), 1,
      sym_fsh_comment,
    STATE(254), 1,
      sym_code_string,
    STATE(426), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(473), 1,
      aux_sym_sequence_repeat1,
    STATE(573), 1,
      sym_path,
    STATE(575), 1,
      sym_sequence,
    STATE(639), 1,
      sym_caret_path,
    ACTIONS(184), 2,
      anon_sym_include,
      anon_sym_exclude,
    STATE(386), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [8109] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      anon_sym_STAR,
    STATE(165), 1,
      aux_sym_instance_repeat2,
    STATE(180), 1,
      sym_fsh_comment,
    STATE(369), 1,
      sym_instance_rule,
    STATE(375), 3,
      sym_insert_rule,
      sym_fixed_value_rule,
      sym_path_rule,
    ACTIONS(204), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [8147] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(181), 1,
      sym_fsh_comment,
    ACTIONS(148), 16,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
      aux_sym_sequence_token1,
  [8178] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(664), 1,
      anon_sym_Instance,
    STATE(182), 1,
      sym_fsh_comment,
    ACTIONS(662), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_InstanceOf,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
  [8209] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(668), 1,
      anon_sym_Instance,
    STATE(183), 1,
      sym_fsh_comment,
    ACTIONS(666), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_InstanceOf,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
  [8240] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(184), 1,
      sym_fsh_comment,
    ACTIONS(198), 16,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
  [8271] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(672), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(185), 1,
      sym_fsh_comment,
    STATE(392), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(670), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8306] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(186), 1,
      sym_fsh_comment,
    ACTIONS(674), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
      anon_sym_STAR,
  [8335] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(187), 1,
      sym_fsh_comment,
    ACTIONS(676), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
      anon_sym_STAR,
  [8364] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(678), 1,
      aux_sym_sequence_token1,
    STATE(188), 1,
      sym_fsh_comment,
    STATE(190), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 14,
      anon_sym_Alias,
      anon_sym_EQ,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
  [8399] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(189), 1,
      sym_fsh_comment,
    ACTIONS(680), 17,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
      anon_sym_STAR,
  [8428] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(682), 1,
      aux_sym_sequence_token1,
    STATE(190), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 14,
      anon_sym_Alias,
      anon_sym_EQ,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
  [8461] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(685), 1,
      aux_sym_sequence_token1,
    STATE(191), 1,
      sym_fsh_comment,
    STATE(192), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 14,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_DASH_GT,
  [8496] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(687), 1,
      aux_sym_sequence_token1,
    STATE(192), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 14,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_DASH_GT,
  [8529] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(193), 1,
      sym_fsh_comment,
    ACTIONS(148), 16,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_and,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [8560] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(672), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(194), 1,
      sym_fsh_comment,
    STATE(395), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(690), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8595] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(195), 1,
      sym_fsh_comment,
    ACTIONS(202), 16,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_DQUOTE,
  [8626] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(692), 1,
      aux_sym_sequence_token1,
    STATE(196), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 14,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_DQUOTE,
  [8659] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(117), 1,
      aux_sym_sequence_token1,
    STATE(197), 1,
      sym_fsh_comment,
    STATE(198), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 14,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_POUND,
  [8694] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(695), 1,
      aux_sym_sequence_token1,
    STATE(198), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 14,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_POUND,
  [8727] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(199), 1,
      sym_fsh_comment,
    ACTIONS(148), 16,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
      aux_sym_sequence_token1,
  [8758] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(672), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(200), 1,
      sym_fsh_comment,
    STATE(371), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(698), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [8793] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(201), 1,
      sym_fsh_comment,
    ACTIONS(700), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(446), 15,
      anon_sym_contentReference,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
  [8824] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(702), 1,
      aux_sym_sequence_token1,
    STATE(202), 1,
      sym_fsh_comment,
    STATE(203), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 14,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [8859] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(704), 1,
      aux_sym_sequence_token1,
    STATE(203), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 14,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [8892] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(707), 1,
      aux_sym_sequence_token1,
    STATE(204), 1,
      sym_fsh_comment,
    STATE(205), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 14,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_where,
  [8927] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(709), 1,
      aux_sym_sequence_token1,
    STATE(205), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 14,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_where,
  [8960] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(712), 1,
      aux_sym_sequence_token1,
    STATE(206), 1,
      sym_fsh_comment,
    STATE(207), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 14,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_DQUOTE,
  [8995] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(714), 1,
      aux_sym_sequence_token1,
    STATE(207), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 14,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_DQUOTE,
  [9028] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(208), 1,
      sym_fsh_comment,
    ACTIONS(148), 16,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [9059] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(608), 1,
      anon_sym_DQUOTE,
    STATE(209), 1,
      sym_fsh_comment,
    STATE(304), 1,
      sym_string,
    ACTIONS(717), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [9092] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(210), 1,
      sym_fsh_comment,
    ACTIONS(719), 2,
      aux_sym_cardinality_token1,
      anon_sym_STAR2,
    ACTIONS(490), 15,
      anon_sym_contentReference,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
  [9123] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(672), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(211), 1,
      sym_fsh_comment,
    STATE(403), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(721), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [9158] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(672), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(212), 1,
      sym_fsh_comment,
    STATE(391), 2,
      sym_string,
      sym_multiline_string,
    ACTIONS(723), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [9193] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(725), 1,
      aux_sym_sequence_token1,
    STATE(196), 1,
      aux_sym_sequence_repeat1,
    STATE(213), 1,
      sym_fsh_comment,
    ACTIONS(33), 14,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_DQUOTE,
  [9228] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(729), 1,
      anon_sym_Instance,
    STATE(214), 1,
      sym_fsh_comment,
    ACTIONS(727), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_InstanceOf,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
  [9259] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(733), 1,
      anon_sym_Instance,
    STATE(215), 1,
      sym_fsh_comment,
    ACTIONS(731), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_InstanceOf,
      anon_sym_Title,
      anon_sym_Usage,
      anon_sym_STAR,
  [9290] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(735), 1,
      aux_sym_sequence_token1,
    STATE(216), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 13,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [9322] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(738), 1,
      aux_sym_sequence_token1,
    STATE(217), 1,
      sym_fsh_comment,
    STATE(256), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 13,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_DQUOTE,
  [9356] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(218), 1,
      sym_fsh_comment,
    ACTIONS(740), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
  [9384] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(219), 1,
      sym_fsh_comment,
    ACTIONS(742), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
  [9412] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(746), 1,
      anon_sym_and,
    STATE(220), 2,
      sym_fsh_comment,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(744), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_where,
  [9442] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(221), 1,
      sym_fsh_comment,
    ACTIONS(749), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [9470] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(222), 1,
      sym_fsh_comment,
    ACTIONS(751), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [9498] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(223), 1,
      sym_fsh_comment,
    ACTIONS(753), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
  [9526] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(224), 1,
      sym_fsh_comment,
    ACTIONS(755), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Title,
      anon_sym_STAR,
  [9554] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(225), 1,
      sym_fsh_comment,
    ACTIONS(202), 15,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
  [9584] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(226), 1,
      sym_fsh_comment,
    ACTIONS(198), 15,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
  [9614] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(227), 1,
      sym_fsh_comment,
    ACTIONS(757), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [9642] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(228), 1,
      sym_fsh_comment,
    ACTIONS(759), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [9670] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(229), 1,
      sym_fsh_comment,
    ACTIONS(761), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [9698] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(765), 1,
      anon_sym_and,
    STATE(220), 1,
      aux_sym_obeys_rule_repeat1,
    STATE(230), 1,
      sym_fsh_comment,
    ACTIONS(763), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_where,
  [9730] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(765), 1,
      anon_sym_and,
    STATE(230), 1,
      aux_sym_obeys_rule_repeat1,
    STATE(231), 1,
      sym_fsh_comment,
    ACTIONS(767), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_where,
  [9762] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(312), 1,
      sym_flag,
    STATE(232), 2,
      sym_fsh_comment,
      aux_sym_cardinality_rule_repeat1,
    ACTIONS(771), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
    ACTIONS(769), 8,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      sym_number,
      anon_sym_Reference,
      anon_sym_Canonical,
  [9794] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(233), 1,
      sym_fsh_comment,
    ACTIONS(774), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_from,
      anon_sym_LPAREN,
      anon_sym_and,
  [9822] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(234), 1,
      sym_fsh_comment,
    ACTIONS(148), 15,
      anon_sym_Alias,
      anon_sym_EQ,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      aux_sym_sequence_token1,
  [9852] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(235), 1,
      sym_fsh_comment,
    ACTIONS(776), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_DQUOTE,
  [9880] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(236), 1,
      sym_fsh_comment,
    ACTIONS(778), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_DQUOTE,
  [9908] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(237), 1,
      sym_fsh_comment,
    ACTIONS(148), 15,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_insert,
      anon_sym_DASH_GT,
      aux_sym_sequence_token1,
  [9938] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(238), 1,
      sym_fsh_comment,
    ACTIONS(780), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_DQUOTE,
  [9966] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(782), 1,
      aux_sym_sequence_token1,
    STATE(216), 1,
      aux_sym_sequence_repeat1,
    STATE(239), 1,
      sym_fsh_comment,
    ACTIONS(33), 13,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [10000] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(240), 1,
      sym_fsh_comment,
    ACTIONS(784), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_DQUOTE,
  [10028] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      aux_sym_sequence_token1,
    STATE(241), 1,
      sym_fsh_comment,
    STATE(242), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 13,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [10062] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(788), 1,
      aux_sym_sequence_token1,
    STATE(242), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 13,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [10094] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(243), 1,
      sym_fsh_comment,
    ACTIONS(791), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_DQUOTE,
  [10122] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(244), 1,
      sym_fsh_comment,
    ACTIONS(793), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_or,
      anon_sym_DQUOTE,
  [10150] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(245), 1,
      sym_fsh_comment,
    ACTIONS(795), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [10178] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(220), 1,
      aux_sym_obeys_rule_repeat1,
    STATE(246), 1,
      sym_fsh_comment,
    ACTIONS(763), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_where,
  [10208] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      aux_sym_sequence_token1,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(247), 1,
      sym_fsh_comment,
    STATE(248), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 13,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_POUND,
  [10242] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(797), 1,
      aux_sym_sequence_token1,
    STATE(248), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 13,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_POUND,
  [10274] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(249), 1,
      sym_fsh_comment,
    ACTIONS(148), 15,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_POUND,
      aux_sym_sequence_token1,
  [10304] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(250), 1,
      sym_fsh_comment,
    ACTIONS(148), 15,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [10334] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(800), 1,
      aux_sym_sequence_token1,
    STATE(251), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 13,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_where,
  [10366] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(803), 1,
      aux_sym_sequence_token1,
    STATE(251), 1,
      aux_sym_sequence_repeat1,
    STATE(252), 1,
      sym_fsh_comment,
    ACTIONS(33), 13,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_where,
  [10400] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(253), 1,
      sym_fsh_comment,
    ACTIONS(805), 16,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [10428] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(809), 1,
      anon_sym_from,
    ACTIONS(811), 1,
      anon_sym_and,
    STATE(254), 1,
      sym_fsh_comment,
    STATE(410), 1,
      sym_vs_component_from,
    ACTIONS(807), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [10462] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(255), 1,
      sym_fsh_comment,
    ACTIONS(152), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
    ACTIONS(813), 14,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
  [10492] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(815), 1,
      aux_sym_sequence_token1,
    STATE(256), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 13,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_DQUOTE,
  [10524] = 11,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(820), 1,
      aux_sym_sequence_token1,
    ACTIONS(822), 1,
      aux_sym_sequence_token2,
    STATE(257), 1,
      sym_fsh_comment,
    STATE(299), 1,
      sym_vs_filter_definition,
    STATE(405), 1,
      sym_vs_filter_list,
    STATE(433), 1,
      sym_name,
    STATE(550), 1,
      aux_sym_sequence_repeat1,
    STATE(594), 1,
      sym_sequence,
    ACTIONS(818), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [10566] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(824), 1,
      aux_sym_sequence_token1,
    STATE(258), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 13,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_or,
  [10598] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(259), 1,
      sym_fsh_comment,
    ACTIONS(148), 15,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_where,
      aux_sym_sequence_token1,
  [10628] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(572), 1,
      aux_sym_sequence_token1,
    STATE(258), 1,
      aux_sym_sequence_repeat1,
    STATE(260), 1,
      sym_fsh_comment,
    ACTIONS(33), 13,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_or,
  [10662] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(261), 1,
      sym_fsh_comment,
    ACTIONS(148), 15,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [10692] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(246), 1,
      aux_sym_obeys_rule_repeat1,
    STATE(262), 1,
      sym_fsh_comment,
    ACTIONS(767), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_where,
  [10722] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(263), 1,
      sym_fsh_comment,
    ACTIONS(148), 15,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [10752] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(608), 1,
      anon_sym_DQUOTE,
    STATE(264), 1,
      sym_fsh_comment,
    STATE(336), 1,
      sym_string,
    ACTIONS(827), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [10784] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      aux_sym_sequence_token1,
    STATE(265), 1,
      sym_fsh_comment,
    STATE(289), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 12,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [10817] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(266), 1,
      sym_fsh_comment,
    ACTIONS(744), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_where,
  [10844] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(833), 1,
      anon_sym_and,
    STATE(267), 1,
      sym_fsh_comment,
    STATE(291), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(831), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [10875] = 10,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(835), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(268), 1,
      sym_fsh_comment,
    STATE(283), 1,
      sym_item,
    STATE(488), 1,
      aux_sym_sequence_repeat1,
    STATE(514), 1,
      sym_name,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [10914] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(839), 1,
      anon_sym_T,
    STATE(269), 1,
      sym_fsh_comment,
    ACTIONS(837), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [10943] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(270), 1,
      sym_fsh_comment,
    STATE(290), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(767), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [10972] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    STATE(271), 1,
      sym_fsh_comment,
    ACTIONS(200), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [11001] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(272), 1,
      sym_fsh_comment,
    ACTIONS(841), 15,
      anon_sym_contentReference,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
  [11028] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    STATE(273), 1,
      sym_fsh_comment,
    ACTIONS(196), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [11057] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(450), 1,
      anon_sym_COLON,
    STATE(274), 1,
      sym_fsh_comment,
    ACTIONS(827), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [11086] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(275), 1,
      sym_fsh_comment,
    ACTIONS(490), 15,
      anon_sym_contentReference,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
  [11113] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      sym_fsh_comment,
    ACTIONS(148), 14,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
      aux_sym_sequence_token1,
  [11142] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(55), 1,
      anon_sym_EQ,
    ACTIONS(57), 1,
      anon_sym_insert,
    STATE(277), 1,
      sym_fsh_comment,
    ACTIONS(53), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11173] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(845), 1,
      anon_sym_and,
    STATE(278), 2,
      sym_fsh_comment,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(843), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11202] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(279), 1,
      sym_fsh_comment,
    ACTIONS(148), 14,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      aux_sym_sequence_token1,
  [11231] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(848), 1,
      anon_sym_POUND,
    STATE(280), 1,
      sym_fsh_comment,
    ACTIONS(150), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [11260] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(833), 1,
      anon_sym_and,
    STATE(281), 1,
      sym_fsh_comment,
    STATE(291), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(763), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11291] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(852), 1,
      anon_sym_LPAREN,
    STATE(282), 1,
      sym_fsh_comment,
    STATE(406), 1,
      sym_strength,
    ACTIONS(850), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11322] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(856), 1,
      anon_sym_and,
    STATE(283), 1,
      sym_fsh_comment,
    STATE(307), 1,
      aux_sym_contains_rule_repeat1,
    ACTIONS(854), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11353] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(833), 1,
      anon_sym_and,
    STATE(281), 1,
      aux_sym_obeys_rule_repeat1,
    STATE(284), 1,
      sym_fsh_comment,
    ACTIONS(767), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11384] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(833), 1,
      anon_sym_and,
    STATE(285), 1,
      sym_fsh_comment,
    STATE(309), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(831), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11415] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(286), 1,
      sym_fsh_comment,
    ACTIONS(858), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_or,
      anon_sym_DQUOTE,
  [11442] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(287), 1,
      sym_fsh_comment,
    ACTIONS(860), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_or,
      anon_sym_DQUOTE,
  [11469] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(864), 1,
      anon_sym_or,
    STATE(288), 1,
      sym_fsh_comment,
    STATE(311), 1,
      aux_sym_only_rule_repeat1,
    ACTIONS(862), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11500] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(866), 1,
      aux_sym_sequence_token1,
    STATE(289), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 12,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11531] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(290), 1,
      sym_fsh_comment,
    STATE(291), 1,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(763), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [11560] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(869), 1,
      anon_sym_and,
    STATE(291), 2,
      sym_fsh_comment,
      aux_sym_obeys_rule_repeat1,
    ACTIONS(744), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11589] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(292), 1,
      sym_fsh_comment,
    ACTIONS(148), 14,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [11618] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(874), 1,
      anon_sym_or,
    STATE(293), 2,
      sym_fsh_comment,
      aux_sym_only_rule_repeat1,
    ACTIONS(872), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11647] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(294), 1,
      sym_fsh_comment,
    ACTIONS(877), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
      anon_sym_where,
  [11674] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(881), 1,
      anon_sym_and,
    STATE(295), 1,
      sym_fsh_comment,
    ACTIONS(879), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_where,
  [11703] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(883), 1,
      anon_sym_and,
    STATE(296), 1,
      sym_fsh_comment,
    ACTIONS(879), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_where,
  [11732] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(833), 1,
      anon_sym_and,
    STATE(267), 1,
      aux_sym_obeys_rule_repeat1,
    STATE(297), 1,
      sym_fsh_comment,
    ACTIONS(885), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11763] = 10,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(820), 1,
      aux_sym_sequence_token1,
    ACTIONS(822), 1,
      aux_sym_sequence_token2,
    STATE(298), 1,
      sym_fsh_comment,
    STATE(351), 1,
      sym_vs_filter_definition,
    STATE(433), 1,
      sym_name,
    STATE(550), 1,
      aux_sym_sequence_repeat1,
    STATE(594), 1,
      sym_sequence,
    ACTIONS(818), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [11802] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(889), 1,
      anon_sym_and,
    STATE(299), 1,
      sym_fsh_comment,
    STATE(300), 1,
      aux_sym_vs_filter_list_repeat1,
    ACTIONS(887), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11833] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(889), 1,
      anon_sym_and,
    STATE(278), 1,
      aux_sym_vs_filter_list_repeat1,
    STATE(300), 1,
      sym_fsh_comment,
    ACTIONS(891), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11864] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(895), 1,
      anon_sym_and,
    STATE(301), 2,
      sym_fsh_comment,
      aux_sym_contains_rule_repeat1,
    ACTIONS(893), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [11893] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(302), 1,
      sym_fsh_comment,
    ACTIONS(872), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_or,
      anon_sym_DQUOTE,
  [11920] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(303), 1,
      sym_fsh_comment,
    ACTIONS(148), 14,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_or,
      aux_sym_sequence_token1,
  [11949] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(304), 1,
      sym_fsh_comment,
    ACTIONS(898), 15,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_COLON,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [11976] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(305), 1,
      sym_fsh_comment,
    ACTIONS(148), 14,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_POUND,
      aux_sym_sequence_token1,
  [12005] = 10,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(835), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(306), 1,
      sym_fsh_comment,
    STATE(364), 1,
      sym_item,
    STATE(488), 1,
      aux_sym_sequence_repeat1,
    STATE(514), 1,
      sym_name,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12044] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(856), 1,
      anon_sym_and,
    STATE(301), 1,
      aux_sym_contains_rule_repeat1,
    STATE(307), 1,
      sym_fsh_comment,
    ACTIONS(900), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [12075] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(57), 1,
      anon_sym_insert,
    ACTIONS(69), 1,
      anon_sym_DASH_GT,
    STATE(308), 1,
      sym_fsh_comment,
    ACTIONS(53), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [12106] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(833), 1,
      anon_sym_and,
    STATE(291), 1,
      aux_sym_obeys_rule_repeat1,
    STATE(309), 1,
      sym_fsh_comment,
    ACTIONS(902), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [12137] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(310), 1,
      sym_fsh_comment,
    ACTIONS(148), 14,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_where,
      aux_sym_sequence_token1,
  [12166] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(864), 1,
      anon_sym_or,
    STATE(293), 1,
      aux_sym_only_rule_repeat1,
    STATE(311), 1,
      sym_fsh_comment,
    ACTIONS(904), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [12197] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(312), 1,
      sym_fsh_comment,
    ACTIONS(906), 14,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
  [12223] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(910), 1,
      anon_sym_where,
    STATE(313), 1,
      sym_fsh_comment,
    ACTIONS(908), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [12251] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(912), 1,
      anon_sym_and,
    STATE(314), 1,
      sym_fsh_comment,
    ACTIONS(879), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [12279] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(707), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(204), 1,
      aux_sym_sequence_repeat1,
    STATE(294), 1,
      sym_name,
    STATE(315), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12315] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(707), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(204), 1,
      aux_sym_sequence_repeat1,
    STATE(262), 1,
      sym_name,
    STATE(316), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12351] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(782), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(239), 1,
      aux_sym_sequence_repeat1,
    STATE(282), 1,
      sym_name,
    STATE(317), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12387] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(318), 1,
      sym_fsh_comment,
    ACTIONS(827), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [12413] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(241), 1,
      aux_sym_sequence_repeat1,
    STATE(285), 1,
      sym_name,
    STATE(319), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12449] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(265), 1,
      aux_sym_sequence_repeat1,
    STATE(294), 1,
      sym_name,
    STATE(320), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12485] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    STATE(321), 1,
      sym_fsh_comment,
    ACTIONS(914), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [12513] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(241), 1,
      aux_sym_sequence_repeat1,
    STATE(270), 1,
      sym_name,
    STATE(322), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12549] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(592), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(149), 1,
      sym_name,
    STATE(152), 1,
      aux_sym_sequence_repeat1,
    STATE(323), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12585] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(324), 1,
      sym_fsh_comment,
    ACTIONS(148), 13,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      aux_sym_sequence_token1,
  [12613] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(916), 1,
      anon_sym_POUND,
    STATE(325), 1,
      sym_fsh_comment,
    ACTIONS(150), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [12641] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(592), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(152), 1,
      aux_sym_sequence_repeat1,
    STATE(189), 1,
      sym_name,
    STATE(326), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12677] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(241), 1,
      aux_sym_sequence_repeat1,
    STATE(284), 1,
      sym_name,
    STATE(327), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12713] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(241), 1,
      aux_sym_sequence_repeat1,
    STATE(294), 1,
      sym_name,
    STATE(328), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12749] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(241), 1,
      aux_sym_sequence_repeat1,
    STATE(297), 1,
      sym_name,
    STATE(329), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12785] = 7,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(918), 1,
      aux_sym_sequence_token1,
    STATE(330), 1,
      sym_fsh_comment,
    STATE(331), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 11,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [12817] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(920), 1,
      aux_sym_sequence_token1,
    STATE(331), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 11,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [12847] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(707), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(204), 1,
      aux_sym_sequence_repeat1,
    STATE(231), 1,
      sym_name,
    STATE(332), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12883] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(923), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(333), 1,
      sym_fsh_comment,
    STATE(415), 1,
      sym_name,
    STATE(445), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12919] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(592), 1,
      aux_sym_sequence_token1,
    STATE(11), 1,
      sym_name,
    STATE(25), 1,
      sym_sequence,
    STATE(152), 1,
      aux_sym_sequence_repeat1,
    STATE(334), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12955] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(925), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(335), 1,
      sym_fsh_comment,
    STATE(417), 1,
      sym_name,
    STATE(451), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [12991] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(336), 1,
      sym_fsh_comment,
    ACTIONS(927), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [13017] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(803), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(252), 1,
      aux_sym_sequence_repeat1,
    STATE(294), 1,
      sym_name,
    STATE(337), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13053] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(241), 1,
      aux_sym_sequence_repeat1,
    STATE(266), 1,
      sym_name,
    STATE(338), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13089] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(574), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(50), 1,
      sym_name,
    STATE(136), 1,
      aux_sym_sequence_repeat1,
    STATE(339), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13125] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(340), 1,
      sym_fsh_comment,
    ACTIONS(813), 14,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
      anon_sym_Reference,
      anon_sym_Canonical,
      anon_sym_QMARK_BANG,
  [13151] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(929), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(341), 1,
      sym_fsh_comment,
    STATE(517), 1,
      aux_sym_sequence_repeat1,
    STATE(574), 1,
      sym_name,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13187] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(574), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(136), 1,
      aux_sym_sequence_repeat1,
    STATE(214), 1,
      sym_name,
    STATE(342), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13223] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(343), 1,
      sym_fsh_comment,
    ACTIONS(931), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [13249] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(707), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(204), 1,
      aux_sym_sequence_repeat1,
    STATE(266), 1,
      sym_name,
    STATE(344), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13285] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      sym_fsh_comment,
    ACTIONS(933), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [13313] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(566), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(127), 1,
      aux_sym_sequence_repeat1,
    STATE(149), 1,
      sym_name,
    STATE(346), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13349] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    STATE(347), 1,
      sym_fsh_comment,
    ACTIONS(935), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [13377] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(348), 1,
      sym_fsh_comment,
    ACTIONS(937), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [13403] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(349), 1,
      sym_fsh_comment,
    ACTIONS(939), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [13429] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(943), 1,
      anon_sym_LPAREN,
    STATE(350), 1,
      sym_fsh_comment,
    ACTIONS(941), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [13457] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(351), 1,
      sym_fsh_comment,
    ACTIONS(843), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [13483] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    STATE(352), 1,
      sym_fsh_comment,
    ACTIONS(945), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [13511] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(947), 1,
      anon_sym_and,
    STATE(353), 1,
      sym_fsh_comment,
    ACTIONS(879), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [13539] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(652), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(51), 1,
      sym_name,
    STATE(175), 1,
      aux_sym_sequence_repeat1,
    STATE(354), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13575] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(652), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(52), 1,
      sym_name,
    STATE(175), 1,
      aux_sym_sequence_repeat1,
    STATE(355), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13611] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(356), 1,
      sym_fsh_comment,
    ACTIONS(949), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [13637] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(652), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(149), 1,
      sym_name,
    STATE(175), 1,
      aux_sym_sequence_repeat1,
    STATE(357), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13673] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(358), 1,
      sym_fsh_comment,
    ACTIONS(951), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [13699] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(359), 1,
      sym_fsh_comment,
    ACTIONS(450), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [13725] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(360), 1,
      sym_fsh_comment,
    ACTIONS(953), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [13751] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(592), 1,
      aux_sym_sequence_token1,
    STATE(3), 1,
      sym_name,
    STATE(25), 1,
      sym_sequence,
    STATE(152), 1,
      aux_sym_sequence_repeat1,
    STATE(361), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13787] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(566), 1,
      aux_sym_sequence_token1,
    STATE(25), 1,
      sym_sequence,
    STATE(32), 1,
      sym_name,
    STATE(127), 1,
      aux_sym_sequence_repeat1,
    STATE(362), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13823] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(592), 1,
      aux_sym_sequence_token1,
    STATE(4), 1,
      sym_name,
    STATE(25), 1,
      sym_sequence,
    STATE(152), 1,
      aux_sym_sequence_repeat1,
    STATE(363), 1,
      sym_fsh_comment,
    ACTIONS(79), 9,
      anon_sym_codes,
      anon_sym_system,
      anon_sym_valueset,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      sym_number,
  [13859] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(364), 1,
      sym_fsh_comment,
    ACTIONS(893), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_and,
  [13885] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    STATE(365), 1,
      sym_fsh_comment,
    ACTIONS(955), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [13913] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(366), 1,
      sym_fsh_comment,
    ACTIONS(958), 14,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
      anon_sym_where,
  [13939] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(367), 1,
      sym_fsh_comment,
    ACTIONS(960), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [13964] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(368), 1,
      sym_fsh_comment,
    ACTIONS(962), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [13989] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(369), 1,
      sym_fsh_comment,
    ACTIONS(964), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14014] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(370), 1,
      sym_fsh_comment,
    ACTIONS(966), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14039] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(371), 1,
      sym_fsh_comment,
    ACTIONS(670), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14064] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(372), 1,
      sym_fsh_comment,
    ACTIONS(968), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14089] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(373), 1,
      sym_fsh_comment,
    ACTIONS(970), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14114] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(374), 1,
      sym_fsh_comment,
    ACTIONS(973), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14139] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(375), 1,
      sym_fsh_comment,
    ACTIONS(975), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14164] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(376), 1,
      sym_fsh_comment,
    ACTIONS(977), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14189] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(377), 1,
      sym_fsh_comment,
    ACTIONS(979), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14214] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(378), 1,
      sym_fsh_comment,
    ACTIONS(981), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14239] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(379), 1,
      sym_fsh_comment,
    ACTIONS(983), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14264] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(380), 1,
      sym_fsh_comment,
    ACTIONS(985), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14289] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(381), 1,
      sym_fsh_comment,
    ACTIONS(690), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14314] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(382), 1,
      sym_fsh_comment,
    ACTIONS(987), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14339] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(383), 1,
      sym_fsh_comment,
    ACTIONS(989), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14364] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(384), 1,
      sym_fsh_comment,
    ACTIONS(991), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14389] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(385), 1,
      sym_fsh_comment,
    ACTIONS(993), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14414] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(386), 1,
      sym_fsh_comment,
    ACTIONS(995), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14439] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(387), 1,
      sym_fsh_comment,
    ACTIONS(997), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14464] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(388), 1,
      sym_fsh_comment,
    ACTIONS(999), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14489] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(389), 1,
      sym_fsh_comment,
    ACTIONS(1001), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14514] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(390), 1,
      sym_fsh_comment,
    ACTIONS(1003), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14539] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(391), 1,
      sym_fsh_comment,
    ACTIONS(1005), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14564] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(392), 1,
      sym_fsh_comment,
    ACTIONS(721), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14589] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(393), 1,
      sym_fsh_comment,
    ACTIONS(579), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14614] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(394), 1,
      sym_fsh_comment,
    ACTIONS(1007), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14639] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(395), 1,
      sym_fsh_comment,
    ACTIONS(1009), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14664] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(396), 1,
      sym_fsh_comment,
    ACTIONS(1011), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14689] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(397), 1,
      sym_fsh_comment,
    ACTIONS(547), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14714] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(398), 1,
      sym_fsh_comment,
    ACTIONS(1013), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14739] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(399), 1,
      sym_fsh_comment,
    ACTIONS(148), 12,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      aux_sym_sequence_token1,
  [14766] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(400), 1,
      sym_fsh_comment,
    ACTIONS(1015), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14791] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(401), 1,
      sym_fsh_comment,
    ACTIONS(1018), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14816] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(402), 1,
      sym_fsh_comment,
    ACTIONS(1020), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14841] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(403), 1,
      sym_fsh_comment,
    ACTIONS(1022), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14866] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(404), 1,
      sym_fsh_comment,
    ACTIONS(1024), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14891] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(405), 1,
      sym_fsh_comment,
    ACTIONS(1026), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14916] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(406), 1,
      sym_fsh_comment,
    ACTIONS(1028), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14941] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(407), 1,
      sym_fsh_comment,
    ACTIONS(1030), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14966] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(408), 1,
      sym_fsh_comment,
    ACTIONS(1032), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [14991] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(409), 1,
      sym_fsh_comment,
    ACTIONS(1034), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [15016] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(410), 1,
      sym_fsh_comment,
    ACTIONS(1036), 13,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
      anon_sym_STAR,
  [15041] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(411), 1,
      sym_fsh_comment,
    ACTIONS(1038), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [15065] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(412), 1,
      sym_fsh_comment,
    ACTIONS(1040), 12,
      ts_builtin_sym_end,
      anon_sym_Alias,
      anon_sym_Profile,
      anon_sym_Extension,
      anon_sym_Invariant,
      anon_sym_Instance,
      anon_sym_ValueSet,
      anon_sym_CodeSystem,
      anon_sym_Mapping,
      anon_sym_Logical,
      anon_sym_Resource,
      anon_sym_RuleSet,
  [15089] = 14,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(194), 1,
      anon_sym_CARET,
    ACTIONS(239), 1,
      aux_sym_sequence_token1,
    ACTIONS(1042), 1,
      anon_sym_insert,
    ACTIONS(1044), 1,
      anon_sym_POUND,
    STATE(62), 1,
      aux_sym_code_insert_rule_repeat1,
    STATE(129), 1,
      sym_code,
    STATE(413), 1,
      sym_fsh_comment,
    STATE(418), 1,
      aux_sym_code_caret_value_rule_repeat1,
    STATE(592), 1,
      aux_sym_sequence_repeat1,
    STATE(653), 1,
      sym_sequence,
    STATE(654), 1,
      sym_caret_path,
  [15132] = 13,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      aux_sym_sequence_token1,
    ACTIONS(654), 1,
      anon_sym_codes,
    ACTIONS(658), 1,
      anon_sym_POUND,
    STATE(158), 1,
      sym_code,
    STATE(254), 1,
      sym_code_string,
    STATE(414), 1,
      sym_fsh_comment,
    STATE(426), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(592), 1,
      aux_sym_sequence_repeat1,
    STATE(626), 1,
      sym_sequence,
    STATE(382), 2,
      sym_vs_concept_component,
      sym_vs_filter_component,
  [15173] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(39), 1,
      anon_sym_Id,
    ACTIONS(41), 1,
      anon_sym_Parent,
    ACTIONS(43), 1,
      anon_sym_Title,
    STATE(13), 1,
      aux_sym_profile_repeat1,
    STATE(187), 1,
      sym_sd_metadata,
    STATE(415), 1,
      sym_fsh_comment,
    STATE(186), 4,
      sym_description,
      sym_id,
      sym_parent,
      sym_title,
  [15207] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(63), 1,
      anon_sym_and,
    STATE(109), 1,
      aux_sym_cardinality_rule_repeat1,
    STATE(121), 1,
      sym_flag,
    STATE(416), 1,
      sym_fsh_comment,
    STATE(421), 1,
      aux_sym_flag_rule_repeat1,
    ACTIONS(73), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [15237] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_Description,
    ACTIONS(461), 1,
      anon_sym_Expression,
    ACTIONS(463), 1,
      anon_sym_Severity,
    ACTIONS(465), 1,
      anon_sym_XPath,
    STATE(84), 1,
      aux_sym_invariant_repeat1,
    STATE(222), 1,
      sym_invariant_metadata,
    STATE(417), 1,
      sym_fsh_comment,
    STATE(221), 4,
      sym_description,
      sym_expression,
      sym_severity,
      sym_xpath,
  [15271] = 12,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(194), 1,
      anon_sym_CARET,
    ACTIONS(239), 1,
      aux_sym_sequence_token1,
    ACTIONS(1046), 1,
      anon_sym_POUND,
    STATE(418), 1,
      sym_fsh_comment,
    STATE(422), 1,
      aux_sym_code_caret_value_rule_repeat1,
    STATE(503), 1,
      sym_code,
    STATE(592), 1,
      aux_sym_sequence_repeat1,
    STATE(638), 1,
      sym_sequence,
    STATE(668), 1,
      sym_caret_path,
  [15308] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1048), 1,
      aux_sym_sequence_token1,
    STATE(419), 1,
      sym_fsh_comment,
    STATE(420), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 7,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [15333] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1050), 1,
      aux_sym_sequence_token1,
    STATE(420), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 7,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [15356] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1053), 1,
      anon_sym_and,
    STATE(421), 2,
      sym_fsh_comment,
      aux_sym_flag_rule_repeat1,
    ACTIONS(1056), 6,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [15378] = 10,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1058), 1,
      anon_sym_POUND,
    ACTIONS(1061), 1,
      aux_sym_sequence_token1,
    ACTIONS(1064), 1,
      aux_sym_sequence_token2,
    ACTIONS(1067), 1,
      anon_sym_CARET,
    STATE(503), 1,
      sym_code,
    STATE(592), 1,
      aux_sym_sequence_repeat1,
    STATE(638), 1,
      sym_sequence,
    STATE(422), 2,
      sym_fsh_comment,
      aux_sym_code_caret_value_rule_repeat1,
  [15410] = 11,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(182), 1,
      anon_sym_DASH_GT,
    ACTIONS(586), 1,
      anon_sym_insert,
    ACTIONS(656), 1,
      anon_sym_system,
    ACTIONS(685), 1,
      aux_sym_sequence_token1,
    STATE(66), 1,
      sym_sequence,
    STATE(191), 1,
      aux_sym_sequence_repeat1,
    STATE(308), 1,
      sym_path,
    STATE(423), 1,
      sym_fsh_comment,
  [15444] = 10,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1069), 1,
      anon_sym_POUND,
    ACTIONS(1072), 1,
      aux_sym_sequence_token1,
    ACTIONS(1075), 1,
      aux_sym_sequence_token2,
    STATE(158), 1,
      sym_code,
    STATE(592), 1,
      aux_sym_sequence_repeat1,
    STATE(660), 1,
      sym_code_string,
    STATE(675), 1,
      sym_sequence,
    STATE(424), 2,
      sym_fsh_comment,
      aux_sym_vs_concept_component_repeat1,
  [15476] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(425), 1,
      sym_fsh_comment,
    ACTIONS(148), 8,
      anon_sym_and,
      aux_sym_sequence_token1,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [15496] = 11,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      aux_sym_sequence_token1,
    ACTIONS(1078), 1,
      anon_sym_POUND,
    STATE(158), 1,
      sym_code,
    STATE(424), 1,
      aux_sym_vs_concept_component_repeat1,
    STATE(426), 1,
      sym_fsh_comment,
    STATE(592), 1,
      aux_sym_sequence_repeat1,
    STATE(597), 1,
      sym_code_string,
    STATE(673), 1,
      sym_sequence,
  [15530] = 10,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(586), 1,
      anon_sym_insert,
    ACTIONS(656), 1,
      anon_sym_system,
    ACTIONS(678), 1,
      aux_sym_sequence_token1,
    STATE(66), 1,
      sym_sequence,
    STATE(188), 1,
      aux_sym_sequence_repeat1,
    STATE(277), 1,
      sym_path,
    STATE(427), 1,
      sym_fsh_comment,
  [15561] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(428), 1,
      sym_fsh_comment,
    ACTIONS(1056), 7,
      anon_sym_and,
      anon_sym_MS,
      anon_sym_SU,
      anon_sym_TU,
      anon_sym_N,
      anon_sym_D,
      anon_sym_QMARK_BANG,
  [15580] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(712), 1,
      aux_sym_sequence_token1,
    STATE(41), 1,
      sym_sequence,
    STATE(43), 1,
      sym_string,
    STATE(206), 1,
      aux_sym_sequence_repeat1,
    STATE(429), 1,
      sym_fsh_comment,
  [15608] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(738), 1,
      aux_sym_sequence_token1,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_sequence,
    STATE(217), 1,
      aux_sym_sequence_repeat1,
    STATE(430), 1,
      sym_fsh_comment,
  [15636] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      aux_sym_sequence_token1,
    ACTIONS(1080), 1,
      anon_sym_POUND,
    STATE(215), 1,
      sym_code,
    STATE(431), 1,
      sym_fsh_comment,
    STATE(592), 1,
      aux_sym_sequence_repeat1,
    STATE(671), 1,
      sym_sequence,
  [15664] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(574), 1,
      aux_sym_sequence_token1,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_sequence,
    STATE(136), 1,
      aux_sym_sequence_repeat1,
    STATE(432), 1,
      sym_fsh_comment,
  [15692] = 9,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1082), 1,
      anon_sym_EQ,
    ACTIONS(1084), 1,
      aux_sym_sequence_token1,
    ACTIONS(1086), 1,
      aux_sym_sequence_token2,
    STATE(44), 1,
      sym_vs_filter_operator,
    STATE(96), 1,
      aux_sym_sequence_repeat1,
    STATE(110), 1,
      sym_sequence,
    STATE(433), 1,
      sym_fsh_comment,
  [15720] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1088), 1,
      anon_sym_POUND,
    ACTIONS(1090), 1,
      aux_sym_sequence_token1,
    STATE(434), 1,
      sym_fsh_comment,
    STATE(532), 1,
      aux_sym_sequence_repeat1,
    STATE(570), 1,
      sym_sequence,
    STATE(608), 1,
      sym_code,
  [15748] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1092), 1,
      aux_sym_sequence_token1,
    STATE(41), 1,
      sym_sequence,
    STATE(43), 1,
      sym_string,
    STATE(435), 1,
      sym_fsh_comment,
    STATE(585), 1,
      aux_sym_sequence_repeat1,
  [15776] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(610), 1,
      aux_sym_sequence_token1,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_sequence,
    STATE(159), 1,
      aux_sym_sequence_repeat1,
    STATE(436), 1,
      sym_fsh_comment,
  [15804] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(620), 1,
      aux_sym_sequence_token1,
    STATE(41), 1,
      sym_sequence,
    STATE(43), 1,
      sym_string,
    STATE(163), 1,
      aux_sym_sequence_repeat1,
    STATE(437), 1,
      sym_fsh_comment,
  [15832] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(725), 1,
      aux_sym_sequence_token1,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_sequence,
    STATE(213), 1,
      aux_sym_sequence_repeat1,
    STATE(438), 1,
      sym_fsh_comment,
  [15860] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1094), 1,
      aux_sym_sequence_token1,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_sequence,
    STATE(439), 1,
      sym_fsh_comment,
    STATE(540), 1,
      aux_sym_sequence_repeat1,
  [15888] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1094), 1,
      aux_sym_sequence_token1,
    STATE(41), 1,
      sym_sequence,
    STATE(43), 1,
      sym_string,
    STATE(440), 1,
      sym_fsh_comment,
    STATE(540), 1,
      aux_sym_sequence_repeat1,
  [15916] = 9,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1096), 1,
      aux_sym_sequence_token1,
    ACTIONS(1098), 1,
      aux_sym_sequence_token2,
    ACTIONS(1100), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      aux_sym_sequence_repeat1,
    STATE(95), 1,
      sym_sequence,
    STATE(97), 1,
      sym_string,
    STATE(441), 1,
      sym_fsh_comment,
  [15944] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(712), 1,
      aux_sym_sequence_token1,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_sequence,
    STATE(206), 1,
      aux_sym_sequence_repeat1,
    STATE(442), 1,
      sym_fsh_comment,
  [15972] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1102), 1,
      aux_sym_sequence_token1,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_sequence,
    STATE(443), 1,
      sym_fsh_comment,
    STATE(482), 1,
      aux_sym_sequence_repeat1,
  [16000] = 9,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1096), 1,
      aux_sym_sequence_token1,
    ACTIONS(1098), 1,
      aux_sym_sequence_token2,
    ACTIONS(1100), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      aux_sym_sequence_repeat1,
    STATE(86), 1,
      sym_sequence,
    STATE(91), 1,
      sym_string,
    STATE(444), 1,
      sym_fsh_comment,
  [16028] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(923), 1,
      aux_sym_sequence_token1,
    STATE(445), 1,
      sym_fsh_comment,
    STATE(470), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [16050] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(702), 1,
      aux_sym_sequence_token1,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_sequence,
    STATE(202), 1,
      aux_sym_sequence_repeat1,
    STATE(446), 1,
      sym_fsh_comment,
  [16078] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      aux_sym_sequence_token1,
    ACTIONS(1104), 1,
      anon_sym_POUND,
    STATE(157), 1,
      sym_code,
    STATE(447), 1,
      sym_fsh_comment,
    STATE(592), 1,
      aux_sym_sequence_repeat1,
    STATE(674), 1,
      sym_sequence,
  [16106] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(566), 1,
      aux_sym_sequence_token1,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_sequence,
    STATE(127), 1,
      aux_sym_sequence_repeat1,
    STATE(448), 1,
      sym_fsh_comment,
  [16134] = 9,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1106), 1,
      aux_sym_sequence_token1,
    ACTIONS(1108), 1,
      aux_sym_sequence_token2,
    ACTIONS(1110), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      aux_sym_sequence_repeat1,
    STATE(117), 1,
      sym_string,
    STATE(118), 1,
      sym_sequence,
    STATE(449), 1,
      sym_fsh_comment,
  [16162] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(738), 1,
      aux_sym_sequence_token1,
    STATE(41), 1,
      sym_sequence,
    STATE(43), 1,
      sym_string,
    STATE(217), 1,
      aux_sym_sequence_repeat1,
    STATE(450), 1,
      sym_fsh_comment,
  [16190] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(925), 1,
      aux_sym_sequence_token1,
    STATE(451), 1,
      sym_fsh_comment,
    STATE(452), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [16212] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1112), 1,
      aux_sym_sequence_token1,
    STATE(452), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 4,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
  [16232] = 9,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1115), 1,
      aux_sym_sequence_token1,
    ACTIONS(1117), 1,
      aux_sym_sequence_token2,
    ACTIONS(1119), 1,
      anon_sym_DQUOTE,
    STATE(122), 1,
      aux_sym_sequence_repeat1,
    STATE(133), 1,
      sym_string,
    STATE(142), 1,
      sym_sequence,
    STATE(453), 1,
      sym_fsh_comment,
  [16260] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(620), 1,
      aux_sym_sequence_token1,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_sequence,
    STATE(163), 1,
      aux_sym_sequence_repeat1,
    STATE(454), 1,
      sym_fsh_comment,
  [16288] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(646), 1,
      aux_sym_sequence_token1,
    STATE(41), 1,
      sym_sequence,
    STATE(43), 1,
      sym_string,
    STATE(171), 1,
      aux_sym_sequence_repeat1,
    STATE(455), 1,
      sym_fsh_comment,
  [16316] = 9,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1115), 1,
      aux_sym_sequence_token1,
    ACTIONS(1117), 1,
      aux_sym_sequence_token2,
    ACTIONS(1119), 1,
      anon_sym_DQUOTE,
    STATE(122), 1,
      aux_sym_sequence_repeat1,
    STATE(131), 1,
      sym_sequence,
    STATE(135), 1,
      sym_string,
    STATE(456), 1,
      sym_fsh_comment,
  [16344] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(574), 1,
      aux_sym_sequence_token1,
    STATE(41), 1,
      sym_sequence,
    STATE(43), 1,
      sym_string,
    STATE(136), 1,
      aux_sym_sequence_repeat1,
    STATE(457), 1,
      sym_fsh_comment,
  [16372] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      aux_sym_sequence_token1,
    ACTIONS(1121), 1,
      anon_sym_POUND,
    STATE(228), 1,
      sym_code,
    STATE(458), 1,
      sym_fsh_comment,
    STATE(592), 1,
      aux_sym_sequence_repeat1,
    STATE(657), 1,
      sym_sequence,
  [16400] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(725), 1,
      aux_sym_sequence_token1,
    STATE(41), 1,
      sym_sequence,
    STATE(43), 1,
      sym_string,
    STATE(213), 1,
      aux_sym_sequence_repeat1,
    STATE(459), 1,
      sym_fsh_comment,
  [16428] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(610), 1,
      aux_sym_sequence_token1,
    STATE(41), 1,
      sym_sequence,
    STATE(43), 1,
      sym_string,
    STATE(159), 1,
      aux_sym_sequence_repeat1,
    STATE(460), 1,
      sym_fsh_comment,
  [16456] = 9,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1106), 1,
      aux_sym_sequence_token1,
    ACTIONS(1108), 1,
      aux_sym_sequence_token2,
    ACTIONS(1110), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      aux_sym_sequence_repeat1,
    STATE(124), 1,
      sym_string,
    STATE(125), 1,
      sym_sequence,
    STATE(461), 1,
      sym_fsh_comment,
  [16484] = 9,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(192), 1,
      aux_sym_sequence_token2,
    ACTIONS(656), 1,
      anon_sym_system,
    ACTIONS(1048), 1,
      aux_sym_sequence_token1,
    STATE(66), 1,
      sym_sequence,
    STATE(419), 1,
      aux_sym_sequence_repeat1,
    STATE(428), 1,
      sym_path,
    STATE(462), 1,
      sym_fsh_comment,
  [16512] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(566), 1,
      aux_sym_sequence_token1,
    STATE(41), 1,
      sym_sequence,
    STATE(43), 1,
      sym_string,
    STATE(127), 1,
      aux_sym_sequence_repeat1,
    STATE(463), 1,
      sym_fsh_comment,
  [16540] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(702), 1,
      aux_sym_sequence_token1,
    STATE(41), 1,
      sym_sequence,
    STATE(43), 1,
      sym_string,
    STATE(202), 1,
      aux_sym_sequence_repeat1,
    STATE(464), 1,
      sym_fsh_comment,
  [16568] = 9,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1123), 1,
      aux_sym_sequence_token1,
    ACTIONS(1125), 1,
      aux_sym_sequence_token2,
    ACTIONS(1127), 1,
      anon_sym_DQUOTE,
    STATE(465), 1,
      sym_fsh_comment,
    STATE(480), 1,
      aux_sym_sequence_repeat1,
    STATE(547), 1,
      sym_sequence,
    STATE(552), 1,
      sym_string,
  [16596] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(646), 1,
      aux_sym_sequence_token1,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_sequence,
    STATE(171), 1,
      aux_sym_sequence_repeat1,
    STATE(466), 1,
      sym_fsh_comment,
  [16624] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1102), 1,
      aux_sym_sequence_token1,
    STATE(41), 1,
      sym_sequence,
    STATE(43), 1,
      sym_string,
    STATE(467), 1,
      sym_fsh_comment,
    STATE(482), 1,
      aux_sym_sequence_repeat1,
  [16652] = 9,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1123), 1,
      aux_sym_sequence_token1,
    ACTIONS(1125), 1,
      aux_sym_sequence_token2,
    ACTIONS(1127), 1,
      anon_sym_DQUOTE,
    STATE(468), 1,
      sym_fsh_comment,
    STATE(480), 1,
      aux_sym_sequence_repeat1,
    STATE(500), 1,
      sym_string,
    STATE(558), 1,
      sym_sequence,
  [16680] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1092), 1,
      aux_sym_sequence_token1,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_sequence,
    STATE(469), 1,
      sym_fsh_comment,
    STATE(585), 1,
      aux_sym_sequence_repeat1,
  [16708] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1129), 1,
      aux_sym_sequence_token1,
    STATE(470), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 4,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
  [16728] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      aux_sym_sequence_token1,
    STATE(41), 1,
      sym_sequence,
    STATE(43), 1,
      sym_string,
    STATE(265), 1,
      aux_sym_sequence_repeat1,
    STATE(471), 1,
      sym_fsh_comment,
  [16756] = 9,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      aux_sym_sequence_token1,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_sequence,
    STATE(265), 1,
      aux_sym_sequence_repeat1,
    STATE(472), 1,
      sym_fsh_comment,
  [16784] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(660), 1,
      aux_sym_sequence_token1,
    STATE(473), 1,
      sym_fsh_comment,
    STATE(489), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [16805] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(474), 1,
      sym_fsh_comment,
    ACTIONS(148), 5,
      anon_sym_Description,
      anon_sym_Id,
      anon_sym_Parent,
      anon_sym_Title,
      aux_sym_sequence_token1,
  [16822] = 8,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(782), 1,
      aux_sym_sequence_token1,
    STATE(239), 1,
      aux_sym_sequence_repeat1,
    STATE(321), 1,
      sym_sequence,
    STATE(394), 1,
      sym_param_rule_set_reference,
    STATE(475), 1,
      sym_fsh_comment,
  [16847] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1132), 1,
      aux_sym_sequence_token1,
    STATE(476), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [16866] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1135), 1,
      aux_sym_sequence_token1,
    STATE(476), 1,
      aux_sym_sequence_repeat1,
    STATE(477), 1,
      sym_fsh_comment,
    ACTIONS(33), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE,
  [16887] = 8,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(782), 1,
      aux_sym_sequence_token1,
    STATE(239), 1,
      aux_sym_sequence_repeat1,
    STATE(365), 1,
      sym_sequence,
    STATE(373), 1,
      sym_param_rule_set_reference,
    STATE(478), 1,
      sym_fsh_comment,
  [16912] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1137), 1,
      aux_sym_sequence_token1,
    STATE(479), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 3,
      anon_sym_POUND,
      aux_sym_sequence_token2,
      anon_sym_CARET,
  [16931] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1140), 1,
      aux_sym_sequence_token1,
    STATE(479), 1,
      aux_sym_sequence_repeat1,
    STATE(480), 1,
      sym_fsh_comment,
    ACTIONS(33), 3,
      anon_sym_POUND,
      aux_sym_sequence_token2,
      anon_sym_CARET,
  [16952] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1143), 1,
      aux_sym_sequence_token1,
    STATE(481), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [16971] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1102), 1,
      aux_sym_sequence_token1,
    STATE(481), 1,
      aux_sym_sequence_repeat1,
    STATE(482), 1,
      sym_fsh_comment,
    ACTIONS(33), 3,
      anon_sym_from,
      anon_sym_and,
      anon_sym_DQUOTE,
  [16992] = 8,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(782), 1,
      aux_sym_sequence_token1,
    STATE(239), 1,
      aux_sym_sequence_repeat1,
    STATE(345), 1,
      sym_sequence,
    STATE(396), 1,
      sym_param_rule_set_reference,
    STATE(483), 1,
      sym_fsh_comment,
  [17017] = 8,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(782), 1,
      aux_sym_sequence_token1,
    STATE(239), 1,
      aux_sym_sequence_repeat1,
    STATE(347), 1,
      sym_sequence,
    STATE(404), 1,
      sym_param_rule_set_reference,
    STATE(484), 1,
      sym_fsh_comment,
  [17042] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1146), 1,
      aux_sym_sequence_token1,
    STATE(485), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 3,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [17061] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(486), 1,
      sym_fsh_comment,
    ACTIONS(148), 5,
      anon_sym_Description,
      anon_sym_Expression,
      anon_sym_Severity,
      anon_sym_XPath,
      aux_sym_sequence_token1,
  [17078] = 8,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(782), 1,
      aux_sym_sequence_token1,
    STATE(239), 1,
      aux_sym_sequence_repeat1,
    STATE(352), 1,
      sym_sequence,
    STATE(379), 1,
      sym_param_rule_set_reference,
    STATE(487), 1,
      sym_fsh_comment,
  [17103] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(835), 1,
      aux_sym_sequence_token1,
    STATE(485), 1,
      aux_sym_sequence_repeat1,
    STATE(488), 1,
      sym_fsh_comment,
    ACTIONS(33), 3,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [17124] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1149), 1,
      aux_sym_sequence_token1,
    STATE(489), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
    ACTIONS(128), 3,
      anon_sym_insert,
      anon_sym_POUND,
      anon_sym_CARET,
  [17143] = 8,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1152), 1,
      aux_sym_sequence_token1,
    STATE(75), 1,
      sym_sequence,
    STATE(98), 1,
      sym_param_rule_set_reference,
    STATE(490), 1,
      sym_fsh_comment,
    STATE(494), 1,
      aux_sym_sequence_repeat1,
  [17168] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1154), 1,
      aux_sym_sequence_token1,
    ACTIONS(128), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
    STATE(491), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [17186] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1157), 1,
      aux_sym_sequence_token1,
    ACTIONS(128), 2,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    STATE(492), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [17204] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1160), 1,
      anon_sym_system,
    ACTIONS(1162), 1,
      anon_sym_valueset,
    STATE(295), 1,
      sym_vs_from_system,
    STATE(296), 1,
      sym_vs_from_valueset,
    STATE(493), 1,
      sym_fsh_comment,
  [17226] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1152), 1,
      aux_sym_sequence_token1,
    STATE(494), 1,
      sym_fsh_comment,
    STATE(495), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 2,
      anon_sym_STAR,
      anon_sym_LPAREN,
  [17246] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1164), 1,
      aux_sym_sequence_token1,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_LPAREN,
    STATE(495), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [17264] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(496), 1,
      sym_fsh_comment,
    STATE(539), 1,
      aux_sym_param_rule_set_params_repeat1,
    STATE(661), 1,
      sym_param_rule_set_params,
    ACTIONS(1167), 2,
      aux_sym_sequence_token1,
      aux_sym_param_rule_set_params_token1,
  [17284] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(672), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(497), 1,
      sym_fsh_comment,
    STATE(65), 2,
      sym_string,
      sym_multiline_string,
  [17304] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1169), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1171), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
    STATE(498), 2,
      sym_fsh_comment,
      aux_sym_string_repeat1,
  [17322] = 7,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1174), 1,
      aux_sym_sequence_token1,
    STATE(499), 1,
      sym_fsh_comment,
    STATE(561), 1,
      aux_sym_sequence_repeat1,
    STATE(650), 1,
      sym_sequence,
  [17344] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(500), 1,
      sym_fsh_comment,
    ACTIONS(229), 4,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
  [17360] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1176), 1,
      anon_sym_DQUOTE,
    STATE(501), 1,
      sym_fsh_comment,
    STATE(559), 1,
      aux_sym_string_repeat1,
    ACTIONS(1178), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17380] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1180), 1,
      anon_sym_DQUOTE,
    STATE(502), 1,
      sym_fsh_comment,
    STATE(507), 1,
      aux_sym_string_repeat1,
    ACTIONS(1178), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17400] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(503), 1,
      sym_fsh_comment,
    ACTIONS(400), 4,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
  [17416] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1182), 1,
      anon_sym_DQUOTE,
    STATE(504), 1,
      sym_fsh_comment,
    STATE(559), 1,
      aux_sym_string_repeat1,
    ACTIONS(1178), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17436] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(505), 1,
      sym_fsh_comment,
    ACTIONS(148), 4,
      anon_sym_insert,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      anon_sym_CARET,
  [17452] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1184), 1,
      anon_sym_DQUOTE,
    STATE(501), 1,
      aux_sym_string_repeat1,
    STATE(506), 1,
      sym_fsh_comment,
    ACTIONS(1178), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17472] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1186), 1,
      anon_sym_DQUOTE,
    STATE(507), 1,
      sym_fsh_comment,
    STATE(559), 1,
      aux_sym_string_repeat1,
    ACTIONS(1178), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17492] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1188), 1,
      anon_sym_system,
    ACTIONS(1190), 1,
      anon_sym_valueset,
    STATE(314), 1,
      sym_vs_from_system,
    STATE(353), 1,
      sym_vs_from_valueset,
    STATE(508), 1,
      sym_fsh_comment,
  [17514] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1192), 1,
      anon_sym_RPAREN,
    ACTIONS(1194), 2,
      aux_sym_sequence_token1,
      aux_sym_param_rule_set_params_token1,
    STATE(509), 2,
      sym_fsh_comment,
      aux_sym_param_rule_set_params_repeat1,
  [17532] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1197), 1,
      anon_sym_DQUOTE,
    STATE(510), 1,
      sym_fsh_comment,
    STATE(559), 1,
      aux_sym_string_repeat1,
    ACTIONS(1178), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17552] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1199), 1,
      anon_sym_DQUOTE,
    STATE(504), 1,
      aux_sym_string_repeat1,
    STATE(511), 1,
      sym_fsh_comment,
    ACTIONS(1178), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17572] = 7,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1201), 1,
      aux_sym_sequence_token1,
    STATE(512), 1,
      sym_fsh_comment,
    STATE(526), 1,
      aux_sym_sequence_repeat1,
    STATE(613), 1,
      sym_sequence,
  [17594] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1203), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(498), 1,
      aux_sym_string_repeat1,
    STATE(513), 1,
      sym_fsh_comment,
    ACTIONS(1205), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17614] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1207), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1209), 1,
      anon_sym_DOT_DOT,
    ACTIONS(1211), 1,
      anon_sym_named,
    STATE(90), 1,
      sym_cardinality,
    STATE(514), 1,
      sym_fsh_comment,
  [17636] = 7,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(918), 1,
      aux_sym_sequence_token1,
    STATE(330), 1,
      aux_sym_sequence_repeat1,
    STATE(412), 1,
      sym_sequence,
    STATE(515), 1,
      sym_fsh_comment,
  [17658] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1213), 1,
      aux_sym_sequence_token1,
    ACTIONS(128), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
    STATE(516), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [17676] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(929), 1,
      aux_sym_sequence_token1,
    STATE(516), 1,
      aux_sym_sequence_repeat1,
    STATE(517), 1,
      sym_fsh_comment,
    ACTIONS(33), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
  [17696] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(518), 1,
      sym_fsh_comment,
    ACTIONS(202), 4,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
  [17712] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1216), 1,
      anon_sym_DQUOTE,
    STATE(519), 1,
      sym_fsh_comment,
    STATE(528), 1,
      aux_sym_string_repeat1,
    ACTIONS(1178), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17732] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(520), 1,
      sym_fsh_comment,
    ACTIONS(198), 4,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
  [17748] = 7,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1201), 1,
      aux_sym_sequence_token1,
    STATE(521), 1,
      sym_fsh_comment,
    STATE(526), 1,
      aux_sym_sequence_repeat1,
    STATE(581), 1,
      sym_sequence,
  [17770] = 7,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1135), 1,
      aux_sym_sequence_token1,
    STATE(477), 1,
      aux_sym_sequence_repeat1,
    STATE(522), 1,
      sym_fsh_comment,
    STATE(583), 1,
      sym_sequence,
  [17792] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(523), 1,
      sym_fsh_comment,
    ACTIONS(148), 4,
      anon_sym_RPAREN,
      anon_sym_or,
      aux_sym_sequence_token1,
      anon_sym_PIPE,
  [17808] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1218), 1,
      aux_sym_sequence_token1,
    ACTIONS(128), 2,
      anon_sym_RPAREN,
      anon_sym_or,
    STATE(524), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [17826] = 7,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1201), 1,
      aux_sym_sequence_token1,
    STATE(525), 1,
      sym_fsh_comment,
    STATE(526), 1,
      aux_sym_sequence_repeat1,
    STATE(611), 1,
      sym_sequence,
  [17848] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1201), 1,
      aux_sym_sequence_token1,
    STATE(524), 1,
      aux_sym_sequence_repeat1,
    STATE(526), 1,
      sym_fsh_comment,
    ACTIONS(33), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [17868] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1221), 1,
      anon_sym_or,
    ACTIONS(1223), 1,
      anon_sym_DQUOTE,
    STATE(211), 1,
      sym_string,
    STATE(527), 1,
      sym_fsh_comment,
    STATE(564), 1,
      aux_sym_only_rule_repeat1,
  [17890] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1225), 1,
      anon_sym_DQUOTE,
    STATE(528), 1,
      sym_fsh_comment,
    STATE(559), 1,
      aux_sym_string_repeat1,
    ACTIONS(1178), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17910] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1227), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(513), 1,
      aux_sym_string_repeat1,
    STATE(529), 1,
      sym_fsh_comment,
    ACTIONS(1205), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17930] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1229), 1,
      anon_sym_DQUOTE,
    STATE(530), 1,
      sym_fsh_comment,
    STATE(559), 1,
      aux_sym_string_repeat1,
    ACTIONS(1178), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17950] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1231), 1,
      anon_sym_DQUOTE,
    STATE(531), 1,
      sym_fsh_comment,
    STATE(536), 1,
      aux_sym_string_repeat1,
    ACTIONS(1178), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [17970] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1090), 1,
      aux_sym_sequence_token1,
    STATE(492), 1,
      aux_sym_sequence_repeat1,
    STATE(532), 1,
      sym_fsh_comment,
    ACTIONS(33), 2,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [17990] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1233), 1,
      anon_sym_RPAREN,
    ACTIONS(1235), 1,
      anon_sym_or,
    ACTIONS(1237), 1,
      anon_sym_PIPE,
    STATE(533), 1,
      sym_fsh_comment,
    STATE(577), 1,
      aux_sym_canonical_repeat1,
  [18012] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1239), 1,
      anon_sym_DQUOTE,
    STATE(510), 1,
      aux_sym_string_repeat1,
    STATE(534), 1,
      sym_fsh_comment,
    ACTIONS(1178), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [18032] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(535), 1,
      sym_fsh_comment,
    ACTIONS(148), 4,
      aux_sym_sequence_token1,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
      anon_sym_named,
  [18048] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1241), 1,
      anon_sym_DQUOTE,
    STATE(536), 1,
      sym_fsh_comment,
    STATE(559), 1,
      aux_sym_string_repeat1,
    ACTIONS(1178), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [18068] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1221), 1,
      anon_sym_or,
    ACTIONS(1223), 1,
      anon_sym_DQUOTE,
    STATE(185), 1,
      sym_string,
    STATE(527), 1,
      aux_sym_only_rule_repeat1,
    STATE(537), 1,
      sym_fsh_comment,
  [18090] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1221), 1,
      anon_sym_or,
    ACTIONS(1223), 1,
      anon_sym_DQUOTE,
    STATE(185), 1,
      sym_string,
    STATE(538), 1,
      sym_fsh_comment,
    STATE(564), 1,
      aux_sym_only_rule_repeat1,
  [18112] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
    STATE(509), 1,
      aux_sym_param_rule_set_params_repeat1,
    STATE(539), 1,
      sym_fsh_comment,
    ACTIONS(1167), 2,
      aux_sym_sequence_token1,
      aux_sym_param_rule_set_params_token1,
  [18132] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1094), 1,
      aux_sym_sequence_token1,
    STATE(491), 1,
      aux_sym_sequence_repeat1,
    STATE(540), 1,
      sym_fsh_comment,
    ACTIONS(33), 2,
      anon_sym_and,
      anon_sym_DQUOTE,
  [18152] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1245), 1,
      anon_sym_DQUOTE,
    STATE(541), 1,
      sym_fsh_comment,
    STATE(542), 1,
      aux_sym_string_repeat1,
    ACTIONS(1178), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [18172] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1247), 1,
      anon_sym_DQUOTE,
    STATE(542), 1,
      sym_fsh_comment,
    STATE(559), 1,
      aux_sym_string_repeat1,
    ACTIONS(1178), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [18192] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(543), 1,
      sym_fsh_comment,
    ACTIONS(1249), 4,
      anon_sym_example,
      anon_sym_preferred,
      anon_sym_extensible,
      anon_sym_required,
  [18208] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1251), 1,
      aux_sym_sequence_token1,
    ACTIONS(128), 2,
      anon_sym_EQ,
      aux_sym_sequence_token2,
    STATE(544), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [18226] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(545), 1,
      sym_fsh_comment,
    ACTIONS(148), 4,
      anon_sym_from,
      anon_sym_and,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [18242] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(546), 1,
      sym_fsh_comment,
    ACTIONS(33), 4,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
  [18258] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(547), 1,
      sym_fsh_comment,
    ACTIONS(245), 4,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
  [18274] = 7,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1135), 1,
      aux_sym_sequence_token1,
    STATE(477), 1,
      aux_sym_sequence_repeat1,
    STATE(533), 1,
      sym_sequence,
    STATE(548), 1,
      sym_fsh_comment,
  [18296] = 7,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1174), 1,
      aux_sym_sequence_token1,
    STATE(549), 1,
      sym_fsh_comment,
    STATE(561), 1,
      aux_sym_sequence_repeat1,
    STATE(618), 1,
      sym_sequence,
  [18318] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1254), 1,
      aux_sym_sequence_token1,
    STATE(544), 1,
      aux_sym_sequence_repeat1,
    STATE(550), 1,
      sym_fsh_comment,
    ACTIONS(33), 2,
      anon_sym_EQ,
      aux_sym_sequence_token2,
  [18338] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(551), 1,
      sym_fsh_comment,
    ACTIONS(148), 4,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
  [18354] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(552), 1,
      sym_fsh_comment,
    ACTIONS(225), 4,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
  [18370] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1257), 1,
      anon_sym_DQUOTE,
    STATE(530), 1,
      aux_sym_string_repeat1,
    STATE(553), 1,
      sym_fsh_comment,
    ACTIONS(1178), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [18390] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1259), 1,
      anon_sym_from,
    STATE(313), 1,
      sym_vs_component_from,
    STATE(554), 1,
      sym_fsh_comment,
    ACTIONS(150), 2,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
  [18410] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(356), 1,
      aux_sym_sequence_token1,
    STATE(555), 1,
      sym_fsh_comment,
    STATE(556), 1,
      aux_sym_sequence_repeat1,
    ACTIONS(33), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
  [18430] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1261), 1,
      aux_sym_sequence_token1,
    ACTIONS(128), 2,
      anon_sym_or,
      anon_sym_DQUOTE,
    STATE(556), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [18448] = 7,
    ACTIONS(87), 1,
      aux_sym_sequence_token2,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1201), 1,
      aux_sym_sequence_token1,
    STATE(526), 1,
      aux_sym_sequence_repeat1,
    STATE(557), 1,
      sym_fsh_comment,
    STATE(567), 1,
      sym_sequence,
  [18470] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(558), 1,
      sym_fsh_comment,
    ACTIONS(221), 4,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
      anon_sym_CARET,
  [18486] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1169), 1,
      anon_sym_DQUOTE,
    ACTIONS(1264), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
    STATE(559), 2,
      sym_fsh_comment,
      aux_sym_string_repeat1,
  [18504] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1221), 1,
      anon_sym_or,
    ACTIONS(1223), 1,
      anon_sym_DQUOTE,
    STATE(200), 1,
      sym_string,
    STATE(538), 1,
      aux_sym_only_rule_repeat1,
    STATE(560), 1,
      sym_fsh_comment,
  [18526] = 6,
    ACTIONS(33), 1,
      anon_sym_EQ,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1174), 1,
      aux_sym_sequence_token1,
    STATE(561), 1,
      sym_fsh_comment,
    STATE(587), 1,
      aux_sym_sequence_repeat1,
  [18545] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1267), 1,
      anon_sym_SQUOTE,
    ACTIONS(1269), 1,
      aux_sym_unit_token1,
    STATE(562), 2,
      sym_fsh_comment,
      aux_sym_unit_repeat1,
  [18562] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(563), 1,
      sym_fsh_comment,
    ACTIONS(148), 3,
      anon_sym_EQ,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
  [18577] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(872), 1,
      anon_sym_DQUOTE,
    ACTIONS(1272), 1,
      anon_sym_or,
    STATE(564), 2,
      sym_fsh_comment,
      aux_sym_only_rule_repeat1,
  [18594] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1275), 1,
      sym_number,
    STATE(359), 1,
      sym_quantity,
    STATE(360), 1,
      sym_ratio_part,
    STATE(565), 1,
      sym_fsh_comment,
  [18613] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(566), 1,
      sym_fsh_comment,
    ACTIONS(148), 3,
      anon_sym_and,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [18628] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1277), 1,
      anon_sym_RPAREN,
    ACTIONS(1279), 1,
      anon_sym_or,
    STATE(567), 1,
      sym_fsh_comment,
    STATE(578), 1,
      aux_sym_reference_repeat1,
  [18647] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(568), 1,
      sym_fsh_comment,
    ACTIONS(33), 3,
      anon_sym_EQ,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
  [18662] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(569), 1,
      sym_fsh_comment,
    ACTIONS(1281), 3,
      anon_sym_RPAREN,
      aux_sym_sequence_token1,
      aux_sym_param_rule_set_params_token1,
  [18677] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1223), 1,
      anon_sym_DQUOTE,
    ACTIONS(1283), 1,
      anon_sym_POUND,
    STATE(212), 1,
      sym_string,
    STATE(570), 1,
      sym_fsh_comment,
  [18696] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1285), 1,
      anon_sym_SQUOTE,
    ACTIONS(1287), 1,
      aux_sym_unit_token1,
    STATE(562), 1,
      aux_sym_unit_repeat1,
    STATE(571), 1,
      sym_fsh_comment,
  [18715] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(572), 1,
      sym_fsh_comment,
    ACTIONS(148), 3,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [18730] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(57), 1,
      anon_sym_insert,
    ACTIONS(71), 1,
      anon_sym_CARET,
    STATE(573), 1,
      sym_fsh_comment,
    STATE(666), 1,
      sym_caret_path,
  [18749] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1207), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1209), 1,
      anon_sym_DOT_DOT,
    STATE(82), 1,
      sym_cardinality,
    STATE(574), 1,
      sym_fsh_comment,
  [18768] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1289), 1,
      anon_sym_POUND,
    STATE(575), 1,
      sym_fsh_comment,
    ACTIONS(154), 2,
      anon_sym_insert,
      anon_sym_CARET,
  [18785] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(576), 1,
      sym_fsh_comment,
    ACTIONS(148), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      aux_sym_sequence_token1,
  [18800] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1235), 1,
      anon_sym_or,
    ACTIONS(1291), 1,
      anon_sym_RPAREN,
    STATE(577), 1,
      sym_fsh_comment,
    STATE(588), 1,
      aux_sym_canonical_repeat1,
  [18819] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1279), 1,
      anon_sym_or,
    ACTIONS(1293), 1,
      anon_sym_RPAREN,
    STATE(578), 1,
      sym_fsh_comment,
    STATE(584), 1,
      aux_sym_reference_repeat1,
  [18838] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(579), 1,
      sym_fsh_comment,
    ACTIONS(148), 3,
      anon_sym_or,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [18853] = 6,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1287), 1,
      aux_sym_unit_token1,
    ACTIONS(1295), 1,
      anon_sym_SQUOTE,
    STATE(571), 1,
      aux_sym_unit_repeat1,
    STATE(580), 1,
      sym_fsh_comment,
  [18872] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1235), 1,
      anon_sym_or,
    ACTIONS(1297), 1,
      anon_sym_RPAREN,
    STATE(581), 1,
      sym_fsh_comment,
    STATE(589), 1,
      aux_sym_canonical_repeat1,
  [18891] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(582), 1,
      sym_fsh_comment,
    ACTIONS(148), 3,
      aux_sym_sequence_token1,
      aux_sym_cardinality_token1,
      anon_sym_DOT_DOT,
  [18906] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1301), 1,
      anon_sym_PIPE,
    STATE(583), 1,
      sym_fsh_comment,
    ACTIONS(1299), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [18923] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1303), 1,
      anon_sym_RPAREN,
    ACTIONS(1305), 1,
      anon_sym_or,
    STATE(584), 2,
      sym_fsh_comment,
      aux_sym_reference_repeat1,
  [18940] = 6,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1092), 1,
      aux_sym_sequence_token1,
    STATE(585), 1,
      sym_fsh_comment,
    STATE(586), 1,
      aux_sym_sequence_repeat1,
  [18959] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    ACTIONS(1308), 1,
      aux_sym_sequence_token1,
    STATE(586), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [18976] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      anon_sym_EQ,
    ACTIONS(1311), 1,
      aux_sym_sequence_token1,
    STATE(587), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [18993] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1299), 1,
      anon_sym_RPAREN,
    ACTIONS(1314), 1,
      anon_sym_or,
    STATE(588), 2,
      sym_fsh_comment,
      aux_sym_canonical_repeat1,
  [19010] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1235), 1,
      anon_sym_or,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
    STATE(588), 1,
      aux_sym_canonical_repeat1,
    STATE(589), 1,
      sym_fsh_comment,
  [19029] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1319), 1,
      anon_sym_DQUOTE,
    STATE(590), 1,
      sym_fsh_comment,
    ACTIONS(1321), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [19046] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      anon_sym_POUND,
    ACTIONS(1323), 1,
      aux_sym_sequence_token1,
    STATE(591), 2,
      sym_fsh_comment,
      aux_sym_sequence_repeat1,
  [19063] = 6,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      aux_sym_sequence_token1,
    STATE(591), 1,
      aux_sym_sequence_repeat1,
    STATE(592), 1,
      sym_fsh_comment,
  [19082] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1326), 1,
      sym_number,
    STATE(359), 1,
      sym_quantity,
    STATE(360), 1,
      sym_ratio_part,
    STATE(593), 1,
      sym_fsh_comment,
  [19101] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(594), 1,
      sym_fsh_comment,
    ACTIONS(152), 3,
      anon_sym_EQ,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
  [19116] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1207), 1,
      aux_sym_cardinality_token1,
    ACTIONS(1209), 1,
      anon_sym_DOT_DOT,
    STATE(112), 1,
      sym_cardinality,
    STATE(595), 1,
      sym_fsh_comment,
  [19135] = 5,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1319), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(596), 1,
      sym_fsh_comment,
    ACTIONS(1321), 2,
      sym_double_quote_string_fragment,
      sym_escape_sequence,
  [19152] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(809), 1,
      anon_sym_from,
    ACTIONS(811), 1,
      anon_sym_and,
    STATE(370), 1,
      sym_vs_component_from,
    STATE(597), 1,
      sym_fsh_comment,
  [19171] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(598), 1,
      sym_fsh_comment,
    ACTIONS(1328), 3,
      anon_sym_POUND,
      aux_sym_sequence_token1,
      aux_sym_sequence_token2,
  [19186] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(599), 1,
      sym_fsh_comment,
    ACTIONS(148), 3,
      anon_sym_STAR,
      anon_sym_LPAREN,
      aux_sym_sequence_token1,
  [19201] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1330), 1,
      anon_sym_valueset,
    STATE(366), 1,
      sym_vs_from_valueset,
    STATE(600), 1,
      sym_fsh_comment,
  [19217] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(601), 1,
      sym_fsh_comment,
    ACTIONS(148), 2,
      anon_sym_EQ,
      aux_sym_sequence_token1,
  [19231] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1332), 1,
      anon_sym_system,
    STATE(366), 1,
      sym_vs_from_system,
    STATE(602), 1,
      sym_fsh_comment,
  [19247] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1334), 1,
      anon_sym_valueset,
    STATE(366), 1,
      sym_vs_from_valueset,
    STATE(603), 1,
      sym_fsh_comment,
  [19263] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1336), 1,
      anon_sym_DQUOTE,
    STATE(111), 1,
      sym_string,
    STATE(604), 1,
      sym_fsh_comment,
  [19279] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1336), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_string,
    STATE(605), 1,
      sym_fsh_comment,
  [19295] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(608), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      sym_string,
    STATE(606), 1,
      sym_fsh_comment,
  [19311] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1338), 1,
      anon_sym_system,
    STATE(366), 1,
      sym_vs_from_system,
    STATE(607), 1,
      sym_fsh_comment,
  [19327] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1223), 1,
      anon_sym_DQUOTE,
    STATE(212), 1,
      sym_string,
    STATE(608), 1,
      sym_fsh_comment,
  [19343] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(608), 1,
      anon_sym_DQUOTE,
    STATE(227), 1,
      sym_string,
    STATE(609), 1,
      sym_fsh_comment,
  [19359] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1259), 1,
      anon_sym_from,
    STATE(313), 1,
      sym_vs_component_from,
    STATE(610), 1,
      sym_fsh_comment,
  [19375] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(611), 1,
      sym_fsh_comment,
    ACTIONS(1303), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [19389] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(612), 1,
      sym_fsh_comment,
    ACTIONS(148), 2,
      aux_sym_sequence_token1,
      anon_sym_DQUOTE,
  [19403] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(613), 1,
      sym_fsh_comment,
    ACTIONS(1340), 2,
      anon_sym_RPAREN,
      anon_sym_or,
  [19417] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(608), 1,
      anon_sym_DQUOTE,
    STATE(229), 1,
      sym_string,
    STATE(614), 1,
      sym_fsh_comment,
  [19433] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(608), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      sym_string,
    STATE(615), 1,
      sym_fsh_comment,
  [19449] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(616), 1,
      sym_fsh_comment,
    ACTIONS(1342), 2,
      anon_sym_SQUOTE,
      aux_sym_unit_token1,
  [19463] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(617), 1,
      sym_fsh_comment,
    ACTIONS(148), 2,
      anon_sym_POUND,
      aux_sym_sequence_token1,
  [19477] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1344), 1,
      anon_sym_EQ,
    STATE(618), 1,
      sym_fsh_comment,
  [19490] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1346), 1,
      anon_sym_DOT_DOT,
    STATE(619), 1,
      sym_fsh_comment,
  [19503] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1348), 1,
      aux_sym_fsh_comment_token2,
    STATE(620), 1,
      sym_fsh_comment,
  [19516] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1350), 1,
      anon_sym_COLON,
    STATE(621), 1,
      sym_fsh_comment,
  [19529] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1352), 1,
      anon_sym_SLASH,
    STATE(622), 1,
      sym_fsh_comment,
  [19542] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1354), 1,
      anon_sym_DOT_DOT,
    STATE(623), 1,
      sym_fsh_comment,
  [19555] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1356), 1,
      anon_sym_COLON,
    STATE(624), 1,
      sym_fsh_comment,
  [19568] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1358), 1,
      anon_sym_COLON,
    STATE(625), 1,
      sym_fsh_comment,
  [19581] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1289), 1,
      anon_sym_POUND,
    STATE(626), 1,
      sym_fsh_comment,
  [19594] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1360), 1,
      anon_sym_COLON,
    STATE(627), 1,
      sym_fsh_comment,
  [19607] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1362), 1,
      anon_sym_COLON,
    STATE(628), 1,
      sym_fsh_comment,
  [19620] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1364), 1,
      anon_sym_COLON,
    STATE(629), 1,
      sym_fsh_comment,
  [19633] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1366), 1,
      anon_sym_COLON,
    STATE(630), 1,
      sym_fsh_comment,
  [19646] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1368), 1,
      aux_sym_fsh_comment_token1,
    STATE(631), 1,
      sym_fsh_comment,
  [19659] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1370), 1,
      anon_sym_POUND,
    STATE(632), 1,
      sym_fsh_comment,
  [19672] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1372), 1,
      anon_sym_COLON,
    STATE(633), 1,
      sym_fsh_comment,
  [19685] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1374), 1,
      anon_sym_COLON,
    STATE(634), 1,
      sym_fsh_comment,
  [19698] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1376), 1,
      anon_sym_COLON,
    STATE(635), 1,
      sym_fsh_comment,
  [19711] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1378), 1,
      anon_sym_COLON,
    STATE(636), 1,
      sym_fsh_comment,
  [19724] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1380), 1,
      anon_sym_COLON,
    STATE(637), 1,
      sym_fsh_comment,
  [19737] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1382), 1,
      anon_sym_POUND,
    STATE(638), 1,
      sym_fsh_comment,
  [19750] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1384), 1,
      anon_sym_EQ,
    STATE(639), 1,
      sym_fsh_comment,
  [19763] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1386), 1,
      anon_sym_COLON,
    STATE(640), 1,
      sym_fsh_comment,
  [19776] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1388), 1,
      anon_sym_COLON,
    STATE(641), 1,
      sym_fsh_comment,
  [19789] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1390), 1,
      ts_builtin_sym_end,
    STATE(642), 1,
      sym_fsh_comment,
  [19802] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1392), 1,
      anon_sym_SLASH2,
    STATE(643), 1,
      sym_fsh_comment,
  [19815] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1394), 1,
      anon_sym_COLON,
    STATE(644), 1,
      sym_fsh_comment,
  [19828] = 4,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1396), 1,
      sym_regex_pattern,
    STATE(645), 1,
      sym_fsh_comment,
  [19841] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1398), 1,
      anon_sym_COLON,
    STATE(646), 1,
      sym_fsh_comment,
  [19854] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1400), 1,
      anon_sym_COLON,
    STATE(647), 1,
      sym_fsh_comment,
  [19867] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1402), 1,
      anon_sym_RPAREN,
    STATE(648), 1,
      sym_fsh_comment,
  [19880] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1404), 1,
      anon_sym_RPAREN,
    STATE(649), 1,
      sym_fsh_comment,
  [19893] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1406), 1,
      anon_sym_EQ,
    STATE(650), 1,
      sym_fsh_comment,
  [19906] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1408), 1,
      anon_sym_COLON,
    STATE(651), 1,
      sym_fsh_comment,
  [19919] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1410), 1,
      anon_sym_COLON,
    STATE(652), 1,
      sym_fsh_comment,
  [19932] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1412), 1,
      anon_sym_POUND,
    STATE(653), 1,
      sym_fsh_comment,
  [19945] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1414), 1,
      anon_sym_EQ,
    STATE(654), 1,
      sym_fsh_comment,
  [19958] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1416), 1,
      anon_sym_exactly,
    STATE(655), 1,
      sym_fsh_comment,
  [19971] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1418), 1,
      sym_time,
    STATE(656), 1,
      sym_fsh_comment,
  [19984] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1420), 1,
      anon_sym_POUND,
    STATE(657), 1,
      sym_fsh_comment,
  [19997] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1422), 1,
      anon_sym_COLON,
    STATE(658), 1,
      sym_fsh_comment,
  [20010] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1424), 1,
      anon_sym_EQ,
    STATE(659), 1,
      sym_fsh_comment,
  [20023] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(811), 1,
      anon_sym_and,
    STATE(660), 1,
      sym_fsh_comment,
  [20036] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1426), 1,
      anon_sym_RPAREN,
    STATE(661), 1,
      sym_fsh_comment,
  [20049] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1428), 1,
      anon_sym_COLON,
    STATE(662), 1,
      sym_fsh_comment,
  [20062] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1430), 1,
      anon_sym_LPAREN,
    STATE(663), 1,
      sym_fsh_comment,
  [20075] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1432), 1,
      anon_sym_COLON,
    STATE(664), 1,
      sym_fsh_comment,
  [20088] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1434), 1,
      anon_sym_LPAREN,
    STATE(665), 1,
      sym_fsh_comment,
  [20101] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1436), 1,
      anon_sym_EQ,
    STATE(666), 1,
      sym_fsh_comment,
  [20114] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1438), 1,
      anon_sym_COLON,
    STATE(667), 1,
      sym_fsh_comment,
  [20127] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1440), 1,
      anon_sym_EQ,
    STATE(668), 1,
      sym_fsh_comment,
  [20140] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1442), 1,
      anon_sym_COLON,
    STATE(669), 1,
      sym_fsh_comment,
  [20153] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1444), 1,
      anon_sym_COLON,
    STATE(670), 1,
      sym_fsh_comment,
  [20166] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1446), 1,
      anon_sym_POUND,
    STATE(671), 1,
      sym_fsh_comment,
  [20179] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1448), 1,
      anon_sym_COLON,
    STATE(672), 1,
      sym_fsh_comment,
  [20192] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1450), 1,
      anon_sym_POUND,
    STATE(673), 1,
      sym_fsh_comment,
  [20205] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1452), 1,
      anon_sym_POUND,
    STATE(674), 1,
      sym_fsh_comment,
  [20218] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1454), 1,
      anon_sym_POUND,
    STATE(675), 1,
      sym_fsh_comment,
  [20231] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1456), 1,
      anon_sym_POUND,
    STATE(676), 1,
      sym_fsh_comment,
  [20244] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1458), 1,
      anon_sym_POUND,
    STATE(677), 1,
      sym_fsh_comment,
  [20257] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1460), 1,
      anon_sym_POUND,
    STATE(678), 1,
      sym_fsh_comment,
  [20270] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(916), 1,
      anon_sym_POUND,
    STATE(679), 1,
      sym_fsh_comment,
  [20283] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(848), 1,
      anon_sym_POUND,
    STATE(680), 1,
      sym_fsh_comment,
  [20296] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1462), 1,
      anon_sym_POUND,
    STATE(681), 1,
      sym_fsh_comment,
  [20309] = 1,
    ACTIONS(1464), 1,
      ts_builtin_sym_end,
  [20313] = 1,
    ACTIONS(1466), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 129,
  [SMALL_STATE(5)] = 203,
  [SMALL_STATE(6)] = 277,
  [SMALL_STATE(7)] = 351,
  [SMALL_STATE(8)] = 432,
  [SMALL_STATE(9)] = 517,
  [SMALL_STATE(10)] = 602,
  [SMALL_STATE(11)] = 671,
  [SMALL_STATE(12)] = 740,
  [SMALL_STATE(13)] = 825,
  [SMALL_STATE(14)] = 894,
  [SMALL_STATE(15)] = 979,
  [SMALL_STATE(16)] = 1064,
  [SMALL_STATE(17)] = 1149,
  [SMALL_STATE(18)] = 1227,
  [SMALL_STATE(19)] = 1280,
  [SMALL_STATE(20)] = 1329,
  [SMALL_STATE(21)] = 1384,
  [SMALL_STATE(22)] = 1435,
  [SMALL_STATE(23)] = 1490,
  [SMALL_STATE(24)] = 1543,
  [SMALL_STATE(25)] = 1589,
  [SMALL_STATE(26)] = 1635,
  [SMALL_STATE(27)] = 1678,
  [SMALL_STATE(28)] = 1725,
  [SMALL_STATE(29)] = 1772,
  [SMALL_STATE(30)] = 1821,
  [SMALL_STATE(31)] = 1890,
  [SMALL_STATE(32)] = 1956,
  [SMALL_STATE(33)] = 2022,
  [SMALL_STATE(34)] = 2106,
  [SMALL_STATE(35)] = 2150,
  [SMALL_STATE(36)] = 2194,
  [SMALL_STATE(37)] = 2237,
  [SMALL_STATE(38)] = 2280,
  [SMALL_STATE(39)] = 2323,
  [SMALL_STATE(40)] = 2387,
  [SMALL_STATE(41)] = 2435,
  [SMALL_STATE(42)] = 2477,
  [SMALL_STATE(43)] = 2519,
  [SMALL_STATE(44)] = 2561,
  [SMALL_STATE(45)] = 2625,
  [SMALL_STATE(46)] = 2667,
  [SMALL_STATE(47)] = 2717,
  [SMALL_STATE(48)] = 2767,
  [SMALL_STATE(49)] = 2817,
  [SMALL_STATE(50)] = 2867,
  [SMALL_STATE(51)] = 2931,
  [SMALL_STATE(52)] = 2989,
  [SMALL_STATE(53)] = 3047,
  [SMALL_STATE(54)] = 3105,
  [SMALL_STATE(55)] = 3163,
  [SMALL_STATE(56)] = 3202,
  [SMALL_STATE(57)] = 3253,
  [SMALL_STATE(58)] = 3298,
  [SMALL_STATE(59)] = 3337,
  [SMALL_STATE(60)] = 3380,
  [SMALL_STATE(61)] = 3443,
  [SMALL_STATE(62)] = 3488,
  [SMALL_STATE(63)] = 3551,
  [SMALL_STATE(64)] = 3612,
  [SMALL_STATE(65)] = 3657,
  [SMALL_STATE(66)] = 3695,
  [SMALL_STATE(67)] = 3731,
  [SMALL_STATE(68)] = 3794,
  [SMALL_STATE(69)] = 3847,
  [SMALL_STATE(70)] = 3888,
  [SMALL_STATE(71)] = 3937,
  [SMALL_STATE(72)] = 3984,
  [SMALL_STATE(73)] = 4033,
  [SMALL_STATE(74)] = 4072,
  [SMALL_STATE(75)] = 4119,
  [SMALL_STATE(76)] = 4163,
  [SMALL_STATE(77)] = 4215,
  [SMALL_STATE(78)] = 4255,
  [SMALL_STATE(79)] = 4293,
  [SMALL_STATE(80)] = 4329,
  [SMALL_STATE(81)] = 4379,
  [SMALL_STATE(82)] = 4417,
  [SMALL_STATE(83)] = 4457,
  [SMALL_STATE(84)] = 4493,
  [SMALL_STATE(85)] = 4541,
  [SMALL_STATE(86)] = 4577,
  [SMALL_STATE(87)] = 4613,
  [SMALL_STATE(88)] = 4653,
  [SMALL_STATE(89)] = 4689,
  [SMALL_STATE(90)] = 4735,
  [SMALL_STATE(91)] = 4775,
  [SMALL_STATE(92)] = 4811,
  [SMALL_STATE(93)] = 4849,
  [SMALL_STATE(94)] = 4909,
  [SMALL_STATE(95)] = 4947,
  [SMALL_STATE(96)] = 4983,
  [SMALL_STATE(97)] = 5023,
  [SMALL_STATE(98)] = 5059,
  [SMALL_STATE(99)] = 5100,
  [SMALL_STATE(100)] = 5135,
  [SMALL_STATE(101)] = 5186,
  [SMALL_STATE(102)] = 5225,
  [SMALL_STATE(103)] = 5268,
  [SMALL_STATE(104)] = 5317,
  [SMALL_STATE(105)] = 5356,
  [SMALL_STATE(106)] = 5393,
  [SMALL_STATE(107)] = 5428,
  [SMALL_STATE(108)] = 5471,
  [SMALL_STATE(109)] = 5510,
  [SMALL_STATE(110)] = 5549,
  [SMALL_STATE(111)] = 5584,
  [SMALL_STATE(112)] = 5635,
  [SMALL_STATE(113)] = 5674,
  [SMALL_STATE(114)] = 5709,
  [SMALL_STATE(115)] = 5745,
  [SMALL_STATE(116)] = 5781,
  [SMALL_STATE(117)] = 5815,
  [SMALL_STATE(118)] = 5849,
  [SMALL_STATE(119)] = 5883,
  [SMALL_STATE(120)] = 5917,
  [SMALL_STATE(121)] = 5949,
  [SMALL_STATE(122)] = 5981,
  [SMALL_STATE(123)] = 6019,
  [SMALL_STATE(124)] = 6053,
  [SMALL_STATE(125)] = 6087,
  [SMALL_STATE(126)] = 6121,
  [SMALL_STATE(127)] = 6153,
  [SMALL_STATE(128)] = 6191,
  [SMALL_STATE(129)] = 6223,
  [SMALL_STATE(130)] = 6259,
  [SMALL_STATE(131)] = 6293,
  [SMALL_STATE(132)] = 6326,
  [SMALL_STATE(133)] = 6375,
  [SMALL_STATE(134)] = 6408,
  [SMALL_STATE(135)] = 6457,
  [SMALL_STATE(136)] = 6490,
  [SMALL_STATE(137)] = 6527,
  [SMALL_STATE(138)] = 6562,
  [SMALL_STATE(139)] = 6595,
  [SMALL_STATE(140)] = 6644,
  [SMALL_STATE(141)] = 6689,
  [SMALL_STATE(142)] = 6722,
  [SMALL_STATE(143)] = 6755,
  [SMALL_STATE(144)] = 6790,
  [SMALL_STATE(145)] = 6823,
  [SMALL_STATE(146)] = 6856,
  [SMALL_STATE(147)] = 6901,
  [SMALL_STATE(148)] = 6934,
  [SMALL_STATE(149)] = 6987,
  [SMALL_STATE(150)] = 7018,
  [SMALL_STATE(151)] = 7071,
  [SMALL_STATE(152)] = 7104,
  [SMALL_STATE(153)] = 7141,
  [SMALL_STATE(154)] = 7179,
  [SMALL_STATE(155)] = 7213,
  [SMALL_STATE(156)] = 7247,
  [SMALL_STATE(157)] = 7277,
  [SMALL_STATE(158)] = 7307,
  [SMALL_STATE(159)] = 7341,
  [SMALL_STATE(160)] = 7377,
  [SMALL_STATE(161)] = 7411,
  [SMALL_STATE(162)] = 7443,
  [SMALL_STATE(163)] = 7479,
  [SMALL_STATE(164)] = 7515,
  [SMALL_STATE(165)] = 7553,
  [SMALL_STATE(166)] = 7589,
  [SMALL_STATE(167)] = 7627,
  [SMALL_STATE(168)] = 7663,
  [SMALL_STATE(169)] = 7701,
  [SMALL_STATE(170)] = 7737,
  [SMALL_STATE(171)] = 7771,
  [SMALL_STATE(172)] = 7807,
  [SMALL_STATE(173)] = 7845,
  [SMALL_STATE(174)] = 7875,
  [SMALL_STATE(175)] = 7905,
  [SMALL_STATE(176)] = 7941,
  [SMALL_STATE(177)] = 7979,
  [SMALL_STATE(178)] = 8017,
  [SMALL_STATE(179)] = 8049,
  [SMALL_STATE(180)] = 8109,
  [SMALL_STATE(181)] = 8147,
  [SMALL_STATE(182)] = 8178,
  [SMALL_STATE(183)] = 8209,
  [SMALL_STATE(184)] = 8240,
  [SMALL_STATE(185)] = 8271,
  [SMALL_STATE(186)] = 8306,
  [SMALL_STATE(187)] = 8335,
  [SMALL_STATE(188)] = 8364,
  [SMALL_STATE(189)] = 8399,
  [SMALL_STATE(190)] = 8428,
  [SMALL_STATE(191)] = 8461,
  [SMALL_STATE(192)] = 8496,
  [SMALL_STATE(193)] = 8529,
  [SMALL_STATE(194)] = 8560,
  [SMALL_STATE(195)] = 8595,
  [SMALL_STATE(196)] = 8626,
  [SMALL_STATE(197)] = 8659,
  [SMALL_STATE(198)] = 8694,
  [SMALL_STATE(199)] = 8727,
  [SMALL_STATE(200)] = 8758,
  [SMALL_STATE(201)] = 8793,
  [SMALL_STATE(202)] = 8824,
  [SMALL_STATE(203)] = 8859,
  [SMALL_STATE(204)] = 8892,
  [SMALL_STATE(205)] = 8927,
  [SMALL_STATE(206)] = 8960,
  [SMALL_STATE(207)] = 8995,
  [SMALL_STATE(208)] = 9028,
  [SMALL_STATE(209)] = 9059,
  [SMALL_STATE(210)] = 9092,
  [SMALL_STATE(211)] = 9123,
  [SMALL_STATE(212)] = 9158,
  [SMALL_STATE(213)] = 9193,
  [SMALL_STATE(214)] = 9228,
  [SMALL_STATE(215)] = 9259,
  [SMALL_STATE(216)] = 9290,
  [SMALL_STATE(217)] = 9322,
  [SMALL_STATE(218)] = 9356,
  [SMALL_STATE(219)] = 9384,
  [SMALL_STATE(220)] = 9412,
  [SMALL_STATE(221)] = 9442,
  [SMALL_STATE(222)] = 9470,
  [SMALL_STATE(223)] = 9498,
  [SMALL_STATE(224)] = 9526,
  [SMALL_STATE(225)] = 9554,
  [SMALL_STATE(226)] = 9584,
  [SMALL_STATE(227)] = 9614,
  [SMALL_STATE(228)] = 9642,
  [SMALL_STATE(229)] = 9670,
  [SMALL_STATE(230)] = 9698,
  [SMALL_STATE(231)] = 9730,
  [SMALL_STATE(232)] = 9762,
  [SMALL_STATE(233)] = 9794,
  [SMALL_STATE(234)] = 9822,
  [SMALL_STATE(235)] = 9852,
  [SMALL_STATE(236)] = 9880,
  [SMALL_STATE(237)] = 9908,
  [SMALL_STATE(238)] = 9938,
  [SMALL_STATE(239)] = 9966,
  [SMALL_STATE(240)] = 10000,
  [SMALL_STATE(241)] = 10028,
  [SMALL_STATE(242)] = 10062,
  [SMALL_STATE(243)] = 10094,
  [SMALL_STATE(244)] = 10122,
  [SMALL_STATE(245)] = 10150,
  [SMALL_STATE(246)] = 10178,
  [SMALL_STATE(247)] = 10208,
  [SMALL_STATE(248)] = 10242,
  [SMALL_STATE(249)] = 10274,
  [SMALL_STATE(250)] = 10304,
  [SMALL_STATE(251)] = 10334,
  [SMALL_STATE(252)] = 10366,
  [SMALL_STATE(253)] = 10400,
  [SMALL_STATE(254)] = 10428,
  [SMALL_STATE(255)] = 10462,
  [SMALL_STATE(256)] = 10492,
  [SMALL_STATE(257)] = 10524,
  [SMALL_STATE(258)] = 10566,
  [SMALL_STATE(259)] = 10598,
  [SMALL_STATE(260)] = 10628,
  [SMALL_STATE(261)] = 10662,
  [SMALL_STATE(262)] = 10692,
  [SMALL_STATE(263)] = 10722,
  [SMALL_STATE(264)] = 10752,
  [SMALL_STATE(265)] = 10784,
  [SMALL_STATE(266)] = 10817,
  [SMALL_STATE(267)] = 10844,
  [SMALL_STATE(268)] = 10875,
  [SMALL_STATE(269)] = 10914,
  [SMALL_STATE(270)] = 10943,
  [SMALL_STATE(271)] = 10972,
  [SMALL_STATE(272)] = 11001,
  [SMALL_STATE(273)] = 11028,
  [SMALL_STATE(274)] = 11057,
  [SMALL_STATE(275)] = 11086,
  [SMALL_STATE(276)] = 11113,
  [SMALL_STATE(277)] = 11142,
  [SMALL_STATE(278)] = 11173,
  [SMALL_STATE(279)] = 11202,
  [SMALL_STATE(280)] = 11231,
  [SMALL_STATE(281)] = 11260,
  [SMALL_STATE(282)] = 11291,
  [SMALL_STATE(283)] = 11322,
  [SMALL_STATE(284)] = 11353,
  [SMALL_STATE(285)] = 11384,
  [SMALL_STATE(286)] = 11415,
  [SMALL_STATE(287)] = 11442,
  [SMALL_STATE(288)] = 11469,
  [SMALL_STATE(289)] = 11500,
  [SMALL_STATE(290)] = 11531,
  [SMALL_STATE(291)] = 11560,
  [SMALL_STATE(292)] = 11589,
  [SMALL_STATE(293)] = 11618,
  [SMALL_STATE(294)] = 11647,
  [SMALL_STATE(295)] = 11674,
  [SMALL_STATE(296)] = 11703,
  [SMALL_STATE(297)] = 11732,
  [SMALL_STATE(298)] = 11763,
  [SMALL_STATE(299)] = 11802,
  [SMALL_STATE(300)] = 11833,
  [SMALL_STATE(301)] = 11864,
  [SMALL_STATE(302)] = 11893,
  [SMALL_STATE(303)] = 11920,
  [SMALL_STATE(304)] = 11949,
  [SMALL_STATE(305)] = 11976,
  [SMALL_STATE(306)] = 12005,
  [SMALL_STATE(307)] = 12044,
  [SMALL_STATE(308)] = 12075,
  [SMALL_STATE(309)] = 12106,
  [SMALL_STATE(310)] = 12137,
  [SMALL_STATE(311)] = 12166,
  [SMALL_STATE(312)] = 12197,
  [SMALL_STATE(313)] = 12223,
  [SMALL_STATE(314)] = 12251,
  [SMALL_STATE(315)] = 12279,
  [SMALL_STATE(316)] = 12315,
  [SMALL_STATE(317)] = 12351,
  [SMALL_STATE(318)] = 12387,
  [SMALL_STATE(319)] = 12413,
  [SMALL_STATE(320)] = 12449,
  [SMALL_STATE(321)] = 12485,
  [SMALL_STATE(322)] = 12513,
  [SMALL_STATE(323)] = 12549,
  [SMALL_STATE(324)] = 12585,
  [SMALL_STATE(325)] = 12613,
  [SMALL_STATE(326)] = 12641,
  [SMALL_STATE(327)] = 12677,
  [SMALL_STATE(328)] = 12713,
  [SMALL_STATE(329)] = 12749,
  [SMALL_STATE(330)] = 12785,
  [SMALL_STATE(331)] = 12817,
  [SMALL_STATE(332)] = 12847,
  [SMALL_STATE(333)] = 12883,
  [SMALL_STATE(334)] = 12919,
  [SMALL_STATE(335)] = 12955,
  [SMALL_STATE(336)] = 12991,
  [SMALL_STATE(337)] = 13017,
  [SMALL_STATE(338)] = 13053,
  [SMALL_STATE(339)] = 13089,
  [SMALL_STATE(340)] = 13125,
  [SMALL_STATE(341)] = 13151,
  [SMALL_STATE(342)] = 13187,
  [SMALL_STATE(343)] = 13223,
  [SMALL_STATE(344)] = 13249,
  [SMALL_STATE(345)] = 13285,
  [SMALL_STATE(346)] = 13313,
  [SMALL_STATE(347)] = 13349,
  [SMALL_STATE(348)] = 13377,
  [SMALL_STATE(349)] = 13403,
  [SMALL_STATE(350)] = 13429,
  [SMALL_STATE(351)] = 13457,
  [SMALL_STATE(352)] = 13483,
  [SMALL_STATE(353)] = 13511,
  [SMALL_STATE(354)] = 13539,
  [SMALL_STATE(355)] = 13575,
  [SMALL_STATE(356)] = 13611,
  [SMALL_STATE(357)] = 13637,
  [SMALL_STATE(358)] = 13673,
  [SMALL_STATE(359)] = 13699,
  [SMALL_STATE(360)] = 13725,
  [SMALL_STATE(361)] = 13751,
  [SMALL_STATE(362)] = 13787,
  [SMALL_STATE(363)] = 13823,
  [SMALL_STATE(364)] = 13859,
  [SMALL_STATE(365)] = 13885,
  [SMALL_STATE(366)] = 13913,
  [SMALL_STATE(367)] = 13939,
  [SMALL_STATE(368)] = 13964,
  [SMALL_STATE(369)] = 13989,
  [SMALL_STATE(370)] = 14014,
  [SMALL_STATE(371)] = 14039,
  [SMALL_STATE(372)] = 14064,
  [SMALL_STATE(373)] = 14089,
  [SMALL_STATE(374)] = 14114,
  [SMALL_STATE(375)] = 14139,
  [SMALL_STATE(376)] = 14164,
  [SMALL_STATE(377)] = 14189,
  [SMALL_STATE(378)] = 14214,
  [SMALL_STATE(379)] = 14239,
  [SMALL_STATE(380)] = 14264,
  [SMALL_STATE(381)] = 14289,
  [SMALL_STATE(382)] = 14314,
  [SMALL_STATE(383)] = 14339,
  [SMALL_STATE(384)] = 14364,
  [SMALL_STATE(385)] = 14389,
  [SMALL_STATE(386)] = 14414,
  [SMALL_STATE(387)] = 14439,
  [SMALL_STATE(388)] = 14464,
  [SMALL_STATE(389)] = 14489,
  [SMALL_STATE(390)] = 14514,
  [SMALL_STATE(391)] = 14539,
  [SMALL_STATE(392)] = 14564,
  [SMALL_STATE(393)] = 14589,
  [SMALL_STATE(394)] = 14614,
  [SMALL_STATE(395)] = 14639,
  [SMALL_STATE(396)] = 14664,
  [SMALL_STATE(397)] = 14689,
  [SMALL_STATE(398)] = 14714,
  [SMALL_STATE(399)] = 14739,
  [SMALL_STATE(400)] = 14766,
  [SMALL_STATE(401)] = 14791,
  [SMALL_STATE(402)] = 14816,
  [SMALL_STATE(403)] = 14841,
  [SMALL_STATE(404)] = 14866,
  [SMALL_STATE(405)] = 14891,
  [SMALL_STATE(406)] = 14916,
  [SMALL_STATE(407)] = 14941,
  [SMALL_STATE(408)] = 14966,
  [SMALL_STATE(409)] = 14991,
  [SMALL_STATE(410)] = 15016,
  [SMALL_STATE(411)] = 15041,
  [SMALL_STATE(412)] = 15065,
  [SMALL_STATE(413)] = 15089,
  [SMALL_STATE(414)] = 15132,
  [SMALL_STATE(415)] = 15173,
  [SMALL_STATE(416)] = 15207,
  [SMALL_STATE(417)] = 15237,
  [SMALL_STATE(418)] = 15271,
  [SMALL_STATE(419)] = 15308,
  [SMALL_STATE(420)] = 15333,
  [SMALL_STATE(421)] = 15356,
  [SMALL_STATE(422)] = 15378,
  [SMALL_STATE(423)] = 15410,
  [SMALL_STATE(424)] = 15444,
  [SMALL_STATE(425)] = 15476,
  [SMALL_STATE(426)] = 15496,
  [SMALL_STATE(427)] = 15530,
  [SMALL_STATE(428)] = 15561,
  [SMALL_STATE(429)] = 15580,
  [SMALL_STATE(430)] = 15608,
  [SMALL_STATE(431)] = 15636,
  [SMALL_STATE(432)] = 15664,
  [SMALL_STATE(433)] = 15692,
  [SMALL_STATE(434)] = 15720,
  [SMALL_STATE(435)] = 15748,
  [SMALL_STATE(436)] = 15776,
  [SMALL_STATE(437)] = 15804,
  [SMALL_STATE(438)] = 15832,
  [SMALL_STATE(439)] = 15860,
  [SMALL_STATE(440)] = 15888,
  [SMALL_STATE(441)] = 15916,
  [SMALL_STATE(442)] = 15944,
  [SMALL_STATE(443)] = 15972,
  [SMALL_STATE(444)] = 16000,
  [SMALL_STATE(445)] = 16028,
  [SMALL_STATE(446)] = 16050,
  [SMALL_STATE(447)] = 16078,
  [SMALL_STATE(448)] = 16106,
  [SMALL_STATE(449)] = 16134,
  [SMALL_STATE(450)] = 16162,
  [SMALL_STATE(451)] = 16190,
  [SMALL_STATE(452)] = 16212,
  [SMALL_STATE(453)] = 16232,
  [SMALL_STATE(454)] = 16260,
  [SMALL_STATE(455)] = 16288,
  [SMALL_STATE(456)] = 16316,
  [SMALL_STATE(457)] = 16344,
  [SMALL_STATE(458)] = 16372,
  [SMALL_STATE(459)] = 16400,
  [SMALL_STATE(460)] = 16428,
  [SMALL_STATE(461)] = 16456,
  [SMALL_STATE(462)] = 16484,
  [SMALL_STATE(463)] = 16512,
  [SMALL_STATE(464)] = 16540,
  [SMALL_STATE(465)] = 16568,
  [SMALL_STATE(466)] = 16596,
  [SMALL_STATE(467)] = 16624,
  [SMALL_STATE(468)] = 16652,
  [SMALL_STATE(469)] = 16680,
  [SMALL_STATE(470)] = 16708,
  [SMALL_STATE(471)] = 16728,
  [SMALL_STATE(472)] = 16756,
  [SMALL_STATE(473)] = 16784,
  [SMALL_STATE(474)] = 16805,
  [SMALL_STATE(475)] = 16822,
  [SMALL_STATE(476)] = 16847,
  [SMALL_STATE(477)] = 16866,
  [SMALL_STATE(478)] = 16887,
  [SMALL_STATE(479)] = 16912,
  [SMALL_STATE(480)] = 16931,
  [SMALL_STATE(481)] = 16952,
  [SMALL_STATE(482)] = 16971,
  [SMALL_STATE(483)] = 16992,
  [SMALL_STATE(484)] = 17017,
  [SMALL_STATE(485)] = 17042,
  [SMALL_STATE(486)] = 17061,
  [SMALL_STATE(487)] = 17078,
  [SMALL_STATE(488)] = 17103,
  [SMALL_STATE(489)] = 17124,
  [SMALL_STATE(490)] = 17143,
  [SMALL_STATE(491)] = 17168,
  [SMALL_STATE(492)] = 17186,
  [SMALL_STATE(493)] = 17204,
  [SMALL_STATE(494)] = 17226,
  [SMALL_STATE(495)] = 17246,
  [SMALL_STATE(496)] = 17264,
  [SMALL_STATE(497)] = 17284,
  [SMALL_STATE(498)] = 17304,
  [SMALL_STATE(499)] = 17322,
  [SMALL_STATE(500)] = 17344,
  [SMALL_STATE(501)] = 17360,
  [SMALL_STATE(502)] = 17380,
  [SMALL_STATE(503)] = 17400,
  [SMALL_STATE(504)] = 17416,
  [SMALL_STATE(505)] = 17436,
  [SMALL_STATE(506)] = 17452,
  [SMALL_STATE(507)] = 17472,
  [SMALL_STATE(508)] = 17492,
  [SMALL_STATE(509)] = 17514,
  [SMALL_STATE(510)] = 17532,
  [SMALL_STATE(511)] = 17552,
  [SMALL_STATE(512)] = 17572,
  [SMALL_STATE(513)] = 17594,
  [SMALL_STATE(514)] = 17614,
  [SMALL_STATE(515)] = 17636,
  [SMALL_STATE(516)] = 17658,
  [SMALL_STATE(517)] = 17676,
  [SMALL_STATE(518)] = 17696,
  [SMALL_STATE(519)] = 17712,
  [SMALL_STATE(520)] = 17732,
  [SMALL_STATE(521)] = 17748,
  [SMALL_STATE(522)] = 17770,
  [SMALL_STATE(523)] = 17792,
  [SMALL_STATE(524)] = 17808,
  [SMALL_STATE(525)] = 17826,
  [SMALL_STATE(526)] = 17848,
  [SMALL_STATE(527)] = 17868,
  [SMALL_STATE(528)] = 17890,
  [SMALL_STATE(529)] = 17910,
  [SMALL_STATE(530)] = 17930,
  [SMALL_STATE(531)] = 17950,
  [SMALL_STATE(532)] = 17970,
  [SMALL_STATE(533)] = 17990,
  [SMALL_STATE(534)] = 18012,
  [SMALL_STATE(535)] = 18032,
  [SMALL_STATE(536)] = 18048,
  [SMALL_STATE(537)] = 18068,
  [SMALL_STATE(538)] = 18090,
  [SMALL_STATE(539)] = 18112,
  [SMALL_STATE(540)] = 18132,
  [SMALL_STATE(541)] = 18152,
  [SMALL_STATE(542)] = 18172,
  [SMALL_STATE(543)] = 18192,
  [SMALL_STATE(544)] = 18208,
  [SMALL_STATE(545)] = 18226,
  [SMALL_STATE(546)] = 18242,
  [SMALL_STATE(547)] = 18258,
  [SMALL_STATE(548)] = 18274,
  [SMALL_STATE(549)] = 18296,
  [SMALL_STATE(550)] = 18318,
  [SMALL_STATE(551)] = 18338,
  [SMALL_STATE(552)] = 18354,
  [SMALL_STATE(553)] = 18370,
  [SMALL_STATE(554)] = 18390,
  [SMALL_STATE(555)] = 18410,
  [SMALL_STATE(556)] = 18430,
  [SMALL_STATE(557)] = 18448,
  [SMALL_STATE(558)] = 18470,
  [SMALL_STATE(559)] = 18486,
  [SMALL_STATE(560)] = 18504,
  [SMALL_STATE(561)] = 18526,
  [SMALL_STATE(562)] = 18545,
  [SMALL_STATE(563)] = 18562,
  [SMALL_STATE(564)] = 18577,
  [SMALL_STATE(565)] = 18594,
  [SMALL_STATE(566)] = 18613,
  [SMALL_STATE(567)] = 18628,
  [SMALL_STATE(568)] = 18647,
  [SMALL_STATE(569)] = 18662,
  [SMALL_STATE(570)] = 18677,
  [SMALL_STATE(571)] = 18696,
  [SMALL_STATE(572)] = 18715,
  [SMALL_STATE(573)] = 18730,
  [SMALL_STATE(574)] = 18749,
  [SMALL_STATE(575)] = 18768,
  [SMALL_STATE(576)] = 18785,
  [SMALL_STATE(577)] = 18800,
  [SMALL_STATE(578)] = 18819,
  [SMALL_STATE(579)] = 18838,
  [SMALL_STATE(580)] = 18853,
  [SMALL_STATE(581)] = 18872,
  [SMALL_STATE(582)] = 18891,
  [SMALL_STATE(583)] = 18906,
  [SMALL_STATE(584)] = 18923,
  [SMALL_STATE(585)] = 18940,
  [SMALL_STATE(586)] = 18959,
  [SMALL_STATE(587)] = 18976,
  [SMALL_STATE(588)] = 18993,
  [SMALL_STATE(589)] = 19010,
  [SMALL_STATE(590)] = 19029,
  [SMALL_STATE(591)] = 19046,
  [SMALL_STATE(592)] = 19063,
  [SMALL_STATE(593)] = 19082,
  [SMALL_STATE(594)] = 19101,
  [SMALL_STATE(595)] = 19116,
  [SMALL_STATE(596)] = 19135,
  [SMALL_STATE(597)] = 19152,
  [SMALL_STATE(598)] = 19171,
  [SMALL_STATE(599)] = 19186,
  [SMALL_STATE(600)] = 19201,
  [SMALL_STATE(601)] = 19217,
  [SMALL_STATE(602)] = 19231,
  [SMALL_STATE(603)] = 19247,
  [SMALL_STATE(604)] = 19263,
  [SMALL_STATE(605)] = 19279,
  [SMALL_STATE(606)] = 19295,
  [SMALL_STATE(607)] = 19311,
  [SMALL_STATE(608)] = 19327,
  [SMALL_STATE(609)] = 19343,
  [SMALL_STATE(610)] = 19359,
  [SMALL_STATE(611)] = 19375,
  [SMALL_STATE(612)] = 19389,
  [SMALL_STATE(613)] = 19403,
  [SMALL_STATE(614)] = 19417,
  [SMALL_STATE(615)] = 19433,
  [SMALL_STATE(616)] = 19449,
  [SMALL_STATE(617)] = 19463,
  [SMALL_STATE(618)] = 19477,
  [SMALL_STATE(619)] = 19490,
  [SMALL_STATE(620)] = 19503,
  [SMALL_STATE(621)] = 19516,
  [SMALL_STATE(622)] = 19529,
  [SMALL_STATE(623)] = 19542,
  [SMALL_STATE(624)] = 19555,
  [SMALL_STATE(625)] = 19568,
  [SMALL_STATE(626)] = 19581,
  [SMALL_STATE(627)] = 19594,
  [SMALL_STATE(628)] = 19607,
  [SMALL_STATE(629)] = 19620,
  [SMALL_STATE(630)] = 19633,
  [SMALL_STATE(631)] = 19646,
  [SMALL_STATE(632)] = 19659,
  [SMALL_STATE(633)] = 19672,
  [SMALL_STATE(634)] = 19685,
  [SMALL_STATE(635)] = 19698,
  [SMALL_STATE(636)] = 19711,
  [SMALL_STATE(637)] = 19724,
  [SMALL_STATE(638)] = 19737,
  [SMALL_STATE(639)] = 19750,
  [SMALL_STATE(640)] = 19763,
  [SMALL_STATE(641)] = 19776,
  [SMALL_STATE(642)] = 19789,
  [SMALL_STATE(643)] = 19802,
  [SMALL_STATE(644)] = 19815,
  [SMALL_STATE(645)] = 19828,
  [SMALL_STATE(646)] = 19841,
  [SMALL_STATE(647)] = 19854,
  [SMALL_STATE(648)] = 19867,
  [SMALL_STATE(649)] = 19880,
  [SMALL_STATE(650)] = 19893,
  [SMALL_STATE(651)] = 19906,
  [SMALL_STATE(652)] = 19919,
  [SMALL_STATE(653)] = 19932,
  [SMALL_STATE(654)] = 19945,
  [SMALL_STATE(655)] = 19958,
  [SMALL_STATE(656)] = 19971,
  [SMALL_STATE(657)] = 19984,
  [SMALL_STATE(658)] = 19997,
  [SMALL_STATE(659)] = 20010,
  [SMALL_STATE(660)] = 20023,
  [SMALL_STATE(661)] = 20036,
  [SMALL_STATE(662)] = 20049,
  [SMALL_STATE(663)] = 20062,
  [SMALL_STATE(664)] = 20075,
  [SMALL_STATE(665)] = 20088,
  [SMALL_STATE(666)] = 20101,
  [SMALL_STATE(667)] = 20114,
  [SMALL_STATE(668)] = 20127,
  [SMALL_STATE(669)] = 20140,
  [SMALL_STATE(670)] = 20153,
  [SMALL_STATE(671)] = 20166,
  [SMALL_STATE(672)] = 20179,
  [SMALL_STATE(673)] = 20192,
  [SMALL_STATE(674)] = 20205,
  [SMALL_STATE(675)] = 20218,
  [SMALL_STATE(676)] = 20231,
  [SMALL_STATE(677)] = 20244,
  [SMALL_STATE(678)] = 20257,
  [SMALL_STATE(679)] = 20270,
  [SMALL_STATE(680)] = 20283,
  [SMALL_STATE(681)] = 20296,
  [SMALL_STATE(682)] = 20309,
  [SMALL_STATE(683)] = 20313,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_rule, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_set_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_set_repeat1, 2), SHIFT_REPEAT(33),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(24),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 4, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_rule_set, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_rule_set_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_rule_set_repeat1, 2), SHIFT_REPEAT(33),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_name, 1), REDUCE(sym_path, 1),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(34),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 4),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 2), SHIFT_REPEAT(150),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, .production_id = 8),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, .production_id = 8),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, .production_id = 5),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 2, .production_id = 5),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, .production_id = 9),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, .production_id = 9),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vs_filter_definition, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, .production_id = 4),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 2, .production_id = 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 5),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical, 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(625),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(672),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(635),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(636),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 2), SHIFT_REPEAT(629),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 5),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 2), SHIFT_REPEAT(148),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concept, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(669),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(670),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(646),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(647),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(652),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(624),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(651),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(641),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(644),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(658),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 2), SHIFT_REPEAT(637),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_profile, 5),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_name, 1), REDUCE(sym_value, 1),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_name, 1), REDUCE(sym_value, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ratio_part, 1),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(79),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(453),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(617),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 2), SHIFT_REPEAT(2),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_code_string, 1), REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_code_string, 1), REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_string, 1),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_caret_value_rule_repeat1, 1),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1), SHIFT(534),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instance_repeat1, 2),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(625),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(634),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(629),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 2), SHIFT_REPEAT(621),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(79),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(625),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(627),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(628),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 2), SHIFT_REPEAT(629),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio_part, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(126),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant, 4),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(625),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(630),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(640),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 2), SHIFT_REPEAT(633),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(113),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 2),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(113),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 3),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mapping_rule, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(625),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(664),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 2), SHIFT_REPEAT(629),
  [522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(119),
  [525] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(119),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(625),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(664),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 2), SHIFT_REPEAT(629),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_rule, 4),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_operator, 1),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vs_filter_operator, 1),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 4),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mapping_rule, 4),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_rule, 3),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(144),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(147),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cardinality_rule_repeat1, 1),
  [561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(147),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_insert_rule_repeat1, 1),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(178),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 5),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mapping_rule, 5),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(161),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codesystem, 5),
  [596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(181),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(208),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(199),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 2), SHIFT_REPEAT(413),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance, 5),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 2), SHIFT_REPEAT(427),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset, 5),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 2), SHIFT_REPEAT(179),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping, 5),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 2), SHIFT_REPEAT(423),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(193),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_metadata, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat1, 1),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_metadata, 1),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_metadata, 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat1, 1),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instance_repeat1, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 6),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_metadata, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat1, 1),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parent, 3),
  [682] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(234),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [687] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(237),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 3),
  [692] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(250),
  [695] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(249),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 5),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [704] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(263),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(259),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [714] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(261),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 7),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_cre_element_rule, 6),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_of, 3),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_of, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usage, 3),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usage, 3),
  [735] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(276),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat1, 1),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_metadata, 1),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(344),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invariant_metadata, 1),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invariant_repeat1, 1),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat1, 1),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_metadata, 1),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_severity, 3),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath, 3),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 3),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_valueset, 2),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2),
  [771] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cardinality_rule_repeat1, 2), SHIFT_REPEAT(340),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_string, 2),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 7),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 6),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 5),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 5),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [788] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(279),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_canonical, 4),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 4),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 3),
  [797] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(305),
  [800] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(310),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 2),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag, 1),
  [815] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(292),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [824] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(303),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 4),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 1),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality, 3),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2),
  [845] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vs_filter_list_repeat1, 2), SHIFT_REPEAT(298),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 4),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 4),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_type, 1, .production_id = 7),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 4),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [866] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(324),
  [869] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_obeys_rule_repeat1, 2), SHIFT_REPEAT(338),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2),
  [874] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(132),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_from_system, 2),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 2),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 3),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 1),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_list, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contains_rule_repeat1, 2), SHIFT_REPEAT(306),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 3),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_rule, 5),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_obeys_rule, 5),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_only_rule, 5),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cardinality_rule_repeat1, 1),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 2),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 4, .production_id = 6),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [920] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(399),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 3, .production_id = 1),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 3, .production_id = 1),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_definition, 3),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_value, 1),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 4),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 4, .production_id = 6),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 3),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ratio, 3),
  [955] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_code_insert_rule, 3, .production_id = 1), REDUCE(sym_insert_rule, 3, .production_id = 1),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component_from, 4),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lr_rule, 1),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_entity_rule, 1),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instance_repeat2, 1),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 3),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_valueset_repeat2, 1),
  [970] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_code_insert_rule, 3), REDUCE(sym_insert_rule, 3),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_rule_set_reference, 4),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_rule, 1),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_rule, 1),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codesystem_repeat2, 1),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cs_rule, 1),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 4),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_caret_value_rule, 4),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 3),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fixed_value_rule, 7),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strength, 3),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapping_repeat2, 1),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_component, 2),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logical_repeat1, 1),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_set_repeat1, 1),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set_rule, 1),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_rule_set_repeat1, 1, .production_id = 2),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_cre_element_rule, 7),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 4),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concept, 4),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_insert_rule, 3),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_caret_value_rule, 5),
  [1015] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_caret_value_rule, 4), REDUCE(sym_code_caret_value_rule, 4),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 4),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapping_rule, 6),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_element_rule, 8),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_rule, 3),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_filter_component, 4),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_valueset_rule, 5),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_value_rule, 5),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_profile_repeat2, 1),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sd_rule, 1),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vs_concept_component, 2),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doc_repeat1, 1),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 5, .production_id = 3),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1050] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(425),
  [1053] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2), SHIFT_REPEAT(462),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flag_rule_repeat1, 2),
  [1058] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_caret_value_rule_repeat1, 2), SHIFT_REPEAT(465),
  [1061] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_caret_value_rule_repeat1, 2), SHIFT_REPEAT(617),
  [1064] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_caret_value_rule_repeat1, 2), SHIFT_REPEAT(2),
  [1067] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_caret_value_rule_repeat1, 2),
  [1069] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(439),
  [1072] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(617),
  [1075] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2), SHIFT_REPEAT(2),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [1098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [1112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(486),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [1117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [1121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [1129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(474),
  [1132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(523),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [1137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(551),
  [1140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(551),
  [1143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(545),
  [1146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(535),
  [1149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(505),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [1154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(566),
  [1157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(572),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(599),
  [1167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [1169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [1171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(596),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [1182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_param_rule_set_params_repeat1, 2),
  [1194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_param_rule_set_params_repeat1, 2), SHIFT_REPEAT(569),
  [1197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [1199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(582),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [1218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(576),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [1229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [1243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_rule_set_params, 1),
  [1245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [1247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(563),
  [1254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_sequence, 1), SHIFT(563),
  [1257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(579),
  [1264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(590),
  [1267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2),
  [1269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(616),
  [1272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_only_rule_repeat1, 2), SHIFT_REPEAT(139),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_param_rule_set_params_repeat1, 1),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2),
  [1305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reference_repeat1, 2), SHIFT_REPEAT(525),
  [1308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(612),
  [1311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(601),
  [1314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 2), SHIFT_REPEAT(522),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [1323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(617),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vs_concept_component_repeat1, 2),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_canonical_repeat1, 4),
  [1342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unit_repeat1, 1),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(683),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(682),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1390] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caret_path, 2),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fsh_comment, 2),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fsh_comment, 3),
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

TS_PUBLIC const TSLanguage *tree_sitter_fsh() {
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

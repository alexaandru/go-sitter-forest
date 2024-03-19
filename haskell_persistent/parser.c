#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 522
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 178
#define ALIAS_COUNT 5
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 27

enum ts_symbol_identifiers {
  sym__varid = 1,
  sym_is_sum_marker = 2,
  sym_comment = 3,
  anon_sym_Id = 4,
  anon_sym_Primary = 5,
  anon_sym_sql = 6,
  anon_sym_EQ = 7,
  sym_attribute_exclamation_mark = 8,
  aux_sym__attribute_key_value_value_token1 = 9,
  aux_sym__attribute_key_value_value_token2 = 10,
  aux_sym__attribute_key_value_value_token3 = 11,
  sym_attribute_name = 12,
  sym__field_strictness_prefix = 13,
  sym_cascade_action = 14,
  sym_sql_constraint_name = 15,
  anon_sym_Foreign = 16,
  anon_sym_References = 17,
  anon_sym_deriving = 18,
  sym_comma = 19,
  anon_sym_DOT = 20,
  sym__consym = 21,
  sym__tyconsym = 22,
  sym_float = 23,
  sym_char = 24,
  sym_string = 25,
  sym__integer_literal = 26,
  sym__binary_literal = 27,
  sym__octal_literal = 28,
  sym__hex_literal = 29,
  anon_sym_u21d2 = 30,
  anon_sym_EQ_GT = 31,
  anon_sym_u2192 = 32,
  anon_sym_DASH_GT = 33,
  anon_sym_u2190 = 34,
  anon_sym_LT_DASH = 35,
  anon_sym_u2237 = 36,
  anon_sym_COLON_COLON = 37,
  sym__immediate_dot = 38,
  sym_label = 39,
  anon_sym_DASH = 40,
  anon_sym_LPAREN = 41,
  anon_sym_RPAREN = 42,
  anon_sym_BQUOTE = 43,
  sym_implicit_parid = 44,
  sym__conid = 45,
  anon_sym_LBRACK = 46,
  anon_sym_RBRACK = 47,
  anon_sym_SQUOTE = 48,
  anon_sym_pattern = 49,
  anon_sym_type = 50,
  anon_sym_hiding = 51,
  anon_sym_import = 52,
  anon_sym_qualified = 53,
  anon_sym_as = 54,
  anon_sym_module = 55,
  anon_sym_LBRACE = 56,
  anon_sym_RBRACE = 57,
  anon_sym_forall = 58,
  anon_sym_u2200 = 59,
  anon_sym_PIPE = 60,
  anon_sym_STAR = 61,
  anon_sym_u2605 = 62,
  anon_sym_AT = 63,
  anon_sym_PERCENT = 64,
  anon_sym_instance = 65,
  anon_sym_representational = 66,
  anon_sym_nominal = 67,
  anon_sym_phantom = 68,
  anon_sym__ = 69,
  anon_sym_role = 70,
  sym__newline = 71,
  sym__indent = 72,
  sym__dedent = 73,
  sym_persistent_definitions = 74,
  sym_entity_definition = 75,
  sym_entity_body = 76,
  sym__entity_name = 77,
  sym__field_name = 78,
  sym__haskell_constraint_name = 79,
  sym__persistent_type = 80,
  sym__entity_header = 81,
  sym__entity_line_definition = 82,
  sym__entity_key = 83,
  sym_surrogate_key = 84,
  sym_natural_key = 85,
  sym__list_of_fields = 86,
  sym__entity_attribute = 87,
  sym__field_attribute = 88,
  sym__attribute = 89,
  sym__attribute_unambiguous = 90,
  sym__attribute_sql = 91,
  sym__list_of_attributes_unambiguous_start = 92,
  sym_attribute_key_value = 93,
  sym__attribute_key_value_value = 94,
  sym_field_definition = 95,
  sym_unique_constraint = 96,
  sym_foreign_constraint = 97,
  sym_entity_deriving = 98,
  sym__dot = 99,
  sym_integer = 100,
  sym__literal = 101,
  sym__carrow = 102,
  sym__arrow = 103,
  sym__colon2 = 104,
  sym_variable = 105,
  sym_constructor = 106,
  sym_constructor_operator = 107,
  sym_qualified_constructor_operator = 108,
  sym_con_unit = 109,
  sym_con_list = 110,
  sym_con_tuple = 111,
  sym_qualified_type = 112,
  sym__type_operator = 113,
  sym_qualified_type_operator = 114,
  sym__qualified_type_operator = 115,
  sym__ticked_qtycon = 116,
  sym__qtyconops = 117,
  sym__promoted_tyconop = 118,
  sym__qtyconop = 119,
  sym_tycon_arrow = 120,
  sym_type_literal = 121,
  sym__promoted_tycon = 122,
  sym__modid = 123,
  aux_sym__qualifying_module = 124,
  sym_type_variable = 125,
  sym_annotated_type_variable = 126,
  sym_inferred_type_variable = 127,
  sym__quantifier = 128,
  sym__forall_kw = 129,
  sym__forall_dot = 130,
  sym__forall = 131,
  sym_type_parens = 132,
  sym_type_list = 133,
  sym__type_tuple = 134,
  sym_type_tuple = 135,
  sym__type_promotable_literal = 136,
  sym__type_promoted_literal = 137,
  sym__type_literal = 138,
  sym_type_name = 139,
  sym_type_star = 140,
  sym__atype = 141,
  sym_type_invisible = 142,
  sym_type_apply = 143,
  sym__btype = 144,
  sym_implicit_param = 145,
  sym_type_infix = 146,
  sym__type_infix = 147,
  sym_constraint = 148,
  sym__quantified_constraint = 149,
  sym__constraint_context = 150,
  sym__constraint = 151,
  sym__context_constraints = 152,
  sym__context = 153,
  sym__type_quantifiers = 154,
  sym__type_context = 155,
  sym_modifier = 156,
  sym__fun_arrow = 157,
  sym__type_fun = 158,
  sym__type = 159,
  sym__type_or_implicit = 160,
  sym__type_annotation = 161,
  sym_kind = 162,
  sym__type_with_kind = 163,
  aux_sym_persistent_definitions_repeat1 = 164,
  aux_sym_entity_body_repeat1 = 165,
  aux_sym__entity_header_repeat1 = 166,
  aux_sym_surrogate_key_repeat1 = 167,
  aux_sym__list_of_fields_repeat1 = 168,
  aux_sym_field_definition_repeat1 = 169,
  aux_sym_foreign_constraint_repeat1 = 170,
  aux_sym_entity_deriving_repeat1 = 171,
  aux_sym_con_tuple_repeat1 = 172,
  aux_sym__forall_repeat1 = 173,
  aux_sym_type_list_repeat1 = 174,
  aux_sym_type_apply_repeat1 = 175,
  aux_sym_constraint_repeat1 = 176,
  aux_sym__context_constraints_repeat1 = 177,
  alias_sym_class_name = 178,
  alias_sym_fields = 179,
  alias_sym_module = 180,
  alias_sym_references = 181,
  alias_sym_type = 182,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__varid] = "_varid",
  [sym_is_sum_marker] = "is_sum_marker",
  [sym_comment] = "comment",
  [anon_sym_Id] = "Id",
  [anon_sym_Primary] = "Primary",
  [anon_sym_sql] = "attribute_name",
  [anon_sym_EQ] = "=",
  [sym_attribute_exclamation_mark] = "attribute_exclamation_mark",
  [aux_sym__attribute_key_value_value_token1] = "integer",
  [aux_sym__attribute_key_value_value_token2] = "float",
  [aux_sym__attribute_key_value_value_token3] = "string",
  [sym_attribute_name] = "attribute_name",
  [sym__field_strictness_prefix] = "_field_strictness_prefix",
  [sym_cascade_action] = "cascade_action",
  [sym_sql_constraint_name] = "sql_constraint_name",
  [anon_sym_Foreign] = "Foreign",
  [anon_sym_References] = "References",
  [anon_sym_deriving] = "deriving",
  [sym_comma] = "comma",
  [anon_sym_DOT] = ".",
  [sym__consym] = "_consym",
  [sym__tyconsym] = "type_operator",
  [sym_float] = "float",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym__integer_literal] = "_integer_literal",
  [sym__binary_literal] = "_binary_literal",
  [sym__octal_literal] = "_octal_literal",
  [sym__hex_literal] = "_hex_literal",
  [anon_sym_u21d2] = "\u21d2",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_u2192] = "\u2192",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_u2190] = "\u2190",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_u2237] = "\u2237",
  [anon_sym_COLON_COLON] = "::",
  [sym__immediate_dot] = "_immediate_dot",
  [sym_label] = "label",
  [anon_sym_DASH] = "operator",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_BQUOTE] = "`",
  [sym_implicit_parid] = "implicit_parid",
  [sym__conid] = "_conid",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_pattern] = "pattern",
  [anon_sym_type] = "type",
  [anon_sym_hiding] = "hiding",
  [anon_sym_import] = "import",
  [anon_sym_qualified] = "qualified",
  [anon_sym_as] = "as",
  [anon_sym_module] = "module",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_forall] = "forall",
  [anon_sym_u2200] = "\u2200",
  [anon_sym_PIPE] = "|",
  [anon_sym_STAR] = "*",
  [anon_sym_u2605] = "\u2605",
  [anon_sym_AT] = "@",
  [anon_sym_PERCENT] = "%",
  [anon_sym_instance] = "instance",
  [anon_sym_representational] = "representational",
  [anon_sym_nominal] = "nominal",
  [anon_sym_phantom] = "phantom",
  [anon_sym__] = "_",
  [anon_sym_role] = "role",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_persistent_definitions] = "persistent_definitions",
  [sym_entity_definition] = "entity_definition",
  [sym_entity_body] = "entity_body",
  [sym__entity_name] = "_entity_name",
  [sym__field_name] = "_field_name",
  [sym__haskell_constraint_name] = "_haskell_constraint_name",
  [sym__persistent_type] = "_persistent_type",
  [sym__entity_header] = "_entity_header",
  [sym__entity_line_definition] = "_entity_line_definition",
  [sym__entity_key] = "_entity_key",
  [sym_surrogate_key] = "surrogate_key",
  [sym_natural_key] = "natural_key",
  [sym__list_of_fields] = "_list_of_fields",
  [sym__entity_attribute] = "_entity_attribute",
  [sym__field_attribute] = "_field_attribute",
  [sym__attribute] = "_attribute",
  [sym__attribute_unambiguous] = "attributes",
  [sym__attribute_sql] = "attribute_key_value",
  [sym__list_of_attributes_unambiguous_start] = "_list_of_attributes_unambiguous_start",
  [sym_attribute_key_value] = "attribute_key_value",
  [sym__attribute_key_value_value] = "_attribute_key_value_value",
  [sym_field_definition] = "field_definition",
  [sym_unique_constraint] = "unique_constraint",
  [sym_foreign_constraint] = "foreign_constraint",
  [sym_entity_deriving] = "entity_deriving",
  [sym__dot] = "_dot",
  [sym_integer] = "integer",
  [sym__literal] = "_literal",
  [sym__carrow] = "_carrow",
  [sym__arrow] = "_arrow",
  [sym__colon2] = "_colon2",
  [sym_variable] = "variable",
  [sym_constructor] = "constructor",
  [sym_constructor_operator] = "constructor_operator",
  [sym_qualified_constructor_operator] = "qualified_constructor_operator",
  [sym_con_unit] = "con_unit",
  [sym_con_list] = "con_list",
  [sym_con_tuple] = "con_tuple",
  [sym_qualified_type] = "qualified_type",
  [sym__type_operator] = "_type_operator",
  [sym_qualified_type_operator] = "qualified_type_operator",
  [sym__qualified_type_operator] = "_qualified_type_operator",
  [sym__ticked_qtycon] = "ticked",
  [sym__qtyconops] = "_qtyconops",
  [sym__promoted_tyconop] = "promoted",
  [sym__qtyconop] = "_qtyconop",
  [sym_tycon_arrow] = "tycon_arrow",
  [sym_type_literal] = "type_literal",
  [sym__promoted_tycon] = "promoted",
  [sym__modid] = "_modid",
  [aux_sym__qualifying_module] = "_qualifying_module",
  [sym_type_variable] = "type_variable",
  [sym_annotated_type_variable] = "annotated_type_variable",
  [sym_inferred_type_variable] = "inferred_type_variable",
  [sym__quantifier] = "_quantifier",
  [sym__forall_kw] = "_forall_kw",
  [sym__forall_dot] = "_forall_dot",
  [sym__forall] = "quantifiers",
  [sym_type_parens] = "type_parens",
  [sym_type_list] = "type_list",
  [sym__type_tuple] = "_type_tuple",
  [sym_type_tuple] = "type_tuple",
  [sym__type_promotable_literal] = "_type_promotable_literal",
  [sym__type_promoted_literal] = "promoted",
  [sym__type_literal] = "_type_literal",
  [sym_type_name] = "type_name",
  [sym_type_star] = "type_star",
  [sym__atype] = "_atype",
  [sym_type_invisible] = "type_invisible",
  [sym_type_apply] = "type_apply",
  [sym__btype] = "_btype",
  [sym_implicit_param] = "implicit_param",
  [sym_type_infix] = "type_infix",
  [sym__type_infix] = "_type_infix",
  [sym_constraint] = "constraint",
  [sym__quantified_constraint] = "forall",
  [sym__constraint_context] = "context",
  [sym__constraint] = "_constraint",
  [sym__context_constraints] = "_context_constraints",
  [sym__context] = "_context",
  [sym__type_quantifiers] = "forall",
  [sym__type_context] = "context",
  [sym_modifier] = "modifier",
  [sym__fun_arrow] = "_fun_arrow",
  [sym__type_fun] = "fun",
  [sym__type] = "_type",
  [sym__type_or_implicit] = "_type_or_implicit",
  [sym__type_annotation] = "_type_annotation",
  [sym_kind] = "kind",
  [sym__type_with_kind] = "_type_with_kind",
  [aux_sym_persistent_definitions_repeat1] = "persistent_definitions_repeat1",
  [aux_sym_entity_body_repeat1] = "entity_body_repeat1",
  [aux_sym__entity_header_repeat1] = "_entity_header_repeat1",
  [aux_sym_surrogate_key_repeat1] = "surrogate_key_repeat1",
  [aux_sym__list_of_fields_repeat1] = "_list_of_fields_repeat1",
  [aux_sym_field_definition_repeat1] = "field_definition_repeat1",
  [aux_sym_foreign_constraint_repeat1] = "foreign_constraint_repeat1",
  [aux_sym_entity_deriving_repeat1] = "entity_deriving_repeat1",
  [aux_sym_con_tuple_repeat1] = "con_tuple_repeat1",
  [aux_sym__forall_repeat1] = "_forall_repeat1",
  [aux_sym_type_list_repeat1] = "type_list_repeat1",
  [aux_sym_type_apply_repeat1] = "type_apply_repeat1",
  [aux_sym_constraint_repeat1] = "constraint_repeat1",
  [aux_sym__context_constraints_repeat1] = "_context_constraints_repeat1",
  [alias_sym_class_name] = "class_name",
  [alias_sym_fields] = "fields",
  [alias_sym_module] = "module",
  [alias_sym_references] = "references",
  [alias_sym_type] = "type",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__varid] = sym__varid,
  [sym_is_sum_marker] = sym_is_sum_marker,
  [sym_comment] = sym_comment,
  [anon_sym_Id] = anon_sym_Id,
  [anon_sym_Primary] = anon_sym_Primary,
  [anon_sym_sql] = sym_attribute_name,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_exclamation_mark] = sym_attribute_exclamation_mark,
  [aux_sym__attribute_key_value_value_token1] = sym_integer,
  [aux_sym__attribute_key_value_value_token2] = sym_float,
  [aux_sym__attribute_key_value_value_token3] = sym_string,
  [sym_attribute_name] = sym_attribute_name,
  [sym__field_strictness_prefix] = sym__field_strictness_prefix,
  [sym_cascade_action] = sym_cascade_action,
  [sym_sql_constraint_name] = sym_sql_constraint_name,
  [anon_sym_Foreign] = anon_sym_Foreign,
  [anon_sym_References] = anon_sym_References,
  [anon_sym_deriving] = anon_sym_deriving,
  [sym_comma] = sym_comma,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__consym] = sym__consym,
  [sym__tyconsym] = sym__tyconsym,
  [sym_float] = sym_float,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [sym__integer_literal] = sym__integer_literal,
  [sym__binary_literal] = sym__binary_literal,
  [sym__octal_literal] = sym__octal_literal,
  [sym__hex_literal] = sym__hex_literal,
  [anon_sym_u21d2] = anon_sym_u21d2,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_u2192] = anon_sym_u2192,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_u2190] = anon_sym_u2190,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_u2237] = anon_sym_u2237,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym__immediate_dot] = sym__immediate_dot,
  [sym_label] = sym_label,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [sym_implicit_parid] = sym_implicit_parid,
  [sym__conid] = sym__conid,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_pattern] = anon_sym_pattern,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_hiding] = anon_sym_hiding,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_qualified] = anon_sym_qualified,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_forall] = anon_sym_forall,
  [anon_sym_u2200] = anon_sym_u2200,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_u2605] = anon_sym_u2605,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_instance] = anon_sym_instance,
  [anon_sym_representational] = anon_sym_representational,
  [anon_sym_nominal] = anon_sym_nominal,
  [anon_sym_phantom] = anon_sym_phantom,
  [anon_sym__] = anon_sym__,
  [anon_sym_role] = anon_sym_role,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_persistent_definitions] = sym_persistent_definitions,
  [sym_entity_definition] = sym_entity_definition,
  [sym_entity_body] = sym_entity_body,
  [sym__entity_name] = sym__entity_name,
  [sym__field_name] = sym__field_name,
  [sym__haskell_constraint_name] = sym__haskell_constraint_name,
  [sym__persistent_type] = sym__persistent_type,
  [sym__entity_header] = sym__entity_header,
  [sym__entity_line_definition] = sym__entity_line_definition,
  [sym__entity_key] = sym__entity_key,
  [sym_surrogate_key] = sym_surrogate_key,
  [sym_natural_key] = sym_natural_key,
  [sym__list_of_fields] = sym__list_of_fields,
  [sym__entity_attribute] = sym__entity_attribute,
  [sym__field_attribute] = sym__field_attribute,
  [sym__attribute] = sym__attribute,
  [sym__attribute_unambiguous] = sym__attribute_unambiguous,
  [sym__attribute_sql] = sym_attribute_key_value,
  [sym__list_of_attributes_unambiguous_start] = sym__list_of_attributes_unambiguous_start,
  [sym_attribute_key_value] = sym_attribute_key_value,
  [sym__attribute_key_value_value] = sym__attribute_key_value_value,
  [sym_field_definition] = sym_field_definition,
  [sym_unique_constraint] = sym_unique_constraint,
  [sym_foreign_constraint] = sym_foreign_constraint,
  [sym_entity_deriving] = sym_entity_deriving,
  [sym__dot] = sym__dot,
  [sym_integer] = sym_integer,
  [sym__literal] = sym__literal,
  [sym__carrow] = sym__carrow,
  [sym__arrow] = sym__arrow,
  [sym__colon2] = sym__colon2,
  [sym_variable] = sym_variable,
  [sym_constructor] = sym_constructor,
  [sym_constructor_operator] = sym_constructor_operator,
  [sym_qualified_constructor_operator] = sym_qualified_constructor_operator,
  [sym_con_unit] = sym_con_unit,
  [sym_con_list] = sym_con_list,
  [sym_con_tuple] = sym_con_tuple,
  [sym_qualified_type] = sym_qualified_type,
  [sym__type_operator] = sym__type_operator,
  [sym_qualified_type_operator] = sym_qualified_type_operator,
  [sym__qualified_type_operator] = sym__qualified_type_operator,
  [sym__ticked_qtycon] = sym__ticked_qtycon,
  [sym__qtyconops] = sym__qtyconops,
  [sym__promoted_tyconop] = sym__promoted_tyconop,
  [sym__qtyconop] = sym__qtyconop,
  [sym_tycon_arrow] = sym_tycon_arrow,
  [sym_type_literal] = sym_type_literal,
  [sym__promoted_tycon] = sym__promoted_tyconop,
  [sym__modid] = sym__modid,
  [aux_sym__qualifying_module] = aux_sym__qualifying_module,
  [sym_type_variable] = sym_type_variable,
  [sym_annotated_type_variable] = sym_annotated_type_variable,
  [sym_inferred_type_variable] = sym_inferred_type_variable,
  [sym__quantifier] = sym__quantifier,
  [sym__forall_kw] = sym__forall_kw,
  [sym__forall_dot] = sym__forall_dot,
  [sym__forall] = sym__forall,
  [sym_type_parens] = sym_type_parens,
  [sym_type_list] = sym_type_list,
  [sym__type_tuple] = sym__type_tuple,
  [sym_type_tuple] = sym_type_tuple,
  [sym__type_promotable_literal] = sym__type_promotable_literal,
  [sym__type_promoted_literal] = sym__promoted_tyconop,
  [sym__type_literal] = sym__type_literal,
  [sym_type_name] = sym_type_name,
  [sym_type_star] = sym_type_star,
  [sym__atype] = sym__atype,
  [sym_type_invisible] = sym_type_invisible,
  [sym_type_apply] = sym_type_apply,
  [sym__btype] = sym__btype,
  [sym_implicit_param] = sym_implicit_param,
  [sym_type_infix] = sym_type_infix,
  [sym__type_infix] = sym__type_infix,
  [sym_constraint] = sym_constraint,
  [sym__quantified_constraint] = sym__quantified_constraint,
  [sym__constraint_context] = sym__constraint_context,
  [sym__constraint] = sym__constraint,
  [sym__context_constraints] = sym__context_constraints,
  [sym__context] = sym__context,
  [sym__type_quantifiers] = sym__quantified_constraint,
  [sym__type_context] = sym__constraint_context,
  [sym_modifier] = sym_modifier,
  [sym__fun_arrow] = sym__fun_arrow,
  [sym__type_fun] = sym__type_fun,
  [sym__type] = sym__type,
  [sym__type_or_implicit] = sym__type_or_implicit,
  [sym__type_annotation] = sym__type_annotation,
  [sym_kind] = sym_kind,
  [sym__type_with_kind] = sym__type_with_kind,
  [aux_sym_persistent_definitions_repeat1] = aux_sym_persistent_definitions_repeat1,
  [aux_sym_entity_body_repeat1] = aux_sym_entity_body_repeat1,
  [aux_sym__entity_header_repeat1] = aux_sym__entity_header_repeat1,
  [aux_sym_surrogate_key_repeat1] = aux_sym_surrogate_key_repeat1,
  [aux_sym__list_of_fields_repeat1] = aux_sym__list_of_fields_repeat1,
  [aux_sym_field_definition_repeat1] = aux_sym_field_definition_repeat1,
  [aux_sym_foreign_constraint_repeat1] = aux_sym_foreign_constraint_repeat1,
  [aux_sym_entity_deriving_repeat1] = aux_sym_entity_deriving_repeat1,
  [aux_sym_con_tuple_repeat1] = aux_sym_con_tuple_repeat1,
  [aux_sym__forall_repeat1] = aux_sym__forall_repeat1,
  [aux_sym_type_list_repeat1] = aux_sym_type_list_repeat1,
  [aux_sym_type_apply_repeat1] = aux_sym_type_apply_repeat1,
  [aux_sym_constraint_repeat1] = aux_sym_constraint_repeat1,
  [aux_sym__context_constraints_repeat1] = aux_sym__context_constraints_repeat1,
  [alias_sym_class_name] = alias_sym_class_name,
  [alias_sym_fields] = alias_sym_fields,
  [alias_sym_module] = alias_sym_module,
  [alias_sym_references] = alias_sym_references,
  [alias_sym_type] = alias_sym_type,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__varid] = {
    .visible = false,
    .named = true,
  },
  [sym_is_sum_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Primary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_exclamation_mark] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__attribute_key_value_value_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__attribute_key_value_value_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__attribute_key_value_value_token3] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym__field_strictness_prefix] = {
    .visible = false,
    .named = true,
  },
  [sym_cascade_action] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_constraint_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Foreign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_References] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deriving] = {
    .visible = true,
    .named = false,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__consym] = {
    .visible = false,
    .named = true,
  },
  [sym__tyconsym] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__integer_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__binary_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__octal_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__hex_literal] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_u21d2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u2192] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u2190] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u2237] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__immediate_dot] = {
    .visible = false,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_implicit_parid] = {
    .visible = true,
    .named = true,
  },
  [sym__conid] = {
    .visible = false,
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pattern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hiding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_qualified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
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
  [anon_sym_forall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u2200] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u2605] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_representational] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nominal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_phantom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_role] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_persistent_definitions] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_body] = {
    .visible = true,
    .named = true,
  },
  [sym__entity_name] = {
    .visible = false,
    .named = true,
  },
  [sym__field_name] = {
    .visible = false,
    .named = true,
  },
  [sym__haskell_constraint_name] = {
    .visible = false,
    .named = true,
  },
  [sym__persistent_type] = {
    .visible = false,
    .named = true,
  },
  [sym__entity_header] = {
    .visible = false,
    .named = true,
  },
  [sym__entity_line_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__entity_key] = {
    .visible = false,
    .named = true,
  },
  [sym_surrogate_key] = {
    .visible = true,
    .named = true,
  },
  [sym_natural_key] = {
    .visible = true,
    .named = true,
  },
  [sym__list_of_fields] = {
    .visible = false,
    .named = true,
  },
  [sym__entity_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__field_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__attribute_unambiguous] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute_sql] = {
    .visible = true,
    .named = true,
  },
  [sym__list_of_attributes_unambiguous_start] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute_key_value_value] = {
    .visible = false,
    .named = true,
  },
  [sym_field_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_unique_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_foreign_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_deriving] = {
    .visible = true,
    .named = true,
  },
  [sym__dot] = {
    .visible = false,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__carrow] = {
    .visible = false,
    .named = true,
  },
  [sym__arrow] = {
    .visible = false,
    .named = true,
  },
  [sym__colon2] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_constructor_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_con_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_con_list] = {
    .visible = true,
    .named = true,
  },
  [sym_con_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_type] = {
    .visible = true,
    .named = true,
  },
  [sym__type_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_type_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__qualified_type_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__ticked_qtycon] = {
    .visible = true,
    .named = true,
  },
  [sym__qtyconops] = {
    .visible = false,
    .named = true,
  },
  [sym__promoted_tyconop] = {
    .visible = true,
    .named = true,
  },
  [sym__qtyconop] = {
    .visible = false,
    .named = true,
  },
  [sym_tycon_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_type_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__promoted_tycon] = {
    .visible = true,
    .named = true,
  },
  [sym__modid] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__qualifying_module] = {
    .visible = false,
    .named = false,
  },
  [sym_type_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_annotated_type_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_inferred_type_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__quantifier] = {
    .visible = false,
    .named = true,
  },
  [sym__forall_kw] = {
    .visible = false,
    .named = true,
  },
  [sym__forall_dot] = {
    .visible = false,
    .named = true,
  },
  [sym__forall] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parens] = {
    .visible = true,
    .named = true,
  },
  [sym_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym__type_tuple] = {
    .visible = false,
    .named = true,
  },
  [sym_type_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym__type_promotable_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__type_promoted_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__type_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type_star] = {
    .visible = true,
    .named = true,
  },
  [sym__atype] = {
    .visible = false,
    .named = true,
  },
  [sym_type_invisible] = {
    .visible = true,
    .named = true,
  },
  [sym_type_apply] = {
    .visible = true,
    .named = true,
  },
  [sym__btype] = {
    .visible = false,
    .named = true,
  },
  [sym_implicit_param] = {
    .visible = true,
    .named = true,
  },
  [sym_type_infix] = {
    .visible = true,
    .named = true,
  },
  [sym__type_infix] = {
    .visible = false,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym__quantified_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym__constraint_context] = {
    .visible = true,
    .named = true,
  },
  [sym__constraint] = {
    .visible = false,
    .named = true,
  },
  [sym__context_constraints] = {
    .visible = false,
    .named = true,
  },
  [sym__context] = {
    .visible = false,
    .named = true,
  },
  [sym__type_quantifiers] = {
    .visible = true,
    .named = true,
  },
  [sym__type_context] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym__fun_arrow] = {
    .visible = false,
    .named = true,
  },
  [sym__type_fun] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym__type_or_implicit] = {
    .visible = false,
    .named = true,
  },
  [sym__type_annotation] = {
    .visible = false,
    .named = true,
  },
  [sym_kind] = {
    .visible = true,
    .named = true,
  },
  [sym__type_with_kind] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_persistent_definitions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entity_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__entity_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_surrogate_key_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__list_of_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_foreign_constraint_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entity_deriving_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_con_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__forall_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_apply_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constraint_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__context_constraints_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_fields] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_module] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_references] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_type] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_class = 1,
  field_left = 2,
  field_name = 3,
  field_op = 4,
  field_right = 5,
  field_type = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_class] = "class",
  [field_left] = "left",
  [field_name] = "name",
  [field_op] = "op",
  [field_right] = "right",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [5] = {.index = 1, .length = 1},
  [6] = {.index = 2, .length = 1},
  [7] = {.index = 3, .length = 1},
  [8] = {.index = 1, .length = 1},
  [9] = {.index = 2, .length = 1},
  [10] = {.index = 4, .length = 1},
  [11] = {.index = 5, .length = 1},
  [13] = {.index = 4, .length = 1},
  [14] = {.index = 4, .length = 1},
  [15] = {.index = 6, .length = 1},
  [16] = {.index = 7, .length = 2},
  [17] = {.index = 5, .length = 1},
  [18] = {.index = 9, .length = 2},
  [19] = {.index = 11, .length = 2},
  [20] = {.index = 7, .length = 2},
  [21] = {.index = 13, .length = 1},
  [22] = {.index = 14, .length = 3},
  [24] = {.index = 9, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0, .inherited = true},
  [1] =
    {field_name, 0},
  [2] =
    {field_name, 1},
  [3] =
    {field_type, 1, .inherited = true},
  [4] =
    {field_class, 0},
  [5] =
    {field_type, 1},
  [6] =
    {field_class, 1, .inherited = true},
  [7] =
    {field_name, 0},
    {field_type, 1},
  [9] =
    {field_name, 1},
    {field_type, 2},
  [11] =
    {field_class, 0, .inherited = true},
    {field_class, 1, .inherited = true},
  [13] =
    {field_type, 0, .inherited = true},
  [14] =
    {field_left, 0},
    {field_op, 1},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_module,
  },
  [3] = {
    [0] = alias_sym_type,
  },
  [4] = {
    [1] = alias_sym_type,
  },
  [8] = {
    [1] = sym__attribute_unambiguous,
  },
  [9] = {
    [2] = sym__attribute_unambiguous,
  },
  [10] = {
    [0] = alias_sym_class_name,
  },
  [12] = {
    [0] = alias_sym_fields,
  },
  [13] = {
    [0] = alias_sym_type,
  },
  [17] = {
    [2] = sym__attribute_unambiguous,
  },
  [20] = {
    [2] = sym__attribute_unambiguous,
  },
  [23] = {
    [1] = sym__attribute_unambiguous,
  },
  [24] = {
    [3] = sym__attribute_unambiguous,
  },
  [25] = {
    [5] = alias_sym_references,
  },
  [26] = {
    [6] = alias_sym_references,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__list_of_fields, 2,
    sym__list_of_fields,
    alias_sym_references,
  sym_constructor, 3,
    sym_constructor,
    alias_sym_module,
    alias_sym_type,
  sym_type_name, 2,
    sym_type_name,
    alias_sym_class_name,
  aux_sym__entity_header_repeat1, 2,
    aux_sym__entity_header_repeat1,
    sym__attribute_unambiguous,
  aux_sym_surrogate_key_repeat1, 2,
    aux_sym_surrogate_key_repeat1,
    sym__attribute_unambiguous,
  aux_sym__list_of_fields_repeat1, 2,
    aux_sym__list_of_fields_repeat1,
    alias_sym_fields,
  aux_sym_field_definition_repeat1, 2,
    aux_sym_field_definition_repeat1,
    sym__attribute_unambiguous,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 3,
  [6] = 6,
  [7] = 6,
  [8] = 6,
  [9] = 6,
  [10] = 6,
  [11] = 6,
  [12] = 6,
  [13] = 6,
  [14] = 6,
  [15] = 15,
  [16] = 15,
  [17] = 15,
  [18] = 15,
  [19] = 15,
  [20] = 15,
  [21] = 15,
  [22] = 15,
  [23] = 15,
  [24] = 15,
  [25] = 15,
  [26] = 15,
  [27] = 27,
  [28] = 27,
  [29] = 27,
  [30] = 27,
  [31] = 27,
  [32] = 27,
  [33] = 27,
  [34] = 27,
  [35] = 35,
  [36] = 36,
  [37] = 36,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 42,
  [45] = 45,
  [46] = 40,
  [47] = 41,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 43,
  [52] = 45,
  [53] = 49,
  [54] = 42,
  [55] = 40,
  [56] = 41,
  [57] = 48,
  [58] = 48,
  [59] = 42,
  [60] = 60,
  [61] = 61,
  [62] = 41,
  [63] = 40,
  [64] = 41,
  [65] = 40,
  [66] = 42,
  [67] = 48,
  [68] = 42,
  [69] = 40,
  [70] = 41,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 73,
  [75] = 73,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 79,
  [81] = 79,
  [82] = 79,
  [83] = 83,
  [84] = 79,
  [85] = 79,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 89,
  [92] = 92,
  [93] = 87,
  [94] = 94,
  [95] = 90,
  [96] = 88,
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
  [114] = 108,
  [115] = 94,
  [116] = 99,
  [117] = 110,
  [118] = 109,
  [119] = 89,
  [120] = 90,
  [121] = 104,
  [122] = 97,
  [123] = 92,
  [124] = 102,
  [125] = 111,
  [126] = 112,
  [127] = 113,
  [128] = 105,
  [129] = 103,
  [130] = 107,
  [131] = 131,
  [132] = 88,
  [133] = 101,
  [134] = 100,
  [135] = 98,
  [136] = 87,
  [137] = 106,
  [138] = 89,
  [139] = 110,
  [140] = 100,
  [141] = 92,
  [142] = 102,
  [143] = 108,
  [144] = 97,
  [145] = 94,
  [146] = 101,
  [147] = 103,
  [148] = 107,
  [149] = 87,
  [150] = 109,
  [151] = 90,
  [152] = 106,
  [153] = 104,
  [154] = 131,
  [155] = 105,
  [156] = 113,
  [157] = 112,
  [158] = 111,
  [159] = 88,
  [160] = 99,
  [161] = 106,
  [162] = 131,
  [163] = 109,
  [164] = 100,
  [165] = 101,
  [166] = 94,
  [167] = 111,
  [168] = 97,
  [169] = 107,
  [170] = 104,
  [171] = 92,
  [172] = 99,
  [173] = 103,
  [174] = 110,
  [175] = 102,
  [176] = 113,
  [177] = 112,
  [178] = 105,
  [179] = 108,
  [180] = 131,
  [181] = 181,
  [182] = 181,
  [183] = 181,
  [184] = 89,
  [185] = 90,
  [186] = 88,
  [187] = 181,
  [188] = 87,
  [189] = 181,
  [190] = 181,
  [191] = 181,
  [192] = 181,
  [193] = 181,
  [194] = 181,
  [195] = 181,
  [196] = 181,
  [197] = 97,
  [198] = 103,
  [199] = 101,
  [200] = 109,
  [201] = 99,
  [202] = 106,
  [203] = 110,
  [204] = 94,
  [205] = 103,
  [206] = 104,
  [207] = 100,
  [208] = 92,
  [209] = 102,
  [210] = 108,
  [211] = 111,
  [212] = 89,
  [213] = 107,
  [214] = 112,
  [215] = 113,
  [216] = 105,
  [217] = 131,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 113,
  [222] = 107,
  [223] = 105,
  [224] = 112,
  [225] = 111,
  [226] = 99,
  [227] = 104,
  [228] = 110,
  [229] = 98,
  [230] = 102,
  [231] = 92,
  [232] = 108,
  [233] = 88,
  [234] = 88,
  [235] = 90,
  [236] = 87,
  [237] = 87,
  [238] = 90,
  [239] = 89,
  [240] = 97,
  [241] = 94,
  [242] = 101,
  [243] = 101,
  [244] = 103,
  [245] = 107,
  [246] = 105,
  [247] = 113,
  [248] = 248,
  [249] = 112,
  [250] = 94,
  [251] = 109,
  [252] = 111,
  [253] = 108,
  [254] = 99,
  [255] = 110,
  [256] = 109,
  [257] = 106,
  [258] = 104,
  [259] = 92,
  [260] = 102,
  [261] = 261,
  [262] = 106,
  [263] = 97,
  [264] = 100,
  [265] = 265,
  [266] = 266,
  [267] = 266,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 281,
  [285] = 282,
  [286] = 286,
  [287] = 287,
  [288] = 280,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 103,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 330,
  [336] = 87,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 90,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 277,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 88,
  [355] = 350,
  [356] = 356,
  [357] = 357,
  [358] = 90,
  [359] = 359,
  [360] = 109,
  [361] = 89,
  [362] = 87,
  [363] = 363,
  [364] = 357,
  [365] = 101,
  [366] = 106,
  [367] = 357,
  [368] = 357,
  [369] = 88,
  [370] = 357,
  [371] = 371,
  [372] = 357,
  [373] = 357,
  [374] = 359,
  [375] = 94,
  [376] = 357,
  [377] = 357,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 97,
  [382] = 357,
  [383] = 383,
  [384] = 357,
  [385] = 87,
  [386] = 107,
  [387] = 387,
  [388] = 97,
  [389] = 389,
  [390] = 103,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 108,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 400,
  [409] = 89,
  [410] = 410,
  [411] = 399,
  [412] = 393,
  [413] = 398,
  [414] = 106,
  [415] = 400,
  [416] = 416,
  [417] = 399,
  [418] = 418,
  [419] = 393,
  [420] = 420,
  [421] = 94,
  [422] = 101,
  [423] = 102,
  [424] = 393,
  [425] = 399,
  [426] = 400,
  [427] = 398,
  [428] = 428,
  [429] = 398,
  [430] = 89,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 398,
  [435] = 435,
  [436] = 92,
  [437] = 400,
  [438] = 399,
  [439] = 393,
  [440] = 104,
  [441] = 110,
  [442] = 393,
  [443] = 399,
  [444] = 400,
  [445] = 445,
  [446] = 99,
  [447] = 398,
  [448] = 398,
  [449] = 400,
  [450] = 399,
  [451] = 393,
  [452] = 111,
  [453] = 109,
  [454] = 454,
  [455] = 112,
  [456] = 393,
  [457] = 399,
  [458] = 400,
  [459] = 105,
  [460] = 398,
  [461] = 113,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 477,
  [479] = 479,
  [480] = 474,
  [481] = 481,
  [482] = 482,
  [483] = 481,
  [484] = 474,
  [485] = 479,
  [486] = 477,
  [487] = 481,
  [488] = 477,
  [489] = 479,
  [490] = 474,
  [491] = 481,
  [492] = 477,
  [493] = 481,
  [494] = 477,
  [495] = 495,
  [496] = 479,
  [497] = 474,
  [498] = 498,
  [499] = 499,
  [500] = 477,
  [501] = 479,
  [502] = 474,
  [503] = 503,
  [504] = 504,
  [505] = 481,
  [506] = 479,
  [507] = 477,
  [508] = 508,
  [509] = 509,
  [510] = 481,
  [511] = 481,
  [512] = 477,
  [513] = 479,
  [514] = 474,
  [515] = 515,
  [516] = 479,
  [517] = 474,
  [518] = 474,
  [519] = 479,
  [520] = 520,
  [521] = 521,
};

static inline bool sym_comment_character_set_1(int32_t c) {
  return (c < 5760
    ? (c < ' '
      ? (c < '\r'
        ? c == '\n'
        : c <= '\r')
      : (c <= ' ' || c == 160))
    : (c <= 5760 || (c < 8287
      ? (c < 8239
        ? (c >= 8192 && c <= 8202)
        : c <= 8239)
      : (c <= 8287 || c == 12288))));
}

static inline bool sym_comment_character_set_2(int32_t c) {
  return (c < '<'
    ? (c < '+'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < ':'
        ? (c >= '-' && c <= '/')
        : c <= ':')))
    : (c <= '@' || (c < '~'
      ? (c < '|'
        ? c == '^'
        : c <= '|')
      : (c <= '~' || c == 8902))));
}

static inline bool sym__consym_character_set_1(int32_t c) {
  return (c < '<'
    ? (c < '+'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c >= '-' && c <= '/')))
    : (c <= '@' || (c < '~'
      ? (c < '|'
        ? c == '^'
        : c <= '|')
      : (c <= '~' || c == 8902))));
}

static inline bool sym__tyconsym_character_set_1(int32_t c) {
  return (c < '<'
    ? (c < '+'
      ? (c < '$'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c >= '.' && c <= '/')))
    : (c <= '@' || (c < '~'
      ? (c < '|'
        ? c == '^'
        : c <= '|')
      : (c <= '~' || c == 8902))));
}

static inline bool sym__tyconsym_character_set_2(int32_t c) {
  return (c < '<'
    ? (c < '+'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < ':'
        ? (c >= '.' && c <= '/')
        : c <= ':')))
    : (c <= '@' || (c < '~'
      ? (c < '|'
        ? c == '^'
        : c <= '|')
      : (c <= '~' || c == 8902))));
}

static inline bool sym__varid_character_set_1(int32_t c) {
  return (c < 7749
    ? (c < 987
      ? (c < 424
        ? (c < 326
          ? (c < 287
            ? (c < 267
              ? (c < 257
                ? (c < 223
                  ? (c < 181
                    ? (c >= '_' && c <= 'z')
                    : c <= 181)
                  : (c <= 246 || (c >= 248 && c <= 255)))
                : (c <= 257 || (c < 263
                  ? (c < 261
                    ? c == 259
                    : c <= 261)
                  : (c <= 263 || c == 265))))
              : (c <= 267 || (c < 277
                ? (c < 273
                  ? (c < 271
                    ? c == 269
                    : c <= 271)
                  : (c <= 273 || c == 275))
                : (c <= 277 || (c < 283
                  ? (c < 281
                    ? c == 279
                    : c <= 281)
                  : (c <= 283 || c == 285))))))
            : (c <= 287 || (c < 307
              ? (c < 297
                ? (c < 293
                  ? (c < 291
                    ? c == 289
                    : c <= 291)
                  : (c <= 293 || c == 295))
                : (c <= 297 || (c < 303
                  ? (c < 301
                    ? c == 299
                    : c <= 301)
                  : (c <= 303 || c == 305))))
              : (c <= 307 || (c < 318
                ? (c < 314
                  ? (c < 311
                    ? c == 309
                    : c <= 312)
                  : (c <= 314 || c == 316))
                : (c <= 318 || (c < 322
                  ? c == 320
                  : (c <= 322 || c == 324))))))))
          : (c <= 326 || (c < 367
            ? (c < 347
              ? (c < 337
                ? (c < 333
                  ? (c < 331
                    ? (c >= 328 && c <= 329)
                    : c <= 331)
                  : (c <= 333 || c == 335))
                : (c <= 337 || (c < 343
                  ? (c < 341
                    ? c == 339
                    : c <= 341)
                  : (c <= 343 || c == 345))))
              : (c <= 347 || (c < 357
                ? (c < 353
                  ? (c < 351
                    ? c == 349
                    : c <= 351)
                  : (c <= 353 || c == 355))
                : (c <= 357 || (c < 363
                  ? (c < 361
                    ? c == 359
                    : c <= 361)
                  : (c <= 363 || c == 365))))))
            : (c <= 367 || (c < 392
              ? (c < 378
                ? (c < 373
                  ? (c < 371
                    ? c == 369
                    : c <= 371)
                  : (c <= 373 || c == 375))
                : (c <= 378 || (c < 387
                  ? (c < 382
                    ? c == 380
                    : c <= 384)
                  : (c <= 387 || c == 389))))
              : (c <= 392 || (c < 414
                ? (c < 405
                  ? (c < 402
                    ? (c >= 396 && c <= 397)
                    : c <= 402)
                  : (c <= 405 || (c >= 409 && c <= 411)))
                : (c <= 414 || (c < 419
                  ? c == 417
                  : (c <= 419 || c == 421))))))))))
        : (c <= 424 || (c < 523
          ? (c < 481
            ? (c < 460
              ? (c < 438
                ? (c < 432
                  ? (c < 429
                    ? (c >= 426 && c <= 427)
                    : c <= 429)
                  : (c <= 432 || c == 436))
                : (c <= 438 || (c < 454
                  ? (c < 445
                    ? (c >= 441 && c <= 442)
                    : c <= 447)
                  : (c <= 454 || c == 457))))
              : (c <= 460 || (c < 470
                ? (c < 466
                  ? (c < 464
                    ? c == 462
                    : c <= 464)
                  : (c <= 466 || c == 468))
                : (c <= 470 || (c < 476
                  ? (c < 474
                    ? c == 472
                    : c <= 474)
                  : (c <= 477 || c == 479))))))
            : (c <= 481 || (c < 505
              ? (c < 491
                ? (c < 487
                  ? (c < 485
                    ? c == 483
                    : c <= 485)
                  : (c <= 487 || c == 489))
                : (c <= 491 || (c < 499
                  ? (c < 495
                    ? c == 493
                    : c <= 496)
                  : (c <= 499 || c == 501))))
              : (c <= 505 || (c < 515
                ? (c < 511
                  ? (c < 509
                    ? c == 507
                    : c <= 509)
                  : (c <= 511 || c == 513))
                : (c <= 515 || (c < 519
                  ? c == 517
                  : (c <= 519 || c == 521))))))))
          : (c <= 523 || (c < 563
            ? (c < 543
              ? (c < 533
                ? (c < 529
                  ? (c < 527
                    ? c == 525
                    : c <= 527)
                  : (c <= 529 || c == 531))
                : (c <= 533 || (c < 539
                  ? (c < 537
                    ? c == 535
                    : c <= 537)
                  : (c <= 539 || c == 541))))
              : (c <= 543 || (c < 553
                ? (c < 549
                  ? (c < 547
                    ? c == 545
                    : c <= 547)
                  : (c <= 549 || c == 551))
                : (c <= 553 || (c < 559
                  ? (c < 557
                    ? c == 555
                    : c <= 557)
                  : (c <= 559 || c == 561))))))
            : (c <= 569 || (c < 881
              ? (c < 585
                ? (c < 578
                  ? (c < 575
                    ? c == 572
                    : c <= 576)
                  : (c <= 578 || c == 583))
                : (c <= 585 || (c < 591
                  ? (c < 589
                    ? c == 587
                    : c <= 589)
                  : (c <= 659 || (c >= 661 && c <= 687)))))
              : (c <= 881 || (c < 940
                ? (c < 891
                  ? (c < 887
                    ? c == 883
                    : c <= 887)
                  : (c <= 893 || c == 912))
                : (c <= 974 || (c < 981
                  ? (c >= 976 && c <= 977)
                  : (c <= 983 || c == 985))))))))))))
      : (c <= 987 || (c < 1257
        ? (c < 1177
          ? (c < 1131
            ? (c < 1007
              ? (c < 997
                ? (c < 993
                  ? (c < 991
                    ? c == 989
                    : c <= 991)
                  : (c <= 993 || c == 995))
                : (c <= 997 || (c < 1003
                  ? (c < 1001
                    ? c == 999
                    : c <= 1001)
                  : (c <= 1003 || c == 1005))))
              : (c <= 1011 || (c < 1121
                ? (c < 1019
                  ? (c < 1016
                    ? c == 1013
                    : c <= 1016)
                  : (c <= 1020 || (c >= 1072 && c <= 1119)))
                : (c <= 1121 || (c < 1127
                  ? (c < 1125
                    ? c == 1123
                    : c <= 1125)
                  : (c <= 1127 || c == 1129))))))
            : (c <= 1131 || (c < 1151
              ? (c < 1141
                ? (c < 1137
                  ? (c < 1135
                    ? c == 1133
                    : c <= 1135)
                  : (c <= 1137 || c == 1139))
                : (c <= 1141 || (c < 1147
                  ? (c < 1145
                    ? c == 1143
                    : c <= 1145)
                  : (c <= 1147 || c == 1149))))
              : (c <= 1151 || (c < 1169
                ? (c < 1165
                  ? (c < 1163
                    ? c == 1153
                    : c <= 1163)
                  : (c <= 1165 || c == 1167))
                : (c <= 1169 || (c < 1173
                  ? c == 1171
                  : (c <= 1173 || c == 1175))))))))
          : (c <= 1177 || (c < 1218
            ? (c < 1197
              ? (c < 1187
                ? (c < 1183
                  ? (c < 1181
                    ? c == 1179
                    : c <= 1181)
                  : (c <= 1183 || c == 1185))
                : (c <= 1187 || (c < 1193
                  ? (c < 1191
                    ? c == 1189
                    : c <= 1191)
                  : (c <= 1193 || c == 1195))))
              : (c <= 1197 || (c < 1207
                ? (c < 1203
                  ? (c < 1201
                    ? c == 1199
                    : c <= 1201)
                  : (c <= 1203 || c == 1205))
                : (c <= 1207 || (c < 1213
                  ? (c < 1211
                    ? c == 1209
                    : c <= 1211)
                  : (c <= 1213 || c == 1215))))))
            : (c <= 1218 || (c < 1239
              ? (c < 1228
                ? (c < 1224
                  ? (c < 1222
                    ? c == 1220
                    : c <= 1222)
                  : (c <= 1224 || c == 1226))
                : (c <= 1228 || (c < 1235
                  ? (c < 1233
                    ? (c >= 1230 && c <= 1231)
                    : c <= 1233)
                  : (c <= 1235 || c == 1237))))
              : (c <= 1239 || (c < 1249
                ? (c < 1245
                  ? (c < 1243
                    ? c == 1241
                    : c <= 1243)
                  : (c <= 1245 || c == 1247))
                : (c <= 1249 || (c < 1253
                  ? c == 1251
                  : (c <= 1253 || c == 1255))))))))))
        : (c <= 1257 || (c < 5112
          ? (c < 1297
            ? (c < 1277
              ? (c < 1267
                ? (c < 1263
                  ? (c < 1261
                    ? c == 1259
                    : c <= 1261)
                  : (c <= 1263 || c == 1265))
                : (c <= 1267 || (c < 1273
                  ? (c < 1271
                    ? c == 1269
                    : c <= 1271)
                  : (c <= 1273 || c == 1275))))
              : (c <= 1277 || (c < 1287
                ? (c < 1283
                  ? (c < 1281
                    ? c == 1279
                    : c <= 1281)
                  : (c <= 1283 || c == 1285))
                : (c <= 1287 || (c < 1293
                  ? (c < 1291
                    ? c == 1289
                    : c <= 1291)
                  : (c <= 1293 || c == 1295))))))
            : (c <= 1297 || (c < 1317
              ? (c < 1307
                ? (c < 1303
                  ? (c < 1301
                    ? c == 1299
                    : c <= 1301)
                  : (c <= 1303 || c == 1305))
                : (c <= 1307 || (c < 1313
                  ? (c < 1311
                    ? c == 1309
                    : c <= 1311)
                  : (c <= 1313 || c == 1315))))
              : (c <= 1317 || (c < 1327
                ? (c < 1323
                  ? (c < 1321
                    ? c == 1319
                    : c <= 1321)
                  : (c <= 1323 || c == 1325))
                : (c <= 1327 || (c < 4304
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 4346 || (c >= 4349 && c <= 4351)))))))))
          : (c <= 5117 || (c < 7711
            ? (c < 7691
              ? (c < 7681
                ? (c < 7531
                  ? (c < 7424
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7467)
                  : (c <= 7543 || (c >= 7545 && c <= 7578)))
                : (c <= 7681 || (c < 7687
                  ? (c < 7685
                    ? c == 7683
                    : c <= 7685)
                  : (c <= 7687 || c == 7689))))
              : (c <= 7691 || (c < 7701
                ? (c < 7697
                  ? (c < 7695
                    ? c == 7693
                    : c <= 7695)
                  : (c <= 7697 || c == 7699))
                : (c <= 7701 || (c < 7707
                  ? (c < 7705
                    ? c == 7703
                    : c <= 7705)
                  : (c <= 7707 || c == 7709))))))
            : (c <= 7711 || (c < 7731
              ? (c < 7721
                ? (c < 7717
                  ? (c < 7715
                    ? c == 7713
                    : c <= 7715)
                  : (c <= 7717 || c == 7719))
                : (c <= 7721 || (c < 7727
                  ? (c < 7725
                    ? c == 7723
                    : c <= 7725)
                  : (c <= 7727 || c == 7729))))
              : (c <= 7731 || (c < 7741
                ? (c < 7737
                  ? (c < 7735
                    ? c == 7733
                    : c <= 7735)
                  : (c <= 7737 || c == 7739))
                : (c <= 7741 || (c < 7745
                  ? c == 7743
                  : (c <= 7745 || c == 7747))))))))))))))
    : (c <= 7749 || (c < 11447
      ? (c < 7913
        ? (c < 7827
          ? (c < 7789
            ? (c < 7769
              ? (c < 7759
                ? (c < 7755
                  ? (c < 7753
                    ? c == 7751
                    : c <= 7753)
                  : (c <= 7755 || c == 7757))
                : (c <= 7759 || (c < 7765
                  ? (c < 7763
                    ? c == 7761
                    : c <= 7763)
                  : (c <= 7765 || c == 7767))))
              : (c <= 7769 || (c < 7779
                ? (c < 7775
                  ? (c < 7773
                    ? c == 7771
                    : c <= 7773)
                  : (c <= 7775 || c == 7777))
                : (c <= 7779 || (c < 7785
                  ? (c < 7783
                    ? c == 7781
                    : c <= 7783)
                  : (c <= 7785 || c == 7787))))))
            : (c <= 7789 || (c < 7809
              ? (c < 7799
                ? (c < 7795
                  ? (c < 7793
                    ? c == 7791
                    : c <= 7793)
                  : (c <= 7795 || c == 7797))
                : (c <= 7799 || (c < 7805
                  ? (c < 7803
                    ? c == 7801
                    : c <= 7803)
                  : (c <= 7805 || c == 7807))))
              : (c <= 7809 || (c < 7819
                ? (c < 7815
                  ? (c < 7813
                    ? c == 7811
                    : c <= 7813)
                  : (c <= 7815 || c == 7817))
                : (c <= 7819 || (c < 7823
                  ? c == 7821
                  : (c <= 7823 || c == 7825))))))))
          : (c <= 7827 || (c < 7875
            ? (c < 7855
              ? (c < 7845
                ? (c < 7841
                  ? (c < 7839
                    ? (c >= 7829 && c <= 7837)
                    : c <= 7839)
                  : (c <= 7841 || c == 7843))
                : (c <= 7845 || (c < 7851
                  ? (c < 7849
                    ? c == 7847
                    : c <= 7849)
                  : (c <= 7851 || c == 7853))))
              : (c <= 7855 || (c < 7865
                ? (c < 7861
                  ? (c < 7859
                    ? c == 7857
                    : c <= 7859)
                  : (c <= 7861 || c == 7863))
                : (c <= 7865 || (c < 7871
                  ? (c < 7869
                    ? c == 7867
                    : c <= 7869)
                  : (c <= 7871 || c == 7873))))))
            : (c <= 7875 || (c < 7895
              ? (c < 7885
                ? (c < 7881
                  ? (c < 7879
                    ? c == 7877
                    : c <= 7879)
                  : (c <= 7881 || c == 7883))
                : (c <= 7885 || (c < 7891
                  ? (c < 7889
                    ? c == 7887
                    : c <= 7889)
                  : (c <= 7891 || c == 7893))))
              : (c <= 7895 || (c < 7905
                ? (c < 7901
                  ? (c < 7899
                    ? c == 7897
                    : c <= 7899)
                  : (c <= 7901 || c == 7903))
                : (c <= 7905 || (c < 7909
                  ? c == 7907
                  : (c <= 7909 || c == 7911))))))))))
        : (c <= 7913 || (c < 8518
          ? (c < 8080
            ? (c < 7933
              ? (c < 7923
                ? (c < 7919
                  ? (c < 7917
                    ? c == 7915
                    : c <= 7917)
                  : (c <= 7919 || c == 7921))
                : (c <= 7923 || (c < 7929
                  ? (c < 7927
                    ? c == 7925
                    : c <= 7927)
                  : (c <= 7929 || c == 7931))))
              : (c <= 7933 || (c < 8000
                ? (c < 7968
                  ? (c < 7952
                    ? (c >= 7935 && c <= 7943)
                    : c <= 7957)
                  : (c <= 7975 || (c >= 7984 && c <= 7991)))
                : (c <= 8005 || (c < 8048
                  ? (c < 8032
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8039)
                  : (c <= 8061 || (c >= 8064 && c <= 8071)))))))
            : (c <= 8087 || (c < 8178
              ? (c < 8130
                ? (c < 8118
                  ? (c < 8112
                    ? (c >= 8096 && c <= 8103)
                    : c <= 8116)
                  : (c <= 8119 || c == 8126))
                : (c <= 8132 || (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8135)
                    : c <= 8147)
                  : (c <= 8151 || (c >= 8160 && c <= 8167)))))
              : (c <= 8180 || (c < 8495
                ? (c < 8462
                  ? (c < 8458
                    ? (c >= 8182 && c <= 8183)
                    : c <= 8458)
                  : (c <= 8463 || c == 8467))
                : (c <= 8495 || (c < 8505
                  ? c == 8500
                  : (c <= 8505 || (c >= 8508 && c <= 8509)))))))))
          : (c <= 8521 || (c < 11409
            ? (c < 11379
              ? (c < 11365
                ? (c < 11312
                  ? (c < 8580
                    ? c == 8526
                    : c <= 8580)
                  : (c <= 11359 || c == 11361))
                : (c <= 11366 || (c < 11372
                  ? (c < 11370
                    ? c == 11368
                    : c <= 11370)
                  : (c <= 11372 || c == 11377))))
              : (c <= 11380 || (c < 11399
                ? (c < 11395
                  ? (c < 11393
                    ? (c >= 11382 && c <= 11387)
                    : c <= 11393)
                  : (c <= 11395 || c == 11397))
                : (c <= 11399 || (c < 11405
                  ? (c < 11403
                    ? c == 11401
                    : c <= 11403)
                  : (c <= 11405 || c == 11407))))))
            : (c <= 11409 || (c < 11429
              ? (c < 11419
                ? (c < 11415
                  ? (c < 11413
                    ? c == 11411
                    : c <= 11413)
                  : (c <= 11415 || c == 11417))
                : (c <= 11419 || (c < 11425
                  ? (c < 11423
                    ? c == 11421
                    : c <= 11423)
                  : (c <= 11425 || c == 11427))))
              : (c <= 11429 || (c < 11439
                ? (c < 11435
                  ? (c < 11433
                    ? c == 11431
                    : c <= 11433)
                  : (c <= 11435 || c == 11437))
                : (c <= 11439 || (c < 11443
                  ? c == 11441
                  : (c <= 11443 || c == 11445))))))))))))
      : (c <= 11447 || (c < 42813
        ? (c < 42581
          ? (c < 11487
            ? (c < 11467
              ? (c < 11457
                ? (c < 11453
                  ? (c < 11451
                    ? c == 11449
                    : c <= 11451)
                  : (c <= 11453 || c == 11455))
                : (c <= 11457 || (c < 11463
                  ? (c < 11461
                    ? c == 11459
                    : c <= 11461)
                  : (c <= 11463 || c == 11465))))
              : (c <= 11467 || (c < 11477
                ? (c < 11473
                  ? (c < 11471
                    ? c == 11469
                    : c <= 11471)
                  : (c <= 11473 || c == 11475))
                : (c <= 11477 || (c < 11483
                  ? (c < 11481
                    ? c == 11479
                    : c <= 11481)
                  : (c <= 11483 || c == 11485))))))
            : (c <= 11487 || (c < 42563
              ? (c < 11507
                ? (c < 11500
                  ? (c < 11491
                    ? c == 11489
                    : c <= 11492)
                  : (c <= 11500 || c == 11502))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || c == 42561))))
              : (c <= 42563 || (c < 42573
                ? (c < 42569
                  ? (c < 42567
                    ? c == 42565
                    : c <= 42567)
                  : (c <= 42569 || c == 42571))
                : (c <= 42573 || (c < 42577
                  ? c == 42575
                  : (c <= 42577 || c == 42579))))))))
          : (c <= 42581 || (c < 42639
            ? (c < 42601
              ? (c < 42591
                ? (c < 42587
                  ? (c < 42585
                    ? c == 42583
                    : c <= 42585)
                  : (c <= 42587 || c == 42589))
                : (c <= 42591 || (c < 42597
                  ? (c < 42595
                    ? c == 42593
                    : c <= 42595)
                  : (c <= 42597 || c == 42599))))
              : (c <= 42601 || (c < 42629
                ? (c < 42625
                  ? (c < 42605
                    ? c == 42603
                    : c <= 42605)
                  : (c <= 42625 || c == 42627))
                : (c <= 42629 || (c < 42635
                  ? (c < 42633
                    ? c == 42631
                    : c <= 42633)
                  : (c <= 42635 || c == 42637))))))
            : (c <= 42639 || (c < 42793
              ? (c < 42649
                ? (c < 42645
                  ? (c < 42643
                    ? c == 42641
                    : c <= 42643)
                  : (c <= 42645 || c == 42647))
                : (c <= 42649 || (c < 42789
                  ? (c < 42787
                    ? c == 42651
                    : c <= 42787)
                  : (c <= 42789 || c == 42791))))
              : (c <= 42793 || (c < 42805
                ? (c < 42799
                  ? (c < 42797
                    ? c == 42795
                    : c <= 42797)
                  : (c <= 42801 || c == 42803))
                : (c <= 42805 || (c < 42809
                  ? c == 42807
                  : (c <= 42809 || c == 42811))))))))))
        : (c <= 42813 || (c < 42905
          ? (c < 42853
            ? (c < 42833
              ? (c < 42823
                ? (c < 42819
                  ? (c < 42817
                    ? c == 42815
                    : c <= 42817)
                  : (c <= 42819 || c == 42821))
                : (c <= 42823 || (c < 42829
                  ? (c < 42827
                    ? c == 42825
                    : c <= 42827)
                  : (c <= 42829 || c == 42831))))
              : (c <= 42833 || (c < 42843
                ? (c < 42839
                  ? (c < 42837
                    ? c == 42835
                    : c <= 42837)
                  : (c <= 42839 || c == 42841))
                : (c <= 42843 || (c < 42849
                  ? (c < 42847
                    ? c == 42845
                    : c <= 42847)
                  : (c <= 42849 || c == 42851))))))
            : (c <= 42853 || (c < 42881
              ? (c < 42863
                ? (c < 42859
                  ? (c < 42857
                    ? c == 42855
                    : c <= 42857)
                  : (c <= 42859 || c == 42861))
                : (c <= 42863 || (c < 42876
                  ? (c < 42874
                    ? (c >= 42865 && c <= 42872)
                    : c <= 42874)
                  : (c <= 42876 || c == 42879))))
              : (c <= 42881 || (c < 42894
                ? (c < 42887
                  ? (c < 42885
                    ? c == 42883
                    : c <= 42885)
                  : (c <= 42887 || c == 42892))
                : (c <= 42894 || (c < 42899
                  ? c == 42897
                  : (c <= 42901 || c == 42903))))))))
          : (c <= 42905 || (c < 42961
            ? (c < 42933
              ? (c < 42915
                ? (c < 42911
                  ? (c < 42909
                    ? c == 42907
                    : c <= 42909)
                  : (c <= 42911 || c == 42913))
                : (c <= 42915 || (c < 42921
                  ? (c < 42919
                    ? c == 42917
                    : c <= 42919)
                  : (c <= 42921 || c == 42927))))
              : (c <= 42933 || (c < 42943
                ? (c < 42939
                  ? (c < 42937
                    ? c == 42935
                    : c <= 42937)
                  : (c <= 42939 || c == 42941))
                : (c <= 42943 || (c < 42952
                  ? (c < 42947
                    ? c == 42945
                    : c <= 42947)
                  : (c <= 42952 || c == 42954))))))
            : (c <= 42961 || (c < 64256
              ? (c < 42998
                ? (c < 42967
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42965)
                  : (c <= 42967 || c == 42969))
                : (c <= 42998 || (c < 43872
                  ? (c < 43824
                    ? c == 43002
                    : c <= 43866)
                  : (c <= 43880 || (c >= 43888 && c <= 43967)))))
              : (c <= 64262 || (c < 66967
                ? (c < 66600
                  ? (c < 65345
                    ? (c >= 64275 && c <= 64279)
                    : c <= 65370)
                  : (c <= 66639 || (c >= 66776 && c <= 66811)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))))))))));
}

static inline bool sym__varid_character_set_2(int32_t c) {
  return (c < 8458
    ? (c < 5112
      ? (c < 887
        ? (c < 248
          ? (c < 181
            ? (c < 'a'
              ? c == '_'
              : c <= 'z')
            : (c <= 181 || (c >= 223 && c <= 246)))
          : (c <= 442 || (c < 661
            ? (c < 454
              ? (c >= 445 && c <= 447)
              : c <= 659)
            : (c <= 687 || (c >= 881 && c <= 883)))))
        : (c <= 887 || (c < 1163
          ? (c < 940
            ? (c < 912
              ? (c >= 891 && c <= 893)
              : c <= 912)
            : (c <= 1013 || (c >= 1016 && c <= 1153)))
          : (c <= 1327 || (c < 4304
            ? (c >= 1376 && c <= 1416)
            : (c <= 4346 || (c >= 4349 && c <= 4351)))))))
      : (c <= 5117 || (c < 8118
        ? (c < 7681
          ? (c < 7531
            ? (c < 7424
              ? (c >= 7296 && c <= 7304)
              : c <= 7467)
            : (c <= 7543 || (c >= 7545 && c <= 7578)))
          : (c <= 7957 || (c < 8032
            ? (c < 8016
              ? (c >= 7968 && c <= 8005)
              : c <= 8023)
            : (c <= 8061 || (c >= 8064 && c <= 8116)))))
        : (c <= 8119 || (c < 8150
          ? (c < 8134
            ? (c < 8130
              ? c == 8126
              : c <= 8132)
            : (c <= 8135 || (c >= 8144 && c <= 8147)))
          : (c <= 8151 || (c < 8178
            ? (c >= 8160 && c <= 8167)
            : (c <= 8180 || (c >= 8182 && c <= 8183)))))))))
    : (c <= 8467 || (c < 42897
      ? (c < 11507
        ? (c < 8526
          ? (c < 8508
            ? (c < 8505
              ? (c >= 8495 && c <= 8500)
              : c <= 8505)
            : (c <= 8509 || (c >= 8518 && c <= 8521)))
          : (c <= 8526 || (c < 11393
            ? (c < 11312
              ? c == 8580
              : c <= 11387)
            : (c <= 11492 || (c >= 11500 && c <= 11502)))))
        : (c <= 11507 || (c < 42625
          ? (c < 11565
            ? (c < 11559
              ? (c >= 11520 && c <= 11557)
              : c <= 11559)
            : (c <= 11565 || (c >= 42561 && c <= 42605)))
          : (c <= 42651 || (c < 42865
            ? (c >= 42787 && c <= 42863)
            : (c <= 42887 || (c >= 42892 && c <= 42894)))))))
      : (c <= 42954 || (c < 64256
        ? (c < 43002
          ? (c < 42965
            ? (c < 42963
              ? c == 42961
              : c <= 42963)
            : (c <= 42969 || c == 42998))
          : (c <= 43002 || (c < 43872
            ? (c >= 43824 && c <= 43866)
            : (c <= 43880 || (c >= 43888 && c <= 43967)))))
        : (c <= 64262 || (c < 66967
          ? (c < 66600
            ? (c < 65345
              ? (c >= 64275 && c <= 64279)
              : c <= 65370)
            : (c <= 66639 || (c >= 66776 && c <= 66811)))
          : (c <= 66977 || (c < 66995
            ? (c >= 66979 && c <= 66993)
            : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))));
}

static inline bool sym__varid_character_set_3(int32_t c) {
  return (c < 8458
    ? (c < 7296
      ? (c < 891
        ? (c < 445
          ? (c < 223
            ? (c < 181
              ? (c >= '_' && c <= 'z')
              : c <= 181)
            : (c <= 246 || (c >= 248 && c <= 442)))
          : (c <= 447 || (c < 881
            ? (c < 661
              ? (c >= 454 && c <= 659)
              : c <= 687)
            : (c <= 883 || c == 887))))
        : (c <= 893 || (c < 1376
          ? (c < 1016
            ? (c < 940
              ? c == 912
              : c <= 1013)
            : (c <= 1153 || (c >= 1163 && c <= 1327)))
          : (c <= 1416 || (c < 4349
            ? (c >= 4304 && c <= 4346)
            : (c <= 4351 || (c >= 5112 && c <= 5117)))))))
      : (c <= 7304 || (c < 8118
        ? (c < 7968
          ? (c < 7545
            ? (c < 7531
              ? (c >= 7424 && c <= 7467)
              : c <= 7543)
            : (c <= 7578 || (c >= 7681 && c <= 7957)))
          : (c <= 8005 || (c < 8032
            ? (c >= 8016 && c <= 8023)
            : (c <= 8061 || (c >= 8064 && c <= 8116)))))
        : (c <= 8119 || (c < 8150
          ? (c < 8134
            ? (c < 8130
              ? c == 8126
              : c <= 8132)
            : (c <= 8135 || (c >= 8144 && c <= 8147)))
          : (c <= 8151 || (c < 8178
            ? (c >= 8160 && c <= 8167)
            : (c <= 8180 || (c >= 8182 && c <= 8183)))))))))
    : (c <= 8467 || (c < 42897
      ? (c < 11507
        ? (c < 8526
          ? (c < 8508
            ? (c < 8505
              ? (c >= 8495 && c <= 8500)
              : c <= 8505)
            : (c <= 8509 || (c >= 8518 && c <= 8521)))
          : (c <= 8526 || (c < 11393
            ? (c < 11312
              ? c == 8580
              : c <= 11387)
            : (c <= 11492 || (c >= 11500 && c <= 11502)))))
        : (c <= 11507 || (c < 42625
          ? (c < 11565
            ? (c < 11559
              ? (c >= 11520 && c <= 11557)
              : c <= 11559)
            : (c <= 11565 || (c >= 42561 && c <= 42605)))
          : (c <= 42651 || (c < 42865
            ? (c >= 42787 && c <= 42863)
            : (c <= 42887 || (c >= 42892 && c <= 42894)))))))
      : (c <= 42954 || (c < 64256
        ? (c < 43002
          ? (c < 42965
            ? (c < 42963
              ? c == 42961
              : c <= 42963)
            : (c <= 42969 || c == 42998))
          : (c <= 43002 || (c < 43872
            ? (c >= 43824 && c <= 43866)
            : (c <= 43880 || (c >= 43888 && c <= 43967)))))
        : (c <= 64262 || (c < 66967
          ? (c < 66600
            ? (c < 65345
              ? (c >= 64275 && c <= 64279)
              : c <= 65370)
            : (c <= 66639 || (c >= 66776 && c <= 66811)))
          : (c <= 66977 || (c < 66995
            ? (c >= 66979 && c <= 66993)
            : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))));
}

static inline bool sym__varid_character_set_4(int32_t c) {
  return (c < 7749
    ? (c < 987
      ? (c < 424
        ? (c < 326
          ? (c < 285
            ? (c < 265
              ? (c < 248
                ? (c < 181
                  ? (c < 'a'
                    ? c == '_'
                    : c <= 'z')
                  : (c <= 181 || (c >= 223 && c <= 246)))
                : (c <= 255 || (c < 261
                  ? (c < 259
                    ? c == 257
                    : c <= 259)
                  : (c <= 261 || c == 263))))
              : (c <= 265 || (c < 275
                ? (c < 271
                  ? (c < 269
                    ? c == 267
                    : c <= 269)
                  : (c <= 271 || c == 273))
                : (c <= 275 || (c < 281
                  ? (c < 279
                    ? c == 277
                    : c <= 279)
                  : (c <= 281 || c == 283))))))
            : (c <= 285 || (c < 305
              ? (c < 295
                ? (c < 291
                  ? (c < 289
                    ? c == 287
                    : c <= 289)
                  : (c <= 291 || c == 293))
                : (c <= 295 || (c < 301
                  ? (c < 299
                    ? c == 297
                    : c <= 299)
                  : (c <= 301 || c == 303))))
              : (c <= 305 || (c < 316
                ? (c < 311
                  ? (c < 309
                    ? c == 307
                    : c <= 309)
                  : (c <= 312 || c == 314))
                : (c <= 316 || (c < 322
                  ? (c < 320
                    ? c == 318
                    : c <= 320)
                  : (c <= 322 || c == 324))))))))
          : (c <= 326 || (c < 367
            ? (c < 347
              ? (c < 337
                ? (c < 333
                  ? (c < 331
                    ? (c >= 328 && c <= 329)
                    : c <= 331)
                  : (c <= 333 || c == 335))
                : (c <= 337 || (c < 343
                  ? (c < 341
                    ? c == 339
                    : c <= 341)
                  : (c <= 343 || c == 345))))
              : (c <= 347 || (c < 357
                ? (c < 353
                  ? (c < 351
                    ? c == 349
                    : c <= 351)
                  : (c <= 353 || c == 355))
                : (c <= 357 || (c < 363
                  ? (c < 361
                    ? c == 359
                    : c <= 361)
                  : (c <= 363 || c == 365))))))
            : (c <= 367 || (c < 392
              ? (c < 378
                ? (c < 373
                  ? (c < 371
                    ? c == 369
                    : c <= 371)
                  : (c <= 373 || c == 375))
                : (c <= 378 || (c < 387
                  ? (c < 382
                    ? c == 380
                    : c <= 384)
                  : (c <= 387 || c == 389))))
              : (c <= 392 || (c < 414
                ? (c < 405
                  ? (c < 402
                    ? (c >= 396 && c <= 397)
                    : c <= 402)
                  : (c <= 405 || (c >= 409 && c <= 411)))
                : (c <= 414 || (c < 419
                  ? c == 417
                  : (c <= 419 || c == 421))))))))))
        : (c <= 424 || (c < 523
          ? (c < 481
            ? (c < 460
              ? (c < 438
                ? (c < 432
                  ? (c < 429
                    ? (c >= 426 && c <= 427)
                    : c <= 429)
                  : (c <= 432 || c == 436))
                : (c <= 438 || (c < 454
                  ? (c < 445
                    ? (c >= 441 && c <= 442)
                    : c <= 447)
                  : (c <= 454 || c == 457))))
              : (c <= 460 || (c < 470
                ? (c < 466
                  ? (c < 464
                    ? c == 462
                    : c <= 464)
                  : (c <= 466 || c == 468))
                : (c <= 470 || (c < 476
                  ? (c < 474
                    ? c == 472
                    : c <= 474)
                  : (c <= 477 || c == 479))))))
            : (c <= 481 || (c < 505
              ? (c < 491
                ? (c < 487
                  ? (c < 485
                    ? c == 483
                    : c <= 485)
                  : (c <= 487 || c == 489))
                : (c <= 491 || (c < 499
                  ? (c < 495
                    ? c == 493
                    : c <= 496)
                  : (c <= 499 || c == 501))))
              : (c <= 505 || (c < 515
                ? (c < 511
                  ? (c < 509
                    ? c == 507
                    : c <= 509)
                  : (c <= 511 || c == 513))
                : (c <= 515 || (c < 519
                  ? c == 517
                  : (c <= 519 || c == 521))))))))
          : (c <= 523 || (c < 563
            ? (c < 543
              ? (c < 533
                ? (c < 529
                  ? (c < 527
                    ? c == 525
                    : c <= 527)
                  : (c <= 529 || c == 531))
                : (c <= 533 || (c < 539
                  ? (c < 537
                    ? c == 535
                    : c <= 537)
                  : (c <= 539 || c == 541))))
              : (c <= 543 || (c < 553
                ? (c < 549
                  ? (c < 547
                    ? c == 545
                    : c <= 547)
                  : (c <= 549 || c == 551))
                : (c <= 553 || (c < 559
                  ? (c < 557
                    ? c == 555
                    : c <= 557)
                  : (c <= 559 || c == 561))))))
            : (c <= 569 || (c < 881
              ? (c < 585
                ? (c < 578
                  ? (c < 575
                    ? c == 572
                    : c <= 576)
                  : (c <= 578 || c == 583))
                : (c <= 585 || (c < 591
                  ? (c < 589
                    ? c == 587
                    : c <= 589)
                  : (c <= 659 || (c >= 661 && c <= 687)))))
              : (c <= 881 || (c < 940
                ? (c < 891
                  ? (c < 887
                    ? c == 883
                    : c <= 887)
                  : (c <= 893 || c == 912))
                : (c <= 974 || (c < 981
                  ? (c >= 976 && c <= 977)
                  : (c <= 983 || c == 985))))))))))))
      : (c <= 987 || (c < 1257
        ? (c < 1177
          ? (c < 1131
            ? (c < 1007
              ? (c < 997
                ? (c < 993
                  ? (c < 991
                    ? c == 989
                    : c <= 991)
                  : (c <= 993 || c == 995))
                : (c <= 997 || (c < 1003
                  ? (c < 1001
                    ? c == 999
                    : c <= 1001)
                  : (c <= 1003 || c == 1005))))
              : (c <= 1011 || (c < 1121
                ? (c < 1019
                  ? (c < 1016
                    ? c == 1013
                    : c <= 1016)
                  : (c <= 1020 || (c >= 1072 && c <= 1119)))
                : (c <= 1121 || (c < 1127
                  ? (c < 1125
                    ? c == 1123
                    : c <= 1125)
                  : (c <= 1127 || c == 1129))))))
            : (c <= 1131 || (c < 1151
              ? (c < 1141
                ? (c < 1137
                  ? (c < 1135
                    ? c == 1133
                    : c <= 1135)
                  : (c <= 1137 || c == 1139))
                : (c <= 1141 || (c < 1147
                  ? (c < 1145
                    ? c == 1143
                    : c <= 1145)
                  : (c <= 1147 || c == 1149))))
              : (c <= 1151 || (c < 1169
                ? (c < 1165
                  ? (c < 1163
                    ? c == 1153
                    : c <= 1163)
                  : (c <= 1165 || c == 1167))
                : (c <= 1169 || (c < 1173
                  ? c == 1171
                  : (c <= 1173 || c == 1175))))))))
          : (c <= 1177 || (c < 1218
            ? (c < 1197
              ? (c < 1187
                ? (c < 1183
                  ? (c < 1181
                    ? c == 1179
                    : c <= 1181)
                  : (c <= 1183 || c == 1185))
                : (c <= 1187 || (c < 1193
                  ? (c < 1191
                    ? c == 1189
                    : c <= 1191)
                  : (c <= 1193 || c == 1195))))
              : (c <= 1197 || (c < 1207
                ? (c < 1203
                  ? (c < 1201
                    ? c == 1199
                    : c <= 1201)
                  : (c <= 1203 || c == 1205))
                : (c <= 1207 || (c < 1213
                  ? (c < 1211
                    ? c == 1209
                    : c <= 1211)
                  : (c <= 1213 || c == 1215))))))
            : (c <= 1218 || (c < 1239
              ? (c < 1228
                ? (c < 1224
                  ? (c < 1222
                    ? c == 1220
                    : c <= 1222)
                  : (c <= 1224 || c == 1226))
                : (c <= 1228 || (c < 1235
                  ? (c < 1233
                    ? (c >= 1230 && c <= 1231)
                    : c <= 1233)
                  : (c <= 1235 || c == 1237))))
              : (c <= 1239 || (c < 1249
                ? (c < 1245
                  ? (c < 1243
                    ? c == 1241
                    : c <= 1243)
                  : (c <= 1245 || c == 1247))
                : (c <= 1249 || (c < 1253
                  ? c == 1251
                  : (c <= 1253 || c == 1255))))))))))
        : (c <= 1257 || (c < 5112
          ? (c < 1297
            ? (c < 1277
              ? (c < 1267
                ? (c < 1263
                  ? (c < 1261
                    ? c == 1259
                    : c <= 1261)
                  : (c <= 1263 || c == 1265))
                : (c <= 1267 || (c < 1273
                  ? (c < 1271
                    ? c == 1269
                    : c <= 1271)
                  : (c <= 1273 || c == 1275))))
              : (c <= 1277 || (c < 1287
                ? (c < 1283
                  ? (c < 1281
                    ? c == 1279
                    : c <= 1281)
                  : (c <= 1283 || c == 1285))
                : (c <= 1287 || (c < 1293
                  ? (c < 1291
                    ? c == 1289
                    : c <= 1291)
                  : (c <= 1293 || c == 1295))))))
            : (c <= 1297 || (c < 1317
              ? (c < 1307
                ? (c < 1303
                  ? (c < 1301
                    ? c == 1299
                    : c <= 1301)
                  : (c <= 1303 || c == 1305))
                : (c <= 1307 || (c < 1313
                  ? (c < 1311
                    ? c == 1309
                    : c <= 1311)
                  : (c <= 1313 || c == 1315))))
              : (c <= 1317 || (c < 1327
                ? (c < 1323
                  ? (c < 1321
                    ? c == 1319
                    : c <= 1321)
                  : (c <= 1323 || c == 1325))
                : (c <= 1327 || (c < 4304
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 4346 || (c >= 4349 && c <= 4351)))))))))
          : (c <= 5117 || (c < 7711
            ? (c < 7691
              ? (c < 7681
                ? (c < 7531
                  ? (c < 7424
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7467)
                  : (c <= 7543 || (c >= 7545 && c <= 7578)))
                : (c <= 7681 || (c < 7687
                  ? (c < 7685
                    ? c == 7683
                    : c <= 7685)
                  : (c <= 7687 || c == 7689))))
              : (c <= 7691 || (c < 7701
                ? (c < 7697
                  ? (c < 7695
                    ? c == 7693
                    : c <= 7695)
                  : (c <= 7697 || c == 7699))
                : (c <= 7701 || (c < 7707
                  ? (c < 7705
                    ? c == 7703
                    : c <= 7705)
                  : (c <= 7707 || c == 7709))))))
            : (c <= 7711 || (c < 7731
              ? (c < 7721
                ? (c < 7717
                  ? (c < 7715
                    ? c == 7713
                    : c <= 7715)
                  : (c <= 7717 || c == 7719))
                : (c <= 7721 || (c < 7727
                  ? (c < 7725
                    ? c == 7723
                    : c <= 7725)
                  : (c <= 7727 || c == 7729))))
              : (c <= 7731 || (c < 7741
                ? (c < 7737
                  ? (c < 7735
                    ? c == 7733
                    : c <= 7735)
                  : (c <= 7737 || c == 7739))
                : (c <= 7741 || (c < 7745
                  ? c == 7743
                  : (c <= 7745 || c == 7747))))))))))))))
    : (c <= 7749 || (c < 11447
      ? (c < 7913
        ? (c < 7827
          ? (c < 7789
            ? (c < 7769
              ? (c < 7759
                ? (c < 7755
                  ? (c < 7753
                    ? c == 7751
                    : c <= 7753)
                  : (c <= 7755 || c == 7757))
                : (c <= 7759 || (c < 7765
                  ? (c < 7763
                    ? c == 7761
                    : c <= 7763)
                  : (c <= 7765 || c == 7767))))
              : (c <= 7769 || (c < 7779
                ? (c < 7775
                  ? (c < 7773
                    ? c == 7771
                    : c <= 7773)
                  : (c <= 7775 || c == 7777))
                : (c <= 7779 || (c < 7785
                  ? (c < 7783
                    ? c == 7781
                    : c <= 7783)
                  : (c <= 7785 || c == 7787))))))
            : (c <= 7789 || (c < 7809
              ? (c < 7799
                ? (c < 7795
                  ? (c < 7793
                    ? c == 7791
                    : c <= 7793)
                  : (c <= 7795 || c == 7797))
                : (c <= 7799 || (c < 7805
                  ? (c < 7803
                    ? c == 7801
                    : c <= 7803)
                  : (c <= 7805 || c == 7807))))
              : (c <= 7809 || (c < 7819
                ? (c < 7815
                  ? (c < 7813
                    ? c == 7811
                    : c <= 7813)
                  : (c <= 7815 || c == 7817))
                : (c <= 7819 || (c < 7823
                  ? c == 7821
                  : (c <= 7823 || c == 7825))))))))
          : (c <= 7827 || (c < 7875
            ? (c < 7855
              ? (c < 7845
                ? (c < 7841
                  ? (c < 7839
                    ? (c >= 7829 && c <= 7837)
                    : c <= 7839)
                  : (c <= 7841 || c == 7843))
                : (c <= 7845 || (c < 7851
                  ? (c < 7849
                    ? c == 7847
                    : c <= 7849)
                  : (c <= 7851 || c == 7853))))
              : (c <= 7855 || (c < 7865
                ? (c < 7861
                  ? (c < 7859
                    ? c == 7857
                    : c <= 7859)
                  : (c <= 7861 || c == 7863))
                : (c <= 7865 || (c < 7871
                  ? (c < 7869
                    ? c == 7867
                    : c <= 7869)
                  : (c <= 7871 || c == 7873))))))
            : (c <= 7875 || (c < 7895
              ? (c < 7885
                ? (c < 7881
                  ? (c < 7879
                    ? c == 7877
                    : c <= 7879)
                  : (c <= 7881 || c == 7883))
                : (c <= 7885 || (c < 7891
                  ? (c < 7889
                    ? c == 7887
                    : c <= 7889)
                  : (c <= 7891 || c == 7893))))
              : (c <= 7895 || (c < 7905
                ? (c < 7901
                  ? (c < 7899
                    ? c == 7897
                    : c <= 7899)
                  : (c <= 7901 || c == 7903))
                : (c <= 7905 || (c < 7909
                  ? c == 7907
                  : (c <= 7909 || c == 7911))))))))))
        : (c <= 7913 || (c < 8518
          ? (c < 8080
            ? (c < 7933
              ? (c < 7923
                ? (c < 7919
                  ? (c < 7917
                    ? c == 7915
                    : c <= 7917)
                  : (c <= 7919 || c == 7921))
                : (c <= 7923 || (c < 7929
                  ? (c < 7927
                    ? c == 7925
                    : c <= 7927)
                  : (c <= 7929 || c == 7931))))
              : (c <= 7933 || (c < 8000
                ? (c < 7968
                  ? (c < 7952
                    ? (c >= 7935 && c <= 7943)
                    : c <= 7957)
                  : (c <= 7975 || (c >= 7984 && c <= 7991)))
                : (c <= 8005 || (c < 8048
                  ? (c < 8032
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8039)
                  : (c <= 8061 || (c >= 8064 && c <= 8071)))))))
            : (c <= 8087 || (c < 8178
              ? (c < 8130
                ? (c < 8118
                  ? (c < 8112
                    ? (c >= 8096 && c <= 8103)
                    : c <= 8116)
                  : (c <= 8119 || c == 8126))
                : (c <= 8132 || (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8135)
                    : c <= 8147)
                  : (c <= 8151 || (c >= 8160 && c <= 8167)))))
              : (c <= 8180 || (c < 8495
                ? (c < 8462
                  ? (c < 8458
                    ? (c >= 8182 && c <= 8183)
                    : c <= 8458)
                  : (c <= 8463 || c == 8467))
                : (c <= 8495 || (c < 8505
                  ? c == 8500
                  : (c <= 8505 || (c >= 8508 && c <= 8509)))))))))
          : (c <= 8521 || (c < 11409
            ? (c < 11379
              ? (c < 11365
                ? (c < 11312
                  ? (c < 8580
                    ? c == 8526
                    : c <= 8580)
                  : (c <= 11359 || c == 11361))
                : (c <= 11366 || (c < 11372
                  ? (c < 11370
                    ? c == 11368
                    : c <= 11370)
                  : (c <= 11372 || c == 11377))))
              : (c <= 11380 || (c < 11399
                ? (c < 11395
                  ? (c < 11393
                    ? (c >= 11382 && c <= 11387)
                    : c <= 11393)
                  : (c <= 11395 || c == 11397))
                : (c <= 11399 || (c < 11405
                  ? (c < 11403
                    ? c == 11401
                    : c <= 11403)
                  : (c <= 11405 || c == 11407))))))
            : (c <= 11409 || (c < 11429
              ? (c < 11419
                ? (c < 11415
                  ? (c < 11413
                    ? c == 11411
                    : c <= 11413)
                  : (c <= 11415 || c == 11417))
                : (c <= 11419 || (c < 11425
                  ? (c < 11423
                    ? c == 11421
                    : c <= 11423)
                  : (c <= 11425 || c == 11427))))
              : (c <= 11429 || (c < 11439
                ? (c < 11435
                  ? (c < 11433
                    ? c == 11431
                    : c <= 11433)
                  : (c <= 11435 || c == 11437))
                : (c <= 11439 || (c < 11443
                  ? c == 11441
                  : (c <= 11443 || c == 11445))))))))))))
      : (c <= 11447 || (c < 42813
        ? (c < 42581
          ? (c < 11487
            ? (c < 11467
              ? (c < 11457
                ? (c < 11453
                  ? (c < 11451
                    ? c == 11449
                    : c <= 11451)
                  : (c <= 11453 || c == 11455))
                : (c <= 11457 || (c < 11463
                  ? (c < 11461
                    ? c == 11459
                    : c <= 11461)
                  : (c <= 11463 || c == 11465))))
              : (c <= 11467 || (c < 11477
                ? (c < 11473
                  ? (c < 11471
                    ? c == 11469
                    : c <= 11471)
                  : (c <= 11473 || c == 11475))
                : (c <= 11477 || (c < 11483
                  ? (c < 11481
                    ? c == 11479
                    : c <= 11481)
                  : (c <= 11483 || c == 11485))))))
            : (c <= 11487 || (c < 42563
              ? (c < 11507
                ? (c < 11500
                  ? (c < 11491
                    ? c == 11489
                    : c <= 11492)
                  : (c <= 11500 || c == 11502))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || c == 42561))))
              : (c <= 42563 || (c < 42573
                ? (c < 42569
                  ? (c < 42567
                    ? c == 42565
                    : c <= 42567)
                  : (c <= 42569 || c == 42571))
                : (c <= 42573 || (c < 42577
                  ? c == 42575
                  : (c <= 42577 || c == 42579))))))))
          : (c <= 42581 || (c < 42639
            ? (c < 42601
              ? (c < 42591
                ? (c < 42587
                  ? (c < 42585
                    ? c == 42583
                    : c <= 42585)
                  : (c <= 42587 || c == 42589))
                : (c <= 42591 || (c < 42597
                  ? (c < 42595
                    ? c == 42593
                    : c <= 42595)
                  : (c <= 42597 || c == 42599))))
              : (c <= 42601 || (c < 42629
                ? (c < 42625
                  ? (c < 42605
                    ? c == 42603
                    : c <= 42605)
                  : (c <= 42625 || c == 42627))
                : (c <= 42629 || (c < 42635
                  ? (c < 42633
                    ? c == 42631
                    : c <= 42633)
                  : (c <= 42635 || c == 42637))))))
            : (c <= 42639 || (c < 42793
              ? (c < 42649
                ? (c < 42645
                  ? (c < 42643
                    ? c == 42641
                    : c <= 42643)
                  : (c <= 42645 || c == 42647))
                : (c <= 42649 || (c < 42789
                  ? (c < 42787
                    ? c == 42651
                    : c <= 42787)
                  : (c <= 42789 || c == 42791))))
              : (c <= 42793 || (c < 42805
                ? (c < 42799
                  ? (c < 42797
                    ? c == 42795
                    : c <= 42797)
                  : (c <= 42801 || c == 42803))
                : (c <= 42805 || (c < 42809
                  ? c == 42807
                  : (c <= 42809 || c == 42811))))))))))
        : (c <= 42813 || (c < 42905
          ? (c < 42853
            ? (c < 42833
              ? (c < 42823
                ? (c < 42819
                  ? (c < 42817
                    ? c == 42815
                    : c <= 42817)
                  : (c <= 42819 || c == 42821))
                : (c <= 42823 || (c < 42829
                  ? (c < 42827
                    ? c == 42825
                    : c <= 42827)
                  : (c <= 42829 || c == 42831))))
              : (c <= 42833 || (c < 42843
                ? (c < 42839
                  ? (c < 42837
                    ? c == 42835
                    : c <= 42837)
                  : (c <= 42839 || c == 42841))
                : (c <= 42843 || (c < 42849
                  ? (c < 42847
                    ? c == 42845
                    : c <= 42847)
                  : (c <= 42849 || c == 42851))))))
            : (c <= 42853 || (c < 42881
              ? (c < 42863
                ? (c < 42859
                  ? (c < 42857
                    ? c == 42855
                    : c <= 42857)
                  : (c <= 42859 || c == 42861))
                : (c <= 42863 || (c < 42876
                  ? (c < 42874
                    ? (c >= 42865 && c <= 42872)
                    : c <= 42874)
                  : (c <= 42876 || c == 42879))))
              : (c <= 42881 || (c < 42894
                ? (c < 42887
                  ? (c < 42885
                    ? c == 42883
                    : c <= 42885)
                  : (c <= 42887 || c == 42892))
                : (c <= 42894 || (c < 42899
                  ? c == 42897
                  : (c <= 42901 || c == 42903))))))))
          : (c <= 42905 || (c < 42961
            ? (c < 42933
              ? (c < 42915
                ? (c < 42911
                  ? (c < 42909
                    ? c == 42907
                    : c <= 42909)
                  : (c <= 42911 || c == 42913))
                : (c <= 42915 || (c < 42921
                  ? (c < 42919
                    ? c == 42917
                    : c <= 42919)
                  : (c <= 42921 || c == 42927))))
              : (c <= 42933 || (c < 42943
                ? (c < 42939
                  ? (c < 42937
                    ? c == 42935
                    : c <= 42937)
                  : (c <= 42939 || c == 42941))
                : (c <= 42943 || (c < 42952
                  ? (c < 42947
                    ? c == 42945
                    : c <= 42947)
                  : (c <= 42952 || c == 42954))))))
            : (c <= 42961 || (c < 64256
              ? (c < 42998
                ? (c < 42967
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42965)
                  : (c <= 42967 || c == 42969))
                : (c <= 42998 || (c < 43872
                  ? (c < 43824
                    ? c == 43002
                    : c <= 43866)
                  : (c <= 43880 || (c >= 43888 && c <= 43967)))))
              : (c <= 64262 || (c < 66967
                ? (c < 66600
                  ? (c < 65345
                    ? (c >= 64275 && c <= 64279)
                    : c <= 65370)
                  : (c <= 66639 || (c >= 66776 && c <= 66811)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))))))))));
}

static inline bool sym__conid_character_set_1(int32_t c) {
  return (c < 7738
    ? (c < 931
      ? (c < 422
        ? (c < 327
          ? (c < 288
            ? (c < 268
              ? (c < 258
                ? (c < 216
                  ? (c < 192
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 214)
                  : (c <= 222 || c == 256))
                : (c <= 258 || (c < 264
                  ? (c < 262
                    ? c == 260
                    : c <= 262)
                  : (c <= 264 || c == 266))))
              : (c <= 268 || (c < 278
                ? (c < 274
                  ? (c < 272
                    ? c == 270
                    : c <= 272)
                  : (c <= 274 || c == 276))
                : (c <= 278 || (c < 284
                  ? (c < 282
                    ? c == 280
                    : c <= 282)
                  : (c <= 284 || c == 286))))))
            : (c <= 288 || (c < 308
              ? (c < 298
                ? (c < 294
                  ? (c < 292
                    ? c == 290
                    : c <= 292)
                  : (c <= 294 || c == 296))
                : (c <= 298 || (c < 304
                  ? (c < 302
                    ? c == 300
                    : c <= 302)
                  : (c <= 304 || c == 306))))
              : (c <= 308 || (c < 319
                ? (c < 315
                  ? (c < 313
                    ? c == 310
                    : c <= 313)
                  : (c <= 315 || c == 317))
                : (c <= 319 || (c < 323
                  ? c == 321
                  : (c <= 323 || c == 325))))))))
          : (c <= 327 || (c < 366
            ? (c < 348
              ? (c < 338
                ? (c < 334
                  ? (c < 332
                    ? c == 330
                    : c <= 332)
                  : (c <= 334 || c == 336))
                : (c <= 338 || (c < 344
                  ? (c < 342
                    ? c == 340
                    : c <= 342)
                  : (c <= 344 || c == 346))))
              : (c <= 348 || (c < 358
                ? (c < 354
                  ? (c < 352
                    ? c == 350
                    : c <= 352)
                  : (c <= 354 || c == 356))
                : (c <= 358 || (c < 362
                  ? c == 360
                  : (c <= 362 || c == 364))))))
            : (c <= 366 || (c < 390
              ? (c < 376
                ? (c < 372
                  ? (c < 370
                    ? c == 368
                    : c <= 370)
                  : (c <= 372 || c == 374))
                : (c <= 377 || (c < 385
                  ? (c < 381
                    ? c == 379
                    : c <= 381)
                  : (c <= 386 || c == 388))))
              : (c <= 391 || (c < 412
                ? (c < 403
                  ? (c < 398
                    ? (c >= 393 && c <= 395)
                    : c <= 401)
                  : (c <= 404 || (c >= 406 && c <= 408)))
                : (c <= 413 || (c < 418
                  ? (c >= 415 && c <= 416)
                  : (c <= 418 || c == 420))))))))))
        : (c <= 423 || (c < 522
          ? (c < 480
            ? (c < 458
              ? (c < 437
                ? (c < 430
                  ? (c < 428
                    ? c == 425
                    : c <= 428)
                  : (c <= 431 || (c >= 433 && c <= 435)))
                : (c <= 437 || (c < 452
                  ? (c < 444
                    ? (c >= 439 && c <= 440)
                    : c <= 444)
                  : (c <= 453 || (c >= 455 && c <= 456)))))
              : (c <= 459 || (c < 469
                ? (c < 465
                  ? (c < 463
                    ? c == 461
                    : c <= 463)
                  : (c <= 465 || c == 467))
                : (c <= 469 || (c < 475
                  ? (c < 473
                    ? c == 471
                    : c <= 473)
                  : (c <= 475 || c == 478))))))
            : (c <= 480 || (c < 502
              ? (c < 490
                ? (c < 486
                  ? (c < 484
                    ? c == 482
                    : c <= 484)
                  : (c <= 486 || c == 488))
                : (c <= 490 || (c < 497
                  ? (c < 494
                    ? c == 492
                    : c <= 494)
                  : (c <= 498 || c == 500))))
              : (c <= 504 || (c < 514
                ? (c < 510
                  ? (c < 508
                    ? c == 506
                    : c <= 508)
                  : (c <= 510 || c == 512))
                : (c <= 514 || (c < 518
                  ? c == 516
                  : (c <= 518 || c == 520))))))))
          : (c <= 522 || (c < 560
            ? (c < 542
              ? (c < 532
                ? (c < 528
                  ? (c < 526
                    ? c == 524
                    : c <= 526)
                  : (c <= 528 || c == 530))
                : (c <= 532 || (c < 538
                  ? (c < 536
                    ? c == 534
                    : c <= 536)
                  : (c <= 538 || c == 540))))
              : (c <= 542 || (c < 552
                ? (c < 548
                  ? (c < 546
                    ? c == 544
                    : c <= 546)
                  : (c <= 548 || c == 550))
                : (c <= 552 || (c < 556
                  ? c == 554
                  : (c <= 556 || c == 558))))))
            : (c <= 560 || (c < 880
              ? (c < 579
                ? (c < 573
                  ? (c < 570
                    ? c == 562
                    : c <= 571)
                  : (c <= 574 || c == 577))
                : (c <= 582 || (c < 588
                  ? (c < 586
                    ? c == 584
                    : c <= 586)
                  : (c <= 588 || c == 590))))
              : (c <= 880 || (c < 904
                ? (c < 895
                  ? (c < 886
                    ? c == 882
                    : c <= 886)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : (c <= 911 || (c >= 913 && c <= 929)))))))))))))
      : (c <= 939 || (c < 1246
        ? (c < 1168
          ? (c < 1122
            ? (c < 998
              ? (c < 988
                ? (c < 984
                  ? (c < 978
                    ? c == 975
                    : c <= 980)
                  : (c <= 984 || c == 986))
                : (c <= 988 || (c < 994
                  ? (c < 992
                    ? c == 990
                    : c <= 992)
                  : (c <= 994 || c == 996))))
              : (c <= 998 || (c < 1012
                ? (c < 1004
                  ? (c < 1002
                    ? c == 1000
                    : c <= 1002)
                  : (c <= 1004 || c == 1006))
                : (c <= 1012 || (c < 1021
                  ? (c < 1017
                    ? c == 1015
                    : c <= 1018)
                  : (c <= 1071 || c == 1120))))))
            : (c <= 1122 || (c < 1142
              ? (c < 1132
                ? (c < 1128
                  ? (c < 1126
                    ? c == 1124
                    : c <= 1126)
                  : (c <= 1128 || c == 1130))
                : (c <= 1132 || (c < 1138
                  ? (c < 1136
                    ? c == 1134
                    : c <= 1136)
                  : (c <= 1138 || c == 1140))))
              : (c <= 1142 || (c < 1152
                ? (c < 1148
                  ? (c < 1146
                    ? c == 1144
                    : c <= 1146)
                  : (c <= 1148 || c == 1150))
                : (c <= 1152 || (c < 1164
                  ? c == 1162
                  : (c <= 1164 || c == 1166))))))))
          : (c <= 1168 || (c < 1206
            ? (c < 1188
              ? (c < 1178
                ? (c < 1174
                  ? (c < 1172
                    ? c == 1170
                    : c <= 1172)
                  : (c <= 1174 || c == 1176))
                : (c <= 1178 || (c < 1184
                  ? (c < 1182
                    ? c == 1180
                    : c <= 1182)
                  : (c <= 1184 || c == 1186))))
              : (c <= 1188 || (c < 1198
                ? (c < 1194
                  ? (c < 1192
                    ? c == 1190
                    : c <= 1192)
                  : (c <= 1194 || c == 1196))
                : (c <= 1198 || (c < 1202
                  ? c == 1200
                  : (c <= 1202 || c == 1204))))))
            : (c <= 1206 || (c < 1227
              ? (c < 1216
                ? (c < 1212
                  ? (c < 1210
                    ? c == 1208
                    : c <= 1210)
                  : (c <= 1212 || c == 1214))
                : (c <= 1217 || (c < 1223
                  ? (c < 1221
                    ? c == 1219
                    : c <= 1221)
                  : (c <= 1223 || c == 1225))))
              : (c <= 1227 || (c < 1238
                ? (c < 1234
                  ? (c < 1232
                    ? c == 1229
                    : c <= 1232)
                  : (c <= 1234 || c == 1236))
                : (c <= 1238 || (c < 1242
                  ? c == 1240
                  : (c <= 1242 || c == 1244))))))))))
        : (c <= 1246 || (c < 1324
          ? (c < 1286
            ? (c < 1266
              ? (c < 1256
                ? (c < 1252
                  ? (c < 1250
                    ? c == 1248
                    : c <= 1250)
                  : (c <= 1252 || c == 1254))
                : (c <= 1256 || (c < 1262
                  ? (c < 1260
                    ? c == 1258
                    : c <= 1260)
                  : (c <= 1262 || c == 1264))))
              : (c <= 1266 || (c < 1276
                ? (c < 1272
                  ? (c < 1270
                    ? c == 1268
                    : c <= 1270)
                  : (c <= 1272 || c == 1274))
                : (c <= 1276 || (c < 1282
                  ? (c < 1280
                    ? c == 1278
                    : c <= 1280)
                  : (c <= 1282 || c == 1284))))))
            : (c <= 1286 || (c < 1306
              ? (c < 1296
                ? (c < 1292
                  ? (c < 1290
                    ? c == 1288
                    : c <= 1290)
                  : (c <= 1292 || c == 1294))
                : (c <= 1296 || (c < 1302
                  ? (c < 1300
                    ? c == 1298
                    : c <= 1300)
                  : (c <= 1302 || c == 1304))))
              : (c <= 1306 || (c < 1316
                ? (c < 1312
                  ? (c < 1310
                    ? c == 1308
                    : c <= 1310)
                  : (c <= 1312 || c == 1314))
                : (c <= 1316 || (c < 1320
                  ? c == 1318
                  : (c <= 1320 || c == 1322))))))))
          : (c <= 1324 || (c < 7700
            ? (c < 7682
              ? (c < 4301
                ? (c < 4256
                  ? (c < 1329
                    ? c == 1326
                    : c <= 1366)
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 7357
                  ? (c < 7312
                    ? (c >= 5024 && c <= 5109)
                    : c <= 7354)
                  : (c <= 7359 || c == 7680))))
              : (c <= 7682 || (c < 7692
                ? (c < 7688
                  ? (c < 7686
                    ? c == 7684
                    : c <= 7686)
                  : (c <= 7688 || c == 7690))
                : (c <= 7692 || (c < 7696
                  ? c == 7694
                  : (c <= 7696 || c == 7698))))))
            : (c <= 7700 || (c < 7720
              ? (c < 7710
                ? (c < 7706
                  ? (c < 7704
                    ? c == 7702
                    : c <= 7704)
                  : (c <= 7706 || c == 7708))
                : (c <= 7710 || (c < 7716
                  ? (c < 7714
                    ? c == 7712
                    : c <= 7714)
                  : (c <= 7716 || c == 7718))))
              : (c <= 7720 || (c < 7730
                ? (c < 7726
                  ? (c < 7724
                    ? c == 7722
                    : c <= 7724)
                  : (c <= 7726 || c == 7728))
                : (c <= 7730 || (c < 7734
                  ? c == 7732
                  : (c <= 7734 || c == 7736))))))))))))))
    : (c <= 7738 || (c < 11428
      ? (c < 7900
        ? (c < 7816
          ? (c < 7778
            ? (c < 7758
              ? (c < 7748
                ? (c < 7744
                  ? (c < 7742
                    ? c == 7740
                    : c <= 7742)
                  : (c <= 7744 || c == 7746))
                : (c <= 7748 || (c < 7754
                  ? (c < 7752
                    ? c == 7750
                    : c <= 7752)
                  : (c <= 7754 || c == 7756))))
              : (c <= 7758 || (c < 7768
                ? (c < 7764
                  ? (c < 7762
                    ? c == 7760
                    : c <= 7762)
                  : (c <= 7764 || c == 7766))
                : (c <= 7768 || (c < 7774
                  ? (c < 7772
                    ? c == 7770
                    : c <= 7772)
                  : (c <= 7774 || c == 7776))))))
            : (c <= 7778 || (c < 7798
              ? (c < 7788
                ? (c < 7784
                  ? (c < 7782
                    ? c == 7780
                    : c <= 7782)
                  : (c <= 7784 || c == 7786))
                : (c <= 7788 || (c < 7794
                  ? (c < 7792
                    ? c == 7790
                    : c <= 7792)
                  : (c <= 7794 || c == 7796))))
              : (c <= 7798 || (c < 7808
                ? (c < 7804
                  ? (c < 7802
                    ? c == 7800
                    : c <= 7802)
                  : (c <= 7804 || c == 7806))
                : (c <= 7808 || (c < 7812
                  ? c == 7810
                  : (c <= 7812 || c == 7814))))))))
          : (c <= 7816 || (c < 7862
            ? (c < 7844
              ? (c < 7826
                ? (c < 7822
                  ? (c < 7820
                    ? c == 7818
                    : c <= 7820)
                  : (c <= 7822 || c == 7824))
                : (c <= 7826 || (c < 7840
                  ? (c < 7838
                    ? c == 7828
                    : c <= 7838)
                  : (c <= 7840 || c == 7842))))
              : (c <= 7844 || (c < 7854
                ? (c < 7850
                  ? (c < 7848
                    ? c == 7846
                    : c <= 7848)
                  : (c <= 7850 || c == 7852))
                : (c <= 7854 || (c < 7858
                  ? c == 7856
                  : (c <= 7858 || c == 7860))))))
            : (c <= 7862 || (c < 7882
              ? (c < 7872
                ? (c < 7868
                  ? (c < 7866
                    ? c == 7864
                    : c <= 7866)
                  : (c <= 7868 || c == 7870))
                : (c <= 7872 || (c < 7878
                  ? (c < 7876
                    ? c == 7874
                    : c <= 7876)
                  : (c <= 7878 || c == 7880))))
              : (c <= 7882 || (c < 7892
                ? (c < 7888
                  ? (c < 7886
                    ? c == 7884
                    : c <= 7886)
                  : (c <= 7888 || c == 7890))
                : (c <= 7892 || (c < 7896
                  ? c == 7894
                  : (c <= 7896 || c == 7898))))))))))
        : (c <= 7900 || (c < 8464
          ? (c < 7976
            ? (c < 7920
              ? (c < 7910
                ? (c < 7906
                  ? (c < 7904
                    ? c == 7902
                    : c <= 7904)
                  : (c <= 7906 || c == 7908))
                : (c <= 7910 || (c < 7916
                  ? (c < 7914
                    ? c == 7912
                    : c <= 7914)
                  : (c <= 7916 || c == 7918))))
              : (c <= 7920 || (c < 7930
                ? (c < 7926
                  ? (c < 7924
                    ? c == 7922
                    : c <= 7924)
                  : (c <= 7926 || c == 7928))
                : (c <= 7930 || (c < 7944
                  ? (c < 7934
                    ? c == 7932
                    : c <= 7934)
                  : (c <= 7951 || (c >= 7960 && c <= 7965)))))))
            : (c <= 7983 || (c < 8104
              ? (c < 8029
                ? (c < 8025
                  ? (c < 8008
                    ? (c >= 7992 && c <= 7999)
                    : c <= 8013)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8072
                  ? (c < 8040
                    ? c == 8031
                    : c <= 8047)
                  : (c <= 8079 || (c >= 8088 && c <= 8095)))))
              : (c <= 8111 || (c < 8184
                ? (c < 8152
                  ? (c < 8136
                    ? (c >= 8120 && c <= 8124)
                    : c <= 8140)
                  : (c <= 8155 || (c >= 8168 && c <= 8172)))
                : (c <= 8188 || (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8459 && c <= 8461)))))))))
          : (c <= 8466 || (c < 11381
            ? (c < 8579
              ? (c < 8488
                ? (c < 8484
                  ? (c < 8473
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8510
                  ? (c < 8496
                    ? (c >= 8490 && c <= 8493)
                    : c <= 8499)
                  : (c <= 8511 || c == 8517))))
              : (c <= 8579 || (c < 11369
                ? (c < 11362
                  ? (c < 11360
                    ? (c >= 11264 && c <= 11311)
                    : c <= 11360)
                  : (c <= 11364 || c == 11367))
                : (c <= 11369 || (c < 11373
                  ? c == 11371
                  : (c <= 11376 || c == 11378))))))
            : (c <= 11381 || (c < 11410
              ? (c < 11400
                ? (c < 11396
                  ? (c < 11394
                    ? (c >= 11390 && c <= 11392)
                    : c <= 11394)
                  : (c <= 11396 || c == 11398))
                : (c <= 11400 || (c < 11406
                  ? (c < 11404
                    ? c == 11402
                    : c <= 11404)
                  : (c <= 11406 || c == 11408))))
              : (c <= 11410 || (c < 11420
                ? (c < 11416
                  ? (c < 11414
                    ? c == 11412
                    : c <= 11414)
                  : (c <= 11416 || c == 11418))
                : (c <= 11420 || (c < 11424
                  ? c == 11422
                  : (c <= 11424 || c == 11426))))))))))))
      : (c <= 11428 || (c < 42796
        ? (c < 42568
          ? (c < 11468
            ? (c < 11448
              ? (c < 11438
                ? (c < 11434
                  ? (c < 11432
                    ? c == 11430
                    : c <= 11432)
                  : (c <= 11434 || c == 11436))
                : (c <= 11438 || (c < 11444
                  ? (c < 11442
                    ? c == 11440
                    : c <= 11442)
                  : (c <= 11444 || c == 11446))))
              : (c <= 11448 || (c < 11458
                ? (c < 11454
                  ? (c < 11452
                    ? c == 11450
                    : c <= 11452)
                  : (c <= 11454 || c == 11456))
                : (c <= 11458 || (c < 11464
                  ? (c < 11462
                    ? c == 11460
                    : c <= 11462)
                  : (c <= 11464 || c == 11466))))))
            : (c <= 11468 || (c < 11488
              ? (c < 11478
                ? (c < 11474
                  ? (c < 11472
                    ? c == 11470
                    : c <= 11472)
                  : (c <= 11474 || c == 11476))
                : (c <= 11478 || (c < 11484
                  ? (c < 11482
                    ? c == 11480
                    : c <= 11482)
                  : (c <= 11484 || c == 11486))))
              : (c <= 11488 || (c < 42560
                ? (c < 11501
                  ? (c < 11499
                    ? c == 11490
                    : c <= 11499)
                  : (c <= 11501 || c == 11506))
                : (c <= 42560 || (c < 42564
                  ? c == 42562
                  : (c <= 42564 || c == 42566))))))))
          : (c <= 42568 || (c < 42624
            ? (c < 42588
              ? (c < 42578
                ? (c < 42574
                  ? (c < 42572
                    ? c == 42570
                    : c <= 42572)
                  : (c <= 42574 || c == 42576))
                : (c <= 42578 || (c < 42584
                  ? (c < 42582
                    ? c == 42580
                    : c <= 42582)
                  : (c <= 42584 || c == 42586))))
              : (c <= 42588 || (c < 42598
                ? (c < 42594
                  ? (c < 42592
                    ? c == 42590
                    : c <= 42592)
                  : (c <= 42594 || c == 42596))
                : (c <= 42598 || (c < 42602
                  ? c == 42600
                  : (c <= 42602 || c == 42604))))))
            : (c <= 42624 || (c < 42644
              ? (c < 42634
                ? (c < 42630
                  ? (c < 42628
                    ? c == 42626
                    : c <= 42628)
                  : (c <= 42630 || c == 42632))
                : (c <= 42634 || (c < 42640
                  ? (c < 42638
                    ? c == 42636
                    : c <= 42638)
                  : (c <= 42640 || c == 42642))))
              : (c <= 42644 || (c < 42788
                ? (c < 42650
                  ? (c < 42648
                    ? c == 42646
                    : c <= 42648)
                  : (c <= 42650 || c == 42786))
                : (c <= 42788 || (c < 42792
                  ? c == 42790
                  : (c <= 42792 || c == 42794))))))))))
        : (c <= 42796 || (c < 42884
          ? (c < 42836
            ? (c < 42818
              ? (c < 42808
                ? (c < 42804
                  ? (c < 42802
                    ? c == 42798
                    : c <= 42802)
                  : (c <= 42804 || c == 42806))
                : (c <= 42808 || (c < 42814
                  ? (c < 42812
                    ? c == 42810
                    : c <= 42812)
                  : (c <= 42814 || c == 42816))))
              : (c <= 42818 || (c < 42828
                ? (c < 42824
                  ? (c < 42822
                    ? c == 42820
                    : c <= 42822)
                  : (c <= 42824 || c == 42826))
                : (c <= 42828 || (c < 42832
                  ? c == 42830
                  : (c <= 42832 || c == 42834))))))
            : (c <= 42836 || (c < 42856
              ? (c < 42846
                ? (c < 42842
                  ? (c < 42840
                    ? c == 42838
                    : c <= 42840)
                  : (c <= 42842 || c == 42844))
                : (c <= 42846 || (c < 42852
                  ? (c < 42850
                    ? c == 42848
                    : c <= 42850)
                  : (c <= 42852 || c == 42854))))
              : (c <= 42856 || (c < 42875
                ? (c < 42862
                  ? (c < 42860
                    ? c == 42858
                    : c <= 42860)
                  : (c <= 42862 || c == 42873))
                : (c <= 42875 || (c < 42880
                  ? (c >= 42877 && c <= 42878)
                  : (c <= 42880 || c == 42882))))))))
          : (c <= 42884 || (c < 42936
            ? (c < 42910
              ? (c < 42898
                ? (c < 42893
                  ? (c < 42891
                    ? c == 42886
                    : c <= 42891)
                  : (c <= 42893 || c == 42896))
                : (c <= 42898 || (c < 42906
                  ? (c < 42904
                    ? c == 42902
                    : c <= 42904)
                  : (c <= 42906 || c == 42908))))
              : (c <= 42910 || (c < 42920
                ? (c < 42916
                  ? (c < 42914
                    ? c == 42912
                    : c <= 42914)
                  : (c <= 42916 || c == 42918))
                : (c <= 42920 || (c < 42928
                  ? (c >= 42922 && c <= 42926)
                  : (c <= 42932 || c == 42934))))))
            : (c <= 42936 || (c < 42968
              ? (c < 42946
                ? (c < 42942
                  ? (c < 42940
                    ? c == 42938
                    : c <= 42940)
                  : (c <= 42942 || c == 42944))
                : (c <= 42946 || (c < 42960
                  ? (c < 42953
                    ? (c >= 42948 && c <= 42951)
                    : c <= 42953)
                  : (c <= 42960 || c == 42966))))
              : (c <= 42968 || (c < 66928
                ? (c < 66560
                  ? (c < 65313
                    ? c == 42997
                    : c <= 65338)
                  : (c <= 66599 || (c >= 66736 && c <= 66771)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(116);
      if (sym_comment_character_set_1(lookahead)) SKIP(114)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '%') ADVANCE(287);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') ADVANCE(283);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '.') ADVANCE(252);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == '?') ADVANCE(113);
      if (lookahead == '@') ADVANCE(285);
      if (lookahead == 'F') ADVANCE(55);
      if (lookahead == 'I') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(51);
      if (lookahead == 'P') ADVANCE(57);
      if (lookahead == 'R') ADVANCE(28);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == '{') ADVANCE(279);
      if (lookahead == '|') ADVANCE(282);
      if (lookahead == '}') ADVANCE(280);
      if (lookahead == 8592) ADVANCE(247);
      if (lookahead == 8594) ADVANCE(244);
      if (lookahead == 8658) ADVANCE(241);
      if (lookahead == 8704) ADVANCE(281);
      if (lookahead == 8759) ADVANCE(249);
      if (lookahead == 9733) ADVANCE(284);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (sym__varid_character_set_1(lookahead)) ADVANCE(254);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '^') ADVANCE(4);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '^') ADVANCE(4);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(218);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(123);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '>') ADVANCE(245);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(248);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(251);
      if (sym__consym_character_set_1(lookahead)) ADVANCE(202);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(250);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(242);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(18);
      if (lookahead == 'R') ADVANCE(38);
      if (lookahead == 'S') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(29);
      if (lookahead == 'U') ADVANCE(56);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(35);
      if (lookahead == 'N') ADVANCE(69);
      END_STATE();
    case 16:
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 71:
      if (lookahead == 'y') ADVANCE(126);
      END_STATE();
    case 72:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(134);
      END_STATE();
    case 73:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 74:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      END_STATE();
    case 75:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (lookahead == '"') ADVANCE(141);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(147);
      if (lookahead == '-') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\f' < lookahead)) ADVANCE(154);
      END_STATE();
    case 76:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(231);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(234);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(134);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      END_STATE();
    case 82:
      if (sym_comment_character_set_1(lookahead)) SKIP(82)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') ADVANCE(283);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '?') ADVANCE(209);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == 8594) ADVANCE(244);
      if (lookahead == 8704) ADVANCE(281);
      if (lookahead == 9733) ADVANCE(284);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(208);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 83:
      if (sym_comment_character_set_1(lookahead)) SKIP(83)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') ADVANCE(283);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '?') ADVANCE(209);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == 8704) ADVANCE(281);
      if (lookahead == 9733) ADVANCE(284);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(208);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 84:
      if (sym_comment_character_set_1(lookahead)) SKIP(84)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') ADVANCE(283);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == 8594) ADVANCE(244);
      if (lookahead == 8658) ADVANCE(241);
      if (lookahead == 8759) ADVANCE(249);
      if (lookahead == 9733) ADVANCE(284);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(208);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(254);
      END_STATE();
    case 85:
      if (sym_comment_character_set_1(lookahead)) SKIP(85)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') ADVANCE(283);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == '}') ADVANCE(280);
      if (lookahead == 8594) ADVANCE(244);
      if (lookahead == 8658) ADVANCE(241);
      if (lookahead == 9733) ADVANCE(284);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(208);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(254);
      END_STATE();
    case 86:
      if (sym_comment_character_set_1(lookahead)) SKIP(86)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') ADVANCE(283);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == 8594) ADVANCE(244);
      if (lookahead == 8759) ADVANCE(249);
      if (lookahead == 9733) ADVANCE(284);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(208);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(254);
      END_STATE();
    case 87:
      if (sym_comment_character_set_1(lookahead)) SKIP(87)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') ADVANCE(283);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == '}') ADVANCE(280);
      if (lookahead == 8594) ADVANCE(244);
      if (lookahead == 9733) ADVANCE(284);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(208);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(254);
      END_STATE();
    case 88:
      if (sym_comment_character_set_1(lookahead)) SKIP(88)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') ADVANCE(283);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == 8658) ADVANCE(241);
      if (lookahead == 9733) ADVANCE(284);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(208);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(254);
      END_STATE();
    case 89:
      if (sym_comment_character_set_1(lookahead)) SKIP(89)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == '*') ADVANCE(283);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == 9733) ADVANCE(284);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '+' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(208);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(254);
      END_STATE();
    case 90:
      if (sym_comment_character_set_1(lookahead)) SKIP(90)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') ADVANCE(283);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == '{') ADVANCE(279);
      if (lookahead == 8594) ADVANCE(244);
      if (lookahead == 8658) ADVANCE(241);
      if (lookahead == 9733) ADVANCE(284);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(254);
      END_STATE();
    case 91:
      if (sym_comment_character_set_1(lookahead)) SKIP(91)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') ADVANCE(283);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == 8594) ADVANCE(244);
      if (lookahead == 8658) ADVANCE(241);
      if (lookahead == 8759) ADVANCE(249);
      if (lookahead == 9733) ADVANCE(284);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(208);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(254);
      END_STATE();
    case 92:
      if (sym_comment_character_set_1(lookahead)) SKIP(92)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') ADVANCE(283);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == '}') ADVANCE(280);
      if (lookahead == 8594) ADVANCE(244);
      if (lookahead == 8658) ADVANCE(241);
      if (lookahead == 9733) ADVANCE(284);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(208);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(254);
      END_STATE();
    case 93:
      if (sym_comment_character_set_1(lookahead)) SKIP(93)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') ADVANCE(283);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == 8594) ADVANCE(244);
      if (lookahead == 8759) ADVANCE(249);
      if (lookahead == 9733) ADVANCE(284);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(208);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(254);
      END_STATE();
    case 94:
      if (sym_comment_character_set_1(lookahead)) SKIP(94)
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == 8594) ADVANCE(244);
      if (lookahead == 8658) ADVANCE(241);
      if (lookahead == 8759) ADVANCE(249);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(208);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      END_STATE();
    case 95:
      if (sym_comment_character_set_1(lookahead)) SKIP(95)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') ADVANCE(283);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == '}') ADVANCE(280);
      if (lookahead == 8594) ADVANCE(244);
      if (lookahead == 9733) ADVANCE(284);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(208);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(254);
      END_STATE();
    case 96:
      if (sym_comment_character_set_1(lookahead)) SKIP(96)
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == '}') ADVANCE(280);
      if (lookahead == 8594) ADVANCE(244);
      if (lookahead == 8658) ADVANCE(241);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(208);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      END_STATE();
    case 97:
      if (sym_comment_character_set_1(lookahead)) SKIP(97)
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == 8594) ADVANCE(244);
      if (lookahead == 8759) ADVANCE(249);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(208);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      END_STATE();
    case 98:
      if (sym_comment_character_set_1(lookahead)) SKIP(98)
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == '}') ADVANCE(280);
      if (lookahead == 8594) ADVANCE(244);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(208);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      END_STATE();
    case 99:
      if (sym_comment_character_set_1(lookahead)) SKIP(99)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') ADVANCE(283);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == 8658) ADVANCE(241);
      if (lookahead == 9733) ADVANCE(284);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(208);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(254);
      END_STATE();
    case 100:
      if (sym_comment_character_set_1(lookahead)) SKIP(100)
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == 8658) ADVANCE(241);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(208);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      END_STATE();
    case 101:
      if (sym_comment_character_set_1(lookahead)) SKIP(101)
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == 'F') ADVANCE(268);
      if (lookahead == 'I') ADVANCE(261);
      if (lookahead == 'P') ADVANCE(269);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(158);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 102:
      if (sym_comment_character_set_1(lookahead)) SKIP(102)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == '*') ADVANCE(283);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '@') ADVANCE(286);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == 9733) ADVANCE(284);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(208);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(254);
      END_STATE();
    case 103:
      if (sym_comment_character_set_1(lookahead)) SKIP(103)
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '`') ADVANCE(258);
      if (sym__tyconsym_character_set_1(lookahead)) ADVANCE(208);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      END_STATE();
    case 104:
      if (sym_comment_character_set_1(lookahead)) SKIP(104)
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == 8594) ADVANCE(244);
      if (sym__tyconsym_character_set_1(lookahead)) ADVANCE(208);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(254);
      END_STATE();
    case 105:
      if (sym_comment_character_set_1(lookahead)) SKIP(105)
      if (lookahead == '!') ADVANCE(112);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'R') ADVANCE(28);
      if (sym__varid_character_set_4(lookahead)) ADVANCE(254);
      END_STATE();
    case 106:
      if (sym_comment_character_set_1(lookahead)) SKIP(106)
      if (lookahead == '!') ADVANCE(156);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '=') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 107:
      if (sym_comment_character_set_1(lookahead)) SKIP(107)
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(54);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == '}') ADVANCE(280);
      if (lookahead == 8594) ADVANCE(244);
      if (lookahead == 8759) ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 112:
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 113:
      if (sym__varid_character_set_4(lookahead)) ADVANCE(259);
      END_STATE();
    case 114:
      if (eof) ADVANCE(116);
      if (sym_comment_character_set_1(lookahead)) SKIP(114)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '%') ADVANCE(287);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '*') ADVANCE(283);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == '?') ADVANCE(113);
      if (lookahead == '@') ADVANCE(285);
      if (lookahead == 'F') ADVANCE(55);
      if (lookahead == 'I') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(51);
      if (lookahead == 'P') ADVANCE(57);
      if (lookahead == 'R') ADVANCE(28);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == '{') ADVANCE(279);
      if (lookahead == '|') ADVANCE(282);
      if (lookahead == '}') ADVANCE(280);
      if (lookahead == 8592) ADVANCE(247);
      if (lookahead == 8594) ADVANCE(244);
      if (lookahead == 8658) ADVANCE(241);
      if (lookahead == 8704) ADVANCE(281);
      if (lookahead == 8759) ADVANCE(249);
      if (lookahead == 9733) ADVANCE(284);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (sym__varid_character_set_1(lookahead)) ADVANCE(254);
      END_STATE();
    case 115:
      if (eof) ADVANCE(116);
      if (sym_comment_character_set_1(lookahead)) SKIP(115)
      if (lookahead == '!') ADVANCE(112);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '%') ADVANCE(287);
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == '{') ADVANCE(279);
      if (lookahead == '}') ADVANCE(280);
      if (lookahead == 8594) ADVANCE(244);
      if (lookahead == 8658) ADVANCE(241);
      if (lookahead == 8759) ADVANCE(249);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(274);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(254);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_is_sum_marker);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_comment);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_comment);
      if (sym__varid_character_set_4(lookahead)) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_Id);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_Primary);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_Primary);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_attribute_exclamation_mark);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token1);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token1);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(154);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(154);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(154);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(136);
      if (lookahead == '^') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '^') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '"') ADVANCE(141);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(147);
      if (lookahead == '-') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(154);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(136);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(154);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '#') ADVANCE(149);
      if (lookahead == '\'') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(149);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(154);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '\'') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(149);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '\'') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(154);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '\'') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(154);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__field_strictness_prefix);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_cascade_action);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_cascade_action);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'C') ADVANCE(165);
      if (lookahead == 'R') ADVANCE(178);
      if (lookahead == 'S') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'D') ADVANCE(172);
      if (lookahead == 'U') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'D') ADVANCE(175);
      if (lookahead == 'N') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'a') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'a') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'a') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'a') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'c') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'c') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'd') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'd') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'f') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'i') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'l') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'l') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'l') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'l') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'r') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 's') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 's') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 't') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 't') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 't') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 't') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'u') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'u') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_Foreign);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_Foreign);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_References);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__consym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '>') ADVANCE(246);
      if (sym__tyconsym_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == '-') ADVANCE(119);
      if (sym__tyconsym_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == ':') ADVANCE(251);
      if (sym__consym_character_set_1(lookahead)) ADVANCE(202);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == '>') ADVANCE(243);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__tyconsym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(202);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__tyconsym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__tyconsym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(208);
      if (sym__varid_character_set_4(lookahead)) ADVANCE(259);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(210);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '\'') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(214);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\'') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(216);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '\'') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(220);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(224);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__integer_literal);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(77);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(226);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__binary_literal);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__binary_literal);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__binary_literal);
      if (lookahead == '#') ADVANCE(230);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__octal_literal);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '#') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '#') ADVANCE(233);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__hex_literal);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(236);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_u21d2);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_u2192);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_u2190);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_u2237);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(202);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__immediate_dot);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__varid);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '>') ADVANCE(245);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_implicit_parid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__conid);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead == 'g') ADVANCE(267);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead == 'm') ADVANCE(273);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(274);
      if (lookahead == 'y') ADVANCE(127);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(6);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_u2200);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_u2605);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_AT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(0)
      if (lookahead == '_') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'h') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'q') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 2:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'm') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'q') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_sql);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_role);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_forall);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_nominal);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_pattern);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_phantom);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_qualified);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_representational);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 115},
  [2] = {.lex_state = 82},
  [3] = {.lex_state = 82},
  [4] = {.lex_state = 82},
  [5] = {.lex_state = 82},
  [6] = {.lex_state = 82},
  [7] = {.lex_state = 82},
  [8] = {.lex_state = 82},
  [9] = {.lex_state = 82},
  [10] = {.lex_state = 82},
  [11] = {.lex_state = 82},
  [12] = {.lex_state = 82},
  [13] = {.lex_state = 82},
  [14] = {.lex_state = 82},
  [15] = {.lex_state = 83},
  [16] = {.lex_state = 83},
  [17] = {.lex_state = 83},
  [18] = {.lex_state = 83},
  [19] = {.lex_state = 83},
  [20] = {.lex_state = 83},
  [21] = {.lex_state = 83},
  [22] = {.lex_state = 83},
  [23] = {.lex_state = 83},
  [24] = {.lex_state = 83},
  [25] = {.lex_state = 83},
  [26] = {.lex_state = 83},
  [27] = {.lex_state = 82},
  [28] = {.lex_state = 82},
  [29] = {.lex_state = 82},
  [30] = {.lex_state = 82},
  [31] = {.lex_state = 82},
  [32] = {.lex_state = 82},
  [33] = {.lex_state = 82},
  [34] = {.lex_state = 82},
  [35] = {.lex_state = 82},
  [36] = {.lex_state = 82},
  [37] = {.lex_state = 82},
  [38] = {.lex_state = 82},
  [39] = {.lex_state = 82},
  [40] = {.lex_state = 84},
  [41] = {.lex_state = 84},
  [42] = {.lex_state = 84},
  [43] = {.lex_state = 82},
  [44] = {.lex_state = 85},
  [45] = {.lex_state = 82},
  [46] = {.lex_state = 85},
  [47] = {.lex_state = 85},
  [48] = {.lex_state = 84},
  [49] = {.lex_state = 82},
  [50] = {.lex_state = 82},
  [51] = {.lex_state = 82},
  [52] = {.lex_state = 82},
  [53] = {.lex_state = 82},
  [54] = {.lex_state = 86},
  [55] = {.lex_state = 86},
  [56] = {.lex_state = 86},
  [57] = {.lex_state = 84},
  [58] = {.lex_state = 85},
  [59] = {.lex_state = 87},
  [60] = {.lex_state = 82},
  [61] = {.lex_state = 82},
  [62] = {.lex_state = 87},
  [63] = {.lex_state = 87},
  [64] = {.lex_state = 88},
  [65] = {.lex_state = 88},
  [66] = {.lex_state = 88},
  [67] = {.lex_state = 88},
  [68] = {.lex_state = 89},
  [69] = {.lex_state = 89},
  [70] = {.lex_state = 89},
  [71] = {.lex_state = 90},
  [72] = {.lex_state = 90},
  [73] = {.lex_state = 82},
  [74] = {.lex_state = 82},
  [75] = {.lex_state = 82},
  [76] = {.lex_state = 82},
  [77] = {.lex_state = 82},
  [78] = {.lex_state = 82},
  [79] = {.lex_state = 82},
  [80] = {.lex_state = 82},
  [81] = {.lex_state = 82},
  [82] = {.lex_state = 82},
  [83] = {.lex_state = 82},
  [84] = {.lex_state = 82},
  [85] = {.lex_state = 82},
  [86] = {.lex_state = 84},
  [87] = {.lex_state = 91},
  [88] = {.lex_state = 91},
  [89] = {.lex_state = 91},
  [90] = {.lex_state = 91},
  [91] = {.lex_state = 92},
  [92] = {.lex_state = 84},
  [93] = {.lex_state = 92},
  [94] = {.lex_state = 84},
  [95] = {.lex_state = 92},
  [96] = {.lex_state = 92},
  [97] = {.lex_state = 84},
  [98] = {.lex_state = 84},
  [99] = {.lex_state = 84},
  [100] = {.lex_state = 84},
  [101] = {.lex_state = 84},
  [102] = {.lex_state = 84},
  [103] = {.lex_state = 84},
  [104] = {.lex_state = 84},
  [105] = {.lex_state = 84},
  [106] = {.lex_state = 84},
  [107] = {.lex_state = 84},
  [108] = {.lex_state = 84},
  [109] = {.lex_state = 84},
  [110] = {.lex_state = 84},
  [111] = {.lex_state = 84},
  [112] = {.lex_state = 84},
  [113] = {.lex_state = 84},
  [114] = {.lex_state = 85},
  [115] = {.lex_state = 85},
  [116] = {.lex_state = 85},
  [117] = {.lex_state = 85},
  [118] = {.lex_state = 85},
  [119] = {.lex_state = 93},
  [120] = {.lex_state = 93},
  [121] = {.lex_state = 85},
  [122] = {.lex_state = 85},
  [123] = {.lex_state = 85},
  [124] = {.lex_state = 85},
  [125] = {.lex_state = 85},
  [126] = {.lex_state = 85},
  [127] = {.lex_state = 85},
  [128] = {.lex_state = 85},
  [129] = {.lex_state = 85},
  [130] = {.lex_state = 85},
  [131] = {.lex_state = 94},
  [132] = {.lex_state = 93},
  [133] = {.lex_state = 85},
  [134] = {.lex_state = 85},
  [135] = {.lex_state = 85},
  [136] = {.lex_state = 93},
  [137] = {.lex_state = 85},
  [138] = {.lex_state = 95},
  [139] = {.lex_state = 86},
  [140] = {.lex_state = 86},
  [141] = {.lex_state = 86},
  [142] = {.lex_state = 86},
  [143] = {.lex_state = 86},
  [144] = {.lex_state = 86},
  [145] = {.lex_state = 86},
  [146] = {.lex_state = 86},
  [147] = {.lex_state = 86},
  [148] = {.lex_state = 86},
  [149] = {.lex_state = 95},
  [150] = {.lex_state = 86},
  [151] = {.lex_state = 95},
  [152] = {.lex_state = 86},
  [153] = {.lex_state = 86},
  [154] = {.lex_state = 96},
  [155] = {.lex_state = 86},
  [156] = {.lex_state = 86},
  [157] = {.lex_state = 86},
  [158] = {.lex_state = 86},
  [159] = {.lex_state = 95},
  [160] = {.lex_state = 86},
  [161] = {.lex_state = 87},
  [162] = {.lex_state = 97},
  [163] = {.lex_state = 87},
  [164] = {.lex_state = 87},
  [165] = {.lex_state = 87},
  [166] = {.lex_state = 87},
  [167] = {.lex_state = 87},
  [168] = {.lex_state = 87},
  [169] = {.lex_state = 87},
  [170] = {.lex_state = 87},
  [171] = {.lex_state = 87},
  [172] = {.lex_state = 87},
  [173] = {.lex_state = 87},
  [174] = {.lex_state = 87},
  [175] = {.lex_state = 87},
  [176] = {.lex_state = 87},
  [177] = {.lex_state = 87},
  [178] = {.lex_state = 87},
  [179] = {.lex_state = 87},
  [180] = {.lex_state = 98},
  [181] = {.lex_state = 82},
  [182] = {.lex_state = 82},
  [183] = {.lex_state = 82},
  [184] = {.lex_state = 99},
  [185] = {.lex_state = 99},
  [186] = {.lex_state = 99},
  [187] = {.lex_state = 82},
  [188] = {.lex_state = 99},
  [189] = {.lex_state = 82},
  [190] = {.lex_state = 82},
  [191] = {.lex_state = 82},
  [192] = {.lex_state = 82},
  [193] = {.lex_state = 82},
  [194] = {.lex_state = 82},
  [195] = {.lex_state = 82},
  [196] = {.lex_state = 82},
  [197] = {.lex_state = 88},
  [198] = {.lex_state = 90},
  [199] = {.lex_state = 88},
  [200] = {.lex_state = 88},
  [201] = {.lex_state = 88},
  [202] = {.lex_state = 88},
  [203] = {.lex_state = 88},
  [204] = {.lex_state = 88},
  [205] = {.lex_state = 88},
  [206] = {.lex_state = 88},
  [207] = {.lex_state = 88},
  [208] = {.lex_state = 88},
  [209] = {.lex_state = 88},
  [210] = {.lex_state = 88},
  [211] = {.lex_state = 88},
  [212] = {.lex_state = 90},
  [213] = {.lex_state = 88},
  [214] = {.lex_state = 88},
  [215] = {.lex_state = 88},
  [216] = {.lex_state = 88},
  [217] = {.lex_state = 100},
  [218] = {.lex_state = 101, .external_lex_state = 2},
  [219] = {.lex_state = 101, .external_lex_state = 2},
  [220] = {.lex_state = 101},
  [221] = {.lex_state = 90},
  [222] = {.lex_state = 90},
  [223] = {.lex_state = 90},
  [224] = {.lex_state = 90},
  [225] = {.lex_state = 90},
  [226] = {.lex_state = 90},
  [227] = {.lex_state = 90},
  [228] = {.lex_state = 90},
  [229] = {.lex_state = 88},
  [230] = {.lex_state = 90},
  [231] = {.lex_state = 90},
  [232] = {.lex_state = 90},
  [233] = {.lex_state = 102},
  [234] = {.lex_state = 90},
  [235] = {.lex_state = 90},
  [236] = {.lex_state = 90},
  [237] = {.lex_state = 102},
  [238] = {.lex_state = 102},
  [239] = {.lex_state = 102},
  [240] = {.lex_state = 89},
  [241] = {.lex_state = 90},
  [242] = {.lex_state = 89},
  [243] = {.lex_state = 90},
  [244] = {.lex_state = 89},
  [245] = {.lex_state = 89},
  [246] = {.lex_state = 89},
  [247] = {.lex_state = 89},
  [248] = {.lex_state = 115},
  [249] = {.lex_state = 89},
  [250] = {.lex_state = 89},
  [251] = {.lex_state = 90},
  [252] = {.lex_state = 89},
  [253] = {.lex_state = 89},
  [254] = {.lex_state = 89},
  [255] = {.lex_state = 89},
  [256] = {.lex_state = 89},
  [257] = {.lex_state = 90},
  [258] = {.lex_state = 89},
  [259] = {.lex_state = 89},
  [260] = {.lex_state = 89},
  [261] = {.lex_state = 115},
  [262] = {.lex_state = 89},
  [263] = {.lex_state = 90},
  [264] = {.lex_state = 89},
  [265] = {.lex_state = 103},
  [266] = {.lex_state = 104},
  [267] = {.lex_state = 104},
  [268] = {.lex_state = 82},
  [269] = {.lex_state = 82},
  [270] = {.lex_state = 82},
  [271] = {.lex_state = 82},
  [272] = {.lex_state = 82},
  [273] = {.lex_state = 82},
  [274] = {.lex_state = 103},
  [275] = {.lex_state = 82},
  [276] = {.lex_state = 82},
  [277] = {.lex_state = 82},
  [278] = {.lex_state = 115},
  [279] = {.lex_state = 115},
  [280] = {.lex_state = 115},
  [281] = {.lex_state = 103},
  [282] = {.lex_state = 115},
  [283] = {.lex_state = 115},
  [284] = {.lex_state = 103},
  [285] = {.lex_state = 115},
  [286] = {.lex_state = 115},
  [287] = {.lex_state = 115},
  [288] = {.lex_state = 115},
  [289] = {.lex_state = 115},
  [290] = {.lex_state = 101, .external_lex_state = 2},
  [291] = {.lex_state = 105, .external_lex_state = 3},
  [292] = {.lex_state = 105, .external_lex_state = 3},
  [293] = {.lex_state = 106, .external_lex_state = 3},
  [294] = {.lex_state = 106, .external_lex_state = 3},
  [295] = {.lex_state = 107},
  [296] = {.lex_state = 115, .external_lex_state = 4},
  [297] = {.lex_state = 106, .external_lex_state = 3},
  [298] = {.lex_state = 106, .external_lex_state = 3},
  [299] = {.lex_state = 103},
  [300] = {.lex_state = 106, .external_lex_state = 3},
  [301] = {.lex_state = 115, .external_lex_state = 3},
  [302] = {.lex_state = 115, .external_lex_state = 4},
  [303] = {.lex_state = 106, .external_lex_state = 3},
  [304] = {.lex_state = 115, .external_lex_state = 4},
  [305] = {.lex_state = 106, .external_lex_state = 3},
  [306] = {.lex_state = 115, .external_lex_state = 4},
  [307] = {.lex_state = 105, .external_lex_state = 3},
  [308] = {.lex_state = 115},
  [309] = {.lex_state = 105, .external_lex_state = 3},
  [310] = {.lex_state = 106, .external_lex_state = 3},
  [311] = {.lex_state = 115, .external_lex_state = 4},
  [312] = {.lex_state = 115, .external_lex_state = 3},
  [313] = {.lex_state = 106, .external_lex_state = 3},
  [314] = {.lex_state = 106, .external_lex_state = 3},
  [315] = {.lex_state = 103},
  [316] = {.lex_state = 115, .external_lex_state = 3},
  [317] = {.lex_state = 115},
  [318] = {.lex_state = 103},
  [319] = {.lex_state = 75},
  [320] = {.lex_state = 115},
  [321] = {.lex_state = 106, .external_lex_state = 3},
  [322] = {.lex_state = 115, .external_lex_state = 3},
  [323] = {.lex_state = 115},
  [324] = {.lex_state = 115},
  [325] = {.lex_state = 115},
  [326] = {.lex_state = 115},
  [327] = {.lex_state = 115},
  [328] = {.lex_state = 106, .external_lex_state = 3},
  [329] = {.lex_state = 75},
  [330] = {.lex_state = 115},
  [331] = {.lex_state = 106, .external_lex_state = 3},
  [332] = {.lex_state = 106, .external_lex_state = 3},
  [333] = {.lex_state = 115},
  [334] = {.lex_state = 115, .external_lex_state = 3},
  [335] = {.lex_state = 115},
  [336] = {.lex_state = 107},
  [337] = {.lex_state = 115, .external_lex_state = 3},
  [338] = {.lex_state = 106, .external_lex_state = 3},
  [339] = {.lex_state = 115},
  [340] = {.lex_state = 115},
  [341] = {.lex_state = 107},
  [342] = {.lex_state = 115},
  [343] = {.lex_state = 115},
  [344] = {.lex_state = 115},
  [345] = {.lex_state = 115},
  [346] = {.lex_state = 105, .external_lex_state = 3},
  [347] = {.lex_state = 105, .external_lex_state = 3},
  [348] = {.lex_state = 115},
  [349] = {.lex_state = 115},
  [350] = {.lex_state = 115},
  [351] = {.lex_state = 115},
  [352] = {.lex_state = 115},
  [353] = {.lex_state = 115},
  [354] = {.lex_state = 107},
  [355] = {.lex_state = 115},
  [356] = {.lex_state = 115},
  [357] = {.lex_state = 115},
  [358] = {.lex_state = 106, .external_lex_state = 3},
  [359] = {.lex_state = 115},
  [360] = {.lex_state = 107},
  [361] = {.lex_state = 106, .external_lex_state = 3},
  [362] = {.lex_state = 106, .external_lex_state = 3},
  [363] = {.lex_state = 115},
  [364] = {.lex_state = 115},
  [365] = {.lex_state = 107},
  [366] = {.lex_state = 107},
  [367] = {.lex_state = 115},
  [368] = {.lex_state = 115},
  [369] = {.lex_state = 106, .external_lex_state = 3},
  [370] = {.lex_state = 115},
  [371] = {.lex_state = 115},
  [372] = {.lex_state = 115},
  [373] = {.lex_state = 115},
  [374] = {.lex_state = 115},
  [375] = {.lex_state = 107},
  [376] = {.lex_state = 115},
  [377] = {.lex_state = 115},
  [378] = {.lex_state = 106, .external_lex_state = 3},
  [379] = {.lex_state = 115},
  [380] = {.lex_state = 115},
  [381] = {.lex_state = 107},
  [382] = {.lex_state = 115},
  [383] = {.lex_state = 115},
  [384] = {.lex_state = 115},
  [385] = {.lex_state = 115, .external_lex_state = 3},
  [386] = {.lex_state = 106, .external_lex_state = 3},
  [387] = {.lex_state = 106, .external_lex_state = 3},
  [388] = {.lex_state = 106, .external_lex_state = 3},
  [389] = {.lex_state = 115},
  [390] = {.lex_state = 106, .external_lex_state = 3},
  [391] = {.lex_state = 107},
  [392] = {.lex_state = 115},
  [393] = {.lex_state = 115},
  [394] = {.lex_state = 115, .external_lex_state = 3},
  [395] = {.lex_state = 115},
  [396] = {.lex_state = 115},
  [397] = {.lex_state = 115},
  [398] = {.lex_state = 115},
  [399] = {.lex_state = 115},
  [400] = {.lex_state = 115},
  [401] = {.lex_state = 115},
  [402] = {.lex_state = 115},
  [403] = {.lex_state = 115},
  [404] = {.lex_state = 106, .external_lex_state = 3},
  [405] = {.lex_state = 106, .external_lex_state = 3},
  [406] = {.lex_state = 106, .external_lex_state = 3},
  [407] = {.lex_state = 106, .external_lex_state = 3},
  [408] = {.lex_state = 115},
  [409] = {.lex_state = 107},
  [410] = {.lex_state = 107},
  [411] = {.lex_state = 115},
  [412] = {.lex_state = 115},
  [413] = {.lex_state = 115},
  [414] = {.lex_state = 106, .external_lex_state = 3},
  [415] = {.lex_state = 115},
  [416] = {.lex_state = 106, .external_lex_state = 3},
  [417] = {.lex_state = 115},
  [418] = {.lex_state = 115},
  [419] = {.lex_state = 115},
  [420] = {.lex_state = 115},
  [421] = {.lex_state = 106, .external_lex_state = 3},
  [422] = {.lex_state = 106, .external_lex_state = 3},
  [423] = {.lex_state = 106, .external_lex_state = 3},
  [424] = {.lex_state = 115},
  [425] = {.lex_state = 115},
  [426] = {.lex_state = 115},
  [427] = {.lex_state = 115},
  [428] = {.lex_state = 115},
  [429] = {.lex_state = 115},
  [430] = {.lex_state = 115, .external_lex_state = 3},
  [431] = {.lex_state = 115},
  [432] = {.lex_state = 115},
  [433] = {.lex_state = 115},
  [434] = {.lex_state = 115},
  [435] = {.lex_state = 103},
  [436] = {.lex_state = 106, .external_lex_state = 3},
  [437] = {.lex_state = 115},
  [438] = {.lex_state = 115},
  [439] = {.lex_state = 115},
  [440] = {.lex_state = 106, .external_lex_state = 3},
  [441] = {.lex_state = 106, .external_lex_state = 3},
  [442] = {.lex_state = 115},
  [443] = {.lex_state = 115},
  [444] = {.lex_state = 115},
  [445] = {.lex_state = 106, .external_lex_state = 3},
  [446] = {.lex_state = 106, .external_lex_state = 3},
  [447] = {.lex_state = 115},
  [448] = {.lex_state = 115},
  [449] = {.lex_state = 115},
  [450] = {.lex_state = 115},
  [451] = {.lex_state = 115},
  [452] = {.lex_state = 106, .external_lex_state = 3},
  [453] = {.lex_state = 106, .external_lex_state = 3},
  [454] = {.lex_state = 107},
  [455] = {.lex_state = 106, .external_lex_state = 3},
  [456] = {.lex_state = 115},
  [457] = {.lex_state = 115},
  [458] = {.lex_state = 115},
  [459] = {.lex_state = 106, .external_lex_state = 3},
  [460] = {.lex_state = 115},
  [461] = {.lex_state = 106, .external_lex_state = 3},
  [462] = {.lex_state = 115},
  [463] = {.lex_state = 115},
  [464] = {.lex_state = 115},
  [465] = {.lex_state = 115},
  [466] = {.lex_state = 115, .external_lex_state = 3},
  [467] = {.lex_state = 115},
  [468] = {.lex_state = 115},
  [469] = {.lex_state = 115},
  [470] = {.lex_state = 115},
  [471] = {.lex_state = 115},
  [472] = {.lex_state = 115},
  [473] = {.lex_state = 115, .external_lex_state = 3},
  [474] = {.lex_state = 115},
  [475] = {.lex_state = 115},
  [476] = {.lex_state = 115},
  [477] = {.lex_state = 115},
  [478] = {.lex_state = 115},
  [479] = {.lex_state = 115},
  [480] = {.lex_state = 115},
  [481] = {.lex_state = 115},
  [482] = {.lex_state = 115},
  [483] = {.lex_state = 115},
  [484] = {.lex_state = 115},
  [485] = {.lex_state = 115},
  [486] = {.lex_state = 115},
  [487] = {.lex_state = 115},
  [488] = {.lex_state = 115},
  [489] = {.lex_state = 115},
  [490] = {.lex_state = 115},
  [491] = {.lex_state = 115},
  [492] = {.lex_state = 115},
  [493] = {.lex_state = 115},
  [494] = {.lex_state = 115},
  [495] = {.lex_state = 115, .external_lex_state = 3},
  [496] = {.lex_state = 115},
  [497] = {.lex_state = 115},
  [498] = {.lex_state = 115},
  [499] = {.lex_state = 115, .external_lex_state = 3},
  [500] = {.lex_state = 115},
  [501] = {.lex_state = 115},
  [502] = {.lex_state = 115},
  [503] = {.lex_state = 115, .external_lex_state = 3},
  [504] = {.lex_state = 115, .external_lex_state = 3},
  [505] = {.lex_state = 115},
  [506] = {.lex_state = 115},
  [507] = {.lex_state = 115},
  [508] = {.lex_state = 115, .external_lex_state = 3},
  [509] = {.lex_state = 101},
  [510] = {.lex_state = 115},
  [511] = {.lex_state = 115},
  [512] = {.lex_state = 115},
  [513] = {.lex_state = 115},
  [514] = {.lex_state = 115},
  [515] = {.lex_state = 115},
  [516] = {.lex_state = 115},
  [517] = {.lex_state = 115},
  [518] = {.lex_state = 115},
  [519] = {.lex_state = 115},
  [520] = {.lex_state = 115, .external_lex_state = 2},
  [521] = {.lex_state = 115, .external_lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__varid] = ACTIONS(1),
    [sym_is_sum_marker] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_Id] = ACTIONS(1),
    [anon_sym_Primary] = ACTIONS(1),
    [anon_sym_sql] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__attribute_key_value_value_token1] = ACTIONS(1),
    [aux_sym__attribute_key_value_value_token2] = ACTIONS(1),
    [sym__field_strictness_prefix] = ACTIONS(1),
    [sym_cascade_action] = ACTIONS(1),
    [anon_sym_Foreign] = ACTIONS(1),
    [anon_sym_References] = ACTIONS(1),
    [anon_sym_deriving] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__consym] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_u21d2] = ACTIONS(1),
    [anon_sym_u2192] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_u2190] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_u2237] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym__immediate_dot] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym_implicit_parid] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_pattern] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_hiding] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_qualified] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_forall] = ACTIONS(1),
    [anon_sym_u2200] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_u2605] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_instance] = ACTIONS(1),
    [anon_sym_representational] = ACTIONS(1),
    [anon_sym_nominal] = ACTIONS(1),
    [anon_sym_phantom] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_role] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_persistent_definitions] = STATE(515),
    [sym_entity_definition] = STATE(248),
    [sym__entity_name] = STATE(294),
    [sym__entity_header] = STATE(311),
    [sym_constructor] = STATE(358),
    [sym_qualified_type] = STATE(414),
    [sym_tycon_arrow] = STATE(414),
    [sym__promoted_tycon] = STATE(414),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(357),
    [sym_type_variable] = STATE(414),
    [sym_type_name] = STATE(294),
    [aux_sym_persistent_definitions_repeat1] = STATE(248),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__varid] = ACTIONS(7),
    [sym_is_sum_marker] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym__conid] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
  },
  [2] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym__arrow] = STATE(507),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(506),
    [sym_qualified_constructor_operator] = STATE(506),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(506),
    [sym_qualified_type_operator] = STATE(506),
    [sym__qualified_type_operator] = STATE(506),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(86),
    [sym_annotated_type_variable] = STATE(506),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(348),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(511),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(57),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(349),
    [sym_type_infix] = STATE(288),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(380),
    [sym__quantified_constraint] = STATE(397),
    [sym__constraint_context] = STATE(397),
    [sym__constraint] = STATE(397),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(38),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(393),
    [aux_sym_con_tuple_repeat1] = STATE(399),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(19),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_u2192] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(37),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [3] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym__arrow] = STATE(494),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(496),
    [sym_qualified_constructor_operator] = STATE(496),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(496),
    [sym_qualified_type_operator] = STATE(496),
    [sym__qualified_type_operator] = STATE(496),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(86),
    [sym_annotated_type_variable] = STATE(496),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(348),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(481),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(57),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(349),
    [sym_type_infix] = STATE(288),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(380),
    [sym__quantified_constraint] = STATE(418),
    [sym__constraint_context] = STATE(418),
    [sym__constraint] = STATE(418),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(38),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(442),
    [aux_sym_con_tuple_repeat1] = STATE(443),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(53),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(55),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_u2192] = ACTIONS(57),
    [anon_sym_DASH_GT] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(61),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [4] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym__arrow] = STATE(494),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(496),
    [sym_qualified_constructor_operator] = STATE(496),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(496),
    [sym_qualified_type_operator] = STATE(496),
    [sym__qualified_type_operator] = STATE(496),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(86),
    [sym_annotated_type_variable] = STATE(496),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(348),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(481),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(57),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(349),
    [sym_type_infix] = STATE(288),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(380),
    [sym__quantified_constraint] = STATE(397),
    [sym__constraint_context] = STATE(397),
    [sym__constraint] = STATE(397),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(38),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(442),
    [aux_sym_con_tuple_repeat1] = STATE(443),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(53),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(55),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_u2192] = ACTIONS(57),
    [anon_sym_DASH_GT] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(61),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [5] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym__arrow] = STATE(500),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(501),
    [sym_qualified_constructor_operator] = STATE(501),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(501),
    [sym_qualified_type_operator] = STATE(501),
    [sym__qualified_type_operator] = STATE(501),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(86),
    [sym_annotated_type_variable] = STATE(501),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(348),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(493),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(57),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(349),
    [sym_type_infix] = STATE(288),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(380),
    [sym__quantified_constraint] = STATE(418),
    [sym__constraint_context] = STATE(418),
    [sym__constraint] = STATE(418),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(38),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(419),
    [aux_sym_con_tuple_repeat1] = STATE(417),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(63),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(65),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_u2192] = ACTIONS(67),
    [anon_sym_DASH_GT] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(71),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [6] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym__arrow] = STATE(507),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(506),
    [sym_qualified_constructor_operator] = STATE(506),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(506),
    [sym_qualified_type_operator] = STATE(506),
    [sym__qualified_type_operator] = STATE(506),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(86),
    [sym_annotated_type_variable] = STATE(506),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(510),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(289),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(43),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(451),
    [aux_sym_con_tuple_repeat1] = STATE(450),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(73),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_u2192] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(77),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [7] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym__arrow] = STATE(486),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(485),
    [sym_qualified_constructor_operator] = STATE(485),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(485),
    [sym_qualified_type_operator] = STATE(485),
    [sym__qualified_type_operator] = STATE(485),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(86),
    [sym_annotated_type_variable] = STATE(485),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(491),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(289),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(43),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(456),
    [aux_sym_con_tuple_repeat1] = STATE(457),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(79),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(81),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_u2192] = ACTIONS(83),
    [anon_sym_DASH_GT] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(87),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [8] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym__arrow] = STATE(477),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(516),
    [sym_qualified_constructor_operator] = STATE(516),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(516),
    [sym_qualified_type_operator] = STATE(516),
    [sym__qualified_type_operator] = STATE(516),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(86),
    [sym_annotated_type_variable] = STATE(516),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(487),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(289),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(43),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(424),
    [aux_sym_con_tuple_repeat1] = STATE(425),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(89),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(91),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_u2192] = ACTIONS(93),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(97),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [9] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym__arrow] = STATE(500),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(501),
    [sym_qualified_constructor_operator] = STATE(501),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(501),
    [sym_qualified_type_operator] = STATE(501),
    [sym__qualified_type_operator] = STATE(501),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(86),
    [sym_annotated_type_variable] = STATE(501),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(505),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(289),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(43),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(412),
    [aux_sym_con_tuple_repeat1] = STATE(411),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(99),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(65),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_u2192] = ACTIONS(67),
    [anon_sym_DASH_GT] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(101),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [10] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym__arrow] = STATE(492),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(519),
    [sym_qualified_constructor_operator] = STATE(519),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(519),
    [sym_qualified_type_operator] = STATE(519),
    [sym__qualified_type_operator] = STATE(519),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(86),
    [sym_annotated_type_variable] = STATE(519),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(491),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(289),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(43),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(456),
    [aux_sym_con_tuple_repeat1] = STATE(457),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(79),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(103),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_u2192] = ACTIONS(105),
    [anon_sym_DASH_GT] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(87),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [11] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym__arrow] = STATE(512),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(513),
    [sym_qualified_constructor_operator] = STATE(513),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(513),
    [sym_qualified_type_operator] = STATE(513),
    [sym__qualified_type_operator] = STATE(513),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(86),
    [sym_annotated_type_variable] = STATE(513),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(493),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(289),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(43),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(419),
    [aux_sym_con_tuple_repeat1] = STATE(417),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(63),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(109),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_u2192] = ACTIONS(111),
    [anon_sym_DASH_GT] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(115),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [12] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym__arrow] = STATE(478),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(479),
    [sym_qualified_constructor_operator] = STATE(479),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(479),
    [sym_qualified_type_operator] = STATE(479),
    [sym__qualified_type_operator] = STATE(479),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(86),
    [sym_annotated_type_variable] = STATE(479),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(511),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(289),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(43),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(393),
    [aux_sym_con_tuple_repeat1] = STATE(399),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(19),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(117),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_u2192] = ACTIONS(119),
    [anon_sym_DASH_GT] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(123),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [13] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym__arrow] = STATE(488),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(489),
    [sym_qualified_constructor_operator] = STATE(489),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(489),
    [sym_qualified_type_operator] = STATE(489),
    [sym__qualified_type_operator] = STATE(489),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(86),
    [sym_annotated_type_variable] = STATE(489),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(481),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(289),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(43),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(442),
    [aux_sym_con_tuple_repeat1] = STATE(443),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(53),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(125),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_u2192] = ACTIONS(127),
    [anon_sym_DASH_GT] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(131),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [14] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym__arrow] = STATE(494),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(496),
    [sym_qualified_constructor_operator] = STATE(496),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(496),
    [sym_qualified_type_operator] = STATE(496),
    [sym__qualified_type_operator] = STATE(496),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(86),
    [sym_annotated_type_variable] = STATE(496),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(483),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(289),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(43),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(439),
    [aux_sym_con_tuple_repeat1] = STATE(438),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(133),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(55),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_u2192] = ACTIONS(57),
    [anon_sym_DASH_GT] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(135),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [15] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(517),
    [sym_qualified_constructor_operator] = STATE(517),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(517),
    [sym_qualified_type_operator] = STATE(517),
    [sym__qualified_type_operator] = STATE(517),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(481),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(289),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(43),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(443),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(53),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(137),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(131),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [16] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(514),
    [sym_qualified_constructor_operator] = STATE(514),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(514),
    [sym_qualified_type_operator] = STATE(514),
    [sym__qualified_type_operator] = STATE(514),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(493),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(289),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(43),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(417),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(63),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(139),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(115),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [17] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(484),
    [sym_qualified_constructor_operator] = STATE(484),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(484),
    [sym_qualified_type_operator] = STATE(484),
    [sym__qualified_type_operator] = STATE(484),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(491),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(289),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(43),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(457),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(79),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(141),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(87),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [18] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(480),
    [sym_qualified_constructor_operator] = STATE(480),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(480),
    [sym_qualified_type_operator] = STATE(480),
    [sym__qualified_type_operator] = STATE(480),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(511),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(289),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(43),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(399),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(19),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(143),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(123),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [19] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(502),
    [sym_qualified_constructor_operator] = STATE(502),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(502),
    [sym_qualified_type_operator] = STATE(502),
    [sym__qualified_type_operator] = STATE(502),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(505),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(289),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(43),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(411),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(99),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(145),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(101),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [20] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(497),
    [sym_qualified_constructor_operator] = STATE(497),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(497),
    [sym_qualified_type_operator] = STATE(497),
    [sym__qualified_type_operator] = STATE(497),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(510),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(289),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(43),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(450),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(73),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(147),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(77),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [21] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(502),
    [sym_qualified_constructor_operator] = STATE(502),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(502),
    [sym_qualified_type_operator] = STATE(502),
    [sym__qualified_type_operator] = STATE(502),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(493),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(289),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(43),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(417),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(63),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(145),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(115),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [22] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(517),
    [sym_qualified_constructor_operator] = STATE(517),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(517),
    [sym_qualified_type_operator] = STATE(517),
    [sym__qualified_type_operator] = STATE(517),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(483),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(289),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(43),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(438),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(133),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(137),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(135),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [23] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(518),
    [sym_qualified_constructor_operator] = STATE(518),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(518),
    [sym_qualified_type_operator] = STATE(518),
    [sym__qualified_type_operator] = STATE(518),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(491),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(289),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(43),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(457),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(79),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(149),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(87),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [24] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(490),
    [sym_qualified_constructor_operator] = STATE(490),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(490),
    [sym_qualified_type_operator] = STATE(490),
    [sym__qualified_type_operator] = STATE(490),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(481),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(289),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(43),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(443),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(53),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(151),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(131),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [25] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(474),
    [sym_qualified_constructor_operator] = STATE(474),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(474),
    [sym_qualified_type_operator] = STATE(474),
    [sym__qualified_type_operator] = STATE(474),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(487),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(289),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(43),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(425),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(89),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(153),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(97),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
  [26] = {
    [sym_integer] = STATE(153),
    [sym__literal] = STATE(153),
    [sym_constructor] = STATE(90),
    [sym_constructor_operator] = STATE(497),
    [sym_qualified_constructor_operator] = STATE(497),
    [sym_con_unit] = STATE(153),
    [sym_con_list] = STATE(153),
    [sym_con_tuple] = STATE(153),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(497),
    [sym_qualified_type_operator] = STATE(497),
    [sym__qualified_type_operator] = STATE(497),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(470),
    [aux_sym__qualifying_module] = STATE(315),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(308),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(511),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(162),
    [sym__btype] = STATE(162),
    [sym_implicit_param] = STATE(289),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(282),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(43),
    [sym__type_quantifiers] = STATE(289),
    [sym__type_context] = STATE(289),
    [sym__type_fun] = STATE(289),
    [sym__type] = STATE(289),
    [sym__type_or_implicit] = STATE(289),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(399),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(19),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(147),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(123),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_u2200] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_u2605] = ACTIONS(51),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym_implicit_parid,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_u2200,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(90), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(282), 1,
      sym__type_infix,
    STATE(308), 1,
      sym__forall_kw,
    STATE(350), 1,
      sym__forall,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(458), 1,
      sym__type_with_kind,
    STATE(470), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(162), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(153), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(289), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [118] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym_implicit_parid,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_u2200,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(90), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(282), 1,
      sym__type_infix,
    STATE(308), 1,
      sym__forall_kw,
    STATE(350), 1,
      sym__forall,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(444), 1,
      sym__type_with_kind,
    STATE(470), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(162), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(153), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(289), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [236] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym_implicit_parid,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_u2200,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(90), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(282), 1,
      sym__type_infix,
    STATE(308), 1,
      sym__forall_kw,
    STATE(350), 1,
      sym__forall,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(437), 1,
      sym__type_with_kind,
    STATE(470), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(162), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(153), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(289), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [354] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym_implicit_parid,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_u2200,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(90), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(282), 1,
      sym__type_infix,
    STATE(308), 1,
      sym__forall_kw,
    STATE(350), 1,
      sym__forall,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(400), 1,
      sym__type_with_kind,
    STATE(470), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(162), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(153), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(289), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [472] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym_implicit_parid,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_u2200,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(90), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(282), 1,
      sym__type_infix,
    STATE(308), 1,
      sym__forall_kw,
    STATE(350), 1,
      sym__forall,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(415), 1,
      sym__type_with_kind,
    STATE(470), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(162), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(153), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(289), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [590] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym_implicit_parid,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_u2200,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(90), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(282), 1,
      sym__type_infix,
    STATE(308), 1,
      sym__forall_kw,
    STATE(350), 1,
      sym__forall,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(449), 1,
      sym__type_with_kind,
    STATE(470), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(162), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(153), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(289), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [708] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym_implicit_parid,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_u2200,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(90), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(282), 1,
      sym__type_infix,
    STATE(308), 1,
      sym__forall_kw,
    STATE(350), 1,
      sym__forall,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(426), 1,
      sym__type_with_kind,
    STATE(470), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(162), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(153), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(289), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [826] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym_implicit_parid,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_u2200,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(90), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(282), 1,
      sym__type_infix,
    STATE(308), 1,
      sym__forall_kw,
    STATE(350), 1,
      sym__forall,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(408), 1,
      sym__type_with_kind,
    STATE(470), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(162), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(153), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(289), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [944] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym_implicit_parid,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_u2200,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(90), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(282), 1,
      sym__type_infix,
    STATE(308), 1,
      sym__forall_kw,
    STATE(350), 1,
      sym__forall,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(396), 1,
      sym__type_with_kind,
    STATE(470), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(162), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(153), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(289), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [1059] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_u2200,
    ACTIONS(171), 1,
      sym__varid,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      sym_implicit_parid,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    STATE(51), 1,
      sym__context,
    STATE(58), 1,
      sym_type_name,
    STATE(95), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(285), 1,
      sym__type_infix,
    STATE(308), 1,
      sym__forall_kw,
    STATE(355), 1,
      sym__forall,
    STATE(376), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(173), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(177), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(137), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(170), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(320), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(62), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [1171] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym_implicit_parid,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_u2200,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(90), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(282), 1,
      sym__type_infix,
    STATE(308), 1,
      sym__forall_kw,
    STATE(350), 1,
      sym__forall,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(162), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(153), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(320), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [1283] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_u2200,
    STATE(38), 1,
      sym__context,
    STATE(57), 1,
      sym_type_name,
    STATE(90), 1,
      sym_constructor,
    STATE(282), 1,
      sym__type_infix,
    STATE(288), 1,
      sym_type_infix,
    STATE(308), 1,
      sym__forall_kw,
    STATE(348), 1,
      sym__forall,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(380), 1,
      sym_constraint,
    STATE(389), 1,
      sym__context_constraints,
    STATE(470), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(162), 2,
      sym_type_apply,
      sym__btype,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(472), 3,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(327), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(153), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [1397] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_u2200,
    STATE(38), 1,
      sym__context,
    STATE(57), 1,
      sym_type_name,
    STATE(90), 1,
      sym_constructor,
    STATE(282), 1,
      sym__type_infix,
    STATE(288), 1,
      sym_type_infix,
    STATE(308), 1,
      sym__forall_kw,
    STATE(348), 1,
      sym__forall,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(380), 1,
      sym_constraint,
    STATE(389), 1,
      sym__context_constraints,
    STATE(470), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(162), 2,
      sym_type_apply,
      sym__btype,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(463), 3,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(323), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(153), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [1511] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym__varid,
    ACTIONS(199), 1,
      sym__integer_literal,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      sym__conid,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(210), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_AT,
    STATE(90), 1,
      sym_constructor,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(213), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(197), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(201), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(104), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(195), 6,
      sym__consym,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(193), 7,
      sym_comma,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
    STATE(42), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [1603] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym__varid,
    ACTIONS(199), 1,
      sym__integer_literal,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_AT,
    ACTIONS(221), 1,
      sym__conid,
    ACTIONS(224), 1,
      anon_sym_SQUOTE,
    STATE(90), 1,
      sym_constructor,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(213), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(197), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(201), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(104), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(219), 6,
      sym__consym,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(217), 7,
      sym_comma,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
    STATE(40), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [1695] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__varid,
    ACTIONS(237), 1,
      sym__integer_literal,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      sym__conid,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      anon_sym_AT,
    STATE(90), 1,
      sym_constructor,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(234), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(240), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(104), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(232), 6,
      sym__consym,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(230), 7,
      sym_comma,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
    STATE(42), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [1787] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_u2200,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(90), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(282), 1,
      sym__type_infix,
    STATE(308), 1,
      sym__forall_kw,
    STATE(350), 1,
      sym__forall,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(162), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(327), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(153), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [1894] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym__varid,
    ACTIONS(267), 1,
      sym__integer_literal,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      sym__conid,
    ACTIONS(279), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_AT,
    STATE(95), 1,
      sym_constructor,
    STATE(376), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(285), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(264), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(270), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(232), 4,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(137), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(121), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(230), 8,
      sym_comma,
      sym__consym,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(44), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [1985] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_u2200,
    ACTIONS(171), 1,
      sym__varid,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    STATE(51), 1,
      sym__context,
    STATE(58), 1,
      sym_type_name,
    STATE(95), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(285), 1,
      sym__type_infix,
    STATE(308), 1,
      sym__forall_kw,
    STATE(355), 1,
      sym__forall,
    STATE(376), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(173), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(177), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(137), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(326), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(170), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(62), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2092] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym__varid,
    ACTIONS(295), 1,
      sym__integer_literal,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      sym__conid,
    ACTIONS(304), 1,
      anon_sym_LBRACK,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(311), 1,
      anon_sym_AT,
    STATE(95), 1,
      sym_constructor,
    STATE(376), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(293), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(297), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(195), 4,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(137), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(121), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(193), 8,
      sym_comma,
      sym__consym,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(44), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [2183] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym__varid,
    ACTIONS(295), 1,
      sym__integer_literal,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_AT,
    ACTIONS(313), 1,
      sym__conid,
    ACTIONS(316), 1,
      anon_sym_SQUOTE,
    STATE(95), 1,
      sym_constructor,
    STATE(376), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(293), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(297), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(219), 4,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(137), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(121), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(217), 8,
      sym_comma,
      sym__consym,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(46), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [2274] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym__varid,
    ACTIONS(329), 1,
      sym__integer_literal,
    ACTIONS(335), 1,
      anon_sym_u21d2,
    ACTIONS(337), 1,
      anon_sym_EQ_GT,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 1,
      sym__conid,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_SQUOTE,
    STATE(235), 1,
      sym_constructor,
    STATE(364), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(326), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(332), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(257), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(227), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(322), 6,
      sym_comma,
      anon_sym_u2192,
      anon_sym_u2237,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
    ACTIONS(324), 6,
      sym__consym,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_AT,
      anon_sym_PERCENT,
    STATE(71), 11,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      aux_sym_constraint_repeat1,
  [2367] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_u2200,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(90), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(282), 1,
      sym__type_infix,
    STATE(308), 1,
      sym__forall_kw,
    STATE(350), 1,
      sym__forall,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(162), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(323), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(153), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2474] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_u2200,
    ACTIONS(181), 1,
      sym_implicit_parid,
    ACTIONS(354), 1,
      sym__varid,
    ACTIONS(358), 1,
      sym__integer_literal,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      sym__conid,
    ACTIONS(366), 1,
      anon_sym_LBRACK,
    ACTIONS(368), 1,
      anon_sym_SQUOTE,
    STATE(60), 1,
      sym__context,
    STATE(67), 1,
      sym_type_name,
    STATE(185), 1,
      sym_constructor,
    STATE(308), 1,
      sym__forall_kw,
    STATE(342), 1,
      sym__forall,
    STATE(368), 1,
      aux_sym__qualifying_module,
    STATE(379), 1,
      sym_type_infix,
    STATE(380), 1,
      sym_constraint,
    STATE(389), 1,
      sym__context_constraints,
    STATE(470), 1,
      sym__modid,
    ACTIONS(370), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(265), 2,
      sym_type_apply,
      sym__btype,
    ACTIONS(356), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(360), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(202), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(464), 4,
      sym_implicit_param,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(258), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(70), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2583] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_u2200,
    ACTIONS(171), 1,
      sym__varid,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    STATE(51), 1,
      sym__context,
    STATE(58), 1,
      sym_type_name,
    STATE(95), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(285), 1,
      sym__type_infix,
    STATE(308), 1,
      sym__forall_kw,
    STATE(355), 1,
      sym__forall,
    STATE(376), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(173), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(177), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(137), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(327), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(170), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(62), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2690] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_u2200,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(90), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(282), 1,
      sym__type_infix,
    STATE(308), 1,
      sym__forall_kw,
    STATE(350), 1,
      sym__forall,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(162), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(326), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(153), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2797] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_u2200,
    ACTIONS(171), 1,
      sym__varid,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    STATE(51), 1,
      sym__context,
    STATE(58), 1,
      sym_type_name,
    STATE(95), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(285), 1,
      sym__type_infix,
    STATE(308), 1,
      sym__forall_kw,
    STATE(355), 1,
      sym__forall,
    STATE(376), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(173), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(177), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(137), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(323), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(170), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(62), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2904] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym__varid,
    ACTIONS(378), 1,
      sym__integer_literal,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      sym__conid,
    ACTIONS(390), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(399), 1,
      anon_sym_AT,
    STATE(120), 1,
      sym_constructor,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(396), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(375), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(381), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(152), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(232), 5,
      sym__consym,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    STATE(153), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(230), 6,
      sym_comma,
      anon_sym_u2192,
      anon_sym_u2237,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
    STATE(54), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [2994] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(402), 1,
      sym__varid,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      sym__conid,
    ACTIONS(409), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_AT,
    STATE(120), 1,
      sym_constructor,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(152), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(195), 5,
      sym__consym,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    STATE(153), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(193), 6,
      sym_comma,
      anon_sym_u2192,
      anon_sym_u2237,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
    STATE(54), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [3084] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(402), 1,
      sym__varid,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_AT,
    ACTIONS(414), 1,
      sym__conid,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    STATE(120), 1,
      sym_constructor,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(152), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(219), 5,
      sym__consym,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    STATE(153), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(217), 6,
      sym_comma,
      anon_sym_u2192,
      anon_sym_u2237,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
    STATE(55), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [3174] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym__varid,
    ACTIONS(329), 1,
      sym__integer_literal,
    ACTIONS(335), 1,
      anon_sym_u21d2,
    ACTIONS(337), 1,
      anon_sym_EQ_GT,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 1,
      sym__conid,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_SQUOTE,
    STATE(235), 1,
      sym_constructor,
    STATE(364), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(420), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(322), 3,
      anon_sym_u2192,
      anon_sym_u2237,
      anon_sym_BQUOTE,
    ACTIONS(326), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(332), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(257), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(227), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(324), 6,
      sym__consym,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_AT,
      anon_sym_PERCENT,
    STATE(71), 11,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      aux_sym_constraint_repeat1,
  [3268] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym__varid,
    ACTIONS(329), 1,
      sym__integer_literal,
    ACTIONS(335), 1,
      anon_sym_u21d2,
    ACTIONS(337), 1,
      anon_sym_EQ_GT,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 1,
      sym__conid,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_SQUOTE,
    STATE(235), 1,
      sym_constructor,
    STATE(364), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(326), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(332), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(324), 4,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_PERCENT,
    STATE(257), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(227), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(322), 7,
      sym_comma,
      sym__consym,
      anon_sym_u2192,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(71), 11,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      aux_sym_constraint_repeat1,
  [3360] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      sym__varid,
    ACTIONS(429), 1,
      sym__integer_literal,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(438), 1,
      sym__conid,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(444), 1,
      anon_sym_SQUOTE,
    ACTIONS(450), 1,
      anon_sym_AT,
    STATE(151), 1,
      sym_constructor,
    STATE(373), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(232), 3,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    ACTIONS(426), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(432), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(170), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(230), 7,
      sym_comma,
      sym__consym,
      anon_sym_u2192,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(59), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [3449] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_u2200,
    ACTIONS(354), 1,
      sym__varid,
    ACTIONS(358), 1,
      sym__integer_literal,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      sym__conid,
    ACTIONS(366), 1,
      anon_sym_LBRACK,
    ACTIONS(368), 1,
      anon_sym_SQUOTE,
    STATE(60), 1,
      sym__context,
    STATE(67), 1,
      sym_type_name,
    STATE(185), 1,
      sym_constructor,
    STATE(308), 1,
      sym__forall_kw,
    STATE(342), 1,
      sym__forall,
    STATE(368), 1,
      aux_sym__qualifying_module,
    STATE(379), 1,
      sym_type_infix,
    STATE(380), 1,
      sym_constraint,
    STATE(389), 1,
      sym__context_constraints,
    STATE(470), 1,
      sym__modid,
    ACTIONS(370), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(265), 2,
      sym_type_apply,
      sym__btype,
    ACTIONS(356), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(360), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(472), 3,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(202), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(258), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(70), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [3554] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_u2200,
    ACTIONS(354), 1,
      sym__varid,
    ACTIONS(358), 1,
      sym__integer_literal,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      sym__conid,
    ACTIONS(366), 1,
      anon_sym_LBRACK,
    ACTIONS(368), 1,
      anon_sym_SQUOTE,
    STATE(60), 1,
      sym__context,
    STATE(67), 1,
      sym_type_name,
    STATE(185), 1,
      sym_constructor,
    STATE(308), 1,
      sym__forall_kw,
    STATE(342), 1,
      sym__forall,
    STATE(368), 1,
      aux_sym__qualifying_module,
    STATE(379), 1,
      sym_type_infix,
    STATE(380), 1,
      sym_constraint,
    STATE(389), 1,
      sym__context_constraints,
    STATE(470), 1,
      sym__modid,
    ACTIONS(370), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(265), 2,
      sym_type_apply,
      sym__btype,
    ACTIONS(356), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(360), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(463), 3,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(202), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(258), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(70), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [3659] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(453), 1,
      sym__varid,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(457), 1,
      sym__conid,
    ACTIONS(460), 1,
      anon_sym_SQUOTE,
    ACTIONS(463), 1,
      anon_sym_AT,
    STATE(151), 1,
      sym_constructor,
    STATE(373), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(173), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(177), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(219), 3,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(161), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(170), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(217), 7,
      sym_comma,
      sym__consym,
      anon_sym_u2192,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(63), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [3748] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(453), 1,
      sym__varid,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_AT,
    ACTIONS(465), 1,
      sym__conid,
    ACTIONS(468), 1,
      anon_sym_SQUOTE,
    STATE(151), 1,
      sym_constructor,
    STATE(373), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(173), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(177), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(195), 3,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(161), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(170), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(193), 7,
      sym_comma,
      sym__consym,
      anon_sym_u2192,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(59), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [3837] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym__varid,
    ACTIONS(475), 1,
      sym__integer_literal,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym__conid,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(486), 1,
      anon_sym_SQUOTE,
    ACTIONS(491), 1,
      anon_sym_AT,
    STATE(185), 1,
      sym_constructor,
    STATE(368), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(219), 2,
      sym__tyconsym,
      anon_sym_EQ_GT,
    ACTIONS(489), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(473), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(477), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(202), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(217), 5,
      sym_comma,
      sym__consym,
      anon_sym_u21d2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
    STATE(206), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(65), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [3923] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym__varid,
    ACTIONS(475), 1,
      sym__integer_literal,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 1,
      anon_sym_AT,
    ACTIONS(493), 1,
      sym__conid,
    ACTIONS(496), 1,
      anon_sym_SQUOTE,
    STATE(185), 1,
      sym_constructor,
    STATE(368), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(195), 2,
      sym__tyconsym,
      anon_sym_EQ_GT,
    ACTIONS(489), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(473), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(477), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(202), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(193), 5,
      sym_comma,
      sym__consym,
      anon_sym_u21d2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
    STATE(206), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(66), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [4009] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym__varid,
    ACTIONS(505), 1,
      sym__integer_literal,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      sym__conid,
    ACTIONS(517), 1,
      anon_sym_LBRACK,
    ACTIONS(520), 1,
      anon_sym_SQUOTE,
    ACTIONS(526), 1,
      anon_sym_AT,
    STATE(185), 1,
      sym_constructor,
    STATE(368), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(232), 2,
      sym__tyconsym,
      anon_sym_EQ_GT,
    ACTIONS(523), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(502), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(508), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(202), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(230), 5,
      sym_comma,
      sym__consym,
      anon_sym_u21d2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
    STATE(206), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(66), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [4095] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym__varid,
    ACTIONS(329), 1,
      sym__integer_literal,
    ACTIONS(337), 1,
      anon_sym_EQ_GT,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 1,
      sym__conid,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 1,
      anon_sym_SQUOTE,
    STATE(235), 1,
      sym_constructor,
    STATE(364), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(322), 2,
      sym__consym,
      anon_sym_BQUOTE,
    ACTIONS(324), 2,
      sym__tyconsym,
      anon_sym_AT,
    ACTIONS(351), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(326), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(332), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(335), 3,
      sym_comma,
      anon_sym_u21d2,
      anon_sym_RPAREN,
    STATE(257), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(227), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(71), 11,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      aux_sym_constraint_repeat1,
  [4182] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym__tyconsym,
    ACTIONS(529), 1,
      sym__varid,
    ACTIONS(535), 1,
      sym__integer_literal,
    ACTIONS(541), 1,
      anon_sym_LPAREN,
    ACTIONS(544), 1,
      sym__conid,
    ACTIONS(547), 1,
      anon_sym_LBRACK,
    ACTIONS(550), 1,
      anon_sym_SQUOTE,
    ACTIONS(556), 1,
      anon_sym_AT,
    STATE(238), 1,
      sym_constructor,
    STATE(382), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(230), 2,
      sym__consym,
      anon_sym_BQUOTE,
    ACTIONS(553), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(532), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(538), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(262), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(258), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(68), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [4264] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__tyconsym,
    ACTIONS(358), 1,
      sym__integer_literal,
    ACTIONS(366), 1,
      anon_sym_LBRACK,
    ACTIONS(559), 1,
      sym__varid,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(563), 1,
      sym__conid,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    ACTIONS(569), 1,
      anon_sym_AT,
    STATE(238), 1,
      sym_constructor,
    STATE(382), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(193), 2,
      sym__consym,
      anon_sym_BQUOTE,
    ACTIONS(370), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(356), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(360), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(262), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(258), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(68), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [4346] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym__tyconsym,
    ACTIONS(358), 1,
      sym__integer_literal,
    ACTIONS(366), 1,
      anon_sym_LBRACK,
    ACTIONS(559), 1,
      sym__varid,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(569), 1,
      anon_sym_AT,
    ACTIONS(571), 1,
      sym__conid,
    ACTIONS(574), 1,
      anon_sym_SQUOTE,
    STATE(238), 1,
      sym_constructor,
    STATE(382), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(217), 2,
      sym__consym,
      anon_sym_BQUOTE,
    ACTIONS(370), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(356), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(360), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(262), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(258), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(69), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [4428] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym__varid,
    ACTIONS(583), 1,
      sym__integer_literal,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(593), 1,
      anon_sym_SQUOTE,
    STATE(235), 1,
      sym_constructor,
    STATE(364), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(595), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(581), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(585), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(579), 4,
      sym_comma,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
    STATE(257), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(227), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(72), 11,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      aux_sym_constraint_repeat1,
  [4505] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      sym__varid,
    ACTIONS(605), 1,
      sym__integer_literal,
    ACTIONS(611), 1,
      anon_sym_LPAREN,
    ACTIONS(614), 1,
      sym__conid,
    ACTIONS(617), 1,
      anon_sym_LBRACK,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    STATE(235), 1,
      sym_constructor,
    STATE(364), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(623), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(602), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(608), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(600), 4,
      sym_comma,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
    STATE(257), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(227), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(72), 11,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      aux_sym_constraint_repeat1,
  [4582] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym__conid,
    ACTIONS(471), 1,
      sym__varid,
    ACTIONS(475), 1,
      sym__integer_literal,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(626), 1,
      anon_sym_SQUOTE,
    STATE(185), 1,
      sym_constructor,
    STATE(368), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(489), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(217), 2,
      sym_type_apply,
      sym__btype,
    STATE(283), 2,
      sym_type_infix,
      sym__type_infix,
    ACTIONS(473), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(477), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(202), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(206), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(64), 10,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [4660] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(291), 1,
      sym__varid,
    ACTIONS(295), 1,
      sym__integer_literal,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      anon_sym_LBRACK,
    ACTIONS(628), 1,
      anon_sym_SQUOTE,
    STATE(95), 1,
      sym_constructor,
    STATE(376), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(154), 2,
      sym_type_apply,
      sym__btype,
    STATE(283), 2,
      sym_type_infix,
      sym__type_infix,
    ACTIONS(293), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(297), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(137), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(121), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(47), 10,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [4738] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(191), 1,
      sym__varid,
    ACTIONS(199), 1,
      sym__integer_literal,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    STATE(90), 1,
      sym_constructor,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(213), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    STATE(131), 2,
      sym_type_apply,
      sym__btype,
    STATE(283), 2,
      sym_type_infix,
      sym__type_infix,
    ACTIONS(197), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(201), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(104), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(41), 10,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [4816] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__varid,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(634), 1,
      sym__integer_literal,
    ACTIONS(638), 1,
      anon_sym_LPAREN,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
    STATE(357), 1,
      aux_sym__qualifying_module,
    STATE(358), 1,
      sym_constructor,
    STATE(470), 1,
      sym__modid,
    ACTIONS(644), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(632), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(636), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(414), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(440), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(332), 11,
      sym__persistent_type,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [4887] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__varid,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(634), 1,
      sym__integer_literal,
    ACTIONS(638), 1,
      anon_sym_LPAREN,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
    STATE(357), 1,
      aux_sym__qualifying_module,
    STATE(358), 1,
      sym_constructor,
    STATE(470), 1,
      sym__modid,
    ACTIONS(644), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(632), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(636), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(414), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(440), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(303), 11,
      sym__persistent_type,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [4958] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__varid,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(634), 1,
      sym__integer_literal,
    ACTIONS(638), 1,
      anon_sym_LPAREN,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
    STATE(357), 1,
      aux_sym__qualifying_module,
    STATE(358), 1,
      sym_constructor,
    STATE(470), 1,
      sym__modid,
    ACTIONS(644), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(632), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(636), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(414), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(440), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(313), 11,
      sym__persistent_type,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [5029] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(453), 1,
      sym__varid,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(646), 1,
      sym__conid,
    ACTIONS(648), 1,
      anon_sym_SQUOTE,
    STATE(151), 1,
      sym_constructor,
    STATE(373), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(173), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(177), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(170), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(164), 10,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [5099] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym__integer_literal,
    ACTIONS(366), 1,
      anon_sym_LBRACK,
    ACTIONS(559), 1,
      sym__varid,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(650), 1,
      sym__conid,
    ACTIONS(652), 1,
      anon_sym_SQUOTE,
    STATE(238), 1,
      sym_constructor,
    STATE(382), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(370), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(356), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(360), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(262), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(258), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(264), 10,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [5169] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(291), 1,
      sym__varid,
    ACTIONS(295), 1,
      sym__integer_literal,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      anon_sym_LBRACK,
    ACTIONS(628), 1,
      anon_sym_SQUOTE,
    STATE(95), 1,
      sym_constructor,
    STATE(376), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(309), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(293), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(297), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(137), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(121), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(134), 10,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [5239] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym__conid,
    ACTIONS(471), 1,
      sym__varid,
    ACTIONS(475), 1,
      sym__integer_literal,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(626), 1,
      anon_sym_SQUOTE,
    STATE(185), 1,
      sym_constructor,
    STATE(368), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(489), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(473), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(477), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(202), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(206), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(207), 10,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [5309] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym__integer_literal,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(654), 1,
      sym__varid,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    ACTIONS(658), 1,
      anon_sym_SQUOTE,
    STATE(341), 1,
      sym_constructor,
    STATE(372), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(595), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(581), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(585), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(366), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(227), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(467), 10,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [5379] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(402), 1,
      sym__varid,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(660), 1,
      sym__conid,
    ACTIONS(662), 1,
      anon_sym_SQUOTE,
    STATE(120), 1,
      sym_constructor,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(152), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(153), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(140), 10,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [5449] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(191), 1,
      sym__varid,
    ACTIONS(199), 1,
      sym__integer_literal,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    STATE(90), 1,
      sym_constructor,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(213), 2,
      anon_sym_STAR,
      anon_sym_u2605,
    ACTIONS(197), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(201), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(104), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(100), 10,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [5519] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_u2237,
    ACTIONS(671), 1,
      anon_sym_COLON_COLON,
    STATE(36), 1,
      sym__colon2,
    STATE(468), 1,
      sym__type_annotation,
    ACTIONS(666), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(664), 17,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [5564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(674), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [5603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(682), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(680), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [5642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 10,
      anon_sym_DOT,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(684), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [5679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(690), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(688), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [5718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 8,
      anon_sym_DOT,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(684), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [5754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(692), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [5790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(674), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [5828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(696), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [5864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(690), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(688), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [5902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(682), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(680), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [5940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(700), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [5976] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_u21d2,
    ACTIONS(710), 1,
      anon_sym_EQ_GT,
    ACTIONS(706), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(704), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [6016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(712), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [6052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(716), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [6088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(720), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [6124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(724), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [6160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(728), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [6196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(732), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [6232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(736), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [6268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(664), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [6304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(740), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [6340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(704), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [6376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(744), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [6412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(748), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [6448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(752), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [6484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(756), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [6520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(760), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [6556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(704), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [6591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(696), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [6626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(712), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [6661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(748), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [6696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(744), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [6731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 9,
      anon_sym_DOT,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(684), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [6766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(690), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(688), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [6803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(732), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [6838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(700), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [6873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(692), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [6908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(724), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [6943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(752), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [6978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(756), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [7013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(760), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [7048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(736), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [7083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(728), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [7118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(740), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [7153] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(766), 1,
      sym__consym,
    ACTIONS(768), 1,
      sym__tyconsym,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(774), 1,
      anon_sym_SQUOTE,
    STATE(299), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    STATE(475), 1,
      sym_constructor,
    ACTIONS(770), 4,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(764), 6,
      sym_comma,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_u2237,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(75), 9,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
      sym__qtyconops,
      sym__promoted_tyconop,
      sym__qtyconop,
  [7206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(682), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(680), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [7243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(720), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [7278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(716), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [7313] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_u21d2,
    ACTIONS(710), 1,
      anon_sym_EQ_GT,
    ACTIONS(706), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(704), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [7352] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(674), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [7389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(664), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [7424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 7,
      anon_sym_DOT,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(684), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [7458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(748), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [7492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(716), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [7526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(692), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [7560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(724), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [7594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(704), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [7628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(700), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [7662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(696), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [7696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(720), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [7730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(728), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [7764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(740), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [7798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(674), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [7834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(744), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [7868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(690), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(688), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [7904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(664), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [7938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(732), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [7972] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(774), 1,
      anon_sym_SQUOTE,
    ACTIONS(776), 1,
      sym__tyconsym,
    STATE(299), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    STATE(475), 1,
      sym_constructor,
    ACTIONS(770), 3,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    ACTIONS(764), 6,
      sym_comma,
      anon_sym_u21d2,
      anon_sym_u2192,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(74), 9,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
      sym__qtyconops,
      sym__promoted_tyconop,
      sym__qtyconop,
  [8024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(736), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [8058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(760), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [8092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(756), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [8126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(752), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [8160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(682), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(680), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [8196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(712), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      anon_sym_u2237,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [8230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(664), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [8263] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(766), 1,
      sym__consym,
    ACTIONS(768), 1,
      sym__tyconsym,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(774), 1,
      anon_sym_SQUOTE,
    STATE(299), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    STATE(475), 1,
      sym_constructor,
    ACTIONS(770), 3,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(764), 5,
      sym_comma,
      anon_sym_u2192,
      anon_sym_u2237,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(75), 9,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
      sym__qtyconops,
      sym__promoted_tyconop,
      sym__qtyconop,
  [8314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(744), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [8347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(716), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [8380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(720), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [8413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(696), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [8446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(752), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [8479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(700), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [8512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(740), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [8545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(732), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [8578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(692), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [8611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(712), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [8644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(728), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [8677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(748), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [8710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(724), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [8743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(760), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [8776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(756), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [8809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(736), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [8842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(704), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u2192,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [8875] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(774), 1,
      anon_sym_SQUOTE,
    ACTIONS(776), 1,
      sym__tyconsym,
    STATE(299), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    STATE(475), 1,
      sym_constructor,
    ACTIONS(770), 2,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    ACTIONS(764), 5,
      sym_comma,
      anon_sym_u2192,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(74), 9,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
      sym__qtyconops,
      sym__promoted_tyconop,
      sym__qtyconop,
  [8925] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(295), 1,
      sym__integer_literal,
    ACTIONS(304), 1,
      anon_sym_LBRACK,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_constructor,
    STATE(118), 1,
      sym_qualified_type,
    STATE(376), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(293), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(297), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(116), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(121), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [8976] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym__integer_literal,
    ACTIONS(364), 1,
      sym__conid,
    ACTIONS(366), 1,
      anon_sym_LBRACK,
    ACTIONS(780), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      sym_constructor,
    STATE(200), 1,
      sym_qualified_type,
    STATE(368), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(356), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(360), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(254), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(258), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9027] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(782), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_constructor,
    STATE(118), 1,
      sym_qualified_type,
    STATE(376), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(173), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(177), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(172), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(170), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 6,
      anon_sym_DOT,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(684), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [9109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(690), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(688), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [9142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(682), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(680), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [9175] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym__conid,
    ACTIONS(475), 1,
      sym__integer_literal,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(784), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      sym_constructor,
    STATE(200), 1,
      sym_qualified_type,
    STATE(368), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(473), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(477), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(201), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(206), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9226] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(674), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [9259] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(646), 1,
      sym__conid,
    ACTIONS(786), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym_constructor,
    STATE(163), 1,
      sym_qualified_type,
    STATE(373), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(173), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(177), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(172), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(170), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9310] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym__integer_literal,
    ACTIONS(366), 1,
      anon_sym_LBRACK,
    ACTIONS(650), 1,
      sym__conid,
    ACTIONS(788), 1,
      anon_sym_LPAREN,
    STATE(233), 1,
      sym_constructor,
    STATE(256), 1,
      sym_qualified_type,
    STATE(382), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(356), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(360), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(254), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(258), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9361] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(790), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_constructor,
    STATE(109), 1,
      sym_qualified_type,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(160), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(153), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9412] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(634), 1,
      sym__integer_literal,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    STATE(357), 1,
      aux_sym__qualifying_module,
    STATE(369), 1,
      sym_constructor,
    STATE(453), 1,
      sym_qualified_type,
    STATE(470), 1,
      sym__modid,
    ACTIONS(632), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(636), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(446), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(440), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9463] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(199), 1,
      sym__integer_literal,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(794), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_constructor,
    STATE(109), 1,
      sym_qualified_type,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(197), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(201), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(99), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(104), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9514] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym__integer_literal,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(796), 1,
      anon_sym_LPAREN,
    STATE(234), 1,
      sym_constructor,
    STATE(251), 1,
      sym_qualified_type,
    STATE(364), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(581), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(585), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(226), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(227), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9565] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(660), 1,
      sym__conid,
    ACTIONS(798), 1,
      anon_sym_LPAREN,
    STATE(132), 1,
      sym_constructor,
    STATE(150), 1,
      sym_qualified_type,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(160), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(153), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9616] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym__integer_literal,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    STATE(354), 1,
      sym_constructor,
    STATE(360), 1,
      sym_qualified_type,
    STATE(372), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    ACTIONS(581), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(585), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(226), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(227), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(700), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [9697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(728), 20,
      sym_comma,
      anon_sym_DOT,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_u2605,
  [9727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(720), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [9757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(744), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [9787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(712), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [9817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(664), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [9847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(748), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [9877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(696), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [9907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(728), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [9937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(732), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [9967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(716), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [9997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(692), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(724), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(704), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(752), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(684), 20,
      sym_comma,
      anon_sym_DOT,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(740), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(756), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(760), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(736), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10267] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(770), 1,
      anon_sym_EQ_GT,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(774), 1,
      anon_sym_SQUOTE,
    ACTIONS(802), 1,
      sym__tyconsym,
    STATE(299), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    STATE(475), 1,
      sym_constructor,
    ACTIONS(764), 3,
      sym_comma,
      anon_sym_u21d2,
      anon_sym_RPAREN,
    STATE(73), 9,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
      sym__qtyconops,
      sym__promoted_tyconop,
      sym__qtyconop,
  [10314] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym__varid,
    ACTIONS(806), 1,
      anon_sym_Id,
    ACTIONS(808), 1,
      anon_sym_Primary,
    ACTIONS(810), 1,
      sym__field_strictness_prefix,
    ACTIONS(812), 1,
      anon_sym_Foreign,
    ACTIONS(814), 1,
      anon_sym_deriving,
    ACTIONS(816), 1,
      sym__conid,
    ACTIONS(818), 1,
      sym__dedent,
    STATE(78), 2,
      sym__field_name,
      sym_variable,
    STATE(219), 2,
      sym__entity_line_definition,
      aux_sym_entity_body_repeat1,
    STATE(343), 2,
      sym__haskell_constraint_name,
      sym_constructor,
    STATE(521), 7,
      sym__entity_key,
      sym_surrogate_key,
      sym_natural_key,
      sym_field_definition,
      sym_unique_constraint,
      sym_foreign_constraint,
      sym_entity_deriving,
  [10363] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      sym__varid,
    ACTIONS(823), 1,
      anon_sym_Id,
    ACTIONS(826), 1,
      anon_sym_Primary,
    ACTIONS(829), 1,
      sym__field_strictness_prefix,
    ACTIONS(832), 1,
      anon_sym_Foreign,
    ACTIONS(835), 1,
      anon_sym_deriving,
    ACTIONS(838), 1,
      sym__conid,
    ACTIONS(841), 1,
      sym__dedent,
    STATE(78), 2,
      sym__field_name,
      sym_variable,
    STATE(219), 2,
      sym__entity_line_definition,
      aux_sym_entity_body_repeat1,
    STATE(343), 2,
      sym__haskell_constraint_name,
      sym_constructor,
    STATE(521), 7,
      sym__entity_key,
      sym_surrogate_key,
      sym_natural_key,
      sym_field_definition,
      sym_unique_constraint,
      sym_foreign_constraint,
      sym_entity_deriving,
  [10412] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym__varid,
    ACTIONS(806), 1,
      anon_sym_Id,
    ACTIONS(808), 1,
      anon_sym_Primary,
    ACTIONS(810), 1,
      sym__field_strictness_prefix,
    ACTIONS(812), 1,
      anon_sym_Foreign,
    ACTIONS(814), 1,
      anon_sym_deriving,
    ACTIONS(816), 1,
      sym__conid,
    STATE(520), 1,
      sym_entity_body,
    STATE(78), 2,
      sym__field_name,
      sym_variable,
    STATE(218), 2,
      sym__entity_line_definition,
      aux_sym_entity_body_repeat1,
    STATE(343), 2,
      sym__haskell_constraint_name,
      sym_constructor,
    STATE(521), 7,
      sym__entity_key,
      sym_surrogate_key,
      sym_natural_key,
      sym_field_definition,
      sym_unique_constraint,
      sym_foreign_constraint,
      sym_entity_deriving,
  [10461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(760), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(740), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(736), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(756), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(752), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(712), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(732), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(748), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10685] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_u21d2,
    ACTIONS(710), 1,
      anon_sym_EQ_GT,
    ACTIONS(706), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(704), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(724), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(692), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(704), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(682), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(680), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(682), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(680), 16,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(690), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(688), 16,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(678), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(674), 16,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(678), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(674), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_DOT,
    ACTIONS(690), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(688), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [10975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 5,
      anon_sym_DOT,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(684), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(700), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(696), 16,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(720), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(720), 16,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(728), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(740), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(736), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(760), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11210] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__varid,
    ACTIONS(9), 1,
      sym_is_sum_marker,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(845), 1,
      ts_builtin_sym_end,
    STATE(311), 1,
      sym__entity_header,
    STATE(357), 1,
      aux_sym__qualifying_module,
    STATE(358), 1,
      sym_constructor,
    STATE(470), 1,
      sym__modid,
    STATE(261), 2,
      sym_entity_definition,
      aux_sym_persistent_definitions_repeat1,
    STATE(294), 2,
      sym__entity_name,
      sym_type_name,
    STATE(414), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [11258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(756), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(696), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(744), 16,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(752), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(704), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(712), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(748), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(744), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(664), 16,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(732), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(692), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(724), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11570] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      ts_builtin_sym_end,
    ACTIONS(849), 1,
      sym__varid,
    ACTIONS(852), 1,
      sym_is_sum_marker,
    ACTIONS(855), 1,
      anon_sym_LPAREN,
    ACTIONS(858), 1,
      sym__conid,
    ACTIONS(861), 1,
      anon_sym_SQUOTE,
    STATE(311), 1,
      sym__entity_header,
    STATE(357), 1,
      aux_sym__qualifying_module,
    STATE(358), 1,
      sym_constructor,
    STATE(470), 1,
      sym__modid,
    STATE(261), 2,
      sym_entity_definition,
      aux_sym_persistent_definitions_repeat1,
    STATE(294), 2,
      sym__entity_name,
      sym_type_name,
    STATE(414), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [11618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(664), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(700), 16,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(716), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11696] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(774), 1,
      anon_sym_SQUOTE,
    ACTIONS(802), 1,
      sym__tyconsym,
    STATE(299), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    STATE(475), 1,
      sym_constructor,
    STATE(73), 9,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
      sym__qtyconops,
      sym__promoted_tyconop,
      sym__qtyconop,
  [11735] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(81), 1,
      sym__tyconsym,
    ACTIONS(83), 1,
      anon_sym_u2192,
    ACTIONS(85), 1,
      anon_sym_DASH_GT,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(654), 1,
      sym__varid,
    STATE(299), 1,
      aux_sym__qualifying_module,
    STATE(371), 1,
      sym_type_variable,
    STATE(470), 1,
      sym__modid,
    STATE(475), 1,
      sym_constructor,
    STATE(486), 1,
      sym__arrow,
    STATE(485), 6,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym_annotated_type_variable,
  [11780] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(91), 1,
      sym__tyconsym,
    ACTIONS(93), 1,
      anon_sym_u2192,
    ACTIONS(95), 1,
      anon_sym_DASH_GT,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(654), 1,
      sym__varid,
    STATE(299), 1,
      aux_sym__qualifying_module,
    STATE(371), 1,
      sym_type_variable,
    STATE(470), 1,
      sym__modid,
    STATE(475), 1,
      sym_constructor,
    STATE(477), 1,
      sym__arrow,
    STATE(516), 6,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym_annotated_type_variable,
  [11825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 4,
      sym__integer_literal,
      sym__varid,
      anon_sym_SQUOTE,
      anon_sym_forall,
    ACTIONS(866), 12,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_u2200,
      anon_sym_STAR,
      anon_sym_u2605,
  [11849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 4,
      sym__integer_literal,
      sym__varid,
      anon_sym_SQUOTE,
      anon_sym_forall,
    ACTIONS(870), 12,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_u2200,
      anon_sym_STAR,
      anon_sym_u2605,
  [11873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(872), 13,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(876), 13,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(880), 13,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(884), 12,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [11964] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(888), 1,
      sym__tyconsym,
    STATE(299), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    STATE(475), 1,
      sym_constructor,
    STATE(273), 7,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
      sym__qtyconops,
  [11998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(890), 12,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [12020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(894), 12,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [12042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(898), 12,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_u2605,
  [12064] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__varid,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    STATE(357), 1,
      aux_sym__qualifying_module,
    STATE(358), 1,
      sym_constructor,
    STATE(470), 1,
      sym__modid,
    STATE(298), 2,
      sym__entity_name,
      sym_type_name,
    STATE(414), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [12099] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym__varid,
    ACTIONS(902), 1,
      anon_sym_LPAREN,
    ACTIONS(904), 1,
      sym__conid,
    ACTIONS(906), 1,
      anon_sym_SQUOTE,
    STATE(341), 1,
      sym_constructor,
    STATE(367), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    STATE(454), 2,
      sym__entity_name,
      sym_type_name,
    STATE(366), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [12134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 2,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
    ACTIONS(764), 9,
      sym_comma,
      anon_sym_u2192,
      anon_sym_DASH_GT,
      anon_sym_u2237,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
  [12153] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(153), 1,
      sym__tyconsym,
    ACTIONS(589), 1,
      sym__conid,
    STATE(299), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    STATE(475), 1,
      sym_constructor,
    STATE(474), 5,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
  [12182] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_PERCENT,
    STATE(403), 1,
      sym_modifier,
    ACTIONS(912), 2,
      anon_sym_u2192,
      anon_sym_DASH_GT,
    STATE(52), 2,
      sym__arrow,
      sym__fun_arrow,
    ACTIONS(910), 5,
      sym_comma,
      anon_sym_u2237,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [12207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 11,
      sym_comma,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      anon_sym_u2192,
      anon_sym_DASH_GT,
      anon_sym_u2237,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
  [12224] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(141), 1,
      sym__tyconsym,
    ACTIONS(589), 1,
      sym__conid,
    STATE(299), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    STATE(475), 1,
      sym_constructor,
    STATE(484), 5,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
  [12253] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_PERCENT,
    STATE(403), 1,
      sym_modifier,
    ACTIONS(918), 2,
      anon_sym_u2192,
      anon_sym_DASH_GT,
    STATE(45), 2,
      sym__arrow,
      sym__fun_arrow,
    ACTIONS(910), 4,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [12277] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym__varid,
    ACTIONS(925), 1,
      anon_sym_LPAREN,
    ACTIONS(928), 1,
      anon_sym_LBRACE,
    ACTIONS(923), 3,
      anon_sym_DOT,
      anon_sym_u2192,
      anon_sym_DASH_GT,
    STATE(286), 4,
      sym_type_variable,
      sym_inferred_type_variable,
      sym__quantifier,
      aux_sym__forall_repeat1,
  [12301] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym__varid,
    ACTIONS(933), 1,
      anon_sym_LPAREN,
    ACTIONS(935), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 3,
      anon_sym_DOT,
      anon_sym_u2192,
      anon_sym_DASH_GT,
    STATE(286), 4,
      sym_type_variable,
      sym_inferred_type_variable,
      sym__quantifier,
      aux_sym__forall_repeat1,
  [12325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 2,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
    ACTIONS(937), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(764), 5,
      anon_sym_u2192,
      anon_sym_DASH_GT,
      anon_sym_u2237,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
  [12344] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 1,
      sym__colon2,
    STATE(428), 1,
      sym__type_annotation,
    STATE(431), 1,
      sym_kind,
    ACTIONS(942), 2,
      anon_sym_u2237,
      anon_sym_COLON_COLON,
    ACTIONS(940), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [12366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 2,
      sym__dedent,
      sym__field_strictness_prefix,
    ACTIONS(944), 6,
      anon_sym_Id,
      anon_sym_Primary,
      anon_sym_Foreign,
      anon_sym_deriving,
      sym__varid,
      sym__conid,
  [12382] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      sym__varid,
    ACTIONS(951), 1,
      anon_sym_sql,
    STATE(291), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(347), 2,
      sym__field_name,
      sym_variable,
    ACTIONS(953), 3,
      sym__newline,
      sym_attribute_exclamation_mark,
      anon_sym_References,
  [12404] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      sym__varid,
    ACTIONS(957), 1,
      anon_sym_sql,
    STATE(291), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(347), 2,
      sym__field_name,
      sym_variable,
    ACTIONS(959), 3,
      sym__newline,
      sym_attribute_exclamation_mark,
      anon_sym_References,
  [12426] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(964), 1,
      sym_attribute_name,
    ACTIONS(967), 1,
      sym__newline,
    STATE(293), 1,
      aux_sym_field_definition_repeat1,
    STATE(416), 3,
      sym__field_attribute,
      sym__attribute,
      sym_attribute_key_value,
  [12447] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(971), 1,
      sym_attribute_name,
    ACTIONS(973), 1,
      sym__newline,
    STATE(314), 1,
      aux_sym__entity_header_repeat1,
    STATE(445), 3,
      sym__entity_attribute,
      sym__attribute,
      sym_attribute_key_value,
  [12468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
    ACTIONS(728), 5,
      anon_sym_u2192,
      anon_sym_DASH_GT,
      anon_sym_u2237,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
  [12483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12496] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(971), 1,
      sym_attribute_name,
    ACTIONS(977), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym__entity_header_repeat1,
    STATE(445), 3,
      sym__entity_attribute,
      sym__attribute,
      sym_attribute_key_value,
  [12517] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(971), 1,
      sym_attribute_name,
    ACTIONS(979), 1,
      sym__newline,
    STATE(297), 1,
      aux_sym__entity_header_repeat1,
    STATE(445), 3,
      sym__entity_attribute,
      sym__attribute,
      sym_attribute_key_value,
  [12538] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(981), 1,
      sym__tyconsym,
    STATE(271), 1,
      sym_constructor_operator,
    STATE(318), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    STATE(475), 1,
      sym_constructor,
  [12563] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym_attribute_name,
    ACTIONS(983), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(985), 1,
      sym__newline,
    STATE(293), 1,
      aux_sym_field_definition_repeat1,
    STATE(416), 3,
      sym__field_attribute,
      sym__attribute,
      sym_attribute_key_value,
  [12584] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      sym__conid,
    ACTIONS(990), 1,
      sym__newline,
    STATE(301), 1,
      aux_sym_entity_deriving_repeat1,
    STATE(377), 1,
      aux_sym__qualifying_module,
    STATE(394), 1,
      sym_constructor,
    STATE(466), 1,
      sym_qualified_type,
    STATE(470), 1,
      sym__modid,
  [12609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12622] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym_attribute_name,
    ACTIONS(983), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(994), 1,
      sym__newline,
    STATE(305), 1,
      aux_sym_field_definition_repeat1,
    STATE(416), 3,
      sym__field_attribute,
      sym__attribute,
      sym_attribute_key_value,
  [12643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12656] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym_attribute_name,
    ACTIONS(983), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(998), 1,
      sym__newline,
    STATE(293), 1,
      aux_sym_field_definition_repeat1,
    STATE(416), 3,
      sym__field_attribute,
      sym__attribute,
      sym_attribute_key_value,
  [12677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12690] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_sql,
    ACTIONS(1004), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1006), 1,
      anon_sym_References,
    ACTIONS(1008), 1,
      sym__newline,
    STATE(321), 1,
      sym__attribute_unambiguous,
    STATE(407), 1,
      sym__attribute_sql,
    STATE(503), 1,
      sym__list_of_attributes_unambiguous_start,
  [12715] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym__varid,
    ACTIONS(933), 1,
      anon_sym_LPAREN,
    ACTIONS(935), 1,
      anon_sym_LBRACE,
    STATE(287), 4,
      sym_type_variable,
      sym_inferred_type_variable,
      sym__quantifier,
      aux_sym__forall_repeat1,
  [12734] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_sql,
    ACTIONS(1004), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1010), 1,
      anon_sym_References,
    ACTIONS(1012), 1,
      sym__newline,
    STATE(321), 1,
      sym__attribute_unambiguous,
    STATE(407), 1,
      sym__attribute_sql,
    STATE(504), 1,
      sym__list_of_attributes_unambiguous_start,
  [12759] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1017), 1,
      sym_attribute_name,
    ACTIONS(1020), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym__entity_header_repeat1,
    STATE(445), 3,
      sym__entity_attribute,
      sym__attribute,
      sym_attribute_key_value,
  [12780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      sym__indent,
    ACTIONS(1022), 6,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12795] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      sym__conid,
    ACTIONS(1028), 1,
      sym__newline,
    STATE(301), 1,
      aux_sym_entity_deriving_repeat1,
    STATE(377), 1,
      aux_sym__qualifying_module,
    STATE(394), 1,
      sym_constructor,
    STATE(466), 1,
      sym_qualified_type,
    STATE(470), 1,
      sym__modid,
  [12820] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym_attribute_name,
    ACTIONS(983), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1030), 1,
      sym__newline,
    STATE(300), 1,
      aux_sym_field_definition_repeat1,
    STATE(416), 3,
      sym__field_attribute,
      sym__attribute,
      sym_attribute_key_value,
  [12841] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(971), 1,
      sym_attribute_name,
    ACTIONS(1032), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym__entity_header_repeat1,
    STATE(445), 3,
      sym__entity_attribute,
      sym__attribute,
      sym_attribute_key_value,
  [12862] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(981), 1,
      sym__tyconsym,
    STATE(87), 1,
      sym_constructor,
    STATE(271), 1,
      sym_constructor_operator,
    STATE(318), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
  [12887] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_sql,
    ACTIONS(1004), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1034), 1,
      sym__newline,
    STATE(321), 1,
      sym__attribute_unambiguous,
    STATE(407), 1,
      sym__attribute_sql,
    STATE(495), 1,
      sym__list_of_attributes_unambiguous_start,
  [12909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 6,
      sym_comma,
      anon_sym_u2237,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [12921] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      sym__consym,
    ACTIONS(1040), 1,
      sym__tyconsym,
    ACTIONS(1042), 1,
      sym__conid,
    STATE(318), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    STATE(475), 1,
      sym_constructor,
  [12943] = 3,
    ACTIONS(1045), 1,
      sym_comment,
    STATE(387), 1,
      sym__attribute_key_value_value,
    ACTIONS(1047), 5,
      aux_sym__attribute_key_value_value_token1,
      aux_sym__attribute_key_value_value_token2,
      aux_sym__attribute_key_value_value_token3,
      sym_char,
      sym_string,
  [12957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 6,
      sym_comma,
      anon_sym_u2237,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [12969] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym_attribute_name,
    ACTIONS(1051), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1053), 1,
      sym__newline,
    STATE(338), 1,
      aux_sym_surrogate_key_repeat1,
    STATE(405), 2,
      sym__attribute,
      sym_attribute_key_value,
  [12989] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_sql,
    ACTIONS(1004), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1055), 1,
      sym__newline,
    STATE(321), 1,
      sym__attribute_unambiguous,
    STATE(407), 1,
      sym__attribute_sql,
    STATE(473), 1,
      sym__list_of_attributes_unambiguous_start,
  [13011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 6,
      sym_comma,
      anon_sym_u2237,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 6,
      anon_sym_DOT,
      anon_sym_u2192,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [13035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 6,
      anon_sym_DOT,
      anon_sym_u2192,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [13047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 6,
      sym_comma,
      anon_sym_u2237,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 6,
      sym_comma,
      anon_sym_u2237,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13071] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1070), 1,
      sym_attribute_name,
    ACTIONS(1073), 1,
      sym__newline,
    STATE(328), 1,
      aux_sym_surrogate_key_repeat1,
    STATE(405), 2,
      sym__attribute,
      sym_attribute_key_value,
  [13091] = 3,
    ACTIONS(1045), 1,
      sym_comment,
    STATE(406), 1,
      sym__attribute_key_value_value,
    ACTIONS(1075), 5,
      aux_sym__attribute_key_value_value_token1,
      aux_sym__attribute_key_value_value_token2,
      aux_sym__attribute_key_value_value_token3,
      sym_char,
      sym_string,
  [13105] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(1077), 1,
      anon_sym_LPAREN,
    STATE(357), 1,
      aux_sym__qualifying_module,
    STATE(369), 1,
      sym_constructor,
    STATE(453), 1,
      sym_qualified_type,
    STATE(470), 1,
      sym__modid,
  [13127] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym_attribute_name,
    ACTIONS(1051), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1079), 1,
      sym__newline,
    STATE(328), 1,
      aux_sym_surrogate_key_repeat1,
    STATE(405), 2,
      sym__attribute,
      sym_attribute_key_value,
  [13147] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym_attribute_name,
    ACTIONS(1051), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1081), 1,
      sym__newline,
    STATE(331), 1,
      aux_sym_surrogate_key_repeat1,
    STATE(405), 2,
      sym__attribute,
      sym_attribute_key_value,
  [13167] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      sym__conid,
    STATE(312), 1,
      aux_sym_entity_deriving_repeat1,
    STATE(377), 1,
      aux_sym__qualifying_module,
    STATE(394), 1,
      sym_constructor,
    STATE(466), 1,
      sym_qualified_type,
    STATE(470), 1,
      sym__modid,
  [13189] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_sql,
    ACTIONS(1004), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1083), 1,
      sym__newline,
    STATE(321), 1,
      sym__attribute_unambiguous,
    STATE(407), 1,
      sym__attribute_sql,
    STATE(508), 1,
      sym__list_of_attributes_unambiguous_start,
  [13211] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym__conid,
    ACTIONS(1085), 1,
      anon_sym_LPAREN,
    STATE(354), 1,
      sym_constructor,
    STATE(360), 1,
      sym_qualified_type,
    STATE(367), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
  [13233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(678), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
    ACTIONS(674), 3,
      anon_sym_u2192,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
  [13249] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_sql,
    ACTIONS(1004), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1087), 1,
      sym__newline,
    STATE(321), 1,
      sym__attribute_unambiguous,
    STATE(407), 1,
      sym__attribute_sql,
    STATE(499), 1,
      sym__list_of_attributes_unambiguous_start,
  [13271] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym_attribute_name,
    ACTIONS(1051), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1089), 1,
      sym__newline,
    STATE(328), 1,
      aux_sym_surrogate_key_repeat1,
    STATE(405), 2,
      sym__attribute,
      sym_attribute_key_value,
  [13291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 6,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [13303] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      sym__varid,
    STATE(292), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(309), 1,
      sym__list_of_fields,
    STATE(347), 2,
      sym__field_name,
      sym_variable,
  [13320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(688), 2,
      anon_sym_u2192,
      anon_sym_DASH_GT,
    ACTIONS(690), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(61), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1095), 3,
      anon_sym_DOT,
      anon_sym_u2192,
      anon_sym_DASH_GT,
  [13348] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      sym__varid,
    STATE(292), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(316), 1,
      sym__list_of_fields,
    STATE(347), 2,
      sym__field_name,
      sym_variable,
  [13365] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      sym__varid,
    STATE(292), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(322), 1,
      sym__list_of_fields,
    STATE(347), 2,
      sym__field_name,
      sym_variable,
  [13382] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      sym__varid,
    STATE(292), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(334), 1,
      sym__list_of_fields,
    STATE(347), 2,
      sym__field_name,
      sym_variable,
  [13399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 2,
      anon_sym_sql,
      sym__varid,
    ACTIONS(898), 3,
      sym__newline,
      sym_attribute_exclamation_mark,
      anon_sym_References,
  [13412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 2,
      anon_sym_sql,
      sym__varid,
    ACTIONS(1099), 3,
      sym__newline,
      sym_attribute_exclamation_mark,
      anon_sym_References,
  [13425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(39), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1101), 3,
      anon_sym_DOT,
      anon_sym_u2192,
      anon_sym_DASH_GT,
  [13438] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 1,
      sym_comma,
    ACTIONS(1108), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym__context_constraints_repeat1,
    ACTIONS(1106), 2,
      anon_sym_u2237,
      anon_sym_COLON_COLON,
  [13455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(49), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1111), 3,
      anon_sym_DOT,
      anon_sym_u2192,
      anon_sym_DASH_GT,
  [13468] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__conid,
    STATE(372), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
    STATE(471), 1,
      sym_constructor,
    STATE(476), 1,
      sym_qualified_type,
  [13487] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      sym__varid,
    STATE(292), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(307), 1,
      sym__list_of_fields,
    STATE(347), 2,
      sym__field_name,
      sym_variable,
  [13504] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      sym__varid,
    STATE(292), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(337), 1,
      sym__list_of_fields,
    STATE(347), 2,
      sym__field_name,
      sym_variable,
  [13521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(680), 2,
      anon_sym_u2192,
      anon_sym_DASH_GT,
    ACTIONS(682), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(53), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1113), 3,
      anon_sym_DOT,
      anon_sym_u2192,
      anon_sym_DASH_GT,
  [13549] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym__colon2,
    STATE(468), 1,
      sym__type_annotation,
    ACTIONS(942), 2,
      anon_sym_u2237,
      anon_sym_COLON_COLON,
  [13566] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__conid,
    STATE(318), 1,
      aux_sym__qualifying_module,
    STATE(362), 1,
      sym_constructor,
    STATE(470), 1,
      sym__modid,
  [13582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym_attribute_name,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(688), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [13596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 1,
      sym__colon2,
    STATE(317), 1,
      sym__type_annotation,
    ACTIONS(942), 2,
      anon_sym_u2237,
      anon_sym_COLON_COLON,
  [13610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 2,
      anon_sym_u2192,
      anon_sym_DASH_GT,
    ACTIONS(746), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym_attribute_name,
    ACTIONS(684), 3,
      sym__newline,
      sym_attribute_exclamation_mark,
      anon_sym_DOT,
  [13634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym_attribute_name,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(674), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [13648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(1119), 2,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
  [13660] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__conid,
    STATE(236), 1,
      sym_constructor,
    STATE(318), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
  [13676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 2,
      anon_sym_u2192,
      anon_sym_DASH_GT,
    ACTIONS(722), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 2,
      anon_sym_u2192,
      anon_sym_DASH_GT,
    ACTIONS(666), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13700] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym__conid,
    STATE(318), 1,
      aux_sym__qualifying_module,
    STATE(336), 1,
      sym_constructor,
    STATE(470), 1,
      sym__modid,
  [13716] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym__conid,
    STATE(188), 1,
      sym_constructor,
    STATE(318), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
  [13732] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_attribute_name,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(680), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [13746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym__conid,
    STATE(87), 1,
      sym_constructor,
    STATE(318), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
  [13762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 1,
      sym__colon2,
    STATE(468), 1,
      sym__type_annotation,
    ACTIONS(942), 2,
      anon_sym_u2237,
      anon_sym_COLON_COLON,
  [13776] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__conid,
    STATE(318), 1,
      aux_sym__qualifying_module,
    STATE(336), 1,
      sym_constructor,
    STATE(470), 1,
      sym__modid,
  [13792] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym__conid,
    STATE(149), 1,
      sym_constructor,
    STATE(318), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
  [13808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 1,
      sym__colon2,
    STATE(317), 1,
      sym__type_annotation,
    ACTIONS(1121), 2,
      anon_sym_u2237,
      anon_sym_COLON_COLON,
  [13822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 2,
      anon_sym_u2192,
      anon_sym_DASH_GT,
    ACTIONS(698), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13834] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym__conid,
    STATE(93), 1,
      sym_constructor,
    STATE(318), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
  [13850] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      sym__conid,
    STATE(318), 1,
      aux_sym__qualifying_module,
    STATE(385), 1,
      sym_constructor,
    STATE(470), 1,
      sym__modid,
  [13866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_EQ,
    ACTIONS(1127), 1,
      sym_attribute_name,
    ACTIONS(1125), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [13880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 4,
      sym_comma,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
  [13890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(1131), 2,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
  [13902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 2,
      anon_sym_u2192,
      anon_sym_DASH_GT,
    ACTIONS(702), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13914] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym__conid,
    STATE(237), 1,
      sym_constructor,
    STATE(318), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
  [13930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      sym_comma,
    STATE(383), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(1136), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [13944] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      sym__conid,
    STATE(136), 1,
      sym_constructor,
    STATE(318), 1,
      aux_sym__qualifying_module,
    STATE(470), 1,
      sym__modid,
  [13960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(674), 2,
      sym__newline,
      sym__conid,
  [13971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym_attribute_name,
    ACTIONS(740), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [13982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      sym_attribute_name,
    ACTIONS(1138), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [13993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym_attribute_name,
    ACTIONS(700), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [14004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(269), 1,
      sym__carrow,
    ACTIONS(1142), 2,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
  [14015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym_attribute_name,
    ACTIONS(728), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [14026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      sym_cascade_action,
    ACTIONS(1147), 1,
      sym_sql_constraint_name,
    STATE(391), 1,
      aux_sym_foreign_constraint_repeat1,
  [14039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      sym__varid,
    STATE(77), 2,
      sym__field_name,
      sym_variable,
  [14050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1153), 1,
      anon_sym_RPAREN,
    STATE(432), 1,
      aux_sym_type_list_repeat1,
  [14063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(1155), 2,
      sym__newline,
      sym__conid,
  [14074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      sym_comma,
    ACTIONS(1160), 1,
      anon_sym_RPAREN,
    STATE(395), 1,
      aux_sym__context_constraints_repeat1,
  [14087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [14096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      sym_comma,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym__context_constraints_repeat1,
  [14109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1166), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      aux_sym_type_list_repeat1,
  [14122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      sym_comma,
    ACTIONS(1170), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      aux_sym_con_tuple_repeat1,
  [14135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1172), 1,
      anon_sym_RBRACK,
    STATE(434), 1,
      aux_sym_type_list_repeat1,
  [14148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym__varid,
    STATE(371), 1,
      sym_type_variable,
    STATE(482), 1,
      sym_annotated_type_variable,
  [14161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym__varid,
    STATE(356), 1,
      sym_type_variable,
    STATE(498), 1,
      sym_annotated_type_variable,
  [14174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(268), 1,
      sym__arrow,
    ACTIONS(1174), 2,
      anon_sym_u2192,
      anon_sym_DASH_GT,
  [14185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      sym_attribute_name,
    ACTIONS(704), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [14196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      sym_attribute_name,
    ACTIONS(1176), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [14207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      sym_attribute_name,
    ACTIONS(1180), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [14218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      sym_attribute_name,
    ACTIONS(1184), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [14229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1188), 1,
      anon_sym_RBRACK,
    STATE(398), 1,
      aux_sym_type_list_repeat1,
  [14242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_DOT,
    ACTIONS(686), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [14253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      sym_cascade_action,
    ACTIONS(1192), 1,
      sym_sql_constraint_name,
    STATE(391), 1,
      aux_sym_foreign_constraint_repeat1,
  [14266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      sym_comma,
    ACTIONS(1194), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      aux_sym_con_tuple_repeat1,
  [14279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1196), 1,
      anon_sym_RPAREN,
    STATE(432), 1,
      aux_sym_type_list_repeat1,
  [14292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1198), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      aux_sym_type_list_repeat1,
  [14305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      sym_attribute_name,
    ACTIONS(664), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [14316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1200), 1,
      anon_sym_RBRACK,
    STATE(413), 1,
      aux_sym_type_list_repeat1,
  [14329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      sym_attribute_name,
    ACTIONS(1202), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [14340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      sym_comma,
    ACTIONS(1206), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      aux_sym_con_tuple_repeat1,
  [14353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      sym_comma,
    ACTIONS(1208), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym__context_constraints_repeat1,
  [14366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1210), 1,
      anon_sym_RPAREN,
    STATE(432), 1,
      aux_sym_type_list_repeat1,
  [14379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      sym_comma,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
    STATE(395), 1,
      aux_sym__context_constraints_repeat1,
  [14392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym_attribute_name,
    ACTIONS(696), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [14403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym_attribute_name,
    ACTIONS(720), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [14414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym_attribute_name,
    ACTIONS(724), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [14425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1214), 1,
      anon_sym_RPAREN,
    STATE(432), 1,
      aux_sym_type_list_repeat1,
  [14438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      sym_comma,
    ACTIONS(1216), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      aux_sym_con_tuple_repeat1,
  [14451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1218), 1,
      anon_sym_RBRACK,
    STATE(429), 1,
      aux_sym_type_list_repeat1,
  [14464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1220), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      aux_sym_type_list_repeat1,
  [14477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [14486] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1224), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      aux_sym_type_list_repeat1,
  [14499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 3,
      sym__newline,
      anon_sym_DOT,
      sym__conid,
  [14508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [14517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1228), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_type_list_repeat1,
  [14530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1230), 1,
      sym_comma,
    ACTIONS(1233), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      aux_sym_con_tuple_repeat1,
  [14543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1235), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      aux_sym_type_list_repeat1,
  [14556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      sym__tyconsym,
    ACTIONS(1038), 2,
      sym__consym,
      sym__conid,
  [14567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_attribute_name,
    ACTIONS(692), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [14578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1237), 1,
      anon_sym_RBRACK,
    STATE(427), 1,
      aux_sym_type_list_repeat1,
  [14591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      sym_comma,
    ACTIONS(1239), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      aux_sym_con_tuple_repeat1,
  [14604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1241), 1,
      anon_sym_RPAREN,
    STATE(432), 1,
      aux_sym_type_list_repeat1,
  [14617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      sym_attribute_name,
    ACTIONS(732), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [14628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      sym_attribute_name,
    ACTIONS(748), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [14639] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
    STATE(432), 1,
      aux_sym_type_list_repeat1,
  [14652] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      sym_comma,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      aux_sym_con_tuple_repeat1,
  [14665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1247), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      aux_sym_type_list_repeat1,
  [14678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 1,
      sym_attribute_name,
    ACTIONS(1249), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [14689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym_attribute_name,
    ACTIONS(712), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [14700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1253), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      aux_sym_type_list_repeat1,
  [14713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1255), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      aux_sym_type_list_repeat1,
  [14726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1257), 1,
      anon_sym_RBRACK,
    STATE(448), 1,
      aux_sym_type_list_repeat1,
  [14739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      sym_comma,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      aux_sym_con_tuple_repeat1,
  [14752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1261), 1,
      anon_sym_RPAREN,
    STATE(432), 1,
      aux_sym_type_list_repeat1,
  [14765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_attribute_name,
    ACTIONS(752), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [14776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_attribute_name,
    ACTIONS(744), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [14787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1263), 1,
      sym_cascade_action,
    ACTIONS(1265), 1,
      sym_sql_constraint_name,
    STATE(410), 1,
      aux_sym_foreign_constraint_repeat1,
  [14800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_attribute_name,
    ACTIONS(756), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [14811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
    STATE(432), 1,
      aux_sym_type_list_repeat1,
  [14824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 1,
      sym_comma,
    ACTIONS(1269), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      aux_sym_con_tuple_repeat1,
  [14837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1271), 1,
      anon_sym_RBRACK,
    STATE(460), 1,
      aux_sym_type_list_repeat1,
  [14850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_attribute_name,
    ACTIONS(736), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [14861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    ACTIONS(1273), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      aux_sym_type_list_repeat1,
  [14874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      sym_attribute_name,
    ACTIONS(760), 2,
      sym__newline,
      sym_attribute_exclamation_mark,
  [14885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym_comma,
    STATE(432), 1,
      aux_sym_type_list_repeat1,
  [14895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1275), 2,
      sym_comma,
      anon_sym_RPAREN,
  [14903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 2,
      sym_comma,
      anon_sym_RPAREN,
  [14911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1277), 2,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
  [14919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1279), 2,
      sym__newline,
      sym__conid,
  [14927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1281), 2,
      anon_sym_u2192,
      anon_sym_DASH_GT,
  [14935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1283), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [14943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 2,
      anon_sym_u21d2,
      anon_sym_EQ_GT,
  [14951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1285), 1,
      anon_sym_DOT,
    STATE(435), 1,
      sym__dot,
  [14961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(1287), 1,
      anon_sym_BQUOTE,
  [14971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 2,
      sym_comma,
      anon_sym_RPAREN,
  [14979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      sym__newline,
  [14986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1293), 1,
      anon_sym_RPAREN,
  [14993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DOT,
  [15000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1295), 1,
      anon_sym_BQUOTE,
  [15007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1297), 1,
      anon_sym_RPAREN,
  [15014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1299), 1,
      anon_sym_RPAREN,
  [15021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1301), 1,
      anon_sym_RPAREN,
  [15028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1303), 1,
      anon_sym_RPAREN,
  [15035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
  [15042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1307), 1,
      anon_sym_RPAREN,
  [15049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1309), 1,
      anon_sym_RPAREN,
  [15056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1311), 1,
      anon_sym_RPAREN,
  [15063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1313), 1,
      anon_sym_RPAREN,
  [15070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1315), 1,
      anon_sym_RPAREN,
  [15077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
  [15084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      anon_sym_RPAREN,
  [15091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1321), 1,
      anon_sym_RPAREN,
  [15098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1323), 1,
      anon_sym_RPAREN,
  [15105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1325), 1,
      anon_sym_RPAREN,
  [15112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1327), 1,
      anon_sym_RPAREN,
  [15119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1329), 1,
      anon_sym_RPAREN,
  [15126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1331), 1,
      anon_sym_RPAREN,
  [15133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1333), 1,
      sym__newline,
  [15140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
  [15147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
  [15154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      anon_sym_RBRACE,
  [15161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1339), 1,
      sym__newline,
  [15168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
  [15175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1343), 1,
      anon_sym_RPAREN,
  [15182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
  [15189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1347), 1,
      sym__newline,
  [15196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      sym__newline,
  [15203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1349), 1,
      anon_sym_RPAREN,
  [15210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1351), 1,
      anon_sym_RPAREN,
  [15217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      anon_sym_RPAREN,
  [15224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1355), 1,
      sym__newline,
  [15231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1357), 1,
      anon_sym_EQ,
  [15238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1359), 1,
      anon_sym_RPAREN,
  [15245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1361), 1,
      anon_sym_RPAREN,
  [15252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_RPAREN,
  [15259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1365), 1,
      anon_sym_RPAREN,
  [15266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 1,
      anon_sym_RPAREN,
  [15273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 1,
      ts_builtin_sym_end,
  [15280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1371), 1,
      anon_sym_RPAREN,
  [15287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1373), 1,
      anon_sym_RPAREN,
  [15294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1375), 1,
      anon_sym_RPAREN,
  [15301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1377), 1,
      anon_sym_RPAREN,
  [15308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1379), 1,
      sym__dedent,
  [15315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1381), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 118,
  [SMALL_STATE(29)] = 236,
  [SMALL_STATE(30)] = 354,
  [SMALL_STATE(31)] = 472,
  [SMALL_STATE(32)] = 590,
  [SMALL_STATE(33)] = 708,
  [SMALL_STATE(34)] = 826,
  [SMALL_STATE(35)] = 944,
  [SMALL_STATE(36)] = 1059,
  [SMALL_STATE(37)] = 1171,
  [SMALL_STATE(38)] = 1283,
  [SMALL_STATE(39)] = 1397,
  [SMALL_STATE(40)] = 1511,
  [SMALL_STATE(41)] = 1603,
  [SMALL_STATE(42)] = 1695,
  [SMALL_STATE(43)] = 1787,
  [SMALL_STATE(44)] = 1894,
  [SMALL_STATE(45)] = 1985,
  [SMALL_STATE(46)] = 2092,
  [SMALL_STATE(47)] = 2183,
  [SMALL_STATE(48)] = 2274,
  [SMALL_STATE(49)] = 2367,
  [SMALL_STATE(50)] = 2474,
  [SMALL_STATE(51)] = 2583,
  [SMALL_STATE(52)] = 2690,
  [SMALL_STATE(53)] = 2797,
  [SMALL_STATE(54)] = 2904,
  [SMALL_STATE(55)] = 2994,
  [SMALL_STATE(56)] = 3084,
  [SMALL_STATE(57)] = 3174,
  [SMALL_STATE(58)] = 3268,
  [SMALL_STATE(59)] = 3360,
  [SMALL_STATE(60)] = 3449,
  [SMALL_STATE(61)] = 3554,
  [SMALL_STATE(62)] = 3659,
  [SMALL_STATE(63)] = 3748,
  [SMALL_STATE(64)] = 3837,
  [SMALL_STATE(65)] = 3923,
  [SMALL_STATE(66)] = 4009,
  [SMALL_STATE(67)] = 4095,
  [SMALL_STATE(68)] = 4182,
  [SMALL_STATE(69)] = 4264,
  [SMALL_STATE(70)] = 4346,
  [SMALL_STATE(71)] = 4428,
  [SMALL_STATE(72)] = 4505,
  [SMALL_STATE(73)] = 4582,
  [SMALL_STATE(74)] = 4660,
  [SMALL_STATE(75)] = 4738,
  [SMALL_STATE(76)] = 4816,
  [SMALL_STATE(77)] = 4887,
  [SMALL_STATE(78)] = 4958,
  [SMALL_STATE(79)] = 5029,
  [SMALL_STATE(80)] = 5099,
  [SMALL_STATE(81)] = 5169,
  [SMALL_STATE(82)] = 5239,
  [SMALL_STATE(83)] = 5309,
  [SMALL_STATE(84)] = 5379,
  [SMALL_STATE(85)] = 5449,
  [SMALL_STATE(86)] = 5519,
  [SMALL_STATE(87)] = 5564,
  [SMALL_STATE(88)] = 5603,
  [SMALL_STATE(89)] = 5642,
  [SMALL_STATE(90)] = 5679,
  [SMALL_STATE(91)] = 5718,
  [SMALL_STATE(92)] = 5754,
  [SMALL_STATE(93)] = 5790,
  [SMALL_STATE(94)] = 5828,
  [SMALL_STATE(95)] = 5864,
  [SMALL_STATE(96)] = 5902,
  [SMALL_STATE(97)] = 5940,
  [SMALL_STATE(98)] = 5976,
  [SMALL_STATE(99)] = 6016,
  [SMALL_STATE(100)] = 6052,
  [SMALL_STATE(101)] = 6088,
  [SMALL_STATE(102)] = 6124,
  [SMALL_STATE(103)] = 6160,
  [SMALL_STATE(104)] = 6196,
  [SMALL_STATE(105)] = 6232,
  [SMALL_STATE(106)] = 6268,
  [SMALL_STATE(107)] = 6304,
  [SMALL_STATE(108)] = 6340,
  [SMALL_STATE(109)] = 6376,
  [SMALL_STATE(110)] = 6412,
  [SMALL_STATE(111)] = 6448,
  [SMALL_STATE(112)] = 6484,
  [SMALL_STATE(113)] = 6520,
  [SMALL_STATE(114)] = 6556,
  [SMALL_STATE(115)] = 6591,
  [SMALL_STATE(116)] = 6626,
  [SMALL_STATE(117)] = 6661,
  [SMALL_STATE(118)] = 6696,
  [SMALL_STATE(119)] = 6731,
  [SMALL_STATE(120)] = 6766,
  [SMALL_STATE(121)] = 6803,
  [SMALL_STATE(122)] = 6838,
  [SMALL_STATE(123)] = 6873,
  [SMALL_STATE(124)] = 6908,
  [SMALL_STATE(125)] = 6943,
  [SMALL_STATE(126)] = 6978,
  [SMALL_STATE(127)] = 7013,
  [SMALL_STATE(128)] = 7048,
  [SMALL_STATE(129)] = 7083,
  [SMALL_STATE(130)] = 7118,
  [SMALL_STATE(131)] = 7153,
  [SMALL_STATE(132)] = 7206,
  [SMALL_STATE(133)] = 7243,
  [SMALL_STATE(134)] = 7278,
  [SMALL_STATE(135)] = 7313,
  [SMALL_STATE(136)] = 7352,
  [SMALL_STATE(137)] = 7389,
  [SMALL_STATE(138)] = 7424,
  [SMALL_STATE(139)] = 7458,
  [SMALL_STATE(140)] = 7492,
  [SMALL_STATE(141)] = 7526,
  [SMALL_STATE(142)] = 7560,
  [SMALL_STATE(143)] = 7594,
  [SMALL_STATE(144)] = 7628,
  [SMALL_STATE(145)] = 7662,
  [SMALL_STATE(146)] = 7696,
  [SMALL_STATE(147)] = 7730,
  [SMALL_STATE(148)] = 7764,
  [SMALL_STATE(149)] = 7798,
  [SMALL_STATE(150)] = 7834,
  [SMALL_STATE(151)] = 7868,
  [SMALL_STATE(152)] = 7904,
  [SMALL_STATE(153)] = 7938,
  [SMALL_STATE(154)] = 7972,
  [SMALL_STATE(155)] = 8024,
  [SMALL_STATE(156)] = 8058,
  [SMALL_STATE(157)] = 8092,
  [SMALL_STATE(158)] = 8126,
  [SMALL_STATE(159)] = 8160,
  [SMALL_STATE(160)] = 8196,
  [SMALL_STATE(161)] = 8230,
  [SMALL_STATE(162)] = 8263,
  [SMALL_STATE(163)] = 8314,
  [SMALL_STATE(164)] = 8347,
  [SMALL_STATE(165)] = 8380,
  [SMALL_STATE(166)] = 8413,
  [SMALL_STATE(167)] = 8446,
  [SMALL_STATE(168)] = 8479,
  [SMALL_STATE(169)] = 8512,
  [SMALL_STATE(170)] = 8545,
  [SMALL_STATE(171)] = 8578,
  [SMALL_STATE(172)] = 8611,
  [SMALL_STATE(173)] = 8644,
  [SMALL_STATE(174)] = 8677,
  [SMALL_STATE(175)] = 8710,
  [SMALL_STATE(176)] = 8743,
  [SMALL_STATE(177)] = 8776,
  [SMALL_STATE(178)] = 8809,
  [SMALL_STATE(179)] = 8842,
  [SMALL_STATE(180)] = 8875,
  [SMALL_STATE(181)] = 8925,
  [SMALL_STATE(182)] = 8976,
  [SMALL_STATE(183)] = 9027,
  [SMALL_STATE(184)] = 9078,
  [SMALL_STATE(185)] = 9109,
  [SMALL_STATE(186)] = 9142,
  [SMALL_STATE(187)] = 9175,
  [SMALL_STATE(188)] = 9226,
  [SMALL_STATE(189)] = 9259,
  [SMALL_STATE(190)] = 9310,
  [SMALL_STATE(191)] = 9361,
  [SMALL_STATE(192)] = 9412,
  [SMALL_STATE(193)] = 9463,
  [SMALL_STATE(194)] = 9514,
  [SMALL_STATE(195)] = 9565,
  [SMALL_STATE(196)] = 9616,
  [SMALL_STATE(197)] = 9667,
  [SMALL_STATE(198)] = 9697,
  [SMALL_STATE(199)] = 9727,
  [SMALL_STATE(200)] = 9757,
  [SMALL_STATE(201)] = 9787,
  [SMALL_STATE(202)] = 9817,
  [SMALL_STATE(203)] = 9847,
  [SMALL_STATE(204)] = 9877,
  [SMALL_STATE(205)] = 9907,
  [SMALL_STATE(206)] = 9937,
  [SMALL_STATE(207)] = 9967,
  [SMALL_STATE(208)] = 9997,
  [SMALL_STATE(209)] = 10027,
  [SMALL_STATE(210)] = 10057,
  [SMALL_STATE(211)] = 10087,
  [SMALL_STATE(212)] = 10117,
  [SMALL_STATE(213)] = 10147,
  [SMALL_STATE(214)] = 10177,
  [SMALL_STATE(215)] = 10207,
  [SMALL_STATE(216)] = 10237,
  [SMALL_STATE(217)] = 10267,
  [SMALL_STATE(218)] = 10314,
  [SMALL_STATE(219)] = 10363,
  [SMALL_STATE(220)] = 10412,
  [SMALL_STATE(221)] = 10461,
  [SMALL_STATE(222)] = 10489,
  [SMALL_STATE(223)] = 10517,
  [SMALL_STATE(224)] = 10545,
  [SMALL_STATE(225)] = 10573,
  [SMALL_STATE(226)] = 10601,
  [SMALL_STATE(227)] = 10629,
  [SMALL_STATE(228)] = 10657,
  [SMALL_STATE(229)] = 10685,
  [SMALL_STATE(230)] = 10717,
  [SMALL_STATE(231)] = 10745,
  [SMALL_STATE(232)] = 10773,
  [SMALL_STATE(233)] = 10801,
  [SMALL_STATE(234)] = 10830,
  [SMALL_STATE(235)] = 10859,
  [SMALL_STATE(236)] = 10888,
  [SMALL_STATE(237)] = 10917,
  [SMALL_STATE(238)] = 10946,
  [SMALL_STATE(239)] = 10975,
  [SMALL_STATE(240)] = 11002,
  [SMALL_STATE(241)] = 11028,
  [SMALL_STATE(242)] = 11054,
  [SMALL_STATE(243)] = 11080,
  [SMALL_STATE(244)] = 11106,
  [SMALL_STATE(245)] = 11132,
  [SMALL_STATE(246)] = 11158,
  [SMALL_STATE(247)] = 11184,
  [SMALL_STATE(248)] = 11210,
  [SMALL_STATE(249)] = 11258,
  [SMALL_STATE(250)] = 11284,
  [SMALL_STATE(251)] = 11310,
  [SMALL_STATE(252)] = 11336,
  [SMALL_STATE(253)] = 11362,
  [SMALL_STATE(254)] = 11388,
  [SMALL_STATE(255)] = 11414,
  [SMALL_STATE(256)] = 11440,
  [SMALL_STATE(257)] = 11466,
  [SMALL_STATE(258)] = 11492,
  [SMALL_STATE(259)] = 11518,
  [SMALL_STATE(260)] = 11544,
  [SMALL_STATE(261)] = 11570,
  [SMALL_STATE(262)] = 11618,
  [SMALL_STATE(263)] = 11644,
  [SMALL_STATE(264)] = 11670,
  [SMALL_STATE(265)] = 11696,
  [SMALL_STATE(266)] = 11735,
  [SMALL_STATE(267)] = 11780,
  [SMALL_STATE(268)] = 11825,
  [SMALL_STATE(269)] = 11849,
  [SMALL_STATE(270)] = 11873,
  [SMALL_STATE(271)] = 11896,
  [SMALL_STATE(272)] = 11919,
  [SMALL_STATE(273)] = 11942,
  [SMALL_STATE(274)] = 11964,
  [SMALL_STATE(275)] = 11998,
  [SMALL_STATE(276)] = 12020,
  [SMALL_STATE(277)] = 12042,
  [SMALL_STATE(278)] = 12064,
  [SMALL_STATE(279)] = 12099,
  [SMALL_STATE(280)] = 12134,
  [SMALL_STATE(281)] = 12153,
  [SMALL_STATE(282)] = 12182,
  [SMALL_STATE(283)] = 12207,
  [SMALL_STATE(284)] = 12224,
  [SMALL_STATE(285)] = 12253,
  [SMALL_STATE(286)] = 12277,
  [SMALL_STATE(287)] = 12301,
  [SMALL_STATE(288)] = 12325,
  [SMALL_STATE(289)] = 12344,
  [SMALL_STATE(290)] = 12366,
  [SMALL_STATE(291)] = 12382,
  [SMALL_STATE(292)] = 12404,
  [SMALL_STATE(293)] = 12426,
  [SMALL_STATE(294)] = 12447,
  [SMALL_STATE(295)] = 12468,
  [SMALL_STATE(296)] = 12483,
  [SMALL_STATE(297)] = 12496,
  [SMALL_STATE(298)] = 12517,
  [SMALL_STATE(299)] = 12538,
  [SMALL_STATE(300)] = 12563,
  [SMALL_STATE(301)] = 12584,
  [SMALL_STATE(302)] = 12609,
  [SMALL_STATE(303)] = 12622,
  [SMALL_STATE(304)] = 12643,
  [SMALL_STATE(305)] = 12656,
  [SMALL_STATE(306)] = 12677,
  [SMALL_STATE(307)] = 12690,
  [SMALL_STATE(308)] = 12715,
  [SMALL_STATE(309)] = 12734,
  [SMALL_STATE(310)] = 12759,
  [SMALL_STATE(311)] = 12780,
  [SMALL_STATE(312)] = 12795,
  [SMALL_STATE(313)] = 12820,
  [SMALL_STATE(314)] = 12841,
  [SMALL_STATE(315)] = 12862,
  [SMALL_STATE(316)] = 12887,
  [SMALL_STATE(317)] = 12909,
  [SMALL_STATE(318)] = 12921,
  [SMALL_STATE(319)] = 12943,
  [SMALL_STATE(320)] = 12957,
  [SMALL_STATE(321)] = 12969,
  [SMALL_STATE(322)] = 12989,
  [SMALL_STATE(323)] = 13011,
  [SMALL_STATE(324)] = 13023,
  [SMALL_STATE(325)] = 13035,
  [SMALL_STATE(326)] = 13047,
  [SMALL_STATE(327)] = 13059,
  [SMALL_STATE(328)] = 13071,
  [SMALL_STATE(329)] = 13091,
  [SMALL_STATE(330)] = 13105,
  [SMALL_STATE(331)] = 13127,
  [SMALL_STATE(332)] = 13147,
  [SMALL_STATE(333)] = 13167,
  [SMALL_STATE(334)] = 13189,
  [SMALL_STATE(335)] = 13211,
  [SMALL_STATE(336)] = 13233,
  [SMALL_STATE(337)] = 13249,
  [SMALL_STATE(338)] = 13271,
  [SMALL_STATE(339)] = 13291,
  [SMALL_STATE(340)] = 13303,
  [SMALL_STATE(341)] = 13320,
  [SMALL_STATE(342)] = 13335,
  [SMALL_STATE(343)] = 13348,
  [SMALL_STATE(344)] = 13365,
  [SMALL_STATE(345)] = 13382,
  [SMALL_STATE(346)] = 13399,
  [SMALL_STATE(347)] = 13412,
  [SMALL_STATE(348)] = 13425,
  [SMALL_STATE(349)] = 13438,
  [SMALL_STATE(350)] = 13455,
  [SMALL_STATE(351)] = 13468,
  [SMALL_STATE(352)] = 13487,
  [SMALL_STATE(353)] = 13504,
  [SMALL_STATE(354)] = 13521,
  [SMALL_STATE(355)] = 13536,
  [SMALL_STATE(356)] = 13549,
  [SMALL_STATE(357)] = 13566,
  [SMALL_STATE(358)] = 13582,
  [SMALL_STATE(359)] = 13596,
  [SMALL_STATE(360)] = 13610,
  [SMALL_STATE(361)] = 13622,
  [SMALL_STATE(362)] = 13634,
  [SMALL_STATE(363)] = 13648,
  [SMALL_STATE(364)] = 13660,
  [SMALL_STATE(365)] = 13676,
  [SMALL_STATE(366)] = 13688,
  [SMALL_STATE(367)] = 13700,
  [SMALL_STATE(368)] = 13716,
  [SMALL_STATE(369)] = 13732,
  [SMALL_STATE(370)] = 13746,
  [SMALL_STATE(371)] = 13762,
  [SMALL_STATE(372)] = 13776,
  [SMALL_STATE(373)] = 13792,
  [SMALL_STATE(374)] = 13808,
  [SMALL_STATE(375)] = 13822,
  [SMALL_STATE(376)] = 13834,
  [SMALL_STATE(377)] = 13850,
  [SMALL_STATE(378)] = 13866,
  [SMALL_STATE(379)] = 13880,
  [SMALL_STATE(380)] = 13890,
  [SMALL_STATE(381)] = 13902,
  [SMALL_STATE(382)] = 13914,
  [SMALL_STATE(383)] = 13930,
  [SMALL_STATE(384)] = 13944,
  [SMALL_STATE(385)] = 13960,
  [SMALL_STATE(386)] = 13971,
  [SMALL_STATE(387)] = 13982,
  [SMALL_STATE(388)] = 13993,
  [SMALL_STATE(389)] = 14004,
  [SMALL_STATE(390)] = 14015,
  [SMALL_STATE(391)] = 14026,
  [SMALL_STATE(392)] = 14039,
  [SMALL_STATE(393)] = 14050,
  [SMALL_STATE(394)] = 14063,
  [SMALL_STATE(395)] = 14074,
  [SMALL_STATE(396)] = 14087,
  [SMALL_STATE(397)] = 14096,
  [SMALL_STATE(398)] = 14109,
  [SMALL_STATE(399)] = 14122,
  [SMALL_STATE(400)] = 14135,
  [SMALL_STATE(401)] = 14148,
  [SMALL_STATE(402)] = 14161,
  [SMALL_STATE(403)] = 14174,
  [SMALL_STATE(404)] = 14185,
  [SMALL_STATE(405)] = 14196,
  [SMALL_STATE(406)] = 14207,
  [SMALL_STATE(407)] = 14218,
  [SMALL_STATE(408)] = 14229,
  [SMALL_STATE(409)] = 14242,
  [SMALL_STATE(410)] = 14253,
  [SMALL_STATE(411)] = 14266,
  [SMALL_STATE(412)] = 14279,
  [SMALL_STATE(413)] = 14292,
  [SMALL_STATE(414)] = 14305,
  [SMALL_STATE(415)] = 14316,
  [SMALL_STATE(416)] = 14329,
  [SMALL_STATE(417)] = 14340,
  [SMALL_STATE(418)] = 14353,
  [SMALL_STATE(419)] = 14366,
  [SMALL_STATE(420)] = 14379,
  [SMALL_STATE(421)] = 14392,
  [SMALL_STATE(422)] = 14403,
  [SMALL_STATE(423)] = 14414,
  [SMALL_STATE(424)] = 14425,
  [SMALL_STATE(425)] = 14438,
  [SMALL_STATE(426)] = 14451,
  [SMALL_STATE(427)] = 14464,
  [SMALL_STATE(428)] = 14477,
  [SMALL_STATE(429)] = 14486,
  [SMALL_STATE(430)] = 14499,
  [SMALL_STATE(431)] = 14508,
  [SMALL_STATE(432)] = 14517,
  [SMALL_STATE(433)] = 14530,
  [SMALL_STATE(434)] = 14543,
  [SMALL_STATE(435)] = 14556,
  [SMALL_STATE(436)] = 14567,
  [SMALL_STATE(437)] = 14578,
  [SMALL_STATE(438)] = 14591,
  [SMALL_STATE(439)] = 14604,
  [SMALL_STATE(440)] = 14617,
  [SMALL_STATE(441)] = 14628,
  [SMALL_STATE(442)] = 14639,
  [SMALL_STATE(443)] = 14652,
  [SMALL_STATE(444)] = 14665,
  [SMALL_STATE(445)] = 14678,
  [SMALL_STATE(446)] = 14689,
  [SMALL_STATE(447)] = 14700,
  [SMALL_STATE(448)] = 14713,
  [SMALL_STATE(449)] = 14726,
  [SMALL_STATE(450)] = 14739,
  [SMALL_STATE(451)] = 14752,
  [SMALL_STATE(452)] = 14765,
  [SMALL_STATE(453)] = 14776,
  [SMALL_STATE(454)] = 14787,
  [SMALL_STATE(455)] = 14800,
  [SMALL_STATE(456)] = 14811,
  [SMALL_STATE(457)] = 14824,
  [SMALL_STATE(458)] = 14837,
  [SMALL_STATE(459)] = 14850,
  [SMALL_STATE(460)] = 14861,
  [SMALL_STATE(461)] = 14874,
  [SMALL_STATE(462)] = 14885,
  [SMALL_STATE(463)] = 14895,
  [SMALL_STATE(464)] = 14903,
  [SMALL_STATE(465)] = 14911,
  [SMALL_STATE(466)] = 14919,
  [SMALL_STATE(467)] = 14927,
  [SMALL_STATE(468)] = 14935,
  [SMALL_STATE(469)] = 14943,
  [SMALL_STATE(470)] = 14951,
  [SMALL_STATE(471)] = 14961,
  [SMALL_STATE(472)] = 14971,
  [SMALL_STATE(473)] = 14979,
  [SMALL_STATE(474)] = 14986,
  [SMALL_STATE(475)] = 14993,
  [SMALL_STATE(476)] = 15000,
  [SMALL_STATE(477)] = 15007,
  [SMALL_STATE(478)] = 15014,
  [SMALL_STATE(479)] = 15021,
  [SMALL_STATE(480)] = 15028,
  [SMALL_STATE(481)] = 15035,
  [SMALL_STATE(482)] = 15042,
  [SMALL_STATE(483)] = 15049,
  [SMALL_STATE(484)] = 15056,
  [SMALL_STATE(485)] = 15063,
  [SMALL_STATE(486)] = 15070,
  [SMALL_STATE(487)] = 15077,
  [SMALL_STATE(488)] = 15084,
  [SMALL_STATE(489)] = 15091,
  [SMALL_STATE(490)] = 15098,
  [SMALL_STATE(491)] = 15105,
  [SMALL_STATE(492)] = 15112,
  [SMALL_STATE(493)] = 15119,
  [SMALL_STATE(494)] = 15126,
  [SMALL_STATE(495)] = 15133,
  [SMALL_STATE(496)] = 15140,
  [SMALL_STATE(497)] = 15147,
  [SMALL_STATE(498)] = 15154,
  [SMALL_STATE(499)] = 15161,
  [SMALL_STATE(500)] = 15168,
  [SMALL_STATE(501)] = 15175,
  [SMALL_STATE(502)] = 15182,
  [SMALL_STATE(503)] = 15189,
  [SMALL_STATE(504)] = 15196,
  [SMALL_STATE(505)] = 15203,
  [SMALL_STATE(506)] = 15210,
  [SMALL_STATE(507)] = 15217,
  [SMALL_STATE(508)] = 15224,
  [SMALL_STATE(509)] = 15231,
  [SMALL_STATE(510)] = 15238,
  [SMALL_STATE(511)] = 15245,
  [SMALL_STATE(512)] = 15252,
  [SMALL_STATE(513)] = 15259,
  [SMALL_STATE(514)] = 15266,
  [SMALL_STATE(515)] = 15273,
  [SMALL_STATE(516)] = 15280,
  [SMALL_STATE(517)] = 15287,
  [SMALL_STATE(518)] = 15294,
  [SMALL_STATE(519)] = 15301,
  [SMALL_STATE(520)] = 15308,
  [SMALL_STATE(521)] = 15315,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persistent_definitions, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_apply, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_apply, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(89),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(193),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__btype, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__btype, 1),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(89),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(193),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(103),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(104),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(102),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(102),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(14),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(89),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(29),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(193),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(92),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(85),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(129),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(121),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(124),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(124),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(6),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(91),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(32),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(181),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(123),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(81),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(91),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(181),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(91),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(181),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(198),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atype, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atype, 1),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(227),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__atype, 1), SHIFT(230),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(230),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 10),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 1, .production_id = 10),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(10),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(212),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(27),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__atype, 1), SHIFT(194),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(231),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(147),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(153),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(142),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(142),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(13),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(119),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(28),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(195),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(141),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(84),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(119),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(195),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(119),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(195),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), REDUCE(sym_constraint, 1, .production_id = 10),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(173),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(170),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(175),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(175),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(12),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(138),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(30),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(189),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(171),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(79),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(138),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(189),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(138),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(189),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(184),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(187),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(184),
  [496] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(187),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(205),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(206),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(209),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(209),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(9),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(184),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(34),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(187),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(208),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(82),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(244),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(258),
  [535] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(260),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(260),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(11),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(239),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(31),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(190),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(259),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(80),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(239),
  [566] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(190),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(239),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(190),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2, .production_id = 10),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(198),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(227),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(230),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(230),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(10),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(212),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(27),
  [620] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(194),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(231),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_name, 1), SHIFT(36),
  [671] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_name, 1), SHIFT(36),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type, 2, .production_id = 4),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__modid, 1, .production_id = 2),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type, 2, .production_id = 4),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tycon, 2, .production_id = 4),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tycon, 2, .production_id = 4),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor, 1),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_star, 1),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_star, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 3),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tycon, 4),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tycon, 4),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_unit, 2),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_unit, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 2),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__context_constraints, 2),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_promoted_literal, 2),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_promoted_literal, 2),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_invisible, 2),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_invisible, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tycon_arrow, 3),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tycon_arrow, 3),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variable, 1),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_literal, 1),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_literal, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 3),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_list, 3),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 4),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_list, 4),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tycon, 2),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tycon, 2),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_list, 2),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_list, 2),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_tuple, 3),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_tuple, 3),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parens, 3),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parens, 3),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_tuple, 3),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_tuple, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_infix, 1),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_infix, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 1),
  [820] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(277),
  [823] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(76),
  [826] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(345),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(392),
  [832] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(279),
  [835] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(333),
  [838] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(212),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modid, 1, .production_id = 2),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persistent_definitions, 1),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_persistent_definitions_repeat1, 2),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_persistent_definitions_repeat1, 2), SHIFT_REPEAT(390),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_persistent_definitions_repeat1, 2), SHIFT_REPEAT(278),
  [855] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_persistent_definitions_repeat1, 2), SHIFT_REPEAT(267),
  [858] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_persistent_definitions_repeat1, 2), SHIFT_REPEAT(361),
  [861] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_persistent_definitions_repeat1, 2), SHIFT_REPEAT(330),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fun_arrow, 2),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fun_arrow, 2),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__context, 2),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context, 2),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_operator, 1),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_operator, 1),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_constructor_operator, 2),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_constructor_operator, 2),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_operator, 2),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type_operator, 2),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tyconop, 2),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tyconop, 2),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ticked_qtycon, 3),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ticked_qtycon, 3),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ticked_qtycon, 3, .production_id = 4),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ticked_qtycon, 3, .production_id = 4),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_infix, 3, .production_id = 22),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [920] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2), SHIFT_REPEAT(198),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2),
  [925] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2), SHIFT_REPEAT(401),
  [928] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2), SHIFT_REPEAT(402),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forall, 2),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [937] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_infix, 1), REDUCE(sym_constraint, 1),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_with_kind, 1),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__entity_line_definition, 2),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_line_definition, 2),
  [948] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_of_fields_repeat1, 2), SHIFT_REPEAT(346),
  [951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_of_fields_repeat1, 2),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_of_fields_repeat1, 2),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_of_fields, 1, .production_id = 12),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_of_fields, 1, .production_id = 12),
  [961] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(416),
  [964] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(378),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 3, .production_id = 6),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3, .production_id = 20),
  [987] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_deriving_repeat1, 2, .production_id = 19), SHIFT_REPEAT(430),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_deriving_repeat1, 2, .production_id = 19),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 2, .production_id = 5),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3, .production_id = 18),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 3, .production_id = 8),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 4, .production_id = 24),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 4, .production_id = 9),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 5),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 4),
  [1014] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2), SHIFT_REPEAT(445),
  [1017] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__entity_header_repeat1, 2), SHIFT_REPEAT(378),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 1, .production_id = 1),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_deriving, 2, .production_id = 15),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2, .production_id = 16),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 2),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_param, 2, .production_id = 7),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__qualifying_module, 2),
  [1040] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__qualifying_module, 2),
  [1042] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__qualifying_module, 2), SHIFT_REPEAT(212),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_annotation, 2, .production_id = 11),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_of_attributes_unambiguous_start, 1),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 7, .production_id = 26),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_quantifiers, 3),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inferred_type_variable, 3),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantifier, 3),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_fun, 3),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_context, 2),
  [1067] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_surrogate_key_repeat1, 2), SHIFT_REPEAT(405),
  [1070] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_surrogate_key_repeat1, 2), SHIFT_REPEAT(378),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_surrogate_key_repeat1, 2),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_surrogate_key, 3, .production_id = 17),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_surrogate_key, 2, .production_id = 11),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_key, 2),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 6, .production_id = 25),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_of_attributes_unambiguous_start, 2, .production_id = 23),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 4, .production_id = 1),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1097] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_of_fields_repeat1, 1),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_of_fields_repeat1, 1),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_or_implicit, 1), SHIFT(50),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_or_implicit, 1),
  [1108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_or_implicit, 1), SHIFT(469),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint, 3),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 3),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [1127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint, 1),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 1),
  [1133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2), SHIFT_REPEAT(35),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_key_value, 3),
  [1140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_key_value, 3),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_foreign_constraint_repeat1, 2), SHIFT_REPEAT(391),
  [1147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_foreign_constraint_repeat1, 2),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_deriving_repeat1, 1, .production_id = 13),
  [1157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__context_constraints_repeat1, 2), SHIFT_REPEAT(50),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context_constraints_repeat1, 2),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_surrogate_key_repeat1, 1),
  [1178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_surrogate_key_repeat1, 1),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_sql, 3),
  [1182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute_sql, 3),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_unambiguous, 1),
  [1186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute_unambiguous, 1),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 1),
  [1204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_definition_repeat1, 1),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kind, 1, .production_id = 21),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_with_kind, 2),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_tuple, 2),
  [1230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_con_tuple_repeat1, 2), SHIFT_REPEAT(433),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_con_tuple_repeat1, 2),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 1),
  [1251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__entity_header_repeat1, 1),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantified_constraint, 3),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 4),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_deriving_repeat1, 1, .production_id = 14),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotated_type_variable, 2, .production_id = 7),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_context, 2),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 8, .production_id = 26),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 3),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 7, .production_id = 25),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 6),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_key, 3),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1369] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__dedent] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_haskell_persistent_external_scanner_create(void);
void tree_sitter_haskell_persistent_external_scanner_destroy(void *);
bool tree_sitter_haskell_persistent_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_haskell_persistent_external_scanner_serialize(void *, char *);
void tree_sitter_haskell_persistent_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_haskell_persistent() {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__varid,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_haskell_persistent_external_scanner_create,
      tree_sitter_haskell_persistent_external_scanner_destroy,
      tree_sitter_haskell_persistent_external_scanner_scan,
      tree_sitter_haskell_persistent_external_scanner_serialize,
      tree_sitter_haskell_persistent_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

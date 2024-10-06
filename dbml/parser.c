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
#define STATE_COUNT 273
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 14
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 20

enum ts_symbol_identifiers {
  sym__identifier = 1,
  sym_string = 2,
  sym_expression = 3,
  sym_number = 4,
  anon_sym_true = 5,
  anon_sym_false = 6,
  anon_sym_null = 7,
  anon_sym_nil = 8,
  sym__comment = 9,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 10,
  aux_sym_multiline_string_token1 = 11,
  anon_sym_LF = 12,
  anon_sym_SLASH_STAR = 13,
  anon_sym_STAR_SLASH = 14,
  anon_sym_bool = 15,
  anon_sym_boolean = 16,
  anon_sym_date = 17,
  anon_sym_datetime = 18,
  anon_sym_int = 19,
  anon_sym_integer = 20,
  anon_sym_string = 21,
  anon_sym_text = 22,
  anon_sym_timestamp = 23,
  anon_sym_varchar = 24,
  anon_sym_COLON = 25,
  anon_sym_project = 26,
  anon_sym_Project = 27,
  anon_sym_LBRACE = 28,
  anon_sym_RBRACE = 29,
  anon_sym_table = 30,
  anon_sym_Table = 31,
  anon_sym_DOT = 32,
  anon_sym_as = 33,
  anon_sym_LBRACK = 34,
  anon_sym_COMMA = 35,
  anon_sym_RBRACK = 36,
  anon_sym_primarykey = 37,
  anon_sym_pk = 38,
  anon_sym_notnull = 39,
  anon_sym_unique = 40,
  anon_sym_increment = 41,
  anon_sym_default = 42,
  anon_sym_ref = 43,
  anon_sym_indexes = 44,
  anon_sym_Indexes = 45,
  anon_sym_LPAREN = 46,
  anon_sym_RPAREN = 47,
  anon_sym_name = 48,
  anon_sym_type = 49,
  anon_sym_enum = 50,
  anon_sym_Enum = 51,
  anon_sym_Ref = 52,
  anon_sym_LT = 53,
  anon_sym_GT = 54,
  anon_sym_DASH = 55,
  anon_sym_LT_GT = 56,
  anon_sym_tablegroup = 57,
  anon_sym_TableGroup = 58,
  anon_sym_note = 59,
  anon_sym_Note = 60,
  sym_schema = 61,
  sym_boolean = 62,
  sym_null = 63,
  sym_multiline_string = 64,
  sym__multiline_comment = 65,
  sym_type = 66,
  sym_key_value = 67,
  sym_value = 68,
  sym__definition = 69,
  sym_project = 70,
  sym__project_row = 71,
  sym_table = 72,
  sym__table_alias = 73,
  sym_table_settings = 74,
  sym__table_row = 75,
  sym_column = 76,
  sym_column_settings = 77,
  sym__unary_column_setting = 78,
  sym__binary_column_setting = 79,
  sym_default_setting = 80,
  sym__inline_reference = 81,
  sym_indexes = 82,
  sym__index_row = 83,
  sym_index = 84,
  sym_composite_index = 85,
  sym_index_settings = 86,
  sym__unary_index_setting = 87,
  sym__binary_index_setting = 88,
  sym_index_name_setting = 89,
  sym_index_type_setting = 90,
  sym_enum = 91,
  sym__enum_row = 92,
  sym_variant = 93,
  sym_variant_notes = 94,
  sym_reference = 95,
  sym__short_reference = 96,
  sym__long_reference = 97,
  sym__relationship = 98,
  sym_one_to_many = 99,
  sym_inline_one_to_many = 100,
  sym_many_to_one = 101,
  sym_inline_many_to_one = 102,
  sym_one_to_one = 103,
  sym_inline_one_to_one = 104,
  sym_many_to_many = 105,
  sym_inline_many_to_many = 106,
  sym__column_reference = 107,
  sym_table_group = 108,
  sym__table_group_row = 109,
  sym_comment = 110,
  sym_note = 111,
  sym_note_text = 112,
  sym__short_note = 113,
  sym__long_note = 114,
  aux_sym_schema_repeat1 = 115,
  aux_sym_multiline_string_repeat1 = 116,
  aux_sym_project_repeat1 = 117,
  aux_sym_table_repeat1 = 118,
  aux_sym_table_settings_repeat1 = 119,
  aux_sym_column_settings_repeat1 = 120,
  aux_sym_indexes_repeat1 = 121,
  aux_sym_composite_index_repeat1 = 122,
  aux_sym_index_settings_repeat1 = 123,
  aux_sym_enum_repeat1 = 124,
  aux_sym_variant_notes_repeat1 = 125,
  aux_sym_table_group_repeat1 = 126,
  alias_sym_column_name = 127,
  alias_sym_enum_name = 128,
  alias_sym_from_column = 129,
  alias_sym_identifier = 130,
  alias_sym_key = 131,
  alias_sym_keyword = 132,
  alias_sym_note_name = 133,
  alias_sym_null_setting = 134,
  alias_sym_project_name = 135,
  alias_sym_reference_name = 136,
  alias_sym_schema_name = 137,
  alias_sym_table_alias = 138,
  alias_sym_table_group_name = 139,
  alias_sym_table_name = 140,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [sym_string] = "string",
  [sym_expression] = "expression",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [anon_sym_nil] = "nil",
  [sym__comment] = "_comment",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym_multiline_string_token1] = "multiline_string_token1",
  [anon_sym_LF] = "\n",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_bool] = "bool",
  [anon_sym_boolean] = "boolean",
  [anon_sym_date] = "date",
  [anon_sym_datetime] = "datetime",
  [anon_sym_int] = "int",
  [anon_sym_integer] = "integer",
  [anon_sym_string] = "string",
  [anon_sym_text] = "text",
  [anon_sym_timestamp] = "timestamp",
  [anon_sym_varchar] = "varchar",
  [anon_sym_COLON] = ":",
  [anon_sym_project] = "project",
  [anon_sym_Project] = "Project",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_table] = "table",
  [anon_sym_Table] = "Table",
  [anon_sym_DOT] = ".",
  [anon_sym_as] = "as",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_primarykey] = "primary_key_setting",
  [anon_sym_pk] = "primary_key_setting",
  [anon_sym_notnull] = "not_null_setting",
  [anon_sym_unique] = "unique_setting",
  [anon_sym_increment] = "increment_setting",
  [anon_sym_default] = "default",
  [anon_sym_ref] = "ref",
  [anon_sym_indexes] = "indexes",
  [anon_sym_Indexes] = "Indexes",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_name] = "name",
  [anon_sym_type] = "type",
  [anon_sym_enum] = "enum",
  [anon_sym_Enum] = "Enum",
  [anon_sym_Ref] = "Ref",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_DASH] = "-",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_tablegroup] = "tablegroup",
  [anon_sym_TableGroup] = "TableGroup",
  [anon_sym_note] = "note",
  [anon_sym_Note] = "Note",
  [sym_schema] = "schema",
  [sym_boolean] = "boolean",
  [sym_null] = "null",
  [sym_multiline_string] = "multiline_string",
  [sym__multiline_comment] = "_multiline_comment",
  [sym_type] = "type",
  [sym_key_value] = "key_value",
  [sym_value] = "value",
  [sym__definition] = "_definition",
  [sym_project] = "project",
  [sym__project_row] = "_project_row",
  [sym_table] = "table",
  [sym__table_alias] = "_table_alias",
  [sym_table_settings] = "table_settings",
  [sym__table_row] = "_table_row",
  [sym_column] = "column",
  [sym_column_settings] = "column_settings",
  [sym__unary_column_setting] = "_unary_column_setting",
  [sym__binary_column_setting] = "_binary_column_setting",
  [sym_default_setting] = "default_setting",
  [sym__inline_reference] = "_inline_reference",
  [sym_indexes] = "indexes",
  [sym__index_row] = "_index_row",
  [sym_index] = "index",
  [sym_composite_index] = "composite_index",
  [sym_index_settings] = "index_settings",
  [sym__unary_index_setting] = "_unary_index_setting",
  [sym__binary_index_setting] = "_binary_index_setting",
  [sym_index_name_setting] = "index_name_setting",
  [sym_index_type_setting] = "index_type_setting",
  [sym_enum] = "enum",
  [sym__enum_row] = "_enum_row",
  [sym_variant] = "variant",
  [sym_variant_notes] = "variant_notes",
  [sym_reference] = "reference",
  [sym__short_reference] = "_short_reference",
  [sym__long_reference] = "_long_reference",
  [sym__relationship] = "_relationship",
  [sym_one_to_many] = "one_to_many",
  [sym_inline_one_to_many] = "inline_one_to_many",
  [sym_many_to_one] = "many_to_one",
  [sym_inline_many_to_one] = "inline_many_to_one",
  [sym_one_to_one] = "one_to_one",
  [sym_inline_one_to_one] = "inline_one_to_one",
  [sym_many_to_many] = "many_to_many",
  [sym_inline_many_to_many] = "inline_many_to_many",
  [sym__column_reference] = "to_column",
  [sym_table_group] = "table_group",
  [sym__table_group_row] = "_table_group_row",
  [sym_comment] = "comment",
  [sym_note] = "note",
  [sym_note_text] = "note_text",
  [sym__short_note] = "_short_note",
  [sym__long_note] = "_long_note",
  [aux_sym_schema_repeat1] = "schema_repeat1",
  [aux_sym_multiline_string_repeat1] = "multiline_string_repeat1",
  [aux_sym_project_repeat1] = "project_repeat1",
  [aux_sym_table_repeat1] = "table_repeat1",
  [aux_sym_table_settings_repeat1] = "table_settings_repeat1",
  [aux_sym_column_settings_repeat1] = "column_settings_repeat1",
  [aux_sym_indexes_repeat1] = "indexes_repeat1",
  [aux_sym_composite_index_repeat1] = "composite_index_repeat1",
  [aux_sym_index_settings_repeat1] = "index_settings_repeat1",
  [aux_sym_enum_repeat1] = "enum_repeat1",
  [aux_sym_variant_notes_repeat1] = "variant_notes_repeat1",
  [aux_sym_table_group_repeat1] = "table_group_repeat1",
  [alias_sym_column_name] = "column_name",
  [alias_sym_enum_name] = "enum_name",
  [alias_sym_from_column] = "from_column",
  [alias_sym_identifier] = "identifier",
  [alias_sym_key] = "key",
  [alias_sym_keyword] = "keyword",
  [alias_sym_note_name] = "note_name",
  [alias_sym_null_setting] = "null_setting",
  [alias_sym_project_name] = "project_name",
  [alias_sym_reference_name] = "reference_name",
  [alias_sym_schema_name] = "schema_name",
  [alias_sym_table_alias] = "table_alias",
  [alias_sym_table_group_name] = "table_group_name",
  [alias_sym_table_name] = "table_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier] = sym__identifier,
  [sym_string] = sym_string,
  [sym_expression] = sym_expression,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_nil] = anon_sym_nil,
  [sym__comment] = sym__comment,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym_multiline_string_token1] = aux_sym_multiline_string_token1,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_datetime] = anon_sym_datetime,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_timestamp] = anon_sym_timestamp,
  [anon_sym_varchar] = anon_sym_varchar,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_project] = anon_sym_project,
  [anon_sym_Project] = anon_sym_Project,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_Table] = anon_sym_Table,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_primarykey] = anon_sym_primarykey,
  [anon_sym_pk] = anon_sym_primarykey,
  [anon_sym_notnull] = anon_sym_notnull,
  [anon_sym_unique] = anon_sym_unique,
  [anon_sym_increment] = anon_sym_increment,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_indexes] = anon_sym_indexes,
  [anon_sym_Indexes] = anon_sym_Indexes,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_Enum] = anon_sym_Enum,
  [anon_sym_Ref] = anon_sym_Ref,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_tablegroup] = anon_sym_tablegroup,
  [anon_sym_TableGroup] = anon_sym_TableGroup,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_Note] = anon_sym_Note,
  [sym_schema] = sym_schema,
  [sym_boolean] = sym_boolean,
  [sym_null] = sym_null,
  [sym_multiline_string] = sym_multiline_string,
  [sym__multiline_comment] = sym__multiline_comment,
  [sym_type] = sym_type,
  [sym_key_value] = sym_key_value,
  [sym_value] = sym_value,
  [sym__definition] = sym__definition,
  [sym_project] = sym_project,
  [sym__project_row] = sym__project_row,
  [sym_table] = sym_table,
  [sym__table_alias] = sym__table_alias,
  [sym_table_settings] = sym_table_settings,
  [sym__table_row] = sym__table_row,
  [sym_column] = sym_column,
  [sym_column_settings] = sym_column_settings,
  [sym__unary_column_setting] = sym__unary_column_setting,
  [sym__binary_column_setting] = sym__binary_column_setting,
  [sym_default_setting] = sym_default_setting,
  [sym__inline_reference] = sym__inline_reference,
  [sym_indexes] = sym_indexes,
  [sym__index_row] = sym__index_row,
  [sym_index] = sym_index,
  [sym_composite_index] = sym_composite_index,
  [sym_index_settings] = sym_index_settings,
  [sym__unary_index_setting] = sym__unary_index_setting,
  [sym__binary_index_setting] = sym__binary_index_setting,
  [sym_index_name_setting] = sym_index_name_setting,
  [sym_index_type_setting] = sym_index_type_setting,
  [sym_enum] = sym_enum,
  [sym__enum_row] = sym__enum_row,
  [sym_variant] = sym_variant,
  [sym_variant_notes] = sym_variant_notes,
  [sym_reference] = sym_reference,
  [sym__short_reference] = sym__short_reference,
  [sym__long_reference] = sym__long_reference,
  [sym__relationship] = sym__relationship,
  [sym_one_to_many] = sym_one_to_many,
  [sym_inline_one_to_many] = sym_inline_one_to_many,
  [sym_many_to_one] = sym_many_to_one,
  [sym_inline_many_to_one] = sym_inline_many_to_one,
  [sym_one_to_one] = sym_one_to_one,
  [sym_inline_one_to_one] = sym_inline_one_to_one,
  [sym_many_to_many] = sym_many_to_many,
  [sym_inline_many_to_many] = sym_inline_many_to_many,
  [sym__column_reference] = sym__column_reference,
  [sym_table_group] = sym_table_group,
  [sym__table_group_row] = sym__table_group_row,
  [sym_comment] = sym_comment,
  [sym_note] = sym_note,
  [sym_note_text] = sym_note_text,
  [sym__short_note] = sym__short_note,
  [sym__long_note] = sym__long_note,
  [aux_sym_schema_repeat1] = aux_sym_schema_repeat1,
  [aux_sym_multiline_string_repeat1] = aux_sym_multiline_string_repeat1,
  [aux_sym_project_repeat1] = aux_sym_project_repeat1,
  [aux_sym_table_repeat1] = aux_sym_table_repeat1,
  [aux_sym_table_settings_repeat1] = aux_sym_table_settings_repeat1,
  [aux_sym_column_settings_repeat1] = aux_sym_column_settings_repeat1,
  [aux_sym_indexes_repeat1] = aux_sym_indexes_repeat1,
  [aux_sym_composite_index_repeat1] = aux_sym_composite_index_repeat1,
  [aux_sym_index_settings_repeat1] = aux_sym_index_settings_repeat1,
  [aux_sym_enum_repeat1] = aux_sym_enum_repeat1,
  [aux_sym_variant_notes_repeat1] = aux_sym_variant_notes_repeat1,
  [aux_sym_table_group_repeat1] = aux_sym_table_group_repeat1,
  [alias_sym_column_name] = alias_sym_column_name,
  [alias_sym_enum_name] = alias_sym_enum_name,
  [alias_sym_from_column] = alias_sym_from_column,
  [alias_sym_identifier] = alias_sym_identifier,
  [alias_sym_key] = alias_sym_key,
  [alias_sym_keyword] = alias_sym_keyword,
  [alias_sym_note_name] = alias_sym_note_name,
  [alias_sym_null_setting] = alias_sym_null_setting,
  [alias_sym_project_name] = alias_sym_project_name,
  [alias_sym_reference_name] = alias_sym_reference_name,
  [alias_sym_schema_name] = alias_sym_schema_name,
  [alias_sym_table_alias] = alias_sym_table_alias,
  [alias_sym_table_group_name] = alias_sym_table_group_name,
  [alias_sym_table_name] = alias_sym_table_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
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
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datetime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timestamp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_varchar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_project] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Project] = {
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
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_primarykey] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pk] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_notnull] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unique] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_increment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_indexes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Indexes] = {
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
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tablegroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TableGroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Note] = {
    .visible = true,
    .named = false,
  },
  [sym_schema] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_string] = {
    .visible = true,
    .named = true,
  },
  [sym__multiline_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_project] = {
    .visible = true,
    .named = true,
  },
  [sym__project_row] = {
    .visible = false,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym__table_alias] = {
    .visible = false,
    .named = true,
  },
  [sym_table_settings] = {
    .visible = true,
    .named = true,
  },
  [sym__table_row] = {
    .visible = false,
    .named = true,
  },
  [sym_column] = {
    .visible = true,
    .named = true,
  },
  [sym_column_settings] = {
    .visible = true,
    .named = true,
  },
  [sym__unary_column_setting] = {
    .visible = false,
    .named = true,
  },
  [sym__binary_column_setting] = {
    .visible = false,
    .named = true,
  },
  [sym_default_setting] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_reference] = {
    .visible = false,
    .named = true,
  },
  [sym_indexes] = {
    .visible = true,
    .named = true,
  },
  [sym__index_row] = {
    .visible = false,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_composite_index] = {
    .visible = true,
    .named = true,
  },
  [sym_index_settings] = {
    .visible = true,
    .named = true,
  },
  [sym__unary_index_setting] = {
    .visible = false,
    .named = true,
  },
  [sym__binary_index_setting] = {
    .visible = false,
    .named = true,
  },
  [sym_index_name_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_index_type_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym__enum_row] = {
    .visible = false,
    .named = true,
  },
  [sym_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_variant_notes] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym__short_reference] = {
    .visible = false,
    .named = true,
  },
  [sym__long_reference] = {
    .visible = false,
    .named = true,
  },
  [sym__relationship] = {
    .visible = false,
    .named = true,
  },
  [sym_one_to_many] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_one_to_many] = {
    .visible = true,
    .named = true,
  },
  [sym_many_to_one] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_many_to_one] = {
    .visible = true,
    .named = true,
  },
  [sym_one_to_one] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_one_to_one] = {
    .visible = true,
    .named = true,
  },
  [sym_many_to_many] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_many_to_many] = {
    .visible = true,
    .named = true,
  },
  [sym__column_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_table_group] = {
    .visible = true,
    .named = true,
  },
  [sym__table_group_row] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_note_text] = {
    .visible = true,
    .named = true,
  },
  [sym__short_note] = {
    .visible = false,
    .named = true,
  },
  [sym__long_note] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_schema_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_project_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_settings_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_column_settings_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_indexes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_composite_index_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_index_settings_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variant_notes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_column_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_enum_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_from_column] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_key] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_note_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_null_setting] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_project_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_reference_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_schema_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_table_alias] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_table_group_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_table_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_table_name,
  },
  [2] = {
    [1] = alias_sym_project_name,
  },
  [3] = {
    [1] = alias_sym_table_name,
  },
  [4] = {
    [1] = alias_sym_table_alias,
  },
  [5] = {
    [1] = alias_sym_reference_name,
  },
  [6] = {
    [1] = alias_sym_enum_name,
  },
  [7] = {
    [1] = alias_sym_table_group_name,
  },
  [8] = {
    [1] = alias_sym_note_name,
  },
  [9] = {
    [0] = alias_sym_column_name,
    [1] = sym_type,
  },
  [10] = {
    [0] = alias_sym_column_name,
  },
  [11] = {
    [1] = alias_sym_keyword,
  },
  [12] = {
    [0] = alias_sym_table_name,
    [2] = alias_sym_column_name,
  },
  [13] = {
    [0] = alias_sym_from_column,
  },
  [14] = {
    [0] = alias_sym_identifier,
  },
  [15] = {
    [0] = alias_sym_key,
  },
  [16] = {
    [1] = alias_sym_schema_name,
    [3] = alias_sym_table_name,
  },
  [17] = {
    [0] = alias_sym_null_setting,
  },
  [18] = {
    [0] = alias_sym_schema_name,
    [2] = alias_sym_table_name,
    [4] = alias_sym_column_name,
  },
  [19] = {
    [1] = alias_sym_column_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__column_reference, 2,
    sym__column_reference,
    alias_sym_from_column,
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
  [65] = 6,
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
  [76] = 6,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 20,
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
  [97] = 12,
  [98] = 7,
  [99] = 18,
  [100] = 100,
  [101] = 27,
  [102] = 8,
  [103] = 13,
  [104] = 19,
  [105] = 9,
  [106] = 38,
  [107] = 35,
  [108] = 53,
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
  [121] = 53,
  [122] = 7,
  [123] = 18,
  [124] = 20,
  [125] = 27,
  [126] = 8,
  [127] = 13,
  [128] = 19,
  [129] = 9,
  [130] = 38,
  [131] = 131,
  [132] = 35,
  [133] = 53,
  [134] = 38,
  [135] = 12,
  [136] = 35,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 138,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 137,
  [153] = 153,
  [154] = 154,
  [155] = 138,
  [156] = 137,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 161,
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
  [185] = 182,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 180,
  [190] = 190,
  [191] = 161,
  [192] = 192,
  [193] = 168,
  [194] = 192,
  [195] = 180,
  [196] = 190,
  [197] = 161,
  [198] = 168,
  [199] = 192,
  [200] = 180,
  [201] = 190,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 204,
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
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 233,
  [249] = 249,
  [250] = 250,
  [251] = 236,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 233,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 257,
  [266] = 257,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 259,
  [271] = 259,
  [272] = 272,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(160);
      ADVANCE_MAP(
        '"', 9,
        '\'', 10,
        '(', 284,
        ')', 285,
        '*', 13,
        ',', 271,
        '-', 293,
        '.', 268,
        '/', 12,
        ':', 261,
        '<', 291,
        '>', 292,
        'E', 94,
        'I', 95,
        'N', 109,
        'P', 126,
        'R', 37,
        'T', 15,
        '[', 270,
        ']', 272,
        '`', 14,
        'a', 130,
        'b', 110,
        'd', 26,
        'e', 103,
        'f', 16,
        'i', 96,
        'n', 17,
        'p', 74,
        'r', 53,
        's', 142,
        't', 28,
        'u', 97,
        'v', 20,
        '{', 264,
        '}', 265,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(228);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(237);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 9,
        '\'', 10,
        ',', 271,
        '/', 12,
        'N', 107,
        ']', 272,
        'n', 114,
        '}', 265,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 9,
        '\'', 10,
        '/', 12,
        'I', 99,
        'N', 107,
        '[', 270,
        'i', 105,
        'n', 114,
        '}', 265,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 9,
        '\'', 11,
        '(', 284,
        '/', 12,
        ':', 261,
        '[', 270,
        ']', 272,
        '`', 14,
        '{', 264,
        '}', 265,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '`') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 't') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(239);
      END_STATE();
    case 14:
      if (lookahead == '`') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == 'y') ADVANCE(118);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 's') ADVANCE(141);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == 'v') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(290);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(279);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(253);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == 'j') ADVANCE(49);
      END_STATE();
    case 73:
      if (lookahead == 'j') ADVANCE(59);
      END_STATE();
    case 74:
      if (lookahead == 'k') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 75:
      if (lookahead == 'k') ADVANCE(50);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(289);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(288);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(296);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(295);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 119:
      if (lookahead == 'q') ADVANCE(152);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(269);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 147:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 154:
      if (lookahead == 'x') ADVANCE(136);
      END_STATE();
    case 155:
      if (lookahead == 'x') ADVANCE(54);
      END_STATE();
    case 156:
      if (lookahead == 'x') ADVANCE(55);
      END_STATE();
    case 157:
      if (lookahead == 'y') ADVANCE(3);
      END_STATE();
    case 158:
      if (lookahead == 'y') ADVANCE(273);
      END_STATE();
    case 159:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_expression);
      if (lookahead == '`') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_nil);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      if (lookahead == '\'') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '\'') ADVANCE(233);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(236);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '\'') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '*') ADVANCE(235);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(236);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_integer);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_timestamp);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_varchar);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_varchar);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(127);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_indexes);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_indexes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_Indexes);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_Indexes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_Enum);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_Ref);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(294);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_tablegroup);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_note);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_Note);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 29},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 234},
  [162] = {.lex_state = 234},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 231},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 234},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 231},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 234},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 234},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 234},
  [192] = {.lex_state = 231},
  [193] = {.lex_state = 231},
  [194] = {.lex_state = 231},
  [195] = {.lex_state = 234},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 234},
  [198] = {.lex_state = 231},
  [199] = {.lex_state = 231},
  [200] = {.lex_state = 234},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 231},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 234},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 7},
  [212] = {.lex_state = 7},
  [213] = {.lex_state = 7},
  [214] = {.lex_state = 7},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 7},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 7},
  [231] = {.lex_state = 7},
  [232] = {.lex_state = 7},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 7},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 7},
  [246] = {.lex_state = 7},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 7},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 2},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 7},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 7},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 7},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_expression] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [sym__comment] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_datetime] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_timestamp] = ACTIONS(1),
    [anon_sym_varchar] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_project] = ACTIONS(1),
    [anon_sym_Project] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_Table] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_primarykey] = ACTIONS(1),
    [anon_sym_pk] = ACTIONS(1),
    [anon_sym_notnull] = ACTIONS(1),
    [anon_sym_unique] = ACTIONS(1),
    [anon_sym_increment] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_indexes] = ACTIONS(1),
    [anon_sym_Indexes] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_Enum] = ACTIONS(1),
    [anon_sym_Ref] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_tablegroup] = ACTIONS(1),
    [anon_sym_TableGroup] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_Note] = ACTIONS(1),
  },
  [1] = {
    [sym_schema] = STATE(242),
    [sym__multiline_comment] = STATE(38),
    [sym__definition] = STATE(2),
    [sym_project] = STATE(2),
    [sym_table] = STATE(2),
    [sym_enum] = STATE(2),
    [sym_reference] = STATE(2),
    [sym__short_reference] = STATE(59),
    [sym__long_reference] = STATE(59),
    [sym_table_group] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_note] = STATE(2),
    [sym__short_note] = STATE(12),
    [sym__long_note] = STATE(12),
    [aux_sym_schema_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [anon_sym_project] = ACTIONS(9),
    [anon_sym_Project] = ACTIONS(9),
    [anon_sym_table] = ACTIONS(11),
    [anon_sym_Table] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(13),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_Enum] = ACTIONS(15),
    [anon_sym_Ref] = ACTIONS(13),
    [anon_sym_tablegroup] = ACTIONS(17),
    [anon_sym_TableGroup] = ACTIONS(17),
    [anon_sym_note] = ACTIONS(19),
    [anon_sym_Note] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(5), 1,
      sym__comment,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym__multiline_comment,
    ACTIONS(9), 2,
      anon_sym_project,
      anon_sym_Project,
    ACTIONS(11), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(13), 2,
      anon_sym_ref,
      anon_sym_Ref,
    ACTIONS(15), 2,
      anon_sym_enum,
      anon_sym_Enum,
    ACTIONS(17), 2,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(12), 2,
      sym__short_note,
      sym__long_note,
    STATE(59), 2,
      sym__short_reference,
      sym__long_reference,
    STATE(3), 9,
      sym__definition,
      sym_project,
      sym_table,
      sym_enum,
      sym_reference,
      sym_table_group,
      sym_comment,
      sym_note,
      aux_sym_schema_repeat1,
  [56] = 13,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym__comment,
    ACTIONS(28), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
      sym__multiline_comment,
    ACTIONS(31), 2,
      anon_sym_project,
      anon_sym_Project,
    ACTIONS(34), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(37), 2,
      anon_sym_ref,
      anon_sym_Ref,
    ACTIONS(40), 2,
      anon_sym_enum,
      anon_sym_Enum,
    ACTIONS(43), 2,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
    ACTIONS(46), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(12), 2,
      sym__short_note,
      sym__long_note,
    STATE(59), 2,
      sym__short_reference,
      sym__long_reference,
    STATE(3), 9,
      sym__definition,
      sym_project,
      sym_table,
      sym_enum,
      sym_reference,
      sym_table_group,
      sym_comment,
      sym_note,
      aux_sym_schema_repeat1,
  [112] = 3,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(51), 3,
      anon_sym_table,
      anon_sym_Table,
      anon_sym_LT,
    ACTIONS(49), 19,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_LT_GT,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [142] = 2,
    ACTIONS(57), 3,
      anon_sym_table,
      anon_sym_Table,
      anon_sym_LT,
    ACTIONS(55), 19,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_LT_GT,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [169] = 6,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(7), 1,
      sym_multiline_string,
    STATE(18), 1,
      sym_note_text,
    ACTIONS(65), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(59), 15,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [203] = 2,
    ACTIONS(69), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(67), 16,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [226] = 2,
    ACTIONS(73), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(71), 16,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [249] = 2,
    ACTIONS(77), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(75), 16,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [272] = 8,
    ACTIONS(79), 1,
      anon_sym_null,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    ACTIONS(85), 1,
      anon_sym_default,
    ACTIONS(87), 1,
      anon_sym_ref,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(12), 2,
      sym__short_note,
      sym__long_note,
    ACTIONS(83), 5,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
    STATE(177), 5,
      sym__unary_column_setting,
      sym__binary_column_setting,
      sym_default_setting,
      sym__inline_reference,
      sym_note,
  [307] = 9,
    ACTIONS(89), 1,
      sym__identifier,
    ACTIONS(91), 1,
      sym__comment,
    ACTIONS(93), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym__multiline_comment,
    ACTIONS(97), 2,
      anon_sym_indexes,
      anon_sym_Indexes,
    ACTIONS(99), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(97), 2,
      sym__short_note,
      sym__long_note,
    STATE(14), 6,
      sym__table_row,
      sym_column,
      sym_indexes,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [343] = 2,
    ACTIONS(103), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(101), 15,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [365] = 2,
    ACTIONS(107), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(105), 15,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [387] = 9,
    ACTIONS(109), 1,
      sym__identifier,
    ACTIONS(112), 1,
      sym__comment,
    ACTIONS(115), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym__multiline_comment,
    ACTIONS(120), 2,
      anon_sym_indexes,
      anon_sym_Indexes,
    ACTIONS(123), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(97), 2,
      sym__short_note,
      sym__long_note,
    STATE(14), 6,
      sym__table_row,
      sym_column,
      sym_indexes,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [423] = 9,
    ACTIONS(89), 1,
      sym__identifier,
    ACTIONS(91), 1,
      sym__comment,
    ACTIONS(93), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym__multiline_comment,
    ACTIONS(97), 2,
      anon_sym_indexes,
      anon_sym_Indexes,
    ACTIONS(99), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(97), 2,
      sym__short_note,
      sym__long_note,
    STATE(22), 6,
      sym__table_row,
      sym_column,
      sym_indexes,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [459] = 9,
    ACTIONS(89), 1,
      sym__identifier,
    ACTIONS(91), 1,
      sym__comment,
    ACTIONS(93), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym__multiline_comment,
    ACTIONS(97), 2,
      anon_sym_indexes,
      anon_sym_Indexes,
    ACTIONS(99), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(97), 2,
      sym__short_note,
      sym__long_note,
    STATE(14), 6,
      sym__table_row,
      sym_column,
      sym_indexes,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [495] = 9,
    ACTIONS(89), 1,
      sym__identifier,
    ACTIONS(91), 1,
      sym__comment,
    ACTIONS(93), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym__multiline_comment,
    ACTIONS(97), 2,
      anon_sym_indexes,
      anon_sym_Indexes,
    ACTIONS(99), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(97), 2,
      sym__short_note,
      sym__long_note,
    STATE(11), 6,
      sym__table_row,
      sym_column,
      sym_indexes,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [531] = 2,
    ACTIONS(132), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(130), 15,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [553] = 2,
    ACTIONS(136), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(134), 15,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [575] = 2,
    ACTIONS(140), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(138), 15,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [597] = 9,
    ACTIONS(89), 1,
      sym__identifier,
    ACTIONS(91), 1,
      sym__comment,
    ACTIONS(93), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym__multiline_comment,
    ACTIONS(97), 2,
      anon_sym_indexes,
      anon_sym_Indexes,
    ACTIONS(99), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(97), 2,
      sym__short_note,
      sym__long_note,
    STATE(14), 6,
      sym__table_row,
      sym_column,
      sym_indexes,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [633] = 9,
    ACTIONS(89), 1,
      sym__identifier,
    ACTIONS(91), 1,
      sym__comment,
    ACTIONS(93), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym__multiline_comment,
    ACTIONS(97), 2,
      anon_sym_indexes,
      anon_sym_Indexes,
    ACTIONS(99), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(97), 2,
      sym__short_note,
      sym__long_note,
    STATE(14), 6,
      sym__table_row,
      sym_column,
      sym_indexes,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [669] = 9,
    ACTIONS(89), 1,
      sym__identifier,
    ACTIONS(91), 1,
      sym__comment,
    ACTIONS(93), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym__multiline_comment,
    ACTIONS(97), 2,
      anon_sym_indexes,
      anon_sym_Indexes,
    ACTIONS(99), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(97), 2,
      sym__short_note,
      sym__long_note,
    STATE(25), 6,
      sym__table_row,
      sym_column,
      sym_indexes,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [705] = 9,
    ACTIONS(89), 1,
      sym__identifier,
    ACTIONS(91), 1,
      sym__comment,
    ACTIONS(93), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym__multiline_comment,
    ACTIONS(97), 2,
      anon_sym_indexes,
      anon_sym_Indexes,
    ACTIONS(99), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(97), 2,
      sym__short_note,
      sym__long_note,
    STATE(16), 6,
      sym__table_row,
      sym_column,
      sym_indexes,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [741] = 9,
    ACTIONS(89), 1,
      sym__identifier,
    ACTIONS(91), 1,
      sym__comment,
    ACTIONS(93), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym__multiline_comment,
    ACTIONS(97), 2,
      anon_sym_indexes,
      anon_sym_Indexes,
    ACTIONS(99), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(97), 2,
      sym__short_note,
      sym__long_note,
    STATE(14), 6,
      sym__table_row,
      sym_column,
      sym_indexes,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [777] = 9,
    ACTIONS(89), 1,
      sym__identifier,
    ACTIONS(91), 1,
      sym__comment,
    ACTIONS(93), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym__multiline_comment,
    ACTIONS(97), 2,
      anon_sym_indexes,
      anon_sym_Indexes,
    ACTIONS(99), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(97), 2,
      sym__short_note,
      sym__long_note,
    STATE(29), 6,
      sym__table_row,
      sym_column,
      sym_indexes,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [813] = 2,
    ACTIONS(150), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(148), 15,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [835] = 7,
    ACTIONS(79), 1,
      anon_sym_null,
    ACTIONS(85), 1,
      anon_sym_default,
    ACTIONS(87), 1,
      anon_sym_ref,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(12), 2,
      sym__short_note,
      sym__long_note,
    ACTIONS(152), 5,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
    STATE(205), 5,
      sym__unary_column_setting,
      sym__binary_column_setting,
      sym_default_setting,
      sym__inline_reference,
      sym_note,
  [867] = 9,
    ACTIONS(89), 1,
      sym__identifier,
    ACTIONS(91), 1,
      sym__comment,
    ACTIONS(93), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym__multiline_comment,
    ACTIONS(97), 2,
      anon_sym_indexes,
      anon_sym_Indexes,
    ACTIONS(99), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(97), 2,
      sym__short_note,
      sym__long_note,
    STATE(14), 6,
      sym__table_row,
      sym_column,
      sym_indexes,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [903] = 9,
    ACTIONS(89), 1,
      sym__identifier,
    ACTIONS(91), 1,
      sym__comment,
    ACTIONS(93), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym__multiline_comment,
    ACTIONS(97), 2,
      anon_sym_indexes,
      anon_sym_Indexes,
    ACTIONS(99), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(97), 2,
      sym__short_note,
      sym__long_note,
    STATE(21), 6,
      sym__table_row,
      sym_column,
      sym_indexes,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [939] = 2,
    ACTIONS(160), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(158), 14,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [960] = 2,
    ACTIONS(164), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(162), 14,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [981] = 2,
    ACTIONS(168), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(166), 14,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1002] = 2,
    ACTIONS(172), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(170), 14,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1023] = 2,
    ACTIONS(176), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(174), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1043] = 2,
    ACTIONS(180), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(178), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1063] = 2,
    ACTIONS(184), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(182), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1083] = 2,
    ACTIONS(188), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(186), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1103] = 2,
    ACTIONS(192), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(190), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1123] = 2,
    ACTIONS(196), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(194), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1143] = 2,
    ACTIONS(200), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(198), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1163] = 2,
    ACTIONS(204), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(202), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1183] = 2,
    ACTIONS(208), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(206), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1203] = 2,
    ACTIONS(212), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(210), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1223] = 2,
    ACTIONS(216), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(214), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1243] = 2,
    ACTIONS(220), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(218), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1263] = 2,
    ACTIONS(224), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(222), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1283] = 2,
    ACTIONS(228), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(226), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1303] = 2,
    ACTIONS(232), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(230), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1323] = 2,
    ACTIONS(236), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(234), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1343] = 2,
    ACTIONS(240), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(238), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1363] = 2,
    ACTIONS(244), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(242), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1383] = 2,
    ACTIONS(248), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(246), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1403] = 7,
    ACTIONS(250), 1,
      anon_sym_RBRACK,
    ACTIONS(254), 1,
      anon_sym_name,
    ACTIONS(256), 1,
      anon_sym_type,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(12), 2,
      sym__short_note,
      sym__long_note,
    ACTIONS(252), 3,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_unique,
    STATE(166), 5,
      sym__unary_index_setting,
      sym__binary_index_setting,
      sym_index_name_setting,
      sym_index_type_setting,
      sym_note,
  [1433] = 2,
    ACTIONS(260), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(258), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1453] = 2,
    ACTIONS(264), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(262), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1473] = 2,
    ACTIONS(268), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(266), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1493] = 2,
    ACTIONS(272), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(270), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1513] = 2,
    ACTIONS(276), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(274), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1533] = 8,
    ACTIONS(278), 1,
      sym__identifier,
    ACTIONS(280), 1,
      sym__comment,
    ACTIONS(282), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      sym__multiline_comment,
    ACTIONS(286), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(135), 2,
      sym__short_note,
      sym__long_note,
    STATE(61), 5,
      sym_key_value,
      sym__project_row,
      sym_comment,
      sym_note,
      aux_sym_project_repeat1,
  [1564] = 8,
    ACTIONS(278), 1,
      sym__identifier,
    ACTIONS(280), 1,
      sym__comment,
    ACTIONS(282), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      sym__multiline_comment,
    ACTIONS(286), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(135), 2,
      sym__short_note,
      sym__long_note,
    STATE(62), 5,
      sym_key_value,
      sym__project_row,
      sym_comment,
      sym_note,
      aux_sym_project_repeat1,
  [1595] = 8,
    ACTIONS(290), 1,
      sym__identifier,
    ACTIONS(293), 1,
      sym__comment,
    ACTIONS(296), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      sym__multiline_comment,
    ACTIONS(301), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(135), 2,
      sym__short_note,
      sym__long_note,
    STATE(62), 5,
      sym_key_value,
      sym__project_row,
      sym_comment,
      sym_note,
      aux_sym_project_repeat1,
  [1626] = 6,
    ACTIONS(254), 1,
      anon_sym_name,
    ACTIONS(256), 1,
      anon_sym_type,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(12), 2,
      sym__short_note,
      sym__long_note,
    ACTIONS(304), 3,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_unique,
    STATE(227), 5,
      sym__unary_index_setting,
      sym__binary_index_setting,
      sym_index_name_setting,
      sym_index_type_setting,
      sym_note,
  [1653] = 3,
    ACTIONS(306), 1,
      sym__identifier,
    STATE(78), 1,
      sym_type,
    ACTIONS(308), 10,
      anon_sym_bool,
      anon_sym_boolean,
      anon_sym_date,
      anon_sym_datetime,
      anon_sym_int,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_text,
      anon_sym_timestamp,
      anon_sym_varchar,
  [1672] = 6,
    ACTIONS(310), 1,
      sym_string,
    ACTIONS(312), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(98), 1,
      sym_multiline_string,
    STATE(99), 1,
      sym_note_text,
    ACTIONS(59), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(65), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [1697] = 6,
    ACTIONS(314), 1,
      sym__identifier,
    STATE(220), 1,
      sym_value,
    ACTIONS(318), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(320), 2,
      anon_sym_null,
      anon_sym_nil,
    STATE(87), 2,
      sym_boolean,
      sym_null,
    ACTIONS(316), 3,
      sym_string,
      sym_expression,
      sym_number,
  [1721] = 7,
    ACTIONS(322), 1,
      sym__identifier,
    ACTIONS(324), 1,
      sym__comment,
    ACTIONS(326), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym__multiline_comment,
    STATE(70), 5,
      sym__index_row,
      sym_index,
      sym_composite_index,
      sym_comment,
      aux_sym_indexes_repeat1,
  [1747] = 7,
    ACTIONS(332), 1,
      sym__identifier,
    ACTIONS(335), 1,
      sym__comment,
    ACTIONS(338), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym__multiline_comment,
    STATE(68), 5,
      sym__index_row,
      sym_index,
      sym_composite_index,
      sym_comment,
      aux_sym_indexes_repeat1,
  [1773] = 6,
    ACTIONS(314), 1,
      sym__identifier,
    STATE(92), 1,
      sym_value,
    ACTIONS(318), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(320), 2,
      anon_sym_null,
      anon_sym_nil,
    STATE(87), 2,
      sym_boolean,
      sym_null,
    ACTIONS(316), 3,
      sym_string,
      sym_expression,
      sym_number,
  [1797] = 7,
    ACTIONS(322), 1,
      sym__identifier,
    ACTIONS(324), 1,
      sym__comment,
    ACTIONS(326), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      sym__multiline_comment,
    STATE(68), 5,
      sym__index_row,
      sym_index,
      sym_composite_index,
      sym_comment,
      aux_sym_indexes_repeat1,
  [1823] = 6,
    ACTIONS(314), 1,
      sym__identifier,
    STATE(226), 1,
      sym_value,
    ACTIONS(318), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(320), 2,
      anon_sym_null,
      anon_sym_nil,
    STATE(87), 2,
      sym_boolean,
      sym_null,
    ACTIONS(316), 3,
      sym_string,
      sym_expression,
      sym_number,
  [1847] = 6,
    ACTIONS(314), 1,
      sym__identifier,
    STATE(225), 1,
      sym_value,
    ACTIONS(318), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(320), 2,
      anon_sym_null,
      anon_sym_nil,
    STATE(87), 2,
      sym_boolean,
      sym_null,
    ACTIONS(316), 3,
      sym_string,
      sym_expression,
      sym_number,
  [1871] = 6,
    ACTIONS(351), 1,
      sym__comment,
    ACTIONS(354), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      sym__multiline_comment,
    ACTIONS(348), 2,
      sym__identifier,
      sym_string,
    STATE(73), 4,
      sym__enum_row,
      sym_variant,
      sym_comment,
      aux_sym_enum_repeat1,
  [1894] = 6,
    ACTIONS(324), 1,
      sym__comment,
    ACTIONS(326), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      sym__multiline_comment,
    ACTIONS(359), 2,
      sym__identifier,
      sym_string,
    STATE(73), 4,
      sym__enum_row,
      sym_variant,
      sym_comment,
      aux_sym_enum_repeat1,
  [1917] = 6,
    ACTIONS(324), 1,
      sym__comment,
    ACTIONS(326), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      sym__multiline_comment,
    ACTIONS(359), 2,
      sym__identifier,
      sym_string,
    STATE(74), 4,
      sym__enum_row,
      sym_variant,
      sym_comment,
      aux_sym_enum_repeat1,
  [1940] = 6,
    ACTIONS(365), 1,
      sym_string,
    ACTIONS(367), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(122), 1,
      sym_multiline_string,
    STATE(123), 1,
      sym_note_text,
    ACTIONS(59), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(65), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1963] = 4,
    ACTIONS(373), 1,
      anon_sym_LBRACK,
    STATE(94), 1,
      sym_column_settings,
    ACTIONS(371), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(369), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [1982] = 4,
    ACTIONS(373), 1,
      anon_sym_LBRACK,
    STATE(95), 1,
      sym_column_settings,
    ACTIONS(377), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(375), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [2001] = 2,
    ACTIONS(381), 4,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(379), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [2015] = 2,
    ACTIONS(138), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(140), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [2028] = 6,
    ACTIONS(324), 1,
      sym__comment,
    ACTIONS(326), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(383), 1,
      sym__identifier,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      sym__multiline_comment,
    STATE(83), 3,
      sym__table_group_row,
      sym_comment,
      aux_sym_table_group_repeat1,
  [2049] = 2,
    ACTIONS(389), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(387), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [2062] = 6,
    ACTIONS(391), 1,
      sym__identifier,
    ACTIONS(394), 1,
      sym__comment,
    ACTIONS(397), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      sym__multiline_comment,
    STATE(83), 3,
      sym__table_group_row,
      sym_comment,
      aux_sym_table_group_repeat1,
  [2083] = 2,
    ACTIONS(404), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(402), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [2096] = 6,
    ACTIONS(324), 1,
      sym__comment,
    ACTIONS(326), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(383), 1,
      sym__identifier,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      sym__multiline_comment,
    STATE(83), 3,
      sym__table_group_row,
      sym_comment,
      aux_sym_table_group_repeat1,
  [2117] = 2,
    ACTIONS(408), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(410), 5,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2130] = 2,
    ACTIONS(412), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(414), 5,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2143] = 2,
    ACTIONS(416), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(418), 5,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2156] = 5,
    ACTIONS(420), 1,
      anon_sym_LT,
    ACTIONS(422), 1,
      anon_sym_GT,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(426), 1,
      anon_sym_LT_GT,
    STATE(203), 4,
      sym_inline_one_to_many,
      sym_inline_many_to_one,
      sym_inline_one_to_one,
      sym_inline_many_to_many,
  [2175] = 2,
    ACTIONS(428), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(430), 5,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2188] = 2,
    ACTIONS(434), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(432), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [2201] = 2,
    ACTIONS(436), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(438), 5,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2214] = 2,
    ACTIONS(442), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(440), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [2227] = 2,
    ACTIONS(446), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(444), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [2240] = 2,
    ACTIONS(450), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(448), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [2253] = 2,
    ACTIONS(454), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(452), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [2266] = 2,
    ACTIONS(101), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(103), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [2279] = 2,
    ACTIONS(67), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(69), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [2292] = 2,
    ACTIONS(130), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(132), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [2305] = 6,
    ACTIONS(324), 1,
      sym__comment,
    ACTIONS(326), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(383), 1,
      sym__identifier,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      sym__multiline_comment,
    STATE(81), 3,
      sym__table_group_row,
      sym_comment,
      aux_sym_table_group_repeat1,
  [2326] = 2,
    ACTIONS(148), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(150), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [2339] = 2,
    ACTIONS(71), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(73), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [2352] = 2,
    ACTIONS(105), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(107), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [2365] = 2,
    ACTIONS(134), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(136), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [2378] = 2,
    ACTIONS(75), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(77), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [2391] = 2,
    ACTIONS(186), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(188), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [2404] = 2,
    ACTIONS(174), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(176), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [2417] = 2,
    ACTIONS(246), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(248), 5,
      sym__identifier,
      anon_sym_indexes,
      anon_sym_Indexes,
      anon_sym_note,
      anon_sym_Note,
  [2430] = 6,
    ACTIONS(324), 1,
      sym__comment,
    ACTIONS(326), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(383), 1,
      sym__identifier,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      sym__multiline_comment,
    STATE(85), 3,
      sym__table_group_row,
      sym_comment,
      aux_sym_table_group_repeat1,
  [2451] = 3,
    ACTIONS(460), 1,
      sym__identifier,
    STATE(158), 1,
      sym__column_reference,
    STATE(263), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [2465] = 3,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    STATE(140), 1,
      sym_index_settings,
    ACTIONS(462), 5,
      sym__identifier,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [2479] = 3,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    STATE(153), 1,
      sym_variant_notes,
    ACTIONS(466), 5,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2493] = 3,
    ACTIONS(460), 1,
      sym__identifier,
    STATE(158), 1,
      sym__column_reference,
    STATE(43), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [2507] = 3,
    ACTIONS(460), 1,
      sym__identifier,
    STATE(158), 1,
      sym__column_reference,
    STATE(237), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [2521] = 3,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    STATE(147), 1,
      sym_index_settings,
    ACTIONS(470), 5,
      sym__identifier,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [2535] = 3,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    STATE(148), 1,
      sym_index_settings,
    ACTIONS(472), 5,
      sym__identifier,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [2549] = 3,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    STATE(150), 1,
      sym_index_settings,
    ACTIONS(474), 5,
      sym__identifier,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [2563] = 3,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    STATE(151), 1,
      sym_index_settings,
    ACTIONS(476), 5,
      sym__identifier,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [2577] = 3,
    ACTIONS(460), 1,
      sym__identifier,
    STATE(158), 1,
      sym__column_reference,
    STATE(42), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [2591] = 4,
    ACTIONS(478), 1,
      anon_sym_RBRACK,
    STATE(165), 1,
      sym_note,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(12), 2,
      sym__short_note,
      sym__long_note,
  [2606] = 1,
    ACTIONS(246), 6,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [2615] = 2,
    ACTIONS(67), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(69), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2626] = 2,
    ACTIONS(130), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(132), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2637] = 2,
    ACTIONS(138), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(140), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2648] = 2,
    ACTIONS(148), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(150), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2659] = 2,
    ACTIONS(71), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(73), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2670] = 2,
    ACTIONS(105), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(107), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2681] = 2,
    ACTIONS(134), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(136), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2692] = 2,
    ACTIONS(75), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(77), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2703] = 2,
    ACTIONS(186), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(188), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2714] = 6,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_DOT,
    ACTIONS(484), 1,
      anon_sym_as,
    ACTIONS(486), 1,
      anon_sym_LBRACK,
    STATE(188), 1,
      sym__table_alias,
    STATE(239), 1,
      sym_table_settings,
  [2733] = 2,
    ACTIONS(174), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(176), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2744] = 2,
    ACTIONS(246), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(248), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2755] = 1,
    ACTIONS(186), 6,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [2764] = 2,
    ACTIONS(101), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(103), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2775] = 1,
    ACTIONS(174), 6,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [2784] = 5,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_multiline_string,
    STATE(256), 1,
      sym_note_text,
  [2800] = 5,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_multiline_string,
    STATE(266), 1,
      sym_note_text,
  [2816] = 1,
    ACTIONS(492), 5,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2824] = 1,
    ACTIONS(494), 5,
      sym__identifier,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [2832] = 1,
    ACTIONS(496), 5,
      sym__identifier,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [2840] = 3,
    STATE(210), 1,
      sym_note,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(12), 2,
      sym__short_note,
      sym__long_note,
  [2852] = 1,
    ACTIONS(498), 5,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2860] = 5,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(500), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_multiline_string,
    STATE(265), 1,
      sym_note_text,
  [2876] = 1,
    ACTIONS(502), 5,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2884] = 1,
    ACTIONS(504), 5,
      sym__identifier,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [2892] = 1,
    ACTIONS(474), 5,
      sym__identifier,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [2900] = 1,
    ACTIONS(476), 5,
      sym__identifier,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [2908] = 1,
    ACTIONS(506), 5,
      sym__identifier,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [2916] = 1,
    ACTIONS(508), 5,
      sym__identifier,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [2924] = 1,
    ACTIONS(510), 5,
      sym__identifier,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
  [2932] = 5,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_multiline_string,
    STATE(248), 1,
      sym_note_text,
  [2948] = 1,
    ACTIONS(514), 5,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2956] = 5,
    ACTIONS(484), 1,
      anon_sym_as,
    ACTIONS(486), 1,
      anon_sym_LBRACK,
    ACTIONS(516), 1,
      anon_sym_LBRACE,
    STATE(170), 1,
      sym__table_alias,
    STATE(264), 1,
      sym_table_settings,
  [2972] = 5,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_multiline_string,
    STATE(257), 1,
      sym_note_text,
  [2988] = 5,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_multiline_string,
    STATE(233), 1,
      sym_note_text,
  [3004] = 1,
    ACTIONS(522), 4,
      sym__identifier,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [3011] = 4,
    ACTIONS(524), 1,
      anon_sym_LT,
    ACTIONS(526), 1,
      anon_sym_GT,
    ACTIONS(528), 1,
      anon_sym_DASH,
    ACTIONS(530), 1,
      anon_sym_LT_GT,
  [3024] = 4,
    ACTIONS(532), 1,
      anon_sym_COLON,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_RBRACK,
    STATE(173), 1,
      aux_sym_table_settings_repeat1,
  [3037] = 3,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
    STATE(160), 1,
      aux_sym_index_settings_repeat1,
  [3047] = 3,
    ACTIONS(543), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(545), 1,
      anon_sym_STAR_SLASH,
    STATE(185), 1,
      aux_sym_multiline_string_repeat1,
  [3057] = 3,
    ACTIONS(543), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(547), 1,
      anon_sym_STAR_SLASH,
    STATE(185), 1,
      aux_sym_multiline_string_repeat1,
  [3067] = 3,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      anon_sym_RBRACK,
    STATE(171), 1,
      aux_sym_variant_notes_repeat1,
  [3077] = 3,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      aux_sym_column_settings_repeat1,
  [3087] = 3,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      anon_sym_RBRACK,
    STATE(163), 1,
      aux_sym_variant_notes_repeat1,
  [3097] = 3,
    ACTIONS(559), 1,
      anon_sym_COMMA,
    ACTIONS(561), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      aux_sym_index_settings_repeat1,
  [3107] = 3,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_composite_index_repeat1,
  [3117] = 3,
    ACTIONS(567), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(569), 1,
      aux_sym_multiline_string_token1,
    STATE(192), 1,
      aux_sym_multiline_string_repeat1,
  [3127] = 3,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_composite_index_repeat1,
  [3137] = 3,
    ACTIONS(486), 1,
      anon_sym_LBRACK,
    ACTIONS(573), 1,
      anon_sym_LBRACE,
    STATE(253), 1,
      sym_table_settings,
  [3147] = 3,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    ACTIONS(578), 1,
      anon_sym_RBRACK,
    STATE(171), 1,
      aux_sym_variant_notes_repeat1,
  [3157] = 3,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      aux_sym_column_settings_repeat1,
  [3167] = 3,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(585), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      aux_sym_table_settings_repeat1,
  [3177] = 3,
    ACTIONS(559), 1,
      anon_sym_COMMA,
    ACTIONS(587), 1,
      anon_sym_RBRACK,
    STATE(160), 1,
      aux_sym_index_settings_repeat1,
  [3187] = 3,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_composite_index_repeat1,
  [3197] = 3,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      aux_sym_table_settings_repeat1,
  [3207] = 3,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(596), 1,
      anon_sym_RBRACK,
    STATE(164), 1,
      aux_sym_column_settings_repeat1,
  [3217] = 2,
    ACTIONS(532), 1,
      anon_sym_COLON,
    ACTIONS(598), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3225] = 3,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    ACTIONS(603), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      aux_sym_table_settings_repeat1,
  [3235] = 3,
    ACTIONS(543), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(605), 1,
      anon_sym_STAR_SLASH,
    STATE(162), 1,
      aux_sym_multiline_string_repeat1,
  [3245] = 3,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      aux_sym_composite_index_repeat1,
  [3255] = 3,
    ACTIONS(609), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_multiline_string_token1,
    STATE(182), 1,
      aux_sym_multiline_string_repeat1,
  [3265] = 3,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_composite_index_repeat1,
  [3275] = 3,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(616), 1,
      anon_sym_RBRACK,
    STATE(176), 1,
      aux_sym_table_settings_repeat1,
  [3285] = 3,
    ACTIONS(609), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(618), 1,
      aux_sym_multiline_string_token1,
    STATE(185), 1,
      aux_sym_multiline_string_repeat1,
  [3295] = 3,
    ACTIONS(621), 1,
      sym__identifier,
    ACTIONS(623), 1,
      anon_sym_COLON,
    ACTIONS(625), 1,
      anon_sym_LBRACE,
  [3305] = 3,
    ACTIONS(627), 1,
      sym__identifier,
    ACTIONS(629), 1,
      anon_sym_RBRACK,
    STATE(184), 1,
      sym_key_value,
  [3315] = 3,
    ACTIONS(486), 1,
      anon_sym_LBRACK,
    ACTIONS(631), 1,
      anon_sym_LBRACE,
    STATE(235), 1,
      sym_table_settings,
  [3325] = 3,
    ACTIONS(543), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(633), 1,
      anon_sym_STAR_SLASH,
    STATE(191), 1,
      aux_sym_multiline_string_repeat1,
  [3335] = 3,
    ACTIONS(635), 1,
      sym__identifier,
    ACTIONS(637), 1,
      anon_sym_COLON,
    ACTIONS(639), 1,
      anon_sym_LBRACE,
  [3345] = 3,
    ACTIONS(543), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(641), 1,
      anon_sym_STAR_SLASH,
    STATE(185), 1,
      aux_sym_multiline_string_repeat1,
  [3355] = 3,
    ACTIONS(569), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(643), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(182), 1,
      aux_sym_multiline_string_repeat1,
  [3365] = 3,
    ACTIONS(569), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(645), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(194), 1,
      aux_sym_multiline_string_repeat1,
  [3375] = 3,
    ACTIONS(569), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(647), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(182), 1,
      aux_sym_multiline_string_repeat1,
  [3385] = 3,
    ACTIONS(543), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(649), 1,
      anon_sym_STAR_SLASH,
    STATE(197), 1,
      aux_sym_multiline_string_repeat1,
  [3395] = 3,
    ACTIONS(651), 1,
      sym__identifier,
    ACTIONS(653), 1,
      anon_sym_COLON,
    ACTIONS(655), 1,
      anon_sym_LBRACE,
  [3405] = 3,
    ACTIONS(543), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(657), 1,
      anon_sym_STAR_SLASH,
    STATE(185), 1,
      aux_sym_multiline_string_repeat1,
  [3415] = 3,
    ACTIONS(569), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(659), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(199), 1,
      aux_sym_multiline_string_repeat1,
  [3425] = 3,
    ACTIONS(569), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(661), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(182), 1,
      aux_sym_multiline_string_repeat1,
  [3435] = 3,
    ACTIONS(543), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(663), 1,
      anon_sym_STAR_SLASH,
    STATE(161), 1,
      aux_sym_multiline_string_repeat1,
  [3445] = 3,
    ACTIONS(665), 1,
      sym__identifier,
    ACTIONS(667), 1,
      anon_sym_COLON,
    ACTIONS(669), 1,
      anon_sym_LBRACE,
  [3455] = 2,
    ACTIONS(671), 1,
      sym__identifier,
    ACTIONS(673), 1,
      anon_sym_LBRACE,
  [3462] = 1,
    ACTIONS(675), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3467] = 1,
    ACTIONS(609), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_multiline_string_token1,
  [3472] = 1,
    ACTIONS(583), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3477] = 1,
    ACTIONS(609), 2,
      aux_sym_multiline_string_token1,
      anon_sym_STAR_SLASH,
  [3482] = 2,
    ACTIONS(677), 1,
      sym__identifier,
    ACTIONS(679), 1,
      sym_expression,
  [3489] = 1,
    ACTIONS(681), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3494] = 2,
    ACTIONS(683), 1,
      sym__identifier,
    STATE(229), 1,
      sym_key_value,
  [3501] = 1,
    ACTIONS(578), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3506] = 2,
    ACTIONS(460), 1,
      sym__identifier,
    STATE(31), 1,
      sym__column_reference,
  [3513] = 2,
    ACTIONS(460), 1,
      sym__identifier,
    STATE(32), 1,
      sym__column_reference,
  [3520] = 2,
    ACTIONS(460), 1,
      sym__identifier,
    STATE(33), 1,
      sym__column_reference,
  [3527] = 2,
    ACTIONS(460), 1,
      sym__identifier,
    STATE(34), 1,
      sym__column_reference,
  [3534] = 1,
    ACTIONS(685), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3539] = 2,
    ACTIONS(687), 1,
      sym__identifier,
    ACTIONS(689), 1,
      sym_expression,
  [3546] = 1,
    ACTIONS(691), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3551] = 1,
    ACTIONS(592), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3556] = 2,
    ACTIONS(693), 1,
      anon_sym_COLON,
    ACTIONS(695), 1,
      anon_sym_LBRACE,
  [3563] = 1,
    ACTIONS(697), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3568] = 1,
    ACTIONS(699), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3573] = 1,
    ACTIONS(701), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3578] = 1,
    ACTIONS(703), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3583] = 1,
    ACTIONS(705), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3588] = 1,
    ACTIONS(707), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3593] = 1,
    ACTIONS(709), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3598] = 1,
    ACTIONS(541), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3603] = 2,
    ACTIONS(460), 1,
      sym__identifier,
    STATE(221), 1,
      sym__column_reference,
  [3610] = 1,
    ACTIONS(603), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3615] = 2,
    ACTIONS(460), 1,
      sym__identifier,
    STATE(222), 1,
      sym__column_reference,
  [3622] = 2,
    ACTIONS(460), 1,
      sym__identifier,
    STATE(223), 1,
      sym__column_reference,
  [3629] = 2,
    ACTIONS(460), 1,
      sym__identifier,
    STATE(224), 1,
      sym__column_reference,
  [3636] = 1,
    ACTIONS(711), 1,
      anon_sym_RBRACE,
  [3640] = 1,
    ACTIONS(713), 1,
      anon_sym_LBRACE,
  [3644] = 1,
    ACTIONS(715), 1,
      anon_sym_LBRACE,
  [3648] = 1,
    ACTIONS(717), 1,
      anon_sym_LF,
  [3652] = 1,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
  [3656] = 1,
    ACTIONS(721), 1,
      sym__identifier,
  [3660] = 1,
    ACTIONS(631), 1,
      anon_sym_LBRACE,
  [3664] = 1,
    ACTIONS(723), 1,
      anon_sym_LBRACE,
  [3668] = 1,
    ACTIONS(725), 1,
      anon_sym_COLON,
  [3672] = 1,
    ACTIONS(727), 1,
      ts_builtin_sym_end,
  [3676] = 1,
    ACTIONS(729), 1,
      anon_sym_COLON,
  [3680] = 1,
    ACTIONS(731), 1,
      anon_sym_DOT,
  [3684] = 1,
    ACTIONS(733), 1,
      sym__identifier,
  [3688] = 1,
    ACTIONS(735), 1,
      sym__identifier,
  [3692] = 1,
    ACTIONS(737), 1,
      anon_sym_COLON,
  [3696] = 1,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
  [3700] = 1,
    ACTIONS(741), 1,
      sym__identifier,
  [3704] = 1,
    ACTIONS(743), 1,
      anon_sym_LBRACE,
  [3708] = 1,
    ACTIONS(745), 1,
      anon_sym_LF,
  [3712] = 1,
    ACTIONS(747), 1,
      anon_sym_LBRACE,
  [3716] = 1,
    ACTIONS(749), 1,
      anon_sym_LBRACE,
  [3720] = 1,
    ACTIONS(751), 1,
      anon_sym_COLON,
  [3724] = 1,
    ACTIONS(753), 1,
      sym__identifier,
  [3728] = 1,
    ACTIONS(755), 1,
      anon_sym_RBRACE,
  [3732] = 1,
    ACTIONS(757), 1,
      anon_sym_RBRACE,
  [3736] = 1,
    ACTIONS(759), 1,
      anon_sym_LBRACE,
  [3740] = 1,
    ACTIONS(761), 1,
      anon_sym_LBRACE,
  [3744] = 1,
    ACTIONS(763), 1,
      anon_sym_LBRACE,
  [3748] = 1,
    ACTIONS(765), 1,
      sym__identifier,
  [3752] = 1,
    ACTIONS(767), 1,
      anon_sym_LBRACE,
  [3756] = 1,
    ACTIONS(769), 1,
      anon_sym_RBRACE,
  [3760] = 1,
    ACTIONS(573), 1,
      anon_sym_LBRACE,
  [3764] = 1,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
  [3768] = 1,
    ACTIONS(773), 1,
      anon_sym_RBRACE,
  [3772] = 1,
    ACTIONS(775), 1,
      anon_sym_LBRACE,
  [3776] = 1,
    ACTIONS(777), 1,
      sym__identifier,
  [3780] = 1,
    ACTIONS(779), 1,
      anon_sym_LBRACE,
  [3784] = 1,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
  [3788] = 1,
    ACTIONS(783), 1,
      anon_sym_LBRACE,
  [3792] = 1,
    ACTIONS(532), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 142,
  [SMALL_STATE(6)] = 169,
  [SMALL_STATE(7)] = 203,
  [SMALL_STATE(8)] = 226,
  [SMALL_STATE(9)] = 249,
  [SMALL_STATE(10)] = 272,
  [SMALL_STATE(11)] = 307,
  [SMALL_STATE(12)] = 343,
  [SMALL_STATE(13)] = 365,
  [SMALL_STATE(14)] = 387,
  [SMALL_STATE(15)] = 423,
  [SMALL_STATE(16)] = 459,
  [SMALL_STATE(17)] = 495,
  [SMALL_STATE(18)] = 531,
  [SMALL_STATE(19)] = 553,
  [SMALL_STATE(20)] = 575,
  [SMALL_STATE(21)] = 597,
  [SMALL_STATE(22)] = 633,
  [SMALL_STATE(23)] = 669,
  [SMALL_STATE(24)] = 705,
  [SMALL_STATE(25)] = 741,
  [SMALL_STATE(26)] = 777,
  [SMALL_STATE(27)] = 813,
  [SMALL_STATE(28)] = 835,
  [SMALL_STATE(29)] = 867,
  [SMALL_STATE(30)] = 903,
  [SMALL_STATE(31)] = 939,
  [SMALL_STATE(32)] = 960,
  [SMALL_STATE(33)] = 981,
  [SMALL_STATE(34)] = 1002,
  [SMALL_STATE(35)] = 1023,
  [SMALL_STATE(36)] = 1043,
  [SMALL_STATE(37)] = 1063,
  [SMALL_STATE(38)] = 1083,
  [SMALL_STATE(39)] = 1103,
  [SMALL_STATE(40)] = 1123,
  [SMALL_STATE(41)] = 1143,
  [SMALL_STATE(42)] = 1163,
  [SMALL_STATE(43)] = 1183,
  [SMALL_STATE(44)] = 1203,
  [SMALL_STATE(45)] = 1223,
  [SMALL_STATE(46)] = 1243,
  [SMALL_STATE(47)] = 1263,
  [SMALL_STATE(48)] = 1283,
  [SMALL_STATE(49)] = 1303,
  [SMALL_STATE(50)] = 1323,
  [SMALL_STATE(51)] = 1343,
  [SMALL_STATE(52)] = 1363,
  [SMALL_STATE(53)] = 1383,
  [SMALL_STATE(54)] = 1403,
  [SMALL_STATE(55)] = 1433,
  [SMALL_STATE(56)] = 1453,
  [SMALL_STATE(57)] = 1473,
  [SMALL_STATE(58)] = 1493,
  [SMALL_STATE(59)] = 1513,
  [SMALL_STATE(60)] = 1533,
  [SMALL_STATE(61)] = 1564,
  [SMALL_STATE(62)] = 1595,
  [SMALL_STATE(63)] = 1626,
  [SMALL_STATE(64)] = 1653,
  [SMALL_STATE(65)] = 1672,
  [SMALL_STATE(66)] = 1697,
  [SMALL_STATE(67)] = 1721,
  [SMALL_STATE(68)] = 1747,
  [SMALL_STATE(69)] = 1773,
  [SMALL_STATE(70)] = 1797,
  [SMALL_STATE(71)] = 1823,
  [SMALL_STATE(72)] = 1847,
  [SMALL_STATE(73)] = 1871,
  [SMALL_STATE(74)] = 1894,
  [SMALL_STATE(75)] = 1917,
  [SMALL_STATE(76)] = 1940,
  [SMALL_STATE(77)] = 1963,
  [SMALL_STATE(78)] = 1982,
  [SMALL_STATE(79)] = 2001,
  [SMALL_STATE(80)] = 2015,
  [SMALL_STATE(81)] = 2028,
  [SMALL_STATE(82)] = 2049,
  [SMALL_STATE(83)] = 2062,
  [SMALL_STATE(84)] = 2083,
  [SMALL_STATE(85)] = 2096,
  [SMALL_STATE(86)] = 2117,
  [SMALL_STATE(87)] = 2130,
  [SMALL_STATE(88)] = 2143,
  [SMALL_STATE(89)] = 2156,
  [SMALL_STATE(90)] = 2175,
  [SMALL_STATE(91)] = 2188,
  [SMALL_STATE(92)] = 2201,
  [SMALL_STATE(93)] = 2214,
  [SMALL_STATE(94)] = 2227,
  [SMALL_STATE(95)] = 2240,
  [SMALL_STATE(96)] = 2253,
  [SMALL_STATE(97)] = 2266,
  [SMALL_STATE(98)] = 2279,
  [SMALL_STATE(99)] = 2292,
  [SMALL_STATE(100)] = 2305,
  [SMALL_STATE(101)] = 2326,
  [SMALL_STATE(102)] = 2339,
  [SMALL_STATE(103)] = 2352,
  [SMALL_STATE(104)] = 2365,
  [SMALL_STATE(105)] = 2378,
  [SMALL_STATE(106)] = 2391,
  [SMALL_STATE(107)] = 2404,
  [SMALL_STATE(108)] = 2417,
  [SMALL_STATE(109)] = 2430,
  [SMALL_STATE(110)] = 2451,
  [SMALL_STATE(111)] = 2465,
  [SMALL_STATE(112)] = 2479,
  [SMALL_STATE(113)] = 2493,
  [SMALL_STATE(114)] = 2507,
  [SMALL_STATE(115)] = 2521,
  [SMALL_STATE(116)] = 2535,
  [SMALL_STATE(117)] = 2549,
  [SMALL_STATE(118)] = 2563,
  [SMALL_STATE(119)] = 2577,
  [SMALL_STATE(120)] = 2591,
  [SMALL_STATE(121)] = 2606,
  [SMALL_STATE(122)] = 2615,
  [SMALL_STATE(123)] = 2626,
  [SMALL_STATE(124)] = 2637,
  [SMALL_STATE(125)] = 2648,
  [SMALL_STATE(126)] = 2659,
  [SMALL_STATE(127)] = 2670,
  [SMALL_STATE(128)] = 2681,
  [SMALL_STATE(129)] = 2692,
  [SMALL_STATE(130)] = 2703,
  [SMALL_STATE(131)] = 2714,
  [SMALL_STATE(132)] = 2733,
  [SMALL_STATE(133)] = 2744,
  [SMALL_STATE(134)] = 2755,
  [SMALL_STATE(135)] = 2764,
  [SMALL_STATE(136)] = 2775,
  [SMALL_STATE(137)] = 2784,
  [SMALL_STATE(138)] = 2800,
  [SMALL_STATE(139)] = 2816,
  [SMALL_STATE(140)] = 2824,
  [SMALL_STATE(141)] = 2832,
  [SMALL_STATE(142)] = 2840,
  [SMALL_STATE(143)] = 2852,
  [SMALL_STATE(144)] = 2860,
  [SMALL_STATE(145)] = 2876,
  [SMALL_STATE(146)] = 2884,
  [SMALL_STATE(147)] = 2892,
  [SMALL_STATE(148)] = 2900,
  [SMALL_STATE(149)] = 2908,
  [SMALL_STATE(150)] = 2916,
  [SMALL_STATE(151)] = 2924,
  [SMALL_STATE(152)] = 2932,
  [SMALL_STATE(153)] = 2948,
  [SMALL_STATE(154)] = 2956,
  [SMALL_STATE(155)] = 2972,
  [SMALL_STATE(156)] = 2988,
  [SMALL_STATE(157)] = 3004,
  [SMALL_STATE(158)] = 3011,
  [SMALL_STATE(159)] = 3024,
  [SMALL_STATE(160)] = 3037,
  [SMALL_STATE(161)] = 3047,
  [SMALL_STATE(162)] = 3057,
  [SMALL_STATE(163)] = 3067,
  [SMALL_STATE(164)] = 3077,
  [SMALL_STATE(165)] = 3087,
  [SMALL_STATE(166)] = 3097,
  [SMALL_STATE(167)] = 3107,
  [SMALL_STATE(168)] = 3117,
  [SMALL_STATE(169)] = 3127,
  [SMALL_STATE(170)] = 3137,
  [SMALL_STATE(171)] = 3147,
  [SMALL_STATE(172)] = 3157,
  [SMALL_STATE(173)] = 3167,
  [SMALL_STATE(174)] = 3177,
  [SMALL_STATE(175)] = 3187,
  [SMALL_STATE(176)] = 3197,
  [SMALL_STATE(177)] = 3207,
  [SMALL_STATE(178)] = 3217,
  [SMALL_STATE(179)] = 3225,
  [SMALL_STATE(180)] = 3235,
  [SMALL_STATE(181)] = 3245,
  [SMALL_STATE(182)] = 3255,
  [SMALL_STATE(183)] = 3265,
  [SMALL_STATE(184)] = 3275,
  [SMALL_STATE(185)] = 3285,
  [SMALL_STATE(186)] = 3295,
  [SMALL_STATE(187)] = 3305,
  [SMALL_STATE(188)] = 3315,
  [SMALL_STATE(189)] = 3325,
  [SMALL_STATE(190)] = 3335,
  [SMALL_STATE(191)] = 3345,
  [SMALL_STATE(192)] = 3355,
  [SMALL_STATE(193)] = 3365,
  [SMALL_STATE(194)] = 3375,
  [SMALL_STATE(195)] = 3385,
  [SMALL_STATE(196)] = 3395,
  [SMALL_STATE(197)] = 3405,
  [SMALL_STATE(198)] = 3415,
  [SMALL_STATE(199)] = 3425,
  [SMALL_STATE(200)] = 3435,
  [SMALL_STATE(201)] = 3445,
  [SMALL_STATE(202)] = 3455,
  [SMALL_STATE(203)] = 3462,
  [SMALL_STATE(204)] = 3467,
  [SMALL_STATE(205)] = 3472,
  [SMALL_STATE(206)] = 3477,
  [SMALL_STATE(207)] = 3482,
  [SMALL_STATE(208)] = 3489,
  [SMALL_STATE(209)] = 3494,
  [SMALL_STATE(210)] = 3501,
  [SMALL_STATE(211)] = 3506,
  [SMALL_STATE(212)] = 3513,
  [SMALL_STATE(213)] = 3520,
  [SMALL_STATE(214)] = 3527,
  [SMALL_STATE(215)] = 3534,
  [SMALL_STATE(216)] = 3539,
  [SMALL_STATE(217)] = 3546,
  [SMALL_STATE(218)] = 3551,
  [SMALL_STATE(219)] = 3556,
  [SMALL_STATE(220)] = 3563,
  [SMALL_STATE(221)] = 3568,
  [SMALL_STATE(222)] = 3573,
  [SMALL_STATE(223)] = 3578,
  [SMALL_STATE(224)] = 3583,
  [SMALL_STATE(225)] = 3588,
  [SMALL_STATE(226)] = 3593,
  [SMALL_STATE(227)] = 3598,
  [SMALL_STATE(228)] = 3603,
  [SMALL_STATE(229)] = 3610,
  [SMALL_STATE(230)] = 3615,
  [SMALL_STATE(231)] = 3622,
  [SMALL_STATE(232)] = 3629,
  [SMALL_STATE(233)] = 3636,
  [SMALL_STATE(234)] = 3640,
  [SMALL_STATE(235)] = 3644,
  [SMALL_STATE(236)] = 3648,
  [SMALL_STATE(237)] = 3652,
  [SMALL_STATE(238)] = 3656,
  [SMALL_STATE(239)] = 3660,
  [SMALL_STATE(240)] = 3664,
  [SMALL_STATE(241)] = 3668,
  [SMALL_STATE(242)] = 3672,
  [SMALL_STATE(243)] = 3676,
  [SMALL_STATE(244)] = 3680,
  [SMALL_STATE(245)] = 3684,
  [SMALL_STATE(246)] = 3688,
  [SMALL_STATE(247)] = 3692,
  [SMALL_STATE(248)] = 3696,
  [SMALL_STATE(249)] = 3700,
  [SMALL_STATE(250)] = 3704,
  [SMALL_STATE(251)] = 3708,
  [SMALL_STATE(252)] = 3712,
  [SMALL_STATE(253)] = 3716,
  [SMALL_STATE(254)] = 3720,
  [SMALL_STATE(255)] = 3724,
  [SMALL_STATE(256)] = 3728,
  [SMALL_STATE(257)] = 3732,
  [SMALL_STATE(258)] = 3736,
  [SMALL_STATE(259)] = 3740,
  [SMALL_STATE(260)] = 3744,
  [SMALL_STATE(261)] = 3748,
  [SMALL_STATE(262)] = 3752,
  [SMALL_STATE(263)] = 3756,
  [SMALL_STATE(264)] = 3760,
  [SMALL_STATE(265)] = 3764,
  [SMALL_STATE(266)] = 3768,
  [SMALL_STATE(267)] = 3772,
  [SMALL_STATE(268)] = 3776,
  [SMALL_STATE(269)] = 3780,
  [SMALL_STATE(270)] = 3784,
  [SMALL_STATE(271)] = 3788,
  [SMALL_STATE(272)] = 3792,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(268),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_reference, 3, 0, 12),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__column_reference, 3, 0, 12),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_reference, 5, 0, 18),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__column_reference, 5, 0, 18),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_text, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_text, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4, 0, 0),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 5, 0, 8),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 5, 0, 8),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4, 0, 8),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4, 0, 8),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_to_many, 3, 0, 13),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_to_many, 3, 0, 13),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_many_to_one, 3, 0, 13),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_many_to_one, 3, 0, 13),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_to_one, 3, 0, 13),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_to_one, 3, 0, 13),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_many_to_many, 3, 0, 13),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_many_to_many, 3, 0, 13),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_comment, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_comment, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 9, 0, 16),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 9, 0, 16),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 5, 0, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 5, 0, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4, 0, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 4, 0, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 5, 0, 5),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 5, 0, 5),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4, 0, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4, 0, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 4, 0, 5),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 4, 0, 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 4, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 4, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5, 0, 6),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 5, 0, 6),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 5, 0, 7),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 5, 0, 7),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, 0, 6),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, 0, 6),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 4, 0, 7),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 4, 0, 7),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 6, 0, 16),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 6, 0, 16),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 4, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 4, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 3, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 3, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 6, 0, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 6, 0, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_comment, 3, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_comment, 3, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 7, 0, 16),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 7, 0, 16),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 7, 0, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 7, 0, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 5, 0, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 5, 0, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 8, 0, 16),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 8, 0, 16),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_repeat1, 2, 0, 0),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indexes_repeat1, 2, 0, 0),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 2, 0, 9),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, 0, 9),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 2, 0, 10),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, 0, 10),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 2, 0, 0),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_group_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_group_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_group_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_group_repeat1, 2, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indexes, 4, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes, 4, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 14),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 14),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 3, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 3, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, 0, 15),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, 0, 15),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 4, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, 0, 9),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, 0, 9),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, 0, 10),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, 0, 10),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indexes, 3, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes, 3, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1, 0, 10),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 1, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_index, 3, 0, 19),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_index, 3, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_index, 4, 0, 19),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_index, 4, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_notes, 2, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 2, 0, 10),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_settings, 2, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_notes, 3, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_notes, 4, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_settings, 3, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_settings, 4, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_index, 5, 0, 19),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_composite_index, 5, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 2, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_group_row, 1, 0, 1),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_settings_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_settings_repeat1, 2, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variant_notes_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variant_notes_repeat1, 2, 0, 0),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_composite_index_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_composite_index_repeat1, 2, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_settings_repeat1, 2, 0, 11),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_settings_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_settings_repeat1, 2, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0),
  [611] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(251),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [618] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_reference, 3, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_alias, 2, 0, 4),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_column_setting, 1, 0, 17),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_composite_index_repeat1, 2, 0, 19),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_setting, 3, 0, 0),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_one_to_many, 2, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_many_to_one, 2, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_one_to_one, 2, 0, 0),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_many_to_many, 2, 0, 0),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name_setting, 3, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_type_setting, 3, 0, 0),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 3, 0, 11),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [727] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 3, 0, 0),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 4, 0, 11),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 4, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 2, 0, 0),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
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

TS_PUBLIC const TSLanguage *tree_sitter_dbml(void) {
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
